// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/host_resolver.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/address_list.mojom-shared.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class DnsHostDataView;

class DnsOverHttpsServerDataView;

class DnsConfigOverridesDataView;

class ResolveHostParametersDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::DnsHostDataView> {
  using Data = ::network::mojom::internal::DnsHost_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::DnsOverHttpsServerDataView> {
  using Data = ::network::mojom::internal::DnsOverHttpsServer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::DnsConfigOverridesDataView> {
  using Data = ::network::mojom::internal::DnsConfigOverrides_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::ResolveHostParametersDataView> {
  using Data = ::network::mojom::internal::ResolveHostParameters_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class DnsQueryType : int32_t {
  
  UNSPECIFIED,
  
  A,
  
  AAAA,
  
  TXT,
  
  PTR,
  
  SRV,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, DnsQueryType value);
inline bool IsKnownEnumValue(DnsQueryType value) {
  return internal::DnsQueryType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class DnsConfigOverrides_Tristate : int32_t {
  
  NO_OVERRIDE,
  
  TRISTATE_TRUE,
  
  TRISTATE_FALSE,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, DnsConfigOverrides_Tristate value);
inline bool IsKnownEnumValue(DnsConfigOverrides_Tristate value) {
  return internal::DnsConfigOverrides_Tristate_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ResolveHostParameters_Source : int32_t {
  
  ANY,
  
  SYSTEM,
  
  DNS,
  
  MULTICAST_DNS,
  
  LOCAL_ONLY,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, ResolveHostParameters_Source value);
inline bool IsKnownEnumValue(ResolveHostParameters_Source value) {
  return internal::ResolveHostParameters_Source_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MdnsListenClient_UpdateType : int32_t {
  
  ADDED,
  
  CHANGED,
  
  REMOVED,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, MdnsListenClient_UpdateType value);
inline bool IsKnownEnumValue(MdnsListenClient_UpdateType value) {
  return internal::MdnsListenClient_UpdateType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ResolveHostHandleInterfaceBase {};

using ResolveHostHandlePtrDataView =
    mojo::InterfacePtrDataView<ResolveHostHandleInterfaceBase>;
using ResolveHostHandleRequestDataView =
    mojo::InterfaceRequestDataView<ResolveHostHandleInterfaceBase>;
using ResolveHostHandleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ResolveHostHandleInterfaceBase>;
using ResolveHostHandleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ResolveHostHandleInterfaceBase>;
class ResolveHostClientInterfaceBase {};

using ResolveHostClientPtrDataView =
    mojo::InterfacePtrDataView<ResolveHostClientInterfaceBase>;
using ResolveHostClientRequestDataView =
    mojo::InterfaceRequestDataView<ResolveHostClientInterfaceBase>;
using ResolveHostClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ResolveHostClientInterfaceBase>;
using ResolveHostClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ResolveHostClientInterfaceBase>;
class MdnsListenClientInterfaceBase {};

using MdnsListenClientPtrDataView =
    mojo::InterfacePtrDataView<MdnsListenClientInterfaceBase>;
using MdnsListenClientRequestDataView =
    mojo::InterfaceRequestDataView<MdnsListenClientInterfaceBase>;
using MdnsListenClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MdnsListenClientInterfaceBase>;
using MdnsListenClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MdnsListenClientInterfaceBase>;
class HostResolverInterfaceBase {};

using HostResolverPtrDataView =
    mojo::InterfacePtrDataView<HostResolverInterfaceBase>;
using HostResolverRequestDataView =
    mojo::InterfaceRequestDataView<HostResolverInterfaceBase>;
using HostResolverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<HostResolverInterfaceBase>;
using HostResolverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<HostResolverInterfaceBase>;
class DnsConfigChangeManagerClientInterfaceBase {};

using DnsConfigChangeManagerClientPtrDataView =
    mojo::InterfacePtrDataView<DnsConfigChangeManagerClientInterfaceBase>;
using DnsConfigChangeManagerClientRequestDataView =
    mojo::InterfaceRequestDataView<DnsConfigChangeManagerClientInterfaceBase>;
using DnsConfigChangeManagerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DnsConfigChangeManagerClientInterfaceBase>;
using DnsConfigChangeManagerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DnsConfigChangeManagerClientInterfaceBase>;
class DnsConfigChangeManagerInterfaceBase {};

using DnsConfigChangeManagerPtrDataView =
    mojo::InterfacePtrDataView<DnsConfigChangeManagerInterfaceBase>;
using DnsConfigChangeManagerRequestDataView =
    mojo::InterfaceRequestDataView<DnsConfigChangeManagerInterfaceBase>;
using DnsConfigChangeManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DnsConfigChangeManagerInterfaceBase>;
using DnsConfigChangeManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DnsConfigChangeManagerInterfaceBase>;
class DnsHostDataView {
 public:
  DnsHostDataView() {}

  DnsHostDataView(
      internal::DnsHost_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostnameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostname(UserType* output) {
    auto* pointer = data_->hostname.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::DnsHost_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DnsOverHttpsServerDataView {
 public:
  DnsOverHttpsServerDataView() {}

  DnsOverHttpsServerDataView(
      internal::DnsOverHttpsServer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServerTemplateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServerTemplate(UserType* output) {
    auto* pointer = data_->server_template.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool use_post() const {
    return data_->use_post;
  }
 private:
  internal::DnsOverHttpsServer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DnsConfigOverridesDataView {
 public:
  DnsConfigOverridesDataView() {}

  DnsConfigOverridesDataView(
      internal::DnsConfigOverrides_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameserversDataView(
      mojo::ArrayDataView<::network::mojom::IPEndPointDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNameservers(UserType* output) {
    auto* pointer = data_->nameservers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::IPEndPointDataView>>(
        pointer, output, context_);
  }
  inline void GetSearchDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSearch(UserType* output) {
    auto* pointer = data_->search.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetHostsDataView(
      mojo::ArrayDataView<DnsHostDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHosts(UserType* output) {
    auto* pointer = data_->hosts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::DnsHostDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAppendToMultiLabelName(UserType* output) const {
    auto data_value = data_->append_to_multi_label_name;
    return mojo::internal::Deserialize<::network::mojom::DnsConfigOverrides_Tristate>(
        data_value, output);
  }

  DnsConfigOverrides_Tristate append_to_multi_label_name() const {
    return static_cast<DnsConfigOverrides_Tristate>(data_->append_to_multi_label_name);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRandomizePorts(UserType* output) const {
    auto data_value = data_->randomize_ports;
    return mojo::internal::Deserialize<::network::mojom::DnsConfigOverrides_Tristate>(
        data_value, output);
  }

  DnsConfigOverrides_Tristate randomize_ports() const {
    return static_cast<DnsConfigOverrides_Tristate>(data_->randomize_ports);
  }
  int8_t ndots() const {
    return data_->ndots;
  }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  int32_t attempts() const {
    return data_->attempts;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRotate(UserType* output) const {
    auto data_value = data_->rotate;
    return mojo::internal::Deserialize<::network::mojom::DnsConfigOverrides_Tristate>(
        data_value, output);
  }

  DnsConfigOverrides_Tristate rotate() const {
    return static_cast<DnsConfigOverrides_Tristate>(data_->rotate);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUseLocalIpv6(UserType* output) const {
    auto data_value = data_->use_local_ipv6;
    return mojo::internal::Deserialize<::network::mojom::DnsConfigOverrides_Tristate>(
        data_value, output);
  }

  DnsConfigOverrides_Tristate use_local_ipv6() const {
    return static_cast<DnsConfigOverrides_Tristate>(data_->use_local_ipv6);
  }
  inline void GetDnsOverHttpsServersDataView(
      mojo::ArrayDataView<DnsOverHttpsServerDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDnsOverHttpsServers(UserType* output) {
    auto* pointer = data_->dns_over_https_servers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DnsConfigOverrides_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResolveHostParametersDataView {
 public:
  ResolveHostParametersDataView() {}

  ResolveHostParametersDataView(
      internal::ResolveHostParameters_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDnsQueryType(UserType* output) const {
    auto data_value = data_->dns_query_type;
    return mojo::internal::Deserialize<::network::mojom::DnsQueryType>(
        data_value, output);
  }

  DnsQueryType dns_query_type() const {
    return static_cast<DnsQueryType>(data_->dns_query_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitialPriority(UserType* output) const {
    auto data_value = data_->initial_priority;
    return mojo::internal::Deserialize<::network::mojom::RequestPriority>(
        data_value, output);
  }

  ::network::mojom::RequestPriority initial_priority() const {
    return static_cast<::network::mojom::RequestPriority>(data_->initial_priority);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) const {
    auto data_value = data_->source;
    return mojo::internal::Deserialize<::network::mojom::ResolveHostParameters_Source>(
        data_value, output);
  }

  ResolveHostParameters_Source source() const {
    return static_cast<ResolveHostParameters_Source>(data_->source);
  }
  bool allow_cached_response() const {
    return data_->allow_cached_response;
  }
  template <typename UserType>
  UserType TakeControlHandle() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ResolveHostHandleRequestDataView>(
            &data_->control_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool include_canonical_name() const {
    return data_->include_canonical_name;
  }
  bool loopback_only() const {
    return data_->loopback_only;
  }
  bool is_speculative() const {
    return data_->is_speculative;
  }
 private:
  internal::ResolveHostParameters_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::DnsQueryType>
    : public mojo::internal::EnumHashImpl<::network::mojom::DnsQueryType> {};

template <>
struct hash<::network::mojom::DnsConfigOverrides_Tristate>
    : public mojo::internal::EnumHashImpl<::network::mojom::DnsConfigOverrides_Tristate> {};

template <>
struct hash<::network::mojom::ResolveHostParameters_Source>
    : public mojo::internal::EnumHashImpl<::network::mojom::ResolveHostParameters_Source> {};

template <>
struct hash<::network::mojom::MdnsListenClient_UpdateType>
    : public mojo::internal::EnumHashImpl<::network::mojom::MdnsListenClient_UpdateType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::DnsQueryType, ::network::mojom::DnsQueryType> {
  static ::network::mojom::DnsQueryType ToMojom(::network::mojom::DnsQueryType input) { return input; }
  static bool FromMojom(::network::mojom::DnsQueryType input, ::network::mojom::DnsQueryType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DnsQueryType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::DnsQueryType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::DnsQueryType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::DnsConfigOverrides_Tristate, ::network::mojom::DnsConfigOverrides_Tristate> {
  static ::network::mojom::DnsConfigOverrides_Tristate ToMojom(::network::mojom::DnsConfigOverrides_Tristate input) { return input; }
  static bool FromMojom(::network::mojom::DnsConfigOverrides_Tristate input, ::network::mojom::DnsConfigOverrides_Tristate* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DnsConfigOverrides_Tristate, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::DnsConfigOverrides_Tristate, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::DnsConfigOverrides_Tristate>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::ResolveHostParameters_Source, ::network::mojom::ResolveHostParameters_Source> {
  static ::network::mojom::ResolveHostParameters_Source ToMojom(::network::mojom::ResolveHostParameters_Source input) { return input; }
  static bool FromMojom(::network::mojom::ResolveHostParameters_Source input, ::network::mojom::ResolveHostParameters_Source* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ResolveHostParameters_Source, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ResolveHostParameters_Source, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ResolveHostParameters_Source>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::MdnsListenClient_UpdateType, ::network::mojom::MdnsListenClient_UpdateType> {
  static ::network::mojom::MdnsListenClient_UpdateType ToMojom(::network::mojom::MdnsListenClient_UpdateType input) { return input; }
  static bool FromMojom(::network::mojom::MdnsListenClient_UpdateType input, ::network::mojom::MdnsListenClient_UpdateType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::MdnsListenClient_UpdateType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::MdnsListenClient_UpdateType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::MdnsListenClient_UpdateType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DnsHostDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::DnsHostDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::DnsHost_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::hostname(input)) in_hostname = Traits::hostname(input);
    typename decltype((*output)->hostname)::BaseType::BufferWriter
        hostname_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_hostname, buffer, &hostname_writer, context);
    (*output)->hostname.Set(
        hostname_writer.is_null() ? nullptr : hostname_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->hostname.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null hostname in DnsHost struct");
    decltype(Traits::address(input)) in_address = Traits::address(input);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
        in_address, buffer, &address_writer, context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in DnsHost struct");
  }

  static bool Deserialize(::network::mojom::internal::DnsHost_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::DnsHostDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DnsOverHttpsServerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::DnsOverHttpsServerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::DnsOverHttpsServer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::server_template(input)) in_server_template = Traits::server_template(input);
    typename decltype((*output)->server_template)::BaseType::BufferWriter
        server_template_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_server_template, buffer, &server_template_writer, context);
    (*output)->server_template.Set(
        server_template_writer.is_null() ? nullptr : server_template_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->server_template.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null server_template in DnsOverHttpsServer struct");
    (*output)->use_post = Traits::use_post(input);
  }

  static bool Deserialize(::network::mojom::internal::DnsOverHttpsServer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::DnsOverHttpsServerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DnsConfigOverridesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::DnsConfigOverridesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::DnsConfigOverrides_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::nameservers(input)) in_nameservers = Traits::nameservers(input);
    typename decltype((*output)->nameservers)::BaseType::BufferWriter
        nameservers_writer;
    const mojo::internal::ContainerValidateParams nameservers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::IPEndPointDataView>>(
        in_nameservers, buffer, &nameservers_writer, &nameservers_validate_params,
        context);
    (*output)->nameservers.Set(
        nameservers_writer.is_null() ? nullptr : nameservers_writer.data());
    decltype(Traits::search(input)) in_search = Traits::search(input);
    typename decltype((*output)->search)::BaseType::BufferWriter
        search_writer;
    const mojo::internal::ContainerValidateParams search_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_search, buffer, &search_writer, &search_validate_params,
        context);
    (*output)->search.Set(
        search_writer.is_null() ? nullptr : search_writer.data());
    decltype(Traits::hosts(input)) in_hosts = Traits::hosts(input);
    typename decltype((*output)->hosts)::BaseType::BufferWriter
        hosts_writer;
    const mojo::internal::ContainerValidateParams hosts_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::DnsHostDataView>>(
        in_hosts, buffer, &hosts_writer, &hosts_validate_params,
        context);
    (*output)->hosts.Set(
        hosts_writer.is_null() ? nullptr : hosts_writer.data());
    mojo::internal::Serialize<::network::mojom::DnsConfigOverrides_Tristate>(
        Traits::append_to_multi_label_name(input), &(*output)->append_to_multi_label_name);
    mojo::internal::Serialize<::network::mojom::DnsConfigOverrides_Tristate>(
        Traits::randomize_ports(input), &(*output)->randomize_ports);
    (*output)->ndots = Traits::ndots(input);
    decltype(Traits::timeout(input)) in_timeout = Traits::timeout(input);
    typename decltype((*output)->timeout)::BaseType::BufferWriter
        timeout_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_timeout, buffer, &timeout_writer, context);
    (*output)->timeout.Set(
        timeout_writer.is_null() ? nullptr : timeout_writer.data());
    (*output)->attempts = Traits::attempts(input);
    mojo::internal::Serialize<::network::mojom::DnsConfigOverrides_Tristate>(
        Traits::rotate(input), &(*output)->rotate);
    mojo::internal::Serialize<::network::mojom::DnsConfigOverrides_Tristate>(
        Traits::use_local_ipv6(input), &(*output)->use_local_ipv6);
    decltype(Traits::dns_over_https_servers(input)) in_dns_over_https_servers = Traits::dns_over_https_servers(input);
    typename decltype((*output)->dns_over_https_servers)::BaseType::BufferWriter
        dns_over_https_servers_writer;
    const mojo::internal::ContainerValidateParams dns_over_https_servers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::DnsOverHttpsServerDataView>>(
        in_dns_over_https_servers, buffer, &dns_over_https_servers_writer, &dns_over_https_servers_validate_params,
        context);
    (*output)->dns_over_https_servers.Set(
        dns_over_https_servers_writer.is_null() ? nullptr : dns_over_https_servers_writer.data());
  }

  static bool Deserialize(::network::mojom::internal::DnsConfigOverrides_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::DnsConfigOverridesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ResolveHostParametersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ResolveHostParametersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ResolveHostParameters_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::DnsQueryType>(
        Traits::dns_query_type(input), &(*output)->dns_query_type);
    mojo::internal::Serialize<::network::mojom::RequestPriority>(
        Traits::initial_priority(input), &(*output)->initial_priority);
    mojo::internal::Serialize<::network::mojom::ResolveHostParameters_Source>(
        Traits::source(input), &(*output)->source);
    (*output)->allow_cached_response = Traits::allow_cached_response(input);
    decltype(Traits::control_handle(input)) in_control_handle = Traits::control_handle(input);
    mojo::internal::Serialize<::network::mojom::ResolveHostHandleRequestDataView>(
        in_control_handle, &(*output)->control_handle, context);
    (*output)->include_canonical_name = Traits::include_canonical_name(input);
    (*output)->loopback_only = Traits::loopback_only(input);
    (*output)->is_speculative = Traits::is_speculative(input);
  }

  static bool Deserialize(::network::mojom::internal::ResolveHostParameters_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ResolveHostParametersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void DnsHostDataView::GetHostnameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->hostname.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DnsHostDataView::GetAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}


inline void DnsOverHttpsServerDataView::GetServerTemplateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->server_template.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DnsConfigOverridesDataView::GetNameserversDataView(
    mojo::ArrayDataView<::network::mojom::IPEndPointDataView>* output) {
  auto pointer = data_->nameservers.Get();
  *output = mojo::ArrayDataView<::network::mojom::IPEndPointDataView>(pointer, context_);
}
inline void DnsConfigOverridesDataView::GetSearchDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->search.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void DnsConfigOverridesDataView::GetHostsDataView(
    mojo::ArrayDataView<DnsHostDataView>* output) {
  auto pointer = data_->hosts.Get();
  *output = mojo::ArrayDataView<DnsHostDataView>(pointer, context_);
}
inline void DnsConfigOverridesDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DnsConfigOverridesDataView::GetDnsOverHttpsServersDataView(
    mojo::ArrayDataView<DnsOverHttpsServerDataView>* output) {
  auto pointer = data_->dns_over_https_servers.Get();
  *output = mojo::ArrayDataView<DnsOverHttpsServerDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_H_