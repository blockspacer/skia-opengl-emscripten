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

#include "third_party/blink/public/mojom/reporting/reporting.mojom.h"

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

#include "third_party/blink/public/mojom/reporting/reporting.mojom-params-data.h"
#include "third_party/blink/public/mojom/reporting/reporting.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/reporting/reporting.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REPORTING_REPORTING_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
const char ReportingServiceProxy::Name_[] = "blink.mojom.ReportingServiceProxy";

ReportingServiceProxyProxy::ReportingServiceProxyProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ReportingServiceProxyProxy::QueueInterventionReport(
    const GURL& in_url, const std::string& in_id, const std::string& in_message, const base::Optional<std::string>& in_source_file, int32_t in_line_number, int32_t in_column_number) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueInterventionReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueInterventionReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueInterventionReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueInterventionReport request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ReportingServiceProxy.QueueInterventionReport request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ReportingServiceProxy.QueueInterventionReport request");
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ReportingServiceProxy::Name_);
  message.set_method_name("QueueInterventionReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReportingServiceProxyProxy::QueueDeprecationReport(
    const GURL& in_url, const std::string& in_id, base::Optional<base::Time> in_anticipatedRemoval, const std::string& in_message, const base::Optional<std::string>& in_source_file, int32_t in_line_number, int32_t in_column_number) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueDeprecationReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueDeprecationReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->id)::BaseType::BufferWriter
      id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_id, buffer, &id_writer, &serialization_context);
  params->id.Set(
      id_writer.is_null() ? nullptr : id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null id in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->anticipatedRemoval)::BaseType::BufferWriter
      anticipatedRemoval_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_anticipatedRemoval, buffer, &anticipatedRemoval_writer, &serialization_context);
  params->anticipatedRemoval.Set(
      anticipatedRemoval_writer.is_null() ? nullptr : anticipatedRemoval_writer.data());
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ReportingServiceProxy.QueueDeprecationReport request");
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ReportingServiceProxy::Name_);
  message.set_method_name("QueueDeprecationReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReportingServiceProxyProxy::QueueCspViolationReport(
    const GURL& in_url, const std::string& in_group, const std::string& in_document_url, const base::Optional<std::string>& in_referrer, const base::Optional<std::string>& in_blocked_url, const std::string& in_effective_directive, const std::string& in_original_policy, const base::Optional<std::string>& in_source_file, const base::Optional<std::string>& in_script_sample, const std::string& in_disposition, uint16_t in_status_code, int32_t in_line_number, int32_t in_column_number) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueCspViolationReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueCspViolationReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->group)::BaseType::BufferWriter
      group_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_group, buffer, &group_writer, &serialization_context);
  params->group.Set(
      group_writer.is_null() ? nullptr : group_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->group.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null group in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->document_url)::BaseType::BufferWriter
      document_url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_document_url, buffer, &document_url_writer, &serialization_context);
  params->document_url.Set(
      document_url_writer.is_null() ? nullptr : document_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->document_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null document_url in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->referrer)::BaseType::BufferWriter
      referrer_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_referrer, buffer, &referrer_writer, &serialization_context);
  params->referrer.Set(
      referrer_writer.is_null() ? nullptr : referrer_writer.data());
  typename decltype(params->blocked_url)::BaseType::BufferWriter
      blocked_url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_blocked_url, buffer, &blocked_url_writer, &serialization_context);
  params->blocked_url.Set(
      blocked_url_writer.is_null() ? nullptr : blocked_url_writer.data());
  typename decltype(params->effective_directive)::BaseType::BufferWriter
      effective_directive_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_effective_directive, buffer, &effective_directive_writer, &serialization_context);
  params->effective_directive.Set(
      effective_directive_writer.is_null() ? nullptr : effective_directive_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->effective_directive.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null effective_directive in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->original_policy)::BaseType::BufferWriter
      original_policy_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_original_policy, buffer, &original_policy_writer, &serialization_context);
  params->original_policy.Set(
      original_policy_writer.is_null() ? nullptr : original_policy_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->original_policy.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_policy in ReportingServiceProxy.QueueCspViolationReport request");
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  typename decltype(params->script_sample)::BaseType::BufferWriter
      script_sample_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_script_sample, buffer, &script_sample_writer, &serialization_context);
  params->script_sample.Set(
      script_sample_writer.is_null() ? nullptr : script_sample_writer.data());
  typename decltype(params->disposition)::BaseType::BufferWriter
      disposition_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_disposition, buffer, &disposition_writer, &serialization_context);
  params->disposition.Set(
      disposition_writer.is_null() ? nullptr : disposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->disposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null disposition in ReportingServiceProxy.QueueCspViolationReport request");
  params->status_code = in_status_code;
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ReportingServiceProxy::Name_);
  message.set_method_name("QueueCspViolationReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ReportingServiceProxyProxy::QueueFeaturePolicyViolationReport(
    const GURL& in_url, const std::string& in_policy_id, const std::string& in_disposition, const base::Optional<std::string>& in_message, const base::Optional<std::string>& in_source_file, int32_t in_line_number, int32_t in_column_number) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueFeaturePolicyViolationReport");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kReportingServiceProxy_QueueFeaturePolicyViolationReport_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ReportingServiceProxy.QueueFeaturePolicyViolationReport request");
  typename decltype(params->policy_id)::BaseType::BufferWriter
      policy_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_policy_id, buffer, &policy_id_writer, &serialization_context);
  params->policy_id.Set(
      policy_id_writer.is_null() ? nullptr : policy_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->policy_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null policy_id in ReportingServiceProxy.QueueFeaturePolicyViolationReport request");
  typename decltype(params->disposition)::BaseType::BufferWriter
      disposition_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_disposition, buffer, &disposition_writer, &serialization_context);
  params->disposition.Set(
      disposition_writer.is_null() ? nullptr : disposition_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->disposition.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null disposition in ReportingServiceProxy.QueueFeaturePolicyViolationReport request");
  typename decltype(params->message)::BaseType::BufferWriter
      message_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, buffer, &message_writer, &serialization_context);
  params->message.Set(
      message_writer.is_null() ? nullptr : message_writer.data());
  typename decltype(params->source_file)::BaseType::BufferWriter
      source_file_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_file, buffer, &source_file_writer, &serialization_context);
  params->source_file.Set(
      source_file_writer.is_null() ? nullptr : source_file_writer.data());
  params->line_number = in_line_number;
  params->column_number = in_column_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ReportingServiceProxy::Name_);
  message.set_method_name("QueueFeaturePolicyViolationReport");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ReportingServiceProxyStubDispatch::Accept(
    ReportingServiceProxy* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kReportingServiceProxy_QueueInterventionReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueInterventionReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueInterventionReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueInterventionReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_id{};
      std::string p_message{};
      base::Optional<std::string> p_source_file{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ReportingServiceProxy_QueueInterventionReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ReportingServiceProxy::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueueInterventionReport(
std::move(p_url), 
std::move(p_id), 
std::move(p_message), 
std::move(p_source_file), 
std::move(p_line_number), 
std::move(p_column_number));
      return true;
    }
    case internal::kReportingServiceProxy_QueueDeprecationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueDeprecationReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_id{};
      base::Optional<base::Time> p_anticipatedRemoval{};
      std::string p_message{};
      base::Optional<std::string> p_source_file{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ReportingServiceProxy_QueueDeprecationReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadId(&p_id))
        success = false;
      if (!input_data_view.ReadAnticipatedRemoval(&p_anticipatedRemoval))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ReportingServiceProxy::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueueDeprecationReport(
std::move(p_url), 
std::move(p_id), 
std::move(p_anticipatedRemoval), 
std::move(p_message), 
std::move(p_source_file), 
std::move(p_line_number), 
std::move(p_column_number));
      return true;
    }
    case internal::kReportingServiceProxy_QueueCspViolationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueCspViolationReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_group{};
      std::string p_document_url{};
      base::Optional<std::string> p_referrer{};
      base::Optional<std::string> p_blocked_url{};
      std::string p_effective_directive{};
      std::string p_original_policy{};
      base::Optional<std::string> p_source_file{};
      base::Optional<std::string> p_script_sample{};
      std::string p_disposition{};
      uint16_t p_status_code{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ReportingServiceProxy_QueueCspViolationReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadGroup(&p_group))
        success = false;
      if (!input_data_view.ReadDocumentUrl(&p_document_url))
        success = false;
      if (!input_data_view.ReadReferrer(&p_referrer))
        success = false;
      if (!input_data_view.ReadBlockedUrl(&p_blocked_url))
        success = false;
      if (!input_data_view.ReadEffectiveDirective(&p_effective_directive))
        success = false;
      if (!input_data_view.ReadOriginalPolicy(&p_original_policy))
        success = false;
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      if (!input_data_view.ReadScriptSample(&p_script_sample))
        success = false;
      if (!input_data_view.ReadDisposition(&p_disposition))
        success = false;
      p_status_code = input_data_view.status_code();
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ReportingServiceProxy::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueueCspViolationReport(
std::move(p_url), 
std::move(p_group), 
std::move(p_document_url), 
std::move(p_referrer), 
std::move(p_blocked_url), 
std::move(p_effective_directive), 
std::move(p_original_policy), 
std::move(p_source_file), 
std::move(p_script_sample), 
std::move(p_disposition), 
std::move(p_status_code), 
std::move(p_line_number), 
std::move(p_column_number));
      return true;
    }
    case internal::kReportingServiceProxy_QueueFeaturePolicyViolationReport_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ReportingServiceProxy::QueueFeaturePolicyViolationReport",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data* params =
          reinterpret_cast<internal::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GURL p_url{};
      std::string p_policy_id{};
      std::string p_disposition{};
      base::Optional<std::string> p_message{};
      base::Optional<std::string> p_source_file{};
      int32_t p_line_number{};
      int32_t p_column_number{};
      ReportingServiceProxy_QueueFeaturePolicyViolationReport_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadPolicyId(&p_policy_id))
        success = false;
      if (!input_data_view.ReadDisposition(&p_disposition))
        success = false;
      if (!input_data_view.ReadMessage(&p_message))
        success = false;
      if (!input_data_view.ReadSourceFile(&p_source_file))
        success = false;
      p_line_number = input_data_view.line_number();
      p_column_number = input_data_view.column_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ReportingServiceProxy::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->QueueFeaturePolicyViolationReport(
std::move(p_url), 
std::move(p_policy_id), 
std::move(p_disposition), 
std::move(p_message), 
std::move(p_source_file), 
std::move(p_line_number), 
std::move(p_column_number));
      return true;
    }
  }
  return false;
}

// static
bool ReportingServiceProxyStubDispatch::AcceptWithResponder(
    ReportingServiceProxy* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kReportingServiceProxy_QueueInterventionReport_Name: {
      break;
    }
    case internal::kReportingServiceProxy_QueueDeprecationReport_Name: {
      break;
    }
    case internal::kReportingServiceProxy_QueueCspViolationReport_Name: {
      break;
    }
    case internal::kReportingServiceProxy_QueueFeaturePolicyViolationReport_Name: {
      break;
    }
  }
  return false;
}

bool ReportingServiceProxyRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ReportingServiceProxy RequestValidator");

  switch (message->header()->name) {
    case internal::kReportingServiceProxy_QueueInterventionReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueInterventionReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReportingServiceProxy_QueueDeprecationReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueDeprecationReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReportingServiceProxy_QueueCspViolationReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueCspViolationReport_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kReportingServiceProxy_QueueFeaturePolicyViolationReport_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ReportingServiceProxy_QueueFeaturePolicyViolationReport_Params_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif