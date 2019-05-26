// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/host_resolver.mojom-shared.h"
#include "services/network/public/mojom/host_resolver.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/address_list.mojom-blink.h"
#include "services/network/public/mojom/ip_address.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/url_loader.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_DnsQueryType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::DnsQueryType& value) {
    using utype = std::underlying_type<::network::mojom::DnsQueryType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::DnsQueryType& left, const ::network::mojom::DnsQueryType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::DnsQueryType>
    : public GenericHashTraits<::network::mojom::DnsQueryType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::DnsQueryType& value) {
    return value == static_cast<::network::mojom::DnsQueryType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::DnsQueryType& slot, bool) {
    slot = static_cast<::network::mojom::DnsQueryType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::DnsQueryType& value) {
    return value == static_cast<::network::mojom::DnsQueryType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_DnsConfigOverrides_Tristate_DataHashFn {
  static unsigned GetHash(const ::network::mojom::DnsConfigOverrides_Tristate& value) {
    using utype = std::underlying_type<::network::mojom::DnsConfigOverrides_Tristate>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::DnsConfigOverrides_Tristate& left, const ::network::mojom::DnsConfigOverrides_Tristate& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::DnsConfigOverrides_Tristate>
    : public GenericHashTraits<::network::mojom::DnsConfigOverrides_Tristate> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::DnsConfigOverrides_Tristate& value) {
    return value == static_cast<::network::mojom::DnsConfigOverrides_Tristate>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::DnsConfigOverrides_Tristate& slot, bool) {
    slot = static_cast<::network::mojom::DnsConfigOverrides_Tristate>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::DnsConfigOverrides_Tristate& value) {
    return value == static_cast<::network::mojom::DnsConfigOverrides_Tristate>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_ResolveHostParameters_Source_DataHashFn {
  static unsigned GetHash(const ::network::mojom::ResolveHostParameters_Source& value) {
    using utype = std::underlying_type<::network::mojom::ResolveHostParameters_Source>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::ResolveHostParameters_Source& left, const ::network::mojom::ResolveHostParameters_Source& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::ResolveHostParameters_Source>
    : public GenericHashTraits<::network::mojom::ResolveHostParameters_Source> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::ResolveHostParameters_Source& value) {
    return value == static_cast<::network::mojom::ResolveHostParameters_Source>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::ResolveHostParameters_Source& slot, bool) {
    slot = static_cast<::network::mojom::ResolveHostParameters_Source>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::ResolveHostParameters_Source& value) {
    return value == static_cast<::network::mojom::ResolveHostParameters_Source>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_MdnsListenClient_UpdateType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::MdnsListenClient_UpdateType& value) {
    using utype = std::underlying_type<::network::mojom::MdnsListenClient_UpdateType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::MdnsListenClient_UpdateType& left, const ::network::mojom::MdnsListenClient_UpdateType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::MdnsListenClient_UpdateType>
    : public GenericHashTraits<::network::mojom::MdnsListenClient_UpdateType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::MdnsListenClient_UpdateType& value) {
    return value == static_cast<::network::mojom::MdnsListenClient_UpdateType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::MdnsListenClient_UpdateType& slot, bool) {
    slot = static_cast<::network::mojom::MdnsListenClient_UpdateType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::MdnsListenClient_UpdateType& value) {
    return value == static_cast<::network::mojom::MdnsListenClient_UpdateType>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {

class ResolveHostHandleProxy;

template <typename ImplRefTraits>
class ResolveHostHandleStub;

class ResolveHostHandleRequestValidator;


class BLINK_PLATFORM_EXPORT ResolveHostHandle
    : public ResolveHostHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ResolveHostHandleInterfaceBase;
  using Proxy_ = ResolveHostHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResolveHostHandleStub<ImplRefTraits>;

  using RequestValidator_ = ResolveHostHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCancelMinVersion = 0,
  };
  virtual ~ResolveHostHandle() {}

  
  virtual void Cancel(int32_t result) = 0;
};

class ResolveHostClientProxy;

template <typename ImplRefTraits>
class ResolveHostClientStub;

class ResolveHostClientRequestValidator;


class BLINK_PLATFORM_EXPORT ResolveHostClient
    : public ResolveHostClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ResolveHostClientInterfaceBase;
  using Proxy_ = ResolveHostClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ResolveHostClientStub<ImplRefTraits>;

  using RequestValidator_ = ResolveHostClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCompleteMinVersion = 0,
    kOnTextResultsMinVersion = 0,
    kOnHostnameResultsMinVersion = 0,
  };
  virtual ~ResolveHostClient() {}

  
  virtual void OnComplete(int32_t result, ::network::mojom::blink::AddressListPtr resolved_addresses) = 0;

  
  virtual void OnTextResults(const WTF::Vector<WTF::String>& text_results) = 0;

  
  virtual void OnHostnameResults(WTF::Vector<::network::mojom::blink::HostPortPairPtr> hosts) = 0;
};

class MdnsListenClientProxy;

template <typename ImplRefTraits>
class MdnsListenClientStub;

class MdnsListenClientRequestValidator;


class BLINK_PLATFORM_EXPORT MdnsListenClient
    : public MdnsListenClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MdnsListenClientInterfaceBase;
  using Proxy_ = MdnsListenClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = MdnsListenClientStub<ImplRefTraits>;

  using RequestValidator_ = MdnsListenClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnAddressResultMinVersion = 0,
    kOnTextResultMinVersion = 0,
    kOnHostnameResultMinVersion = 0,
    kOnUnhandledResultMinVersion = 0,
  };
  
  using UpdateType = MdnsListenClient_UpdateType;
  virtual ~MdnsListenClient() {}

  
  virtual void OnAddressResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::IPEndPointPtr endpoint) = 0;

  
  virtual void OnTextResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, const WTF::Vector<WTF::String>& text_records) = 0;

  
  virtual void OnHostnameResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::HostPortPairPtr host) = 0;

  
  virtual void OnUnhandledResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type) = 0;
};

class HostResolverProxy;

template <typename ImplRefTraits>
class HostResolverStub;

class HostResolverRequestValidator;
class HostResolverResponseValidator;


class BLINK_PLATFORM_EXPORT HostResolver
    : public HostResolverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HostResolverInterfaceBase;
  using Proxy_ = HostResolverProxy;

  template <typename ImplRefTraits>
  using Stub_ = HostResolverStub<ImplRefTraits>;

  using RequestValidator_ = HostResolverRequestValidator;
  using ResponseValidator_ = HostResolverResponseValidator;
  enum MethodMinVersions : uint32_t {
    kResolveHostMinVersion = 0,
    kMdnsListenMinVersion = 0,
  };
  virtual ~HostResolver() {}

  
  virtual void ResolveHost(::network::mojom::blink::HostPortPairPtr host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) = 0;


  using MdnsListenCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void MdnsListen(::network::mojom::blink::HostPortPairPtr host, DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) = 0;
};

class DnsConfigChangeManagerClientProxy;

template <typename ImplRefTraits>
class DnsConfigChangeManagerClientStub;

class DnsConfigChangeManagerClientRequestValidator;


class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerClient
    : public DnsConfigChangeManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DnsConfigChangeManagerClientInterfaceBase;
  using Proxy_ = DnsConfigChangeManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = DnsConfigChangeManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = DnsConfigChangeManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSystemDnsConfigChangedMinVersion = 0,
  };
  virtual ~DnsConfigChangeManagerClient() {}

  
  virtual void OnSystemDnsConfigChanged() = 0;
};

class DnsConfigChangeManagerProxy;

template <typename ImplRefTraits>
class DnsConfigChangeManagerStub;

class DnsConfigChangeManagerRequestValidator;


class BLINK_PLATFORM_EXPORT DnsConfigChangeManager
    : public DnsConfigChangeManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DnsConfigChangeManagerInterfaceBase;
  using Proxy_ = DnsConfigChangeManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DnsConfigChangeManagerStub<ImplRefTraits>;

  using RequestValidator_ = DnsConfigChangeManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestNotificationsMinVersion = 0,
  };
  virtual ~DnsConfigChangeManager() {}

  
  virtual void RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) = 0;
};

class BLINK_PLATFORM_EXPORT ResolveHostHandleProxy
    : public ResolveHostHandle {
 public:
  using InterfaceType = ResolveHostHandle;

  explicit ResolveHostHandleProxy(mojo::MessageReceiverWithResponder* receiver);
  void Cancel(int32_t result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT ResolveHostClientProxy
    : public ResolveHostClient {
 public:
  using InterfaceType = ResolveHostClient;

  explicit ResolveHostClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnComplete(int32_t result, ::network::mojom::blink::AddressListPtr resolved_addresses) final;
  void OnTextResults(const WTF::Vector<WTF::String>& text_results) final;
  void OnHostnameResults(WTF::Vector<::network::mojom::blink::HostPortPairPtr> hosts) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT MdnsListenClientProxy
    : public MdnsListenClient {
 public:
  using InterfaceType = MdnsListenClient;

  explicit MdnsListenClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAddressResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::IPEndPointPtr endpoint) final;
  void OnTextResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, const WTF::Vector<WTF::String>& text_records) final;
  void OnHostnameResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type, ::network::mojom::blink::HostPortPairPtr host) final;
  void OnUnhandledResult(MdnsListenClient::UpdateType update_type, DnsQueryType query_type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT HostResolverProxy
    : public HostResolver {
 public:
  using InterfaceType = HostResolver;

  explicit HostResolverProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResolveHost(::network::mojom::blink::HostPortPairPtr host, ResolveHostParametersPtr optional_parameters, ResolveHostClientPtr response_client) final;
  void MdnsListen(::network::mojom::blink::HostPortPairPtr host, DnsQueryType query_type, MdnsListenClientPtr response_client, MdnsListenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerClientProxy
    : public DnsConfigChangeManagerClient {
 public:
  using InterfaceType = DnsConfigChangeManagerClient;

  explicit DnsConfigChangeManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSystemDnsConfigChanged() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerProxy
    : public DnsConfigChangeManager {
 public:
  using InterfaceType = DnsConfigChangeManager;

  explicit DnsConfigChangeManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNotifications(DnsConfigChangeManagerClientPtr client_ptr) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT ResolveHostHandleStubDispatch {
 public:
  static bool Accept(ResolveHostHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResolveHostHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResolveHostHandle>>
class ResolveHostHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResolveHostHandleStub() {}
  ~ResolveHostHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT ResolveHostClientStubDispatch {
 public:
  static bool Accept(ResolveHostClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ResolveHostClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ResolveHostClient>>
class ResolveHostClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ResolveHostClientStub() {}
  ~ResolveHostClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ResolveHostClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MdnsListenClientStubDispatch {
 public:
  static bool Accept(MdnsListenClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MdnsListenClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MdnsListenClient>>
class MdnsListenClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MdnsListenClientStub() {}
  ~MdnsListenClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MdnsListenClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MdnsListenClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT HostResolverStubDispatch {
 public:
  static bool Accept(HostResolver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HostResolver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HostResolver>>
class HostResolverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HostResolverStub() {}
  ~HostResolverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HostResolverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerClientStubDispatch {
 public:
  static bool Accept(DnsConfigChangeManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DnsConfigChangeManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DnsConfigChangeManagerClient>>
class DnsConfigChangeManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DnsConfigChangeManagerClientStub() {}
  ~DnsConfigChangeManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerStubDispatch {
 public:
  static bool Accept(DnsConfigChangeManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DnsConfigChangeManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DnsConfigChangeManager>>
class DnsConfigChangeManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DnsConfigChangeManagerStub() {}
  ~DnsConfigChangeManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DnsConfigChangeManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT ResolveHostHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT ResolveHostClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT MdnsListenClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HostResolverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT DnsConfigChangeManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HostResolverResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_PLATFORM_EXPORT DnsOverHttpsServer {
 public:
  using DataView = DnsOverHttpsServerDataView;
  using Data_ = internal::DnsOverHttpsServer_Data;

  template <typename... Args>
  static DnsOverHttpsServerPtr New(Args&&... args) {
    return DnsOverHttpsServerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DnsOverHttpsServerPtr From(const U& u) {
    return mojo::TypeConverter<DnsOverHttpsServerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DnsOverHttpsServer>::Convert(*this);
  }


  DnsOverHttpsServer();

  DnsOverHttpsServer(
      const WTF::String& server_template,
      bool use_post);

  ~DnsOverHttpsServer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DnsOverHttpsServerPtr>
  DnsOverHttpsServerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DnsOverHttpsServer>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DnsOverHttpsServer::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DnsOverHttpsServer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DnsOverHttpsServer_UnserializedMessageContext<
            UserType, DnsOverHttpsServer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DnsOverHttpsServer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DnsOverHttpsServer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DnsOverHttpsServer_UnserializedMessageContext<
            UserType, DnsOverHttpsServer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DnsOverHttpsServer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String server_template;
  
  bool use_post;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class BLINK_PLATFORM_EXPORT DnsHost {
 public:
  using DataView = DnsHostDataView;
  using Data_ = internal::DnsHost_Data;

  template <typename... Args>
  static DnsHostPtr New(Args&&... args) {
    return DnsHostPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DnsHostPtr From(const U& u) {
    return mojo::TypeConverter<DnsHostPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DnsHost>::Convert(*this);
  }


  DnsHost();

  DnsHost(
      const WTF::String& hostname,
      ::network::mojom::blink::IPAddressPtr address);

  ~DnsHost();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DnsHostPtr>
  DnsHostPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DnsHost>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DnsHost::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DnsHost::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DnsHost_UnserializedMessageContext<
            UserType, DnsHost::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DnsHost::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DnsHost::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DnsHost_UnserializedMessageContext<
            UserType, DnsHost::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DnsHost::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String hostname;
  
  ::network::mojom::blink::IPAddressPtr address;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DnsHost);
};






class BLINK_PLATFORM_EXPORT DnsConfigOverrides {
 public:
  using DataView = DnsConfigOverridesDataView;
  using Data_ = internal::DnsConfigOverrides_Data;
  using Tristate = DnsConfigOverrides_Tristate;

  template <typename... Args>
  static DnsConfigOverridesPtr New(Args&&... args) {
    return DnsConfigOverridesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DnsConfigOverridesPtr From(const U& u) {
    return mojo::TypeConverter<DnsConfigOverridesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DnsConfigOverrides>::Convert(*this);
  }


  DnsConfigOverrides();

  DnsConfigOverrides(
      base::Optional<WTF::Vector<::network::mojom::blink::IPEndPointPtr>> nameservers,
      const base::Optional<WTF::Vector<WTF::String>>& search,
      base::Optional<WTF::Vector<DnsHostPtr>> hosts,
      DnsConfigOverrides::Tristate append_to_multi_label_name,
      DnsConfigOverrides::Tristate randomize_ports,
      int8_t ndots,
      base::Optional<base::TimeDelta> timeout,
      int32_t attempts,
      DnsConfigOverrides::Tristate rotate,
      DnsConfigOverrides::Tristate use_local_ipv6,
      base::Optional<WTF::Vector<DnsOverHttpsServerPtr>> dns_over_https_servers);

  ~DnsConfigOverrides();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DnsConfigOverridesPtr>
  DnsConfigOverridesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DnsConfigOverrides>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DnsConfigOverrides::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DnsConfigOverrides::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DnsConfigOverrides_UnserializedMessageContext<
            UserType, DnsConfigOverrides::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DnsConfigOverrides::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DnsConfigOverrides::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DnsConfigOverrides_UnserializedMessageContext<
            UserType, DnsConfigOverrides::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DnsConfigOverrides::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<WTF::Vector<::network::mojom::blink::IPEndPointPtr>> nameservers;
  
  base::Optional<WTF::Vector<WTF::String>> search;
  
  base::Optional<WTF::Vector<DnsHostPtr>> hosts;
  
  DnsConfigOverrides::Tristate append_to_multi_label_name;
  
  DnsConfigOverrides::Tristate randomize_ports;
  
  int8_t ndots;
  
  base::Optional<base::TimeDelta> timeout;
  
  int32_t attempts;
  
  DnsConfigOverrides::Tristate rotate;
  
  DnsConfigOverrides::Tristate use_local_ipv6;
  
  base::Optional<WTF::Vector<DnsOverHttpsServerPtr>> dns_over_https_servers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DnsConfigOverrides);
};





class BLINK_PLATFORM_EXPORT ResolveHostParameters {
 public:
  using DataView = ResolveHostParametersDataView;
  using Data_ = internal::ResolveHostParameters_Data;
  using Source = ResolveHostParameters_Source;

  template <typename... Args>
  static ResolveHostParametersPtr New(Args&&... args) {
    return ResolveHostParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResolveHostParametersPtr From(const U& u) {
    return mojo::TypeConverter<ResolveHostParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResolveHostParameters>::Convert(*this);
  }


  ResolveHostParameters();

  ResolveHostParameters(
      DnsQueryType dns_query_type,
      ::network::mojom::blink::RequestPriority initial_priority,
      ResolveHostParameters::Source source,
      bool allow_cached_response,
      ResolveHostHandleRequest control_handle,
      bool include_canonical_name,
      bool loopback_only,
      bool is_speculative);

  ~ResolveHostParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResolveHostParametersPtr>
  ResolveHostParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResolveHostParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResolveHostParameters::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResolveHostParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResolveHostParameters_UnserializedMessageContext<
            UserType, ResolveHostParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ResolveHostParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ResolveHostParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResolveHostParameters_UnserializedMessageContext<
            UserType, ResolveHostParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResolveHostParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  DnsQueryType dns_query_type;
  
  ::network::mojom::blink::RequestPriority initial_priority;
  
  ResolveHostParameters::Source source;
  
  bool allow_cached_response;
  
  ResolveHostHandleRequest control_handle;
  
  bool include_canonical_name;
  
  bool loopback_only;
  
  bool is_speculative;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ResolveHostParameters);
};

template <typename StructPtrType>
DnsHostPtr DnsHost::Clone() const {
  return New(
      mojo::Clone(hostname),
      mojo::Clone(address)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DnsHost>::value>::type*>
bool DnsHost::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hostname, other_struct.hostname))
    return false;
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  return true;
}
template <typename StructPtrType>
DnsOverHttpsServerPtr DnsOverHttpsServer::Clone() const {
  return New(
      mojo::Clone(server_template),
      mojo::Clone(use_post)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DnsOverHttpsServer>::value>::type*>
bool DnsOverHttpsServer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->server_template, other_struct.server_template))
    return false;
  if (!mojo::Equals(this->use_post, other_struct.use_post))
    return false;
  return true;
}
template <typename StructPtrType>
DnsConfigOverridesPtr DnsConfigOverrides::Clone() const {
  return New(
      mojo::Clone(nameservers),
      mojo::Clone(search),
      mojo::Clone(hosts),
      mojo::Clone(append_to_multi_label_name),
      mojo::Clone(randomize_ports),
      mojo::Clone(ndots),
      mojo::Clone(timeout),
      mojo::Clone(attempts),
      mojo::Clone(rotate),
      mojo::Clone(use_local_ipv6),
      mojo::Clone(dns_over_https_servers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DnsConfigOverrides>::value>::type*>
bool DnsConfigOverrides::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->nameservers, other_struct.nameservers))
    return false;
  if (!mojo::Equals(this->search, other_struct.search))
    return false;
  if (!mojo::Equals(this->hosts, other_struct.hosts))
    return false;
  if (!mojo::Equals(this->append_to_multi_label_name, other_struct.append_to_multi_label_name))
    return false;
  if (!mojo::Equals(this->randomize_ports, other_struct.randomize_ports))
    return false;
  if (!mojo::Equals(this->ndots, other_struct.ndots))
    return false;
  if (!mojo::Equals(this->timeout, other_struct.timeout))
    return false;
  if (!mojo::Equals(this->attempts, other_struct.attempts))
    return false;
  if (!mojo::Equals(this->rotate, other_struct.rotate))
    return false;
  if (!mojo::Equals(this->use_local_ipv6, other_struct.use_local_ipv6))
    return false;
  if (!mojo::Equals(this->dns_over_https_servers, other_struct.dns_over_https_servers))
    return false;
  return true;
}
template <typename StructPtrType>
ResolveHostParametersPtr ResolveHostParameters::Clone() const {
  return New(
      mojo::Clone(dns_query_type),
      mojo::Clone(initial_priority),
      mojo::Clone(source),
      mojo::Clone(allow_cached_response),
      mojo::Clone(control_handle),
      mojo::Clone(include_canonical_name),
      mojo::Clone(loopback_only),
      mojo::Clone(is_speculative)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResolveHostParameters>::value>::type*>
bool ResolveHostParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dns_query_type, other_struct.dns_query_type))
    return false;
  if (!mojo::Equals(this->initial_priority, other_struct.initial_priority))
    return false;
  if (!mojo::Equals(this->source, other_struct.source))
    return false;
  if (!mojo::Equals(this->allow_cached_response, other_struct.allow_cached_response))
    return false;
  if (!mojo::Equals(this->control_handle, other_struct.control_handle))
    return false;
  if (!mojo::Equals(this->include_canonical_name, other_struct.include_canonical_name))
    return false;
  if (!mojo::Equals(this->loopback_only, other_struct.loopback_only))
    return false;
  if (!mojo::Equals(this->is_speculative, other_struct.is_speculative))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::DnsHost::DataView,
                                         ::network::mojom::blink::DnsHostPtr> {
  static bool IsNull(const ::network::mojom::blink::DnsHostPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::DnsHostPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::DnsHost::hostname)& hostname(
      const ::network::mojom::blink::DnsHostPtr& input) {
    return input->hostname;
  }

  static const decltype(::network::mojom::blink::DnsHost::address)& address(
      const ::network::mojom::blink::DnsHostPtr& input) {
    return input->address;
  }

  static bool Read(::network::mojom::blink::DnsHost::DataView input, ::network::mojom::blink::DnsHostPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::DnsOverHttpsServer::DataView,
                                         ::network::mojom::blink::DnsOverHttpsServerPtr> {
  static bool IsNull(const ::network::mojom::blink::DnsOverHttpsServerPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::DnsOverHttpsServerPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::DnsOverHttpsServer::server_template)& server_template(
      const ::network::mojom::blink::DnsOverHttpsServerPtr& input) {
    return input->server_template;
  }

  static decltype(::network::mojom::blink::DnsOverHttpsServer::use_post) use_post(
      const ::network::mojom::blink::DnsOverHttpsServerPtr& input) {
    return input->use_post;
  }

  static bool Read(::network::mojom::blink::DnsOverHttpsServer::DataView input, ::network::mojom::blink::DnsOverHttpsServerPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::DnsConfigOverrides::DataView,
                                         ::network::mojom::blink::DnsConfigOverridesPtr> {
  static bool IsNull(const ::network::mojom::blink::DnsConfigOverridesPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::DnsConfigOverridesPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::DnsConfigOverrides::nameservers)& nameservers(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->nameservers;
  }

  static const decltype(::network::mojom::blink::DnsConfigOverrides::search)& search(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->search;
  }

  static const decltype(::network::mojom::blink::DnsConfigOverrides::hosts)& hosts(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->hosts;
  }

  static decltype(::network::mojom::blink::DnsConfigOverrides::append_to_multi_label_name) append_to_multi_label_name(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->append_to_multi_label_name;
  }

  static decltype(::network::mojom::blink::DnsConfigOverrides::randomize_ports) randomize_ports(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->randomize_ports;
  }

  static decltype(::network::mojom::blink::DnsConfigOverrides::ndots) ndots(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->ndots;
  }

  static const decltype(::network::mojom::blink::DnsConfigOverrides::timeout)& timeout(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->timeout;
  }

  static decltype(::network::mojom::blink::DnsConfigOverrides::attempts) attempts(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->attempts;
  }

  static decltype(::network::mojom::blink::DnsConfigOverrides::rotate) rotate(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->rotate;
  }

  static decltype(::network::mojom::blink::DnsConfigOverrides::use_local_ipv6) use_local_ipv6(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->use_local_ipv6;
  }

  static const decltype(::network::mojom::blink::DnsConfigOverrides::dns_over_https_servers)& dns_over_https_servers(
      const ::network::mojom::blink::DnsConfigOverridesPtr& input) {
    return input->dns_over_https_servers;
  }

  static bool Read(::network::mojom::blink::DnsConfigOverrides::DataView input, ::network::mojom::blink::DnsConfigOverridesPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::ResolveHostParameters::DataView,
                                         ::network::mojom::blink::ResolveHostParametersPtr> {
  static bool IsNull(const ::network::mojom::blink::ResolveHostParametersPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::ResolveHostParametersPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::ResolveHostParameters::dns_query_type) dns_query_type(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->dns_query_type;
  }

  static decltype(::network::mojom::blink::ResolveHostParameters::initial_priority) initial_priority(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->initial_priority;
  }

  static decltype(::network::mojom::blink::ResolveHostParameters::source) source(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->source;
  }

  static decltype(::network::mojom::blink::ResolveHostParameters::allow_cached_response) allow_cached_response(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->allow_cached_response;
  }

  static  decltype(::network::mojom::blink::ResolveHostParameters::control_handle)& control_handle(
       ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->control_handle;
  }

  static decltype(::network::mojom::blink::ResolveHostParameters::include_canonical_name) include_canonical_name(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->include_canonical_name;
  }

  static decltype(::network::mojom::blink::ResolveHostParameters::loopback_only) loopback_only(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->loopback_only;
  }

  static decltype(::network::mojom::blink::ResolveHostParameters::is_speculative) is_speculative(
      const ::network::mojom::blink::ResolveHostParametersPtr& input) {
    return input->is_speculative;
  }

  static bool Read(::network::mojom::blink::ResolveHostParameters::DataView input, ::network::mojom::blink::ResolveHostParametersPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_BLINK_H_