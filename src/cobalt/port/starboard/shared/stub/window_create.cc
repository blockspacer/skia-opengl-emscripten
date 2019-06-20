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

#include "starboard/window.h"

// TODO: move to "starboard/shared/emscripten/window_internal.h"
//#if defined(__EMSCRIPTEN__)
SbWindowPrivate::SbWindowPrivate(const SbWindowOptions* options)
{
    width = options->size.width;
    height = options->size.height;
    video_pixel_ratio = options->size.video_pixel_ratio;
}

SbWindowPrivate:: ~SbWindowPrivate()
{}

SbWindowPrivateEmscripten::SbWindowPrivateEmscripten(const SbWindowOptions* options)
    : SbWindowPrivate(options)
{}

SbWindowPrivateEmscripten:: ~SbWindowPrivateEmscripten()
{}
//#endif

SbWindow SbWindowCreate(const SbWindowOptions* options) {
//#if defined(__EMSCRIPTEN__)
    SbWindow window = new SbWindowPrivateEmscripten(options);
    return window;
//#endif
///  return kSbWindowInvalid;
}
