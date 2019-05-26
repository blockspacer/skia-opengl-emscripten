// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_H_

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
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared.h"
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-forward.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.h"
#include "services/network/public/mojom/proxy_config.mojom.h"
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
#include "net/proxy_resolution/proxy_config_with_annotation.h"




namespace network {
namespace mojom {

class ProxyConfigClientProxy;

template <typename ImplRefTraits>
class ProxyConfigClientStub;

class ProxyConfigClientRequestValidator;
class ProxyConfigClientResponseValidator;


class  ProxyConfigClient
    : public ProxyConfigClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyConfigClientInterfaceBase;
  using Proxy_ = ProxyConfigClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyConfigClientStub<ImplRefTraits>;

  using RequestValidator_ = ProxyConfigClientRequestValidator;
  using ResponseValidator_ = ProxyConfigClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnProxyConfigUpdatedMinVersion = 0,
    kFlushProxyConfigMinVersion = 0,
  };
  virtual ~ProxyConfigClient() {}

  
  virtual void OnProxyConfigUpdated(const net::ProxyConfigWithAnnotation& proxy_config) = 0;


  using FlushProxyConfigCallback = base::OnceCallback<void()>;
  
  virtual void FlushProxyConfig(FlushProxyConfigCallback callback) = 0;
};

class ProxyConfigPollerClientProxy;

template <typename ImplRefTraits>
class ProxyConfigPollerClientStub;

class ProxyConfigPollerClientRequestValidator;


class  ProxyConfigPollerClient
    : public ProxyConfigPollerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyConfigPollerClientInterfaceBase;
  using Proxy_ = ProxyConfigPollerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyConfigPollerClientStub<ImplRefTraits>;

  using RequestValidator_ = ProxyConfigPollerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnLazyProxyConfigPollMinVersion = 0,
  };
  virtual ~ProxyConfigPollerClient() {}

  
  virtual void OnLazyProxyConfigPoll() = 0;
};

class ProxyErrorClientProxy;

template <typename ImplRefTraits>
class ProxyErrorClientStub;

class ProxyErrorClientRequestValidator;


class  ProxyErrorClient
    : public ProxyErrorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyErrorClientInterfaceBase;
  using Proxy_ = ProxyErrorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyErrorClientStub<ImplRefTraits>;

  using RequestValidator_ = ProxyErrorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnPACScriptErrorMinVersion = 0,
    kOnRequestMaybeFailedDueToProxySettingsMinVersion = 0,
  };
  virtual ~ProxyErrorClient() {}

  
  virtual void OnPACScriptError(int32_t line_number, const std::string& details) = 0;

  
  virtual void OnRequestMaybeFailedDueToProxySettings(int32_t net_error) = 0;
};

class  ProxyConfigClientProxy
    : public ProxyConfigClient {
 public:
  using InterfaceType = ProxyConfigClient;

  explicit ProxyConfigClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnProxyConfigUpdated(const net::ProxyConfigWithAnnotation& proxy_config) final;
  void FlushProxyConfig(FlushProxyConfigCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyConfigPollerClientProxy
    : public ProxyConfigPollerClient {
 public:
  using InterfaceType = ProxyConfigPollerClient;

  explicit ProxyConfigPollerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnLazyProxyConfigPoll() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyErrorClientProxy
    : public ProxyErrorClient {
 public:
  using InterfaceType = ProxyErrorClient;

  explicit ProxyErrorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnPACScriptError(int32_t line_number, const std::string& details) final;
  void OnRequestMaybeFailedDueToProxySettings(int32_t net_error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProxyConfigClientStubDispatch {
 public:
  static bool Accept(ProxyConfigClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyConfigClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyConfigClient>>
class ProxyConfigClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyConfigClientStub() {}
  ~ProxyConfigClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyConfigClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyConfigClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyConfigPollerClientStubDispatch {
 public:
  static bool Accept(ProxyConfigPollerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyConfigPollerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyConfigPollerClient>>
class ProxyConfigPollerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyConfigPollerClientStub() {}
  ~ProxyConfigPollerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyConfigPollerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyConfigPollerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyErrorClientStubDispatch {
 public:
  static bool Accept(ProxyErrorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyErrorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyErrorClient>>
class ProxyErrorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyErrorClientStub() {}
  ~ProxyErrorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyErrorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyErrorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyConfigClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyConfigPollerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyErrorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyConfigClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  ProxyConfigWithAnnotation {
 public:
  using DataView = ProxyConfigWithAnnotationDataView;
  using Data_ = internal::ProxyConfigWithAnnotation_Data;

  template <typename... Args>
  static ProxyConfigWithAnnotationPtr New(Args&&... args) {
    return ProxyConfigWithAnnotationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyConfigWithAnnotationPtr From(const U& u) {
    return mojo::TypeConverter<ProxyConfigWithAnnotationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyConfigWithAnnotation>::Convert(*this);
  }


  ProxyConfigWithAnnotation();

  ProxyConfigWithAnnotation(
      const net::ProxyConfig& value,
      const net::MutableNetworkTrafficAnnotationTag& traffic_annotation);

  ~ProxyConfigWithAnnotation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyConfigWithAnnotationPtr>
  ProxyConfigWithAnnotationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyConfigWithAnnotation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyConfigWithAnnotation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyConfigWithAnnotation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyConfigWithAnnotation_UnserializedMessageContext<
            UserType, ProxyConfigWithAnnotation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyConfigWithAnnotation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyConfigWithAnnotation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyConfigWithAnnotation_UnserializedMessageContext<
            UserType, ProxyConfigWithAnnotation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyConfigWithAnnotation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::ProxyConfig value;
  
  net::MutableNetworkTrafficAnnotationTag traffic_annotation;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ProxyConfigWithAnnotationPtr ProxyConfigWithAnnotation::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(traffic_annotation)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyConfigWithAnnotation>::value>::type*>
bool ProxyConfigWithAnnotation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->traffic_annotation, other_struct.traffic_annotation))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::ProxyConfigWithAnnotation::DataView,
                                         ::network::mojom::ProxyConfigWithAnnotationPtr> {
  static bool IsNull(const ::network::mojom::ProxyConfigWithAnnotationPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ProxyConfigWithAnnotationPtr* output) { output->reset(); }

  static  decltype(::network::mojom::ProxyConfigWithAnnotation::value)& value(
       ::network::mojom::ProxyConfigWithAnnotationPtr& input) {
    return input->value;
  }

  static const decltype(::network::mojom::ProxyConfigWithAnnotation::traffic_annotation)& traffic_annotation(
      const ::network::mojom::ProxyConfigWithAnnotationPtr& input) {
    return input->traffic_annotation;
  }

  static bool Read(::network::mojom::ProxyConfigWithAnnotation::DataView input, ::network::mojom::ProxyConfigWithAnnotationPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_H_