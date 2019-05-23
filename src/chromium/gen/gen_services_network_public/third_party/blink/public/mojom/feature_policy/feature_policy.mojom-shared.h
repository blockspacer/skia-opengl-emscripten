// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class PolicyValueDataView;

class ParsedFeaturePolicyDeclarationDataView;

class PolicyValueDataDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::PolicyValueDataView> {
  using Data = ::blink::mojom::internal::PolicyValue_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ParsedFeaturePolicyDeclarationDataView> {
  using Data = ::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PolicyValueDataDataView> {
  using Data = ::blink::mojom::internal::PolicyValueData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class WebSandboxFlags : int32_t {
  
  kNone = 0,
  
  kNavigation = 1,
  
  kPlugins = 2,
  
  kOrigin = 4,
  
  kForms = 8,
  
  kScripts = 16,
  
  kTopNavigation = 32,
  
  kPopups = 64,
  
  kAutomaticFeatures = 128,
  
  kPointerLock = 256,
  
  kDocumentDomain = 512,
  
  kOrientationLock = 1024,
  
  kPropagatesToAuxiliaryBrowsingContexts = 2048,
  
  kModals = 4096,
  
  kPresentationController = 8192,
  
  kTopNavigationByUserActivation = 16384,
  
  kDownloads = 32768,
  kMinValue = 0,
  kMaxValue = 32768,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, WebSandboxFlags value);
inline bool IsKnownEnumValue(WebSandboxFlags value) {
  return internal::WebSandboxFlags_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FeaturePolicyFeature : int32_t {
  
  kNotFound = 0,
  
  kAutoplay = 1,
  
  kCamera = 2,
  
  kEncryptedMedia = 3,
  
  kFullscreen = 4,
  
  kGeolocation = 5,
  
  kMicrophone = 6,
  
  kMidiFeature = 7,
  
  kPayment = 8,
  
  kSpeaker = 9,
  
  kDocumentCookie = 10,
  
  kDocumentDomain = 11,
  
  kSyncScript = 12,
  
  kSyncXHR = 13,
  
  kUsb = 14,
  
  kAccessibilityEvents = 15,
  
  kWebVr = 16,
  
  kAccelerometer = 17,
  
  kAmbientLightSensor = 18,
  
  kGyroscope = 19,
  
  kMagnetometer = 20,
  
  kUnsizedMedia = 21,
  
  kOversizedImages = 25,
  
  kPictureInPicture = 26,
  
  kVerticalScroll = 27,
  
  kDocumentWrite = 28,
  
  kLazyLoad = 29,
  
  kLayoutAnimations = 30,
  
  kWakeLock = 31,
  
  kFontDisplay = 32,
  
  kTopNavigation = 33,
  
  kFormSubmission = 34,
  
  kScript = 35,
  
  kPopups = 36,
  
  kPointerLock = 37,
  
  kModals = 38,
  
  kOrientationLock = 39,
  
  kPresentation = 40,
  
  kFrobulate = 41,
  
  kSerial = 42,
  
  kHid = 43,
  
  kIdleDetection = 44,
  
  kUnoptimizedLossyImages = 45,
  
  kUnoptimizedLosslessImages = 46,
  
  kUnoptimizedLosslessImagesStrict = 47,
  
  kLoadingFrameDefaultEager = 48,
  
  kDownloadsWithoutUserActivation = 49,
  
  kExecutionWhileOutOfViewport = 50,
  
  kExecutionWhileNotRendered = 51,
  kMinValue = 0,
  kMaxValue = 51,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FeaturePolicyFeature value);
inline bool IsKnownEnumValue(FeaturePolicyFeature value) {
  return internal::FeaturePolicyFeature_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FeaturePolicyDisposition : int32_t {
  
  kEnforce,
  
  kReport,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FeaturePolicyDisposition value);
inline bool IsKnownEnumValue(FeaturePolicyDisposition value) {
  return internal::FeaturePolicyDisposition_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PolicyValueType : int32_t {
  
  kNull,
  
  kBool,
  
  kDecDouble,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PolicyValueType value);
inline bool IsKnownEnumValue(PolicyValueType value) {
  return internal::PolicyValueType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class PolicyValueDataView {
 public:
  PolicyValueDataView() {}

  PolicyValueDataView(
      internal::PolicyValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      PolicyValueDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::PolicyValueDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::PolicyValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ParsedFeaturePolicyDeclarationDataView {
 public:
  ParsedFeaturePolicyDeclarationDataView() {}

  ParsedFeaturePolicyDeclarationDataView(
      internal::ParsedFeaturePolicyDeclaration_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::FeaturePolicyFeature>(
        data_value, output);
  }

  FeaturePolicyFeature feature() const {
    return static_cast<FeaturePolicyFeature>(data_->feature);
  }
  inline void GetValuesDataView(
      mojo::MapDataView<::url::mojom::OriginDataView, PolicyValueDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::url::mojom::OriginDataView, ::blink::mojom::PolicyValueDataView>>(
        pointer, output, context_);
  }
  inline void GetFallbackValueDataView(
      PolicyValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFallbackValue(UserType* output) {
    auto* pointer = data_->fallback_value.Get();
    return mojo::internal::Deserialize<::blink::mojom::PolicyValueDataView>(
        pointer, output, context_);
  }
  inline void GetOpaqueValueDataView(
      PolicyValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOpaqueValue(UserType* output) {
    auto* pointer = data_->opaque_value.Get();
    return mojo::internal::Deserialize<::blink::mojom::PolicyValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::ParsedFeaturePolicyDeclaration_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PolicyValueDataDataView {
 public:
  using Tag = internal::PolicyValueData_Data::PolicyValueData_Tag;

  PolicyValueDataDataView() {}

  PolicyValueDataDataView(
      internal::PolicyValueData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_null_value() const { return data_->tag == Tag::NULL_VALUE; }
  bool null_value() const {
    DCHECK(is_null_value());
    return data_->data.f_null_value;
  }
  bool is_bool_value() const { return data_->tag == Tag::BOOL_VALUE; }
  bool bool_value() const {
    DCHECK(is_bool_value());
    return data_->data.f_bool_value;
  }
  bool is_dec_double_value() const { return data_->tag == Tag::DEC_DOUBLE_VALUE; }
  double dec_double_value() const {
    DCHECK(is_dec_double_value());
    return data_->data.f_dec_double_value;
  }

 private:
  internal::PolicyValueData_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebSandboxFlags>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebSandboxFlags> {};

template <>
struct hash<::blink::mojom::FeaturePolicyFeature>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FeaturePolicyFeature> {};

template <>
struct hash<::blink::mojom::FeaturePolicyDisposition>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FeaturePolicyDisposition> {};

template <>
struct hash<::blink::mojom::PolicyValueType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PolicyValueType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebSandboxFlags, ::blink::mojom::WebSandboxFlags> {
  static ::blink::mojom::WebSandboxFlags ToMojom(::blink::mojom::WebSandboxFlags input) { return input; }
  static bool FromMojom(::blink::mojom::WebSandboxFlags input, ::blink::mojom::WebSandboxFlags* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebSandboxFlags, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebSandboxFlags, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebSandboxFlags>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FeaturePolicyFeature, ::blink::mojom::FeaturePolicyFeature> {
  static ::blink::mojom::FeaturePolicyFeature ToMojom(::blink::mojom::FeaturePolicyFeature input) { return input; }
  static bool FromMojom(::blink::mojom::FeaturePolicyFeature input, ::blink::mojom::FeaturePolicyFeature* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FeaturePolicyFeature, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FeaturePolicyFeature, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FeaturePolicyFeature>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FeaturePolicyDisposition, ::blink::mojom::FeaturePolicyDisposition> {
  static ::blink::mojom::FeaturePolicyDisposition ToMojom(::blink::mojom::FeaturePolicyDisposition input) { return input; }
  static bool FromMojom(::blink::mojom::FeaturePolicyDisposition input, ::blink::mojom::FeaturePolicyDisposition* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FeaturePolicyDisposition, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FeaturePolicyDisposition, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FeaturePolicyDisposition>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PolicyValueType, ::blink::mojom::PolicyValueType> {
  static ::blink::mojom::PolicyValueType ToMojom(::blink::mojom::PolicyValueType input) { return input; }
  static bool FromMojom(::blink::mojom::PolicyValueType input, ::blink::mojom::PolicyValueType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PolicyValueType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PolicyValueType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PolicyValueType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PolicyValueDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PolicyValueDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PolicyValue_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BufferWriter data_writer;
    data_writer.AllocateInline(buffer, &(*output)->data);
    mojo::internal::Serialize<::blink::mojom::PolicyValueDataDataView>(
        in_data, buffer, &data_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in PolicyValue struct");
  }

  static bool Deserialize(::blink::mojom::internal::PolicyValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PolicyValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ParsedFeaturePolicyDeclarationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ParsedFeaturePolicyDeclarationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::FeaturePolicyFeature>(
        Traits::feature(input), &(*output)->feature);
    decltype(Traits::values(input)) in_values = Traits::values(input);
    typename decltype((*output)->values)::BaseType::BufferWriter
        values_writer;
    const mojo::internal::ContainerValidateParams values_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<::url::mojom::OriginDataView, ::blink::mojom::PolicyValueDataView>>(
        in_values, buffer, &values_writer, &values_validate_params,
        context);
    (*output)->values.Set(
        values_writer.is_null() ? nullptr : values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null values in ParsedFeaturePolicyDeclaration struct");
    decltype(Traits::fallback_value(input)) in_fallback_value = Traits::fallback_value(input);
    typename decltype((*output)->fallback_value)::BaseType::BufferWriter
        fallback_value_writer;
    mojo::internal::Serialize<::blink::mojom::PolicyValueDataView>(
        in_fallback_value, buffer, &fallback_value_writer, context);
    (*output)->fallback_value.Set(
        fallback_value_writer.is_null() ? nullptr : fallback_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fallback_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fallback_value in ParsedFeaturePolicyDeclaration struct");
    decltype(Traits::opaque_value(input)) in_opaque_value = Traits::opaque_value(input);
    typename decltype((*output)->opaque_value)::BaseType::BufferWriter
        opaque_value_writer;
    mojo::internal::Serialize<::blink::mojom::PolicyValueDataView>(
        in_opaque_value, buffer, &opaque_value_writer, context);
    (*output)->opaque_value.Set(
        opaque_value_writer.is_null() ? nullptr : opaque_value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->opaque_value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null opaque_value in ParsedFeaturePolicyDeclaration struct");
  }

  static bool Deserialize(::blink::mojom::internal::ParsedFeaturePolicyDeclaration_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ParsedFeaturePolicyDeclarationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PolicyValueDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::PolicyValueDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PolicyValueData_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::PolicyValueData_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::PolicyValueDataDataView::Tag::NULL_VALUE: {
        decltype(Traits::null_value(input))
            in_null_value = Traits::null_value(input);
        result->data.f_null_value = in_null_value;
        break;
      }
      case ::blink::mojom::PolicyValueDataDataView::Tag::BOOL_VALUE: {
        decltype(Traits::bool_value(input))
            in_bool_value = Traits::bool_value(input);
        result->data.f_bool_value = in_bool_value;
        break;
      }
      case ::blink::mojom::PolicyValueDataDataView::Tag::DEC_DOUBLE_VALUE: {
        decltype(Traits::dec_double_value(input))
            in_dec_double_value = Traits::dec_double_value(input);
        result->data.f_dec_double_value = in_dec_double_value;
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::PolicyValueData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PolicyValueDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void PolicyValueDataView::GetDataDataView(
    PolicyValueDataDataView* output) {
  auto pointer = &data_->data;
  *output = PolicyValueDataDataView(pointer, context_);
}


inline void ParsedFeaturePolicyDeclarationDataView::GetValuesDataView(
    mojo::MapDataView<::url::mojom::OriginDataView, PolicyValueDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::MapDataView<::url::mojom::OriginDataView, PolicyValueDataView>(pointer, context_);
}
inline void ParsedFeaturePolicyDeclarationDataView::GetFallbackValueDataView(
    PolicyValueDataView* output) {
  auto pointer = data_->fallback_value.Get();
  *output = PolicyValueDataView(pointer, context_);
}
inline void ParsedFeaturePolicyDeclarationDataView::GetOpaqueValueDataView(
    PolicyValueDataView* output) {
  auto pointer = data_->opaque_value.Get();
  *output = PolicyValueDataView(pointer, context_);
}




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_SHARED_H_