// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#include "starboard/common/string.h"

#include "starboard/shared/starboard/lcat.h"

int SbStringConcatWide(wchar_t* out_destination,
                       const wchar_t* source,
                       int destination_size) {
  return starboard::shared::starboard::lcatT<wchar_t>(out_destination, source,
                                                      destination_size);
}
