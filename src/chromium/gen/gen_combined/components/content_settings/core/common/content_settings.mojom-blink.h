// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "components/content_settings/core/common/content_settings.mojom-shared.h"
#include "components/content_settings/core/common/content_settings.mojom-blink-forward.h"
#include "mojo/public/mojom/base/values.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace WTF {
struct content_settings_mojom_internal_ContentSetting_DataHashFn {
  static unsigned GetHash(const ::content_settings::mojom::ContentSetting& value) {
    using utype = std::underlying_type<::content_settings::mojom::ContentSetting>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::content_settings::mojom::ContentSetting& left, const ::content_settings::mojom::ContentSetting& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::content_settings::mojom::ContentSetting>
    : public GenericHashTraits<::content_settings::mojom::ContentSetting> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::content_settings::mojom::ContentSetting& value) {
    return value == static_cast<::content_settings::mojom::ContentSetting>(-1000000);
  }
  static void ConstructDeletedValue(::content_settings::mojom::ContentSetting& slot, bool) {
    slot = static_cast<::content_settings::mojom::ContentSetting>(-1000001);
  }
  static bool IsDeletedValue(const ::content_settings::mojom::ContentSetting& value) {
    return value == static_cast<::content_settings::mojom::ContentSetting>(-1000001);
  }
};
}  // namespace WTF


namespace content_settings {
namespace mojom {
namespace blink {











class  PatternParts {
 public:
  using DataView = PatternPartsDataView;
  using Data_ = internal::PatternParts_Data;

  template <typename... Args>
  static PatternPartsPtr New(Args&&... args) {
    return PatternPartsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PatternPartsPtr From(const U& u) {
    return mojo::TypeConverter<PatternPartsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PatternParts>::Convert(*this);
  }


  PatternParts();

  PatternParts(
      const WTF::String& scheme,
      bool is_scheme_wildcard,
      const WTF::String& host,
      bool has_domain_wildcard,
      const WTF::String& port,
      bool is_port_wildcard,
      const WTF::String& path,
      bool is_path_wildcard);

  ~PatternParts();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PatternPartsPtr>
  PatternPartsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PatternParts>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PatternParts::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PatternParts::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PatternParts_UnserializedMessageContext<
            UserType, PatternParts::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PatternParts::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PatternParts::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PatternParts_UnserializedMessageContext<
            UserType, PatternParts::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PatternParts::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String scheme;
  
  bool is_scheme_wildcard;
  
  WTF::String host;
  
  bool has_domain_wildcard;
  
  WTF::String port;
  
  bool is_port_wildcard;
  
  WTF::String path;
  
  bool is_path_wildcard;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ContentSettingsPattern {
 public:
  using DataView = ContentSettingsPatternDataView;
  using Data_ = internal::ContentSettingsPattern_Data;

  template <typename... Args>
  static ContentSettingsPatternPtr New(Args&&... args) {
    return ContentSettingsPatternPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContentSettingsPatternPtr From(const U& u) {
    return mojo::TypeConverter<ContentSettingsPatternPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContentSettingsPattern>::Convert(*this);
  }


  ContentSettingsPattern();

  ContentSettingsPattern(
      PatternPartsPtr parts,
      bool is_valid);

  ~ContentSettingsPattern();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContentSettingsPatternPtr>
  ContentSettingsPatternPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContentSettingsPattern>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContentSettingsPattern::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContentSettingsPattern::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContentSettingsPattern_UnserializedMessageContext<
            UserType, ContentSettingsPattern::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContentSettingsPattern::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContentSettingsPattern::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContentSettingsPattern_UnserializedMessageContext<
            UserType, ContentSettingsPattern::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContentSettingsPattern::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PatternPartsPtr parts;
  
  bool is_valid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ContentSettingsPattern);
};





class  ContentSettingPatternSource {
 public:
  using DataView = ContentSettingPatternSourceDataView;
  using Data_ = internal::ContentSettingPatternSource_Data;

  template <typename... Args>
  static ContentSettingPatternSourcePtr New(Args&&... args) {
    return ContentSettingPatternSourcePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContentSettingPatternSourcePtr From(const U& u) {
    return mojo::TypeConverter<ContentSettingPatternSourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContentSettingPatternSource>::Convert(*this);
  }


  ContentSettingPatternSource();

  ContentSettingPatternSource(
      ContentSettingsPatternPtr primary_pattern,
      ContentSettingsPatternPtr secondary_pattern,
      ::mojo_base::mojom::blink::ValuePtr setting_value,
      const WTF::String& source,
      bool incognito);

  ~ContentSettingPatternSource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContentSettingPatternSourcePtr>
  ContentSettingPatternSourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContentSettingPatternSource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContentSettingPatternSource::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContentSettingPatternSource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContentSettingPatternSource_UnserializedMessageContext<
            UserType, ContentSettingPatternSource::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContentSettingPatternSource::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContentSettingPatternSource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContentSettingPatternSource_UnserializedMessageContext<
            UserType, ContentSettingPatternSource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContentSettingPatternSource::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ContentSettingsPatternPtr primary_pattern;
  
  ContentSettingsPatternPtr secondary_pattern;
  
  ::mojo_base::mojom::blink::ValuePtr setting_value;
  
  WTF::String source;
  
  bool incognito;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ContentSettingPatternSource);
};





class  RendererContentSettingRules {
 public:
  using DataView = RendererContentSettingRulesDataView;
  using Data_ = internal::RendererContentSettingRules_Data;

  template <typename... Args>
  static RendererContentSettingRulesPtr New(Args&&... args) {
    return RendererContentSettingRulesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RendererContentSettingRulesPtr From(const U& u) {
    return mojo::TypeConverter<RendererContentSettingRulesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RendererContentSettingRules>::Convert(*this);
  }


  RendererContentSettingRules();

  RendererContentSettingRules(
      WTF::Vector<ContentSettingPatternSourcePtr> image_rules,
      WTF::Vector<ContentSettingPatternSourcePtr> script_rules,
      WTF::Vector<ContentSettingPatternSourcePtr> autoplay_rules,
      WTF::Vector<ContentSettingPatternSourcePtr> client_hints_rules,
      WTF::Vector<ContentSettingPatternSourcePtr> popup_redirect_rules);

  ~RendererContentSettingRules();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RendererContentSettingRulesPtr>
  RendererContentSettingRulesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RendererContentSettingRules>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RendererContentSettingRules::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RendererContentSettingRules::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RendererContentSettingRules_UnserializedMessageContext<
            UserType, RendererContentSettingRules::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RendererContentSettingRules::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RendererContentSettingRules::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RendererContentSettingRules_UnserializedMessageContext<
            UserType, RendererContentSettingRules::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RendererContentSettingRules::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<ContentSettingPatternSourcePtr> image_rules;
  
  WTF::Vector<ContentSettingPatternSourcePtr> script_rules;
  
  WTF::Vector<ContentSettingPatternSourcePtr> autoplay_rules;
  
  WTF::Vector<ContentSettingPatternSourcePtr> client_hints_rules;
  
  WTF::Vector<ContentSettingPatternSourcePtr> popup_redirect_rules;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RendererContentSettingRules);
};

template <typename StructPtrType>
PatternPartsPtr PatternParts::Clone() const {
  return New(
      mojo::Clone(scheme),
      mojo::Clone(is_scheme_wildcard),
      mojo::Clone(host),
      mojo::Clone(has_domain_wildcard),
      mojo::Clone(port),
      mojo::Clone(is_port_wildcard),
      mojo::Clone(path),
      mojo::Clone(is_path_wildcard)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PatternParts>::value>::type*>
bool PatternParts::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scheme, other_struct.scheme))
    return false;
  if (!mojo::Equals(this->is_scheme_wildcard, other_struct.is_scheme_wildcard))
    return false;
  if (!mojo::Equals(this->host, other_struct.host))
    return false;
  if (!mojo::Equals(this->has_domain_wildcard, other_struct.has_domain_wildcard))
    return false;
  if (!mojo::Equals(this->port, other_struct.port))
    return false;
  if (!mojo::Equals(this->is_port_wildcard, other_struct.is_port_wildcard))
    return false;
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->is_path_wildcard, other_struct.is_path_wildcard))
    return false;
  return true;
}
template <typename StructPtrType>
ContentSettingsPatternPtr ContentSettingsPattern::Clone() const {
  return New(
      mojo::Clone(parts),
      mojo::Clone(is_valid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContentSettingsPattern>::value>::type*>
bool ContentSettingsPattern::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->parts, other_struct.parts))
    return false;
  if (!mojo::Equals(this->is_valid, other_struct.is_valid))
    return false;
  return true;
}
template <typename StructPtrType>
ContentSettingPatternSourcePtr ContentSettingPatternSource::Clone() const {
  return New(
      mojo::Clone(primary_pattern),
      mojo::Clone(secondary_pattern),
      mojo::Clone(setting_value),
      mojo::Clone(source),
      mojo::Clone(incognito)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContentSettingPatternSource>::value>::type*>
bool ContentSettingPatternSource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->primary_pattern, other_struct.primary_pattern))
    return false;
  if (!mojo::Equals(this->secondary_pattern, other_struct.secondary_pattern))
    return false;
  if (!mojo::Equals(this->setting_value, other_struct.setting_value))
    return false;
  if (!mojo::Equals(this->source, other_struct.source))
    return false;
  if (!mojo::Equals(this->incognito, other_struct.incognito))
    return false;
  return true;
}
template <typename StructPtrType>
RendererContentSettingRulesPtr RendererContentSettingRules::Clone() const {
  return New(
      mojo::Clone(image_rules),
      mojo::Clone(script_rules),
      mojo::Clone(autoplay_rules),
      mojo::Clone(client_hints_rules),
      mojo::Clone(popup_redirect_rules)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RendererContentSettingRules>::value>::type*>
bool RendererContentSettingRules::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image_rules, other_struct.image_rules))
    return false;
  if (!mojo::Equals(this->script_rules, other_struct.script_rules))
    return false;
  if (!mojo::Equals(this->autoplay_rules, other_struct.autoplay_rules))
    return false;
  if (!mojo::Equals(this->client_hints_rules, other_struct.client_hints_rules))
    return false;
  if (!mojo::Equals(this->popup_redirect_rules, other_struct.popup_redirect_rules))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace content_settings

namespace mojo {


template <>
struct  StructTraits<::content_settings::mojom::blink::PatternParts::DataView,
                                         ::content_settings::mojom::blink::PatternPartsPtr> {
  static bool IsNull(const ::content_settings::mojom::blink::PatternPartsPtr& input) { return !input; }
  static void SetToNull(::content_settings::mojom::blink::PatternPartsPtr* output) { output->reset(); }

  static const decltype(::content_settings::mojom::blink::PatternParts::scheme)& scheme(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->scheme;
  }

  static decltype(::content_settings::mojom::blink::PatternParts::is_scheme_wildcard) is_scheme_wildcard(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->is_scheme_wildcard;
  }

  static const decltype(::content_settings::mojom::blink::PatternParts::host)& host(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->host;
  }

  static decltype(::content_settings::mojom::blink::PatternParts::has_domain_wildcard) has_domain_wildcard(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->has_domain_wildcard;
  }

  static const decltype(::content_settings::mojom::blink::PatternParts::port)& port(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->port;
  }

  static decltype(::content_settings::mojom::blink::PatternParts::is_port_wildcard) is_port_wildcard(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->is_port_wildcard;
  }

  static const decltype(::content_settings::mojom::blink::PatternParts::path)& path(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->path;
  }

  static decltype(::content_settings::mojom::blink::PatternParts::is_path_wildcard) is_path_wildcard(
      const ::content_settings::mojom::blink::PatternPartsPtr& input) {
    return input->is_path_wildcard;
  }

  static bool Read(::content_settings::mojom::blink::PatternParts::DataView input, ::content_settings::mojom::blink::PatternPartsPtr* output);
};


template <>
struct  StructTraits<::content_settings::mojom::blink::ContentSettingsPattern::DataView,
                                         ::content_settings::mojom::blink::ContentSettingsPatternPtr> {
  static bool IsNull(const ::content_settings::mojom::blink::ContentSettingsPatternPtr& input) { return !input; }
  static void SetToNull(::content_settings::mojom::blink::ContentSettingsPatternPtr* output) { output->reset(); }

  static const decltype(::content_settings::mojom::blink::ContentSettingsPattern::parts)& parts(
      const ::content_settings::mojom::blink::ContentSettingsPatternPtr& input) {
    return input->parts;
  }

  static decltype(::content_settings::mojom::blink::ContentSettingsPattern::is_valid) is_valid(
      const ::content_settings::mojom::blink::ContentSettingsPatternPtr& input) {
    return input->is_valid;
  }

  static bool Read(::content_settings::mojom::blink::ContentSettingsPattern::DataView input, ::content_settings::mojom::blink::ContentSettingsPatternPtr* output);
};


template <>
struct  StructTraits<::content_settings::mojom::blink::ContentSettingPatternSource::DataView,
                                         ::content_settings::mojom::blink::ContentSettingPatternSourcePtr> {
  static bool IsNull(const ::content_settings::mojom::blink::ContentSettingPatternSourcePtr& input) { return !input; }
  static void SetToNull(::content_settings::mojom::blink::ContentSettingPatternSourcePtr* output) { output->reset(); }

  static const decltype(::content_settings::mojom::blink::ContentSettingPatternSource::primary_pattern)& primary_pattern(
      const ::content_settings::mojom::blink::ContentSettingPatternSourcePtr& input) {
    return input->primary_pattern;
  }

  static const decltype(::content_settings::mojom::blink::ContentSettingPatternSource::secondary_pattern)& secondary_pattern(
      const ::content_settings::mojom::blink::ContentSettingPatternSourcePtr& input) {
    return input->secondary_pattern;
  }

  static const decltype(::content_settings::mojom::blink::ContentSettingPatternSource::setting_value)& setting_value(
      const ::content_settings::mojom::blink::ContentSettingPatternSourcePtr& input) {
    return input->setting_value;
  }

  static const decltype(::content_settings::mojom::blink::ContentSettingPatternSource::source)& source(
      const ::content_settings::mojom::blink::ContentSettingPatternSourcePtr& input) {
    return input->source;
  }

  static decltype(::content_settings::mojom::blink::ContentSettingPatternSource::incognito) incognito(
      const ::content_settings::mojom::blink::ContentSettingPatternSourcePtr& input) {
    return input->incognito;
  }

  static bool Read(::content_settings::mojom::blink::ContentSettingPatternSource::DataView input, ::content_settings::mojom::blink::ContentSettingPatternSourcePtr* output);
};


template <>
struct  StructTraits<::content_settings::mojom::blink::RendererContentSettingRules::DataView,
                                         ::content_settings::mojom::blink::RendererContentSettingRulesPtr> {
  static bool IsNull(const ::content_settings::mojom::blink::RendererContentSettingRulesPtr& input) { return !input; }
  static void SetToNull(::content_settings::mojom::blink::RendererContentSettingRulesPtr* output) { output->reset(); }

  static const decltype(::content_settings::mojom::blink::RendererContentSettingRules::image_rules)& image_rules(
      const ::content_settings::mojom::blink::RendererContentSettingRulesPtr& input) {
    return input->image_rules;
  }

  static const decltype(::content_settings::mojom::blink::RendererContentSettingRules::script_rules)& script_rules(
      const ::content_settings::mojom::blink::RendererContentSettingRulesPtr& input) {
    return input->script_rules;
  }

  static const decltype(::content_settings::mojom::blink::RendererContentSettingRules::autoplay_rules)& autoplay_rules(
      const ::content_settings::mojom::blink::RendererContentSettingRulesPtr& input) {
    return input->autoplay_rules;
  }

  static const decltype(::content_settings::mojom::blink::RendererContentSettingRules::client_hints_rules)& client_hints_rules(
      const ::content_settings::mojom::blink::RendererContentSettingRulesPtr& input) {
    return input->client_hints_rules;
  }

  static const decltype(::content_settings::mojom::blink::RendererContentSettingRules::popup_redirect_rules)& popup_redirect_rules(
      const ::content_settings::mojom::blink::RendererContentSettingRulesPtr& input) {
    return input->popup_redirect_rules;
  }

  static bool Read(::content_settings::mojom::blink::RendererContentSettingRules::DataView input, ::content_settings::mojom::blink::RendererContentSettingRulesPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_BLINK_H_