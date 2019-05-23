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

#include "media/capture/mojom/image_capture.mojom.h"

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

#include "media/capture/mojom/image_capture.mojom-params-data.h"
#include "media/capture/mojom/image_capture.mojom-shared-message-ids.h"

#include "media/capture/mojom/image_capture.mojom-import-headers.h"


#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_JUMBO_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_JUMBO_H_
#endif
namespace media {
namespace mojom {
Range::Range()
    : max(),
      min(),
      current(),
      step() {}

Range::Range(
    double max_in,
    double min_in,
    double current_in,
    double step_in)
    : max(std::move(max_in)),
      min(std::move(min_in)),
      current(std::move(current_in)),
      step(std::move(step_in)) {}

Range::~Range() = default;
size_t Range::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->max);
  seed = mojo::internal::Hash(seed, this->min);
  seed = mojo::internal::Hash(seed, this->current);
  seed = mojo::internal::Hash(seed, this->step);
  return seed;
}

bool Range::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PhotoState::PhotoState()
    : supported_white_balance_modes(),
      current_white_balance_mode(),
      supported_exposure_modes(),
      current_exposure_mode(),
      supported_focus_modes(),
      current_focus_mode(),
      points_of_interest(),
      exposure_compensation(),
      exposure_time(),
      color_temperature(),
      iso(),
      brightness(),
      contrast(),
      saturation(),
      sharpness(),
      focus_distance(),
      zoom(),
      supports_torch(),
      torch(),
      red_eye_reduction(),
      height(),
      width(),
      fill_light_mode() {}

PhotoState::PhotoState(
    const std::vector<MeteringMode>& supported_white_balance_modes_in,
    MeteringMode current_white_balance_mode_in,
    const std::vector<MeteringMode>& supported_exposure_modes_in,
    MeteringMode current_exposure_mode_in,
    const std::vector<MeteringMode>& supported_focus_modes_in,
    MeteringMode current_focus_mode_in,
    std::vector<Point2DPtr> points_of_interest_in,
    RangePtr exposure_compensation_in,
    RangePtr exposure_time_in,
    RangePtr color_temperature_in,
    RangePtr iso_in,
    RangePtr brightness_in,
    RangePtr contrast_in,
    RangePtr saturation_in,
    RangePtr sharpness_in,
    RangePtr focus_distance_in,
    RangePtr zoom_in,
    bool supports_torch_in,
    bool torch_in,
    RedEyeReduction red_eye_reduction_in,
    RangePtr height_in,
    RangePtr width_in,
    const std::vector<FillLightMode>& fill_light_mode_in)
    : supported_white_balance_modes(std::move(supported_white_balance_modes_in)),
      current_white_balance_mode(std::move(current_white_balance_mode_in)),
      supported_exposure_modes(std::move(supported_exposure_modes_in)),
      current_exposure_mode(std::move(current_exposure_mode_in)),
      supported_focus_modes(std::move(supported_focus_modes_in)),
      current_focus_mode(std::move(current_focus_mode_in)),
      points_of_interest(std::move(points_of_interest_in)),
      exposure_compensation(std::move(exposure_compensation_in)),
      exposure_time(std::move(exposure_time_in)),
      color_temperature(std::move(color_temperature_in)),
      iso(std::move(iso_in)),
      brightness(std::move(brightness_in)),
      contrast(std::move(contrast_in)),
      saturation(std::move(saturation_in)),
      sharpness(std::move(sharpness_in)),
      focus_distance(std::move(focus_distance_in)),
      zoom(std::move(zoom_in)),
      supports_torch(std::move(supports_torch_in)),
      torch(std::move(torch_in)),
      red_eye_reduction(std::move(red_eye_reduction_in)),
      height(std::move(height_in)),
      width(std::move(width_in)),
      fill_light_mode(std::move(fill_light_mode_in)) {}

PhotoState::~PhotoState() = default;

bool PhotoState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Point2D::Point2D()
    : x(),
      y() {}

Point2D::Point2D(
    double x_in,
    double y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

Point2D::~Point2D() = default;
size_t Point2D::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->x);
  seed = mojo::internal::Hash(seed, this->y);
  return seed;
}

bool Point2D::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PhotoSettings::PhotoSettings()
    : has_white_balance_mode(),
      white_balance_mode(),
      has_exposure_mode(),
      exposure_mode(),
      has_focus_mode(),
      focus_mode(),
      points_of_interest(),
      has_exposure_compensation(),
      exposure_compensation(),
      has_exposure_time(),
      exposure_time(),
      has_color_temperature(),
      color_temperature(),
      has_iso(),
      iso(),
      has_brightness(),
      brightness(),
      has_contrast(),
      contrast(),
      has_saturation(),
      saturation(),
      has_sharpness(),
      sharpness(),
      has_focus_distance(),
      focus_distance(),
      has_zoom(),
      zoom(),
      has_torch(),
      torch(),
      has_fill_light_mode(),
      fill_light_mode(),
      has_width(),
      width(),
      has_height(),
      height(),
      has_red_eye_reduction(),
      red_eye_reduction() {}

PhotoSettings::PhotoSettings(
    bool has_white_balance_mode_in,
    MeteringMode white_balance_mode_in,
    bool has_exposure_mode_in,
    MeteringMode exposure_mode_in,
    bool has_focus_mode_in,
    MeteringMode focus_mode_in,
    std::vector<Point2DPtr> points_of_interest_in,
    bool has_exposure_compensation_in,
    double exposure_compensation_in,
    bool has_exposure_time_in,
    double exposure_time_in,
    bool has_color_temperature_in,
    double color_temperature_in,
    bool has_iso_in,
    double iso_in,
    bool has_brightness_in,
    double brightness_in,
    bool has_contrast_in,
    double contrast_in,
    bool has_saturation_in,
    double saturation_in,
    bool has_sharpness_in,
    double sharpness_in,
    bool has_focus_distance_in,
    double focus_distance_in,
    bool has_zoom_in,
    double zoom_in,
    bool has_torch_in,
    bool torch_in,
    bool has_fill_light_mode_in,
    FillLightMode fill_light_mode_in,
    bool has_width_in,
    double width_in,
    bool has_height_in,
    double height_in,
    bool has_red_eye_reduction_in,
    bool red_eye_reduction_in)
    : has_white_balance_mode(std::move(has_white_balance_mode_in)),
      white_balance_mode(std::move(white_balance_mode_in)),
      has_exposure_mode(std::move(has_exposure_mode_in)),
      exposure_mode(std::move(exposure_mode_in)),
      has_focus_mode(std::move(has_focus_mode_in)),
      focus_mode(std::move(focus_mode_in)),
      points_of_interest(std::move(points_of_interest_in)),
      has_exposure_compensation(std::move(has_exposure_compensation_in)),
      exposure_compensation(std::move(exposure_compensation_in)),
      has_exposure_time(std::move(has_exposure_time_in)),
      exposure_time(std::move(exposure_time_in)),
      has_color_temperature(std::move(has_color_temperature_in)),
      color_temperature(std::move(color_temperature_in)),
      has_iso(std::move(has_iso_in)),
      iso(std::move(iso_in)),
      has_brightness(std::move(has_brightness_in)),
      brightness(std::move(brightness_in)),
      has_contrast(std::move(has_contrast_in)),
      contrast(std::move(contrast_in)),
      has_saturation(std::move(has_saturation_in)),
      saturation(std::move(saturation_in)),
      has_sharpness(std::move(has_sharpness_in)),
      sharpness(std::move(sharpness_in)),
      has_focus_distance(std::move(has_focus_distance_in)),
      focus_distance(std::move(focus_distance_in)),
      has_zoom(std::move(has_zoom_in)),
      zoom(std::move(zoom_in)),
      has_torch(std::move(has_torch_in)),
      torch(std::move(torch_in)),
      has_fill_light_mode(std::move(has_fill_light_mode_in)),
      fill_light_mode(std::move(fill_light_mode_in)),
      has_width(std::move(has_width_in)),
      width(std::move(width_in)),
      has_height(std::move(has_height_in)),
      height(std::move(height_in)),
      has_red_eye_reduction(std::move(has_red_eye_reduction_in)),
      red_eye_reduction(std::move(red_eye_reduction_in)) {}

PhotoSettings::~PhotoSettings() = default;

bool PhotoSettings::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Blob::Blob()
    : mime_type(),
      data() {}

Blob::Blob(
    const std::string& mime_type_in,
    const std::vector<uint8_t>& data_in)
    : mime_type(std::move(mime_type_in)),
      data(std::move(data_in)) {}

Blob::~Blob() = default;

bool Blob::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ImageCapture::Name_[] = "media.mojom.ImageCapture";

class ImageCapture_GetPhotoState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageCapture_GetPhotoState_ForwardToCallback(
      ImageCapture::GetPhotoStateCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageCapture::GetPhotoStateCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageCapture_GetPhotoState_ForwardToCallback);
};

class ImageCapture_SetOptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageCapture_SetOptions_ForwardToCallback(
      ImageCapture::SetOptionsCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageCapture::SetOptionsCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageCapture_SetOptions_ForwardToCallback);
};

class ImageCapture_TakePhoto_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ImageCapture_TakePhoto_ForwardToCallback(
      ImageCapture::TakePhotoCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ImageCapture::TakePhotoCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(ImageCapture_TakePhoto_ForwardToCallback);
};

ImageCaptureProxy::ImageCaptureProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImageCaptureProxy::GetPhotoState(
    const std::string& in_source_id, GetPhotoStateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImageCapture::GetPhotoState");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageCapture_GetPhotoState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ImageCapture_GetPhotoState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_id)::BaseType::BufferWriter
      source_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_id, buffer, &source_id_writer, &serialization_context);
  params->source_id.Set(
      source_id_writer.is_null() ? nullptr : source_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in ImageCapture.GetPhotoState request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageCapture::Name_);
  message.set_method_name("GetPhotoState");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageCapture_GetPhotoState_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ImageCaptureProxy::SetOptions(
    const std::string& in_source_id, PhotoSettingsPtr in_settings, SetOptionsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImageCapture::SetOptions");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageCapture_SetOptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ImageCapture_SetOptions_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_id)::BaseType::BufferWriter
      source_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_id, buffer, &source_id_writer, &serialization_context);
  params->source_id.Set(
      source_id_writer.is_null() ? nullptr : source_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in ImageCapture.SetOptions request");
  typename decltype(params->settings)::BaseType::BufferWriter
      settings_writer;
  mojo::internal::Serialize<::media::mojom::PhotoSettingsDataView>(
      in_settings, buffer, &settings_writer, &serialization_context);
  params->settings.Set(
      settings_writer.is_null() ? nullptr : settings_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->settings.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null settings in ImageCapture.SetOptions request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageCapture::Name_);
  message.set_method_name("SetOptions");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageCapture_SetOptions_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void ImageCaptureProxy::TakePhoto(
    const std::string& in_source_id, TakePhotoCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImageCapture::TakePhoto");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageCapture_TakePhoto_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ImageCapture_TakePhoto_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source_id)::BaseType::BufferWriter
      source_id_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source_id, buffer, &source_id_writer, &serialization_context);
  params->source_id.Set(
      source_id_writer.is_null() ? nullptr : source_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source_id in ImageCapture.TakePhoto request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageCapture::Name_);
  message.set_method_name("TakePhoto");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ImageCapture_TakePhoto_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class ImageCapture_GetPhotoState_ProxyToResponder {
 public:
  static ImageCapture::GetPhotoStateCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageCapture_GetPhotoState_ProxyToResponder> proxy(
        new ImageCapture_GetPhotoState_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageCapture_GetPhotoState_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageCapture_GetPhotoState_ProxyToResponder() {
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
  ImageCapture_GetPhotoState_ProxyToResponder(
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
        << "ImageCapture::GetPhotoStateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      PhotoStatePtr in_state);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImageCapture_GetPhotoState_ProxyToResponder);
};

bool ImageCapture_GetPhotoState_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImageCapture::GetPhotoStateCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageCapture_GetPhotoState_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageCapture_GetPhotoState_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  PhotoStatePtr p_state{};
  ImageCapture_GetPhotoState_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadState(&p_state))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImageCapture::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_state));
  return true;
}

void ImageCapture_GetPhotoState_ProxyToResponder::Run(
    PhotoStatePtr in_state) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageCapture_GetPhotoState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ImageCapture_GetPhotoState_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::media::mojom::PhotoStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImageCapture::GetPhotoStateCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageCapture::Name_);
  message.set_method_name("GetPhotoState");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ImageCapture_SetOptions_ProxyToResponder {
 public:
  static ImageCapture::SetOptionsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageCapture_SetOptions_ProxyToResponder> proxy(
        new ImageCapture_SetOptions_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageCapture_SetOptions_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageCapture_SetOptions_ProxyToResponder() {
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
  ImageCapture_SetOptions_ProxyToResponder(
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
        << "ImageCapture::SetOptionsCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(ImageCapture_SetOptions_ProxyToResponder);
};

bool ImageCapture_SetOptions_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImageCapture::SetOptionsCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageCapture_SetOptions_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageCapture_SetOptions_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  ImageCapture_SetOptions_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImageCapture::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void ImageCapture_SetOptions_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageCapture_SetOptions_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ImageCapture_SetOptions_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImageCapture::SetOptionsCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageCapture::Name_);
  message.set_method_name("SetOptions");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class ImageCapture_TakePhoto_ProxyToResponder {
 public:
  static ImageCapture::TakePhotoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ImageCapture_TakePhoto_ProxyToResponder> proxy(
        new ImageCapture_TakePhoto_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&ImageCapture_TakePhoto_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ImageCapture_TakePhoto_ProxyToResponder() {
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
  ImageCapture_TakePhoto_ProxyToResponder(
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
        << "ImageCapture::TakePhotoCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      BlobPtr in_blob);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(ImageCapture_TakePhoto_ProxyToResponder);
};

bool ImageCapture_TakePhoto_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::ImageCapture::TakePhotoCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::ImageCapture_TakePhoto_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ImageCapture_TakePhoto_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  BlobPtr p_blob{};
  ImageCapture_TakePhoto_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadBlob(&p_blob))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ImageCapture::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_blob));
  return true;
}

void ImageCapture_TakePhoto_ProxyToResponder::Run(
    BlobPtr in_blob) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImageCapture_TakePhoto_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::media::mojom::internal::ImageCapture_TakePhoto_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->blob)::BaseType::BufferWriter
      blob_writer;
  mojo::internal::Serialize<::media::mojom::BlobDataView>(
      in_blob, buffer, &blob_writer, &serialization_context);
  params->blob.Set(
      blob_writer.is_null() ? nullptr : blob_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->blob.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null blob in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::ImageCapture::TakePhotoCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImageCapture::Name_);
  message.set_method_name("TakePhoto");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool ImageCaptureStubDispatch::Accept(
    ImageCapture* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImageCapture_GetPhotoState_Name: {
      break;
    }
    case internal::kImageCapture_SetOptions_Name: {
      break;
    }
    case internal::kImageCapture_TakePhoto_Name: {
      break;
    }
  }
  return false;
}

// static
bool ImageCaptureStubDispatch::AcceptWithResponder(
    ImageCapture* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImageCapture_GetPhotoState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImageCapture::GetPhotoState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageCapture_GetPhotoState_Params_Data* params =
          reinterpret_cast<
              internal::ImageCapture_GetPhotoState_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_source_id{};
      ImageCapture_GetPhotoState_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImageCapture::Name_, 0, false);
        return false;
      }
      ImageCapture::GetPhotoStateCallback callback =
          ImageCapture_GetPhotoState_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetPhotoState(
std::move(p_source_id), std::move(callback));
      return true;
    }
    case internal::kImageCapture_SetOptions_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImageCapture::SetOptions",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageCapture_SetOptions_Params_Data* params =
          reinterpret_cast<
              internal::ImageCapture_SetOptions_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_source_id{};
      PhotoSettingsPtr p_settings{};
      ImageCapture_SetOptions_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!input_data_view.ReadSettings(&p_settings))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImageCapture::Name_, 1, false);
        return false;
      }
      ImageCapture::SetOptionsCallback callback =
          ImageCapture_SetOptions_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetOptions(
std::move(p_source_id), 
std::move(p_settings), std::move(callback));
      return true;
    }
    case internal::kImageCapture_TakePhoto_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImageCapture::TakePhoto",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::ImageCapture_TakePhoto_Params_Data* params =
          reinterpret_cast<
              internal::ImageCapture_TakePhoto_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_source_id{};
      ImageCapture_TakePhoto_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSourceId(&p_source_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImageCapture::Name_, 2, false);
        return false;
      }
      ImageCapture::TakePhotoCallback callback =
          ImageCapture_TakePhoto_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TakePhoto(
std::move(p_source_id), std::move(callback));
      return true;
    }
  }
  return false;
}

bool ImageCaptureRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageCapture RequestValidator");

  switch (message->header()->name) {
    case internal::kImageCapture_GetPhotoState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_GetPhotoState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImageCapture_SetOptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_SetOptions_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImageCapture_TakePhoto_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_TakePhoto_Params_Data>(
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

bool ImageCaptureResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImageCapture ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kImageCapture_GetPhotoState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_GetPhotoState_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImageCapture_SetOptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_SetOptions_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kImageCapture_TakePhoto_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImageCapture_TakePhoto_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::Range::DataView, ::media::mojom::RangePtr>::Read(
    ::media::mojom::Range::DataView input,
    ::media::mojom::RangePtr* output) {
  bool success = true;
  ::media::mojom::RangePtr result(::media::mojom::Range::New());
  
      result->max = input.max();
      result->min = input.min();
      result->current = input.current();
      result->step = input.step();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::PhotoState::DataView, ::media::mojom::PhotoStatePtr>::Read(
    ::media::mojom::PhotoState::DataView input,
    ::media::mojom::PhotoStatePtr* output) {
  bool success = true;
  ::media::mojom::PhotoStatePtr result(::media::mojom::PhotoState::New());
  
      if (!input.ReadSupportedWhiteBalanceModes(&result->supported_white_balance_modes))
        success = false;
      if (!input.ReadCurrentWhiteBalanceMode(&result->current_white_balance_mode))
        success = false;
      if (!input.ReadSupportedExposureModes(&result->supported_exposure_modes))
        success = false;
      if (!input.ReadCurrentExposureMode(&result->current_exposure_mode))
        success = false;
      if (!input.ReadSupportedFocusModes(&result->supported_focus_modes))
        success = false;
      if (!input.ReadCurrentFocusMode(&result->current_focus_mode))
        success = false;
      if (!input.ReadPointsOfInterest(&result->points_of_interest))
        success = false;
      if (!input.ReadExposureCompensation(&result->exposure_compensation))
        success = false;
      if (!input.ReadExposureTime(&result->exposure_time))
        success = false;
      if (!input.ReadColorTemperature(&result->color_temperature))
        success = false;
      if (!input.ReadIso(&result->iso))
        success = false;
      if (!input.ReadBrightness(&result->brightness))
        success = false;
      if (!input.ReadContrast(&result->contrast))
        success = false;
      if (!input.ReadSaturation(&result->saturation))
        success = false;
      if (!input.ReadSharpness(&result->sharpness))
        success = false;
      if (!input.ReadFocusDistance(&result->focus_distance))
        success = false;
      if (!input.ReadZoom(&result->zoom))
        success = false;
      result->supports_torch = input.supports_torch();
      result->torch = input.torch();
      if (!input.ReadRedEyeReduction(&result->red_eye_reduction))
        success = false;
      if (!input.ReadHeight(&result->height))
        success = false;
      if (!input.ReadWidth(&result->width))
        success = false;
      if (!input.ReadFillLightMode(&result->fill_light_mode))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::Point2D::DataView, ::media::mojom::Point2DPtr>::Read(
    ::media::mojom::Point2D::DataView input,
    ::media::mojom::Point2DPtr* output) {
  bool success = true;
  ::media::mojom::Point2DPtr result(::media::mojom::Point2D::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::PhotoSettings::DataView, ::media::mojom::PhotoSettingsPtr>::Read(
    ::media::mojom::PhotoSettings::DataView input,
    ::media::mojom::PhotoSettingsPtr* output) {
  bool success = true;
  ::media::mojom::PhotoSettingsPtr result(::media::mojom::PhotoSettings::New());
  
      result->has_white_balance_mode = input.has_white_balance_mode();
      if (!input.ReadWhiteBalanceMode(&result->white_balance_mode))
        success = false;
      result->has_exposure_mode = input.has_exposure_mode();
      if (!input.ReadExposureMode(&result->exposure_mode))
        success = false;
      result->has_focus_mode = input.has_focus_mode();
      if (!input.ReadFocusMode(&result->focus_mode))
        success = false;
      if (!input.ReadPointsOfInterest(&result->points_of_interest))
        success = false;
      result->has_exposure_compensation = input.has_exposure_compensation();
      result->exposure_compensation = input.exposure_compensation();
      result->has_exposure_time = input.has_exposure_time();
      result->exposure_time = input.exposure_time();
      result->has_color_temperature = input.has_color_temperature();
      result->color_temperature = input.color_temperature();
      result->has_iso = input.has_iso();
      result->iso = input.iso();
      result->has_brightness = input.has_brightness();
      result->brightness = input.brightness();
      result->has_contrast = input.has_contrast();
      result->contrast = input.contrast();
      result->has_saturation = input.has_saturation();
      result->saturation = input.saturation();
      result->has_sharpness = input.has_sharpness();
      result->sharpness = input.sharpness();
      result->has_focus_distance = input.has_focus_distance();
      result->focus_distance = input.focus_distance();
      result->has_zoom = input.has_zoom();
      result->zoom = input.zoom();
      result->has_torch = input.has_torch();
      result->torch = input.torch();
      result->has_fill_light_mode = input.has_fill_light_mode();
      if (!input.ReadFillLightMode(&result->fill_light_mode))
        success = false;
      result->has_width = input.has_width();
      result->width = input.width();
      result->has_height = input.has_height();
      result->height = input.height();
      result->has_red_eye_reduction = input.has_red_eye_reduction();
      result->red_eye_reduction = input.red_eye_reduction();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::Blob::DataView, ::media::mojom::BlobPtr>::Read(
    ::media::mojom::Blob::DataView input,
    ::media::mojom::BlobPtr* output) {
  bool success = true;
  ::media::mojom::BlobPtr result(::media::mojom::Blob::New());
  
      if (!input.ReadMimeType(&result->mime_type))
        success = false;
      if (!input.ReadData(&result->data))
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