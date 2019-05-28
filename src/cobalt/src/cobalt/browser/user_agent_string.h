// Copyright 2018 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_BROWSER_USER_AGENT_STRING_H_
#define COBALT_BROWSER_USER_AGENT_STRING_H_

#include <string>

#include "base/optional.h"

namespace cobalt {
namespace browser {

struct UserAgentPlatformInfo {
  UserAgentPlatformInfo() : device_type(kSbSystemDeviceTypeUnknown) {}

  std::string starboard_version;
  std::string os_name_and_version;
  base::Optional<std::string> original_design_manufacturer;
  SbSystemDeviceType device_type;
  base::Optional<std::string> chipset_model_number;
  base::Optional<std::string> model_year;
  base::Optional<std::string> firmware_version;
  base::Optional<std::string> brand;
  base::Optional<std::string> model;
  std::string aux_field;
  base::Optional<SbSystemConnectionType> connection_type;
  std::string javascript_engine_version;
  std::string rasterizer_type;

  std::string cobalt_version;
  std::string cobalt_build_version_number;
  std::string build_configuration;
};

// Function that will query Starboard and populate a UserAgentPlatformInfo
// structure based on those results.  This is de-coupled from
// CreateUserAgentString() so that the common logic in CreateUserAgentString()
// can be easily unit tested.
UserAgentPlatformInfo GetUserAgentPlatformInfoFromSystem();

// This function is deterministic and non-dependent on global variables and
// state.  It is dependent only on |platform_info|.
std::string CreateUserAgentString(const UserAgentPlatformInfo& platform_info);

}  // namespace browser
}  // namespace cobalt

#endif  // COBALT_BROWSER_USER_AGENT_STRING_H_
