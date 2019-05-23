// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace test {
namespace mojom {
class VirtualAuthenticatorOptionsDataView;

class RegisteredKeyDataView;



}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::test::mojom::VirtualAuthenticatorOptionsDataView> {
  using Data = ::blink::test::mojom::internal::VirtualAuthenticatorOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::test::mojom::RegisteredKeyDataView> {
  using Data = ::blink::test::mojom::internal::RegisteredKey_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace test {
namespace mojom {


enum class ClientToAuthenticatorProtocol : int32_t {
  
  U2F,
  
  CTAP2,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ClientToAuthenticatorProtocol value);
inline bool IsKnownEnumValue(ClientToAuthenticatorProtocol value) {
  return internal::ClientToAuthenticatorProtocol_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class VirtualAuthenticatorInterfaceBase {};

using VirtualAuthenticatorPtrDataView =
    mojo::InterfacePtrDataView<VirtualAuthenticatorInterfaceBase>;
using VirtualAuthenticatorRequestDataView =
    mojo::InterfaceRequestDataView<VirtualAuthenticatorInterfaceBase>;
using VirtualAuthenticatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VirtualAuthenticatorInterfaceBase>;
using VirtualAuthenticatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VirtualAuthenticatorInterfaceBase>;
class VirtualAuthenticatorManagerInterfaceBase {};

using VirtualAuthenticatorManagerPtrDataView =
    mojo::InterfacePtrDataView<VirtualAuthenticatorManagerInterfaceBase>;
using VirtualAuthenticatorManagerRequestDataView =
    mojo::InterfaceRequestDataView<VirtualAuthenticatorManagerInterfaceBase>;
using VirtualAuthenticatorManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<VirtualAuthenticatorManagerInterfaceBase>;
using VirtualAuthenticatorManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<VirtualAuthenticatorManagerInterfaceBase>;
class VirtualAuthenticatorOptionsDataView {
 public:
  VirtualAuthenticatorOptionsDataView() {}

  VirtualAuthenticatorOptionsDataView(
      internal::VirtualAuthenticatorOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtocol(UserType* output) const {
    auto data_value = data_->protocol;
    return mojo::internal::Deserialize<::blink::test::mojom::ClientToAuthenticatorProtocol>(
        data_value, output);
  }

  ClientToAuthenticatorProtocol protocol() const {
    return static_cast<ClientToAuthenticatorProtocol>(data_->protocol);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTransport(UserType* output) const {
    auto data_value = data_->transport;
    return mojo::internal::Deserialize<::blink::mojom::AuthenticatorTransport>(
        data_value, output);
  }

  ::blink::mojom::AuthenticatorTransport transport() const {
    return static_cast<::blink::mojom::AuthenticatorTransport>(data_->transport);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAttachment(UserType* output) const {
    auto data_value = data_->attachment;
    return mojo::internal::Deserialize<::blink::mojom::AuthenticatorAttachment>(
        data_value, output);
  }

  ::blink::mojom::AuthenticatorAttachment attachment() const {
    return static_cast<::blink::mojom::AuthenticatorAttachment>(data_->attachment);
  }
  bool has_resident_key() const {
    return data_->has_resident_key;
  }
  bool has_user_verification() const {
    return data_->has_user_verification;
  }
 private:
  internal::VirtualAuthenticatorOptions_Data* data_ = nullptr;
};

class RegisteredKeyDataView {
 public:
  RegisteredKeyDataView() {}

  RegisteredKeyDataView(
      internal::RegisteredKey_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyHandleDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyHandle(UserType* output) {
    auto* pointer = data_->key_handle.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetApplicationParameterDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadApplicationParameter(UserType* output) {
    auto* pointer = data_->application_parameter.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPrivateKeyDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPrivateKey(UserType* output) {
    auto* pointer = data_->private_key.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  int32_t counter() const {
    return data_->counter;
  }
 private:
  internal::RegisteredKey_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace std {

template <>
struct hash<::blink::test::mojom::ClientToAuthenticatorProtocol>
    : public mojo::internal::EnumHashImpl<::blink::test::mojom::ClientToAuthenticatorProtocol> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::test::mojom::ClientToAuthenticatorProtocol, ::blink::test::mojom::ClientToAuthenticatorProtocol> {
  static ::blink::test::mojom::ClientToAuthenticatorProtocol ToMojom(::blink::test::mojom::ClientToAuthenticatorProtocol input) { return input; }
  static bool FromMojom(::blink::test::mojom::ClientToAuthenticatorProtocol input, ::blink::test::mojom::ClientToAuthenticatorProtocol* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::test::mojom::ClientToAuthenticatorProtocol, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::test::mojom::ClientToAuthenticatorProtocol, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::test::mojom::ClientToAuthenticatorProtocol>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::test::mojom::VirtualAuthenticatorOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::test::mojom::VirtualAuthenticatorOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::test::mojom::internal::VirtualAuthenticatorOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::test::mojom::ClientToAuthenticatorProtocol>(
        Traits::protocol(input), &(*output)->protocol);
    mojo::internal::Serialize<::blink::mojom::AuthenticatorTransport>(
        Traits::transport(input), &(*output)->transport);
    mojo::internal::Serialize<::blink::mojom::AuthenticatorAttachment>(
        Traits::attachment(input), &(*output)->attachment);
    (*output)->has_resident_key = Traits::has_resident_key(input);
    (*output)->has_user_verification = Traits::has_user_verification(input);
  }

  static bool Deserialize(::blink::test::mojom::internal::VirtualAuthenticatorOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::test::mojom::VirtualAuthenticatorOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::test::mojom::RegisteredKeyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::test::mojom::RegisteredKeyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::test::mojom::internal::RegisteredKey_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::key_handle(input)) in_key_handle = Traits::key_handle(input);
    typename decltype((*output)->key_handle)::BaseType::BufferWriter
        key_handle_writer;
    const mojo::internal::ContainerValidateParams key_handle_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_key_handle, buffer, &key_handle_writer, &key_handle_validate_params,
        context);
    (*output)->key_handle.Set(
        key_handle_writer.is_null() ? nullptr : key_handle_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key_handle.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key_handle in RegisteredKey struct");
    decltype(Traits::application_parameter(input)) in_application_parameter = Traits::application_parameter(input);
    typename decltype((*output)->application_parameter)::BaseType::BufferWriter
        application_parameter_writer;
    const mojo::internal::ContainerValidateParams application_parameter_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_application_parameter, buffer, &application_parameter_writer, &application_parameter_validate_params,
        context);
    (*output)->application_parameter.Set(
        application_parameter_writer.is_null() ? nullptr : application_parameter_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->application_parameter.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null application_parameter in RegisteredKey struct");
    decltype(Traits::private_key(input)) in_private_key = Traits::private_key(input);
    typename decltype((*output)->private_key)::BaseType::BufferWriter
        private_key_writer;
    const mojo::internal::ContainerValidateParams private_key_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_private_key, buffer, &private_key_writer, &private_key_validate_params,
        context);
    (*output)->private_key.Set(
        private_key_writer.is_null() ? nullptr : private_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->private_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null private_key in RegisteredKey struct");
    (*output)->counter = Traits::counter(input);
  }

  static bool Deserialize(::blink::test::mojom::internal::RegisteredKey_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::test::mojom::RegisteredKeyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace test {
namespace mojom {



inline void RegisteredKeyDataView::GetKeyHandleDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_handle.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void RegisteredKeyDataView::GetApplicationParameterDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->application_parameter.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void RegisteredKeyDataView::GetPrivateKeyDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->private_key.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace test
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_VIRTUAL_AUTHENTICATOR_MOJOM_SHARED_H_