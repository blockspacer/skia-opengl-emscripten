// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/ssl_config.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class SSLConfigDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::SSLConfigDataView> {
  using Data = ::network::mojom::internal::SSLConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class SSLVersion : int32_t {
  
  kTLS1,
  
  kTLS11,
  
  kTLS12,
  
  kTLS13,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, SSLVersion value);
inline bool IsKnownEnumValue(SSLVersion value) {
  return internal::SSLVersion_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SSLConfigClientInterfaceBase {};

using SSLConfigClientPtrDataView =
    mojo::InterfacePtrDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientRequestDataView =
    mojo::InterfaceRequestDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SSLConfigClientInterfaceBase>;
using SSLConfigClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SSLConfigClientInterfaceBase>;
class SSLConfigDataView {
 public:
  SSLConfigDataView() {}

  SSLConfigDataView(
      internal::SSLConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool rev_checking_enabled() const {
    return data_->rev_checking_enabled;
  }
  bool rev_checking_required_local_anchors() const {
    return data_->rev_checking_required_local_anchors;
  }
  bool sha1_local_anchors_enabled() const {
    return data_->sha1_local_anchors_enabled;
  }
  bool symantec_enforcement_disabled() const {
    return data_->symantec_enforcement_disabled;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersionMin(UserType* output) const {
    auto data_value = data_->version_min;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }

  SSLVersion version_min() const {
    return static_cast<SSLVersion>(data_->version_min);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersionMax(UserType* output) const {
    auto data_value = data_->version_max;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }

  SSLVersion version_max() const {
    return static_cast<SSLVersion>(data_->version_max);
  }
  inline void GetDisabledCipherSuitesDataView(
      mojo::ArrayDataView<uint16_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisabledCipherSuites(UserType* output) {
    auto* pointer = data_->disabled_cipher_suites.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint16_t>>(
        pointer, output, context_);
  }
  inline void GetClientCertPoolingPolicyDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientCertPoolingPolicy(UserType* output) {
    auto* pointer = data_->client_cert_pooling_policy.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SSLConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::SSLVersion>
    : public mojo::internal::EnumHashImpl<::network::mojom::SSLVersion> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::SSLVersion, ::network::mojom::SSLVersion> {
  static ::network::mojom::SSLVersion ToMojom(::network::mojom::SSLVersion input) { return input; }
  static bool FromMojom(::network::mojom::SSLVersion input, ::network::mojom::SSLVersion* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SSLVersion, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::SSLVersion, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::SSLVersion>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SSLConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::SSLConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::SSLConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->rev_checking_enabled = Traits::rev_checking_enabled(input);
    (*output)->rev_checking_required_local_anchors = Traits::rev_checking_required_local_anchors(input);
    (*output)->sha1_local_anchors_enabled = Traits::sha1_local_anchors_enabled(input);
    (*output)->symantec_enforcement_disabled = Traits::symantec_enforcement_disabled(input);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        Traits::version_min(input), &(*output)->version_min);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        Traits::version_max(input), &(*output)->version_max);
    decltype(Traits::disabled_cipher_suites(input)) in_disabled_cipher_suites = Traits::disabled_cipher_suites(input);
    typename decltype((*output)->disabled_cipher_suites)::BaseType::BufferWriter
        disabled_cipher_suites_writer;
    const mojo::internal::ContainerValidateParams disabled_cipher_suites_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint16_t>>(
        in_disabled_cipher_suites, buffer, &disabled_cipher_suites_writer, &disabled_cipher_suites_validate_params,
        context);
    (*output)->disabled_cipher_suites.Set(
        disabled_cipher_suites_writer.is_null() ? nullptr : disabled_cipher_suites_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->disabled_cipher_suites.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null disabled_cipher_suites in SSLConfig struct");
    decltype(Traits::client_cert_pooling_policy(input)) in_client_cert_pooling_policy = Traits::client_cert_pooling_policy(input);
    typename decltype((*output)->client_cert_pooling_policy)::BaseType::BufferWriter
        client_cert_pooling_policy_writer;
    const mojo::internal::ContainerValidateParams client_cert_pooling_policy_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_client_cert_pooling_policy, buffer, &client_cert_pooling_policy_writer, &client_cert_pooling_policy_validate_params,
        context);
    (*output)->client_cert_pooling_policy.Set(
        client_cert_pooling_policy_writer.is_null() ? nullptr : client_cert_pooling_policy_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_cert_pooling_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_cert_pooling_policy in SSLConfig struct");
  }

  static bool Deserialize(::network::mojom::internal::SSLConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::SSLConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void SSLConfigDataView::GetDisabledCipherSuitesDataView(
    mojo::ArrayDataView<uint16_t>* output) {
  auto pointer = data_->disabled_cipher_suites.Get();
  *output = mojo::ArrayDataView<uint16_t>(pointer, context_);
}
inline void SSLConfigDataView::GetClientCertPoolingPolicyDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->client_cert_pooling_policy.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_SHARED_H_