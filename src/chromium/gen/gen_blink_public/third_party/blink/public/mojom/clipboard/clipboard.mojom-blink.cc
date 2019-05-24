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

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-blink.h"

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

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-params-data.h"
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
const char ClipboardHost::Name_[] = "blink.mojom.ClipboardHost";
bool ClipboardHost::GetSequenceNumber(ClipboardBuffer buffer, uint64_t* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, bool* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadAvailableTypes(ClipboardBuffer buffer, WTF::Vector<WTF::String>* out_types, bool* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadText(ClipboardBuffer buffer, WTF::String* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadHtml(ClipboardBuffer buffer, WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadRtf(ClipboardBuffer buffer, WTF::String* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadImage(ClipboardBuffer buffer, SkBitmap* out_image) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadCustomData(ClipboardBuffer buffer, const WTF::String& type, WTF::String* out_result) {
  NOTREACHED();
  return false;
}
class ClipboardHost_GetSequenceNumber_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_GetSequenceNumber_HandleSyncResponse(
      bool* result, uint64_t* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  uint64_t* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_GetSequenceNumber_HandleSyncResponse);
};

class ClipboardHost_GetSequenceNumber_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_GetSequenceNumber_ForwardToCallback(
      ClipboardHost::GetSequenceNumberCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::GetSequenceNumberCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_GetSequenceNumber_ForwardToCallback);
};
class ClipboardHost_IsFormatAvailable_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_IsFormatAvailable_HandleSyncResponse(
      bool* result, bool* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_IsFormatAvailable_HandleSyncResponse);
};

class ClipboardHost_IsFormatAvailable_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_IsFormatAvailable_ForwardToCallback(
      ClipboardHost::IsFormatAvailableCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::IsFormatAvailableCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_IsFormatAvailable_ForwardToCallback);
};
class ClipboardHost_ReadAvailableTypes_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadAvailableTypes_HandleSyncResponse(
      bool* result, WTF::Vector<WTF::String>* out_types, bool* out_result)
      : result_(result), out_types_(out_types), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::Vector<WTF::String>* out_types_;
  bool* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAvailableTypes_HandleSyncResponse);
};

class ClipboardHost_ReadAvailableTypes_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadAvailableTypes_ForwardToCallback(
      ClipboardHost::ReadAvailableTypesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadAvailableTypesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAvailableTypes_ForwardToCallback);
};
class ClipboardHost_ReadText_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadText_HandleSyncResponse(
      bool* result, WTF::String* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::String* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadText_HandleSyncResponse);
};

class ClipboardHost_ReadText_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadText_ForwardToCallback(
      ClipboardHost::ReadTextCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadTextCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadText_ForwardToCallback);
};
class ClipboardHost_ReadHtml_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadHtml_HandleSyncResponse(
      bool* result, WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end)
      : result_(result), out_markup_(out_markup), out_url_(out_url), out_fragment_start_(out_fragment_start), out_fragment_end_(out_fragment_end) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::String* out_markup_;
  ::blink::KURL* out_url_;
  uint32_t* out_fragment_start_;
  uint32_t* out_fragment_end_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadHtml_HandleSyncResponse);
};

class ClipboardHost_ReadHtml_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadHtml_ForwardToCallback(
      ClipboardHost::ReadHtmlCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadHtmlCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadHtml_ForwardToCallback);
};
class ClipboardHost_ReadRtf_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadRtf_HandleSyncResponse(
      bool* result, WTF::String* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::String* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadRtf_HandleSyncResponse);
};

class ClipboardHost_ReadRtf_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadRtf_ForwardToCallback(
      ClipboardHost::ReadRtfCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadRtfCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadRtf_ForwardToCallback);
};
class ClipboardHost_ReadImage_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadImage_HandleSyncResponse(
      bool* result, SkBitmap* out_image)
      : result_(result), out_image_(out_image) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  SkBitmap* out_image_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadImage_HandleSyncResponse);
};

class ClipboardHost_ReadImage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadImage_ForwardToCallback(
      ClipboardHost::ReadImageCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadImageCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadImage_ForwardToCallback);
};
class ClipboardHost_ReadCustomData_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadCustomData_HandleSyncResponse(
      bool* result, WTF::String* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  WTF::String* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadCustomData_HandleSyncResponse);
};

class ClipboardHost_ReadCustomData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadCustomData_ForwardToCallback(
      ClipboardHost::ReadCustomDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadCustomDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadCustomData_ForwardToCallback);
};

ClipboardHostProxy::ClipboardHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool ClipboardHostProxy::GetSequenceNumber(
    ClipboardBuffer param_buffer, uint64_t* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::GetSequenceNumber");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_GetSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_GetSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("GetSequenceNumber");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_GetSequenceNumber_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::GetSequenceNumber(
    ClipboardBuffer in_buffer, GetSequenceNumberCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::GetSequenceNumber");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_GetSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_GetSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("GetSequenceNumber");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_GetSequenceNumber_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::IsFormatAvailable(
    ClipboardFormat param_format, ClipboardBuffer param_buffer, bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::IsFormatAvailable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_IsFormatAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_IsFormatAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardFormat>(
      param_format, &params->format);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("IsFormatAvailable");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_IsFormatAvailable_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::IsFormatAvailable(
    ClipboardFormat in_format, ClipboardBuffer in_buffer, IsFormatAvailableCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::IsFormatAvailable");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_IsFormatAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_IsFormatAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardFormat>(
      in_format, &params->format);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("IsFormatAvailable");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_IsFormatAvailable_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadAvailableTypes(
    ClipboardBuffer param_buffer, WTF::Vector<WTF::String>* out_param_types, bool* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAvailableTypes");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAvailableTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadAvailableTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAvailableTypes");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadAvailableTypes_HandleSyncResponse(
          &result, out_param_types, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadAvailableTypes(
    ClipboardBuffer in_buffer, ReadAvailableTypesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAvailableTypes");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAvailableTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadAvailableTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAvailableTypes");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadAvailableTypes_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadText(
    ClipboardBuffer param_buffer, WTF::String* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadText");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadText");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadText_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadText(
    ClipboardBuffer in_buffer, ReadTextCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadText");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadText");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadText_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadHtml(
    ClipboardBuffer param_buffer, WTF::String* out_param_markup, ::blink::KURL* out_param_url, uint32_t* out_param_fragment_start, uint32_t* out_param_fragment_end) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHtml");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadHtml_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadHtml_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadHtml");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadHtml_HandleSyncResponse(
          &result, out_param_markup, out_param_url, out_param_fragment_start, out_param_fragment_end));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadHtml(
    ClipboardBuffer in_buffer, ReadHtmlCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHtml");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadHtml_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadHtml_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadHtml");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadHtml_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadRtf(
    ClipboardBuffer param_buffer, WTF::String* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRtf");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadRtf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadRtf_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadRtf");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadRtf_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadRtf(
    ClipboardBuffer in_buffer, ReadRtfCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRtf");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadRtf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadRtf_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadRtf");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadRtf_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadImage(
    ClipboardBuffer param_buffer, SkBitmap* out_param_image) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadImage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadImage");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadImage_HandleSyncResponse(
          &result, out_param_image));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadImage(
    ClipboardBuffer in_buffer, ReadImageCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadImage");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadImage");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadImage_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadCustomData(
    ClipboardBuffer param_buffer, const WTF::String& param_type, WTF::String* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadCustomData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadCustomData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadCustomData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      param_buffer, &params->buffer);
  typename decltype(params->type)::BaseType::BufferWriter
      type_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      param_type, buffer, &type_writer, &serialization_context);
  params->type.Set(
      type_writer.is_null() ? nullptr : type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null type in ClipboardHost.ReadCustomData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadCustomData");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadCustomData_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadCustomData(
    ClipboardBuffer in_buffer, const WTF::String& in_type, ReadCustomDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadCustomData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadCustomData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadCustomData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::ClipboardBuffer>(
      in_buffer, &params->buffer);
  typename decltype(params->type)::BaseType::BufferWriter
      type_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_type, buffer, &type_writer, &serialization_context);
  params->type.Set(
      type_writer.is_null() ? nullptr : type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null type in ClipboardHost.ReadCustomData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadCustomData");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadCustomData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ClipboardHostProxy::WriteText(
    const WTF::String& in_text) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteText");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_WriteText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->text)::BaseType::BufferWriter
      text_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigString16DataView>(
      in_text, buffer, &text_writer, &serialization_context);
  params->text.Set(
      text_writer.is_null() ? nullptr : text_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in ClipboardHost.WriteText request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteText");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteHtml(
    const WTF::String& in_markup, const ::blink::KURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteHtml");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteHtml_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_WriteHtml_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->markup)::BaseType::BufferWriter
      markup_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigString16DataView>(
      in_markup, buffer, &markup_writer, &serialization_context);
  params->markup.Set(
      markup_writer.is_null() ? nullptr : markup_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->markup.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null markup in ClipboardHost.WriteHtml request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ClipboardHost.WriteHtml request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteHtml");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteSmartPasteMarker(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteSmartPasteMarker");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteSmartPasteMarker_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_WriteSmartPasteMarker_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteSmartPasteMarker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteCustomData(
    const WTF::HashMap<WTF::String, WTF::String>& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteCustomData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteCustomData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_WriteCustomData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  mojo::internal::Serialize<mojo::MapDataView<::mojo_base::mojom::String16DataView, ::mojo_base::mojom::BigString16DataView>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ClipboardHost.WriteCustomData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteCustomData");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteBookmark(
    const WTF::String& in_url, const WTF::String& in_title) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteBookmark");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteBookmark_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_WriteBookmark_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ClipboardHost.WriteBookmark request");
  typename decltype(params->title)::BaseType::BufferWriter
      title_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_title, buffer, &title_writer, &serialization_context);
  params->title.Set(
      title_writer.is_null() ? nullptr : title_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->title.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null title in ClipboardHost.WriteBookmark request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteBookmark");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteImage(
    const SkBitmap& in_image) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteImage");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_WriteImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->image)::BaseType::BufferWriter
      image_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_image, buffer, &image_writer, &serialization_context);
  params->image.Set(
      image_writer.is_null() ? nullptr : image_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->image.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null image in ClipboardHost.WriteImage request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteImage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::CommitWrite(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::CommitWrite");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_CommitWrite_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_CommitWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("CommitWrite");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class ClipboardHost_GetSequenceNumber_ProxyToResponder {
 public:
  static ClipboardHost::GetSequenceNumberCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_GetSequenceNumber_ProxyToResponder> proxy(
        new ClipboardHost_GetSequenceNumber_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_GetSequenceNumber_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_GetSequenceNumber_ProxyToResponder() {
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
  ClipboardHost_GetSequenceNumber_ProxyToResponder(
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
        << "ClipboardHost::GetSequenceNumberCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint64_t in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_GetSequenceNumber_ProxyToResponder);
};

bool ClipboardHost_GetSequenceNumber_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::GetSequenceNumberCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_result{};
  ClipboardHost_GetSequenceNumber_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_GetSequenceNumber_ProxyToResponder::Run(
    uint64_t in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_GetSequenceNumber_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::GetSequenceNumberCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("GetSequenceNumber");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_GetSequenceNumber_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint64_t p_result{};
  ClipboardHost_GetSequenceNumber_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 0, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_IsFormatAvailable_ProxyToResponder {
 public:
  static ClipboardHost::IsFormatAvailableCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_IsFormatAvailable_ProxyToResponder> proxy(
        new ClipboardHost_IsFormatAvailable_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_IsFormatAvailable_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_IsFormatAvailable_ProxyToResponder() {
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
  ClipboardHost_IsFormatAvailable_ProxyToResponder(
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
        << "ClipboardHost::IsFormatAvailableCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_IsFormatAvailable_ProxyToResponder);
};

bool ClipboardHost_IsFormatAvailable_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::IsFormatAvailableCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  ClipboardHost_IsFormatAvailable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_IsFormatAvailable_ProxyToResponder::Run(
    bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_IsFormatAvailable_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::IsFormatAvailableCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("IsFormatAvailable");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_IsFormatAvailable_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_result{};
  ClipboardHost_IsFormatAvailable_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 1, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadAvailableTypes_ProxyToResponder {
 public:
  static ClipboardHost::ReadAvailableTypesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadAvailableTypes_ProxyToResponder> proxy(
        new ClipboardHost_ReadAvailableTypes_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadAvailableTypes_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadAvailableTypes_ProxyToResponder() {
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
  ClipboardHost_ReadAvailableTypes_ProxyToResponder(
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
        << "ClipboardHost::ReadAvailableTypesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::Vector<WTF::String>& in_types, bool in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAvailableTypes_ProxyToResponder);
};

bool ClipboardHost_ReadAvailableTypes_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAvailableTypesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<WTF::String> p_types{};
  bool p_result{};
  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTypes(&p_types))
    success = false;
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_types), 
std::move(p_result));
  return true;
}

void ClipboardHost_ReadAvailableTypes_ProxyToResponder::Run(
    const WTF::Vector<WTF::String>& in_types, bool in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAvailableTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->types)::BaseType::BufferWriter
      types_writer;
  const mojo::internal::ContainerValidateParams types_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
      in_types, buffer, &types_writer, &types_validate_params,
      &serialization_context);
  params->types.Set(
      types_writer.is_null() ? nullptr : types_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->types.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null types in ");
  params->result = in_result;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAvailableTypesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAvailableTypes");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadAvailableTypes_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::Vector<WTF::String> p_types{};
  bool p_result{};
  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTypes(&p_types))
    success = false;
  p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 2, true);
    return false;
  }
  *out_types_ = std::move(p_types);
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadText_ProxyToResponder {
 public:
  static ClipboardHost::ReadTextCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadText_ProxyToResponder> proxy(
        new ClipboardHost_ReadText_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadText_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadText_ProxyToResponder() {
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
  ClipboardHost_ReadText_ProxyToResponder(
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
        << "ClipboardHost::ReadTextCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadText_ProxyToResponder);
};

bool ClipboardHost_ReadText_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadTextCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadText_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadText_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_result{};
  ClipboardHost_ReadText_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_ReadText_ProxyToResponder::Run(
    const WTF::String& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadText_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigString16DataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadTextCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadText");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadText_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadText_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadText_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_result{};
  ClipboardHost_ReadText_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 3, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadHtml_ProxyToResponder {
 public:
  static ClipboardHost::ReadHtmlCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadHtml_ProxyToResponder> proxy(
        new ClipboardHost_ReadHtml_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadHtml_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadHtml_ProxyToResponder() {
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
  ClipboardHost_ReadHtml_ProxyToResponder(
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
        << "ClipboardHost::ReadHtmlCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_markup, const ::blink::KURL& in_url, uint32_t in_fragment_start, uint32_t in_fragment_end);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadHtml_ProxyToResponder);
};

bool ClipboardHost_ReadHtml_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHtmlCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadHtml_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadHtml_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_markup{};
  ::blink::KURL p_url{};
  uint32_t p_fragment_start{};
  uint32_t p_fragment_end{};
  ClipboardHost_ReadHtml_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMarkup(&p_markup))
    success = false;
  if (!input_data_view.ReadUrl(&p_url))
    success = false;
  p_fragment_start = input_data_view.fragment_start();
  p_fragment_end = input_data_view.fragment_end();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_markup), 
std::move(p_url), 
std::move(p_fragment_start), 
std::move(p_fragment_end));
  return true;
}

void ClipboardHost_ReadHtml_ProxyToResponder::Run(
    const WTF::String& in_markup, const ::blink::KURL& in_url, uint32_t in_fragment_start, uint32_t in_fragment_end) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadHtml_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadHtml_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->markup)::BaseType::BufferWriter
      markup_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigString16DataView>(
      in_markup, buffer, &markup_writer, &serialization_context);
  params->markup.Set(
      markup_writer.is_null() ? nullptr : markup_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->markup.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null markup in ");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ");
  params->fragment_start = in_fragment_start;
  params->fragment_end = in_fragment_end;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHtmlCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadHtml");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadHtml_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadHtml_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadHtml_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_markup{};
  ::blink::KURL p_url{};
  uint32_t p_fragment_start{};
  uint32_t p_fragment_end{};
  ClipboardHost_ReadHtml_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMarkup(&p_markup))
    success = false;
  if (!input_data_view.ReadUrl(&p_url))
    success = false;
  p_fragment_start = input_data_view.fragment_start();
  p_fragment_end = input_data_view.fragment_end();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 4, true);
    return false;
  }
  *out_markup_ = std::move(p_markup);
  *out_url_ = std::move(p_url);
  *out_fragment_start_ = std::move(p_fragment_start);
  *out_fragment_end_ = std::move(p_fragment_end);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadRtf_ProxyToResponder {
 public:
  static ClipboardHost::ReadRtfCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadRtf_ProxyToResponder> proxy(
        new ClipboardHost_ReadRtf_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadRtf_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadRtf_ProxyToResponder() {
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
  ClipboardHost_ReadRtf_ProxyToResponder(
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
        << "ClipboardHost::ReadRtfCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadRtf_ProxyToResponder);
};

bool ClipboardHost_ReadRtf_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRtfCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadRtf_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadRtf_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_result{};
  ClipboardHost_ReadRtf_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_ReadRtf_ProxyToResponder::Run(
    const WTF::String& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadRtf_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadRtf_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRtfCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadRtf");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadRtf_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadRtf_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadRtf_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_result{};
  ClipboardHost_ReadRtf_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 5, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadImage_ProxyToResponder {
 public:
  static ClipboardHost::ReadImageCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadImage_ProxyToResponder> proxy(
        new ClipboardHost_ReadImage_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadImage_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadImage_ProxyToResponder() {
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
  ClipboardHost_ReadImage_ProxyToResponder(
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
        << "ClipboardHost::ReadImageCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const SkBitmap& in_image);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadImage_ProxyToResponder);
};

bool ClipboardHost_ReadImage_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadImageCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadImage_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadImage_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SkBitmap p_image{};
  ClipboardHost_ReadImage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadImage(&p_image))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_image));
  return true;
}

void ClipboardHost_ReadImage_ProxyToResponder::Run(
    const SkBitmap& in_image) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadImage_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadImage_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->image)::BaseType::BufferWriter
      image_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_image, buffer, &image_writer, &serialization_context);
  params->image.Set(
      image_writer.is_null() ? nullptr : image_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadImageCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadImage");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadImage_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadImage_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadImage_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  SkBitmap p_image{};
  ClipboardHost_ReadImage_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadImage(&p_image))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 6, true);
    return false;
  }
  *out_image_ = std::move(p_image);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadCustomData_ProxyToResponder {
 public:
  static ClipboardHost::ReadCustomDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadCustomData_ProxyToResponder> proxy(
        new ClipboardHost_ReadCustomData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadCustomData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadCustomData_ProxyToResponder() {
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
  ClipboardHost_ReadCustomData_ProxyToResponder(
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
        << "ClipboardHost::ReadCustomDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const WTF::String& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadCustomData_ProxyToResponder);
};

bool ClipboardHost_ReadCustomData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadCustomDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadCustomData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadCustomData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_result{};
  ClipboardHost_ReadCustomData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 7, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_ReadCustomData_ProxyToResponder::Run(
    const WTF::String& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadCustomData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::ClipboardHost_ReadCustomData_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigString16DataView>(
      in_result, buffer, &result_writer, &serialization_context);
  params->result.Set(
      result_writer.is_null() ? nullptr : result_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadCustomDataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadCustomData");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadCustomData_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadCustomData_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadCustomData_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WTF::String p_result{};
  ClipboardHost_ReadCustomData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 7, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool ClipboardHostStubDispatch::Accept(
    ClipboardHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kClipboardHost_GetSequenceNumber_Name: {
      break;
    }
    case internal::kClipboardHost_IsFormatAvailable_Name: {
      break;
    }
    case internal::kClipboardHost_ReadAvailableTypes_Name: {
      break;
    }
    case internal::kClipboardHost_ReadText_Name: {
      break;
    }
    case internal::kClipboardHost_ReadHtml_Name: {
      break;
    }
    case internal::kClipboardHost_ReadRtf_Name: {
      break;
    }
    case internal::kClipboardHost_ReadImage_Name: {
      break;
    }
    case internal::kClipboardHost_ReadCustomData_Name: {
      break;
    }
    case internal::kClipboardHost_WriteText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteText_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteText_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_text{};
      ClipboardHost_WriteText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteText(
std::move(p_text));
      return true;
    }
    case internal::kClipboardHost_WriteHtml_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteHtml",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteHtml_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteHtml_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_markup{};
      ::blink::KURL p_url{};
      ClipboardHost_WriteHtml_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMarkup(&p_markup))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteHtml(
std::move(p_markup), 
std::move(p_url));
      return true;
    }
    case internal::kClipboardHost_WriteSmartPasteMarker_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteSmartPasteMarker",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteSmartPasteMarker_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteSmartPasteMarker_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardHost_WriteSmartPasteMarker_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteSmartPasteMarker();
      return true;
    }
    case internal::kClipboardHost_WriteCustomData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteCustomData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteCustomData_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteCustomData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::HashMap<WTF::String, WTF::String> p_data{};
      ClipboardHost_WriteCustomData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteCustomData(
std::move(p_data));
      return true;
    }
    case internal::kClipboardHost_WriteBookmark_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteBookmark",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteBookmark_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteBookmark_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_url{};
      WTF::String p_title{};
      ClipboardHost_WriteBookmark_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadTitle(&p_title))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 12, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteBookmark(
std::move(p_url), 
std::move(p_title));
      return true;
    }
    case internal::kClipboardHost_WriteImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteImage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteImage_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteImage_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SkBitmap p_image{};
      ClipboardHost_WriteImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadImage(&p_image))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 13, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteImage(
std::move(p_image));
      return true;
    }
    case internal::kClipboardHost_CommitWrite_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::CommitWrite",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_CommitWrite_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_CommitWrite_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardHost_CommitWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 14, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CommitWrite();
      return true;
    }
  }
  return false;
}

// static
bool ClipboardHostStubDispatch::AcceptWithResponder(
    ClipboardHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kClipboardHost_GetSequenceNumber_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::GetSequenceNumber",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_GetSequenceNumber_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_GetSequenceNumber_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      ClipboardHost_GetSequenceNumber_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 0, false);
        return false;
      }
      ClipboardHost::GetSequenceNumberCallback callback =
          ClipboardHost_GetSequenceNumber_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetSequenceNumber(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_IsFormatAvailable_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::IsFormatAvailable",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_IsFormatAvailable_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_IsFormatAvailable_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardFormat p_format{};
      ClipboardBuffer p_buffer{};
      ClipboardHost_IsFormatAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 1, false);
        return false;
      }
      ClipboardHost::IsFormatAvailableCallback callback =
          ClipboardHost_IsFormatAvailable_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IsFormatAvailable(
std::move(p_format), 
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadAvailableTypes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAvailableTypes",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadAvailableTypes_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadAvailableTypes_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      ClipboardHost_ReadAvailableTypes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 2, false);
        return false;
      }
      ClipboardHost::ReadAvailableTypesCallback callback =
          ClipboardHost_ReadAvailableTypes_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadAvailableTypes(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadText_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadText_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      ClipboardHost_ReadText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 3, false);
        return false;
      }
      ClipboardHost::ReadTextCallback callback =
          ClipboardHost_ReadText_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadText(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadHtml_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHtml",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadHtml_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadHtml_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      ClipboardHost_ReadHtml_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 4, false);
        return false;
      }
      ClipboardHost::ReadHtmlCallback callback =
          ClipboardHost_ReadHtml_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadHtml(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadRtf_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRtf",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadRtf_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadRtf_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      ClipboardHost_ReadRtf_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 5, false);
        return false;
      }
      ClipboardHost::ReadRtfCallback callback =
          ClipboardHost_ReadRtf_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadRtf(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadImage_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadImage",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadImage_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadImage_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      ClipboardHost_ReadImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 6, false);
        return false;
      }
      ClipboardHost::ReadImageCallback callback =
          ClipboardHost_ReadImage_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadImage(
std::move(p_buffer), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadCustomData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadCustomData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadCustomData_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadCustomData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardBuffer p_buffer{};
      WTF::String p_type{};
      ClipboardHost_ReadCustomData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 7, false);
        return false;
      }
      ClipboardHost::ReadCustomDataCallback callback =
          ClipboardHost_ReadCustomData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadCustomData(
std::move(p_buffer), 
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_WriteText_Name: {
      break;
    }
    case internal::kClipboardHost_WriteHtml_Name: {
      break;
    }
    case internal::kClipboardHost_WriteSmartPasteMarker_Name: {
      break;
    }
    case internal::kClipboardHost_WriteCustomData_Name: {
      break;
    }
    case internal::kClipboardHost_WriteBookmark_Name: {
      break;
    }
    case internal::kClipboardHost_WriteImage_Name: {
      break;
    }
    case internal::kClipboardHost_CommitWrite_Name: {
      break;
    }
  }
  return false;
}

bool ClipboardHostRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ClipboardHost RequestValidator");

  switch (message->header()->name) {
    case internal::kClipboardHost_GetSequenceNumber_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_GetSequenceNumber_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_IsFormatAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_IsFormatAvailable_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadAvailableTypes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadAvailableTypes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadHtml_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadHtml_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadRtf_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadRtf_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadImage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadCustomData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadCustomData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteHtml_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteHtml_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteSmartPasteMarker_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteSmartPasteMarker_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteCustomData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteCustomData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteBookmark_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteBookmark_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteImage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteImage_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_CommitWrite_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_CommitWrite_Params_Data>(
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

bool ClipboardHostResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ClipboardHost ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kClipboardHost_GetSequenceNumber_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_IsFormatAvailable_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadAvailableTypes_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadText_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadText_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadHtml_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadHtml_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadRtf_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadRtf_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadImage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadImage_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadCustomData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadCustomData_ResponseParams_Data>(
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