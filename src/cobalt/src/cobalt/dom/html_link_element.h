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

#ifndef COBALT_DOM_HTML_LINK_ELEMENT_H_
#define COBALT_DOM_HTML_LINK_ELEMENT_H_

#include <memory>
#include <string>
#include <vector>

#include "base/optional.h"
#include "base/threading/thread_checker.h"
#include "cobalt/cssom/style_sheet.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/url_utils.h"
#include "cobalt/loader/fetcher_factory.h"
#include "cobalt/loader/loader.h"
#include "cobalt/loader/text_decoder.h"

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

// The link element allows authors to link their document to other resources.
//   https://www.w3.org/TR/html5/document-metadata.html#the-link-element
class HTMLLinkElement : public HTMLElement {
 public:
  static const char kTagName[];
  static const std::vector<std::string> kSupportedRelValues;

  explicit HTMLLinkElement(Document* document)
      : HTMLElement(document, base::Token(kTagName))
{
  printf("Node::HTMLLinkElement create\n");

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  emCreateElementInBrowserThreadAndSetGUID("link");
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)

#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [
       em_node = &em_node_,
       value /// \note copyed data
      ]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      //DCHECK(em_node->isNull() || em_node->isUndefined());

      if(em_node && (em_node->isNull() || em_node->isUndefined()))
      {
        printf("Node::HTMLLinkElement\n");
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

  // Web API: HTMLLinkElement
  //
  std::string rel() const {
    return GetAttribute("rel").value_or("");
  }
  void set_rel(const std::string& value) {
    SetAttribute("rel", value);
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(em_node_guid_ == -1) {
    return;
  }

  auto taskCb
    = [
       em_node = &em_node_,
       value /// \note copyed data
      ]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(!em_node->isNull()
             && !em_node->isUndefined());
      if(em_node)
      {
        em_node->set("rel", value.c_str());
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
      true // async if threads enabled
    );
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  }

  std::string type() const { return GetAttribute("type").value_or(""); }
  void set_type(const std::string& value) {
    SetAttribute("type", value);
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(em_node_guid_ == -1) {
    return;
  }

  auto taskCb
    = [
       em_node = &em_node_,
       value /// \note copyed data
      ]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(!em_node->isNull()
             && !em_node->isUndefined());
      if(em_node)
      {
        em_node->set("type", value.c_str());
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
      true // async if threads enabled
    );
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  }

  std::string href() const { return GetAttribute("href").value_or(""); }
  void set_href(const std::string& value)
  {
    SetAttribute("href", value);
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  if(em_node_guid_ == -1) {
    return;
  }

  auto taskCb
    = [
       em_node = &em_node_,
       value /// \note copyed data
      ]
      (const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(!em_node->isNull()
             && !em_node->isUndefined());
      if(em_node)
      {
        em_node->set("href", value.c_str());
        // custom
        em_node->set("id", value.c_str());
        em_node->set("media", "screen,print");
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
      true // async if threads enabled
    );
#endif // defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  }

  base::Optional<std::string> cross_origin() const;
  void set_cross_origin(const base::Optional<std::string>& value);

  // Custom, not in any spec.
  //
  scoped_refptr<HTMLLinkElement> AsHTMLLinkElement() override { return this; }

  // From Node.
  void OnInsertedIntoDocument() override;
  void OnRemovedFromDocument() override;

  DEFINE_WRAPPABLE_TYPE(HTMLLinkElement);

 private:
  ~HTMLLinkElement() override {}

  void ResolveAndSetAbsoluteURL();

  // From the spec: HTMLLinkElement.
  void Obtain();

  void OnContentProduced(const loader::Origin& last_url_origin,
                         std::unique_ptr<std::string> content);
  void OnLoadingComplete(const base::Optional<std::string>& error);
  void OnSplashscreenLoaded(Document* document, const std::string& content);
  void OnStylesheetLoaded(Document* document, const std::string& content);
  void ReleaseLoader();

  // Add this element's style sheet to the style sheet vector.
  void CollectStyleSheet(cssom::StyleSheetVector* style_sheets) const override;

  // Thread checker ensures all calls to DOM element are made from the same
  // thread that it is created in.
  THREAD_CHECKER(thread_checker_);
  // The loader.
  std::unique_ptr<loader::Loader> loader_;

  // Absolute link url.
  GURL absolute_url_;

  // The style sheet associated with this element.
  scoped_refptr<cssom::StyleSheet> style_sheet_;

  // The origin of fetch request's final destination.
  loader::Origin fetched_last_url_origin_;

  // The request mode for the fetch request.
  loader::RequestMode request_mode_;
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_HTML_LINK_ELEMENT_H_
