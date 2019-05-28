// Copyright 2017 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_MEDIA_SESSION_DEFAULT_MEDIA_SESSION_CLIENT_H_
#define COBALT_MEDIA_SESSION_DEFAULT_MEDIA_SESSION_CLIENT_H_

#include <memory>

#include "cobalt/media_session/media_session_client.h"

namespace cobalt {
namespace media_session {

class DefaultMediaSessionClient : public MediaSessionClient {
 public:
  DefaultMediaSessionClient() {}
  ~DefaultMediaSessionClient() override {}

 private:
  void OnMediaSessionChanged() override {}
};

// static
std::unique_ptr<MediaSessionClient> MediaSessionClient::Create() {
  return std::unique_ptr<MediaSessionClient>(new DefaultMediaSessionClient());
}

}  // namespace media_session
}  // namespace cobalt

#endif  // COBALT_MEDIA_SESSION_DEFAULT_MEDIA_SESSION_CLIENT_H_
