// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_H_

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
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-shared.h"
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-forward.h"
#include "services/network/public/mojom/network_param.mojom-forward.h"
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

class TrialComparisonCertVerifierConfigClientProxy;

template <typename ImplRefTraits>
class TrialComparisonCertVerifierConfigClientStub;

class TrialComparisonCertVerifierConfigClientRequestValidator;


class  TrialComparisonCertVerifierConfigClient
    : public TrialComparisonCertVerifierConfigClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TrialComparisonCertVerifierConfigClientInterfaceBase;
  using Proxy_ = TrialComparisonCertVerifierConfigClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TrialComparisonCertVerifierConfigClientStub<ImplRefTraits>;

  using RequestValidator_ = TrialComparisonCertVerifierConfigClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnTrialConfigUpdatedMinVersion = 0,
  };
  virtual ~TrialComparisonCertVerifierConfigClient() {}

  
  virtual void OnTrialConfigUpdated(bool allowed) = 0;
};

class TrialComparisonCertVerifierReportClientProxy;

template <typename ImplRefTraits>
class TrialComparisonCertVerifierReportClientStub;

class TrialComparisonCertVerifierReportClientRequestValidator;


class  TrialComparisonCertVerifierReportClient
    : public TrialComparisonCertVerifierReportClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TrialComparisonCertVerifierReportClientInterfaceBase;
  using Proxy_ = TrialComparisonCertVerifierReportClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TrialComparisonCertVerifierReportClientStub<ImplRefTraits>;

  using RequestValidator_ = TrialComparisonCertVerifierReportClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSendTrialReportMinVersion = 0,
  };
  virtual ~TrialComparisonCertVerifierReportClient() {}

  
  virtual void SendTrialReport(const std::string& hostname, const scoped_refptr<net::X509Certificate>& cert, bool enable_rev_checking, bool require_rev_checking_local_anchors, bool enable_sha1_local_anchors, bool disable_symantec_enforcement, const net::CertVerifyResult& primary_result, const net::CertVerifyResult& trial_result) = 0;
};

class  TrialComparisonCertVerifierConfigClientProxy
    : public TrialComparisonCertVerifierConfigClient {
 public:
  using InterfaceType = TrialComparisonCertVerifierConfigClient;

  explicit TrialComparisonCertVerifierConfigClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTrialConfigUpdated(bool allowed) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TrialComparisonCertVerifierReportClientProxy
    : public TrialComparisonCertVerifierReportClient {
 public:
  using InterfaceType = TrialComparisonCertVerifierReportClient;

  explicit TrialComparisonCertVerifierReportClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void SendTrialReport(const std::string& hostname, const scoped_refptr<net::X509Certificate>& cert, bool enable_rev_checking, bool require_rev_checking_local_anchors, bool enable_sha1_local_anchors, bool disable_symantec_enforcement, const net::CertVerifyResult& primary_result, const net::CertVerifyResult& trial_result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TrialComparisonCertVerifierConfigClientStubDispatch {
 public:
  static bool Accept(TrialComparisonCertVerifierConfigClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TrialComparisonCertVerifierConfigClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TrialComparisonCertVerifierConfigClient>>
class TrialComparisonCertVerifierConfigClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TrialComparisonCertVerifierConfigClientStub() {}
  ~TrialComparisonCertVerifierConfigClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrialComparisonCertVerifierConfigClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrialComparisonCertVerifierConfigClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TrialComparisonCertVerifierReportClientStubDispatch {
 public:
  static bool Accept(TrialComparisonCertVerifierReportClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TrialComparisonCertVerifierReportClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TrialComparisonCertVerifierReportClient>>
class TrialComparisonCertVerifierReportClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TrialComparisonCertVerifierReportClientStub() {}
  ~TrialComparisonCertVerifierReportClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrialComparisonCertVerifierReportClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TrialComparisonCertVerifierReportClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TrialComparisonCertVerifierConfigClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TrialComparisonCertVerifierReportClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  TrialComparisonCertVerifierParams {
 public:
  using DataView = TrialComparisonCertVerifierParamsDataView;
  using Data_ = internal::TrialComparisonCertVerifierParams_Data;

  template <typename... Args>
  static TrialComparisonCertVerifierParamsPtr New(Args&&... args) {
    return TrialComparisonCertVerifierParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TrialComparisonCertVerifierParamsPtr From(const U& u) {
    return mojo::TypeConverter<TrialComparisonCertVerifierParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TrialComparisonCertVerifierParams>::Convert(*this);
  }


  TrialComparisonCertVerifierParams();

  TrialComparisonCertVerifierParams(
      bool initial_allowed,
      TrialComparisonCertVerifierConfigClientRequest config_client_request,
      TrialComparisonCertVerifierReportClientPtrInfo report_client);

  ~TrialComparisonCertVerifierParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TrialComparisonCertVerifierParamsPtr>
  TrialComparisonCertVerifierParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TrialComparisonCertVerifierParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TrialComparisonCertVerifierParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TrialComparisonCertVerifierParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TrialComparisonCertVerifierParams_UnserializedMessageContext<
            UserType, TrialComparisonCertVerifierParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TrialComparisonCertVerifierParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TrialComparisonCertVerifierParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TrialComparisonCertVerifierParams_UnserializedMessageContext<
            UserType, TrialComparisonCertVerifierParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TrialComparisonCertVerifierParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool initial_allowed;
  
  TrialComparisonCertVerifierConfigClientRequest config_client_request;
  
  TrialComparisonCertVerifierReportClientPtrInfo report_client;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TrialComparisonCertVerifierParams);
};

template <typename StructPtrType>
TrialComparisonCertVerifierParamsPtr TrialComparisonCertVerifierParams::Clone() const {
  return New(
      mojo::Clone(initial_allowed),
      mojo::Clone(config_client_request),
      mojo::Clone(report_client)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TrialComparisonCertVerifierParams>::value>::type*>
bool TrialComparisonCertVerifierParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->initial_allowed, other_struct.initial_allowed))
    return false;
  if (!mojo::Equals(this->config_client_request, other_struct.config_client_request))
    return false;
  if (!mojo::Equals(this->report_client, other_struct.report_client))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::TrialComparisonCertVerifierParams::DataView,
                                         ::network::mojom::TrialComparisonCertVerifierParamsPtr> {
  static bool IsNull(const ::network::mojom::TrialComparisonCertVerifierParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::TrialComparisonCertVerifierParamsPtr* output) { output->reset(); }

  static decltype(::network::mojom::TrialComparisonCertVerifierParams::initial_allowed) initial_allowed(
      const ::network::mojom::TrialComparisonCertVerifierParamsPtr& input) {
    return input->initial_allowed;
  }

  static  decltype(::network::mojom::TrialComparisonCertVerifierParams::config_client_request)& config_client_request(
       ::network::mojom::TrialComparisonCertVerifierParamsPtr& input) {
    return input->config_client_request;
  }

  static  decltype(::network::mojom::TrialComparisonCertVerifierParams::report_client)& report_client(
       ::network::mojom::TrialComparisonCertVerifierParamsPtr& input) {
    return input->report_client;
  }

  static bool Read(::network::mojom::TrialComparisonCertVerifierParams::DataView input, ::network::mojom::TrialComparisonCertVerifierParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_H_