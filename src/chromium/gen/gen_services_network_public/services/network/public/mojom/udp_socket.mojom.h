// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_H_

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
#include "services/network/public/mojom/udp_socket.mojom-shared.h"
#include "services/network/public/mojom/udp_socket.mojom-forward.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-forward.h"
#include "services/network/public/mojom/ip_address.mojom-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom-forward.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-forward.h"
#include <string>
#include <vector>

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




namespace network {
namespace mojom {

class UDPSocketProxy;

template <typename ImplRefTraits>
class UDPSocketStub;

class UDPSocketRequestValidator;
class UDPSocketResponseValidator;


class  UDPSocket
    : public UDPSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UDPSocketInterfaceBase;
  using Proxy_ = UDPSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = UDPSocketStub<ImplRefTraits>;

  using RequestValidator_ = UDPSocketRequestValidator;
  using ResponseValidator_ = UDPSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBindMinVersion = 0,
    kConnectMinVersion = 0,
    kSetBroadcastMinVersion = 0,
    kSetSendBufferSizeMinVersion = 0,
    kSetReceiveBufferSizeMinVersion = 0,
    kJoinGroupMinVersion = 0,
    kLeaveGroupMinVersion = 0,
    kReceiveMoreMinVersion = 0,
    kReceiveMoreWithBufferSizeMinVersion = 0,
    kSendToMinVersion = 0,
    kSendMinVersion = 0,
    kCloseMinVersion = 0,
  };
  virtual ~UDPSocket() {}


  using BindCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&)>;
  
  virtual void Bind(const net::IPEndPoint& local_addr, UDPSocketOptionsPtr socket_options, BindCallback callback) = 0;


  using ConnectCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&)>;
  
  virtual void Connect(const net::IPEndPoint& remote_addr, UDPSocketOptionsPtr socket_options, ConnectCallback callback) = 0;


  using SetBroadcastCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void SetBroadcast(bool broadcast, SetBroadcastCallback callback) = 0;


  using SetSendBufferSizeCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) = 0;


  using SetReceiveBufferSizeCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) = 0;


  using JoinGroupCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void JoinGroup(const net::IPAddress& group_address, JoinGroupCallback callback) = 0;


  using LeaveGroupCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void LeaveGroup(const net::IPAddress& group_address, LeaveGroupCallback callback) = 0;

  
  virtual void ReceiveMore(uint32_t num_additional_datagrams) = 0;

  
  virtual void ReceiveMoreWithBufferSize(uint32_t num_additional_datagrams, uint32_t buffer_size) = 0;


  using SendToCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void SendTo(const net::IPEndPoint& dest_addr, base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendToCallback callback) = 0;


  using SendCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Send(base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendCallback callback) = 0;

  
  virtual void Close() = 0;
};

class UDPSocketReceiverProxy;

template <typename ImplRefTraits>
class UDPSocketReceiverStub;

class UDPSocketReceiverRequestValidator;


class  UDPSocketReceiver
    : public UDPSocketReceiverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UDPSocketReceiverInterfaceBase;
  using Proxy_ = UDPSocketReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = UDPSocketReceiverStub<ImplRefTraits>;

  using RequestValidator_ = UDPSocketReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnReceivedMinVersion = 0,
  };
  virtual ~UDPSocketReceiver() {}

  
  virtual void OnReceived(int32_t result, const base::Optional<net::IPEndPoint>& src_addr, base::Optional<base::span<const uint8_t>> data) = 0;
};

class  UDPSocketProxy
    : public UDPSocket {
 public:
  using InterfaceType = UDPSocket;

  explicit UDPSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void Bind(const net::IPEndPoint& local_addr, UDPSocketOptionsPtr socket_options, BindCallback callback) final;
  void Connect(const net::IPEndPoint& remote_addr, UDPSocketOptionsPtr socket_options, ConnectCallback callback) final;
  void SetBroadcast(bool broadcast, SetBroadcastCallback callback) final;
  void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) final;
  void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) final;
  void JoinGroup(const net::IPAddress& group_address, JoinGroupCallback callback) final;
  void LeaveGroup(const net::IPAddress& group_address, LeaveGroupCallback callback) final;
  void ReceiveMore(uint32_t num_additional_datagrams) final;
  void ReceiveMoreWithBufferSize(uint32_t num_additional_datagrams, uint32_t buffer_size) final;
  void SendTo(const net::IPEndPoint& dest_addr, base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendToCallback callback) final;
  void Send(base::span<const uint8_t> data, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, SendCallback callback) final;
  void Close() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UDPSocketReceiverProxy
    : public UDPSocketReceiver {
 public:
  using InterfaceType = UDPSocketReceiver;

  explicit UDPSocketReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceived(int32_t result, const base::Optional<net::IPEndPoint>& src_addr, base::Optional<base::span<const uint8_t>> data) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UDPSocketStubDispatch {
 public:
  static bool Accept(UDPSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UDPSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UDPSocket>>
class UDPSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UDPSocketStub() {}
  ~UDPSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UDPSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UDPSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UDPSocketReceiverStubDispatch {
 public:
  static bool Accept(UDPSocketReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UDPSocketReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UDPSocketReceiver>>
class UDPSocketReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UDPSocketReceiverStub() {}
  ~UDPSocketReceiverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UDPSocketReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UDPSocketReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UDPSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UDPSocketReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UDPSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  UDPSocketOptions {
 public:
  using DataView = UDPSocketOptionsDataView;
  using Data_ = internal::UDPSocketOptions_Data;

  template <typename... Args>
  static UDPSocketOptionsPtr New(Args&&... args) {
    return UDPSocketOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UDPSocketOptionsPtr From(const U& u) {
    return mojo::TypeConverter<UDPSocketOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UDPSocketOptions>::Convert(*this);
  }


  UDPSocketOptions();

  UDPSocketOptions(
      bool allow_address_reuse,
      bool allow_broadcast,
      bool allow_address_sharing_for_multicast,
      uint32_t multicast_interface,
      uint32_t multicast_time_to_live,
      bool multicast_loopback_mode,
      int32_t send_buffer_size,
      int32_t receive_buffer_size);

  ~UDPSocketOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UDPSocketOptionsPtr>
  UDPSocketOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UDPSocketOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UDPSocketOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UDPSocketOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UDPSocketOptions_UnserializedMessageContext<
            UserType, UDPSocketOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UDPSocketOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UDPSocketOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UDPSocketOptions_UnserializedMessageContext<
            UserType, UDPSocketOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UDPSocketOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool allow_address_reuse;
  
  bool allow_broadcast;
  
  bool allow_address_sharing_for_multicast;
  
  uint32_t multicast_interface;
  
  uint32_t multicast_time_to_live;
  
  bool multicast_loopback_mode;
  
  int32_t send_buffer_size;
  
  int32_t receive_buffer_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
UDPSocketOptionsPtr UDPSocketOptions::Clone() const {
  return New(
      mojo::Clone(allow_address_reuse),
      mojo::Clone(allow_broadcast),
      mojo::Clone(allow_address_sharing_for_multicast),
      mojo::Clone(multicast_interface),
      mojo::Clone(multicast_time_to_live),
      mojo::Clone(multicast_loopback_mode),
      mojo::Clone(send_buffer_size),
      mojo::Clone(receive_buffer_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UDPSocketOptions>::value>::type*>
bool UDPSocketOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->allow_address_reuse, other_struct.allow_address_reuse))
    return false;
  if (!mojo::Equals(this->allow_broadcast, other_struct.allow_broadcast))
    return false;
  if (!mojo::Equals(this->allow_address_sharing_for_multicast, other_struct.allow_address_sharing_for_multicast))
    return false;
  if (!mojo::Equals(this->multicast_interface, other_struct.multicast_interface))
    return false;
  if (!mojo::Equals(this->multicast_time_to_live, other_struct.multicast_time_to_live))
    return false;
  if (!mojo::Equals(this->multicast_loopback_mode, other_struct.multicast_loopback_mode))
    return false;
  if (!mojo::Equals(this->send_buffer_size, other_struct.send_buffer_size))
    return false;
  if (!mojo::Equals(this->receive_buffer_size, other_struct.receive_buffer_size))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::UDPSocketOptions::DataView,
                                         ::network::mojom::UDPSocketOptionsPtr> {
  static bool IsNull(const ::network::mojom::UDPSocketOptionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::UDPSocketOptionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::UDPSocketOptions::allow_address_reuse) allow_address_reuse(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->allow_address_reuse;
  }

  static decltype(::network::mojom::UDPSocketOptions::allow_broadcast) allow_broadcast(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->allow_broadcast;
  }

  static decltype(::network::mojom::UDPSocketOptions::allow_address_sharing_for_multicast) allow_address_sharing_for_multicast(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->allow_address_sharing_for_multicast;
  }

  static decltype(::network::mojom::UDPSocketOptions::multicast_interface) multicast_interface(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->multicast_interface;
  }

  static decltype(::network::mojom::UDPSocketOptions::multicast_time_to_live) multicast_time_to_live(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->multicast_time_to_live;
  }

  static decltype(::network::mojom::UDPSocketOptions::multicast_loopback_mode) multicast_loopback_mode(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->multicast_loopback_mode;
  }

  static decltype(::network::mojom::UDPSocketOptions::send_buffer_size) send_buffer_size(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->send_buffer_size;
  }

  static decltype(::network::mojom::UDPSocketOptions::receive_buffer_size) receive_buffer_size(
      const ::network::mojom::UDPSocketOptionsPtr& input) {
    return input->receive_buffer_size;
  }

  static bool Read(::network::mojom::UDPSocketOptions::DataView input, ::network::mojom::UDPSocketOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_H_