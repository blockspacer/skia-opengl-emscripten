// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_factory.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/aria_properties.json5
//   ../../third_party/blink/renderer/core/html/html_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_FACTORY_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_FACTORY_H_

#include "third_party/blink/renderer/core/dom/create_element_flags.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"

namespace blink {

class Document;
class HTMLElement;

class HTMLElementFactory {
 public:
  // If |local_name| is unknown, nullptr is returned.
  static HTMLElement* Create(
      const AtomicString& local_name,
      Document&,
      const CreateElementFlags flags);
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_FACTORY_H_
