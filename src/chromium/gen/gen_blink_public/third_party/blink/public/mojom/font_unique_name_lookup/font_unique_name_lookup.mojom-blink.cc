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

#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-blink.h"

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

#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-params-data.h"
#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/font_unique_name_lookup/font_unique_name_lookup.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FONT_UNIQUE_NAME_LOOKUP_FONT_UNIQUE_NAME_LOOKUP_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char FontUniqueNameLookup::Name_[] = "blink.mojom.FontUniqueNameLookup";
bool FontUniqueNameLookup::GetUniqueNameLookupTable(base::ReadOnlySharedMemoryRegion* out_font_lookup_table) {
  NOTREACHED();
  return false;
}
class FontUniqueNameLookup_GetUniqueNameLookupTable_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FontUniqueNameLookup_GetUniqueNameLookupTable_HandleSyncResponse(
      bool* result, base::ReadOnlySharedMemoryRegion* out_font_lookup_table)
      : result_(result), out_font_lookup_table_(out_font_lookup_table) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::ReadOnlySharedMemoryRegion* out_font_lookup_table_;DISALLOW_COPY_AND_ASSIGN(FontUniqueNameLookup_GetUniqueNameLookupTable_HandleSyncResponse);
};

class FontUniqueNameLookup_GetUniqueNameLookupTable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontUniqueNameLookup_GetUniqueNameLookupTable_ForwardToCallback(
      FontUniqueNameLookup::GetUniqueNameLookupTableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontUniqueNameLookup::GetUniqueNameLookupTableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontUniqueNameLookup_GetUniqueNameLookupTable_ForwardToCallback);
};

FontUniqueNameLookupProxy::FontUniqueNameLookupProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool FontUniqueNameLookupProxy::GetUniqueNameLookupTable(
    base::ReadOnlySharedMemoryRegion* out_param_font_lookup_table) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontUniqueNameLookup::GetUniqueNameLookupTable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontUniqueNameLookup::Name_);
  message.set_method_name("GetUniqueNameLookupTable");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontUniqueNameLookup_GetUniqueNameLookupTable_HandleSyncResponse(
          &result, out_param_font_lookup_table));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void FontUniqueNameLookupProxy::GetUniqueNameLookupTable(
    GetUniqueNameLookupTableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontUniqueNameLookup::GetUniqueNameLookupTable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontUniqueNameLookup::Name_);
  message.set_method_name("GetUniqueNameLookupTable");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontUniqueNameLookup_GetUniqueNameLookupTable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder {
 public:
  static FontUniqueNameLookup::GetUniqueNameLookupTableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder> proxy(
        new FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder() {
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
  FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder(
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
        << "FontUniqueNameLookup::GetUniqueNameLookupTableCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::ReadOnlySharedMemoryRegion in_font_lookup_table);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder);
};

bool FontUniqueNameLookup_GetUniqueNameLookupTable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontUniqueNameLookup::GetUniqueNameLookupTableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::ReadOnlySharedMemoryRegion p_font_lookup_table{};
  FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFontLookupTable(&p_font_lookup_table))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontUniqueNameLookup::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_font_lookup_table));
  return true;
}

void FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder::Run(
    base::ReadOnlySharedMemoryRegion in_font_lookup_table) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->font_lookup_table)::BaseType::BufferWriter
      font_lookup_table_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_font_lookup_table, buffer, &font_lookup_table_writer, &serialization_context);
  params->font_lookup_table.Set(
      font_lookup_table_writer.is_null() ? nullptr : font_lookup_table_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->font_lookup_table.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null font_lookup_table in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontUniqueNameLookup::GetUniqueNameLookupTableCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontUniqueNameLookup::Name_);
  message.set_method_name("GetUniqueNameLookupTable");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool FontUniqueNameLookup_GetUniqueNameLookupTable_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data* params =
      reinterpret_cast<internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::ReadOnlySharedMemoryRegion p_font_lookup_table{};
  FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFontLookupTable(&p_font_lookup_table))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontUniqueNameLookup::Name_, 0, true);
    return false;
  }
  *out_font_lookup_table_ = std::move(p_font_lookup_table);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool FontUniqueNameLookupStubDispatch::Accept(
    FontUniqueNameLookup* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name: {
      break;
    }
  }
  return false;
}

// static
bool FontUniqueNameLookupStubDispatch::AcceptWithResponder(
    FontUniqueNameLookup* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontUniqueNameLookup::GetUniqueNameLookupTable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data* params =
          reinterpret_cast<
              internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      FontUniqueNameLookup_GetUniqueNameLookupTable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontUniqueNameLookup::Name_, 0, false);
        return false;
      }
      FontUniqueNameLookup::GetUniqueNameLookupTableCallback callback =
          FontUniqueNameLookup_GetUniqueNameLookupTable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetUniqueNameLookupTable(std::move(callback));
      return true;
    }
  }
  return false;
}

bool FontUniqueNameLookupRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FontUniqueNameLookup RequestValidator");

  switch (message->header()->name) {
    case internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontUniqueNameLookup_GetUniqueNameLookupTable_Params_Data>(
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

bool FontUniqueNameLookupResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FontUniqueNameLookup ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFontUniqueNameLookup_GetUniqueNameLookupTable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontUniqueNameLookup_GetUniqueNameLookupTable_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif