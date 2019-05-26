// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/network/public/mojom/network_service_test.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/network/public/mojom/network_service_test.mojom-params-data.h"
#include "services/network/public/mojom/network_service_test.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_service_test.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_BLINK_JUMBO_H_
#endif
namespace network {
namespace mojom {
namespace blink {
Rule::Rule()
    : resolver_type(),
      host_pattern(),
      replacement() {}

Rule::Rule(
    ResolverType resolver_type_in,
    const WTF::String& host_pattern_in,
    const WTF::String& replacement_in)
    : resolver_type(std::move(resolver_type_in)),
      host_pattern(std::move(host_pattern_in)),
      replacement(std::move(replacement_in)) {}

Rule::~Rule() = default;
size_t Rule::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->resolver_type);
  seed = mojo::internal::WTFHash(seed, this->host_pattern);
  seed = mojo::internal::WTFHash(seed, this->replacement);
  return seed;
}

bool Rule::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char NetworkServiceTest::Name_[] = "network.mojom.NetworkServiceTest";
bool NetworkServiceTest::AddRules(WTF::Vector<RulePtr> rules) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::MockCertVerifierSetDefaultResult(int32_t default_result) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::MockCertVerifierAddResultForCertAndHost(::network::mojom::blink::X509CertificatePtr cert, const WTF::String& host_pattern, ::network::mojom::blink::CertVerifyResultPtr verify_result, int32_t rv) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::SetShouldRequireCT(NetworkServiceTest::ShouldRequireCT required) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::SetTransportSecurityStateSource(uint16_t reporting_port) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::GetLatestMemoryPressureLevel(::mojo_base::mojom::blink::MemoryPressureLevel* out_memory_pressure_level) {
  NOTREACHED();
  return false;
}
bool NetworkServiceTest::GetEnvironmentVariableValue(const WTF::String& name, WTF::String* out_value) {
  NOTREACHED();
  return false;
}
class NetworkServiceTest_AddRules_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_AddRules_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_HandleSyncResponse);
};

class NetworkServiceTest_AddRules_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_AddRules_ForwardToCallback(
      NetworkServiceTest::AddRulesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::AddRulesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_ForwardToCallback);
};

class NetworkServiceTest_SimulateNetworkChange_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SimulateNetworkChange_ForwardToCallback(
      NetworkServiceTest::SimulateNetworkChangeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::SimulateNetworkChangeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkChange_ForwardToCallback);
};

class NetworkServiceTest_SimulateNetworkQualityChange_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SimulateNetworkQualityChange_ForwardToCallback(
      NetworkServiceTest::SimulateNetworkQualityChangeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::SimulateNetworkQualityChangeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkQualityChange_ForwardToCallback);
};
class NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse);
};

class NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback(
      NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback);
};
class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse);
};

class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback(
      NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback);
};
class NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse);
};

class NetworkServiceTest_SetShouldRequireCT_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SetShouldRequireCT_ForwardToCallback(
      NetworkServiceTest::SetShouldRequireCTCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::SetShouldRequireCTCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_ForwardToCallback);
};
class NetworkServiceTest_SetTransportSecurityStateSource_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SetTransportSecurityStateSource_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetTransportSecurityStateSource_HandleSyncResponse);
};

class NetworkServiceTest_SetTransportSecurityStateSource_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_SetTransportSecurityStateSource_ForwardToCallback(
      NetworkServiceTest::SetTransportSecurityStateSourceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::SetTransportSecurityStateSourceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetTransportSecurityStateSource_ForwardToCallback);
};
class NetworkServiceTest_GetLatestMemoryPressureLevel_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_GetLatestMemoryPressureLevel_HandleSyncResponse(
      bool* result, ::mojo_base::mojom::blink::MemoryPressureLevel* out_memory_pressure_level)
      : result_(result), out_memory_pressure_level_(out_memory_pressure_level) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::mojo_base::mojom::blink::MemoryPressureLevel* out_memory_pressure_level_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_GetLatestMemoryPressureLevel_HandleSyncResponse);
};

class NetworkServiceTest_GetLatestMemoryPressureLevel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_GetLatestMemoryPressureLevel_ForwardToCallback(
      NetworkServiceTest::GetLatestMemoryPressureLevelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::GetLatestMemoryPressureLevelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_GetLatestMemoryPressureLevel_ForwardToCallback);
};
class NetworkServiceTest_GetEnvironmentVariableValue_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_GetEnvironmentVariableValue_HandleSyncResponse(
      bool* result, WTF::String* out_value)
      : result_(result), out_value_(out_value) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::String* out_value_;DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_GetEnvironmentVariableValue_HandleSyncResponse);
};

class NetworkServiceTest_GetEnvironmentVariableValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkServiceTest_GetEnvironmentVariableValue_ForwardToCallback(
      NetworkServiceTest::GetEnvironmentVariableValueCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkServiceTest::GetEnvironmentVariableValueCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_GetEnvironmentVariableValue_ForwardToCallback);
};

NetworkServiceTestProxy::NetworkServiceTestProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool NetworkServiceTestProxy::AddRules(
    WTF::Vector<RulePtr> param_rules) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::AddRules");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_AddRules_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_AddRules_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rules)::BaseType::BufferWriter
      rules_writer;
  const mojo::internal::ContainerValidateParams rules_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::RuleDataView>>(
      param_rules, buffer, &rules_writer, &rules_validate_params,
      &serialization_context);
  params->rules.Set(
      rules_writer.is_null() ? nullptr : rules_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rules.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rules in NetworkServiceTest.AddRules request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("AddRules");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_AddRules_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::AddRules(
    WTF::Vector<RulePtr> in_rules, AddRulesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::AddRules");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_AddRules_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_AddRules_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rules)::BaseType::BufferWriter
      rules_writer;
  const mojo::internal::ContainerValidateParams rules_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::RuleDataView>>(
      in_rules, buffer, &rules_writer, &rules_validate_params,
      &serialization_context);
  params->rules.Set(
      rules_writer.is_null() ? nullptr : rules_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rules.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rules in NetworkServiceTest.AddRules request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("AddRules");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_AddRules_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceTestProxy::SimulateNetworkChange(
    ::network::mojom::blink::ConnectionType in_type, SimulateNetworkChangeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkChange");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateNetworkChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateNetworkChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::ConnectionType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SimulateNetworkChange");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SimulateNetworkChange_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceTestProxy::SimulateNetworkQualityChange(
    ::network::mojom::blink::EffectiveConnectionType in_type, SimulateNetworkQualityChangeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkQualityChange");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateNetworkQualityChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateNetworkQualityChange_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::EffectiveConnectionType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SimulateNetworkQualityChange");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SimulateNetworkQualityChange_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceTestProxy::SimulateCrash(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateCrash");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateCrash_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateCrash_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SimulateCrash");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool NetworkServiceTestProxy::MockCertVerifierSetDefaultResult(
    int32_t param_default_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierSetDefaultResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->default_result = param_default_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("MockCertVerifierSetDefaultResult");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::MockCertVerifierSetDefaultResult(
    int32_t in_default_result, MockCertVerifierSetDefaultResultCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierSetDefaultResult");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->default_result = in_default_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("MockCertVerifierSetDefaultResult");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkServiceTestProxy::MockCertVerifierAddResultForCertAndHost(
    ::network::mojom::blink::X509CertificatePtr param_cert, const WTF::String& param_host_pattern, ::network::mojom::blink::CertVerifyResultPtr param_verify_result, int32_t param_rv) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cert)::BaseType::BufferWriter
      cert_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      param_cert, buffer, &cert_writer, &serialization_context);
  params->cert.Set(
      cert_writer.is_null() ? nullptr : cert_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->host_pattern)::BaseType::BufferWriter
      host_pattern_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_host_pattern, buffer, &host_pattern_writer, &serialization_context);
  params->host_pattern.Set(
      host_pattern_writer.is_null() ? nullptr : host_pattern_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_pattern.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_pattern in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->verify_result)::BaseType::BufferWriter
      verify_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      param_verify_result, buffer, &verify_result_writer, &serialization_context);
  params->verify_result.Set(
      verify_result_writer.is_null() ? nullptr : verify_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->verify_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null verify_result in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  params->rv = param_rv;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("MockCertVerifierAddResultForCertAndHost");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::MockCertVerifierAddResultForCertAndHost(
    ::network::mojom::blink::X509CertificatePtr in_cert, const WTF::String& in_host_pattern, ::network::mojom::blink::CertVerifyResultPtr in_verify_result, int32_t in_rv, MockCertVerifierAddResultForCertAndHostCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->cert)::BaseType::BufferWriter
      cert_writer;
  mojo::internal::Serialize<::network::mojom::X509CertificateDataView>(
      in_cert, buffer, &cert_writer, &serialization_context);
  params->cert.Set(
      cert_writer.is_null() ? nullptr : cert_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cert.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cert in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->host_pattern)::BaseType::BufferWriter
      host_pattern_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host_pattern, buffer, &host_pattern_writer, &serialization_context);
  params->host_pattern.Set(
      host_pattern_writer.is_null() ? nullptr : host_pattern_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host_pattern.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host_pattern in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  typename decltype(params->verify_result)::BaseType::BufferWriter
      verify_result_writer;
  mojo::internal::Serialize<::network::mojom::CertVerifyResultDataView>(
      in_verify_result, buffer, &verify_result_writer, &serialization_context);
  params->verify_result.Set(
      verify_result_writer.is_null() ? nullptr : verify_result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->verify_result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null verify_result in NetworkServiceTest.MockCertVerifierAddResultForCertAndHost request");
  params->rv = in_rv;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("MockCertVerifierAddResultForCertAndHost");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkServiceTestProxy::SetShouldRequireCT(
    NetworkServiceTest::ShouldRequireCT param_required) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetShouldRequireCT");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SetShouldRequireCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceTest_ShouldRequireCT>(
      param_required, &params->required);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SetShouldRequireCT");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::SetShouldRequireCT(
    NetworkServiceTest::ShouldRequireCT in_required, SetShouldRequireCTCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetShouldRequireCT");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SetShouldRequireCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::NetworkServiceTest_ShouldRequireCT>(
      in_required, &params->required);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SetShouldRequireCT");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SetShouldRequireCT_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkServiceTestProxy::SetTransportSecurityStateSource(
    uint16_t param_reporting_port) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetTransportSecurityStateSource");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->reporting_port = param_reporting_port;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SetTransportSecurityStateSource");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SetTransportSecurityStateSource_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::SetTransportSecurityStateSource(
    uint16_t in_reporting_port, SetTransportSecurityStateSourceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetTransportSecurityStateSource");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->reporting_port = in_reporting_port;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SetTransportSecurityStateSource");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_SetTransportSecurityStateSource_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void NetworkServiceTestProxy::CrashOnResolveHost(
    const WTF::String& in_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::CrashOnResolveHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_CrashOnResolveHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_CrashOnResolveHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in NetworkServiceTest.CrashOnResolveHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("CrashOnResolveHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void NetworkServiceTestProxy::CrashOnGetCookieList(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::CrashOnGetCookieList");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_CrashOnGetCookieList_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_CrashOnGetCookieList_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("CrashOnGetCookieList");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool NetworkServiceTestProxy::GetLatestMemoryPressureLevel(
    ::mojo_base::mojom::blink::MemoryPressureLevel* out_param_memory_pressure_level) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetLatestMemoryPressureLevel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("GetLatestMemoryPressureLevel");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_GetLatestMemoryPressureLevel_HandleSyncResponse(
          &result, out_param_memory_pressure_level));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::GetLatestMemoryPressureLevel(
    GetLatestMemoryPressureLevelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetLatestMemoryPressureLevel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("GetLatestMemoryPressureLevel");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_GetLatestMemoryPressureLevel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool NetworkServiceTestProxy::GetEnvironmentVariableValue(
    const WTF::String& param_name, WTF::String* out_param_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetEnvironmentVariableValue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in NetworkServiceTest.GetEnvironmentVariableValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("GetEnvironmentVariableValue");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_GetEnvironmentVariableValue_HandleSyncResponse(
          &result, out_param_value));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void NetworkServiceTestProxy::GetEnvironmentVariableValue(
    const WTF::String& in_name, GetEnvironmentVariableValueCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetEnvironmentVariableValue");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in NetworkServiceTest.GetEnvironmentVariableValue request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("GetEnvironmentVariableValue");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new NetworkServiceTest_GetEnvironmentVariableValue_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class NetworkServiceTest_AddRules_ProxyToResponder {
 public:
  static NetworkServiceTest::AddRulesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_AddRules_ProxyToResponder> proxy(
        new NetworkServiceTest_AddRules_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_AddRules_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_AddRules_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_AddRules_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::AddRulesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_AddRules_ProxyToResponder);
};

bool NetworkServiceTest_AddRules_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::AddRulesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_AddRules_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_AddRules_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_AddRules_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_AddRules_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_AddRules_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_AddRules_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::AddRulesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("AddRules");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_AddRules_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_AddRules_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_AddRules_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_AddRules_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 0, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_SimulateNetworkChange_ProxyToResponder {
 public:
  static NetworkServiceTest::SimulateNetworkChangeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_SimulateNetworkChange_ProxyToResponder> proxy(
        new NetworkServiceTest_SimulateNetworkChange_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_SimulateNetworkChange_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_SimulateNetworkChange_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::SimulateNetworkChangeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkChange_ProxyToResponder);
};

bool NetworkServiceTest_SimulateNetworkChange_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkChangeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SimulateNetworkChange_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateNetworkChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkChangeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SimulateNetworkChange");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder {
 public:
  static NetworkServiceTest::SimulateNetworkQualityChangeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder> proxy(
        new NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::SimulateNetworkQualityChangeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder);
};

bool NetworkServiceTest_SimulateNetworkQualityChange_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkQualityChangeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SimulateNetworkQualityChange_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SimulateNetworkQualityChange_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkQualityChangeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SimulateNetworkQualityChange");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder {
 public:
  static NetworkServiceTest::MockCertVerifierSetDefaultResultCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder> proxy(
        new NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::MockCertVerifierSetDefaultResultCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder);
};

bool NetworkServiceTest_MockCertVerifierSetDefaultResult_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierSetDefaultResultCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierSetDefaultResultCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("MockCertVerifierSetDefaultResult");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_MockCertVerifierSetDefaultResult_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 4, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder {
 public:
  static NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder> proxy(
        new NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder);
};

bool NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("MockCertVerifierAddResultForCertAndHost");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 5, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_SetShouldRequireCT_ProxyToResponder {
 public:
  static NetworkServiceTest::SetShouldRequireCTCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_SetShouldRequireCT_ProxyToResponder> proxy(
        new NetworkServiceTest_SetShouldRequireCT_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_SetShouldRequireCT_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_SetShouldRequireCT_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::SetShouldRequireCTCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetShouldRequireCT_ProxyToResponder);
};

bool NetworkServiceTest_SetShouldRequireCT_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetShouldRequireCTCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SetShouldRequireCT_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetShouldRequireCTCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SetShouldRequireCT");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_SetShouldRequireCT_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SetShouldRequireCT_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 6, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder {
 public:
  static NetworkServiceTest::SetTransportSecurityStateSourceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder> proxy(
        new NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::SetTransportSecurityStateSourceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder);
};

bool NetworkServiceTest_SetTransportSecurityStateSource_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetTransportSecurityStateSourceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SetTransportSecurityStateSource_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetTransportSecurityStateSourceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("SetTransportSecurityStateSource");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_SetTransportSecurityStateSource_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  NetworkServiceTest_SetTransportSecurityStateSource_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 7, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder {
 public:
  static NetworkServiceTest::GetLatestMemoryPressureLevelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder> proxy(
        new NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::GetLatestMemoryPressureLevelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::mojo_base::mojom::blink::MemoryPressureLevel in_memory_pressure_level);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder);
};

bool NetworkServiceTest_GetLatestMemoryPressureLevel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetLatestMemoryPressureLevelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::mojo_base::mojom::blink::MemoryPressureLevel p_memory_pressure_level{};
  NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMemoryPressureLevel(&p_memory_pressure_level))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_memory_pressure_level));
  return true;
}

void NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder::Run(
    ::mojo_base::mojom::blink::MemoryPressureLevel in_memory_pressure_level) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::mojo_base::mojom::MemoryPressureLevel>(
      in_memory_pressure_level, &params->memory_pressure_level);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetLatestMemoryPressureLevelCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("GetLatestMemoryPressureLevel");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_GetLatestMemoryPressureLevel_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  ::mojo_base::mojom::blink::MemoryPressureLevel p_memory_pressure_level{};
  NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMemoryPressureLevel(&p_memory_pressure_level))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 10, true);
    return false;
  }
  *out_memory_pressure_level_ = std::move(p_memory_pressure_level);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder {
 public:
  static NetworkServiceTest::GetEnvironmentVariableValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder> proxy(
        new NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "NetworkServiceTest::GetEnvironmentVariableValueCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder);
};

bool NetworkServiceTest_GetEnvironmentVariableValue_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetEnvironmentVariableValueCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data* params =
      reinterpret_cast<
          internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_value{};
  NetworkServiceTest_GetEnvironmentVariableValue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_value));
  return true;
}

void NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder::Run(
    const WTF::String& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_value, buffer, &value_writer, &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetEnvironmentVariableValueCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(NetworkServiceTest::Name_);
  message.set_method_name("GetEnvironmentVariableValue");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool NetworkServiceTest_GetEnvironmentVariableValue_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_value{};
  NetworkServiceTest_GetEnvironmentVariableValue_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        NetworkServiceTest::Name_, 11, true);
    return false;
  }
  *out_value_ = std::move(p_value);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool NetworkServiceTestStubDispatch::Accept(
    NetworkServiceTest* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
      break;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
      break;
    }
    case internal::kNetworkServiceTest_SimulateNetworkQualityChange_Name: {
      break;
    }
    case internal::kNetworkServiceTest_SimulateCrash_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateCrash",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceTest_SimulateCrash_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceTest_SimulateCrash_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceTest_SimulateCrash_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SimulateCrash();
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
      break;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
      break;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
      break;
    }
    case internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name: {
      break;
    }
    case internal::kNetworkServiceTest_CrashOnResolveHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::CrashOnResolveHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceTest_CrashOnResolveHost_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceTest_CrashOnResolveHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_host{};
      NetworkServiceTest_CrashOnResolveHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CrashOnResolveHost(
std::move(p_host));
      return true;
    }
    case internal::kNetworkServiceTest_CrashOnGetCookieList_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::CrashOnGetCookieList",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::NetworkServiceTest_CrashOnGetCookieList_Params_Data* params =
          reinterpret_cast<internal::NetworkServiceTest_CrashOnGetCookieList_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceTest_CrashOnGetCookieList_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CrashOnGetCookieList();
      return true;
    }
    case internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name: {
      break;
    }
    case internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name: {
      break;
    }
  }
  return false;
}

// static
bool NetworkServiceTestStubDispatch::AcceptWithResponder(
    NetworkServiceTest* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::AddRules",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_AddRules_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_AddRules_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<RulePtr> p_rules{};
      NetworkServiceTest_AddRules_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRules(&p_rules))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 0, false);
        return false;
      }
      NetworkServiceTest::AddRulesCallback callback =
          NetworkServiceTest_AddRules_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddRules(
std::move(p_rules), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_SimulateNetworkChange_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_SimulateNetworkChange_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::ConnectionType p_type{};
      NetworkServiceTest_SimulateNetworkChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 1, false);
        return false;
      }
      NetworkServiceTest::SimulateNetworkChangeCallback callback =
          NetworkServiceTest_SimulateNetworkChange_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SimulateNetworkChange(
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkQualityChange_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SimulateNetworkQualityChange",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_SimulateNetworkQualityChange_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_SimulateNetworkQualityChange_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::EffectiveConnectionType p_type{};
      NetworkServiceTest_SimulateNetworkQualityChange_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 2, false);
        return false;
      }
      NetworkServiceTest::SimulateNetworkQualityChangeCallback callback =
          NetworkServiceTest_SimulateNetworkQualityChange_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SimulateNetworkQualityChange(
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SimulateCrash_Name: {
      break;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierSetDefaultResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_default_result{};
      NetworkServiceTest_MockCertVerifierSetDefaultResult_ParamsDataView input_data_view(params, &serialization_context);
      
      p_default_result = input_data_view.default_result();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 4, false);
        return false;
      }
      NetworkServiceTest::MockCertVerifierSetDefaultResultCallback callback =
          NetworkServiceTest_MockCertVerifierSetDefaultResult_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MockCertVerifierSetDefaultResult(
std::move(p_default_result), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::MockCertVerifierAddResultForCertAndHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::network::mojom::blink::X509CertificatePtr p_cert{};
      WTF::String p_host_pattern{};
      ::network::mojom::blink::CertVerifyResultPtr p_verify_result{};
      int32_t p_rv{};
      NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCert(&p_cert))
        success = false;
      if (!input_data_view.ReadHostPattern(&p_host_pattern))
        success = false;
      if (!input_data_view.ReadVerifyResult(&p_verify_result))
        success = false;
      p_rv = input_data_view.rv();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 5, false);
        return false;
      }
      NetworkServiceTest::MockCertVerifierAddResultForCertAndHostCallback callback =
          NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MockCertVerifierAddResultForCertAndHost(
std::move(p_cert), 
std::move(p_host_pattern), 
std::move(p_verify_result), 
std::move(p_rv), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetShouldRequireCT",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_SetShouldRequireCT_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_SetShouldRequireCT_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceTest::ShouldRequireCT p_required{};
      NetworkServiceTest_SetShouldRequireCT_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRequired(&p_required))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 6, false);
        return false;
      }
      NetworkServiceTest::SetShouldRequireCTCallback callback =
          NetworkServiceTest_SetShouldRequireCT_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetShouldRequireCT(
std::move(p_required), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::SetTransportSecurityStateSource",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint16_t p_reporting_port{};
      NetworkServiceTest_SetTransportSecurityStateSource_ParamsDataView input_data_view(params, &serialization_context);
      
      p_reporting_port = input_data_view.reporting_port();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 7, false);
        return false;
      }
      NetworkServiceTest::SetTransportSecurityStateSourceCallback callback =
          NetworkServiceTest_SetTransportSecurityStateSource_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetTransportSecurityStateSource(
std::move(p_reporting_port), std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_CrashOnResolveHost_Name: {
      break;
    }
    case internal::kNetworkServiceTest_CrashOnGetCookieList_Name: {
      break;
    }
    case internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetLatestMemoryPressureLevel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      NetworkServiceTest_GetLatestMemoryPressureLevel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 10, false);
        return false;
      }
      NetworkServiceTest::GetLatestMemoryPressureLevelCallback callback =
          NetworkServiceTest_GetLatestMemoryPressureLevel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetLatestMemoryPressureLevel(std::move(callback));
      return true;
    }
    case internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::NetworkServiceTest::GetEnvironmentVariableValue",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data* params =
          reinterpret_cast<
              internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_name{};
      NetworkServiceTest_GetEnvironmentVariableValue_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            NetworkServiceTest::Name_, 11, false);
        return false;
      }
      NetworkServiceTest::GetEnvironmentVariableValueCallback callback =
          NetworkServiceTest_GetEnvironmentVariableValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetEnvironmentVariableValue(
std::move(p_name), std::move(callback));
      return true;
    }
  }
  return false;
}

bool NetworkServiceTestRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceTest RequestValidator");

  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_AddRules_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateNetworkChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkQualityChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateNetworkQualityChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateCrash_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateCrash_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SetShouldRequireCT_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SetTransportSecurityStateSource_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_CrashOnResolveHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_CrashOnResolveHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_CrashOnGetCookieList_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_CrashOnGetCookieList_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_GetLatestMemoryPressureLevel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_GetEnvironmentVariableValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool NetworkServiceTestResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "NetworkServiceTest ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkServiceTest_AddRules_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_AddRules_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkChange_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateNetworkChange_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SimulateNetworkQualityChange_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SimulateNetworkQualityChange_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierSetDefaultResult_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierSetDefaultResult_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_MockCertVerifierAddResultForCertAndHost_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_MockCertVerifierAddResultForCertAndHost_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SetShouldRequireCT_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SetShouldRequireCT_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_SetTransportSecurityStateSource_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_SetTransportSecurityStateSource_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_GetLatestMemoryPressureLevel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_GetLatestMemoryPressureLevel_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kNetworkServiceTest_GetEnvironmentVariableValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkServiceTest_GetEnvironmentVariableValue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::blink::Rule::DataView, ::network::mojom::blink::RulePtr>::Read(
    ::network::mojom::blink::Rule::DataView input,
    ::network::mojom::blink::RulePtr* output) {
  bool success = true;
  ::network::mojom::blink::RulePtr result(::network::mojom::blink::Rule::New());
  
      if (!input.ReadResolverType(&result->resolver_type))
        success = false;
      if (!input.ReadHostPattern(&result->host_pattern))
        success = false;
      if (!input.ReadReplacement(&result->replacement))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif