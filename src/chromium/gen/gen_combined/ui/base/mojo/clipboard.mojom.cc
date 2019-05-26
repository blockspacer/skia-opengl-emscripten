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

#include "ui/base/mojo/clipboard.mojom.h"

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

#include "ui/base/mojo/clipboard.mojom-params-data.h"
#include "ui/base/mojo/clipboard.mojom-shared-message-ids.h"

#include "ui/base/mojo/clipboard.mojom-import-headers.h"


#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_JUMBO_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/big_string_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/mojo/clipboard_struct_traits.h"
#endif
namespace ui {
namespace mojom {
const char ClipboardHost::Name_[] = "ui.mojom.ClipboardHost";
bool ClipboardHost::GetSequenceNumber(ui::ClipboardType type, uint64_t* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::IsFormatAvailable(const std::string& format, ui::ClipboardType type, bool* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadAvailableTypes(ui::ClipboardType type, std::vector<base::string16>* out_types, bool* out_contains_filenames) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadText(ui::ClipboardType type, base::string16* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadAsciiText(ui::ClipboardType type, std::string* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadHTML(ui::ClipboardType type, base::string16* out_markup, std::string* out_src_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadRTF(ui::ClipboardType type, std::string* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadImage(ui::ClipboardType type, SkBitmap* out_image) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, base::string16* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadBookmark(base::string16* out_title, std::string* out_url) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::ReadData(const std::string& format, std::string* out_result) {
  NOTREACHED();
  return false;
}
bool ClipboardHost::GetLastModifiedTime(base::Time* out_time) {
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
      bool* result, std::vector<base::string16>* out_types, bool* out_contains_filenames)
      : result_(result), out_types_(out_types), out_contains_filenames_(out_contains_filenames) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::vector<base::string16>* out_types_;
  bool* out_contains_filenames_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAvailableTypes_HandleSyncResponse);
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
      bool* result, base::string16* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::string16* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadText_HandleSyncResponse);
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
class ClipboardHost_ReadAsciiText_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadAsciiText_HandleSyncResponse(
      bool* result, std::string* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAsciiText_HandleSyncResponse);
};

class ClipboardHost_ReadAsciiText_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadAsciiText_ForwardToCallback(
      ClipboardHost::ReadAsciiTextCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadAsciiTextCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAsciiText_ForwardToCallback);
};
class ClipboardHost_ReadHTML_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadHTML_HandleSyncResponse(
      bool* result, base::string16* out_markup, std::string* out_src_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end)
      : result_(result), out_markup_(out_markup), out_src_url_(out_src_url), out_fragment_start_(out_fragment_start), out_fragment_end_(out_fragment_end) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::string16* out_markup_;
  std::string* out_src_url_;
  uint32_t* out_fragment_start_;
  uint32_t* out_fragment_end_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadHTML_HandleSyncResponse);
};

class ClipboardHost_ReadHTML_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadHTML_ForwardToCallback(
      ClipboardHost::ReadHTMLCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadHTMLCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadHTML_ForwardToCallback);
};
class ClipboardHost_ReadRTF_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadRTF_HandleSyncResponse(
      bool* result, std::string* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadRTF_HandleSyncResponse);
};

class ClipboardHost_ReadRTF_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadRTF_ForwardToCallback(
      ClipboardHost::ReadRTFCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadRTFCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadRTF_ForwardToCallback);
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
      bool* result, base::string16* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::string16* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadCustomData_HandleSyncResponse);
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
class ClipboardHost_ReadBookmark_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadBookmark_HandleSyncResponse(
      bool* result, base::string16* out_title, std::string* out_url)
      : result_(result), out_title_(out_title), out_url_(out_url) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::string16* out_title_;
  std::string* out_url_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadBookmark_HandleSyncResponse);
};

class ClipboardHost_ReadBookmark_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadBookmark_ForwardToCallback(
      ClipboardHost::ReadBookmarkCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadBookmarkCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadBookmark_ForwardToCallback);
};
class ClipboardHost_ReadData_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadData_HandleSyncResponse(
      bool* result, std::string* out_result)
      : result_(result), out_result_(out_result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  std::string* out_result_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadData_HandleSyncResponse);
};

class ClipboardHost_ReadData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_ReadData_ForwardToCallback(
      ClipboardHost::ReadDataCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::ReadDataCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadData_ForwardToCallback);
};
class ClipboardHost_GetLastModifiedTime_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_GetLastModifiedTime_HandleSyncResponse(
      bool* result, base::Time* out_time)
      : result_(result), out_time_(out_time) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::Time* out_time_;DISALLOW_COPY_AND_ASSIGN(ClipboardHost_GetLastModifiedTime_HandleSyncResponse);
};

class ClipboardHost_GetLastModifiedTime_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ClipboardHost_GetLastModifiedTime_ForwardToCallback(
      ClipboardHost::GetLastModifiedTimeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ClipboardHost::GetLastModifiedTimeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_GetLastModifiedTime_ForwardToCallback);
};

ClipboardHostProxy::ClipboardHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool ClipboardHostProxy::GetSequenceNumber(
    ui::ClipboardType param_type, uint64_t* out_param_result) {
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
  ::ui::mojom::internal::ClipboardHost_GetSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
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
    ui::ClipboardType in_type, GetSequenceNumberCallback callback) {
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
  ::ui::mojom::internal::ClipboardHost_GetSequenceNumber_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
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
    const std::string& param_format, ui::ClipboardType param_type, bool* out_param_result) {
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
  ::ui::mojom::internal::ClipboardHost_IsFormatAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->format)::BaseType::BufferWriter
      format_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_format, buffer, &format_writer, &serialization_context);
  params->format.Set(
      format_writer.is_null() ? nullptr : format_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->format.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null format in ClipboardHost.IsFormatAvailable request");
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
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
    const std::string& in_format, ui::ClipboardType in_type, IsFormatAvailableCallback callback) {
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
  ::ui::mojom::internal::ClipboardHost_IsFormatAvailable_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->format)::BaseType::BufferWriter
      format_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_format, buffer, &format_writer, &serialization_context);
  params->format.Set(
      format_writer.is_null() ? nullptr : format_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->format.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null format in ClipboardHost.IsFormatAvailable request");
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
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

void ClipboardHostProxy::Clear(
    ui::ClipboardType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::Clear");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_Clear_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_Clear_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("Clear");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
bool ClipboardHostProxy::ReadAvailableTypes(
    ui::ClipboardType param_type, std::vector<base::string16>* out_param_types, bool* out_param_contains_filenames) {
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
  ::ui::mojom::internal::ClipboardHost_ReadAvailableTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAvailableTypes");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadAvailableTypes_HandleSyncResponse(
          &result, out_param_types, out_param_contains_filenames));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadAvailableTypes(
    ui::ClipboardType in_type, ReadAvailableTypesCallback callback) {
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
  ::ui::mojom::internal::ClipboardHost_ReadAvailableTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
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
    ui::ClipboardType param_type, base::string16* out_param_result) {
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
  ::ui::mojom::internal::ClipboardHost_ReadText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
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
    ui::ClipboardType in_type, ReadTextCallback callback) {
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
  ::ui::mojom::internal::ClipboardHost_ReadText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
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
bool ClipboardHostProxy::ReadAsciiText(
    ui::ClipboardType param_type, std::string* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAsciiText");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAsciiText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadAsciiText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAsciiText");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadAsciiText_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadAsciiText(
    ui::ClipboardType in_type, ReadAsciiTextCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAsciiText");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAsciiText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadAsciiText_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAsciiText");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadAsciiText_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadHTML(
    ui::ClipboardType param_type, base::string16* out_param_markup, std::string* out_param_src_url, uint32_t* out_param_fragment_start, uint32_t* out_param_fragment_end) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHTML");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadHTML_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadHTML_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadHTML");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadHTML_HandleSyncResponse(
          &result, out_param_markup, out_param_src_url, out_param_fragment_start, out_param_fragment_end));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadHTML(
    ui::ClipboardType in_type, ReadHTMLCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHTML");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadHTML_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadHTML_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadHTML");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadHTML_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadRTF(
    ui::ClipboardType param_type, std::string* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRTF");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadRTF_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadRTF_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadRTF");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadRTF_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadRTF(
    ui::ClipboardType in_type, ReadRTFCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRTF");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadRTF_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadRTF_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadRTF");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadRTF_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadImage(
    ui::ClipboardType param_type, SkBitmap* out_param_image) {
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
  ::ui::mojom::internal::ClipboardHost_ReadImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_type, &params->type);
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
    ui::ClipboardType in_type, ReadImageCallback callback) {
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
  ::ui::mojom::internal::ClipboardHost_ReadImage_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
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
    ui::ClipboardType param_clipboard_type, const base::string16& param_type, base::string16* out_param_result) {
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
  ::ui::mojom::internal::ClipboardHost_ReadCustomData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      param_clipboard_type, &params->clipboard_type);
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
    ui::ClipboardType in_clipboard_type, const base::string16& in_type, ReadCustomDataCallback callback) {
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
  ::ui::mojom::internal::ClipboardHost_ReadCustomData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_clipboard_type, &params->clipboard_type);
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
bool ClipboardHostProxy::ReadBookmark(
    base::string16* out_param_title, std::string* out_param_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadBookmark");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadBookmark_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadBookmark_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadBookmark");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadBookmark_HandleSyncResponse(
          &result, out_param_title, out_param_url));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadBookmark(
    ReadBookmarkCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadBookmark");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadBookmark_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadBookmark_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadBookmark");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadBookmark_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::ReadData(
    const std::string& param_format, std::string* out_param_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->format)::BaseType::BufferWriter
      format_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      param_format, buffer, &format_writer, &serialization_context);
  params->format.Set(
      format_writer.is_null() ? nullptr : format_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->format.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null format in ClipboardHost.ReadData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadData");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadData_HandleSyncResponse(
          &result, out_param_result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::ReadData(
    const std::string& in_format, ReadDataCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadData");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->format)::BaseType::BufferWriter
      format_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_format, buffer, &format_writer, &serialization_context);
  params->format.Set(
      format_writer.is_null() ? nullptr : format_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->format.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null format in ClipboardHost.ReadData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadData");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_ReadData_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool ClipboardHostProxy::GetLastModifiedTime(
    base::Time* out_param_time) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::GetLastModifiedTime");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_GetLastModifiedTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_GetLastModifiedTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("GetLastModifiedTime");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_GetLastModifiedTime_HandleSyncResponse(
          &result, out_param_time));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void ClipboardHostProxy::GetLastModifiedTime(
    GetLastModifiedTimeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::GetLastModifiedTime");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_GetLastModifiedTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_GetLastModifiedTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("GetLastModifiedTime");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ClipboardHost_GetLastModifiedTime_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ClipboardHostProxy::ClearLastModifiedTime(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ClearLastModifiedTime");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ClearLastModifiedTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ClearLastModifiedTime_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ClearLastModifiedTime");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteText(
    const base::string16& in_text) {
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
  ::ui::mojom::internal::ClipboardHost_WriteText_Params_Data::BufferWriter
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

void ClipboardHostProxy::WriteHTML(
    const base::string16& in_markup, const std::string& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteHTML");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteHTML_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_WriteHTML_Params_Data::BufferWriter
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
      "null markup in ClipboardHost.WriteHTML request");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ClipboardHost.WriteHTML request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteHTML");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteRTF(
    const std::string& in_rtf) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteRTF");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteRTF_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_WriteRTF_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->rtf)::BaseType::BufferWriter
      rtf_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_rtf, buffer, &rtf_writer, &serialization_context);
  params->rtf.Set(
      rtf_writer.is_null() ? nullptr : rtf_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->rtf.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null rtf in ClipboardHost.WriteRTF request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteRTF");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteBookmark(
    const std::string& in_url, const base::string16& in_title) {
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
  ::ui::mojom::internal::ClipboardHost_WriteBookmark_Params_Data::BufferWriter
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

void ClipboardHostProxy::WriteWebSmartPaste(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteWebSmartPaste");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteWebSmartPaste_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_WriteWebSmartPaste_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteWebSmartPaste");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteBitmap(
    const SkBitmap& in_bitmap) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteBitmap");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteBitmap_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_WriteBitmap_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->bitmap)::BaseType::BufferWriter
      bitmap_writer;
  mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
      in_bitmap, buffer, &bitmap_writer, &serialization_context);
  params->bitmap.Set(
      bitmap_writer.is_null() ? nullptr : bitmap_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bitmap.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bitmap in ClipboardHost.WriteBitmap request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteBitmap");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::WriteData(
    const std::string& in_type, const std::string& in_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteData");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_WriteData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_WriteData_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->type)::BaseType::BufferWriter
      type_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_type, buffer, &type_writer, &serialization_context);
  params->type.Set(
      type_writer.is_null() ? nullptr : type_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null type in ClipboardHost.WriteData request");
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigStringDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ClipboardHost.WriteData request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("WriteData");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void ClipboardHostProxy::CommitWrite(
    ui::ClipboardType in_type) {
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
  ::ui::mojom::internal::ClipboardHost_CommitWrite_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ui::mojom::ClipboardType>(
      in_type, &params->type);
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
  ::ui::mojom::internal::ClipboardHost_GetSequenceNumber_ResponseParams_Data::BufferWriter
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
  ::ui::mojom::internal::ClipboardHost_IsFormatAvailable_ResponseParams_Data::BufferWriter
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
      const std::vector<base::string16>& in_types, bool in_contains_filenames);

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
  std::vector<base::string16> p_types{};
  bool p_contains_filenames{};
  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTypes(&p_types))
    success = false;
  p_contains_filenames = input_data_view.contains_filenames();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_types), 
std::move(p_contains_filenames));
  return true;
}

void ClipboardHost_ReadAvailableTypes_ProxyToResponder::Run(
    const std::vector<base::string16>& in_types, bool in_contains_filenames) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAvailableTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadAvailableTypes_ResponseParams_Data::BufferWriter
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
  params->contains_filenames = in_contains_filenames;
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
  std::vector<base::string16> p_types{};
  bool p_contains_filenames{};
  ClipboardHost_ReadAvailableTypes_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTypes(&p_types))
    success = false;
  p_contains_filenames = input_data_view.contains_filenames();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 3, true);
    return false;
  }
  *out_types_ = std::move(p_types);
  *out_contains_filenames_ = std::move(p_contains_filenames);
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
      const base::string16& in_result);

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
  base::string16 p_result{};
  ClipboardHost_ReadText_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_ReadText_ProxyToResponder::Run(
    const base::string16& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadText_ResponseParams_Data::BufferWriter
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
  base::string16 p_result{};
  ClipboardHost_ReadText_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 4, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadAsciiText_ProxyToResponder {
 public:
  static ClipboardHost::ReadAsciiTextCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadAsciiText_ProxyToResponder> proxy(
        new ClipboardHost_ReadAsciiText_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadAsciiText_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadAsciiText_ProxyToResponder() {
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
  ClipboardHost_ReadAsciiText_ProxyToResponder(
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
        << "ClipboardHost::ReadAsciiTextCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadAsciiText_ProxyToResponder);
};

bool ClipboardHost_ReadAsciiText_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAsciiTextCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadAsciiText_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadAsciiText_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_result{};
  ClipboardHost_ReadAsciiText_ResponseParamsDataView input_data_view(params, &serialization_context);
  
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

void ClipboardHost_ReadAsciiText_ProxyToResponder::Run(
    const std::string& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadAsciiText_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadAsciiText_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->result)::BaseType::BufferWriter
      result_writer;
  mojo::internal::Serialize<::mojo_base::mojom::BigStringDataView>(
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAsciiTextCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadAsciiText");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadAsciiText_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadAsciiText_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadAsciiText_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_result{};
  ClipboardHost_ReadAsciiText_ResponseParamsDataView input_data_view(params, &serialization_context);
  
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
class ClipboardHost_ReadHTML_ProxyToResponder {
 public:
  static ClipboardHost::ReadHTMLCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadHTML_ProxyToResponder> proxy(
        new ClipboardHost_ReadHTML_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadHTML_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadHTML_ProxyToResponder() {
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
  ClipboardHost_ReadHTML_ProxyToResponder(
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
        << "ClipboardHost::ReadHTMLCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::string16& in_markup, const std::string& in_src_url, uint32_t in_fragment_start, uint32_t in_fragment_end);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadHTML_ProxyToResponder);
};

bool ClipboardHost_ReadHTML_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHTMLCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadHTML_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadHTML_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::string16 p_markup{};
  std::string p_src_url{};
  uint32_t p_fragment_start{};
  uint32_t p_fragment_end{};
  ClipboardHost_ReadHTML_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMarkup(&p_markup))
    success = false;
  if (!input_data_view.ReadSrcUrl(&p_src_url))
    success = false;
  p_fragment_start = input_data_view.fragment_start();
  p_fragment_end = input_data_view.fragment_end();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 6, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_markup), 
std::move(p_src_url), 
std::move(p_fragment_start), 
std::move(p_fragment_end));
  return true;
}

void ClipboardHost_ReadHTML_ProxyToResponder::Run(
    const base::string16& in_markup, const std::string& in_src_url, uint32_t in_fragment_start, uint32_t in_fragment_end) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadHTML_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadHTML_ResponseParams_Data::BufferWriter
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
  typename decltype(params->src_url)::BaseType::BufferWriter
      src_url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_src_url, buffer, &src_url_writer, &serialization_context);
  params->src_url.Set(
      src_url_writer.is_null() ? nullptr : src_url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->src_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null src_url in ");
  params->fragment_start = in_fragment_start;
  params->fragment_end = in_fragment_end;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHTMLCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadHTML");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadHTML_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadHTML_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadHTML_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::string16 p_markup{};
  std::string p_src_url{};
  uint32_t p_fragment_start{};
  uint32_t p_fragment_end{};
  ClipboardHost_ReadHTML_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMarkup(&p_markup))
    success = false;
  if (!input_data_view.ReadSrcUrl(&p_src_url))
    success = false;
  p_fragment_start = input_data_view.fragment_start();
  p_fragment_end = input_data_view.fragment_end();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 6, true);
    return false;
  }
  *out_markup_ = std::move(p_markup);
  *out_src_url_ = std::move(p_src_url);
  *out_fragment_start_ = std::move(p_fragment_start);
  *out_fragment_end_ = std::move(p_fragment_end);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadRTF_ProxyToResponder {
 public:
  static ClipboardHost::ReadRTFCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadRTF_ProxyToResponder> proxy(
        new ClipboardHost_ReadRTF_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadRTF_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadRTF_ProxyToResponder() {
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
  ClipboardHost_ReadRTF_ProxyToResponder(
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
        << "ClipboardHost::ReadRTFCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadRTF_ProxyToResponder);
};

bool ClipboardHost_ReadRTF_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRTFCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadRTF_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadRTF_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_result{};
  ClipboardHost_ReadRTF_ResponseParamsDataView input_data_view(params, &serialization_context);
  
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

void ClipboardHost_ReadRTF_ProxyToResponder::Run(
    const std::string& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadRTF_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadRTF_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRTFCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadRTF");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadRTF_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadRTF_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadRTF_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_result{};
  ClipboardHost_ReadRTF_ResponseParamsDataView input_data_view(params, &serialization_context);
  
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
        ClipboardHost::Name_, 8, true);
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
  ::ui::mojom::internal::ClipboardHost_ReadImage_ResponseParams_Data::BufferWriter
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
        ClipboardHost::Name_, 8, true);
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
      const base::string16& in_result);

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
  base::string16 p_result{};
  ClipboardHost_ReadCustomData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 9, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_ReadCustomData_ProxyToResponder::Run(
    const base::string16& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadCustomData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadCustomData_ResponseParams_Data::BufferWriter
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
  base::string16 p_result{};
  ClipboardHost_ReadCustomData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 9, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadBookmark_ProxyToResponder {
 public:
  static ClipboardHost::ReadBookmarkCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadBookmark_ProxyToResponder> proxy(
        new ClipboardHost_ReadBookmark_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadBookmark_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadBookmark_ProxyToResponder() {
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
  ClipboardHost_ReadBookmark_ProxyToResponder(
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
        << "ClipboardHost::ReadBookmarkCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::string16& in_title, const std::string& in_url);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadBookmark_ProxyToResponder);
};

bool ClipboardHost_ReadBookmark_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadBookmarkCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadBookmark_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadBookmark_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::string16 p_title{};
  std::string p_url{};
  ClipboardHost_ReadBookmark_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTitle(&p_title))
    success = false;
  if (!input_data_view.ReadUrl(&p_url))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 10, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_title), 
std::move(p_url));
  return true;
}

void ClipboardHost_ReadBookmark_ProxyToResponder::Run(
    const base::string16& in_title, const std::string& in_url) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadBookmark_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadBookmark_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->title)::BaseType::BufferWriter
      title_writer;
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_title, buffer, &title_writer, &serialization_context);
  params->title.Set(
      title_writer.is_null() ? nullptr : title_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->title.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null title in ");
  typename decltype(params->url)::BaseType::BufferWriter
      url_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_url, buffer, &url_writer, &serialization_context);
  params->url.Set(
      url_writer.is_null() ? nullptr : url_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadBookmarkCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadBookmark");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadBookmark_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadBookmark_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadBookmark_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::string16 p_title{};
  std::string p_url{};
  ClipboardHost_ReadBookmark_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTitle(&p_title))
    success = false;
  if (!input_data_view.ReadUrl(&p_url))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 10, true);
    return false;
  }
  *out_title_ = std::move(p_title);
  *out_url_ = std::move(p_url);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_ReadData_ProxyToResponder {
 public:
  static ClipboardHost::ReadDataCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_ReadData_ProxyToResponder> proxy(
        new ClipboardHost_ReadData_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_ReadData_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_ReadData_ProxyToResponder() {
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
  ClipboardHost_ReadData_ProxyToResponder(
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
        << "ClipboardHost::ReadDataCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const std::string& in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_ReadData_ProxyToResponder);
};

bool ClipboardHost_ReadData_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadDataCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadData_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_ReadData_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_result{};
  ClipboardHost_ReadData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 11, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void ClipboardHost_ReadData_ProxyToResponder::Run(
    const std::string& in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_ReadData_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_ReadData_ResponseParams_Data::BufferWriter
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
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadDataCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("ReadData");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_ReadData_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_ReadData_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_ReadData_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::string p_result{};
  ClipboardHost_ReadData_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 11, true);
    return false;
  }
  *out_result_ = std::move(p_result);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class ClipboardHost_GetLastModifiedTime_ProxyToResponder {
 public:
  static ClipboardHost::GetLastModifiedTimeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ClipboardHost_GetLastModifiedTime_ProxyToResponder> proxy(
        new ClipboardHost_GetLastModifiedTime_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ClipboardHost_GetLastModifiedTime_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ClipboardHost_GetLastModifiedTime_ProxyToResponder() {
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
  ClipboardHost_GetLastModifiedTime_ProxyToResponder(
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
        << "ClipboardHost::GetLastModifiedTimeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::Time in_time);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHost_GetLastModifiedTime_ProxyToResponder);
};

bool ClipboardHost_GetLastModifiedTime_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ClipboardHost::GetLastModifiedTimeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Time p_time{};
  ClipboardHost_GetLastModifiedTime_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTime(&p_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 12, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_time));
  return true;
}

void ClipboardHost_GetLastModifiedTime_ProxyToResponder::Run(
    base::Time in_time) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kClipboardHost_GetLastModifiedTime_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ui::mojom::internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->time)::BaseType::BufferWriter
      time_writer;
  mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
      in_time, buffer, &time_writer, &serialization_context);
  params->time.Set(
      time_writer.is_null() ? nullptr : time_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->time.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null time in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::GetLastModifiedTimeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ClipboardHost::Name_);
  message.set_method_name("GetLastModifiedTime");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool ClipboardHost_GetLastModifiedTime_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data* params =
      reinterpret_cast<internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::Time p_time{};
  ClipboardHost_GetLastModifiedTime_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadTime(&p_time))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ClipboardHost::Name_, 12, true);
    return false;
  }
  *out_time_ = std::move(p_time);
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
    case internal::kClipboardHost_Clear_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::Clear",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_Clear_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_Clear_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::ClipboardType p_type{};
      ClipboardHost_Clear_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Clear(
std::move(p_type));
      return true;
    }
    case internal::kClipboardHost_ReadAvailableTypes_Name: {
      break;
    }
    case internal::kClipboardHost_ReadText_Name: {
      break;
    }
    case internal::kClipboardHost_ReadAsciiText_Name: {
      break;
    }
    case internal::kClipboardHost_ReadHTML_Name: {
      break;
    }
    case internal::kClipboardHost_ReadRTF_Name: {
      break;
    }
    case internal::kClipboardHost_ReadImage_Name: {
      break;
    }
    case internal::kClipboardHost_ReadCustomData_Name: {
      break;
    }
    case internal::kClipboardHost_ReadBookmark_Name: {
      break;
    }
    case internal::kClipboardHost_ReadData_Name: {
      break;
    }
    case internal::kClipboardHost_GetLastModifiedTime_Name: {
      break;
    }
    case internal::kClipboardHost_ClearLastModifiedTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ClearLastModifiedTime",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_ClearLastModifiedTime_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_ClearLastModifiedTime_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardHost_ClearLastModifiedTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 13, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ClearLastModifiedTime();
      return true;
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
      base::string16 p_text{};
      ClipboardHost_WriteText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadText(&p_text))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 14, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteText(
std::move(p_text));
      return true;
    }
    case internal::kClipboardHost_WriteHTML_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteHTML",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteHTML_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteHTML_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::string16 p_markup{};
      std::string p_url{};
      ClipboardHost_WriteHTML_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadMarkup(&p_markup))
        success = false;
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 15, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteHTML(
std::move(p_markup), 
std::move(p_url));
      return true;
    }
    case internal::kClipboardHost_WriteRTF_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteRTF",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteRTF_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteRTF_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_rtf{};
      ClipboardHost_WriteRTF_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRtf(&p_rtf))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 16, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteRTF(
std::move(p_rtf));
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
      std::string p_url{};
      base::string16 p_title{};
      ClipboardHost_WriteBookmark_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadTitle(&p_title))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 17, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteBookmark(
std::move(p_url), 
std::move(p_title));
      return true;
    }
    case internal::kClipboardHost_WriteWebSmartPaste_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteWebSmartPaste",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteWebSmartPaste_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteWebSmartPaste_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardHost_WriteWebSmartPaste_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 18, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteWebSmartPaste();
      return true;
    }
    case internal::kClipboardHost_WriteBitmap_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteBitmap",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteBitmap_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteBitmap_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      SkBitmap p_bitmap{};
      ClipboardHost_WriteBitmap_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadBitmap(&p_bitmap))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 19, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteBitmap(
std::move(p_bitmap));
      return true;
    }
    case internal::kClipboardHost_WriteData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::WriteData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ClipboardHost_WriteData_Params_Data* params =
          reinterpret_cast<internal::ClipboardHost_WriteData_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_type{};
      std::string p_data{};
      ClipboardHost_WriteData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadData(&p_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 20, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->WriteData(
std::move(p_type), 
std::move(p_data));
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
      ui::ClipboardType p_type{};
      ClipboardHost_CommitWrite_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 21, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CommitWrite(
std::move(p_type));
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
      ui::ClipboardType p_type{};
      ClipboardHost_GetSequenceNumber_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
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
std::move(p_type), std::move(callback));
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
      std::string p_format{};
      ui::ClipboardType p_type{};
      ClipboardHost_IsFormatAvailable_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!input_data_view.ReadType(&p_type))
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
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_Clear_Name: {
      break;
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
      ui::ClipboardType p_type{};
      ClipboardHost_ReadAvailableTypes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 3, false);
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
std::move(p_type), std::move(callback));
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
      ui::ClipboardType p_type{};
      ClipboardHost_ReadText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 4, false);
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
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadAsciiText_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadAsciiText",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadAsciiText_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadAsciiText_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::ClipboardType p_type{};
      ClipboardHost_ReadAsciiText_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 5, false);
        return false;
      }
      ClipboardHost::ReadAsciiTextCallback callback =
          ClipboardHost_ReadAsciiText_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadAsciiText(
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadHTML_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadHTML",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadHTML_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadHTML_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::ClipboardType p_type{};
      ClipboardHost_ReadHTML_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 6, false);
        return false;
      }
      ClipboardHost::ReadHTMLCallback callback =
          ClipboardHost_ReadHTML_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadHTML(
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadRTF_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadRTF",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadRTF_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadRTF_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ui::ClipboardType p_type{};
      ClipboardHost_ReadRTF_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 7, false);
        return false;
      }
      ClipboardHost::ReadRTFCallback callback =
          ClipboardHost_ReadRTF_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadRTF(
std::move(p_type), std::move(callback));
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
      ui::ClipboardType p_type{};
      ClipboardHost_ReadImage_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 8, false);
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
std::move(p_type), std::move(callback));
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
      ui::ClipboardType p_clipboard_type{};
      base::string16 p_type{};
      ClipboardHost_ReadCustomData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadClipboardType(&p_clipboard_type))
        success = false;
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 9, false);
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
std::move(p_clipboard_type), 
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadBookmark_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadBookmark",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadBookmark_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadBookmark_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardHost_ReadBookmark_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 10, false);
        return false;
      }
      ClipboardHost::ReadBookmarkCallback callback =
          ClipboardHost_ReadBookmark_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadBookmark(std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ReadData_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::ReadData",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_ReadData_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_ReadData_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_format{};
      ClipboardHost_ReadData_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFormat(&p_format))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 11, false);
        return false;
      }
      ClipboardHost::ReadDataCallback callback =
          ClipboardHost_ReadData_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReadData(
std::move(p_format), std::move(callback));
      return true;
    }
    case internal::kClipboardHost_GetLastModifiedTime_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ClipboardHost::GetLastModifiedTime",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ClipboardHost_GetLastModifiedTime_Params_Data* params =
          reinterpret_cast<
              internal::ClipboardHost_GetLastModifiedTime_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ClipboardHost_GetLastModifiedTime_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ClipboardHost::Name_, 12, false);
        return false;
      }
      ClipboardHost::GetLastModifiedTimeCallback callback =
          ClipboardHost_GetLastModifiedTime_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetLastModifiedTime(std::move(callback));
      return true;
    }
    case internal::kClipboardHost_ClearLastModifiedTime_Name: {
      break;
    }
    case internal::kClipboardHost_WriteText_Name: {
      break;
    }
    case internal::kClipboardHost_WriteHTML_Name: {
      break;
    }
    case internal::kClipboardHost_WriteRTF_Name: {
      break;
    }
    case internal::kClipboardHost_WriteBookmark_Name: {
      break;
    }
    case internal::kClipboardHost_WriteWebSmartPaste_Name: {
      break;
    }
    case internal::kClipboardHost_WriteBitmap_Name: {
      break;
    }
    case internal::kClipboardHost_WriteData_Name: {
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
    case internal::kClipboardHost_Clear_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_Clear_Params_Data>(
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
    case internal::kClipboardHost_ReadAsciiText_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadAsciiText_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadHTML_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadHTML_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadRTF_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadRTF_Params_Data>(
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
    case internal::kClipboardHost_ReadBookmark_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadBookmark_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadData_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_GetLastModifiedTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_GetLastModifiedTime_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ClearLastModifiedTime_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ClearLastModifiedTime_Params_Data>(
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
    case internal::kClipboardHost_WriteHTML_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteHTML_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteRTF_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteRTF_Params_Data>(
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
    case internal::kClipboardHost_WriteWebSmartPaste_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteWebSmartPaste_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteBitmap_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteBitmap_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_WriteData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_WriteData_Params_Data>(
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
    case internal::kClipboardHost_ReadAsciiText_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadAsciiText_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadHTML_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadHTML_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadRTF_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadRTF_ResponseParams_Data>(
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
    case internal::kClipboardHost_ReadBookmark_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadBookmark_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_ReadData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_ReadData_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kClipboardHost_GetLastModifiedTime_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ClipboardHost_GetLastModifiedTime_ResponseParams_Data>(
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
}  // namespace ui

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif