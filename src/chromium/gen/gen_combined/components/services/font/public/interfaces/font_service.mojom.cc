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

#include "components/services/font/public/interfaces/font_service.mojom.h"

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

#include "components/services/font/public/interfaces/font_service.mojom-params-data.h"
#include "components/services/font/public/interfaces/font_service.mojom-shared-message-ids.h"

#include "components/services/font/public/interfaces/font_service.mojom-import-headers.h"


#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif
namespace font_service {
namespace mojom {
TypefaceStyle::TypefaceStyle()
    : weight(),
      width(),
      slant() {}

TypefaceStyle::TypefaceStyle(
    uint16_t weight_in,
    uint8_t width_in,
    TypefaceSlant slant_in)
    : weight(std::move(weight_in)),
      width(std::move(width_in)),
      slant(std::move(slant_in)) {}

TypefaceStyle::~TypefaceStyle() = default;
size_t TypefaceStyle::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->weight);
  seed = mojo::internal::Hash(seed, this->width);
  seed = mojo::internal::Hash(seed, this->slant);
  return seed;
}

bool TypefaceStyle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FontIdentity::FontIdentity()
    : id(),
      ttc_index(),
      str_representation() {}

FontIdentity::FontIdentity(
    uint32_t id_in,
    int32_t ttc_index_in,
    const std::string& str_representation_in)
    : id(std::move(id_in)),
      ttc_index(std::move(ttc_index_in)),
      str_representation(std::move(str_representation_in)) {}

FontIdentity::~FontIdentity() = default;
size_t FontIdentity::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->id);
  seed = mojo::internal::Hash(seed, this->ttc_index);
  seed = mojo::internal::Hash(seed, this->str_representation);
  return seed;
}

bool FontIdentity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FontRenderStyle::FontRenderStyle()
    : use_bitmaps(),
      use_autohint(),
      use_hinting(),
      hint_style(),
      use_antialias(),
      use_subpixel_rendering(),
      use_subpixel_positioning() {}

FontRenderStyle::FontRenderStyle(
    RenderStyleSwitch use_bitmaps_in,
    RenderStyleSwitch use_autohint_in,
    RenderStyleSwitch use_hinting_in,
    uint8_t hint_style_in,
    RenderStyleSwitch use_antialias_in,
    RenderStyleSwitch use_subpixel_rendering_in,
    RenderStyleSwitch use_subpixel_positioning_in)
    : use_bitmaps(std::move(use_bitmaps_in)),
      use_autohint(std::move(use_autohint_in)),
      use_hinting(std::move(use_hinting_in)),
      hint_style(std::move(hint_style_in)),
      use_antialias(std::move(use_antialias_in)),
      use_subpixel_rendering(std::move(use_subpixel_rendering_in)),
      use_subpixel_positioning(std::move(use_subpixel_positioning_in)) {}

FontRenderStyle::~FontRenderStyle() = default;
size_t FontRenderStyle::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->use_bitmaps);
  seed = mojo::internal::Hash(seed, this->use_autohint);
  seed = mojo::internal::Hash(seed, this->use_hinting);
  seed = mojo::internal::Hash(seed, this->hint_style);
  seed = mojo::internal::Hash(seed, this->use_antialias);
  seed = mojo::internal::Hash(seed, this->use_subpixel_rendering);
  seed = mojo::internal::Hash(seed, this->use_subpixel_positioning);
  return seed;
}

bool FontRenderStyle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char FontService::Name_[] = "font_service.mojom.FontService";

class FontService_MatchFamilyName_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_MatchFamilyName_ForwardToCallback(
      FontService::MatchFamilyNameCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::MatchFamilyNameCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFamilyName_ForwardToCallback);
};

class FontService_OpenStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_OpenStream_ForwardToCallback(
      FontService::OpenStreamCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::OpenStreamCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_OpenStream_ForwardToCallback);
};

class FontService_FallbackFontForCharacter_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_FallbackFontForCharacter_ForwardToCallback(
      FontService::FallbackFontForCharacterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::FallbackFontForCharacterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_FallbackFontForCharacter_ForwardToCallback);
};

class FontService_FontRenderStyleForStrike_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_FontRenderStyleForStrike_ForwardToCallback(
      FontService::FontRenderStyleForStrikeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::FontRenderStyleForStrikeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_FontRenderStyleForStrike_ForwardToCallback);
};

class FontService_MatchFontByPostscriptNameOrFullFontName_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_MatchFontByPostscriptNameOrFullFontName_ForwardToCallback(
      FontService::MatchFontByPostscriptNameOrFullFontNameCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::MatchFontByPostscriptNameOrFullFontNameCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFontByPostscriptNameOrFullFontName_ForwardToCallback);
};

class FontService_MatchFontWithFallback_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FontService_MatchFontWithFallback_ForwardToCallback(
      FontService::MatchFontWithFallbackCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  FontService::MatchFontWithFallbackCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFontWithFallback_ForwardToCallback);
};

FontServiceProxy::FontServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FontServiceProxy::MatchFamilyName(
    const std::string& in_family_name, TypefaceStylePtr in_style, MatchFamilyNameCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontService::MatchFamilyName");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFamilyName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFamilyName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->family_name)::BaseType::BufferWriter
      family_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family_name, buffer, &family_name_writer, &serialization_context);
  params->family_name.Set(
      family_name_writer.is_null() ? nullptr : family_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family_name in FontService.MatchFamilyName request");
  typename decltype(params->style)::BaseType::BufferWriter
      style_writer;
  mojo::internal::Serialize<::font_service::mojom::TypefaceStyleDataView>(
      in_style, buffer, &style_writer, &serialization_context);
  params->style.Set(
      style_writer.is_null() ? nullptr : style_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->style.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null style in FontService.MatchFamilyName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("MatchFamilyName");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_MatchFamilyName_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FontServiceProxy::OpenStream(
    uint32_t in_id_number, OpenStreamCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontService::OpenStream");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_OpenStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_OpenStream_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->id_number = in_id_number;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("OpenStream");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_OpenStream_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FontServiceProxy::FallbackFontForCharacter(
    uint32_t in_character, const std::string& in_locale, FallbackFontForCharacterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontService::FallbackFontForCharacter");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_FallbackFontForCharacter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_FallbackFontForCharacter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->character = in_character;
  typename decltype(params->locale)::BaseType::BufferWriter
      locale_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_locale, buffer, &locale_writer, &serialization_context);
  params->locale.Set(
      locale_writer.is_null() ? nullptr : locale_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->locale.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null locale in FontService.FallbackFontForCharacter request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("FallbackFontForCharacter");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_FallbackFontForCharacter_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FontServiceProxy::FontRenderStyleForStrike(
    const std::string& in_family, uint32_t in_size, bool in_is_italic, bool in_is_bold, float in_device_scale_factor, FontRenderStyleForStrikeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontService::FontRenderStyleForStrike");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_FontRenderStyleForStrike_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_FontRenderStyleForStrike_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->family)::BaseType::BufferWriter
      family_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family, buffer, &family_writer, &serialization_context);
  params->family.Set(
      family_writer.is_null() ? nullptr : family_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family in FontService.FontRenderStyleForStrike request");
  params->size = in_size;
  params->is_italic = in_is_italic;
  params->is_bold = in_is_bold;
  params->device_scale_factor = in_device_scale_factor;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("FontRenderStyleForStrike");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_FontRenderStyleForStrike_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FontServiceProxy::MatchFontByPostscriptNameOrFullFontName(
    const std::string& in_postscript_name_or_full_font_name, MatchFontByPostscriptNameOrFullFontNameCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontService::MatchFontByPostscriptNameOrFullFontName");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFontByPostscriptNameOrFullFontName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->postscript_name_or_full_font_name)::BaseType::BufferWriter
      postscript_name_or_full_font_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_postscript_name_or_full_font_name, buffer, &postscript_name_or_full_font_name_writer, &serialization_context);
  params->postscript_name_or_full_font_name.Set(
      postscript_name_or_full_font_name_writer.is_null() ? nullptr : postscript_name_or_full_font_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->postscript_name_or_full_font_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null postscript_name_or_full_font_name in FontService.MatchFontByPostscriptNameOrFullFontName request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("MatchFontByPostscriptNameOrFullFontName");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_MatchFontByPostscriptNameOrFullFontName_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void FontServiceProxy::MatchFontWithFallback(
    const std::string& in_family, bool in_is_bold, bool in_is_italic, uint32_t in_charset, uint32_t in_fallback_family_type, MatchFontWithFallbackCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::FontService::MatchFontWithFallback");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFontWithFallback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFontWithFallback_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->family)::BaseType::BufferWriter
      family_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family, buffer, &family_writer, &serialization_context);
  params->family.Set(
      family_writer.is_null() ? nullptr : family_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family in FontService.MatchFontWithFallback request");
  params->is_bold = in_is_bold;
  params->is_italic = in_is_italic;
  params->charset = in_charset;
  params->fallback_family_type = in_fallback_family_type;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("MatchFontWithFallback");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FontService_MatchFontWithFallback_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class FontService_MatchFamilyName_ProxyToResponder {
 public:
  static FontService::MatchFamilyNameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_MatchFamilyName_ProxyToResponder> proxy(
        new FontService_MatchFamilyName_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_MatchFamilyName_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_MatchFamilyName_ProxyToResponder() {
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
  FontService_MatchFamilyName_ProxyToResponder(
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
        << "FontService::MatchFamilyNameCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FontIdentityPtr in_identity, const std::string& in_family_name, TypefaceStylePtr in_style);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFamilyName_ProxyToResponder);
};

bool FontService_MatchFamilyName_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontService::MatchFamilyNameCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_MatchFamilyName_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_MatchFamilyName_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FontIdentityPtr p_identity{};
  std::string p_family_name{};
  TypefaceStylePtr p_style{};
  FontService_MatchFamilyName_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!input_data_view.ReadFamilyName(&p_family_name))
    success = false;
  if (!input_data_view.ReadStyle(&p_style))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_identity), 
std::move(p_family_name), 
std::move(p_style));
  return true;
}

void FontService_MatchFamilyName_ProxyToResponder::Run(
    FontIdentityPtr in_identity, const std::string& in_family_name, TypefaceStylePtr in_style) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFamilyName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFamilyName_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::font_service::mojom::FontIdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  typename decltype(params->family_name)::BaseType::BufferWriter
      family_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family_name, buffer, &family_name_writer, &serialization_context);
  params->family_name.Set(
      family_name_writer.is_null() ? nullptr : family_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family_name in ");
  typename decltype(params->style)::BaseType::BufferWriter
      style_writer;
  mojo::internal::Serialize<::font_service::mojom::TypefaceStyleDataView>(
      in_style, buffer, &style_writer, &serialization_context);
  params->style.Set(
      style_writer.is_null() ? nullptr : style_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->style.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null style in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontService::MatchFamilyNameCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("MatchFamilyName");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FontService_OpenStream_ProxyToResponder {
 public:
  static FontService::OpenStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_OpenStream_ProxyToResponder> proxy(
        new FontService_OpenStream_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_OpenStream_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_OpenStream_ProxyToResponder() {
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
  FontService_OpenStream_ProxyToResponder(
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
        << "FontService::OpenStreamCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_font_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_OpenStream_ProxyToResponder);
};

bool FontService_OpenStream_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontService::OpenStreamCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_OpenStream_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_OpenStream_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_font_handle{};
  FontService_OpenStream_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFontHandle(&p_font_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontService::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_font_handle));
  return true;
}

void FontService_OpenStream_ProxyToResponder::Run(
    base::File in_font_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_OpenStream_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_OpenStream_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->font_handle)::BaseType::BufferWriter
      font_handle_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_font_handle, buffer, &font_handle_writer, &serialization_context);
  params->font_handle.Set(
      font_handle_writer.is_null() ? nullptr : font_handle_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontService::OpenStreamCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("OpenStream");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FontService_FallbackFontForCharacter_ProxyToResponder {
 public:
  static FontService::FallbackFontForCharacterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_FallbackFontForCharacter_ProxyToResponder> proxy(
        new FontService_FallbackFontForCharacter_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_FallbackFontForCharacter_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_FallbackFontForCharacter_ProxyToResponder() {
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
  FontService_FallbackFontForCharacter_ProxyToResponder(
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
        << "FontService::FallbackFontForCharacterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FontIdentityPtr in_identity, const std::string& in_family_name, bool in_is_bold, bool in_is_italic);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_FallbackFontForCharacter_ProxyToResponder);
};

bool FontService_FallbackFontForCharacter_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontService::FallbackFontForCharacterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_FallbackFontForCharacter_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_FallbackFontForCharacter_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FontIdentityPtr p_identity{};
  std::string p_family_name{};
  bool p_is_bold{};
  bool p_is_italic{};
  FontService_FallbackFontForCharacter_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!input_data_view.ReadFamilyName(&p_family_name))
    success = false;
  p_is_bold = input_data_view.is_bold();
  p_is_italic = input_data_view.is_italic();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontService::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_identity), 
std::move(p_family_name), 
std::move(p_is_bold), 
std::move(p_is_italic));
  return true;
}

void FontService_FallbackFontForCharacter_ProxyToResponder::Run(
    FontIdentityPtr in_identity, const std::string& in_family_name, bool in_is_bold, bool in_is_italic) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_FallbackFontForCharacter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_FallbackFontForCharacter_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::font_service::mojom::FontIdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  typename decltype(params->family_name)::BaseType::BufferWriter
      family_name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_family_name, buffer, &family_name_writer, &serialization_context);
  params->family_name.Set(
      family_name_writer.is_null() ? nullptr : family_name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->family_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null family_name in ");
  params->is_bold = in_is_bold;
  params->is_italic = in_is_italic;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontService::FallbackFontForCharacterCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("FallbackFontForCharacter");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FontService_FontRenderStyleForStrike_ProxyToResponder {
 public:
  static FontService::FontRenderStyleForStrikeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_FontRenderStyleForStrike_ProxyToResponder> proxy(
        new FontService_FontRenderStyleForStrike_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_FontRenderStyleForStrike_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_FontRenderStyleForStrike_ProxyToResponder() {
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
  FontService_FontRenderStyleForStrike_ProxyToResponder(
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
        << "FontService::FontRenderStyleForStrikeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FontRenderStylePtr in_font_render_style);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_FontRenderStyleForStrike_ProxyToResponder);
};

bool FontService_FontRenderStyleForStrike_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontService::FontRenderStyleForStrikeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_FontRenderStyleForStrike_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_FontRenderStyleForStrike_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FontRenderStylePtr p_font_render_style{};
  FontService_FontRenderStyleForStrike_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFontRenderStyle(&p_font_render_style))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontService::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_font_render_style));
  return true;
}

void FontService_FontRenderStyleForStrike_ProxyToResponder::Run(
    FontRenderStylePtr in_font_render_style) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_FontRenderStyleForStrike_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_FontRenderStyleForStrike_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->font_render_style)::BaseType::BufferWriter
      font_render_style_writer;
  mojo::internal::Serialize<::font_service::mojom::FontRenderStyleDataView>(
      in_font_render_style, buffer, &font_render_style_writer, &serialization_context);
  params->font_render_style.Set(
      font_render_style_writer.is_null() ? nullptr : font_render_style_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontService::FontRenderStyleForStrikeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("FontRenderStyleForStrike");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder {
 public:
  static FontService::MatchFontByPostscriptNameOrFullFontNameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder> proxy(
        new FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder() {
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
  FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder(
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
        << "FontService::MatchFontByPostscriptNameOrFullFontNameCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      FontIdentityPtr in_identity);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder);
};

bool FontService_MatchFontByPostscriptNameOrFullFontName_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontService::MatchFontByPostscriptNameOrFullFontNameCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  FontIdentityPtr p_identity{};
  FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadIdentity(&p_identity))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontService::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_identity));
  return true;
}

void FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder::Run(
    FontIdentityPtr in_identity) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFontByPostscriptNameOrFullFontName_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->identity)::BaseType::BufferWriter
      identity_writer;
  mojo::internal::Serialize<::font_service::mojom::FontIdentityDataView>(
      in_identity, buffer, &identity_writer, &serialization_context);
  params->identity.Set(
      identity_writer.is_null() ? nullptr : identity_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontService::MatchFontByPostscriptNameOrFullFontNameCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("MatchFontByPostscriptNameOrFullFontName");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class FontService_MatchFontWithFallback_ProxyToResponder {
 public:
  static FontService::MatchFontWithFallbackCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FontService_MatchFontWithFallback_ProxyToResponder> proxy(
        new FontService_MatchFontWithFallback_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&FontService_MatchFontWithFallback_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FontService_MatchFontWithFallback_ProxyToResponder() {
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
  FontService_MatchFontWithFallback_ProxyToResponder(
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
        << "FontService::MatchFontWithFallbackCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::File in_font_file_handle);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(FontService_MatchFontWithFallback_ProxyToResponder);
};

bool FontService_MatchFontWithFallback_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::FontService::MatchFontWithFallbackCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::FontService_MatchFontWithFallback_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FontService_MatchFontWithFallback_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::File p_font_file_handle{};
  FontService_MatchFontWithFallback_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadFontFileHandle(&p_font_file_handle))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FontService::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_font_file_handle));
  return true;
}

void FontService_MatchFontWithFallback_ProxyToResponder::Run(
    base::File in_font_file_handle) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kFontService_MatchFontWithFallback_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::font_service::mojom::internal::FontService_MatchFontWithFallback_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->font_file_handle)::BaseType::BufferWriter
      font_file_handle_writer;
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_font_file_handle, buffer, &font_file_handle_writer, &serialization_context);
  params->font_file_handle.Set(
      font_file_handle_writer.is_null() ? nullptr : font_file_handle_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::FontService::MatchFontWithFallbackCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FontService::Name_);
  message.set_method_name("MatchFontWithFallback");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool FontServiceStubDispatch::Accept(
    FontService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
      break;
    }
    case internal::kFontService_OpenStream_Name: {
      break;
    }
    case internal::kFontService_FallbackFontForCharacter_Name: {
      break;
    }
    case internal::kFontService_FontRenderStyleForStrike_Name: {
      break;
    }
    case internal::kFontService_MatchFontByPostscriptNameOrFullFontName_Name: {
      break;
    }
    case internal::kFontService_MatchFontWithFallback_Name: {
      break;
    }
  }
  return false;
}

// static
bool FontServiceStubDispatch::AcceptWithResponder(
    FontService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontService::MatchFamilyName",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_MatchFamilyName_Params_Data* params =
          reinterpret_cast<
              internal::FontService_MatchFamilyName_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_family_name{};
      TypefaceStylePtr p_style{};
      FontService_MatchFamilyName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFamilyName(&p_family_name))
        success = false;
      if (!input_data_view.ReadStyle(&p_style))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontService::Name_, 0, false);
        return false;
      }
      FontService::MatchFamilyNameCallback callback =
          FontService_MatchFamilyName_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MatchFamilyName(
std::move(p_family_name), 
std::move(p_style), std::move(callback));
      return true;
    }
    case internal::kFontService_OpenStream_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontService::OpenStream",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_OpenStream_Params_Data* params =
          reinterpret_cast<
              internal::FontService_OpenStream_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_id_number{};
      FontService_OpenStream_ParamsDataView input_data_view(params, &serialization_context);
      
      p_id_number = input_data_view.id_number();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontService::Name_, 1, false);
        return false;
      }
      FontService::OpenStreamCallback callback =
          FontService_OpenStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OpenStream(
std::move(p_id_number), std::move(callback));
      return true;
    }
    case internal::kFontService_FallbackFontForCharacter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontService::FallbackFontForCharacter",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_FallbackFontForCharacter_Params_Data* params =
          reinterpret_cast<
              internal::FontService_FallbackFontForCharacter_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_character{};
      std::string p_locale{};
      FontService_FallbackFontForCharacter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_character = input_data_view.character();
      if (!input_data_view.ReadLocale(&p_locale))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontService::Name_, 2, false);
        return false;
      }
      FontService::FallbackFontForCharacterCallback callback =
          FontService_FallbackFontForCharacter_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FallbackFontForCharacter(
std::move(p_character), 
std::move(p_locale), std::move(callback));
      return true;
    }
    case internal::kFontService_FontRenderStyleForStrike_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontService::FontRenderStyleForStrike",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_FontRenderStyleForStrike_Params_Data* params =
          reinterpret_cast<
              internal::FontService_FontRenderStyleForStrike_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_family{};
      uint32_t p_size{};
      bool p_is_italic{};
      bool p_is_bold{};
      float p_device_scale_factor{};
      FontService_FontRenderStyleForStrike_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFamily(&p_family))
        success = false;
      p_size = input_data_view.size();
      p_is_italic = input_data_view.is_italic();
      p_is_bold = input_data_view.is_bold();
      p_device_scale_factor = input_data_view.device_scale_factor();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontService::Name_, 3, false);
        return false;
      }
      FontService::FontRenderStyleForStrikeCallback callback =
          FontService_FontRenderStyleForStrike_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->FontRenderStyleForStrike(
std::move(p_family), 
std::move(p_size), 
std::move(p_is_italic), 
std::move(p_is_bold), 
std::move(p_device_scale_factor), std::move(callback));
      return true;
    }
    case internal::kFontService_MatchFontByPostscriptNameOrFullFontName_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontService::MatchFontByPostscriptNameOrFullFontName",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data* params =
          reinterpret_cast<
              internal::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_postscript_name_or_full_font_name{};
      FontService_MatchFontByPostscriptNameOrFullFontName_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPostscriptNameOrFullFontName(&p_postscript_name_or_full_font_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontService::Name_, 4, false);
        return false;
      }
      FontService::MatchFontByPostscriptNameOrFullFontNameCallback callback =
          FontService_MatchFontByPostscriptNameOrFullFontName_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MatchFontByPostscriptNameOrFullFontName(
std::move(p_postscript_name_or_full_font_name), std::move(callback));
      return true;
    }
    case internal::kFontService_MatchFontWithFallback_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::FontService::MatchFontWithFallback",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::FontService_MatchFontWithFallback_Params_Data* params =
          reinterpret_cast<
              internal::FontService_MatchFontWithFallback_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_family{};
      bool p_is_bold{};
      bool p_is_italic{};
      uint32_t p_charset{};
      uint32_t p_fallback_family_type{};
      FontService_MatchFontWithFallback_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadFamily(&p_family))
        success = false;
      p_is_bold = input_data_view.is_bold();
      p_is_italic = input_data_view.is_italic();
      p_charset = input_data_view.charset();
      p_fallback_family_type = input_data_view.fallback_family_type();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FontService::Name_, 5, false);
        return false;
      }
      FontService::MatchFontWithFallbackCallback callback =
          FontService_MatchFontWithFallback_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->MatchFontWithFallback(
std::move(p_family), 
std::move(p_is_bold), 
std::move(p_is_italic), 
std::move(p_charset), 
std::move(p_fallback_family_type), std::move(callback));
      return true;
    }
  }
  return false;
}

bool FontServiceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FontService RequestValidator");

  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFamilyName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_OpenStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_OpenStream_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_FallbackFontForCharacter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_FallbackFontForCharacter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_FontRenderStyleForStrike_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_FontRenderStyleForStrike_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_MatchFontByPostscriptNameOrFullFontName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFontByPostscriptNameOrFullFontName_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_MatchFontWithFallback_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFontWithFallback_Params_Data>(
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

bool FontServiceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "FontService ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kFontService_MatchFamilyName_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFamilyName_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_OpenStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_OpenStream_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_FallbackFontForCharacter_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_FallbackFontForCharacter_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_FontRenderStyleForStrike_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_FontRenderStyleForStrike_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_MatchFontByPostscriptNameOrFullFontName_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFontByPostscriptNameOrFullFontName_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kFontService_MatchFontWithFallback_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::FontService_MatchFontWithFallback_ResponseParams_Data>(
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
}  // namespace font_service

namespace mojo {


// static
bool StructTraits<::font_service::mojom::TypefaceStyle::DataView, ::font_service::mojom::TypefaceStylePtr>::Read(
    ::font_service::mojom::TypefaceStyle::DataView input,
    ::font_service::mojom::TypefaceStylePtr* output) {
  bool success = true;
  ::font_service::mojom::TypefaceStylePtr result(::font_service::mojom::TypefaceStyle::New());
  
      result->weight = input.weight();
      result->width = input.width();
      if (!input.ReadSlant(&result->slant))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::font_service::mojom::FontIdentity::DataView, ::font_service::mojom::FontIdentityPtr>::Read(
    ::font_service::mojom::FontIdentity::DataView input,
    ::font_service::mojom::FontIdentityPtr* output) {
  bool success = true;
  ::font_service::mojom::FontIdentityPtr result(::font_service::mojom::FontIdentity::New());
  
      result->id = input.id();
      result->ttc_index = input.ttc_index();
      if (!input.ReadStrRepresentation(&result->str_representation))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::font_service::mojom::FontRenderStyle::DataView, ::font_service::mojom::FontRenderStylePtr>::Read(
    ::font_service::mojom::FontRenderStyle::DataView input,
    ::font_service::mojom::FontRenderStylePtr* output) {
  bool success = true;
  ::font_service::mojom::FontRenderStylePtr result(::font_service::mojom::FontRenderStyle::New());
  
      if (!input.ReadUseBitmaps(&result->use_bitmaps))
        success = false;
      if (!input.ReadUseAutohint(&result->use_autohint))
        success = false;
      if (!input.ReadUseHinting(&result->use_hinting))
        success = false;
      result->hint_style = input.hint_style();
      if (!input.ReadUseAntialias(&result->use_antialias))
        success = false;
      if (!input.ReadUseSubpixelRendering(&result->use_subpixel_rendering))
        success = false;
      if (!input.ReadUseSubpixelPositioning(&result->use_subpixel_positioning))
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