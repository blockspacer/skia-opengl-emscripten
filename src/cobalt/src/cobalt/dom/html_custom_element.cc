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

#include "cobalt/dom/html_custom_element.h"

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
//const char HTMLCustomElement::kTagName[] = "Custom";

HTMLCustomElement::HTMLCustomElement(Document* document, const base::Token& token)
    //: HTMLElement(document, base::Token(kTagName)) {
    : HTMLElement(document, token) {
}

HTMLCustomElement::~HTMLCustomElement() {
}

/*cobalt::render_tree::CustomNode::SetBoundsCB HTMLCustomElement::GetSetBoundsCB() {
  // TODO
  printf("TODO: HTMLCustomElement::GetSetBoundsCB\n");
  return
}*/

}  // namespace dom
}  // namespace cobalt
