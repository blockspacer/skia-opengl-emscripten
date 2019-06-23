// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

#include "starboard/system.h"

 /// __TODO__
#include <iostream>
#include "starboard/directory.h"
#include "starboard/log.h"
#include "starboard/string.h"

bool SbSystemGetPath(SbSystemPathId path_id, char* out_path,
                     int path_size) {
    std::cout << "SbSystemGetPath 1 " << path_id << " " << out_path << " " << path_size << std::endl;
    if (!out_path || !path_size) {
        return false;
    }
    const int kPathSize = 512;//PATH_MAX;
    char path[kPathSize];
    path[0] = '\0';
    /// __TODO__
    if (SbStringConcat(path, "", kPathSize) >= kPathSize) {
        return false;
    }
    SbStringCopy(out_path, path, path_size);
    std::cout << "SbSystemGetPath 2 " << path_id << " " << out_path << " " << path_size << std::endl;
    return true;
}
