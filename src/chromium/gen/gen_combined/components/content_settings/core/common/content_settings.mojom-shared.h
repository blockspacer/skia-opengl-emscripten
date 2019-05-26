// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_SHARED_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "components/content_settings/core/common/content_settings.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace content_settings {
namespace mojom {
class PatternPartsDataView;

class ContentSettingsPatternDataView;

class ContentSettingPatternSourceDataView;

class RendererContentSettingRulesDataView;



}  // namespace mojom
}  // namespace content_settings

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::content_settings::mojom::PatternPartsDataView> {
  using Data = ::content_settings::mojom::internal::PatternParts_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content_settings::mojom::ContentSettingsPatternDataView> {
  using Data = ::content_settings::mojom::internal::ContentSettingsPattern_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content_settings::mojom::ContentSettingPatternSourceDataView> {
  using Data = ::content_settings::mojom::internal::ContentSettingPatternSource_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::content_settings::mojom::RendererContentSettingRulesDataView> {
  using Data = ::content_settings::mojom::internal::RendererContentSettingRules_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace content_settings {
namespace mojom {


enum class ContentSetting : int32_t {
  
  DEFAULT = 0,
  
  ALLOW,
  
  BLOCK,
  
  ASK,
  
  SESSION_ONLY,
  
  DETECT_IMPORTANT_CONTENT,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, ContentSetting value);
inline bool IsKnownEnumValue(ContentSetting value) {
  return internal::ContentSetting_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class PatternPartsDataView {
 public:
  PatternPartsDataView() {}

  PatternPartsDataView(
      internal::PatternParts_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScheme(UserType* output) {
    auto* pointer = data_->scheme.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_scheme_wildcard() const {
    return data_->is_scheme_wildcard;
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool has_domain_wildcard() const {
    return data_->has_domain_wildcard;
  }
  inline void GetPortDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPort(UserType* output) {
    auto* pointer = data_->port.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_port_wildcard() const {
    return data_->is_port_wildcard;
  }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool is_path_wildcard() const {
    return data_->is_path_wildcard;
  }
 private:
  internal::PatternParts_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentSettingsPatternDataView {
 public:
  ContentSettingsPatternDataView() {}

  ContentSettingsPatternDataView(
      internal::ContentSettingsPattern_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPartsDataView(
      PatternPartsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParts(UserType* output) {
    auto* pointer = data_->parts.Get();
    return mojo::internal::Deserialize<::content_settings::mojom::PatternPartsDataView>(
        pointer, output, context_);
  }
  bool is_valid() const {
    return data_->is_valid;
  }
 private:
  internal::ContentSettingsPattern_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentSettingPatternSourceDataView {
 public:
  ContentSettingPatternSourceDataView() {}

  ContentSettingPatternSourceDataView(
      internal::ContentSettingPatternSource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPrimaryPatternDataView(
      ContentSettingsPatternDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrimaryPattern(UserType* output) {
    auto* pointer = data_->primary_pattern.Get();
    return mojo::internal::Deserialize<::content_settings::mojom::ContentSettingsPatternDataView>(
        pointer, output, context_);
  }
  inline void GetSecondaryPatternDataView(
      ContentSettingsPatternDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecondaryPattern(UserType* output) {
    auto* pointer = data_->secondary_pattern.Get();
    return mojo::internal::Deserialize<::content_settings::mojom::ContentSettingsPatternDataView>(
        pointer, output, context_);
  }
  inline void GetSettingValueDataView(
      ::mojo_base::mojom::ValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSettingValue(UserType* output) {
    auto* pointer = !data_->setting_value.is_null() ? &data_->setting_value : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::ValueDataView>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool incognito() const {
    return data_->incognito;
  }
 private:
  internal::ContentSettingPatternSource_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererContentSettingRulesDataView {
 public:
  RendererContentSettingRulesDataView() {}

  RendererContentSettingRulesDataView(
      internal::RendererContentSettingRules_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageRulesDataView(
      mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageRules(UserType* output) {
    auto* pointer = data_->image_rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
  inline void GetScriptRulesDataView(
      mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptRules(UserType* output) {
    auto* pointer = data_->script_rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
  inline void GetAutoplayRulesDataView(
      mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAutoplayRules(UserType* output) {
    auto* pointer = data_->autoplay_rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
  inline void GetClientHintsRulesDataView(
      mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientHintsRules(UserType* output) {
    auto* pointer = data_->client_hints_rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
  inline void GetPopupRedirectRulesDataView(
      mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPopupRedirectRules(UserType* output) {
    auto* pointer = data_->popup_redirect_rules.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RendererContentSettingRules_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace content_settings

namespace std {

template <>
struct hash<::content_settings::mojom::ContentSetting>
    : public mojo::internal::EnumHashImpl<::content_settings::mojom::ContentSetting> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::content_settings::mojom::ContentSetting, ::content_settings::mojom::ContentSetting> {
  static ::content_settings::mojom::ContentSetting ToMojom(::content_settings::mojom::ContentSetting input) { return input; }
  static bool FromMojom(::content_settings::mojom::ContentSetting input, ::content_settings::mojom::ContentSetting* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content_settings::mojom::ContentSetting, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::content_settings::mojom::ContentSetting, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::content_settings::mojom::ContentSetting>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content_settings::mojom::PatternPartsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content_settings::mojom::PatternPartsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content_settings::mojom::internal::PatternParts_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::scheme(input)) in_scheme = Traits::scheme(input);
    typename decltype((*output)->scheme)::BaseType::BufferWriter
        scheme_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_scheme, buffer, &scheme_writer, context);
    (*output)->scheme.Set(
        scheme_writer.is_null() ? nullptr : scheme_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scheme.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scheme in PatternParts struct");
    (*output)->is_scheme_wildcard = Traits::is_scheme_wildcard(input);
    decltype(Traits::host(input)) in_host = Traits::host(input);
    typename decltype((*output)->host)::BaseType::BufferWriter
        host_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host, buffer, &host_writer, context);
    (*output)->host.Set(
        host_writer.is_null() ? nullptr : host_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->host.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host in PatternParts struct");
    (*output)->has_domain_wildcard = Traits::has_domain_wildcard(input);
    decltype(Traits::port(input)) in_port = Traits::port(input);
    typename decltype((*output)->port)::BaseType::BufferWriter
        port_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_port, buffer, &port_writer, context);
    (*output)->port.Set(
        port_writer.is_null() ? nullptr : port_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->port.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null port in PatternParts struct");
    (*output)->is_port_wildcard = Traits::is_port_wildcard(input);
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in PatternParts struct");
    (*output)->is_path_wildcard = Traits::is_path_wildcard(input);
  }

  static bool Deserialize(::content_settings::mojom::internal::PatternParts_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content_settings::mojom::PatternPartsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content_settings::mojom::ContentSettingsPatternDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content_settings::mojom::ContentSettingsPatternDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content_settings::mojom::internal::ContentSettingsPattern_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::parts(input)) in_parts = Traits::parts(input);
    typename decltype((*output)->parts)::BaseType::BufferWriter
        parts_writer;
    mojo::internal::Serialize<::content_settings::mojom::PatternPartsDataView>(
        in_parts, buffer, &parts_writer, context);
    (*output)->parts.Set(
        parts_writer.is_null() ? nullptr : parts_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->parts.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null parts in ContentSettingsPattern struct");
    (*output)->is_valid = Traits::is_valid(input);
  }

  static bool Deserialize(::content_settings::mojom::internal::ContentSettingsPattern_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content_settings::mojom::ContentSettingsPatternDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content_settings::mojom::ContentSettingPatternSourceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content_settings::mojom::ContentSettingPatternSourceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content_settings::mojom::internal::ContentSettingPatternSource_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::primary_pattern(input)) in_primary_pattern = Traits::primary_pattern(input);
    typename decltype((*output)->primary_pattern)::BaseType::BufferWriter
        primary_pattern_writer;
    mojo::internal::Serialize<::content_settings::mojom::ContentSettingsPatternDataView>(
        in_primary_pattern, buffer, &primary_pattern_writer, context);
    (*output)->primary_pattern.Set(
        primary_pattern_writer.is_null() ? nullptr : primary_pattern_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->primary_pattern.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null primary_pattern in ContentSettingPatternSource struct");
    decltype(Traits::secondary_pattern(input)) in_secondary_pattern = Traits::secondary_pattern(input);
    typename decltype((*output)->secondary_pattern)::BaseType::BufferWriter
        secondary_pattern_writer;
    mojo::internal::Serialize<::content_settings::mojom::ContentSettingsPatternDataView>(
        in_secondary_pattern, buffer, &secondary_pattern_writer, context);
    (*output)->secondary_pattern.Set(
        secondary_pattern_writer.is_null() ? nullptr : secondary_pattern_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->secondary_pattern.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null secondary_pattern in ContentSettingPatternSource struct");
    decltype(Traits::setting_value(input)) in_setting_value = Traits::setting_value(input);
    typename decltype((*output)->setting_value)::BufferWriter setting_value_writer;
    setting_value_writer.AllocateInline(buffer, &(*output)->setting_value);
    mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
        in_setting_value, buffer, &setting_value_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->setting_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null setting_value in ContentSettingPatternSource struct");
    decltype(Traits::source(input)) in_source = Traits::source(input);
    typename decltype((*output)->source)::BaseType::BufferWriter
        source_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_source, buffer, &source_writer, context);
    (*output)->source.Set(
        source_writer.is_null() ? nullptr : source_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source in ContentSettingPatternSource struct");
    (*output)->incognito = Traits::incognito(input);
  }

  static bool Deserialize(::content_settings::mojom::internal::ContentSettingPatternSource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content_settings::mojom::ContentSettingPatternSourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::content_settings::mojom::RendererContentSettingRulesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::content_settings::mojom::RendererContentSettingRulesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::content_settings::mojom::internal::RendererContentSettingRules_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::image_rules(input)) in_image_rules = Traits::image_rules(input);
    typename decltype((*output)->image_rules)::BaseType::BufferWriter
        image_rules_writer;
    const mojo::internal::ContainerValidateParams image_rules_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        in_image_rules, buffer, &image_rules_writer, &image_rules_validate_params,
        context);
    (*output)->image_rules.Set(
        image_rules_writer.is_null() ? nullptr : image_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_rules in RendererContentSettingRules struct");
    decltype(Traits::script_rules(input)) in_script_rules = Traits::script_rules(input);
    typename decltype((*output)->script_rules)::BaseType::BufferWriter
        script_rules_writer;
    const mojo::internal::ContainerValidateParams script_rules_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        in_script_rules, buffer, &script_rules_writer, &script_rules_validate_params,
        context);
    (*output)->script_rules.Set(
        script_rules_writer.is_null() ? nullptr : script_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_rules in RendererContentSettingRules struct");
    decltype(Traits::autoplay_rules(input)) in_autoplay_rules = Traits::autoplay_rules(input);
    typename decltype((*output)->autoplay_rules)::BaseType::BufferWriter
        autoplay_rules_writer;
    const mojo::internal::ContainerValidateParams autoplay_rules_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        in_autoplay_rules, buffer, &autoplay_rules_writer, &autoplay_rules_validate_params,
        context);
    (*output)->autoplay_rules.Set(
        autoplay_rules_writer.is_null() ? nullptr : autoplay_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->autoplay_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null autoplay_rules in RendererContentSettingRules struct");
    decltype(Traits::client_hints_rules(input)) in_client_hints_rules = Traits::client_hints_rules(input);
    typename decltype((*output)->client_hints_rules)::BaseType::BufferWriter
        client_hints_rules_writer;
    const mojo::internal::ContainerValidateParams client_hints_rules_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        in_client_hints_rules, buffer, &client_hints_rules_writer, &client_hints_rules_validate_params,
        context);
    (*output)->client_hints_rules.Set(
        client_hints_rules_writer.is_null() ? nullptr : client_hints_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_hints_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_hints_rules in RendererContentSettingRules struct");
    decltype(Traits::popup_redirect_rules(input)) in_popup_redirect_rules = Traits::popup_redirect_rules(input);
    typename decltype((*output)->popup_redirect_rules)::BaseType::BufferWriter
        popup_redirect_rules_writer;
    const mojo::internal::ContainerValidateParams popup_redirect_rules_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        in_popup_redirect_rules, buffer, &popup_redirect_rules_writer, &popup_redirect_rules_validate_params,
        context);
    (*output)->popup_redirect_rules.Set(
        popup_redirect_rules_writer.is_null() ? nullptr : popup_redirect_rules_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->popup_redirect_rules.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null popup_redirect_rules in RendererContentSettingRules struct");
  }

  static bool Deserialize(::content_settings::mojom::internal::RendererContentSettingRules_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::content_settings::mojom::RendererContentSettingRulesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace content_settings {
namespace mojom {

inline void PatternPartsDataView::GetSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->scheme.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PatternPartsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PatternPartsDataView::GetPortDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->port.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PatternPartsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentSettingsPatternDataView::GetPartsDataView(
    PatternPartsDataView* output) {
  auto pointer = data_->parts.Get();
  *output = PatternPartsDataView(pointer, context_);
}


inline void ContentSettingPatternSourceDataView::GetPrimaryPatternDataView(
    ContentSettingsPatternDataView* output) {
  auto pointer = data_->primary_pattern.Get();
  *output = ContentSettingsPatternDataView(pointer, context_);
}
inline void ContentSettingPatternSourceDataView::GetSecondaryPatternDataView(
    ContentSettingsPatternDataView* output) {
  auto pointer = data_->secondary_pattern.Get();
  *output = ContentSettingsPatternDataView(pointer, context_);
}
inline void ContentSettingPatternSourceDataView::GetSettingValueDataView(
    ::mojo_base::mojom::ValueDataView* output) {
  auto pointer = &data_->setting_value;
  *output = ::mojo_base::mojom::ValueDataView(pointer, context_);
}
inline void ContentSettingPatternSourceDataView::GetSourceDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void RendererContentSettingRulesDataView::GetImageRulesDataView(
    mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->image_rules.Get();
  *output = mojo::ArrayDataView<ContentSettingPatternSourceDataView>(pointer, context_);
}
inline void RendererContentSettingRulesDataView::GetScriptRulesDataView(
    mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->script_rules.Get();
  *output = mojo::ArrayDataView<ContentSettingPatternSourceDataView>(pointer, context_);
}
inline void RendererContentSettingRulesDataView::GetAutoplayRulesDataView(
    mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->autoplay_rules.Get();
  *output = mojo::ArrayDataView<ContentSettingPatternSourceDataView>(pointer, context_);
}
inline void RendererContentSettingRulesDataView::GetClientHintsRulesDataView(
    mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->client_hints_rules.Get();
  *output = mojo::ArrayDataView<ContentSettingPatternSourceDataView>(pointer, context_);
}
inline void RendererContentSettingRulesDataView::GetPopupRedirectRulesDataView(
    mojo::ArrayDataView<ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->popup_redirect_rules.Get();
  *output = mojo::ArrayDataView<ContentSettingPatternSourceDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace content_settings

#endif  // COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_SHARED_H_