// Copyright 2014 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_DOM_HTML_UNKNOWN_ELEMENT_H_
#define COBALT_DOM_HTML_UNKNOWN_ELEMENT_H_

#include <string>

#include "cobalt/dom/html_element.h"

#if defined(OS_EMSCRIPTEN)
#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#endif // OS_EMSCRIPTEN

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#include "cobalt/dom/html5_native/html5_elem_queue.h"
#endif

namespace cobalt {
namespace dom {

// The HTMLUnknownElement interface must be used for HTML elements that are not
// defined by any applicable specifications.
//   https://www.w3.org/TR/html5/dom.html#htmlunknownelement
class HTMLUnknownElement : public HTMLElement {
 public:
  HTMLUnknownElement(Document* document, base::Token tag_name)
      : HTMLElement(document, tag_name)
{
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [em_node = &em_node_](const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(em_node->isNull() || em_node->isUndefined());
      if(em_node)
      {
        printf("Node::HTMLUnknownElement\n");
        (*em_node)
          = emscripten::val::global("document").call<emscripten::val>(
              "createElement", emscripten::val("div"));
      } else {
        NOTIMPLEMENTED_LOG_ONCE();
      }
    };

  html_native::NativeHTMLTaskCbParams cbParams{1,2};

  html_native::GlobalHTML5TaskQueue::getInstance()->
    scheduleTaskInMainThread(
      new html_native::NativeHTMLTaskParams{
        std::move(taskCb),
        std::move(cbParams)
      },
      true
    );
#endif
}

  // Custom, not in any spec.
  //
  // From HTMLElement.
  scoped_refptr<HTMLUnknownElement> AsHTMLUnknownElement() override {
    return this;
  }

  DEFINE_WRAPPABLE_TYPE(HTMLUnknownElement);

 private:
  ~HTMLUnknownElement() override {}
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_HTML_UNKNOWN_ELEMENT_H_
