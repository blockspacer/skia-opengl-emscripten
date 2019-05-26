// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/tcp_socket.mojom-shared.h"
#include "services/network/public/mojom/tcp_socket.mojom-blink-forward.h"
#include "services/network/public/mojom/address_list.mojom-blink-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink-forward.h"
#include "services/network/public/mojom/ssl_config.mojom-blink-forward.h"
#include "services/network/public/mojom/tls_socket.mojom-blink-forward.h"
#include "services/network/public/mojom/network_param.mojom-blink-forward.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink-forward.h"

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




namespace network {
namespace mojom {
namespace blink {

class TCPBoundSocketProxy;

template <typename ImplRefTraits>
class TCPBoundSocketStub;

class TCPBoundSocketRequestValidator;
class TCPBoundSocketResponseValidator;


class BLINK_PLATFORM_EXPORT TCPBoundSocket
    : public TCPBoundSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TCPBoundSocketInterfaceBase;
  using Proxy_ = TCPBoundSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TCPBoundSocketStub<ImplRefTraits>;

  using RequestValidator_ = TCPBoundSocketRequestValidator;
  using ResponseValidator_ = TCPBoundSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kListenMinVersion = 0,
    kConnectMinVersion = 0,
  };
  virtual ~TCPBoundSocket() {}


  using ListenCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Listen(uint32_t backlog, TCPServerSocketRequest socket, ListenCallback callback) = 0;


  using ConnectCallback = base::OnceCallback<void(int32_t, ::network::mojom::blink::IPEndPointPtr, ::network::mojom::blink::IPEndPointPtr, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  
  virtual void Connect(::network::mojom::blink::AddressListPtr remote_addr_list, TCPConnectedSocketOptionsPtr tcp_connected_socket_options, TCPConnectedSocketRequest socket, SocketObserverPtr observer, ConnectCallback callback) = 0;
};

class TCPConnectedSocketProxy;

template <typename ImplRefTraits>
class TCPConnectedSocketStub;

class TCPConnectedSocketRequestValidator;
class TCPConnectedSocketResponseValidator;


class BLINK_PLATFORM_EXPORT TCPConnectedSocket
    : public TCPConnectedSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TCPConnectedSocketInterfaceBase;
  using Proxy_ = TCPConnectedSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TCPConnectedSocketStub<ImplRefTraits>;

  using RequestValidator_ = TCPConnectedSocketRequestValidator;
  using ResponseValidator_ = TCPConnectedSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kUpgradeToTLSMinVersion = 0,
    kSetSendBufferSizeMinVersion = 0,
    kSetReceiveBufferSizeMinVersion = 0,
    kSetNoDelayMinVersion = 0,
    kSetKeepAliveMinVersion = 0,
  };
  virtual ~TCPConnectedSocket() {}


  using UpgradeToTLSCallback = base::OnceCallback<void(int32_t, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle, ::network::mojom::blink::SSLInfoPtr)>;
  
  virtual void UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::TLSClientSocketOptionsPtr options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) = 0;


  using SetSendBufferSizeCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) = 0;


  using SetReceiveBufferSizeCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) = 0;


  using SetNoDelayCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetNoDelay(bool no_delay, SetNoDelayCallback callback) = 0;


  using SetKeepAliveCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetKeepAlive(bool enable, int32_t delay_secs, SetKeepAliveCallback callback) = 0;
};

class SocketObserverProxy;

template <typename ImplRefTraits>
class SocketObserverStub;

class SocketObserverRequestValidator;


class BLINK_PLATFORM_EXPORT SocketObserver
    : public SocketObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SocketObserverInterfaceBase;
  using Proxy_ = SocketObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = SocketObserverStub<ImplRefTraits>;

  using RequestValidator_ = SocketObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnReadErrorMinVersion = 0,
    kOnWriteErrorMinVersion = 0,
  };
  virtual ~SocketObserver() {}

  
  virtual void OnReadError(int32_t net_error) = 0;

  
  virtual void OnWriteError(int32_t net_error) = 0;
};

class TCPServerSocketProxy;

template <typename ImplRefTraits>
class TCPServerSocketStub;

class TCPServerSocketRequestValidator;
class TCPServerSocketResponseValidator;


class BLINK_PLATFORM_EXPORT TCPServerSocket
    : public TCPServerSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TCPServerSocketInterfaceBase;
  using Proxy_ = TCPServerSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TCPServerSocketStub<ImplRefTraits>;

  using RequestValidator_ = TCPServerSocketRequestValidator;
  using ResponseValidator_ = TCPServerSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAcceptMinVersion = 0,
  };
  virtual ~TCPServerSocket() {}


  using AcceptCallback = base::OnceCallback<void(int32_t, ::network::mojom::blink::IPEndPointPtr, TCPConnectedSocketPtr, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  
  virtual void Accept(SocketObserverPtr observer, AcceptCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT TCPBoundSocketProxy
    : public TCPBoundSocket {
 public:
  using InterfaceType = TCPBoundSocket;

  explicit TCPBoundSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void Listen(uint32_t backlog, TCPServerSocketRequest socket, ListenCallback callback) final;
  void Connect(::network::mojom::blink::AddressListPtr remote_addr_list, TCPConnectedSocketOptionsPtr tcp_connected_socket_options, TCPConnectedSocketRequest socket, SocketObserverPtr observer, ConnectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT TCPConnectedSocketProxy
    : public TCPConnectedSocket {
 public:
  using InterfaceType = TCPConnectedSocket;

  explicit TCPConnectedSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpgradeToTLS(::network::mojom::blink::HostPortPairPtr host_port_pair, ::network::mojom::blink::TLSClientSocketOptionsPtr options, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation, ::network::mojom::blink::TLSClientSocketRequest request, SocketObserverPtr observer, UpgradeToTLSCallback callback) final;
  void SetSendBufferSize(int32_t send_buffer_size, SetSendBufferSizeCallback callback) final;
  void SetReceiveBufferSize(int32_t receive_buffer_size, SetReceiveBufferSizeCallback callback) final;
  void SetNoDelay(bool no_delay, SetNoDelayCallback callback) final;
  void SetKeepAlive(bool enable, int32_t delay_secs, SetKeepAliveCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT SocketObserverProxy
    : public SocketObserver {
 public:
  using InterfaceType = SocketObserver;

  explicit SocketObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReadError(int32_t net_error) final;
  void OnWriteError(int32_t net_error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT TCPServerSocketProxy
    : public TCPServerSocket {
 public:
  using InterfaceType = TCPServerSocket;

  explicit TCPServerSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void Accept(SocketObserverPtr observer, AcceptCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT TCPBoundSocketStubDispatch {
 public:
  static bool Accept(TCPBoundSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TCPBoundSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TCPBoundSocket>>
class TCPBoundSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TCPBoundSocketStub() {}
  ~TCPBoundSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPBoundSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPBoundSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketStubDispatch {
 public:
  static bool Accept(TCPConnectedSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TCPConnectedSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TCPConnectedSocket>>
class TCPConnectedSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TCPConnectedSocketStub() {}
  ~TCPConnectedSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPConnectedSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPConnectedSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SocketObserverStubDispatch {
 public:
  static bool Accept(SocketObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SocketObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SocketObserver>>
class SocketObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SocketObserverStub() {}
  ~SocketObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SocketObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SocketObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketStubDispatch {
 public:
  static bool Accept(TCPServerSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TCPServerSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TCPServerSocket>>
class TCPServerSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TCPServerSocketStub() {}
  ~TCPServerSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPServerSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TCPServerSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TCPBoundSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SocketObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPBoundSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPConnectedSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT TCPServerSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT TCPConnectedSocketOptions {
 public:
  using DataView = TCPConnectedSocketOptionsDataView;
  using Data_ = internal::TCPConnectedSocketOptions_Data;

  template <typename... Args>
  static TCPConnectedSocketOptionsPtr New(Args&&... args) {
    return TCPConnectedSocketOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TCPConnectedSocketOptionsPtr From(const U& u) {
    return mojo::TypeConverter<TCPConnectedSocketOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TCPConnectedSocketOptions>::Convert(*this);
  }


  TCPConnectedSocketOptions();

  TCPConnectedSocketOptions(
      int32_t send_buffer_size,
      int32_t receive_buffer_size,
      bool no_delay);

  ~TCPConnectedSocketOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TCPConnectedSocketOptionsPtr>
  TCPConnectedSocketOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TCPConnectedSocketOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TCPConnectedSocketOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TCPConnectedSocketOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TCPConnectedSocketOptions_UnserializedMessageContext<
            UserType, TCPConnectedSocketOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TCPConnectedSocketOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TCPConnectedSocketOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TCPConnectedSocketOptions_UnserializedMessageContext<
            UserType, TCPConnectedSocketOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TCPConnectedSocketOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t send_buffer_size;
  
  int32_t receive_buffer_size;
  
  bool no_delay;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
TCPConnectedSocketOptionsPtr TCPConnectedSocketOptions::Clone() const {
  return New(
      mojo::Clone(send_buffer_size),
      mojo::Clone(receive_buffer_size),
      mojo::Clone(no_delay)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TCPConnectedSocketOptions>::value>::type*>
bool TCPConnectedSocketOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->send_buffer_size, other_struct.send_buffer_size))
    return false;
  if (!mojo::Equals(this->receive_buffer_size, other_struct.receive_buffer_size))
    return false;
  if (!mojo::Equals(this->no_delay, other_struct.no_delay))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::TCPConnectedSocketOptions::DataView,
                                         ::network::mojom::blink::TCPConnectedSocketOptionsPtr> {
  static bool IsNull(const ::network::mojom::blink::TCPConnectedSocketOptionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::TCPConnectedSocketOptionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::TCPConnectedSocketOptions::send_buffer_size) send_buffer_size(
      const ::network::mojom::blink::TCPConnectedSocketOptionsPtr& input) {
    return input->send_buffer_size;
  }

  static decltype(::network::mojom::blink::TCPConnectedSocketOptions::receive_buffer_size) receive_buffer_size(
      const ::network::mojom::blink::TCPConnectedSocketOptionsPtr& input) {
    return input->receive_buffer_size;
  }

  static decltype(::network::mojom::blink::TCPConnectedSocketOptions::no_delay) no_delay(
      const ::network::mojom::blink::TCPConnectedSocketOptionsPtr& input) {
    return input->no_delay;
  }

  static bool Read(::network::mojom::blink::TCPConnectedSocketOptions::DataView input, ::network::mojom::blink::TCPConnectedSocketOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_BLINK_H_