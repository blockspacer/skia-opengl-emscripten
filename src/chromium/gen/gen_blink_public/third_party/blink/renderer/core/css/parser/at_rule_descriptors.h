// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PARSER_AT_RULE_DESCRIPTORS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PARSER_AT_RULE_DESCRIPTORS_H_

#include "third_party/blink/renderer/core/css/css_property_names.h"
#include "third_party/blink/renderer/platform/wtf/text/string_view.h"
#include <string.h>

namespace blink {

enum class AtRuleDescriptorID {
  Invalid = 0,
  FontDisplay = 1,
  FontFamily = 2,
  FontFeatureSettings = 3,
  FontStretch = 4,
  FontStyle = 5,
  FontVariant = 6,
  FontWeight = 7,
  Height = 8,
  MaxHeight = 9,
  MaxWidth = 10,
  MaxZoom = 11,
  MinHeight = 12,
  MinWidth = 13,
  MinZoom = 14,
  Orientation = 15,
  Src = 16,
  UnicodeRange = 17,
  UserZoom = 18,
  Width = 19,
  Zoom = 20,
};

const int numAtRuleDescriptors = 21;

const char* getValueName(AtRuleDescriptorID);

AtRuleDescriptorID AsAtRuleDescriptorID(StringView string);

CSSPropertyID AtRuleDescriptorIDAsCSSPropertyID(AtRuleDescriptorID);
AtRuleDescriptorID CSSPropertyIDAsAtRuleDescriptor(CSSPropertyID id);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_PARSER_AT_RULE_DESCRIPTORS_H_
