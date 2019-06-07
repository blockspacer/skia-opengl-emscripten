/*
 * Copyright 2017 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_BROWSER_MEMORY_SETTINGS_PRETTY_PRINT_H_
#define COBALT_BROWSER_MEMORY_SETTINGS_PRETTY_PRINT_H_

#include <string>
#include <vector>

#include "cobalt/browser/memory_settings/memory_settings.h"
#include "starboard/types.h"

namespace cobalt {
namespace browser {
namespace memory_settings {

// Generates a table, ie:
//
//   NAME                                   VALUE                   TYPE   SOURCE
//   _______________________________________________________________________________
//  |                                      |             |         |      |         |
//  | image_cache_size_in_bytes            |    33554432 | 32.0 MB |  GPU | AutoSet |
//  |______________________________________|_____________|_________|______|_________|
//  |                                      |             |         |      |         |
//  | javascript_gc_threshold_in_bytes     |     8388608 |  8.0 MB |  CPU |   Build |
//  |______________________________________|_____________|_________|______|_________|
//  |                                      |             |         |      |         |
//  | misc_cobalt_engine_size_in_bytes     |    33554432 | 32.0 MB |  CPU |   Build |
//  |______________________________________|_____________|_________|______|_________|
//  |                                      |             |         |      |         |
//  | skia_atlas_texture_dimensions        | 4096x8192x2 | 64.0 MB |  GPU |   Build |
//  |______________________________________|_____________|_________|______|_________|
//  |                                      |             |         |      |         |
//  | skia_cache_size_in_bytes             |     4194304 |  4.0 MB |  GPU |   Build |
//  |______________________________________|_____________|_________|______|_________|
//  |                                      |             |         |      |         |
//  | software_surface_cache_size_in_bytes |         N/A |     N/A |  N/A |     N/A |
//  |______________________________________|_____________|_________|______|_________|
std::string GeneratePrettyPrintTable(
    bool use_color_ascii,
    const std::vector<const MemorySetting*>& memory_settings);

// Generates a table, ie:
//
//   TYPE   TOTAL      SETTINGS
//   ____________________________
//  |      |          |          |
//  | CPU  | 256.0 MB |  40.0 MB |
//  |______|__________|__________|
//  |      |          |          |
//  | GPU  | 768.0 MB | 100.0 MB |
//  |______|__________|__________|
// When optional total_gpu_memory is null then the the value in the output
// table will be <UNKNOWN>.
std::string GenerateMemoryTable(bool use_color_ascii,
                                const IntSetting& total_cpu_memory,
                                const IntSetting& total_gpu_memory,
                                int64_t settings_cpu_consumption,
                                int64_t settings_gpu_consumption);

// Example:
//   ToMegabyteString(1 * 1024 * 1024, 1)
// Returns: "1.0MB".
std::string ToMegabyteString(int64_t bytes, int decimal_places);

// Takes in a body such as "aaaabbbb" and generates a border around it:
// MakeBoarder("aaaabbbb", '*')
// Returns:
//   ************
//   * aaaabbbb *
//   ************
// Works with multiple lines.
std::string MakeBorder(const std::string& body, const char border_ch);

// Stringify's the MemorySetting::source_type() to a readable string value.
std::string StringifySourceType(const MemorySetting& setting);

}  // namespace memory_settings
}  // namespace browser
}  // namespace cobalt

#endif  // COBALT_BROWSER_MEMORY_SETTINGS_PRETTY_PRINT_H_
