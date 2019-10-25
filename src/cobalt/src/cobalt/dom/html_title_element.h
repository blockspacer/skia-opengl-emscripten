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

#ifndef COBALT_DOM_HTML_TITLE_ELEMENT_H_
#define COBALT_DOM_HTML_TITLE_ELEMENT_H_

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

// The title element represents the document's title or name. Authors should use
// titles that identify their documents even when they are used out of context,
// for example in a user's history or bookmarks, or in search results. The
// document's title is often different from its first heading, since the first
// heading does not have to stand alone when taken out of context.
//   https://www.w3.org/TR/html5/document-metadata.html#the-title-element
class HTMLTitleElement : public HTMLElement {
 public:
  static const char kTagName[];

  explicit HTMLTitleElement(Document* document)
      : HTMLElement(document, base::Token(kTagName))
{
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  setEmNodeAsTitle();
  DCHECK(isEmNodeTitle());
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [em_node = &em_node_](const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      //DCHECK(em_node->isNull() || em_node->isUndefined());

      if(em_node && (em_node->isNull() || em_node->isUndefined()))
      {
        printf("Node::HTMLTitleElement\n");
        (*em_node)
          = emscripten::val::global("document").call<emscripten::val>(
              "createElement", emscripten::val("div"));
      } else {
        // NOTIMPLEMENTED_LOG_ONCE();
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
#endif // 0
}

  // Custom, not in any spec.
  scoped_refptr<HTMLTitleElement> AsHTMLTitleElement() override { return this; }

  DEFINE_WRAPPABLE_TYPE(HTMLTitleElement);

 private:
  ~HTMLTitleElement() override {}
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_HTML_TITLE_ELEMENT_H_
