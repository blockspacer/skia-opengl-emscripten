// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_FORWARD_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace content_settings {
namespace mojom {
class PatternPartsDataView;

class ContentSettingsPatternDataView;

class ContentSettingPatternSourceDataView;

class RendererContentSettingRulesDataView;


enum class ContentSetting : int32_t;
class PatternParts;
using PatternPartsPtr = mojo::StructPtr<PatternParts>;

class ContentSettingsPattern;
using ContentSettingsPatternPtr = mojo::StructPtr<ContentSettingsPattern>;

class ContentSettingPatternSource;
using ContentSettingPatternSourcePtr = mojo::StructPtr<ContentSettingPatternSource>;

class RendererContentSettingRules;
using RendererContentSettingRulesPtr = mojo::StructPtr<RendererContentSettingRules>;




}  // namespace mojom
}  // namespace content_settings
#include "components/content_settings/core/common/content_settings.h"
#include "components/content_settings/core/common/content_settings_pattern.h"

#endif  // COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_FORWARD_H_