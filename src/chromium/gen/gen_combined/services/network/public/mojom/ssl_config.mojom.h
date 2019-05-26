// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_H_

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
#include "services/network/public/mojom/ssl_config.mojom-shared.h"
#include "services/network/public/mojom/ssl_config.mojom-forward.h"
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

class SSLConfigClientProxy;

template <typename ImplRefTraits>
class SSLConfigClientStub;

class SSLConfigClientRequestValidator;


class  SSLConfigClient
    : public SSLConfigClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SSLConfigClientInterfaceBase;
  using Proxy_ = SSLConfigClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SSLConfigClientStub<ImplRefTraits>;

  using RequestValidator_ = SSLConfigClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSSLConfigUpdatedMinVersion = 0,
  };
  virtual ~SSLConfigClient() {}

  
  virtual void OnSSLConfigUpdated(SSLConfigPtr ssl_config) = 0;
};

class  SSLConfigClientProxy
    : public SSLConfigClient {
 public:
  using InterfaceType = SSLConfigClient;

  explicit SSLConfigClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSSLConfigUpdated(SSLConfigPtr ssl_config) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SSLConfigClientStubDispatch {
 public:
  static bool Accept(SSLConfigClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SSLConfigClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SSLConfigClient>>
class SSLConfigClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SSLConfigClientStub() {}
  ~SSLConfigClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLConfigClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SSLConfigClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SSLConfigClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  SSLConfig {
 public:
  using DataView = SSLConfigDataView;
  using Data_ = internal::SSLConfig_Data;

  template <typename... Args>
  static SSLConfigPtr New(Args&&... args) {
    return SSLConfigPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SSLConfigPtr From(const U& u) {
    return mojo::TypeConverter<SSLConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SSLConfig>::Convert(*this);
  }


  SSLConfig();

  SSLConfig(
      bool rev_checking_enabled,
      bool rev_checking_required_local_anchors,
      bool sha1_local_anchors_enabled,
      bool symantec_enforcement_disabled,
      SSLVersion version_min,
      SSLVersion version_max,
      const std::vector<uint16_t>& disabled_cipher_suites,
      const std::vector<std::string>& client_cert_pooling_policy);

  ~SSLConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SSLConfigPtr>
  SSLConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SSLConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SSLConfig::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SSLConfig::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SSLConfig_UnserializedMessageContext<
            UserType, SSLConfig::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SSLConfig::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SSLConfig::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SSLConfig_UnserializedMessageContext<
            UserType, SSLConfig::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SSLConfig::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool rev_checking_enabled;
  
  bool rev_checking_required_local_anchors;
  
  bool sha1_local_anchors_enabled;
  
  bool symantec_enforcement_disabled;
  
  SSLVersion version_min;
  
  SSLVersion version_max;
  
  std::vector<uint16_t> disabled_cipher_suites;
  
  std::vector<std::string> client_cert_pooling_policy;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SSLConfigPtr SSLConfig::Clone() const {
  return New(
      mojo::Clone(rev_checking_enabled),
      mojo::Clone(rev_checking_required_local_anchors),
      mojo::Clone(sha1_local_anchors_enabled),
      mojo::Clone(symantec_enforcement_disabled),
      mojo::Clone(version_min),
      mojo::Clone(version_max),
      mojo::Clone(disabled_cipher_suites),
      mojo::Clone(client_cert_pooling_policy)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SSLConfig>::value>::type*>
bool SSLConfig::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rev_checking_enabled, other_struct.rev_checking_enabled))
    return false;
  if (!mojo::Equals(this->rev_checking_required_local_anchors, other_struct.rev_checking_required_local_anchors))
    return false;
  if (!mojo::Equals(this->sha1_local_anchors_enabled, other_struct.sha1_local_anchors_enabled))
    return false;
  if (!mojo::Equals(this->symantec_enforcement_disabled, other_struct.symantec_enforcement_disabled))
    return false;
  if (!mojo::Equals(this->version_min, other_struct.version_min))
    return false;
  if (!mojo::Equals(this->version_max, other_struct.version_max))
    return false;
  if (!mojo::Equals(this->disabled_cipher_suites, other_struct.disabled_cipher_suites))
    return false;
  if (!mojo::Equals(this->client_cert_pooling_policy, other_struct.client_cert_pooling_policy))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::SSLConfig::DataView,
                                         ::network::mojom::SSLConfigPtr> {
  static bool IsNull(const ::network::mojom::SSLConfigPtr& input) { return !input; }
  static void SetToNull(::network::mojom::SSLConfigPtr* output) { output->reset(); }

  static decltype(::network::mojom::SSLConfig::rev_checking_enabled) rev_checking_enabled(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->rev_checking_enabled;
  }

  static decltype(::network::mojom::SSLConfig::rev_checking_required_local_anchors) rev_checking_required_local_anchors(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->rev_checking_required_local_anchors;
  }

  static decltype(::network::mojom::SSLConfig::sha1_local_anchors_enabled) sha1_local_anchors_enabled(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->sha1_local_anchors_enabled;
  }

  static decltype(::network::mojom::SSLConfig::symantec_enforcement_disabled) symantec_enforcement_disabled(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->symantec_enforcement_disabled;
  }

  static decltype(::network::mojom::SSLConfig::version_min) version_min(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->version_min;
  }

  static decltype(::network::mojom::SSLConfig::version_max) version_max(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->version_max;
  }

  static const decltype(::network::mojom::SSLConfig::disabled_cipher_suites)& disabled_cipher_suites(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->disabled_cipher_suites;
  }

  static const decltype(::network::mojom::SSLConfig::client_cert_pooling_policy)& client_cert_pooling_policy(
      const ::network::mojom::SSLConfigPtr& input) {
    return input->client_cert_pooling_policy;
  }

  static bool Read(::network::mojom::SSLConfig::DataView input, ::network::mojom::SSLConfigPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SSL_CONFIG_MOJOM_H_