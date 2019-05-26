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

#include "ui/base/ime/mojo/ime.mojom.h"

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

#include "ui/base/ime/mojo/ime.mojom-params-data.h"
#include "ui/base/ime/mojo/ime.mojom-shared-message-ids.h"

#include "ui/base/ime/mojo/ime.mojom-import-headers.h"


#ifndef UI_BASE_IME_MOJO_IME_MOJOM_JUMBO_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/range/mojo/range_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif
namespace ime {
namespace mojom {
EditorInfo::EditorInfo()
    : type(),
      mode(),
      flags(),
      focus_reason(),
      should_do_learning() {}

EditorInfo::EditorInfo(
    ui::TextInputType type_in,
    ui::TextInputMode mode_in,
    int32_t flags_in,
    ui::TextInputClient::FocusReason focus_reason_in,
    bool should_do_learning_in)
    : type(std::move(type_in)),
      mode(std::move(mode_in)),
      flags(std::move(flags_in)),
      focus_reason(std::move(focus_reason_in)),
      should_do_learning(std::move(should_do_learning_in)) {}

EditorInfo::~EditorInfo() = default;

bool EditorInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ImeEngine::Name_[] = "ime.mojom.ImeEngine";

class ImeEngine_ProcessKeyEvent_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImeEngine_ProcessKeyEvent_ForwardToCallback(
      ImeEngine::ProcessKeyEventCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImeEngine::ProcessKeyEventCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImeEngine_ProcessKeyEvent_ForwardToCallback);
};

ImeEngineProxy::ImeEngineProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImeEngineProxy::StartInput(
    EditorInfoPtr in_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::StartInput");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_StartInput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_StartInput_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->info)::BaseType::BufferWriter
      info_writer;
  mojo::internal::Serialize<::ime::mojom::EditorInfoDataView>(
      in_info, buffer, &info_writer, &serialization_context);
  params->info.Set(
      info_writer.is_null() ? nullptr : info_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in ImeEngine.StartInput request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("StartInput");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineProxy::FinishInput(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::FinishInput");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_FinishInput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_FinishInput_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("FinishInput");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineProxy::CancelInput(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::CancelInput");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_CancelInput_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_CancelInput_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("CancelInput");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineProxy::ProcessKeyEvent(
    std::unique_ptr<ui::Event> in_key_event, ProcessKeyEventCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::ProcessKeyEvent");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_ProcessKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_ProcessKeyEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_event)::BaseType::BufferWriter
      key_event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_key_event, buffer, &key_event_writer, &serialization_context);
  params->key_event.Set(
      key_event_writer.is_null() ? nullptr : key_event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_event in ImeEngine.ProcessKeyEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("ProcessKeyEvent");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImeEngine_ProcessKeyEvent_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ImeEngineProxy::UpdateSurroundingInfo(
    const std::string& in_text, int32_t in_cursor, int32_t in_anchor, int32_t in_offset) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::UpdateSurroundingInfo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_UpdateSurroundingInfo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_UpdateSurroundingInfo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in ImeEngine.UpdateSurroundingInfo request");
  params->cursor = in_cursor;
  params->anchor = in_anchor;
  params->offset = in_offset;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("UpdateSurroundingInfo");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineProxy::UpdateCompositionBounds(
    const std::vector<gfx::Rect>& in_bounds) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::UpdateCompositionBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_UpdateCompositionBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_UpdateCompositionBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  const mojo::internal::ContainerValidateParams bounds_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
      in_bounds, buffer, &bounds_writer, &bounds_validate_params,
      &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in ImeEngine.UpdateCompositionBounds request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("UpdateCompositionBounds");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ImeEngine_ProcessKeyEvent_ProxyToResponder {
 public:
  static ImeEngine::ProcessKeyEventCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImeEngine_ProcessKeyEvent_ProxyToResponder> proxy(
        new ImeEngine_ProcessKeyEvent_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImeEngine_ProcessKeyEvent_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImeEngine_ProcessKeyEvent_ProxyToResponder() {
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
  ImeEngine_ProcessKeyEvent_ProxyToResponder(
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
        << "ImeEngine::ProcessKeyEventCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_handled);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImeEngine_ProcessKeyEvent_ProxyToResponder);
};

bool ImeEngine_ProcessKeyEvent_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngine::ProcessKeyEventCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImeEngine_ProcessKeyEvent_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImeEngine_ProcessKeyEvent_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_handled{};
  ImeEngine_ProcessKeyEvent_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_handled = input_data_view.handled();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImeEngine::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_handled));
  return true;
}

void ImeEngine_ProcessKeyEvent_ProxyToResponder::Run(
    bool in_handled) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngine_ProcessKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngine_ProcessKeyEvent_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->handled = in_handled;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::ProcessKeyEventCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngine::Name_);
  message.set_method_name("ProcessKeyEvent");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ImeEngineStubDispatch::Accept(
    ImeEngine* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImeEngine_StartInput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::StartInput",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngine_StartInput_Params_Data* params =
          reinterpret_cast<internal::ImeEngine_StartInput_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      EditorInfoPtr p_info{};
      ImeEngine_StartInput_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadInfo(&p_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngine::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StartInput(
std::move(p_info));
      return true;
    }
    case internal::kImeEngine_FinishInput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::FinishInput",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngine_FinishInput_Params_Data* params =
          reinterpret_cast<internal::ImeEngine_FinishInput_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImeEngine_FinishInput_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngine::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FinishInput();
      return true;
    }
    case internal::kImeEngine_CancelInput_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::CancelInput",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngine_CancelInput_Params_Data* params =
          reinterpret_cast<internal::ImeEngine_CancelInput_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImeEngine_CancelInput_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngine::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelInput();
      return true;
    }
    case internal::kImeEngine_ProcessKeyEvent_Name: {
      break;
    }
    case internal::kImeEngine_UpdateSurroundingInfo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::UpdateSurroundingInfo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngine_UpdateSurroundingInfo_Params_Data* params =
          reinterpret_cast<internal::ImeEngine_UpdateSurroundingInfo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_text{};
      int32_t p_cursor{};
      int32_t p_anchor{};
      int32_t p_offset{};
      ImeEngine_UpdateSurroundingInfo_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      p_cursor = input_data_view.cursor();
      p_anchor = input_data_view.anchor();
      p_offset = input_data_view.offset();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngine::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateSurroundingInfo(
std::move(p_text), 
std::move(p_cursor), 
std::move(p_anchor), 
std::move(p_offset));
      return true;
    }
    case internal::kImeEngine_UpdateCompositionBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::UpdateCompositionBounds",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngine_UpdateCompositionBounds_Params_Data* params =
          reinterpret_cast<internal::ImeEngine_UpdateCompositionBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<gfx::Rect> p_bounds{};
      ImeEngine_UpdateCompositionBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngine::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateCompositionBounds(
std::move(p_bounds));
      return true;
    }
  }
  return false;
}

// static
bool ImeEngineStubDispatch::AcceptWithResponder(
    ImeEngine* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImeEngine_StartInput_Name: {
      break;
    }
    case internal::kImeEngine_FinishInput_Name: {
      break;
    }
    case internal::kImeEngine_CancelInput_Name: {
      break;
    }
    case internal::kImeEngine_ProcessKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngine::ProcessKeyEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImeEngine_ProcessKeyEvent_Params_Data* params =
          reinterpret_cast<
              internal::ImeEngine_ProcessKeyEvent_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_key_event{};
      ImeEngine_ProcessKeyEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyEvent(&p_key_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngine::Name_, 3, false);
        return false;
      }
      ImeEngine::ProcessKeyEventCallback callback =
          ImeEngine_ProcessKeyEvent_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ProcessKeyEvent(
std::move(p_key_event), std::move(callback));
      return true;
    }
    case internal::kImeEngine_UpdateSurroundingInfo_Name: {
      break;
    }
    case internal::kImeEngine_UpdateCompositionBounds_Name: {
      break;
    }
  }
  return false;
}

bool ImeEngineRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImeEngine RequestValidator");

  switch (message->header()->name) {
    case internal::kImeEngine_StartInput_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_StartInput_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngine_FinishInput_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_FinishInput_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngine_CancelInput_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_CancelInput_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngine_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_ProcessKeyEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngine_UpdateSurroundingInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_UpdateSurroundingInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngine_UpdateCompositionBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_UpdateCompositionBounds_Params_Data>(
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

bool ImeEngineResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImeEngine ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImeEngine_ProcessKeyEvent_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngine_ProcessKeyEvent_ResponseParams_Data>(
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
const char ImeEngineClient::Name_[] = "ime.mojom.ImeEngineClient";

ImeEngineClientProxy::ImeEngineClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImeEngineClientProxy::CommitText(
    const std::string& in_text) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineClient::CommitText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineClient_CommitText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineClient_CommitText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in ImeEngineClient.CommitText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineClient::Name_);
  message.set_method_name("CommitText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineClientProxy::UpdateCompositionText(
    const ui::CompositionText& in_composition_text, uint32_t in_cursor_pos, bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineClient::UpdateCompositionText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineClient_UpdateCompositionText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineClient_UpdateCompositionText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->composition_text)::BaseType::BufferWriter
      composition_text_writer;
  mojo::internal::Serialize<::ui::mojom::CompositionTextDataView>(
      in_composition_text, buffer, &composition_text_writer, &serialization_context);
  params->composition_text.Set(
      composition_text_writer.is_null() ? nullptr : composition_text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->composition_text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null composition_text in ImeEngineClient.UpdateCompositionText request");
  params->cursor_pos = in_cursor_pos;
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineClient::Name_);
  message.set_method_name("UpdateCompositionText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineClientProxy::DeleteSurroundingText(
    int32_t in_offset, uint32_t in_length) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineClient::DeleteSurroundingText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineClient_DeleteSurroundingText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineClient_DeleteSurroundingText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->offset = in_offset;
  params->length = in_length;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineClient::Name_);
  message.set_method_name("DeleteSurroundingText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineClientProxy::SendKeyEvent(
    std::unique_ptr<ui::Event> in_key_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineClient::SendKeyEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineClient_SendKeyEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineClient_SendKeyEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key_event)::BaseType::BufferWriter
      key_event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_key_event, buffer, &key_event_writer, &serialization_context);
  params->key_event.Set(
      key_event_writer.is_null() ? nullptr : key_event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key_event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key_event in ImeEngineClient.SendKeyEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineClient::Name_);
  message.set_method_name("SendKeyEvent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ImeEngineClientProxy::Reconnect(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineClient::Reconnect");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineClient_Reconnect_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineClient_Reconnect_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineClient::Name_);
  message.set_method_name("Reconnect");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ImeEngineClientStubDispatch::Accept(
    ImeEngineClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImeEngineClient_CommitText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineClient::CommitText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineClient_CommitText_Params_Data* params =
          reinterpret_cast<internal::ImeEngineClient_CommitText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_text{};
      ImeEngineClient_CommitText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CommitText(
std::move(p_text));
      return true;
    }
    case internal::kImeEngineClient_UpdateCompositionText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineClient::UpdateCompositionText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineClient_UpdateCompositionText_Params_Data* params =
          reinterpret_cast<internal::ImeEngineClient_UpdateCompositionText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::CompositionText p_composition_text{};
      uint32_t p_cursor_pos{};
      bool p_visible{};
      ImeEngineClient_UpdateCompositionText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadCompositionText(&p_composition_text))
        success = false;
      p_cursor_pos = input_data_view.cursor_pos();
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateCompositionText(
std::move(p_composition_text), 
std::move(p_cursor_pos), 
std::move(p_visible));
      return true;
    }
    case internal::kImeEngineClient_DeleteSurroundingText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineClient::DeleteSurroundingText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineClient_DeleteSurroundingText_Params_Data* params =
          reinterpret_cast<internal::ImeEngineClient_DeleteSurroundingText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      int32_t p_offset{};
      uint32_t p_length{};
      ImeEngineClient_DeleteSurroundingText_ParamsDataView input_data_view(params, &serialization_context);
      
      p_offset = input_data_view.offset();
      p_length = input_data_view.length();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteSurroundingText(
std::move(p_offset), 
std::move(p_length));
      return true;
    }
    case internal::kImeEngineClient_SendKeyEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineClient::SendKeyEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineClient_SendKeyEvent_Params_Data* params =
          reinterpret_cast<internal::ImeEngineClient_SendKeyEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_key_event{};
      ImeEngineClient_SendKeyEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKeyEvent(&p_key_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendKeyEvent(
std::move(p_key_event));
      return true;
    }
    case internal::kImeEngineClient_Reconnect_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineClient::Reconnect",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineClient_Reconnect_Params_Data* params =
          reinterpret_cast<internal::ImeEngineClient_Reconnect_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImeEngineClient_Reconnect_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Reconnect();
      return true;
    }
  }
  return false;
}

// static
bool ImeEngineClientStubDispatch::AcceptWithResponder(
    ImeEngineClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImeEngineClient_CommitText_Name: {
      break;
    }
    case internal::kImeEngineClient_UpdateCompositionText_Name: {
      break;
    }
    case internal::kImeEngineClient_DeleteSurroundingText_Name: {
      break;
    }
    case internal::kImeEngineClient_SendKeyEvent_Name: {
      break;
    }
    case internal::kImeEngineClient_Reconnect_Name: {
      break;
    }
  }
  return false;
}

bool ImeEngineClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImeEngineClient RequestValidator");

  switch (message->header()->name) {
    case internal::kImeEngineClient_CommitText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineClient_CommitText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngineClient_UpdateCompositionText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineClient_UpdateCompositionText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngineClient_DeleteSurroundingText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineClient_DeleteSurroundingText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngineClient_SendKeyEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineClient_SendKeyEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImeEngineClient_Reconnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineClient_Reconnect_Params_Data>(
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

const char ImeEngineFactory::Name_[] = "ime.mojom.ImeEngineFactory";

ImeEngineFactoryProxy::ImeEngineFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImeEngineFactoryProxy::CreateEngine(
    ImeEngineRequest in_engine_request, ImeEngineClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImeEngineFactory::CreateEngine");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImeEngineFactory_CreateEngine_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ime::mojom::internal::ImeEngineFactory_CreateEngine_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ime::mojom::ImeEngineRequestDataView>(
      in_engine_request, &params->engine_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->engine_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid engine_request in ImeEngineFactory.CreateEngine request");
  mojo::internal::Serialize<::ime::mojom::ImeEngineClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ImeEngineFactory.CreateEngine request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImeEngineFactory::Name_);
  message.set_method_name("CreateEngine");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ImeEngineFactoryStubDispatch::Accept(
    ImeEngineFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImeEngineFactory_CreateEngine_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImeEngineFactory::CreateEngine",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImeEngineFactory_CreateEngine_Params_Data* params =
          reinterpret_cast<internal::ImeEngineFactory_CreateEngine_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImeEngineRequest p_engine_request{};
      ImeEngineClientPtr p_client{};
      ImeEngineFactory_CreateEngine_ParamsDataView input_data_view(params, &serialization_context);
      
      p_engine_request =
          input_data_view.TakeEngineRequest<decltype(p_engine_request)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImeEngineFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateEngine(
std::move(p_engine_request), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool ImeEngineFactoryStubDispatch::AcceptWithResponder(
    ImeEngineFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImeEngineFactory_CreateEngine_Name: {
      break;
    }
  }
  return false;
}

bool ImeEngineFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImeEngineFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kImeEngineFactory_CreateEngine_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImeEngineFactory_CreateEngine_Params_Data>(
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
}  // namespace ime

namespace mojo {


// static
bool StructTraits<::ime::mojom::EditorInfo::DataView, ::ime::mojom::EditorInfoPtr>::Read(
    ::ime::mojom::EditorInfo::DataView input,
    ::ime::mojom::EditorInfoPtr* output) {
  bool success = true;
  ::ime::mojom::EditorInfoPtr result(::ime::mojom::EditorInfo::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadMode(&result->mode))
        success = false;
      result->flags = input.flags();
      if (!input.ReadFocusReason(&result->focus_reason))
        success = false;
      result->should_do_learning = input.should_do_learning();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif