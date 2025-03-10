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

package im.turms.server.common.infra.lang;

import java.util.ArrayList;
import java.util.List;

/**
 * @author James Chen
 */
public class StrJoiner {

    private final List<CharSequence> elements;
    private int charCount;

    public StrJoiner(int size) {
        this.elements = new ArrayList<>(size);
    }

    @Override
    public String toString() {
        StringBuilder builder = new StringBuilder(charCount);
        for (CharSequence element : elements) {
            builder.append(element);
        }
        return builder.toString();
    }

    public StrJoiner add(String element) {
        elements.add(element);
        charCount += element.length();
        return this;
    }

}
