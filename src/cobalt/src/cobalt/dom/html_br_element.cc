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

#include "cobalt/dom/html_br_element.h"

#include "cobalt/dom/document.h"

namespace cobalt {
namespace dom {

// static
const char HTMLBRElement::kTagName[] = "br";

HTMLBRElement::HTMLBRElement(Document* document)
    : HTMLElement(document, base::Token(kTagName))
{
#if 0 // TODO: use lock-free Sequences to post tasks on main browser thread https://chromium.googlesource.com/chromium/src/+/master/docs/threading_and_tasks.md#Using-Sequences-Instead-of-Locks
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(true) {
    em_node_
      = emscripten::val::global("document").call<emscripten::val>(
          "createElement", emscripten::val("br"));
  }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0
}

}  // namespace dom
}  // namespace cobalt
