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

package im.turms.server.common.infra.property;

import im.turms.server.common.infra.validation.ValidCron;
import lombok.SneakyThrows;
import org.springframework.scheduling.support.CronExpression;

import javax.annotation.Nullable;
import javax.validation.constraints.Max;
import javax.validation.constraints.Min;
import java.lang.reflect.Field;
import java.util.LinkedList;
import java.util.List;

import static im.turms.server.common.infra.property.TurmsPropertiesInspector.getConstraints;
import static im.turms.server.common.infra.property.TurmsPropertiesInspector.getFields;
import static im.turms.server.common.infra.property.TurmsPropertiesInspector.isNestedProperty;

/**
 * @author James Chen
 */
public class TurmsPropertiesValidator {

    private TurmsPropertiesValidator() {
    }

    /**
     * @implNote We don't use "hibernate-validator" because it has a terrible performance
     */
    @Nullable
    public static InvalidPropertyException validate(TurmsProperties properties) {
        List<String> errorMessages = validateProperties(properties);
        if (errorMessages.isEmpty()) {
            return null;
        }
        InvalidPropertyException root = new InvalidPropertyException("The properties contain invalid properties");
        for (String message : errorMessages) {
            root.addSuppressed(new InvalidPropertyException(message));
        }
        return root;
    }

    private static List<String> validateProperties(TurmsProperties properties) {
        List<String> errorMessages = new LinkedList<>();
        validateProperties(properties, errorMessages);
        return errorMessages;
    }

    @SneakyThrows
    private static void validateProperties(Object properties, List<String> errorMessages) {
        List<Field> fields = getFields(properties.getClass());
        for (Field field : fields) {
            if (isNestedProperty(field)) {
                Object nestedProperties = field.get(properties);
                validateProperties(nestedProperties, errorMessages);
            } else {
                validateProperty(properties, field, errorMessages);
            }
        }
    }

    @SneakyThrows
    private static void validateProperty(Object properties, Field field, List<String> errorMessages) {
        PropertyConstraints constraints = getConstraints(field);
        Min min = constraints.min();
        Max max = constraints.max();
        ValidCron cron = constraints.validCron();
        if (min == null && max == null && cron == null) {
            return;
        }
        Object value = field.get(properties);
        if (cron != null) {
            String str = (String) value;
            if (!CronExpression.isValidExpression(str)) {
                String message = "The property \"" + field.getName() + "\" has an invalid cron \"" + str + "\"";
                errorMessages.add(message);
            }
        } else {
            Number number = (Number) value;
            if (min != null && min.value() > number.longValue()) {
                String message = "The property \"" + field.getName() + "\" must be greater than or equal to " + min.value();
                errorMessages.add(message);
            }
            if (max != null && max.value() < number.longValue()) {
                String message = "The property \"" + field.getName() + "\" must be less than or equal to " + max.value();
                errorMessages.add(message);
            }
        }
    }

}
