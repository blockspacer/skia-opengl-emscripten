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

#include "starboard/common/socket.h"

#include <sys/socket.h>

#include "starboard/shared/win/socket_internal.h"

namespace sbposix = starboard::shared::posix;

bool SbSocketSetSendBufferSize(SbSocket socket, int32_t size) {
  return sbwin::SetIntegerSocketOption(socket, SOL_SOCKET, SO_SNDBUF,
                                         "SO_SNDBUF", size);
}
