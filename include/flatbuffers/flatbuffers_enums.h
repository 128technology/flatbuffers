/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FLATBUFFERS_ENUMS_H_
#define FLATBUFFERS_ENUMS_H_

#include <type_traits>

namespace flatbuffers {

// code-generated enums will provide a specialization for this to true_type
template<typename T> struct IsEnum : std::false_type {};

// a common enum->name function called by the operator<<() that
// you can specialize per enum type to print something different
template<typename T>
const char* EnumName(const T e, const char *u="<unknown>") {
  return IsEnum<T>::EnumName(e, u);
}

}  // namespace flatbuffers

#endif  // FLATBUFFERS_ENUMS_H_
