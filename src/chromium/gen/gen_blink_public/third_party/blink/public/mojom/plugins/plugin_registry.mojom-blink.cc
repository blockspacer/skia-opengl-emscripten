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

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-blink.h"

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

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-params-data.h"
#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
PluginMimeType::PluginMimeType()
    : mime_type(),
      description(),
      file_extensions() {}

PluginMimeType::PluginMimeType(
    const WTF::String& mime_type_in,
    const WTF::String& description_in,
    const WTF::Vector<WTF::String>& file_extensions_in)
    : mime_type(std::move(mime_type_in)),
      description(std::move(description_in)),
      file_extensions(std::move(file_extensions_in)) {}

PluginMimeType::~PluginMimeType() = default;

bool PluginMimeType::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PluginInfo::PluginInfo()
    : name(),
      description(),
      filename(),
      background_color(),
      mime_types(),
      may_use_mime_handler_view() {}

PluginInfo::PluginInfo(
    const WTF::String& name_in,
    const WTF::String& description_in,
    const base::FilePath& filename_in,
    uint32_t background_color_in,
    WTF::Vector<PluginMimeTypePtr> mime_types_in,
    bool may_use_mime_handler_view_in)
    : name(std::move(name_in)),
      description(std::move(description_in)),
      filename(std::move(filename_in)),
      background_color(std::move(background_color_in)),
      mime_types(std::move(mime_types_in)),
      may_use_mime_handler_view(std::move(may_use_mime_handler_view_in)) {}

PluginInfo::~PluginInfo() = default;

bool PluginInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PluginRegistry::Name_[] = "blink.mojom.PluginRegistry";
bool PluginRegistry::GetPlugins(bool refresh, const scoped_refptr<const ::blink::SecurityOrigin>& main_frame_origin, WTF::Vector<PluginInfoPtr>* out_plugins) {
  NOTREACHED();
  return false;
}
class PluginRegistry_GetPlugins_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  PluginRegistry_GetPlugins_HandleSyncResponse(
      bool* result, WTF::Vector<PluginInfoPtr>* out_plugins)
      : result_(result), out_plugins_(out_plugins) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::Vector<PluginInfoPtr>* out_plugins_;DISALLOW_COPY_AND_ASSIGN(PluginRegistry_GetPlugins_HandleSyncResponse);
};

class PluginRegistry_GetPlugins_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PluginRegistry_GetPlugins_ForwardToCallback(
      PluginRegistry::GetPluginsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PluginRegistry::GetPluginsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(PluginRegistry_GetPlugins_ForwardToCallback);
};

PluginRegistryProxy::PluginRegistryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool PluginRegistryProxy::GetPlugins(
    bool param_refresh, const scoped_refptr<const ::blink::SecurityOrigin>& param_main_frame_origin, WTF::Vector<PluginInfoPtr>* out_param_plugins) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PluginRegistry::GetPlugins");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRegistry_GetPlugins_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PluginRegistry_GetPlugins_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->refresh = param_refresh;
  typename decltype(params->main_frame_origin)::BaseType::BufferWriter
      main_frame_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      param_main_frame_origin, buffer, &main_frame_origin_writer, &serialization_context);
  params->main_frame_origin.Set(
      main_frame_origin_writer.is_null() ? nullptr : main_frame_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->main_frame_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null main_frame_origin in PluginRegistry.GetPlugins request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PluginRegistry::Name_);
  message.set_method_name("GetPlugins");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PluginRegistry_GetPlugins_HandleSyncResponse(
          &result, out_param_plugins));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void PluginRegistryProxy::GetPlugins(
    bool in_refresh, const scoped_refptr<const ::blink::SecurityOrigin>& in_main_frame_origin, GetPluginsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::PluginRegistry::GetPlugins");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRegistry_GetPlugins_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PluginRegistry_GetPlugins_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->refresh = in_refresh;
  typename decltype(params->main_frame_origin)::BaseType::BufferWriter
      main_frame_origin_writer;
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_main_frame_origin, buffer, &main_frame_origin_writer, &serialization_context);
  params->main_frame_origin.Set(
      main_frame_origin_writer.is_null() ? nullptr : main_frame_origin_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->main_frame_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null main_frame_origin in PluginRegistry.GetPlugins request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PluginRegistry::Name_);
  message.set_method_name("GetPlugins");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new PluginRegistry_GetPlugins_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class PluginRegistry_GetPlugins_ProxyToResponder {
 public:
  static PluginRegistry::GetPluginsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<PluginRegistry_GetPlugins_ProxyToResponder> proxy(
        new PluginRegistry_GetPlugins_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&PluginRegistry_GetPlugins_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~PluginRegistry_GetPlugins_ProxyToResponder() {
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
  PluginRegistry_GetPlugins_ProxyToResponder(
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
        << "PluginRegistry::GetPluginsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WTF::Vector<PluginInfoPtr> in_plugins);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(PluginRegistry_GetPlugins_ProxyToResponder);
};

bool PluginRegistry_GetPlugins_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::PluginRegistry::GetPluginsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::PluginRegistry_GetPlugins_ResponseParams_Data* params =
      reinterpret_cast<
          internal::PluginRegistry_GetPlugins_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<PluginInfoPtr> p_plugins{};
  PluginRegistry_GetPlugins_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPlugins(&p_plugins))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PluginRegistry::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_plugins));
  return true;
}

void PluginRegistry_GetPlugins_ProxyToResponder::Run(
    WTF::Vector<PluginInfoPtr> in_plugins) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kPluginRegistry_GetPlugins_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::PluginRegistry_GetPlugins_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->plugins)::BaseType::BufferWriter
      plugins_writer;
  const mojo::internal::ContainerValidateParams plugins_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PluginInfoDataView>>(
      in_plugins, buffer, &plugins_writer, &plugins_validate_params,
      &serialization_context);
  params->plugins.Set(
      plugins_writer.is_null() ? nullptr : plugins_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->plugins.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null plugins in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::PluginRegistry::GetPluginsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PluginRegistry::Name_);
  message.set_method_name("GetPlugins");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool PluginRegistry_GetPlugins_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::PluginRegistry_GetPlugins_ResponseParams_Data* params =
      reinterpret_cast<internal::PluginRegistry_GetPlugins_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<PluginInfoPtr> p_plugins{};
  PluginRegistry_GetPlugins_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPlugins(&p_plugins))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        PluginRegistry::Name_, 0, true);
    return false;
  }
  *out_plugins_ = std::move(p_plugins);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool PluginRegistryStubDispatch::Accept(
    PluginRegistry* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPluginRegistry_GetPlugins_Name: {
      break;
    }
  }
  return false;
}

// static
bool PluginRegistryStubDispatch::AcceptWithResponder(
    PluginRegistry* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kPluginRegistry_GetPlugins_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::PluginRegistry::GetPlugins",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::PluginRegistry_GetPlugins_Params_Data* params =
          reinterpret_cast<
              internal::PluginRegistry_GetPlugins_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_refresh{};
      scoped_refptr<const ::blink::SecurityOrigin> p_main_frame_origin{};
      PluginRegistry_GetPlugins_ParamsDataView input_data_view(params, &serialization_context);
      
      p_refresh = input_data_view.refresh();
      if (!input_data_view.ReadMainFrameOrigin(&p_main_frame_origin))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PluginRegistry::Name_, 0, false);
        return false;
      }
      PluginRegistry::GetPluginsCallback callback =
          PluginRegistry_GetPlugins_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPlugins(
std::move(p_refresh), 
std::move(p_main_frame_origin), std::move(callback));
      return true;
    }
  }
  return false;
}

bool PluginRegistryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginRegistry RequestValidator");

  switch (message->header()->name) {
    case internal::kPluginRegistry_GetPlugins_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginRegistry_GetPlugins_Params_Data>(
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

bool PluginRegistryResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "PluginRegistry ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kPluginRegistry_GetPlugins_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PluginRegistry_GetPlugins_ResponseParams_Data>(
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


// static
bool StructTraits<::blink::mojom::blink::PluginMimeType::DataView, ::blink::mojom::blink::PluginMimeTypePtr>::Read(
    ::blink::mojom::blink::PluginMimeType::DataView input,
    ::blink::mojom::blink::PluginMimeTypePtr* output) {
  bool success = true;
  ::blink::mojom::blink::PluginMimeTypePtr result(::blink::mojom::blink::PluginMimeType::New());
  
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadFileExtensions(&result->file_extensions))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PluginInfo::DataView, ::blink::mojom::blink::PluginInfoPtr>::Read(
    ::blink::mojom::blink::PluginInfo::DataView input,
    ::blink::mojom::blink::PluginInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PluginInfoPtr result(::blink::mojom::blink::PluginInfo::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadDescription(&result->description))
        success = false;
      if (!input.ReadFilename(&result->filename))
        success = false;
      result->background_color = input.background_color();
      if (!input.ReadMimeTypes(&result->mime_types))
        success = false;
      result->may_use_mime_handler_view = input.may_use_mime_handler_view();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif