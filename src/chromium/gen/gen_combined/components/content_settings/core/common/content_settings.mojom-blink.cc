// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "components/content_settings/core/common/content_settings.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "components/content_settings/core/common/content_settings.mojom-params-data.h"
#include "components/content_settings/core/common/content_settings.mojom-shared-message-ids.h"

#include "components/content_settings/core/common/content_settings.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_JUMBO_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_JUMBO_H_
#endif
namespace content_settings {
namespace mojom {
namespace blink {
PatternParts::PatternParts()
    : scheme(),
      is_scheme_wildcard(),
      host(),
      has_domain_wildcard(),
      port(),
      is_port_wildcard(),
      path(),
      is_path_wildcard() {}

PatternParts::PatternParts(
    const WTF::String& scheme_in,
    bool is_scheme_wildcard_in,
    const WTF::String& host_in,
    bool has_domain_wildcard_in,
    const WTF::String& port_in,
    bool is_port_wildcard_in,
    const WTF::String& path_in,
    bool is_path_wildcard_in)
    : scheme(std::move(scheme_in)),
      is_scheme_wildcard(std::move(is_scheme_wildcard_in)),
      host(std::move(host_in)),
      has_domain_wildcard(std::move(has_domain_wildcard_in)),
      port(std::move(port_in)),
      is_port_wildcard(std::move(is_port_wildcard_in)),
      path(std::move(path_in)),
      is_path_wildcard(std::move(is_path_wildcard_in)) {}

PatternParts::~PatternParts() = default;
size_t PatternParts::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->scheme);
  seed = mojo::internal::WTFHash(seed, this->is_scheme_wildcard);
  seed = mojo::internal::WTFHash(seed, this->host);
  seed = mojo::internal::WTFHash(seed, this->has_domain_wildcard);
  seed = mojo::internal::WTFHash(seed, this->port);
  seed = mojo::internal::WTFHash(seed, this->is_port_wildcard);
  seed = mojo::internal::WTFHash(seed, this->path);
  seed = mojo::internal::WTFHash(seed, this->is_path_wildcard);
  return seed;
}

bool PatternParts::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContentSettingsPattern::ContentSettingsPattern()
    : parts(),
      is_valid() {}

ContentSettingsPattern::ContentSettingsPattern(
    PatternPartsPtr parts_in,
    bool is_valid_in)
    : parts(std::move(parts_in)),
      is_valid(std::move(is_valid_in)) {}

ContentSettingsPattern::~ContentSettingsPattern() = default;
size_t ContentSettingsPattern::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->parts);
  seed = mojo::internal::WTFHash(seed, this->is_valid);
  return seed;
}

bool ContentSettingsPattern::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContentSettingPatternSource::ContentSettingPatternSource()
    : primary_pattern(),
      secondary_pattern(),
      setting_value(),
      source(),
      incognito() {}

ContentSettingPatternSource::ContentSettingPatternSource(
    ContentSettingsPatternPtr primary_pattern_in,
    ContentSettingsPatternPtr secondary_pattern_in,
    ::mojo_base::mojom::blink::ValuePtr setting_value_in,
    const WTF::String& source_in,
    bool incognito_in)
    : primary_pattern(std::move(primary_pattern_in)),
      secondary_pattern(std::move(secondary_pattern_in)),
      setting_value(std::move(setting_value_in)),
      source(std::move(source_in)),
      incognito(std::move(incognito_in)) {}

ContentSettingPatternSource::~ContentSettingPatternSource() = default;

bool ContentSettingPatternSource::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RendererContentSettingRules::RendererContentSettingRules()
    : image_rules(),
      script_rules(),
      autoplay_rules(),
      client_hints_rules(),
      popup_redirect_rules() {}

RendererContentSettingRules::RendererContentSettingRules(
    WTF::Vector<ContentSettingPatternSourcePtr> image_rules_in,
    WTF::Vector<ContentSettingPatternSourcePtr> script_rules_in,
    WTF::Vector<ContentSettingPatternSourcePtr> autoplay_rules_in,
    WTF::Vector<ContentSettingPatternSourcePtr> client_hints_rules_in,
    WTF::Vector<ContentSettingPatternSourcePtr> popup_redirect_rules_in)
    : image_rules(std::move(image_rules_in)),
      script_rules(std::move(script_rules_in)),
      autoplay_rules(std::move(autoplay_rules_in)),
      client_hints_rules(std::move(client_hints_rules_in)),
      popup_redirect_rules(std::move(popup_redirect_rules_in)) {}

RendererContentSettingRules::~RendererContentSettingRules() = default;

bool RendererContentSettingRules::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace content_settings

namespace mojo {


// static
bool StructTraits<::content_settings::mojom::blink::PatternParts::DataView, ::content_settings::mojom::blink::PatternPartsPtr>::Read(
    ::content_settings::mojom::blink::PatternParts::DataView input,
    ::content_settings::mojom::blink::PatternPartsPtr* output) {
  bool success = true;
  ::content_settings::mojom::blink::PatternPartsPtr result(::content_settings::mojom::blink::PatternParts::New());
  
      if (!input.ReadScheme(&result->scheme))
        success = false;
      result->is_scheme_wildcard = input.is_scheme_wildcard();
      if (!input.ReadHost(&result->host))
        success = false;
      result->has_domain_wildcard = input.has_domain_wildcard();
      if (!input.ReadPort(&result->port))
        success = false;
      result->is_port_wildcard = input.is_port_wildcard();
      if (!input.ReadPath(&result->path))
        success = false;
      result->is_path_wildcard = input.is_path_wildcard();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content_settings::mojom::blink::ContentSettingsPattern::DataView, ::content_settings::mojom::blink::ContentSettingsPatternPtr>::Read(
    ::content_settings::mojom::blink::ContentSettingsPattern::DataView input,
    ::content_settings::mojom::blink::ContentSettingsPatternPtr* output) {
  bool success = true;
  ::content_settings::mojom::blink::ContentSettingsPatternPtr result(::content_settings::mojom::blink::ContentSettingsPattern::New());
  
      if (!input.ReadParts(&result->parts))
        success = false;
      result->is_valid = input.is_valid();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content_settings::mojom::blink::ContentSettingPatternSource::DataView, ::content_settings::mojom::blink::ContentSettingPatternSourcePtr>::Read(
    ::content_settings::mojom::blink::ContentSettingPatternSource::DataView input,
    ::content_settings::mojom::blink::ContentSettingPatternSourcePtr* output) {
  bool success = true;
  ::content_settings::mojom::blink::ContentSettingPatternSourcePtr result(::content_settings::mojom::blink::ContentSettingPatternSource::New());
  
      if (!input.ReadPrimaryPattern(&result->primary_pattern))
        success = false;
      if (!input.ReadSecondaryPattern(&result->secondary_pattern))
        success = false;
      if (!input.ReadSettingValue(&result->setting_value))
        success = false;
      if (!input.ReadSource(&result->source))
        success = false;
      result->incognito = input.incognito();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::content_settings::mojom::blink::RendererContentSettingRules::DataView, ::content_settings::mojom::blink::RendererContentSettingRulesPtr>::Read(
    ::content_settings::mojom::blink::RendererContentSettingRules::DataView input,
    ::content_settings::mojom::blink::RendererContentSettingRulesPtr* output) {
  bool success = true;
  ::content_settings::mojom::blink::RendererContentSettingRulesPtr result(::content_settings::mojom::blink::RendererContentSettingRules::New());
  
      if (!input.ReadImageRules(&result->image_rules))
        success = false;
      if (!input.ReadScriptRules(&result->script_rules))
        success = false;
      if (!input.ReadAutoplayRules(&result->autoplay_rules))
        success = false;
      if (!input.ReadClientHintsRules(&result->client_hints_rules))
        success = false;
      if (!input.ReadPopupRedirectRules(&result->popup_redirect_rules))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif