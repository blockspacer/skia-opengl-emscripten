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

#include "cobalt/dom/media_query_list.h"

#include <limits>

#include "cobalt/cssom/css_parser.h"
#include "cobalt/cssom/media_query.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/math/safe_integer_conversions.h"
#include "cobalt/math/size.h"

using cobalt::cssom::ViewportSize;

namespace cobalt {
namespace dom {

MediaQueryList::MediaQueryList(
    const scoped_refptr<cssom::MediaList>& media_list,
    const scoped_refptr<Screen>& screen)
    : media_list_(media_list), screen_(screen) {}

std::string MediaQueryList::media() const {
  return media_list_ ? media_list_->media_text() : std::string();
}

bool MediaQueryList::matches() const {
  if (!media_list_ || !screen_) {
    return false;
  }
  ViewportSize viewport(math::ToRoundedInt(screen_->avail_width()),
                        math::ToRoundedInt(screen_->avail_height()),
                        screen_->diagonal_inches());
  return media_list_->EvaluateConditionValue(viewport);
}

void MediaQueryList::TraceMembers(script::Tracer* tracer) {
  tracer->Trace(media_list_);
  tracer->Trace(screen_);
}

MediaQueryList::~MediaQueryList() {}

}  // namespace dom
}  // namespace cobalt
