/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.server.common.infra.context;

import im.turms.server.common.infra.cluster.node.NodeType;
import im.turms.server.common.infra.logging.core.logger.Logger;
import im.turms.server.common.infra.logging.core.logger.LoggerFactory;
import im.turms.server.common.infra.property.TurmsPropertiesManager;
import im.turms.server.common.infra.property.env.common.ShutdownProperties;
import im.turms.server.common.infra.suggestion.OsConfigurationAdvisor;
import im.turms.server.common.infra.thread.NamedThreadFactory;
import im.turms.server.common.infra.thread.ThreadNameConst;
import io.lettuce.core.RedisException;
import lombok.Getter;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.info.BuildProperties;
import org.springframework.context.event.ContextClosedEvent;
import org.springframework.context.event.ContextRefreshedEvent;
import org.springframework.context.event.EventListener;
import org.springframework.core.env.Environment;
import org.springframework.stereotype.Component;
import reactor.core.publisher.Hooks;
import reactor.core.publisher.Mono;

import java.io.IOException;
import java.nio.file.Path;
import java.time.Duration;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;

/**
 * @author James Chen
 */
@Component
@Getter
public class TurmsApplicationContext {

    private static final Logger LOGGER = LoggerFactory.getLogger(TurmsApplicationContext.class);

    private static final String BUILD_INFO_PROPS_PATH = "classpath:META-INF/build-info.properties";
    private static final String DEFAULT_VERSION = "0.0.0";

    private boolean isClosing;

    private final Path home;
    private final String configDir;
    private final boolean isProduction;
    private final boolean isDevOrLocalTest;
    private final String activeEnvProfile;
    private final String version;

    private long shutdownJobTimeoutMillis = 0;
    private final TreeMap<JobShutdownOrder, ShutdownHook> shutdownHooks = new TreeMap<>();

    public TurmsApplicationContext(Environment environment,
                                   NodeType nodeType,
                                   @Autowired(required = false) BuildProperties buildProperties) {
        LoggerFactory.bindContext(this);

        String homeDir = nodeType == NodeType.SERVICE
                ? System.getenv("TURMS_SERVICE_HOME")
                : System.getenv("TURMS_GATEWAY_HOME");
        home = homeDir == null
                ? Path.of("").toAbsolutePath()
                : Path.of(homeDir).toAbsolutePath();

        // The property should be passed from "bin/run.sh"
        String configDir = System.getProperty("spring.config.location");
        if (configDir == null || configDir.isBlank()) {
            LOGGER.warn("The property \"spring.config.location\" is empty");
            configDir = "./config";
        }
        this.configDir = configDir;

        List<String> devEnvs = List.of("dev", "development",
                "local");
        List<String> localTestEnvs = List.of("test", "testing");
        List<String> testEnvs = List.of("qa", "stg", "uat",
                "quality", "staging",
                "demo");
        List<String> prodEnvs = List.of("prod", "production");
        String[] activeProfiles = environment.getActiveProfiles();

        activeEnvProfile = getActiveEnvProfile(activeProfiles, devEnvs, localTestEnvs, testEnvs, prodEnvs);
        isDevOrLocalTest = isInProfiles(devEnvs, activeProfiles) || isInProfiles(localTestEnvs, activeProfiles);
        // Prefer "isProduction" to be true to avoid getting trouble in production
        isProduction = !isDevOrLocalTest && !isInProfiles(testEnvs, activeProfiles);
        version = getVersion(isProduction, buildProperties);

        LOGGER.info("The local node with version {} is running in a {} environment",
                version,
                isProduction ? "production" : "non-production");

        setupErrorHandlerContext();
        printOsConfigurationSuggestions();
    }

    @EventListener(classes = ContextRefreshedEvent.class)
    public void handleContextRefreshedEvent(ContextRefreshedEvent event) {
//    public void handleContextRefreshedEvent(TurmsPropertiesManager propertiesManager) {
        TurmsPropertiesManager propertiesManager = event.getApplicationContext().getBean(TurmsPropertiesManager.class);
        ShutdownProperties properties = propertiesManager.getLocalProperties().getShutdown();
        shutdownJobTimeoutMillis = properties.getJobTimeoutMillis();
    }

    @EventListener(classes = ContextClosedEvent.class)
    public void handleContextClosedEvent() {
        isClosing = true;
        ExecutorService executor = Executors
                .newSingleThreadExecutor(new NamedThreadFactory(ThreadNameConst.SHUTDOWN, false));
        for (Map.Entry<JobShutdownOrder, ShutdownHook> orderAndJob : shutdownHooks.entrySet()) {
            JobShutdownOrder key = orderAndJob.getKey();
            String jobName = key.name();
            boolean isClosingLogProcessor = key == JobShutdownOrder.CLOSE_LOG_PROCESSOR;
            Future<Mono<Void>> shutdownFuture = executor.submit(() -> orderAndJob.getValue().run(shutdownJobTimeoutMillis));
            try {
                long time = System.currentTimeMillis();
                Mono<Void> mono = shutdownFuture.get(shutdownJobTimeoutMillis, TimeUnit.MILLISECONDS);
                if (mono == null) {
                    throw new IllegalArgumentException("The job result should not be null: " + jobName);
                }
                time = shutdownJobTimeoutMillis - (System.currentTimeMillis() - time);
                if (time <= 0) {
                    throw new TimeoutException();
                }
                mono.block(Duration.ofMillis(time));
            } catch (TimeoutException e) {
                shutdownFuture.cancel(true);
                if (!isClosingLogProcessor) {
                    LOGGER.error("Failed to run the shutdown job in time: " + jobName);
                }
            } catch (Exception e) {
                if (!isClosingLogProcessor) {
                    LOGGER.error("Caught an error while running the shutdown job: " + jobName, e);
                }
            }
        }
        executor.shutdownNow();
    }

    public synchronized void addShutdownHook(JobShutdownOrder order, ShutdownHook job) {
        if (shutdownHooks.containsKey(order)) {
            String formatted = "Failed to add a shutdown hook for \"%s\" because it has been registered"
                    .formatted(order.name());
            throw new IllegalStateException(formatted);
        }
        shutdownHooks.put(order, job);
    }

    private String getActiveEnvProfile(String[] activeProfiles, List<String>... knownEnvProfiles) {
        for (String profile : activeProfiles) {
            if (profile.endsWith("-latest")) {
                continue;
            }
            for (List<String> envProfiles : knownEnvProfiles) {
                for (String envProfile : envProfiles) {
                    if (profile.equalsIgnoreCase(envProfile)) {
                        return envProfile.toLowerCase();
                    }
                }
            }
        }
        return null;
    }

    private boolean isInProfiles(List<String> profiles, String[] activeProfiles) {
        for (String profile : profiles) {
            for (String activeProfile : activeProfiles) {
                if (profile.equalsIgnoreCase(activeProfile)) {
                    return true;
                }
            }
        }
        return false;
    }

    private String getVersion(boolean isProduction, BuildProperties buildProperties) {
        if (isProduction) {
            if (buildProperties == null) {
                throw new IllegalStateException(BUILD_INFO_PROPS_PATH + " must exist in production");
            }
            return buildProperties.getVersion();
        }
        if (buildProperties == null) {
            // We allow "build-info.properties" not exist in non-production
            // environments for a better development experience
            LOGGER.warn("Cannot find " + BUILD_INFO_PROPS_PATH +
                    ", fall back to the default version " + DEFAULT_VERSION +
                    " in non-production environments." +
                    " Fix it by running \"mvn compile\"");
            return DEFAULT_VERSION;
        }
        return buildProperties.getVersion();
    }

    private void setupErrorHandlerContext() {
        Hooks.onErrorDropped(t -> {
            // throwable is always the instance of ErrorCallbackNotImplemented
            Throwable cause = t.getCause();
            if (isReadFromForciblyClosedConnectionException(cause)) {
                // Ignore the exception in production because it should not have side effects,
                // and we cannot avoid the exception completely because of its root cause.
                // Log the exception only in non-production env, so we can try to optimize the code of
                // client to close the connection with a 4-way handshake on the client side
                if (!this.isProduction) {
                    LOGGER.warn("Failed to read from a forcibly closed connection", t);
                }
            } else {
                if (isClosing) {
                    if (isRedisConnectionClosedException(t) || isMongoConnectionClosedException(t)) {
                        return;
                    }
                }
                LOGGER.error("Unhandled exception", t);
            }
        });
    }

    /**
     * The exception occurs when a socket tries to read from a closed connection without a 4-way handshake
     */
    private boolean isReadFromForciblyClosedConnectionException(Throwable throwable) {
        if (throwable instanceof IOException) {
            StackTraceElement[] stackTrace = throwable.getStackTrace();
            if (stackTrace.length > 0) {
                StackTraceElement traceElement = stackTrace[0];
                return traceElement.getClassName().endsWith("SocketDispatcher") && traceElement.getMethodName().startsWith("read");
            }
        }
        return false;
    }

    private boolean isMongoConnectionClosedException(Throwable throwable) {
        Throwable cause = throwable.getCause();
        if (cause instanceof IllegalStateException) {
            String message = cause.getMessage();
            return "state should be: open".equals(message) || "state should be: server session pool is open".equals(message);
        }
        return false;
    }

    private boolean isRedisConnectionClosedException(Throwable throwable) {
        Throwable cause = throwable.getCause();
        return cause instanceof RedisException && "Connection closed".equals(cause.getMessage());
    }

    private void printOsConfigurationSuggestions() {
        List<String> suggestions = OsConfigurationAdvisor.getSuggestions();
        for (String suggestion : suggestions) {
            LOGGER.warn(suggestion);
        }
    }

}