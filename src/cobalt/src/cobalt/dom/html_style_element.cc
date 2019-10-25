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

#include "cobalt/dom/html_style_element.h"

#include <string>

#include "cobalt/cssom/css_parser.h"
#include "cobalt/dom/csp_delegate.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/html_element_context.h"

namespace cobalt {
namespace dom {

// static
const char HTMLStyleElement::kTagName[] = "style";

HTMLStyleElement::HTMLStyleElement(Document* document)
    : HTMLElement(document, base::Token(kTagName)),
      is_parser_inserted_(false),
      inline_style_location_(GetSourceLocationName(), 1, 1)
{
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  emCreateElementInBrowserThreadAndSetGUID("style");
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
        printf("Node::HTMLStyleElement\n");
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

void HTMLStyleElement::OnInsertedIntoDocument() {
  HTMLElement::OnInsertedIntoDocument();
  if (!is_parser_inserted_) {
    Process();
  }
}

void HTMLStyleElement::OnRemovedFromDocument() {
  HTMLElement::OnRemovedFromDocument();

  if (style_sheet_) {
    Document* document = node_document();
    if (document) {
      document->OnStyleSheetsModified();
    }
  }
}

void HTMLStyleElement::OnParserStartTag(
    const base::SourceLocation& opening_tag_location) {
  inline_style_location_ = opening_tag_location;
  ++inline_style_location_.column_number;  // CSS code starts after ">".
  is_parser_inserted_ = true;
}

void HTMLStyleElement::OnParserEndTag() { Process(); }

scoped_refptr<HTMLStyleElement> HTMLStyleElement::AsHTMLStyleElement() {
  return this;
}

void HTMLStyleElement::Process() {
  Document* document = node_document();

  // If the document has no browsing context, do not parse or apply the style
  // sheet.
  if (!document->html_element_context()) {
    return;
  }

#if defined(ENABLE_COBALT_CSP)
  CspDelegate* csp_delegate = document->csp_delegate();
  // If the style element has a valid nonce, we always permit it.
  const bool bypass_csp = csp_delegate->IsValidNonce(
      CspDelegate::kStyle, GetAttribute("nonce").value_or(""));
#endif

  base::Optional<std::string> content = text_content();
  const std::string& text = content.value_or(base::EmptyString());
#if defined(ENABLE_COBALT_CSP)
  if (bypass_csp || text.empty() ||
      csp_delegate->AllowInline(CspDelegate::kStyle, inline_style_location_,
                                text))
#endif
                                {
    scoped_refptr<cssom::CSSStyleSheet> css_style_sheet =
        document->html_element_context()->css_parser()->ParseStyleSheet(
            text, inline_style_location_);
    css_style_sheet->SetLocationUrl(GURL(inline_style_location_.file_path));
    css_style_sheet->SetOriginClean(true);
    style_sheet_ = css_style_sheet.get();
    document->OnStyleSheetsModified();
  }
#if defined(ENABLE_COBALT_CSP)
  else {
    // Report a violation.
    PostToDispatchEventName(FROM_HERE, base::Tokens::error());
  }
#endif
}

void HTMLStyleElement::CollectStyleSheet(
    cssom::StyleSheetVector* style_sheets) const {
  if (style_sheet_) {
    style_sheets->push_back(style_sheet_);
  }
}

}  // namespace dom
}  // namespace cobalt
