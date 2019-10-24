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

#include "cobalt/dom/character_data.h"

#include "cobalt/dom/document.h"
#include "cobalt/dom/mutation_reporter.h"

namespace cobalt {
namespace dom {

CharacterData::CharacterData(Document* document, const base::StringPiece& data)
    : Node(document), data_(data.begin(), data.end())
{
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [em_node = &em_node_](const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      DCHECK(em_node->isNull() || em_node->isUndefined());
      if(em_node)
      {
        printf("Node::CharacterData\n");
        (*em_node)
          = emscripten::val::global("document")
            .call<emscripten::val>(
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

void CharacterData::set_data(const std::string& data) {
  MutationReporter mutation_reporter(this, GatherInclusiveAncestorsObservers());
  mutation_reporter.ReportCharacterDataMutation(data_);
  data_ = data;

  InvalidateLayoutBoxesOfNodeAndAncestors();
  Document* document = node_document();
  if (document) {
    document->OnDOMMutation();
  }
}

}  // namespace dom
}  // namespace cobalt
