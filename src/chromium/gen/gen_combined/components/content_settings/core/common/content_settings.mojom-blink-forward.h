// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_FORWARD_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"


namespace content_settings {
namespace mojom {

enum class ContentSetting : int32_t;
}  // namespace content_settings
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct content_settings_mojom_internal_ContentSetting_DataHashFn;

template <>
struct DefaultHash<::content_settings::mojom::ContentSetting> {
  using Hash = content_settings_mojom_internal_ContentSetting_DataHashFn;
};
}  // namespace WTF


namespace content_settings {
namespace mojom {
namespace blink {
using ContentSetting = ContentSetting;  // Alias for definition in the parent namespace.
class PatternParts;
using PatternPartsPtr = mojo::StructPtr<PatternParts>;

class ContentSettingsPattern;
using ContentSettingsPatternPtr = mojo::StructPtr<ContentSettingsPattern>;

class ContentSettingPatternSource;
using ContentSettingPatternSourcePtr = mojo::StructPtr<ContentSettingPatternSource>;

class RendererContentSettingRules;
using RendererContentSettingRulesPtr = mojo::StructPtr<RendererContentSettingRules>;




}  // namespace blink
}  // namespace mojom
}  // namespace content_settings

#endif  // COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_FORWARD_H_