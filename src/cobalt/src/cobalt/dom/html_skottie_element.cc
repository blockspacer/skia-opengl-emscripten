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

#include "cobalt/dom/html_skottie_element.h"

#include <algorithm>
#include <limits>
#include <memory>

#include "base/bind.h"
#include "base/compiler_specific.h"
#include "base/guid.h"
#include "base/lazy_instance.h"
#include "base/logging.h"
#include "base/message_loop/message_loop.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/user_log.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/dom/csp_delegate.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/html_element_context.h"
#include "starboard/double.h"
#include "base/strings/string_number_conversions.h"
#include "cobalt/dom/dom_settings.h"
#include "cobalt/dom/performance.h"
#include "cobalt/dom/window.h"
#include "cobalt/math/size_f.h"

namespace cobalt {
namespace dom {

// not in spec
const char HTMLSkottieElement::kTagName[] = "skottie";

HTMLSkottieElement::HTMLSkottieElement(Document* document)
    : HTMLElement(document, base::CobToken(kTagName)) {
    //: HTMLMediaElement(document, base::CobToken(kTagName)) {
  TRACE_EVENT0("cobalt::dom", "HTMLSkottieElement::HTMLSkottieElement()");
  printf("Created new HTMLSkottieElement for %s\n", src().c_str());
}

HTMLSkottieElement::~HTMLSkottieElement() {
  TRACE_EVENT0("cobalt::dom", "HTMLSkottieElement::~HTMLSkottieElement()");
}

uint32 HTMLSkottieElement::width() const {
  uint32 result = 0;
  std::string value_in_string = GetAttribute("width").value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid width attribute: \'" << value_in_string << "\'";
  }
  return result;
}

uint32 HTMLSkottieElement::height() const {
  uint32 result = 0;
  std::string value_in_string = GetAttribute("height").value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid height attribute: \'" << value_in_string << "\'";
  }
  return result;
}

const std::string HTMLSkottieElement::src()
{
  std::string value_in_string = GetAttribute("src").value_or("");
  return value_in_string;
}

math::SizeF HTMLSkottieElement::GetSize() const {
  return math::SizeF(width(), height());
}

#if defined(ENABLE_SKOTTIE)
SkMSec HTMLSkottieElement::GetSkottieTime() {
  return animation_time_;
}

sk_sp<skottie::Animation> HTMLSkottieElement::GetSkottieAnim() {
  // TODO
  if(!src().empty() && !animation) {
    skottie::Animation::Builder builder;
    animation = builder.makeFromFile(src().c_str());
    printf("Created new skottie Animation for %s\n", src().c_str());
  }
  /*if (animation_time_ == 0) {
    // Reset the animation time.
    animation_time_ = SkTime::GetMSecs();
  }*/
  const SkMSec tElapsed = SkTime::GetMSecs() - animation_time_;
  //EM_LOG("animate 9\n");
  const SkScalar duration = animation->duration() * 1000.0;
  //EM_LOG("animate 10\n");
  const double animPos = ::std::fmod(tElapsed, duration) / duration;
  //EM_LOG("animate 11\n");
  animation->seek(static_cast<SkScalar>(animPos));
  //animation_time_ = SkTime::GetMSecs();

  return animation;
}
#endif // ENABLE_SKOTTIE

/*cobalt::render_tree::SkottieNode::SetBoundsCB HTMLSkottieElement::GetSetBoundsCB() {
  // TODO
  printf("TODO: HTMLSkottieElement::GetSetBoundsCB\n");
  return
}*/

}  // namespace dom
}  // namespace cobalt
