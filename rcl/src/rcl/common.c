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

#if __cplusplus
extern "C"
{
#endif

#include "./common.h"  // NOLINT

#include <stdlib.h>

#if defined(WIN32)
# define WINDOWS_ENV_BUFFER_SIZE 2048
static char __env_buffer[WINDOWS_ENV_BUFFER_SIZE];
#endif  // defined(WIN32)

rcl_ret_t
rcl_impl_getenv(const char * env_name, const char ** env_value)
{
  RCL_CHECK_ARGUMENT_FOR_NULL(env_name, RCL_RET_INVALID_ARGUMENT);
  RCL_CHECK_ARGUMENT_FOR_NULL(env_value, RCL_RET_INVALID_ARGUMENT);
  *env_value = NULL;
#if !defined(WIN32)
  *env_value = getenv(env_name);
  if (*env_value == NULL) {
    *env_value = "";
  }
#else  // !defined(WIN32)
  size_t required_size;
  errno_t ret = getenv_s(&required_size, __env_buffer, sizeof(__env_buffer), env_name);
  if (ret != 0) {
    RCL_SET_ERROR_MSG("value in env variable too large to read in");
    return RCL_RET_ERROR;
  }
  __env_buffer[WINDOWS_ENV_BUFFER_SIZE - 1] = '\0';
  *env_value = __env_buffer;
#endif  // !defined(WIN32)
  return RCL_RET_OK;
}

#if __cplusplus
}
#endif
