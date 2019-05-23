// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom-shared.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "services/network/public/mojom/host_resolver.mojom-shared.h"
#include "services/network/public/mojom/net_log.mojom-shared.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared.h"
#include "services/network/public/mojom/network_context.mojom-shared.h"
#include "services/network/public/mojom/network_interface.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/network_quality_estimator_manager.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "services/network/public/mojom/signed_tree_head.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class LoadInfoDataView;

class HttpAuthStaticParamsDataView;

class HttpAuthDynamicParamsDataView;

class CryptConfigDataView;

class EnvironmentVariableDataView;

class NetworkServiceParamsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::LoadInfoDataView> {
  using Data = ::network::mojom::internal::LoadInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::HttpAuthStaticParamsDataView> {
  using Data = ::network::mojom::internal::HttpAuthStaticParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::HttpAuthDynamicParamsDataView> {
  using Data = ::network::mojom::internal::HttpAuthDynamicParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CryptConfigDataView> {
  using Data = ::network::mojom::internal::CryptConfig_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::EnvironmentVariableDataView> {
  using Data = ::network::mojom::internal::EnvironmentVariable_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::NetworkServiceParamsDataView> {
  using Data = ::network::mojom::internal::NetworkServiceParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SSLPrivateKeyInterfaceBase {};

using SSLPrivateKeyPtrDataView =
    mojo::InterfacePtrDataView<SSLPrivateKeyInterfaceBase>;
using SSLPrivateKeyRequestDataView =
    mojo::InterfaceRequestDataView<SSLPrivateKeyInterfaceBase>;
using SSLPrivateKeyAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SSLPrivateKeyInterfaceBase>;
using SSLPrivateKeyAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SSLPrivateKeyInterfaceBase>;
class AuthChallengeResponderInterfaceBase {};

using AuthChallengeResponderPtrDataView =
    mojo::InterfacePtrDataView<AuthChallengeResponderInterfaceBase>;
using AuthChallengeResponderRequestDataView =
    mojo::InterfaceRequestDataView<AuthChallengeResponderInterfaceBase>;
using AuthChallengeResponderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AuthChallengeResponderInterfaceBase>;
using AuthChallengeResponderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AuthChallengeResponderInterfaceBase>;
class NetworkServiceClientInterfaceBase {};

using NetworkServiceClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkServiceClientInterfaceBase>;
using NetworkServiceClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkServiceClientInterfaceBase>;
using NetworkServiceClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkServiceClientInterfaceBase>;
using NetworkServiceClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkServiceClientInterfaceBase>;
class NetworkServiceInterfaceBase {};

using NetworkServicePtrDataView =
    mojo::InterfacePtrDataView<NetworkServiceInterfaceBase>;
using NetworkServiceRequestDataView =
    mojo::InterfaceRequestDataView<NetworkServiceInterfaceBase>;
using NetworkServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkServiceInterfaceBase>;
using NetworkServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkServiceInterfaceBase>;
class LoadInfoDataView {
 public:
  LoadInfoDataView() {}

  LoadInfoDataView(
      internal::LoadInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t process_id() const {
    return data_->process_id;
  }
  uint32_t routing_id() const {
    return data_->routing_id;
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t load_state() const {
    return data_->load_state;
  }
  inline void GetStateParamDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStateParam(UserType* output) {
    auto* pointer = data_->state_param.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  uint64_t upload_position() const {
    return data_->upload_position;
  }
  uint64_t upload_size() const {
    return data_->upload_size;
  }
 private:
  internal::LoadInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HttpAuthStaticParamsDataView {
 public:
  HttpAuthStaticParamsDataView() {}

  HttpAuthStaticParamsDataView(
      internal::HttpAuthStaticParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedSchemesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedSchemes(UserType* output) {
    auto* pointer = data_->supported_schemes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetGssapiLibraryNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGssapiLibraryName(UserType* output) {
    auto* pointer = data_->gssapi_library_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool allow_gssapi_library_load() const {
    return data_->allow_gssapi_library_load;
  }
 private:
  internal::HttpAuthStaticParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HttpAuthDynamicParamsDataView {
 public:
  HttpAuthDynamicParamsDataView() {}

  HttpAuthDynamicParamsDataView(
      internal::HttpAuthDynamicParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServerWhitelistDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServerWhitelist(UserType* output) {
    auto* pointer = data_->server_whitelist.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDelegateWhitelistDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDelegateWhitelist(UserType* output) {
    auto* pointer = data_->delegate_whitelist.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool delegate_by_kdc_policy() const {
    return data_->delegate_by_kdc_policy;
  }
  bool negotiate_disable_cname_lookup() const {
    return data_->negotiate_disable_cname_lookup;
  }
  bool enable_negotiate_port() const {
    return data_->enable_negotiate_port;
  }
  bool ntlm_v2_enabled() const {
    return data_->ntlm_v2_enabled;
  }
  inline void GetAndroidNegotiateAccountTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAndroidNegotiateAccountType(UserType* output) {
    auto* pointer = data_->android_negotiate_account_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::HttpAuthDynamicParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CryptConfigDataView {
 public:
  CryptConfigDataView() {}

  CryptConfigDataView(
      internal::CryptConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStoreDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStore(UserType* output) {
    auto* pointer = data_->store.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetProductNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProductName(UserType* output) {
    auto* pointer = data_->product_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool should_use_preference() const {
    return data_->should_use_preference;
  }
  inline void GetUserDataPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserDataPath(UserType* output) {
    auto* pointer = data_->user_data_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::CryptConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EnvironmentVariableDataView {
 public:
  EnvironmentVariableDataView() {}

  EnvironmentVariableDataView(
      internal::EnvironmentVariable_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::EnvironmentVariable_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NetworkServiceParamsDataView {
 public:
  NetworkServiceParamsDataView() {}

  NetworkServiceParamsDataView(
      internal::NetworkServiceParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialConnectionType(UserType* output) const {
    auto data_value = data_->initial_connection_type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ::network::mojom::ConnectionType initial_connection_type() const {
    return static_cast<::network::mojom::ConnectionType>(data_->initial_connection_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialConnectionSubtype(UserType* output) const {
    auto data_value = data_->initial_connection_subtype;
    return mojo::internal::Deserialize<::network::mojom::ConnectionSubtype>(
        data_value, output);
  }

  ::network::mojom::ConnectionSubtype initial_connection_subtype() const {
    return static_cast<::network::mojom::ConnectionSubtype>(data_->initial_connection_subtype);
  }
  inline void GetEnvironmentDataView(
      mojo::ArrayDataView<EnvironmentVariableDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnvironment(UserType* output) {
    auto* pointer = data_->environment.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::EnvironmentVariableDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NetworkServiceParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::LoadInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::LoadInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::LoadInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->process_id = Traits::process_id(input);
    (*output)->routing_id = Traits::routing_id(input);
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
        "null host in LoadInfo struct");
    (*output)->load_state = Traits::load_state(input);
    decltype(Traits::state_param(input)) in_state_param = Traits::state_param(input);
    typename decltype((*output)->state_param)::BaseType::BufferWriter
        state_param_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_state_param, buffer, &state_param_writer, context);
    (*output)->state_param.Set(
        state_param_writer.is_null() ? nullptr : state_param_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->state_param.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null state_param in LoadInfo struct");
    (*output)->upload_position = Traits::upload_position(input);
    (*output)->upload_size = Traits::upload_size(input);
  }

  static bool Deserialize(::network::mojom::internal::LoadInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::LoadInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpAuthStaticParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpAuthStaticParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::HttpAuthStaticParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::supported_schemes(input)) in_supported_schemes = Traits::supported_schemes(input);
    typename decltype((*output)->supported_schemes)::BaseType::BufferWriter
        supported_schemes_writer;
    const mojo::internal::ContainerValidateParams supported_schemes_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_supported_schemes, buffer, &supported_schemes_writer, &supported_schemes_validate_params,
        context);
    (*output)->supported_schemes.Set(
        supported_schemes_writer.is_null() ? nullptr : supported_schemes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->supported_schemes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null supported_schemes in HttpAuthStaticParams struct");
    decltype(Traits::gssapi_library_name(input)) in_gssapi_library_name = Traits::gssapi_library_name(input);
    typename decltype((*output)->gssapi_library_name)::BaseType::BufferWriter
        gssapi_library_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_gssapi_library_name, buffer, &gssapi_library_name_writer, context);
    (*output)->gssapi_library_name.Set(
        gssapi_library_name_writer.is_null() ? nullptr : gssapi_library_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->gssapi_library_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null gssapi_library_name in HttpAuthStaticParams struct");
    (*output)->allow_gssapi_library_load = Traits::allow_gssapi_library_load(input);
  }

  static bool Deserialize(::network::mojom::internal::HttpAuthStaticParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpAuthStaticParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpAuthDynamicParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpAuthDynamicParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::HttpAuthDynamicParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::server_whitelist(input)) in_server_whitelist = Traits::server_whitelist(input);
    typename decltype((*output)->server_whitelist)::BaseType::BufferWriter
        server_whitelist_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_server_whitelist, buffer, &server_whitelist_writer, context);
    (*output)->server_whitelist.Set(
        server_whitelist_writer.is_null() ? nullptr : server_whitelist_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->server_whitelist.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null server_whitelist in HttpAuthDynamicParams struct");
    decltype(Traits::delegate_whitelist(input)) in_delegate_whitelist = Traits::delegate_whitelist(input);
    typename decltype((*output)->delegate_whitelist)::BaseType::BufferWriter
        delegate_whitelist_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_delegate_whitelist, buffer, &delegate_whitelist_writer, context);
    (*output)->delegate_whitelist.Set(
        delegate_whitelist_writer.is_null() ? nullptr : delegate_whitelist_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->delegate_whitelist.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null delegate_whitelist in HttpAuthDynamicParams struct");
    (*output)->delegate_by_kdc_policy = Traits::delegate_by_kdc_policy(input);
    (*output)->negotiate_disable_cname_lookup = Traits::negotiate_disable_cname_lookup(input);
    (*output)->enable_negotiate_port = Traits::enable_negotiate_port(input);
    (*output)->ntlm_v2_enabled = Traits::ntlm_v2_enabled(input);
    decltype(Traits::android_negotiate_account_type(input)) in_android_negotiate_account_type = Traits::android_negotiate_account_type(input);
    typename decltype((*output)->android_negotiate_account_type)::BaseType::BufferWriter
        android_negotiate_account_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_android_negotiate_account_type, buffer, &android_negotiate_account_type_writer, context);
    (*output)->android_negotiate_account_type.Set(
        android_negotiate_account_type_writer.is_null() ? nullptr : android_negotiate_account_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->android_negotiate_account_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null android_negotiate_account_type in HttpAuthDynamicParams struct");
  }

  static bool Deserialize(::network::mojom::internal::HttpAuthDynamicParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpAuthDynamicParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CryptConfigDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CryptConfigDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CryptConfig_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::store(input)) in_store = Traits::store(input);
    typename decltype((*output)->store)::BaseType::BufferWriter
        store_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_store, buffer, &store_writer, context);
    (*output)->store.Set(
        store_writer.is_null() ? nullptr : store_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->store.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null store in CryptConfig struct");
    decltype(Traits::product_name(input)) in_product_name = Traits::product_name(input);
    typename decltype((*output)->product_name)::BaseType::BufferWriter
        product_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_product_name, buffer, &product_name_writer, context);
    (*output)->product_name.Set(
        product_name_writer.is_null() ? nullptr : product_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->product_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null product_name in CryptConfig struct");
    (*output)->should_use_preference = Traits::should_use_preference(input);
    decltype(Traits::user_data_path(input)) in_user_data_path = Traits::user_data_path(input);
    typename decltype((*output)->user_data_path)::BaseType::BufferWriter
        user_data_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_user_data_path, buffer, &user_data_path_writer, context);
    (*output)->user_data_path.Set(
        user_data_path_writer.is_null() ? nullptr : user_data_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->user_data_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null user_data_path in CryptConfig struct");
  }

  static bool Deserialize(::network::mojom::internal::CryptConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CryptConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::EnvironmentVariableDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::EnvironmentVariableDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::EnvironmentVariable_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in EnvironmentVariable struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in EnvironmentVariable struct");
  }

  static bool Deserialize(::network::mojom::internal::EnvironmentVariable_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::EnvironmentVariableDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkServiceParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkServiceParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkServiceParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::ConnectionType>(
        Traits::initial_connection_type(input), &(*output)->initial_connection_type);
    mojo::internal::Serialize<::network::mojom::ConnectionSubtype>(
        Traits::initial_connection_subtype(input), &(*output)->initial_connection_subtype);
    decltype(Traits::environment(input)) in_environment = Traits::environment(input);
    typename decltype((*output)->environment)::BaseType::BufferWriter
        environment_writer;
    const mojo::internal::ContainerValidateParams environment_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::EnvironmentVariableDataView>>(
        in_environment, buffer, &environment_writer, &environment_validate_params,
        context);
    (*output)->environment.Set(
        environment_writer.is_null() ? nullptr : environment_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->environment.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null environment in NetworkServiceParams struct");
  }

  static bool Deserialize(::network::mojom::internal::NetworkServiceParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkServiceParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void LoadInfoDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LoadInfoDataView::GetStateParamDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->state_param.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void HttpAuthStaticParamsDataView::GetSupportedSchemesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->supported_schemes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void HttpAuthStaticParamsDataView::GetGssapiLibraryNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->gssapi_library_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void HttpAuthDynamicParamsDataView::GetServerWhitelistDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->server_whitelist.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HttpAuthDynamicParamsDataView::GetDelegateWhitelistDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->delegate_whitelist.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HttpAuthDynamicParamsDataView::GetAndroidNegotiateAccountTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->android_negotiate_account_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CryptConfigDataView::GetStoreDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->store.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CryptConfigDataView::GetProductNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->product_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CryptConfigDataView::GetUserDataPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->user_data_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void EnvironmentVariableDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void EnvironmentVariableDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NetworkServiceParamsDataView::GetEnvironmentDataView(
    mojo::ArrayDataView<EnvironmentVariableDataView>* output) {
  auto pointer = data_->environment.Get();
  *output = mojo::ArrayDataView<EnvironmentVariableDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_H_