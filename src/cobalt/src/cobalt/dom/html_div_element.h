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

#ifndef COBALT_DOM_HTML_DIV_ELEMENT_H_
#define COBALT_DOM_HTML_DIV_ELEMENT_H_

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

class Document;

// The div element has no special meaning at all. It represents its children. It
// can be used with the class, lang, and title attributes to mark up semantics
// common to a group of consecutive elements.
//   https://www.w3.org/TR/html5/grouping-content.html#the-div-element
class HTMLDivElement : public HTMLElement {
 public:
  static const char kTagName[];

  explicit HTMLDivElement(Document* document)
      : HTMLElement(document, base::Token(kTagName))
{
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [em_node = &em_node_/*, inner_html = inner_html().c_str()*/](const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(em_node->isNull() || em_node->isUndefined());
      if(em_node)
      {
        //printf("Node::HTMLDivElement %s\n", inner_html);
        printf("Node::HTMLDivElement\n");
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
  scoped_refptr<HTMLDivElement> AsHTMLDivElement() override { return this; }

  DEFINE_WRAPPABLE_TYPE(HTMLDivElement);

 private:
  ~HTMLDivElement() override {}
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_HTML_DIV_ELEMENT_H_
