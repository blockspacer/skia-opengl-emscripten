// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/tls_socket.mojom-shared.h"
#include "services/network/public/mojom/tls_socket.mojom-blink-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink-forward.h"
#include "services/network/public/mojom/ssl_config.mojom-blink-forward.h"

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

class TLSClientSocketProxy;

template <typename ImplRefTraits>
class TLSClientSocketStub;

class TLSClientSocketRequestValidator;


class BLINK_PLATFORM_EXPORT TLSClientSocket
    : public TLSClientSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TLSClientSocketInterfaceBase;
  using Proxy_ = TLSClientSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = TLSClientSocketStub<ImplRefTraits>;

  using RequestValidator_ = TLSClientSocketRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~TLSClientSocket() {}
};

class BLINK_PLATFORM_EXPORT TLSClientSocketProxy
    : public TLSClientSocket {
 public:
  using InterfaceType = TLSClientSocket;

  explicit TLSClientSocketProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT TLSClientSocketStubDispatch {
 public:
  static bool Accept(TLSClientSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TLSClientSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TLSClientSocket>>
class TLSClientSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TLSClientSocketStub() {}
  ~TLSClientSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TLSClientSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TLSClientSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT TLSClientSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT TLSClientSocketOptions {
 public:
  using DataView = TLSClientSocketOptionsDataView;
  using Data_ = internal::TLSClientSocketOptions_Data;

  template <typename... Args>
  static TLSClientSocketOptionsPtr New(Args&&... args) {
    return TLSClientSocketOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TLSClientSocketOptionsPtr From(const U& u) {
    return mojo::TypeConverter<TLSClientSocketOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TLSClientSocketOptions>::Convert(*this);
  }


  TLSClientSocketOptions();

  TLSClientSocketOptions(
      ::network::mojom::blink::SSLVersion version_min,
      ::network::mojom::blink::SSLVersion version_max,
      bool send_ssl_info,
      bool unsafely_skip_cert_verification);

  ~TLSClientSocketOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TLSClientSocketOptionsPtr>
  TLSClientSocketOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TLSClientSocketOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TLSClientSocketOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TLSClientSocketOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TLSClientSocketOptions_UnserializedMessageContext<
            UserType, TLSClientSocketOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TLSClientSocketOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TLSClientSocketOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TLSClientSocketOptions_UnserializedMessageContext<
            UserType, TLSClientSocketOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TLSClientSocketOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::network::mojom::blink::SSLVersion version_min;
  
  ::network::mojom::blink::SSLVersion version_max;
  
  bool send_ssl_info;
  
  bool unsafely_skip_cert_verification;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
TLSClientSocketOptionsPtr TLSClientSocketOptions::Clone() const {
  return New(
      mojo::Clone(version_min),
      mojo::Clone(version_max),
      mojo::Clone(send_ssl_info),
      mojo::Clone(unsafely_skip_cert_verification)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TLSClientSocketOptions>::value>::type*>
bool TLSClientSocketOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version_min, other_struct.version_min))
    return false;
  if (!mojo::Equals(this->version_max, other_struct.version_max))
    return false;
  if (!mojo::Equals(this->send_ssl_info, other_struct.send_ssl_info))
    return false;
  if (!mojo::Equals(this->unsafely_skip_cert_verification, other_struct.unsafely_skip_cert_verification))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::TLSClientSocketOptions::DataView,
                                         ::network::mojom::blink::TLSClientSocketOptionsPtr> {
  static bool IsNull(const ::network::mojom::blink::TLSClientSocketOptionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::TLSClientSocketOptionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::TLSClientSocketOptions::version_min) version_min(
      const ::network::mojom::blink::TLSClientSocketOptionsPtr& input) {
    return input->version_min;
  }

  static decltype(::network::mojom::blink::TLSClientSocketOptions::version_max) version_max(
      const ::network::mojom::blink::TLSClientSocketOptionsPtr& input) {
    return input->version_max;
  }

  static decltype(::network::mojom::blink::TLSClientSocketOptions::send_ssl_info) send_ssl_info(
      const ::network::mojom::blink::TLSClientSocketOptionsPtr& input) {
    return input->send_ssl_info;
  }

  static decltype(::network::mojom::blink::TLSClientSocketOptions::unsafely_skip_cert_verification) unsafely_skip_cert_verification(
      const ::network::mojom::blink::TLSClientSocketOptionsPtr& input) {
    return input->unsafely_skip_cert_verification;
  }

  static bool Read(::network::mojom::blink::TLSClientSocketOptions::DataView input, ::network::mojom::blink::TLSClientSocketOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_BLINK_H_