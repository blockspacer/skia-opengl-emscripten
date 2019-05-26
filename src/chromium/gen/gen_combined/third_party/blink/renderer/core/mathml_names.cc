// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_qualified_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/parser/mathml_attribute_names.json5
//   ../../third_party/blink/renderer/core/html/parser/mathml_tag_names.json5


#include "third_party/blink/renderer/core/mathml_names.h"

#include <memory>

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/static_constructors.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace mathml_names {

DEFINE_GLOBAL(AtomicString, kNamespaceURI);

// Tags

void* tag_storage[kTagsCount * ((sizeof(MathMLQualifiedName) + sizeof(void *) - 1) / sizeof(void *))];
const MathMLQualifiedName& kAnnotationXmlTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[0];
const MathMLQualifiedName& kMalignmarkTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[1];
const MathMLQualifiedName& kMathTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[2];
const MathMLQualifiedName& kMglyphTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[3];
const MathMLQualifiedName& kMiTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[4];
const MathMLQualifiedName& kMnTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[5];
const MathMLQualifiedName& kMoTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[6];
const MathMLQualifiedName& kMsTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[7];
const MathMLQualifiedName& kMtextTag = reinterpret_cast<MathMLQualifiedName*>(&tag_storage)[8];


std::unique_ptr<const MathMLQualifiedName*[]> GetTags() {
  auto tags = std::make_unique<const MathMLQualifiedName*[]>(kTagsCount);
  for (size_t i = 0; i < kTagsCount; ++i)
    tags[i] = reinterpret_cast<MathMLQualifiedName*>(&tag_storage) + i;
  return tags;
}

// Attributes

void* attr_storage[kAttrsCount * ((sizeof(QualifiedName) + sizeof(void *) - 1) / sizeof(void *))];

const QualifiedName& kDefinitionURLAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[0];
const QualifiedName& kEncodingAttr = reinterpret_cast<QualifiedName*>(&attr_storage)[1];

std::unique_ptr<const QualifiedName*[]> GetAttrs() {
  auto attrs = std::make_unique<const QualifiedName*[]>(kAttrsCount);
  for (size_t i = 0; i < kAttrsCount; ++i)
    attrs[i] = reinterpret_cast<QualifiedName*>(&attr_storage) + i;
  return attrs;
}


void Init() {
  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
    unsigned char is_tag;
    unsigned char is_attr;
  };

  // Namespace
  // Use placement new to initialize the globals.
  AtomicString ns_uri("http://www.w3.org/1998/Math/MathML");
  new ((void*)&kNamespaceURI) AtomicString(ns_uri);

  static const NameEntry kNames[] = {
    { "annotation-xml", 3437210, 14, 1, 0 },
    { "definitionURL", 5781331, 13, 0, 1 },
    { "encoding", 641915, 8, 0, 1 },
    { "malignmark", 8634190, 10, 1, 0 },
    { "math", 8182406, 4, 1, 0 },
    { "mglyph", 3316076, 6, 1, 0 },
    { "mi", 16514040, 2, 1, 0 },
    { "mn", 3612898, 2, 1, 0 },
    { "mo", 16096753, 2, 1, 0 },
    { "ms", 5264856, 2, 1, 0 },
    { "mtext", 16756693, 5, 1, 0 },
  };

  size_t tag_i = 0;
  size_t attr_i = 0;
  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    if (kNames[i].is_tag) {
      void* address = reinterpret_cast<MathMLQualifiedName*>(&tag_storage) + tag_i;
      QualifiedName::CreateStatic(address, impl, ns_uri);
      ++tag_i;
    }

    if (!kNames[i].is_attr)
      continue;
    void* address = reinterpret_cast<QualifiedName*>(&attr_storage) + attr_i;
    QualifiedName::CreateStatic(address, impl);
    ++attr_i;
  }
  DCHECK_EQ(tag_i, kTagsCount);
  DCHECK_EQ(attr_i, kAttrsCount);
}

}  // namespace mathml_names
}  // namespace blink
