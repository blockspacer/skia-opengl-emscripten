// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/parser/mathml_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/parser/mathml_tag_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_MATHML_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_MATHML_NAMES_H_

#include <memory>

#include "third_party/blink/renderer/core/dom/qualified_name.h"

namespace blink {

class MathMLQualifiedName : public QualifiedName { };

namespace mathml_names {

// Namespace
extern const WTF::AtomicString& kNamespaceURI;

// Tags
extern const blink::MathMLQualifiedName& kAnnotationXmlTag;
extern const blink::MathMLQualifiedName& kMalignmarkTag;
extern const blink::MathMLQualifiedName& kMathTag;
extern const blink::MathMLQualifiedName& kMglyphTag;
extern const blink::MathMLQualifiedName& kMiTag;
extern const blink::MathMLQualifiedName& kMnTag;
extern const blink::MathMLQualifiedName& kMoTag;
extern const blink::MathMLQualifiedName& kMsTag;
extern const blink::MathMLQualifiedName& kMtextTag;

// Attributes
extern const blink::QualifiedName& kDefinitionURLAttr;
extern const blink::QualifiedName& kEncodingAttr;

constexpr unsigned kTagsCount = 9;
std::unique_ptr<const MathMLQualifiedName*[]> GetTags();

constexpr unsigned kAttrsCount = 2;
std::unique_ptr<const QualifiedName*[]> GetAttrs();

void Init();

}  // namespace mathml_names
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_MATHML_NAMES_H_
