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

#include "services/device/public/mojom/fingerprint.mojom-blink.h"

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

#include "services/device/public/mojom/fingerprint.mojom-params-data.h"
#include "services/device/public/mojom/fingerprint.mojom-shared-message-ids.h"

#include "services/device/public/mojom/fingerprint.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_JUMBO_H_
#endif
namespace device {
namespace mojom {
namespace blink {
const char FingerprintObserver::Name_[] = "device.mojom.FingerprintObserver";

FingerprintObserverProxy::FingerprintObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FingerprintObserverProxy::OnRestarted(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnRestarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprintObserver_OnRestarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::FingerprintObserver_OnRestarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FingerprintObserver::Name_);
  message.set_method_name("OnRestarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FingerprintObserverProxy::OnEnrollScanDone(
    ScanResult in_scan_result, bool in_is_complete, int32_t in_percent_complete) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnEnrollScanDone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprintObserver_OnEnrollScanDone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::FingerprintObserver_OnEnrollScanDone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::ScanResult>(
      in_scan_result, &params->scan_result);
  params->is_complete = in_is_complete;
  params->percent_complete = in_percent_complete;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FingerprintObserver::Name_);
  message.set_method_name("OnEnrollScanDone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FingerprintObserverProxy::OnAuthScanDone(
    ScanResult in_scan_result, const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& in_matches) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnAuthScanDone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprintObserver_OnAuthScanDone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::FingerprintObserver_OnAuthScanDone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::ScanResult>(
      in_scan_result, &params->scan_result);
  typename decltype(params->matches)::BaseType::BufferWriter
      matches_writer;
  const mojo::internal::ContainerValidateParams matches_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr))));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<mojo::StringDataView>>>(
      in_matches, buffer, &matches_writer, &matches_validate_params,
      &serialization_context);
  params->matches.Set(
      matches_writer.is_null() ? nullptr : matches_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->matches.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null matches in FingerprintObserver.OnAuthScanDone request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FingerprintObserver::Name_);
  message.set_method_name("OnAuthScanDone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FingerprintObserverProxy::OnSessionFailed(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnSessionFailed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprintObserver_OnSessionFailed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::FingerprintObserver_OnSessionFailed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FingerprintObserver::Name_);
  message.set_method_name("OnSessionFailed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool FingerprintObserverStubDispatch::Accept(
    FingerprintObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFingerprintObserver_OnRestarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnRestarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FingerprintObserver_OnRestarted_Params_Data* params =
          reinterpret_cast<internal::FingerprintObserver_OnRestarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FingerprintObserver_OnRestarted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FingerprintObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnRestarted();
      return true;
    }
    case internal::kFingerprintObserver_OnEnrollScanDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnEnrollScanDone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FingerprintObserver_OnEnrollScanDone_Params_Data* params =
          reinterpret_cast<internal::FingerprintObserver_OnEnrollScanDone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ScanResult p_scan_result{};
      bool p_is_complete{};
      int32_t p_percent_complete{};
      FingerprintObserver_OnEnrollScanDone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScanResult(&p_scan_result))
        success = false;
      p_is_complete = input_data_view.is_complete();
      p_percent_complete = input_data_view.percent_complete();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FingerprintObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnEnrollScanDone(
std::move(p_scan_result), 
std::move(p_is_complete), 
std::move(p_percent_complete));
      return true;
    }
    case internal::kFingerprintObserver_OnAuthScanDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnAuthScanDone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FingerprintObserver_OnAuthScanDone_Params_Data* params =
          reinterpret_cast<internal::FingerprintObserver_OnAuthScanDone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ScanResult p_scan_result{};
      WTF::HashMap<WTF::String, WTF::Vector<WTF::String>> p_matches{};
      FingerprintObserver_OnAuthScanDone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadScanResult(&p_scan_result))
        success = false;
      if (!input_data_view.ReadMatches(&p_matches))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FingerprintObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnAuthScanDone(
std::move(p_scan_result), 
std::move(p_matches));
      return true;
    }
    case internal::kFingerprintObserver_OnSessionFailed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FingerprintObserver::OnSessionFailed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::FingerprintObserver_OnSessionFailed_Params_Data* params =
          reinterpret_cast<internal::FingerprintObserver_OnSessionFailed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FingerprintObserver_OnSessionFailed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FingerprintObserver::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnSessionFailed();
      return true;
    }
  }
  return false;
}

// static
bool FingerprintObserverStubDispatch::AcceptWithResponder(
    FingerprintObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFingerprintObserver_OnRestarted_Name: {
      break;
    }
    case internal::kFingerprintObserver_OnEnrollScanDone_Name: {
      break;
    }
    case internal::kFingerprintObserver_OnAuthScanDone_Name: {
      break;
    }
    case internal::kFingerprintObserver_OnSessionFailed_Name: {
      break;
    }
  }
  return false;
}

bool FingerprintObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FingerprintObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kFingerprintObserver_OnRestarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FingerprintObserver_OnRestarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprintObserver_OnEnrollScanDone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FingerprintObserver_OnEnrollScanDone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprintObserver_OnAuthScanDone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FingerprintObserver_OnAuthScanDone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprintObserver_OnSessionFailed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FingerprintObserver_OnSessionFailed_Params_Data>(
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

const char Fingerprint::Name_[] = "device.mojom.Fingerprint";

class Fingerprint_GetRecordsForUser_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_GetRecordsForUser_ForwardToCallback(
      Fingerprint::GetRecordsForUserCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::GetRecordsForUserCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_GetRecordsForUser_ForwardToCallback);
};

class Fingerprint_CancelCurrentEnrollSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_CancelCurrentEnrollSession_ForwardToCallback(
      Fingerprint::CancelCurrentEnrollSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::CancelCurrentEnrollSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_CancelCurrentEnrollSession_ForwardToCallback);
};

class Fingerprint_RequestRecordLabel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_RequestRecordLabel_ForwardToCallback(
      Fingerprint::RequestRecordLabelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::RequestRecordLabelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_RequestRecordLabel_ForwardToCallback);
};

class Fingerprint_SetRecordLabel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_SetRecordLabel_ForwardToCallback(
      Fingerprint::SetRecordLabelCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::SetRecordLabelCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_SetRecordLabel_ForwardToCallback);
};

class Fingerprint_RemoveRecord_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_RemoveRecord_ForwardToCallback(
      Fingerprint::RemoveRecordCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::RemoveRecordCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_RemoveRecord_ForwardToCallback);
};

class Fingerprint_EndCurrentAuthSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_EndCurrentAuthSession_ForwardToCallback(
      Fingerprint::EndCurrentAuthSessionCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::EndCurrentAuthSessionCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_EndCurrentAuthSession_ForwardToCallback);
};

class Fingerprint_DestroyAllRecords_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_DestroyAllRecords_ForwardToCallback(
      Fingerprint::DestroyAllRecordsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::DestroyAllRecordsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_DestroyAllRecords_ForwardToCallback);
};

class Fingerprint_RequestType_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Fingerprint_RequestType_ForwardToCallback(
      Fingerprint::RequestTypeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Fingerprint::RequestTypeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(Fingerprint_RequestType_ForwardToCallback);
};

FingerprintProxy::FingerprintProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FingerprintProxy::GetRecordsForUser(
    const WTF::String& in_user_id, GetRecordsForUserCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::GetRecordsForUser");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_GetRecordsForUser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_GetRecordsForUser_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->user_id)::BaseType::BufferWriter
      user_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_user_id, buffer, &user_id_writer, &serialization_context);
  params->user_id.Set(
      user_id_writer.is_null() ? nullptr : user_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_id in Fingerprint.GetRecordsForUser request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("GetRecordsForUser");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_GetRecordsForUser_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::StartEnrollSession(
    const WTF::String& in_user_id, const WTF::String& in_label) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::StartEnrollSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_StartEnrollSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_StartEnrollSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->user_id)::BaseType::BufferWriter
      user_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_user_id, buffer, &user_id_writer, &serialization_context);
  params->user_id.Set(
      user_id_writer.is_null() ? nullptr : user_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_id in Fingerprint.StartEnrollSession request");
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in Fingerprint.StartEnrollSession request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("StartEnrollSession");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FingerprintProxy::CancelCurrentEnrollSession(
    CancelCurrentEnrollSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::CancelCurrentEnrollSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_CancelCurrentEnrollSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_CancelCurrentEnrollSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("CancelCurrentEnrollSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_CancelCurrentEnrollSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::RequestRecordLabel(
    const WTF::String& in_record_path, RequestRecordLabelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::RequestRecordLabel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_RequestRecordLabel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_RequestRecordLabel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->record_path)::BaseType::BufferWriter
      record_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_record_path, buffer, &record_path_writer, &serialization_context);
  params->record_path.Set(
      record_path_writer.is_null() ? nullptr : record_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->record_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null record_path in Fingerprint.RequestRecordLabel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("RequestRecordLabel");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_RequestRecordLabel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::SetRecordLabel(
    const WTF::String& in_record_path, const WTF::String& in_new_label, SetRecordLabelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::SetRecordLabel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_SetRecordLabel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_SetRecordLabel_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->record_path)::BaseType::BufferWriter
      record_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_record_path, buffer, &record_path_writer, &serialization_context);
  params->record_path.Set(
      record_path_writer.is_null() ? nullptr : record_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->record_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null record_path in Fingerprint.SetRecordLabel request");
  typename decltype(params->new_label)::BaseType::BufferWriter
      new_label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_new_label, buffer, &new_label_writer, &serialization_context);
  params->new_label.Set(
      new_label_writer.is_null() ? nullptr : new_label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_label in Fingerprint.SetRecordLabel request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("SetRecordLabel");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_SetRecordLabel_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::RemoveRecord(
    const WTF::String& in_record_path, RemoveRecordCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::RemoveRecord");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_RemoveRecord_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_RemoveRecord_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->record_path)::BaseType::BufferWriter
      record_path_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_record_path, buffer, &record_path_writer, &serialization_context);
  params->record_path.Set(
      record_path_writer.is_null() ? nullptr : record_path_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->record_path.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null record_path in Fingerprint.RemoveRecord request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("RemoveRecord");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_RemoveRecord_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::StartAuthSession(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::StartAuthSession");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_StartAuthSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_StartAuthSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("StartAuthSession");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FingerprintProxy::EndCurrentAuthSession(
    EndCurrentAuthSessionCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::EndCurrentAuthSession");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_EndCurrentAuthSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_EndCurrentAuthSession_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("EndCurrentAuthSession");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_EndCurrentAuthSession_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::DestroyAllRecords(
    DestroyAllRecordsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::DestroyAllRecords");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_DestroyAllRecords_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_DestroyAllRecords_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("DestroyAllRecords");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_DestroyAllRecords_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FingerprintProxy::AddFingerprintObserver(
    FingerprintObserverPtr in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::AddFingerprintObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_AddFingerprintObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_AddFingerprintObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::FingerprintObserverPtrDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid observer in Fingerprint.AddFingerprintObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("AddFingerprintObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void FingerprintProxy::RequestType(
    RequestTypeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::RequestType");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_RequestType_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_RequestType_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("RequestType");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new Fingerprint_RequestType_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class Fingerprint_GetRecordsForUser_ProxyToResponder {
 public:
  static Fingerprint::GetRecordsForUserCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_GetRecordsForUser_ProxyToResponder> proxy(
        new Fingerprint_GetRecordsForUser_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_GetRecordsForUser_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_GetRecordsForUser_ProxyToResponder() {
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
  Fingerprint_GetRecordsForUser_ProxyToResponder(
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
        << "Fingerprint::GetRecordsForUserCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::HashMap<WTF::String, WTF::String>& in_records);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_GetRecordsForUser_ProxyToResponder);
};

bool Fingerprint_GetRecordsForUser_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::GetRecordsForUserCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_GetRecordsForUser_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_GetRecordsForUser_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::HashMap<WTF::String, WTF::String> p_records{};
  Fingerprint_GetRecordsForUser_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadRecords(&p_records))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_records));
  return true;
}

void Fingerprint_GetRecordsForUser_ProxyToResponder::Run(
    const WTF::HashMap<WTF::String, WTF::String>& in_records) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_GetRecordsForUser_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_GetRecordsForUser_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->records)::BaseType::BufferWriter
      records_writer;
  const mojo::internal::ContainerValidateParams records_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
      in_records, buffer, &records_writer, &records_validate_params,
      &serialization_context);
  params->records.Set(
      records_writer.is_null() ? nullptr : records_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->records.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null records in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::GetRecordsForUserCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("GetRecordsForUser");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_CancelCurrentEnrollSession_ProxyToResponder {
 public:
  static Fingerprint::CancelCurrentEnrollSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_CancelCurrentEnrollSession_ProxyToResponder> proxy(
        new Fingerprint_CancelCurrentEnrollSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_CancelCurrentEnrollSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_CancelCurrentEnrollSession_ProxyToResponder() {
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
  Fingerprint_CancelCurrentEnrollSession_ProxyToResponder(
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
        << "Fingerprint::CancelCurrentEnrollSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_CancelCurrentEnrollSession_ProxyToResponder);
};

bool Fingerprint_CancelCurrentEnrollSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::CancelCurrentEnrollSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Fingerprint_CancelCurrentEnrollSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Fingerprint_CancelCurrentEnrollSession_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_CancelCurrentEnrollSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::CancelCurrentEnrollSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("CancelCurrentEnrollSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_RequestRecordLabel_ProxyToResponder {
 public:
  static Fingerprint::RequestRecordLabelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_RequestRecordLabel_ProxyToResponder> proxy(
        new Fingerprint_RequestRecordLabel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_RequestRecordLabel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_RequestRecordLabel_ProxyToResponder() {
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
  Fingerprint_RequestRecordLabel_ProxyToResponder(
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
        << "Fingerprint::RequestRecordLabelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_label);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_RequestRecordLabel_ProxyToResponder);
};

bool Fingerprint_RequestRecordLabel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::RequestRecordLabelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_RequestRecordLabel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_RequestRecordLabel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_label{};
  Fingerprint_RequestRecordLabel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadLabel(&p_label))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_label));
  return true;
}

void Fingerprint_RequestRecordLabel_ProxyToResponder::Run(
    const WTF::String& in_label) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_RequestRecordLabel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_RequestRecordLabel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->label)::BaseType::BufferWriter
      label_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_label, buffer, &label_writer, &serialization_context);
  params->label.Set(
      label_writer.is_null() ? nullptr : label_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->label.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null label in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::RequestRecordLabelCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("RequestRecordLabel");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_SetRecordLabel_ProxyToResponder {
 public:
  static Fingerprint::SetRecordLabelCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_SetRecordLabel_ProxyToResponder> proxy(
        new Fingerprint_SetRecordLabel_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_SetRecordLabel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_SetRecordLabel_ProxyToResponder() {
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
  Fingerprint_SetRecordLabel_ProxyToResponder(
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
        << "Fingerprint::SetRecordLabelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_SetRecordLabel_ProxyToResponder);
};

bool Fingerprint_SetRecordLabel_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::SetRecordLabelCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_SetRecordLabel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_SetRecordLabel_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Fingerprint_SetRecordLabel_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Fingerprint_SetRecordLabel_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_SetRecordLabel_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_SetRecordLabel_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::SetRecordLabelCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("SetRecordLabel");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_RemoveRecord_ProxyToResponder {
 public:
  static Fingerprint::RemoveRecordCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_RemoveRecord_ProxyToResponder> proxy(
        new Fingerprint_RemoveRecord_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_RemoveRecord_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_RemoveRecord_ProxyToResponder() {
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
  Fingerprint_RemoveRecord_ProxyToResponder(
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
        << "Fingerprint::RemoveRecordCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_RemoveRecord_ProxyToResponder);
};

bool Fingerprint_RemoveRecord_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::RemoveRecordCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_RemoveRecord_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_RemoveRecord_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Fingerprint_RemoveRecord_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Fingerprint_RemoveRecord_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_RemoveRecord_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_RemoveRecord_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::RemoveRecordCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("RemoveRecord");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_EndCurrentAuthSession_ProxyToResponder {
 public:
  static Fingerprint::EndCurrentAuthSessionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_EndCurrentAuthSession_ProxyToResponder> proxy(
        new Fingerprint_EndCurrentAuthSession_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_EndCurrentAuthSession_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_EndCurrentAuthSession_ProxyToResponder() {
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
  Fingerprint_EndCurrentAuthSession_ProxyToResponder(
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
        << "Fingerprint::EndCurrentAuthSessionCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_EndCurrentAuthSession_ProxyToResponder);
};

bool Fingerprint_EndCurrentAuthSession_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::EndCurrentAuthSessionCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Fingerprint_EndCurrentAuthSession_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Fingerprint_EndCurrentAuthSession_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_EndCurrentAuthSession_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::EndCurrentAuthSessionCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("EndCurrentAuthSession");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_DestroyAllRecords_ProxyToResponder {
 public:
  static Fingerprint::DestroyAllRecordsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_DestroyAllRecords_ProxyToResponder> proxy(
        new Fingerprint_DestroyAllRecords_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_DestroyAllRecords_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_DestroyAllRecords_ProxyToResponder() {
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
  Fingerprint_DestroyAllRecords_ProxyToResponder(
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
        << "Fingerprint::DestroyAllRecordsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_DestroyAllRecords_ProxyToResponder);
};

bool Fingerprint_DestroyAllRecords_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::DestroyAllRecordsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_DestroyAllRecords_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_DestroyAllRecords_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  Fingerprint_DestroyAllRecords_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 8, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void Fingerprint_DestroyAllRecords_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_DestroyAllRecords_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_DestroyAllRecords_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::DestroyAllRecordsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("DestroyAllRecords");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class Fingerprint_RequestType_ProxyToResponder {
 public:
  static Fingerprint::RequestTypeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<Fingerprint_RequestType_ProxyToResponder> proxy(
        new Fingerprint_RequestType_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&Fingerprint_RequestType_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~Fingerprint_RequestType_ProxyToResponder() {
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
  Fingerprint_RequestType_ProxyToResponder(
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
        << "Fingerprint::RequestTypeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BiometricType in_type);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(Fingerprint_RequestType_ProxyToResponder);
};

bool Fingerprint_RequestType_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::Fingerprint::RequestTypeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::Fingerprint_RequestType_ResponseParams_Data* params =
      reinterpret_cast<
          internal::Fingerprint_RequestType_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BiometricType p_type{};
  Fingerprint_RequestType_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadType(&p_type))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        Fingerprint::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_type));
  return true;
}

void Fingerprint_RequestType_ProxyToResponder::Run(
    BiometricType in_type) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFingerprint_RequestType_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::Fingerprint_RequestType_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::BiometricType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::RequestTypeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(Fingerprint::Name_);
  message.set_method_name("RequestType");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FingerprintStubDispatch::Accept(
    Fingerprint* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFingerprint_GetRecordsForUser_Name: {
      break;
    }
    case internal::kFingerprint_StartEnrollSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::StartEnrollSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Fingerprint_StartEnrollSession_Params_Data* params =
          reinterpret_cast<internal::Fingerprint_StartEnrollSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_user_id{};
      WTF::String p_label{};
      Fingerprint_StartEnrollSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUserId(&p_user_id))
        success = false;
      if (!input_data_view.ReadLabel(&p_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartEnrollSession(
std::move(p_user_id), 
std::move(p_label));
      return true;
    }
    case internal::kFingerprint_CancelCurrentEnrollSession_Name: {
      break;
    }
    case internal::kFingerprint_RequestRecordLabel_Name: {
      break;
    }
    case internal::kFingerprint_SetRecordLabel_Name: {
      break;
    }
    case internal::kFingerprint_RemoveRecord_Name: {
      break;
    }
    case internal::kFingerprint_StartAuthSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::StartAuthSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Fingerprint_StartAuthSession_Params_Data* params =
          reinterpret_cast<internal::Fingerprint_StartAuthSession_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Fingerprint_StartAuthSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartAuthSession();
      return true;
    }
    case internal::kFingerprint_EndCurrentAuthSession_Name: {
      break;
    }
    case internal::kFingerprint_DestroyAllRecords_Name: {
      break;
    }
    case internal::kFingerprint_AddFingerprintObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::AddFingerprintObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::Fingerprint_AddFingerprintObserver_Params_Data* params =
          reinterpret_cast<internal::Fingerprint_AddFingerprintObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FingerprintObserverPtr p_observer{};
      Fingerprint_AddFingerprintObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddFingerprintObserver(
std::move(p_observer));
      return true;
    }
    case internal::kFingerprint_RequestType_Name: {
      break;
    }
  }
  return false;
}

// static
bool FingerprintStubDispatch::AcceptWithResponder(
    Fingerprint* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFingerprint_GetRecordsForUser_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::GetRecordsForUser",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_GetRecordsForUser_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_GetRecordsForUser_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_user_id{};
      Fingerprint_GetRecordsForUser_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUserId(&p_user_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 0, false);
        return false;
      }
      Fingerprint::GetRecordsForUserCallback callback =
          Fingerprint_GetRecordsForUser_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetRecordsForUser(
std::move(p_user_id), std::move(callback));
      return true;
    }
    case internal::kFingerprint_StartEnrollSession_Name: {
      break;
    }
    case internal::kFingerprint_CancelCurrentEnrollSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::CancelCurrentEnrollSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_CancelCurrentEnrollSession_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_CancelCurrentEnrollSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Fingerprint_CancelCurrentEnrollSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 2, false);
        return false;
      }
      Fingerprint::CancelCurrentEnrollSessionCallback callback =
          Fingerprint_CancelCurrentEnrollSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelCurrentEnrollSession(std::move(callback));
      return true;
    }
    case internal::kFingerprint_RequestRecordLabel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::RequestRecordLabel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_RequestRecordLabel_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_RequestRecordLabel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_record_path{};
      Fingerprint_RequestRecordLabel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRecordPath(&p_record_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 3, false);
        return false;
      }
      Fingerprint::RequestRecordLabelCallback callback =
          Fingerprint_RequestRecordLabel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestRecordLabel(
std::move(p_record_path), std::move(callback));
      return true;
    }
    case internal::kFingerprint_SetRecordLabel_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::SetRecordLabel",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_SetRecordLabel_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_SetRecordLabel_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_record_path{};
      WTF::String p_new_label{};
      Fingerprint_SetRecordLabel_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRecordPath(&p_record_path))
        success = false;
      if (!input_data_view.ReadNewLabel(&p_new_label))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 4, false);
        return false;
      }
      Fingerprint::SetRecordLabelCallback callback =
          Fingerprint_SetRecordLabel_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetRecordLabel(
std::move(p_record_path), 
std::move(p_new_label), std::move(callback));
      return true;
    }
    case internal::kFingerprint_RemoveRecord_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::RemoveRecord",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_RemoveRecord_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_RemoveRecord_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_record_path{};
      Fingerprint_RemoveRecord_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRecordPath(&p_record_path))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 5, false);
        return false;
      }
      Fingerprint::RemoveRecordCallback callback =
          Fingerprint_RemoveRecord_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveRecord(
std::move(p_record_path), std::move(callback));
      return true;
    }
    case internal::kFingerprint_StartAuthSession_Name: {
      break;
    }
    case internal::kFingerprint_EndCurrentAuthSession_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::EndCurrentAuthSession",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_EndCurrentAuthSession_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_EndCurrentAuthSession_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Fingerprint_EndCurrentAuthSession_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 7, false);
        return false;
      }
      Fingerprint::EndCurrentAuthSessionCallback callback =
          Fingerprint_EndCurrentAuthSession_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EndCurrentAuthSession(std::move(callback));
      return true;
    }
    case internal::kFingerprint_DestroyAllRecords_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::DestroyAllRecords",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_DestroyAllRecords_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_DestroyAllRecords_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Fingerprint_DestroyAllRecords_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 8, false);
        return false;
      }
      Fingerprint::DestroyAllRecordsCallback callback =
          Fingerprint_DestroyAllRecords_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DestroyAllRecords(std::move(callback));
      return true;
    }
    case internal::kFingerprint_AddFingerprintObserver_Name: {
      break;
    }
    case internal::kFingerprint_RequestType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::Fingerprint::RequestType",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::Fingerprint_RequestType_Params_Data* params =
          reinterpret_cast<
              internal::Fingerprint_RequestType_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      Fingerprint_RequestType_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            Fingerprint::Name_, 10, false);
        return false;
      }
      Fingerprint::RequestTypeCallback callback =
          Fingerprint_RequestType_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestType(std::move(callback));
      return true;
    }
  }
  return false;
}

bool FingerprintRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Fingerprint RequestValidator");

  switch (message->header()->name) {
    case internal::kFingerprint_GetRecordsForUser_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_GetRecordsForUser_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_StartEnrollSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_StartEnrollSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_CancelCurrentEnrollSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_CancelCurrentEnrollSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_RequestRecordLabel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_RequestRecordLabel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_SetRecordLabel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_SetRecordLabel_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_RemoveRecord_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_RemoveRecord_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_StartAuthSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_StartAuthSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_EndCurrentAuthSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_EndCurrentAuthSession_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_DestroyAllRecords_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_DestroyAllRecords_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_AddFingerprintObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_AddFingerprintObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_RequestType_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_RequestType_Params_Data>(
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

bool FingerprintResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "Fingerprint ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFingerprint_GetRecordsForUser_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_GetRecordsForUser_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_CancelCurrentEnrollSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_CancelCurrentEnrollSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_RequestRecordLabel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_RequestRecordLabel_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_SetRecordLabel_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_SetRecordLabel_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_RemoveRecord_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_RemoveRecord_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_EndCurrentAuthSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_EndCurrentAuthSession_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_DestroyAllRecords_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_DestroyAllRecords_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFingerprint_RequestType_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Fingerprint_RequestType_ResponseParams_Data>(
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
}  // namespace device

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif