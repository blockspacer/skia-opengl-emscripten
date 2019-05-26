// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_lookup_trie.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_LOOKUP_TRIE_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_LOOKUP_TRIE_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"

namespace blink {

CORE_EXPORT const AtomicString& lookupHTMLTag(const UChar* data, unsigned length);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_LOOKUP_TRIE_H_
