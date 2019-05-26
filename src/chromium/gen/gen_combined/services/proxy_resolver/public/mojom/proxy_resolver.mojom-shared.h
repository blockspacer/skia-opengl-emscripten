// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_H_

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
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace proxy_resolver {
namespace mojom {
class ProxyServerDataView;

class ProxyInfoDataView;



}  // namespace mojom
}  // namespace proxy_resolver

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::proxy_resolver::mojom::ProxyServerDataView> {
  using Data = ::proxy_resolver::mojom::internal::ProxyServer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::proxy_resolver::mojom::ProxyInfoDataView> {
  using Data = ::proxy_resolver::mojom::internal::ProxyInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace proxy_resolver {
namespace mojom {


enum class HostResolveOperation : int32_t {
  
  DNS_RESOLVE,
  
  DNS_RESOLVE_EX,
  
  MY_IP_ADDRESS,
  
  MY_IP_ADDRESS_EX,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, HostResolveOperation value);
inline bool IsKnownEnumValue(HostResolveOperation value) {
  return internal::HostResolveOperation_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ProxyScheme : int32_t {
  
  INVALID,
  
  DIRECT,
  
  HTTP,
  
  SOCKS4,
  
  SOCKS5,
  
  HTTPS,
  
  QUIC,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, ProxyScheme value);
inline bool IsKnownEnumValue(ProxyScheme value) {
  return internal::ProxyScheme_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class HostResolverRequestClientInterfaceBase {};

using HostResolverRequestClientPtrDataView =
    mojo::InterfacePtrDataView<HostResolverRequestClientInterfaceBase>;
using HostResolverRequestClientRequestDataView =
    mojo::InterfaceRequestDataView<HostResolverRequestClientInterfaceBase>;
using HostResolverRequestClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HostResolverRequestClientInterfaceBase>;
using HostResolverRequestClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HostResolverRequestClientInterfaceBase>;
class ProxyResolverInterfaceBase {};

using ProxyResolverPtrDataView =
    mojo::InterfacePtrDataView<ProxyResolverInterfaceBase>;
using ProxyResolverRequestDataView =
    mojo::InterfaceRequestDataView<ProxyResolverInterfaceBase>;
using ProxyResolverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyResolverInterfaceBase>;
using ProxyResolverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyResolverInterfaceBase>;
class ProxyResolverRequestClientInterfaceBase {};

using ProxyResolverRequestClientPtrDataView =
    mojo::InterfacePtrDataView<ProxyResolverRequestClientInterfaceBase>;
using ProxyResolverRequestClientRequestDataView =
    mojo::InterfaceRequestDataView<ProxyResolverRequestClientInterfaceBase>;
using ProxyResolverRequestClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyResolverRequestClientInterfaceBase>;
using ProxyResolverRequestClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyResolverRequestClientInterfaceBase>;
class ProxyResolverFactoryInterfaceBase {};

using ProxyResolverFactoryPtrDataView =
    mojo::InterfacePtrDataView<ProxyResolverFactoryInterfaceBase>;
using ProxyResolverFactoryRequestDataView =
    mojo::InterfaceRequestDataView<ProxyResolverFactoryInterfaceBase>;
using ProxyResolverFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyResolverFactoryInterfaceBase>;
using ProxyResolverFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyResolverFactoryInterfaceBase>;
class ProxyResolverFactoryRequestClientInterfaceBase {};

using ProxyResolverFactoryRequestClientPtrDataView =
    mojo::InterfacePtrDataView<ProxyResolverFactoryRequestClientInterfaceBase>;
using ProxyResolverFactoryRequestClientRequestDataView =
    mojo::InterfaceRequestDataView<ProxyResolverFactoryRequestClientInterfaceBase>;
using ProxyResolverFactoryRequestClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyResolverFactoryRequestClientInterfaceBase>;
using ProxyResolverFactoryRequestClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyResolverFactoryRequestClientInterfaceBase>;
class ProxyServerDataView {
 public:
  ProxyServerDataView() {}

  ProxyServerDataView(
      internal::ProxyServer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScheme(UserType* output) const {
    auto data_value = data_->scheme;
    return mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyScheme>(
        data_value, output);
  }

  ProxyScheme scheme() const {
    return static_cast<ProxyScheme>(data_->scheme);
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint16_t port() const {
    return data_->port;
  }
 private:
  internal::ProxyServer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyInfoDataView {
 public:
  ProxyInfoDataView() {}

  ProxyInfoDataView(
      internal::ProxyInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProxyServersDataView(
      mojo::ArrayDataView<ProxyServerDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyServers(UserType* output) {
    auto* pointer = data_->proxy_servers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::proxy_resolver::mojom::ProxyServerDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProxyInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace proxy_resolver

namespace std {

template <>
struct hash<::proxy_resolver::mojom::HostResolveOperation>
    : public mojo::internal::EnumHashImpl<::proxy_resolver::mojom::HostResolveOperation> {};

template <>
struct hash<::proxy_resolver::mojom::ProxyScheme>
    : public mojo::internal::EnumHashImpl<::proxy_resolver::mojom::ProxyScheme> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::proxy_resolver::mojom::HostResolveOperation, ::proxy_resolver::mojom::HostResolveOperation> {
  static ::proxy_resolver::mojom::HostResolveOperation ToMojom(::proxy_resolver::mojom::HostResolveOperation input) { return input; }
  static bool FromMojom(::proxy_resolver::mojom::HostResolveOperation input, ::proxy_resolver::mojom::HostResolveOperation* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::proxy_resolver::mojom::HostResolveOperation, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::proxy_resolver::mojom::HostResolveOperation, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::proxy_resolver::mojom::HostResolveOperation>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::proxy_resolver::mojom::ProxyScheme, ::proxy_resolver::mojom::ProxyScheme> {
  static ::proxy_resolver::mojom::ProxyScheme ToMojom(::proxy_resolver::mojom::ProxyScheme input) { return input; }
  static bool FromMojom(::proxy_resolver::mojom::ProxyScheme input, ::proxy_resolver::mojom::ProxyScheme* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::proxy_resolver::mojom::ProxyScheme, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::proxy_resolver::mojom::ProxyScheme, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::proxy_resolver::mojom::ProxyScheme>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::proxy_resolver::mojom::ProxyServerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::proxy_resolver::mojom::ProxyServerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::proxy_resolver::mojom::internal::ProxyServer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::proxy_resolver::mojom::ProxyScheme>(
        Traits::scheme(input), &(*output)->scheme);
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
        "null host in ProxyServer struct");
    (*output)->port = Traits::port(input);
  }

  static bool Deserialize(::proxy_resolver::mojom::internal::ProxyServer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::proxy_resolver::mojom::ProxyServerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::proxy_resolver::mojom::ProxyInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::proxy_resolver::mojom::ProxyInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::proxy_resolver::mojom::internal::ProxyInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::proxy_servers(input)) in_proxy_servers = Traits::proxy_servers(input);
    typename decltype((*output)->proxy_servers)::BaseType::BufferWriter
        proxy_servers_writer;
    const mojo::internal::ContainerValidateParams proxy_servers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::proxy_resolver::mojom::ProxyServerDataView>>(
        in_proxy_servers, buffer, &proxy_servers_writer, &proxy_servers_validate_params,
        context);
    (*output)->proxy_servers.Set(
        proxy_servers_writer.is_null() ? nullptr : proxy_servers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->proxy_servers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null proxy_servers in ProxyInfo struct");
  }

  static bool Deserialize(::proxy_resolver::mojom::internal::ProxyInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::proxy_resolver::mojom::ProxyInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace proxy_resolver {
namespace mojom {

inline void ProxyServerDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProxyInfoDataView::GetProxyServersDataView(
    mojo::ArrayDataView<ProxyServerDataView>* output) {
  auto pointer = data_->proxy_servers.Get();
  *output = mojo::ArrayDataView<ProxyServerDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace proxy_resolver

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_SHARED_H_