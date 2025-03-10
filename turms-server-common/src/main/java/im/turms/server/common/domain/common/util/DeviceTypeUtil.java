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

package im.turms.server.common.domain.common.util;

import im.turms.server.common.access.client.dto.constant.DeviceType;
import im.turms.server.common.infra.lang.BitUtil;
import org.eclipse.collections.api.map.primitive.ByteObjectMap;
import org.eclipse.collections.api.map.primitive.MutableByteObjectMap;
import org.eclipse.collections.impl.factory.primitive.ByteObjectMaps;

import javax.annotation.Nullable;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.Set;
import java.util.stream.Collectors;

/**
 * @author James Chen
 */
public final class DeviceTypeUtil {

    public static final DeviceType[] ALL_DEVICE_TYPES = DeviceType.values();
    public static final DeviceType[] ALL_AVAILABLE_DEVICE_TYPES = Arrays.stream(ALL_DEVICE_TYPES)
            .filter(deviceType -> deviceType != DeviceType.UNRECOGNIZED)
            .toArray(DeviceType[]::new);
    public static final Set<DeviceType> ALL_AVAILABLE_DEVICE_TYPES_SET = Arrays.stream(ALL_AVAILABLE_DEVICE_TYPES)
            .collect(Collectors.toSet());

    private static final int DEVICE_TYPE_COUNT = ALL_DEVICE_TYPES.length;

    // No need to use volatile or CAS
    private static ByteObjectMap<Set<DeviceType>> byteToDeviceTypes = ByteObjectMaps.immutable.empty();

    static {
        if (DEVICE_TYPE_COUNT > Byte.SIZE) {
            throw new IllegalStateException("Too many device types to support. Maximum supported device types: " + Byte.SIZE);
        }
    }

    private DeviceTypeUtil() {
    }

    @Nullable
    public static DeviceType byte2DeviceType(byte deviceTypesByte) {
        for (int i = 0; i < DEVICE_TYPE_COUNT; i++) {
            if (BitUtil.isBitSet(deviceTypesByte, i)) {
                return ALL_DEVICE_TYPES[i];
            }
        }
        return null;
    }

    public static Set<DeviceType> byte2DeviceTypes(byte deviceTypesByte) {
        Set<DeviceType> deviceTypes = byteToDeviceTypes.get(deviceTypesByte);
        if (deviceTypes != null) {
            return deviceTypes;
        }
        deviceTypes = byte2DeviceTypes0(deviceTypesByte);
        MutableByteObjectMap<Set<DeviceType>> map = ByteObjectMaps.mutable.withAll(byteToDeviceTypes);
        map.put(deviceTypesByte, deviceTypes);
        byteToDeviceTypes = map;
        return deviceTypes;
    }

    public static byte deviceType2Byte(DeviceType deviceType) {
        validDeviceType(deviceType);
        return (byte) (1 << deviceType.getNumber());
    }

    public static byte deviceTypes2Byte(Set<DeviceType> deviceTypes) {
        if (deviceTypes == null || deviceTypes.isEmpty()) {
            return 0;
        }
        byte deviceTypesByte = 0;
        for (DeviceType deviceType : deviceTypes) {
            validDeviceType(deviceType);
            // e.g.
            // The first device type (0) -> 0000 0001
            // The last device type (5) -> 0001 0000
            deviceTypesByte |= 1 << deviceType.getNumber();
        }
        return deviceTypesByte;
    }

    public static void validDeviceType(DeviceType deviceType) {
        if (deviceType == DeviceType.UNRECOGNIZED) {
            throw new IllegalArgumentException("The device type must not be UNRECOGNIZED");
        }
    }

    private static Set<DeviceType> byte2DeviceTypes0(byte deviceTypesByte) {
        Set<DeviceType> deviceTypes = EnumSet.noneOf(DeviceType.class);
        for (int i = 0; i < DEVICE_TYPE_COUNT; i++) {
            if (BitUtil.isBitSet(deviceTypesByte, i)) {
                deviceTypes.add(ALL_DEVICE_TYPES[i]);
            }
        }
        return deviceTypes;
    }

}
