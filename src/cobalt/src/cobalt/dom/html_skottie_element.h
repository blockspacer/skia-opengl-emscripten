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

#pragma once

#include <memory>
#include <string>

#include "base/memory/ref_counted.h"
#include "base/optional.h"
#include "base/threading/thread_checker.h"
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
#include "base/timer/timer.h"
#endif
#include "cobalt/dom/event_queue.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/time_ranges.h"
#include "cobalt/loader/image/image_cache.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/script/typed_arrays.h"
#include "url/gurl.h"

#include "cobalt/dom/html_media_element.h"

#include "cobalt/render_tree/skottie_node.h"

namespace cobalt {
namespace dom {

// not in spec
class HTMLSkottieElement : public HTMLElement/*, public HTMLMediaElement*/ {
 public:

  static const char kTagName[];

  explicit HTMLSkottieElement(Document* document);
  ~HTMLSkottieElement() override;

  // Custom, not in any spec.
  scoped_refptr<HTMLSkottieElement> AsHTMLSkottieElement() override { return this; }

  //cobalt::render_tree::SkottieNode::GetSkottieAnimCB GetSkottieAnim();
  sk_sp<skottie::Animation> GetSkottieAnim();

  //cobalt::render_tree::SkottieNode::SetBoundsCB GetSetBoundsCB();

  math::SizeF GetSize() const;

  uint32 width() const;

  uint32 height() const;

  const std::string src();

  sk_sp<skottie::Animation> animation;

  DISALLOW_COPY_AND_ASSIGN(HTMLSkottieElement);
};

}  // namespace dom
}  // namespace cobalt
