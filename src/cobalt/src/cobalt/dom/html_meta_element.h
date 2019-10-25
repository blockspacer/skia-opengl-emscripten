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

#ifndef COBALT_DOM_HTML_META_ELEMENT_H_
#define COBALT_DOM_HTML_META_ELEMENT_H_

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

// The meta element allows authors to meta their document to other resources.
//   https://www.w3.org/TR/html5/document-metadata.html#the-meta-element
class HTMLMetaElement : public HTMLElement {
 public:
  static const char kTagName[];

  explicit HTMLMetaElement(Document* document)
      : HTMLElement(document, base::Token(kTagName))
{
#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [em_node = &em_node_](const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      //DCHECK(em_node->isNull() || em_node->isUndefined());

      if(em_node && (em_node->isNull() || em_node->isUndefined()))
      {
        printf("Node::HTMLMetaElement\n");
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

  // Web API: HTMLMetaElement
  //
  std::string name() const { return GetAttribute("name").value_or(""); }
  void set_name(const std::string& value) { SetAttribute("name", value); }

  std::string http_equiv() const {
    return GetAttribute("http-equiv").value_or("");
  }
  void set_http_equiv(const std::string& value) {
    SetAttribute("http-equiv", value);
  }

  std::string content() const { return GetAttribute("content").value_or(""); }
  void set_content(const std::string& value) { SetAttribute("content", value); }

  // Custom, not in any spec.
  //
  scoped_refptr<HTMLMetaElement> AsHTMLMetaElement() override { return this; }

  // From Node.
  void OnInsertedIntoDocument() override;

  DEFINE_WRAPPABLE_TYPE(HTMLMetaElement);

 private:
  ~HTMLMetaElement() override {}

  bool IsDescendantOfHeadElement() const;
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_HTML_META_ELEMENT_H_
