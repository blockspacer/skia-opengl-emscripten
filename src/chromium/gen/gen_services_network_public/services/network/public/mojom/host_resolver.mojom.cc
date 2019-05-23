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

#include "services/network/public/mojom/host_resolver.mojom.h"

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

#include "services/network/public/mojom/host_resolver.mojom-params-data.h"
#include "services/network/public/mojom/host_resolver.mojom-shared-message-ids.h"

#include "services/network/public/mojom/host_resolver.mojom-import-headers.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "services/network/public/cpp/address_list_mojom_traits.h"
#include "services/network/public/cpp/host_resolver_mojom_traits.h"
#include "services/network/public/cpp/ip_address_mojom_traits.h"
#include "services/network/public/cpp/ip_endpoint_mojom_traits.h"
#include "services/network/public/cpp/net_ipc_param_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/network_param_mojom_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#endif
namespace network {
namespace mojom {
DnsHost::DnsHost()
    : hostname(),
      address() {}

DnsHost::DnsHost(
    const std::string& hostname_in,
    const net::IPAddress& address_in)
    : hostname(std::move(hostname_in)),
      address(std::move(address_in)) {}

DnsHost::~DnsHost() = default;

bool DnsHost::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DnsOverHttpsServer::DnsOverHttpsServer()
    : server_template(),
      use_post(false) {}

DnsOverHttpsServer::DnsOverHttpsServer(
    const std::string& server_template_in,
    bool use_post_in)
    : server_template(std::move(server_template_in)),
      use_post(std::move(use_post_in)) {}

DnsOverHttpsServer::~DnsOverHttpsServer() = default;
size_t DnsOverHttpsServer::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->server_template);
  seed = mojo::internal::Hash(seed, this->use_post);
  return seed;
}

bool DnsOverHttpsServer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DnsConfigOverrides::DnsConfigOverrides()
    : nameservers(),
      search(),
      hosts(),
      append_to_multi_label_name(DnsConfigOverrides_Tristate::NO_OVERRIDE),
      randomize_ports(DnsConfigOverrides_Tristate::NO_OVERRIDE),
      ndots(-1),
      timeout(),
      attempts(-1),
      rotate(DnsConfigOverrides_Tristate::NO_OVERRIDE),
      use_local_ipv6(DnsConfigOverrides_Tristate::NO_OVERRIDE),
      dns_over_https_servers() {}

DnsConfigOverrides::DnsConfigOverrides(
    const base::Optional<std::vector<net::IPEndPoint>>& nameservers_in,
    const base::Optional<std::vector<std::string>>& search_in,
    base::Optional<std::vector<DnsHostPtr>> hosts_in,
    DnsConfigOverrides::Tristate append_to_multi_label_name_in,
    DnsConfigOverrides::Tristate randomize_ports_in,
    int8_t ndots_in,
    base::Optional<base::TimeDelta> timeout_in,
    int32_t attempts_in,
    DnsConfigOverrides::Tristate rotate_in,
    DnsConfigOverrides::Tristate use_local_ipv6_in,
    base::Optional<std::vector<DnsOverHttpsServerPtr>> dns_over_https_servers_in)
    : nameservers(std::move(nameservers_in)),
      search(std::move(search_in)),
      hosts(std::move(hosts_in)),
      append_to_multi_label_name(std::move(append_to_multi_label_name_in)),
      randomize_ports(std::move(randomize_ports_in)),
      ndots(std::move(ndots_in)),
      timeout(std::move(timeout_in)),
      attempts(std::move(attempts_in)),
      rotate(std::move(rotate_in)),
      use_local_ipv6(std::move(use_local_ipv6_in)),
      dns_over_https_servers(std::move(dns_over_https_servers_in)) {}

DnsConfigOverrides::~DnsConfigOverrides() = default;

bool DnsConfigOverrides::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ResolveHostParameters::ResolveHostParameters()
    : dns_query_type(mojo::internal::ConvertEnumValue<DnsQueryType, net::DnsQueryType>(DnsQueryType::UNSPECIFIED)),
      initial_priority(mojo::internal::ConvertEnumValue<::network::mojom::RequestPriority, net::RequestPriority>(::network::mojom::RequestPriority::kLowest)),
      source(mojo::internal::ConvertEnumValue<ResolveHostParameters::Source, net::HostResolverSource>(ResolveHostParameters_Source::ANY)),
      allow_cached_response(true),
      control_handle(),
      include_canonical_name(false),
      loopback_only(false),
      is_speculative(false) {}

ResolveHostParameters::ResolveHostParameters(
    net::DnsQueryType dns_query_type_in,
    net::RequestPriority initial_priority_in,
    net::HostResolverSource source_in,
    bool allow_cached_response_in,
    ResolveHostHandleRequest control_handle_in,
    bool include_canonical_name_in,
    bool loopback_only_in,
    bool is_speculative_in)
    : dns_query_type(std::move(dns_query_type_in)),
      initial_priority(std::move(initial_priority_in)),
      source(std::move(source_in)),
      allow_cached_response(std::move(allow_cached_response_in)),
      control_handle(std::move(control_handle_in)),
      include_canonical_name(std::move(include_canonical_name_in)),
      loopback_only(std::move(loopback_only_in)),
      is_speculative(std::move(is_speculative_in)) {}

ResolveHostParameters::~ResolveHostParameters() = default;

bool ResolveHostParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ResolveHostHandle::Name_[] = "network.mojom.ResolveHostHandle";

ResolveHostHandleProxy::ResolveHostHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ResolveHostHandleProxy::Cancel(
    int32_t in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ResolveHostHandle::Cancel");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResolveHostHandle_Cancel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ResolveHostHandle_Cancel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResolveHostHandle::Name_);
  message.set_method_name("Cancel");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ResolveHostHandleStubDispatch::Accept(
    ResolveHostHandle* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kResolveHostHandle_Cancel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ResolveHostHandle::Cancel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ResolveHostHandle_Cancel_Params_Data* params =
          reinterpret_cast<internal::ResolveHostHandle_Cancel_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_result{};
      ResolveHostHandle_Cancel_ParamsDataView input_data_view(params, &serialization_context);
      
      p_result = input_data_view.result();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResolveHostHandle::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Cancel(
std::move(p_result));
      return true;
    }
  }
  return false;
}

// static
bool ResolveHostHandleStubDispatch::AcceptWithResponder(
    ResolveHostHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kResolveHostHandle_Cancel_Name: {
      break;
    }
  }
  return false;
}

bool ResolveHostHandleRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ResolveHostHandle RequestValidator");

  switch (message->header()->name) {
    case internal::kResolveHostHandle_Cancel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResolveHostHandle_Cancel_Params_Data>(
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

const char ResolveHostClient::Name_[] = "network.mojom.ResolveHostClient";

ResolveHostClientProxy::ResolveHostClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ResolveHostClientProxy::OnComplete(
    int32_t in_result, const base::Optional<net::AddressList>& in_resolved_addresses) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ResolveHostClient::OnComplete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResolveHostClient_OnComplete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ResolveHostClient_OnComplete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  typename decltype(params->resolved_addresses)::BaseType::BufferWriter
      resolved_addresses_writer;
  mojo::internal::Serialize<::network::mojom::AddressListDataView>(
      in_resolved_addresses, buffer, &resolved_addresses_writer, &serialization_context);
  params->resolved_addresses.Set(
      resolved_addresses_writer.is_null() ? nullptr : resolved_addresses_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResolveHostClient::Name_);
  message.set_method_name("OnComplete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ResolveHostClientProxy::OnTextResults(
    const std::vector<std::string>& in_text_results) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ResolveHostClient::OnTextResults");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResolveHostClient_OnTextResults_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ResolveHostClient_OnTextResults_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text_results)::BaseType::BufferWriter
      text_results_writer;
  const mojo::internal::ContainerValidateParams text_results_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_text_results, buffer, &text_results_writer, &text_results_validate_params,
      &serialization_context);
  params->text_results.Set(
      text_results_writer.is_null() ? nullptr : text_results_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text_results.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text_results in ResolveHostClient.OnTextResults request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResolveHostClient::Name_);
  message.set_method_name("OnTextResults");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ResolveHostClientProxy::OnHostnameResults(
    const std::vector<net::HostPortPair>& in_hosts) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ResolveHostClient::OnHostnameResults");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kResolveHostClient_OnHostnameResults_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::ResolveHostClient_OnHostnameResults_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->hosts)::BaseType::BufferWriter
      hosts_writer;
  const mojo::internal::ContainerValidateParams hosts_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::HostPortPairDataView>>(
      in_hosts, buffer, &hosts_writer, &hosts_validate_params,
      &serialization_context);
  params->hosts.Set(
      hosts_writer.is_null() ? nullptr : hosts_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->hosts.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null hosts in ResolveHostClient.OnHostnameResults request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ResolveHostClient::Name_);
  message.set_method_name("OnHostnameResults");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ResolveHostClientStubDispatch::Accept(
    ResolveHostClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kResolveHostClient_OnComplete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ResolveHostClient::OnComplete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ResolveHostClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::ResolveHostClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_result{};
      base::Optional<net::AddressList> p_resolved_addresses{};
      ResolveHostClient_OnComplete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_result = input_data_view.result();
      if (!input_data_view.ReadResolvedAddresses(&p_resolved_addresses))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResolveHostClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnComplete(
std::move(p_result), 
std::move(p_resolved_addresses));
      return true;
    }
    case internal::kResolveHostClient_OnTextResults_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ResolveHostClient::OnTextResults",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ResolveHostClient_OnTextResults_Params_Data* params =
          reinterpret_cast<internal::ResolveHostClient_OnTextResults_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<std::string> p_text_results{};
      ResolveHostClient_OnTextResults_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTextResults(&p_text_results))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResolveHostClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTextResults(
std::move(p_text_results));
      return true;
    }
    case internal::kResolveHostClient_OnHostnameResults_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ResolveHostClient::OnHostnameResults",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ResolveHostClient_OnHostnameResults_Params_Data* params =
          reinterpret_cast<internal::ResolveHostClient_OnHostnameResults_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<net::HostPortPair> p_hosts{};
      ResolveHostClient_OnHostnameResults_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHosts(&p_hosts))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ResolveHostClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnHostnameResults(
std::move(p_hosts));
      return true;
    }
  }
  return false;
}

// static
bool ResolveHostClientStubDispatch::AcceptWithResponder(
    ResolveHostClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kResolveHostClient_OnComplete_Name: {
      break;
    }
    case internal::kResolveHostClient_OnTextResults_Name: {
      break;
    }
    case internal::kResolveHostClient_OnHostnameResults_Name: {
      break;
    }
  }
  return false;
}

bool ResolveHostClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ResolveHostClient RequestValidator");

  switch (message->header()->name) {
    case internal::kResolveHostClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResolveHostClient_OnComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kResolveHostClient_OnTextResults_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResolveHostClient_OnTextResults_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kResolveHostClient_OnHostnameResults_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ResolveHostClient_OnHostnameResults_Params_Data>(
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

const char MdnsListenClient::Name_[] = "network.mojom.MdnsListenClient";

MdnsListenClientProxy::MdnsListenClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MdnsListenClientProxy::OnAddressResult(
    net::HostResolver::MdnsListener::Delegate::UpdateType in_update_type, net::DnsQueryType in_query_type, const net::IPEndPoint& in_endpoint) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnAddressResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsListenClient_OnAddressResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsListenClient_OnAddressResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::MdnsListenClient_UpdateType>(
      in_update_type, &params->update_type);
  mojo::internal::Serialize<::network::mojom::DnsQueryType>(
      in_query_type, &params->query_type);
  typename decltype(params->endpoint)::BaseType::BufferWriter
      endpoint_writer;
  mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
      in_endpoint, buffer, &endpoint_writer, &serialization_context);
  params->endpoint.Set(
      endpoint_writer.is_null() ? nullptr : endpoint_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->endpoint.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null endpoint in MdnsListenClient.OnAddressResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsListenClient::Name_);
  message.set_method_name("OnAddressResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MdnsListenClientProxy::OnTextResult(
    net::HostResolver::MdnsListener::Delegate::UpdateType in_update_type, net::DnsQueryType in_query_type, const std::vector<std::string>& in_text_records) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnTextResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsListenClient_OnTextResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsListenClient_OnTextResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::MdnsListenClient_UpdateType>(
      in_update_type, &params->update_type);
  mojo::internal::Serialize<::network::mojom::DnsQueryType>(
      in_query_type, &params->query_type);
  typename decltype(params->text_records)::BaseType::BufferWriter
      text_records_writer;
  const mojo::internal::ContainerValidateParams text_records_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
      in_text_records, buffer, &text_records_writer, &text_records_validate_params,
      &serialization_context);
  params->text_records.Set(
      text_records_writer.is_null() ? nullptr : text_records_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text_records.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text_records in MdnsListenClient.OnTextResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsListenClient::Name_);
  message.set_method_name("OnTextResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MdnsListenClientProxy::OnHostnameResult(
    net::HostResolver::MdnsListener::Delegate::UpdateType in_update_type, net::DnsQueryType in_query_type, const net::HostPortPair& in_host) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnHostnameResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsListenClient_OnHostnameResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsListenClient_OnHostnameResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::MdnsListenClient_UpdateType>(
      in_update_type, &params->update_type);
  mojo::internal::Serialize<::network::mojom::DnsQueryType>(
      in_query_type, &params->query_type);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in MdnsListenClient.OnHostnameResult request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsListenClient::Name_);
  message.set_method_name("OnHostnameResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void MdnsListenClientProxy::OnUnhandledResult(
    net::HostResolver::MdnsListener::Delegate::UpdateType in_update_type, net::DnsQueryType in_query_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnUnhandledResult");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kMdnsListenClient_OnUnhandledResult_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::MdnsListenClient_OnUnhandledResult_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::MdnsListenClient_UpdateType>(
      in_update_type, &params->update_type);
  mojo::internal::Serialize<::network::mojom::DnsQueryType>(
      in_query_type, &params->query_type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MdnsListenClient::Name_);
  message.set_method_name("OnUnhandledResult");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool MdnsListenClientStubDispatch::Accept(
    MdnsListenClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMdnsListenClient_OnAddressResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnAddressResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MdnsListenClient_OnAddressResult_Params_Data* params =
          reinterpret_cast<internal::MdnsListenClient_OnAddressResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostResolver::MdnsListener::Delegate::UpdateType p_update_type{};
      net::DnsQueryType p_query_type{};
      net::IPEndPoint p_endpoint{};
      MdnsListenClient_OnAddressResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdateType(&p_update_type))
        success = false;
      if (!input_data_view.ReadQueryType(&p_query_type))
        success = false;
      if (!input_data_view.ReadEndpoint(&p_endpoint))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MdnsListenClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAddressResult(
std::move(p_update_type), 
std::move(p_query_type), 
std::move(p_endpoint));
      return true;
    }
    case internal::kMdnsListenClient_OnTextResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnTextResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MdnsListenClient_OnTextResult_Params_Data* params =
          reinterpret_cast<internal::MdnsListenClient_OnTextResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostResolver::MdnsListener::Delegate::UpdateType p_update_type{};
      net::DnsQueryType p_query_type{};
      std::vector<std::string> p_text_records{};
      MdnsListenClient_OnTextResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdateType(&p_update_type))
        success = false;
      if (!input_data_view.ReadQueryType(&p_query_type))
        success = false;
      if (!input_data_view.ReadTextRecords(&p_text_records))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MdnsListenClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTextResult(
std::move(p_update_type), 
std::move(p_query_type), 
std::move(p_text_records));
      return true;
    }
    case internal::kMdnsListenClient_OnHostnameResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnHostnameResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MdnsListenClient_OnHostnameResult_Params_Data* params =
          reinterpret_cast<internal::MdnsListenClient_OnHostnameResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostResolver::MdnsListener::Delegate::UpdateType p_update_type{};
      net::DnsQueryType p_query_type{};
      net::HostPortPair p_host{};
      MdnsListenClient_OnHostnameResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdateType(&p_update_type))
        success = false;
      if (!input_data_view.ReadQueryType(&p_query_type))
        success = false;
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MdnsListenClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnHostnameResult(
std::move(p_update_type), 
std::move(p_query_type), 
std::move(p_host));
      return true;
    }
    case internal::kMdnsListenClient_OnUnhandledResult_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::MdnsListenClient::OnUnhandledResult",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::MdnsListenClient_OnUnhandledResult_Params_Data* params =
          reinterpret_cast<internal::MdnsListenClient_OnUnhandledResult_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostResolver::MdnsListener::Delegate::UpdateType p_update_type{};
      net::DnsQueryType p_query_type{};
      MdnsListenClient_OnUnhandledResult_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUpdateType(&p_update_type))
        success = false;
      if (!input_data_view.ReadQueryType(&p_query_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MdnsListenClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnUnhandledResult(
std::move(p_update_type), 
std::move(p_query_type));
      return true;
    }
  }
  return false;
}

// static
bool MdnsListenClientStubDispatch::AcceptWithResponder(
    MdnsListenClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kMdnsListenClient_OnAddressResult_Name: {
      break;
    }
    case internal::kMdnsListenClient_OnTextResult_Name: {
      break;
    }
    case internal::kMdnsListenClient_OnHostnameResult_Name: {
      break;
    }
    case internal::kMdnsListenClient_OnUnhandledResult_Name: {
      break;
    }
  }
  return false;
}

bool MdnsListenClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "MdnsListenClient RequestValidator");

  switch (message->header()->name) {
    case internal::kMdnsListenClient_OnAddressResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsListenClient_OnAddressResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMdnsListenClient_OnTextResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsListenClient_OnTextResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMdnsListenClient_OnHostnameResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsListenClient_OnHostnameResult_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kMdnsListenClient_OnUnhandledResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::MdnsListenClient_OnUnhandledResult_Params_Data>(
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

const char HostResolver::Name_[] = "network.mojom.HostResolver";

class HostResolver_MdnsListen_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HostResolver_MdnsListen_ForwardToCallback(
      HostResolver::MdnsListenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HostResolver::MdnsListenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(HostResolver_MdnsListen_ForwardToCallback);
};

HostResolverProxy::HostResolverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void HostResolverProxy::ResolveHost(
    const net::HostPortPair& in_host, ResolveHostParametersPtr in_optional_parameters, ResolveHostClientPtr in_response_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HostResolver::ResolveHost");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHostResolver_ResolveHost_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::HostResolver_ResolveHost_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in HostResolver.ResolveHost request");
  typename decltype(params->optional_parameters)::BaseType::BufferWriter
      optional_parameters_writer;
  mojo::internal::Serialize<::network::mojom::ResolveHostParametersDataView>(
      in_optional_parameters, buffer, &optional_parameters_writer, &serialization_context);
  params->optional_parameters.Set(
      optional_parameters_writer.is_null() ? nullptr : optional_parameters_writer.data());
  mojo::internal::Serialize<::network::mojom::ResolveHostClientPtrDataView>(
      in_response_client, &params->response_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_client in HostResolver.ResolveHost request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HostResolver::Name_);
  message.set_method_name("ResolveHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void HostResolverProxy::MdnsListen(
    const net::HostPortPair& in_host, net::DnsQueryType in_query_type, MdnsListenClientPtr in_response_client, MdnsListenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::HostResolver::MdnsListen");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHostResolver_MdnsListen_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::HostResolver_MdnsListen_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->host)::BaseType::BufferWriter
      host_writer;
  mojo::internal::Serialize<::network::mojom::HostPortPairDataView>(
      in_host, buffer, &host_writer, &serialization_context);
  params->host.Set(
      host_writer.is_null() ? nullptr : host_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->host.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null host in HostResolver.MdnsListen request");
  mojo::internal::Serialize<::network::mojom::DnsQueryType>(
      in_query_type, &params->query_type);
  mojo::internal::Serialize<::network::mojom::MdnsListenClientPtrDataView>(
      in_response_client, &params->response_client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->response_client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid response_client in HostResolver.MdnsListen request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HostResolver::Name_);
  message.set_method_name("MdnsListen");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new HostResolver_MdnsListen_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class HostResolver_MdnsListen_ProxyToResponder {
 public:
  static HostResolver::MdnsListenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<HostResolver_MdnsListen_ProxyToResponder> proxy(
        new HostResolver_MdnsListen_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&HostResolver_MdnsListen_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~HostResolver_MdnsListen_ProxyToResponder() {
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
  HostResolver_MdnsListen_ProxyToResponder(
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
        << "HostResolver::MdnsListenCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      int32_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(HostResolver_MdnsListen_ProxyToResponder);
};

bool HostResolver_MdnsListen_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::HostResolver::MdnsListenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::HostResolver_MdnsListen_ResponseParams_Data* params =
      reinterpret_cast<
          internal::HostResolver_MdnsListen_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  int32_t p_result{};
  HostResolver_MdnsListen_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        HostResolver::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void HostResolver_MdnsListen_ProxyToResponder::Run(
    int32_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kHostResolver_MdnsListen_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::HostResolver_MdnsListen_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::HostResolver::MdnsListenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(HostResolver::Name_);
  message.set_method_name("MdnsListen");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool HostResolverStubDispatch::Accept(
    HostResolver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kHostResolver_ResolveHost_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HostResolver::ResolveHost",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::HostResolver_ResolveHost_Params_Data* params =
          reinterpret_cast<internal::HostResolver_ResolveHost_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostPortPair p_host{};
      ResolveHostParametersPtr p_optional_parameters{};
      ResolveHostClientPtr p_response_client{};
      HostResolver_ResolveHost_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadOptionalParameters(&p_optional_parameters))
        success = false;
      p_response_client =
          input_data_view.TakeResponseClient<decltype(p_response_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HostResolver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResolveHost(
std::move(p_host), 
std::move(p_optional_parameters), 
std::move(p_response_client));
      return true;
    }
    case internal::kHostResolver_MdnsListen_Name: {
      break;
    }
  }
  return false;
}

// static
bool HostResolverStubDispatch::AcceptWithResponder(
    HostResolver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kHostResolver_ResolveHost_Name: {
      break;
    }
    case internal::kHostResolver_MdnsListen_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::HostResolver::MdnsListen",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::HostResolver_MdnsListen_Params_Data* params =
          reinterpret_cast<
              internal::HostResolver_MdnsListen_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      net::HostPortPair p_host{};
      net::DnsQueryType p_query_type{};
      MdnsListenClientPtr p_response_client{};
      HostResolver_MdnsListen_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadHost(&p_host))
        success = false;
      if (!input_data_view.ReadQueryType(&p_query_type))
        success = false;
      p_response_client =
          input_data_view.TakeResponseClient<decltype(p_response_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            HostResolver::Name_, 1, false);
        return false;
      }
      HostResolver::MdnsListenCallback callback =
          HostResolver_MdnsListen_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MdnsListen(
std::move(p_host), 
std::move(p_query_type), 
std::move(p_response_client), std::move(callback));
      return true;
    }
  }
  return false;
}

bool HostResolverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HostResolver RequestValidator");

  switch (message->header()->name) {
    case internal::kHostResolver_ResolveHost_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HostResolver_ResolveHost_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kHostResolver_MdnsListen_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::HostResolver_MdnsListen_Params_Data>(
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

bool HostResolverResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "HostResolver ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kHostResolver_MdnsListen_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HostResolver_MdnsListen_ResponseParams_Data>(
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
const char DnsConfigChangeManagerClient::Name_[] = "network.mojom.DnsConfigChangeManagerClient";

DnsConfigChangeManagerClientProxy::DnsConfigChangeManagerClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DnsConfigChangeManagerClientProxy::OnSystemDnsConfigChanged(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DnsConfigChangeManagerClient::OnSystemDnsConfigChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DnsConfigChangeManagerClient::Name_);
  message.set_method_name("OnSystemDnsConfigChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DnsConfigChangeManagerClientStubDispatch::Accept(
    DnsConfigChangeManagerClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DnsConfigChangeManagerClient::OnSystemDnsConfigChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data* params =
          reinterpret_cast<internal::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DnsConfigChangeManagerClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSystemDnsConfigChanged();
      return true;
    }
  }
  return false;
}

// static
bool DnsConfigChangeManagerClientStubDispatch::AcceptWithResponder(
    DnsConfigChangeManagerClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Name: {
      break;
    }
  }
  return false;
}

bool DnsConfigChangeManagerClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DnsConfigChangeManagerClient RequestValidator");

  switch (message->header()->name) {
    case internal::kDnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data>(
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

const char DnsConfigChangeManager::Name_[] = "network.mojom.DnsConfigChangeManager";

DnsConfigChangeManagerProxy::DnsConfigChangeManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void DnsConfigChangeManagerProxy::RequestNotifications(
    DnsConfigChangeManagerClientPtr in_client_ptr) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::DnsConfigChangeManager::RequestNotifications");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kDnsConfigChangeManager_RequestNotifications_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::network::mojom::internal::DnsConfigChangeManager_RequestNotifications_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::network::mojom::DnsConfigChangeManagerClientPtrDataView>(
      in_client_ptr, &params->client_ptr, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client_ptr),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_ptr in DnsConfigChangeManager.RequestNotifications request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(DnsConfigChangeManager::Name_);
  message.set_method_name("RequestNotifications");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool DnsConfigChangeManagerStubDispatch::Accept(
    DnsConfigChangeManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kDnsConfigChangeManager_RequestNotifications_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::DnsConfigChangeManager::RequestNotifications",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::DnsConfigChangeManager_RequestNotifications_Params_Data* params =
          reinterpret_cast<internal::DnsConfigChangeManager_RequestNotifications_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      DnsConfigChangeManagerClientPtr p_client_ptr{};
      DnsConfigChangeManager_RequestNotifications_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_ptr =
          input_data_view.TakeClientPtr<decltype(p_client_ptr)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            DnsConfigChangeManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestNotifications(
std::move(p_client_ptr));
      return true;
    }
  }
  return false;
}

// static
bool DnsConfigChangeManagerStubDispatch::AcceptWithResponder(
    DnsConfigChangeManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kDnsConfigChangeManager_RequestNotifications_Name: {
      break;
    }
  }
  return false;
}

bool DnsConfigChangeManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "DnsConfigChangeManager RequestValidator");

  switch (message->header()->name) {
    case internal::kDnsConfigChangeManager_RequestNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DnsConfigChangeManager_RequestNotifications_Params_Data>(
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

}  // namespace mojom
}  // namespace network

namespace mojo {


// static
bool StructTraits<::network::mojom::DnsHost::DataView, ::network::mojom::DnsHostPtr>::Read(
    ::network::mojom::DnsHost::DataView input,
    ::network::mojom::DnsHostPtr* output) {
  bool success = true;
  ::network::mojom::DnsHostPtr result(::network::mojom::DnsHost::New());
  
      if (!input.ReadHostname(&result->hostname))
        success = false;
      if (!input.ReadAddress(&result->address))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::DnsOverHttpsServer::DataView, ::network::mojom::DnsOverHttpsServerPtr>::Read(
    ::network::mojom::DnsOverHttpsServer::DataView input,
    ::network::mojom::DnsOverHttpsServerPtr* output) {
  bool success = true;
  ::network::mojom::DnsOverHttpsServerPtr result(::network::mojom::DnsOverHttpsServer::New());
  
      if (!input.ReadServerTemplate(&result->server_template))
        success = false;
      result->use_post = input.use_post();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::DnsConfigOverrides::DataView, ::network::mojom::DnsConfigOverridesPtr>::Read(
    ::network::mojom::DnsConfigOverrides::DataView input,
    ::network::mojom::DnsConfigOverridesPtr* output) {
  bool success = true;
  ::network::mojom::DnsConfigOverridesPtr result(::network::mojom::DnsConfigOverrides::New());
  
      if (!input.ReadNameservers(&result->nameservers))
        success = false;
      if (!input.ReadSearch(&result->search))
        success = false;
      if (!input.ReadHosts(&result->hosts))
        success = false;
      if (!input.ReadAppendToMultiLabelName(&result->append_to_multi_label_name))
        success = false;
      if (!input.ReadRandomizePorts(&result->randomize_ports))
        success = false;
      result->ndots = input.ndots();
      if (!input.ReadTimeout(&result->timeout))
        success = false;
      result->attempts = input.attempts();
      if (!input.ReadRotate(&result->rotate))
        success = false;
      if (!input.ReadUseLocalIpv6(&result->use_local_ipv6))
        success = false;
      if (!input.ReadDnsOverHttpsServers(&result->dns_over_https_servers))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::network::mojom::ResolveHostParameters::DataView, ::network::mojom::ResolveHostParametersPtr>::Read(
    ::network::mojom::ResolveHostParameters::DataView input,
    ::network::mojom::ResolveHostParametersPtr* output) {
  bool success = true;
  ::network::mojom::ResolveHostParametersPtr result(::network::mojom::ResolveHostParameters::New());
  
      if (!input.ReadDnsQueryType(&result->dns_query_type))
        success = false;
      if (!input.ReadInitialPriority(&result->initial_priority))
        success = false;
      if (!input.ReadSource(&result->source))
        success = false;
      result->allow_cached_response = input.allow_cached_response();
      result->control_handle =
          input.TakeControlHandle<decltype(result->control_handle)>();
      result->include_canonical_name = input.include_canonical_name();
      result->loopback_only = input.loopback_only();
      result->is_speculative = input.is_speculative();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif