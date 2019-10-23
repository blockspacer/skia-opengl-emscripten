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

#ifndef COBALT_DOM_HTML_HEAD_ELEMENT_H_
#define COBALT_DOM_HTML_HEAD_ELEMENT_H_

#include <string>

#include "cobalt/dom/html_element.h"

#if defined(OS_EMSCRIPTEN)
#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>
#endif // OS_EMSCRIPTEN

namespace cobalt {
namespace dom {

class Document;

// The head element represents a collection of metadata for the Document.
//   https://www.w3.org/TR/html5/document-metadata.html#the-head-element
class HTMLHeadElement : public HTMLElement {
 public:
  static const char kTagName[];

  explicit HTMLHeadElement(Document* document)
      : HTMLElement(document, base::Token(kTagName))
{
#if 0 // TODO: use lock-free Sequences to post tasks on main browser thread https://chromium.googlesource.com/chromium/src/+/master/docs/threading_and_tasks.md#Using-Sequences-Instead-of-Locks
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(true) {
    em_node_
      = emscripten::val::global("document").call<emscripten::val>(
          "createElement", emscripten::val("head"));
  }
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
#endif // 0
}

  // Custom, not in any spec.
  scoped_refptr<HTMLHeadElement> AsHTMLHeadElement() override { return this; }

  DEFINE_WRAPPABLE_TYPE(HTMLHeadElement);

 private:
  ~HTMLHeadElement() override {}
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_HTML_HEAD_ELEMENT_H_
