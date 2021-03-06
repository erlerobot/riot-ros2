// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef ROSIDL_GENERATOR_C__PRIMITIVES_ARRAY_FUNCTIONS_H_
#define ROSIDL_GENERATOR_C__PRIMITIVES_ARRAY_FUNCTIONS_H_

#include <stdbool.h>
#include <stddef.h>

#include "rosidl_generator_c/primitives_array.h"
#include "rosidl_generator_c/visibility_control.h"

#if __cplusplus
extern "C"
{
#endif

#define ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(STRUCT_NAME, TYPE_NAME) \
  ROSIDL_GENERATOR_C_PUBLIC \
  bool rosidl_generator_c__ ## STRUCT_NAME ## __Array__init( \
    rosidl_generator_c__ ## STRUCT_NAME ## __Array * array, size_t size); \
 \
  ROSIDL_GENERATOR_C_PUBLIC \
  void rosidl_generator_c__ ## STRUCT_NAME ## __Array__fini( \
    rosidl_generator_c__ ## STRUCT_NAME ## __Array * array);

// array functions for all primitive types
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(bool, bool)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(byte, uint8_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(char, char)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(float32, float)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(float64, double)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(int8, int8_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(uint8, uint8_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(int16, int16_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(uint16, uint16_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(int32, int32_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(uint32, uint32_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(int64, int64_t)
ROSIDL_GENERATOR_C__DECLARE_PRIMITIVE_ARRAY_FUNCTIONS(uint64, uint64_t)

#if __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__PRIMITIVES_ARRAY_FUNCTIONS_H_
