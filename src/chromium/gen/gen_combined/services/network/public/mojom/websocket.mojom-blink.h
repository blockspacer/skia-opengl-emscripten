// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/websocket.mojom-shared.h"
#include "services/network/public/mojom/websocket.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"

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
struct network_mojom_internal_WebSocketMessageType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::WebSocketMessageType& value) {
    using utype = std::underlying_type<::network::mojom::WebSocketMessageType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::WebSocketMessageType& left, const ::network::mojom::WebSocketMessageType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::WebSocketMessageType>
    : public GenericHashTraits<::network::mojom::WebSocketMessageType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::WebSocketMessageType& value) {
    return value == static_cast<::network::mojom::WebSocketMessageType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::WebSocketMessageType& slot, bool) {
    slot = static_cast<::network::mojom::WebSocketMessageType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::WebSocketMessageType& value) {
    return value == static_cast<::network::mojom::WebSocketMessageType>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {

class AuthenticationHandlerProxy;

template <typename ImplRefTraits>
class AuthenticationHandlerStub;

class AuthenticationHandlerRequestValidator;
class AuthenticationHandlerResponseValidator;


class BLINK_PLATFORM_EXPORT AuthenticationHandler
    : public AuthenticationHandlerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AuthenticationHandlerInterfaceBase;
  using Proxy_ = AuthenticationHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = AuthenticationHandlerStub<ImplRefTraits>;

  using RequestValidator_ = AuthenticationHandlerRequestValidator;
  using ResponseValidator_ = AuthenticationHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnAuthRequiredMinVersion = 0,
  };
  virtual ~AuthenticationHandler() {}


  using OnAuthRequiredCallback = base::OnceCallback<void(::network::mojom::blink::AuthCredentialsPtr)>;
  
  virtual void OnAuthRequired(::network::mojom::blink::AuthChallengeInfoPtr info, ::network::mojom::blink::HttpResponseHeadersPtr headers, ::network::mojom::blink::IPEndPointPtr remote_endpoint, OnAuthRequiredCallback callback) = 0;
};

class WebSocketClientProxy;

template <typename ImplRefTraits>
class WebSocketClientStub;

class WebSocketClientRequestValidator;


class BLINK_PLATFORM_EXPORT WebSocketClient
    : public WebSocketClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WebSocketClientInterfaceBase;
  using Proxy_ = WebSocketClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebSocketClientStub<ImplRefTraits>;

  using RequestValidator_ = WebSocketClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnFailChannelMinVersion = 0,
    kOnStartOpeningHandshakeMinVersion = 0,
    kOnFinishOpeningHandshakeMinVersion = 0,
    kOnAddChannelResponseMinVersion = 0,
    kOnDataFrameMinVersion = 0,
    kOnFlowControlMinVersion = 0,
    kOnDropChannelMinVersion = 0,
    kOnClosingHandshakeMinVersion = 0,
  };
  virtual ~WebSocketClient() {}

  
  virtual void OnFailChannel(const WTF::String& reason) = 0;

  
  virtual void OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) = 0;

  
  virtual void OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) = 0;

  
  virtual void OnAddChannelResponse(const WTF::String& selected_protocol, const WTF::String& extensions) = 0;

  
  virtual void OnDataFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) = 0;

  
  virtual void OnFlowControl(int64_t quota) = 0;

  
  virtual void OnDropChannel(bool was_clean, uint16_t code, const WTF::String& reason) = 0;

  
  virtual void OnClosingHandshake() = 0;
};

class WebSocketProxy;

template <typename ImplRefTraits>
class WebSocketStub;

class WebSocketRequestValidator;


class BLINK_PLATFORM_EXPORT WebSocket
    : public WebSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WebSocketInterfaceBase;
  using Proxy_ = WebSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebSocketStub<ImplRefTraits>;

  using RequestValidator_ = WebSocketRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddChannelRequestMinVersion = 0,
    kSendFrameMinVersion = 0,
    kSendFlowControlMinVersion = 0,
    kStartClosingHandshakeMinVersion = 0,
  };
  
  static constexpr uint32_t kInsufficientResources = 1U;
  virtual ~WebSocket() {}

  
  virtual void AddChannelRequest(const ::blink::KURL& url, const WTF::Vector<WTF::String>& requested_protocols, const ::blink::KURL& first_party_for_cookies, WTF::Vector<HttpHeaderPtr> additional_headers, WebSocketClientPtr client) = 0;

  
  virtual void SendFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) = 0;

  
  virtual void SendFlowControl(int64_t quota) = 0;

  
  virtual void StartClosingHandshake(uint16_t code, const WTF::String& reason) = 0;
};

class BLINK_PLATFORM_EXPORT AuthenticationHandlerProxy
    : public AuthenticationHandler {
 public:
  using InterfaceType = AuthenticationHandler;

  explicit AuthenticationHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAuthRequired(::network::mojom::blink::AuthChallengeInfoPtr info, ::network::mojom::blink::HttpResponseHeadersPtr headers, ::network::mojom::blink::IPEndPointPtr remote_endpoint, OnAuthRequiredCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT WebSocketClientProxy
    : public WebSocketClient {
 public:
  using InterfaceType = WebSocketClient;

  explicit WebSocketClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnFailChannel(const WTF::String& reason) final;
  void OnStartOpeningHandshake(WebSocketHandshakeRequestPtr request) final;
  void OnFinishOpeningHandshake(WebSocketHandshakeResponsePtr response) final;
  void OnAddChannelResponse(const WTF::String& selected_protocol, const WTF::String& extensions) final;
  void OnDataFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) final;
  void OnFlowControl(int64_t quota) final;
  void OnDropChannel(bool was_clean, uint16_t code, const WTF::String& reason) final;
  void OnClosingHandshake() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT WebSocketProxy
    : public WebSocket {
 public:
  using InterfaceType = WebSocket;

  explicit WebSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddChannelRequest(const ::blink::KURL& url, const WTF::Vector<WTF::String>& requested_protocols, const ::blink::KURL& first_party_for_cookies, WTF::Vector<HttpHeaderPtr> additional_headers, WebSocketClientPtr client) final;
  void SendFrame(bool fin, WebSocketMessageType type, const WTF::Vector<uint8_t>& data) final;
  void SendFlowControl(int64_t quota) final;
  void StartClosingHandshake(uint16_t code, const WTF::String& reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT AuthenticationHandlerStubDispatch {
 public:
  static bool Accept(AuthenticationHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AuthenticationHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AuthenticationHandler>>
class AuthenticationHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AuthenticationHandlerStub() {}
  ~AuthenticationHandlerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthenticationHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthenticationHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT WebSocketClientStubDispatch {
 public:
  static bool Accept(WebSocketClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebSocketClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebSocketClient>>
class WebSocketClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebSocketClientStub() {}
  ~WebSocketClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebSocketClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebSocketClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT WebSocketStubDispatch {
 public:
  static bool Accept(WebSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebSocket>>
class WebSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebSocketStub() {}
  ~WebSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT AuthenticationHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebSocketClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT WebSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT AuthenticationHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT HttpHeader {
 public:
  using DataView = HttpHeaderDataView;
  using Data_ = internal::HttpHeader_Data;

  template <typename... Args>
  static HttpHeaderPtr New(Args&&... args) {
    return HttpHeaderPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpHeaderPtr From(const U& u) {
    return mojo::TypeConverter<HttpHeaderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpHeader>::Convert(*this);
  }


  HttpHeader();

  HttpHeader(
      const WTF::String& name,
      const WTF::String& value);

  ~HttpHeader();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpHeaderPtr>
  HttpHeaderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpHeader>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpHeader::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpHeader::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpHeader_UnserializedMessageContext<
            UserType, HttpHeader::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpHeader::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HttpHeader::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpHeader_UnserializedMessageContext<
            UserType, HttpHeader::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpHeader::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  WTF::String value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class BLINK_PLATFORM_EXPORT WebSocketHandshakeRequest {
 public:
  using DataView = WebSocketHandshakeRequestDataView;
  using Data_ = internal::WebSocketHandshakeRequest_Data;

  template <typename... Args>
  static WebSocketHandshakeRequestPtr New(Args&&... args) {
    return WebSocketHandshakeRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebSocketHandshakeRequestPtr From(const U& u) {
    return mojo::TypeConverter<WebSocketHandshakeRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebSocketHandshakeRequest>::Convert(*this);
  }


  WebSocketHandshakeRequest();

  WebSocketHandshakeRequest(
      const ::blink::KURL& url,
      WTF::Vector<HttpHeaderPtr> headers,
      const WTF::String& headers_text);

  ~WebSocketHandshakeRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebSocketHandshakeRequestPtr>
  WebSocketHandshakeRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebSocketHandshakeRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebSocketHandshakeRequest::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebSocketHandshakeRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebSocketHandshakeRequest_UnserializedMessageContext<
            UserType, WebSocketHandshakeRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebSocketHandshakeRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WebSocketHandshakeRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebSocketHandshakeRequest_UnserializedMessageContext<
            UserType, WebSocketHandshakeRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebSocketHandshakeRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL url;
  
  WTF::Vector<HttpHeaderPtr> headers;
  
  WTF::String headers_text;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebSocketHandshakeRequest);
};





class BLINK_PLATFORM_EXPORT WebSocketHandshakeResponse {
 public:
  using DataView = WebSocketHandshakeResponseDataView;
  using Data_ = internal::WebSocketHandshakeResponse_Data;

  template <typename... Args>
  static WebSocketHandshakeResponsePtr New(Args&&... args) {
    return WebSocketHandshakeResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebSocketHandshakeResponsePtr From(const U& u) {
    return mojo::TypeConverter<WebSocketHandshakeResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebSocketHandshakeResponse>::Convert(*this);
  }


  WebSocketHandshakeResponse();

  WebSocketHandshakeResponse(
      const ::blink::KURL& url,
      ::network::mojom::blink::HttpVersionPtr http_version,
      int32_t status_code,
      const WTF::String& status_text,
      ::network::mojom::blink::IPEndPointPtr remote_endpoint,
      WTF::Vector<HttpHeaderPtr> headers,
      const WTF::String& headers_text);

  ~WebSocketHandshakeResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebSocketHandshakeResponsePtr>
  WebSocketHandshakeResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebSocketHandshakeResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebSocketHandshakeResponse::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebSocketHandshakeResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebSocketHandshakeResponse_UnserializedMessageContext<
            UserType, WebSocketHandshakeResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebSocketHandshakeResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WebSocketHandshakeResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebSocketHandshakeResponse_UnserializedMessageContext<
            UserType, WebSocketHandshakeResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebSocketHandshakeResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL url;
  
  ::network::mojom::blink::HttpVersionPtr http_version;
  
  int32_t status_code;
  
  WTF::String status_text;
  
  ::network::mojom::blink::IPEndPointPtr remote_endpoint;
  
  WTF::Vector<HttpHeaderPtr> headers;
  
  WTF::String headers_text;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebSocketHandshakeResponse);
};

template <typename StructPtrType>
HttpHeaderPtr HttpHeader::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpHeader>::value>::type*>
bool HttpHeader::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
WebSocketHandshakeRequestPtr WebSocketHandshakeRequest::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(headers),
      mojo::Clone(headers_text)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebSocketHandshakeRequest>::value>::type*>
bool WebSocketHandshakeRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->headers_text, other_struct.headers_text))
    return false;
  return true;
}
template <typename StructPtrType>
WebSocketHandshakeResponsePtr WebSocketHandshakeResponse::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(http_version),
      mojo::Clone(status_code),
      mojo::Clone(status_text),
      mojo::Clone(remote_endpoint),
      mojo::Clone(headers),
      mojo::Clone(headers_text)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebSocketHandshakeResponse>::value>::type*>
bool WebSocketHandshakeResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->http_version, other_struct.http_version))
    return false;
  if (!mojo::Equals(this->status_code, other_struct.status_code))
    return false;
  if (!mojo::Equals(this->status_text, other_struct.status_text))
    return false;
  if (!mojo::Equals(this->remote_endpoint, other_struct.remote_endpoint))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->headers_text, other_struct.headers_text))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::HttpHeader::DataView,
                                         ::network::mojom::blink::HttpHeaderPtr> {
  static bool IsNull(const ::network::mojom::blink::HttpHeaderPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::HttpHeaderPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::HttpHeader::name)& name(
      const ::network::mojom::blink::HttpHeaderPtr& input) {
    return input->name;
  }

  static const decltype(::network::mojom::blink::HttpHeader::value)& value(
      const ::network::mojom::blink::HttpHeaderPtr& input) {
    return input->value;
  }

  static bool Read(::network::mojom::blink::HttpHeader::DataView input, ::network::mojom::blink::HttpHeaderPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::WebSocketHandshakeRequest::DataView,
                                         ::network::mojom::blink::WebSocketHandshakeRequestPtr> {
  static bool IsNull(const ::network::mojom::blink::WebSocketHandshakeRequestPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::WebSocketHandshakeRequestPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::WebSocketHandshakeRequest::url)& url(
      const ::network::mojom::blink::WebSocketHandshakeRequestPtr& input) {
    return input->url;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeRequest::headers)& headers(
      const ::network::mojom::blink::WebSocketHandshakeRequestPtr& input) {
    return input->headers;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeRequest::headers_text)& headers_text(
      const ::network::mojom::blink::WebSocketHandshakeRequestPtr& input) {
    return input->headers_text;
  }

  static bool Read(::network::mojom::blink::WebSocketHandshakeRequest::DataView input, ::network::mojom::blink::WebSocketHandshakeRequestPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::WebSocketHandshakeResponse::DataView,
                                         ::network::mojom::blink::WebSocketHandshakeResponsePtr> {
  static bool IsNull(const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::WebSocketHandshakeResponsePtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::WebSocketHandshakeResponse::url)& url(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->url;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeResponse::http_version)& http_version(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->http_version;
  }

  static decltype(::network::mojom::blink::WebSocketHandshakeResponse::status_code) status_code(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->status_code;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeResponse::status_text)& status_text(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->status_text;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeResponse::remote_endpoint)& remote_endpoint(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->remote_endpoint;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeResponse::headers)& headers(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->headers;
  }

  static const decltype(::network::mojom::blink::WebSocketHandshakeResponse::headers_text)& headers_text(
      const ::network::mojom::blink::WebSocketHandshakeResponsePtr& input) {
    return input->headers_text;
  }

  static bool Read(::network::mojom::blink::WebSocketHandshakeResponse::DataView input, ::network::mojom::blink::WebSocketHandshakeResponsePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_BLINK_H_