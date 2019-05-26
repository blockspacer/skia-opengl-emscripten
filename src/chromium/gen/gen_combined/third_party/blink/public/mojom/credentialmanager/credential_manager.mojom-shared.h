// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class CredentialInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::CredentialInfoDataView> {
  using Data = ::blink::mojom::internal::CredentialInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class CredentialType : int32_t {
  
  EMPTY,
  
  PASSWORD,
  
  FEDERATED,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, CredentialType value);
inline bool IsKnownEnumValue(CredentialType value) {
  return internal::CredentialType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CredentialMediationRequirement : int32_t {
  
  kSilent,
  
  kOptional,
  
  kRequired,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, CredentialMediationRequirement value);
inline bool IsKnownEnumValue(CredentialMediationRequirement value) {
  return internal::CredentialMediationRequirement_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CredentialManagerError : int32_t {
  
  SUCCESS,
  
  PENDING_REQUEST,
  
  PASSWORD_STORE_UNAVAILABLE,
  
  NOT_ALLOWED,
  
  INVALID_DOMAIN,
  
  CREDENTIAL_EXCLUDED,
  
  CREDENTIAL_NOT_RECOGNIZED,
  
  NOT_IMPLEMENTED,
  
  NOT_FOCUSED,
  
  RESIDENT_CREDENTIALS_UNSUPPORTED,
  
  PROTECTION_POLICY_INCONSISTENT,
  
  ANDROID_ALGORITHM_UNSUPPORTED,
  
  ANDROID_EMPTY_ALLOW_CREDENTIALS,
  
  ANDROID_NOT_SUPPORTED_ERROR,
  
  ANDROID_USER_VERIFICATION_UNSUPPORTED,
  
  ABORT,
  
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 16,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, CredentialManagerError value);
inline bool IsKnownEnumValue(CredentialManagerError value) {
  return internal::CredentialManagerError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CredentialManagerInterfaceBase {};

using CredentialManagerPtrDataView =
    mojo::InterfacePtrDataView<CredentialManagerInterfaceBase>;
using CredentialManagerRequestDataView =
    mojo::InterfaceRequestDataView<CredentialManagerInterfaceBase>;
using CredentialManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CredentialManagerInterfaceBase>;
using CredentialManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CredentialManagerInterfaceBase>;
class CredentialInfoDataView {
 public:
  CredentialInfoDataView() {}

  CredentialInfoDataView(
      internal::CredentialInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::CredentialType>(
        data_value, output);
  }

  CredentialType type() const {
    return static_cast<CredentialType>(data_->type);
  }
  inline void GetIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetPasswordDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassword(UserType* output) {
    auto* pointer = data_->password.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFederationDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFederation(UserType* output) {
    auto* pointer = data_->federation.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::CredentialInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::CredentialType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::CredentialType> {};

template <>
struct hash<::blink::mojom::CredentialMediationRequirement>
    : public mojo::internal::EnumHashImpl<::blink::mojom::CredentialMediationRequirement> {};

template <>
struct hash<::blink::mojom::CredentialManagerError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::CredentialManagerError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::CredentialType, ::blink::mojom::CredentialType> {
  static ::blink::mojom::CredentialType ToMojom(::blink::mojom::CredentialType input) { return input; }
  static bool FromMojom(::blink::mojom::CredentialType input, ::blink::mojom::CredentialType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CredentialType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::CredentialType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::CredentialType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::CredentialMediationRequirement, ::blink::mojom::CredentialMediationRequirement> {
  static ::blink::mojom::CredentialMediationRequirement ToMojom(::blink::mojom::CredentialMediationRequirement input) { return input; }
  static bool FromMojom(::blink::mojom::CredentialMediationRequirement input, ::blink::mojom::CredentialMediationRequirement* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CredentialMediationRequirement, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::CredentialMediationRequirement, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::CredentialMediationRequirement>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::CredentialManagerError, ::blink::mojom::CredentialManagerError> {
  static ::blink::mojom::CredentialManagerError ToMojom(::blink::mojom::CredentialManagerError input) { return input; }
  static bool FromMojom(::blink::mojom::CredentialManagerError input, ::blink::mojom::CredentialManagerError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CredentialManagerError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::CredentialManagerError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::CredentialManagerError>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CredentialInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CredentialInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CredentialInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::CredentialType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::icon(input)) in_icon = Traits::icon(input);
    typename decltype((*output)->icon)::BaseType::BufferWriter
        icon_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_icon, buffer, &icon_writer, context);
    (*output)->icon.Set(
        icon_writer.is_null() ? nullptr : icon_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->icon.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null icon in CredentialInfo struct");
    decltype(Traits::password(input)) in_password = Traits::password(input);
    typename decltype((*output)->password)::BaseType::BufferWriter
        password_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_password, buffer, &password_writer, context);
    (*output)->password.Set(
        password_writer.is_null() ? nullptr : password_writer.data());
    decltype(Traits::federation(input)) in_federation = Traits::federation(input);
    typename decltype((*output)->federation)::BaseType::BufferWriter
        federation_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_federation, buffer, &federation_writer, context);
    (*output)->federation.Set(
        federation_writer.is_null() ? nullptr : federation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->federation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null federation in CredentialInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::CredentialInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CredentialInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void CredentialInfoDataView::GetIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CredentialInfoDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CredentialInfoDataView::GetIconDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CredentialInfoDataView::GetPasswordDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->password.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void CredentialInfoDataView::GetFederationDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->federation.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_SHARED_H_