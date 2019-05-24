// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/capture/mojom/image_capture.mojom-shared.h"
#include "media/capture/mojom/image_capture.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace WTF {
struct media_mojom_internal_MeteringMode_DataHashFn {
  static unsigned GetHash(const ::media::mojom::MeteringMode& value) {
    using utype = std::underlying_type<::media::mojom::MeteringMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::MeteringMode& left, const ::media::mojom::MeteringMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::MeteringMode>
    : public GenericHashTraits<::media::mojom::MeteringMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::MeteringMode& value) {
    return value == static_cast<::media::mojom::MeteringMode>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::MeteringMode& slot, bool) {
    slot = static_cast<::media::mojom::MeteringMode>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::MeteringMode& value) {
    return value == static_cast<::media::mojom::MeteringMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_mojom_internal_RedEyeReduction_DataHashFn {
  static unsigned GetHash(const ::media::mojom::RedEyeReduction& value) {
    using utype = std::underlying_type<::media::mojom::RedEyeReduction>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::RedEyeReduction& left, const ::media::mojom::RedEyeReduction& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::RedEyeReduction>
    : public GenericHashTraits<::media::mojom::RedEyeReduction> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::RedEyeReduction& value) {
    return value == static_cast<::media::mojom::RedEyeReduction>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::RedEyeReduction& slot, bool) {
    slot = static_cast<::media::mojom::RedEyeReduction>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::RedEyeReduction& value) {
    return value == static_cast<::media::mojom::RedEyeReduction>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_mojom_internal_FillLightMode_DataHashFn {
  static unsigned GetHash(const ::media::mojom::FillLightMode& value) {
    using utype = std::underlying_type<::media::mojom::FillLightMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::FillLightMode& left, const ::media::mojom::FillLightMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::FillLightMode>
    : public GenericHashTraits<::media::mojom::FillLightMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::FillLightMode& value) {
    return value == static_cast<::media::mojom::FillLightMode>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::FillLightMode& slot, bool) {
    slot = static_cast<::media::mojom::FillLightMode>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::FillLightMode& value) {
    return value == static_cast<::media::mojom::FillLightMode>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {

class ImageCaptureProxy;

template <typename ImplRefTraits>
class ImageCaptureStub;

class ImageCaptureRequestValidator;
class ImageCaptureResponseValidator;


class  ImageCapture
    : public ImageCaptureInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImageCaptureInterfaceBase;
  using Proxy_ = ImageCaptureProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImageCaptureStub<ImplRefTraits>;

  using RequestValidator_ = ImageCaptureRequestValidator;
  using ResponseValidator_ = ImageCaptureResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPhotoStateMinVersion = 0,
    kSetOptionsMinVersion = 0,
    kTakePhotoMinVersion = 0,
  };
  virtual ~ImageCapture() {}


  using GetPhotoStateCallback = base::OnceCallback<void(PhotoStatePtr)>;
  
  virtual void GetPhotoState(const WTF::String& source_id, GetPhotoStateCallback callback) = 0;


  using SetOptionsCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetOptions(const WTF::String& source_id, PhotoSettingsPtr settings, SetOptionsCallback callback) = 0;


  using TakePhotoCallback = base::OnceCallback<void(BlobPtr)>;
  
  virtual void TakePhoto(const WTF::String& source_id, TakePhotoCallback callback) = 0;
};

class  ImageCaptureProxy
    : public ImageCapture {
 public:
  using InterfaceType = ImageCapture;

  explicit ImageCaptureProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPhotoState(const WTF::String& source_id, GetPhotoStateCallback callback) final;
  void SetOptions(const WTF::String& source_id, PhotoSettingsPtr settings, SetOptionsCallback callback) final;
  void TakePhoto(const WTF::String& source_id, TakePhotoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ImageCaptureStubDispatch {
 public:
  static bool Accept(ImageCapture* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImageCapture* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImageCapture>>
class ImageCaptureStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImageCaptureStub() {}
  ~ImageCaptureStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageCaptureStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImageCaptureStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ImageCaptureRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ImageCaptureResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  Range {
 public:
  using DataView = RangeDataView;
  using Data_ = internal::Range_Data;

  template <typename... Args>
  static RangePtr New(Args&&... args) {
    return RangePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RangePtr From(const U& u) {
    return mojo::TypeConverter<RangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Range>::Convert(*this);
  }


  Range();

  Range(
      double max,
      double min,
      double current,
      double step);

  ~Range();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RangePtr>
  RangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Range>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Range::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Range::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Range_UnserializedMessageContext<
            UserType, Range::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Range::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Range::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Range_UnserializedMessageContext<
            UserType, Range::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Range::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  double max;
  
  double min;
  
  double current;
  
  double step;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  Point2D {
 public:
  using DataView = Point2DDataView;
  using Data_ = internal::Point2D_Data;

  template <typename... Args>
  static Point2DPtr New(Args&&... args) {
    return Point2DPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Point2DPtr From(const U& u) {
    return mojo::TypeConverter<Point2DPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Point2D>::Convert(*this);
  }


  Point2D();

  Point2D(
      double x,
      double y);

  ~Point2D();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Point2DPtr>
  Point2DPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Point2D>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Point2D::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Point2D::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Point2D_UnserializedMessageContext<
            UserType, Point2D::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Point2D::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Point2D::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Point2D_UnserializedMessageContext<
            UserType, Point2D::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Point2D::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  double x;
  
  double y;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class  PhotoState {
 public:
  using DataView = PhotoStateDataView;
  using Data_ = internal::PhotoState_Data;

  template <typename... Args>
  static PhotoStatePtr New(Args&&... args) {
    return PhotoStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PhotoStatePtr From(const U& u) {
    return mojo::TypeConverter<PhotoStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PhotoState>::Convert(*this);
  }


  PhotoState();

  PhotoState(
      const WTF::Vector<MeteringMode>& supported_white_balance_modes,
      MeteringMode current_white_balance_mode,
      const WTF::Vector<MeteringMode>& supported_exposure_modes,
      MeteringMode current_exposure_mode,
      const WTF::Vector<MeteringMode>& supported_focus_modes,
      MeteringMode current_focus_mode,
      WTF::Vector<Point2DPtr> points_of_interest,
      RangePtr exposure_compensation,
      RangePtr exposure_time,
      RangePtr color_temperature,
      RangePtr iso,
      RangePtr brightness,
      RangePtr contrast,
      RangePtr saturation,
      RangePtr sharpness,
      RangePtr focus_distance,
      RangePtr zoom,
      bool supports_torch,
      bool torch,
      RedEyeReduction red_eye_reduction,
      RangePtr height,
      RangePtr width,
      const WTF::Vector<FillLightMode>& fill_light_mode);

  ~PhotoState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PhotoStatePtr>
  PhotoStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PhotoState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PhotoState::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PhotoState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PhotoState_UnserializedMessageContext<
            UserType, PhotoState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PhotoState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PhotoState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PhotoState_UnserializedMessageContext<
            UserType, PhotoState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PhotoState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<MeteringMode> supported_white_balance_modes;
  
  MeteringMode current_white_balance_mode;
  
  WTF::Vector<MeteringMode> supported_exposure_modes;
  
  MeteringMode current_exposure_mode;
  
  WTF::Vector<MeteringMode> supported_focus_modes;
  
  MeteringMode current_focus_mode;
  
  WTF::Vector<Point2DPtr> points_of_interest;
  
  RangePtr exposure_compensation;
  
  RangePtr exposure_time;
  
  RangePtr color_temperature;
  
  RangePtr iso;
  
  RangePtr brightness;
  
  RangePtr contrast;
  
  RangePtr saturation;
  
  RangePtr sharpness;
  
  RangePtr focus_distance;
  
  RangePtr zoom;
  
  bool supports_torch;
  
  bool torch;
  
  RedEyeReduction red_eye_reduction;
  
  RangePtr height;
  
  RangePtr width;
  
  WTF::Vector<FillLightMode> fill_light_mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PhotoState);
};






class  PhotoSettings {
 public:
  using DataView = PhotoSettingsDataView;
  using Data_ = internal::PhotoSettings_Data;

  template <typename... Args>
  static PhotoSettingsPtr New(Args&&... args) {
    return PhotoSettingsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PhotoSettingsPtr From(const U& u) {
    return mojo::TypeConverter<PhotoSettingsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PhotoSettings>::Convert(*this);
  }


  PhotoSettings();

  PhotoSettings(
      bool has_white_balance_mode,
      MeteringMode white_balance_mode,
      bool has_exposure_mode,
      MeteringMode exposure_mode,
      bool has_focus_mode,
      MeteringMode focus_mode,
      WTF::Vector<Point2DPtr> points_of_interest,
      bool has_exposure_compensation,
      double exposure_compensation,
      bool has_exposure_time,
      double exposure_time,
      bool has_color_temperature,
      double color_temperature,
      bool has_iso,
      double iso,
      bool has_brightness,
      double brightness,
      bool has_contrast,
      double contrast,
      bool has_saturation,
      double saturation,
      bool has_sharpness,
      double sharpness,
      bool has_focus_distance,
      double focus_distance,
      bool has_zoom,
      double zoom,
      bool has_torch,
      bool torch,
      bool has_fill_light_mode,
      FillLightMode fill_light_mode,
      bool has_width,
      double width,
      bool has_height,
      double height,
      bool has_red_eye_reduction,
      bool red_eye_reduction);

  ~PhotoSettings();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PhotoSettingsPtr>
  PhotoSettingsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PhotoSettings>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PhotoSettings::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PhotoSettings::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PhotoSettings_UnserializedMessageContext<
            UserType, PhotoSettings::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PhotoSettings::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PhotoSettings::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PhotoSettings_UnserializedMessageContext<
            UserType, PhotoSettings::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PhotoSettings::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool has_white_balance_mode;
  
  MeteringMode white_balance_mode;
  
  bool has_exposure_mode;
  
  MeteringMode exposure_mode;
  
  bool has_focus_mode;
  
  MeteringMode focus_mode;
  
  WTF::Vector<Point2DPtr> points_of_interest;
  
  bool has_exposure_compensation;
  
  double exposure_compensation;
  
  bool has_exposure_time;
  
  double exposure_time;
  
  bool has_color_temperature;
  
  double color_temperature;
  
  bool has_iso;
  
  double iso;
  
  bool has_brightness;
  
  double brightness;
  
  bool has_contrast;
  
  double contrast;
  
  bool has_saturation;
  
  double saturation;
  
  bool has_sharpness;
  
  double sharpness;
  
  bool has_focus_distance;
  
  double focus_distance;
  
  bool has_zoom;
  
  double zoom;
  
  bool has_torch;
  
  bool torch;
  
  bool has_fill_light_mode;
  
  FillLightMode fill_light_mode;
  
  bool has_width;
  
  double width;
  
  bool has_height;
  
  double height;
  
  bool has_red_eye_reduction;
  
  bool red_eye_reduction;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PhotoSettings);
};





class  Blob {
 public:
  using DataView = BlobDataView;
  using Data_ = internal::Blob_Data;

  template <typename... Args>
  static BlobPtr New(Args&&... args) {
    return BlobPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BlobPtr From(const U& u) {
    return mojo::TypeConverter<BlobPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Blob>::Convert(*this);
  }


  Blob();

  Blob(
      const WTF::String& mime_type,
      const WTF::Vector<uint8_t>& data);

  ~Blob();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BlobPtr>
  BlobPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Blob>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Blob::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Blob::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Blob_UnserializedMessageContext<
            UserType, Blob::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Blob::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Blob::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Blob_UnserializedMessageContext<
            UserType, Blob::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Blob::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String mime_type;
  
  WTF::Vector<uint8_t> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RangePtr Range::Clone() const {
  return New(
      mojo::Clone(max),
      mojo::Clone(min),
      mojo::Clone(current),
      mojo::Clone(step)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Range>::value>::type*>
bool Range::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->max, other_struct.max))
    return false;
  if (!mojo::Equals(this->min, other_struct.min))
    return false;
  if (!mojo::Equals(this->current, other_struct.current))
    return false;
  if (!mojo::Equals(this->step, other_struct.step))
    return false;
  return true;
}
template <typename StructPtrType>
PhotoStatePtr PhotoState::Clone() const {
  return New(
      mojo::Clone(supported_white_balance_modes),
      mojo::Clone(current_white_balance_mode),
      mojo::Clone(supported_exposure_modes),
      mojo::Clone(current_exposure_mode),
      mojo::Clone(supported_focus_modes),
      mojo::Clone(current_focus_mode),
      mojo::Clone(points_of_interest),
      mojo::Clone(exposure_compensation),
      mojo::Clone(exposure_time),
      mojo::Clone(color_temperature),
      mojo::Clone(iso),
      mojo::Clone(brightness),
      mojo::Clone(contrast),
      mojo::Clone(saturation),
      mojo::Clone(sharpness),
      mojo::Clone(focus_distance),
      mojo::Clone(zoom),
      mojo::Clone(supports_torch),
      mojo::Clone(torch),
      mojo::Clone(red_eye_reduction),
      mojo::Clone(height),
      mojo::Clone(width),
      mojo::Clone(fill_light_mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PhotoState>::value>::type*>
bool PhotoState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->supported_white_balance_modes, other_struct.supported_white_balance_modes))
    return false;
  if (!mojo::Equals(this->current_white_balance_mode, other_struct.current_white_balance_mode))
    return false;
  if (!mojo::Equals(this->supported_exposure_modes, other_struct.supported_exposure_modes))
    return false;
  if (!mojo::Equals(this->current_exposure_mode, other_struct.current_exposure_mode))
    return false;
  if (!mojo::Equals(this->supported_focus_modes, other_struct.supported_focus_modes))
    return false;
  if (!mojo::Equals(this->current_focus_mode, other_struct.current_focus_mode))
    return false;
  if (!mojo::Equals(this->points_of_interest, other_struct.points_of_interest))
    return false;
  if (!mojo::Equals(this->exposure_compensation, other_struct.exposure_compensation))
    return false;
  if (!mojo::Equals(this->exposure_time, other_struct.exposure_time))
    return false;
  if (!mojo::Equals(this->color_temperature, other_struct.color_temperature))
    return false;
  if (!mojo::Equals(this->iso, other_struct.iso))
    return false;
  if (!mojo::Equals(this->brightness, other_struct.brightness))
    return false;
  if (!mojo::Equals(this->contrast, other_struct.contrast))
    return false;
  if (!mojo::Equals(this->saturation, other_struct.saturation))
    return false;
  if (!mojo::Equals(this->sharpness, other_struct.sharpness))
    return false;
  if (!mojo::Equals(this->focus_distance, other_struct.focus_distance))
    return false;
  if (!mojo::Equals(this->zoom, other_struct.zoom))
    return false;
  if (!mojo::Equals(this->supports_torch, other_struct.supports_torch))
    return false;
  if (!mojo::Equals(this->torch, other_struct.torch))
    return false;
  if (!mojo::Equals(this->red_eye_reduction, other_struct.red_eye_reduction))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->fill_light_mode, other_struct.fill_light_mode))
    return false;
  return true;
}
template <typename StructPtrType>
Point2DPtr Point2D::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Point2D>::value>::type*>
bool Point2D::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  return true;
}
template <typename StructPtrType>
PhotoSettingsPtr PhotoSettings::Clone() const {
  return New(
      mojo::Clone(has_white_balance_mode),
      mojo::Clone(white_balance_mode),
      mojo::Clone(has_exposure_mode),
      mojo::Clone(exposure_mode),
      mojo::Clone(has_focus_mode),
      mojo::Clone(focus_mode),
      mojo::Clone(points_of_interest),
      mojo::Clone(has_exposure_compensation),
      mojo::Clone(exposure_compensation),
      mojo::Clone(has_exposure_time),
      mojo::Clone(exposure_time),
      mojo::Clone(has_color_temperature),
      mojo::Clone(color_temperature),
      mojo::Clone(has_iso),
      mojo::Clone(iso),
      mojo::Clone(has_brightness),
      mojo::Clone(brightness),
      mojo::Clone(has_contrast),
      mojo::Clone(contrast),
      mojo::Clone(has_saturation),
      mojo::Clone(saturation),
      mojo::Clone(has_sharpness),
      mojo::Clone(sharpness),
      mojo::Clone(has_focus_distance),
      mojo::Clone(focus_distance),
      mojo::Clone(has_zoom),
      mojo::Clone(zoom),
      mojo::Clone(has_torch),
      mojo::Clone(torch),
      mojo::Clone(has_fill_light_mode),
      mojo::Clone(fill_light_mode),
      mojo::Clone(has_width),
      mojo::Clone(width),
      mojo::Clone(has_height),
      mojo::Clone(height),
      mojo::Clone(has_red_eye_reduction),
      mojo::Clone(red_eye_reduction)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PhotoSettings>::value>::type*>
bool PhotoSettings::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->has_white_balance_mode, other_struct.has_white_balance_mode))
    return false;
  if (!mojo::Equals(this->white_balance_mode, other_struct.white_balance_mode))
    return false;
  if (!mojo::Equals(this->has_exposure_mode, other_struct.has_exposure_mode))
    return false;
  if (!mojo::Equals(this->exposure_mode, other_struct.exposure_mode))
    return false;
  if (!mojo::Equals(this->has_focus_mode, other_struct.has_focus_mode))
    return false;
  if (!mojo::Equals(this->focus_mode, other_struct.focus_mode))
    return false;
  if (!mojo::Equals(this->points_of_interest, other_struct.points_of_interest))
    return false;
  if (!mojo::Equals(this->has_exposure_compensation, other_struct.has_exposure_compensation))
    return false;
  if (!mojo::Equals(this->exposure_compensation, other_struct.exposure_compensation))
    return false;
  if (!mojo::Equals(this->has_exposure_time, other_struct.has_exposure_time))
    return false;
  if (!mojo::Equals(this->exposure_time, other_struct.exposure_time))
    return false;
  if (!mojo::Equals(this->has_color_temperature, other_struct.has_color_temperature))
    return false;
  if (!mojo::Equals(this->color_temperature, other_struct.color_temperature))
    return false;
  if (!mojo::Equals(this->has_iso, other_struct.has_iso))
    return false;
  if (!mojo::Equals(this->iso, other_struct.iso))
    return false;
  if (!mojo::Equals(this->has_brightness, other_struct.has_brightness))
    return false;
  if (!mojo::Equals(this->brightness, other_struct.brightness))
    return false;
  if (!mojo::Equals(this->has_contrast, other_struct.has_contrast))
    return false;
  if (!mojo::Equals(this->contrast, other_struct.contrast))
    return false;
  if (!mojo::Equals(this->has_saturation, other_struct.has_saturation))
    return false;
  if (!mojo::Equals(this->saturation, other_struct.saturation))
    return false;
  if (!mojo::Equals(this->has_sharpness, other_struct.has_sharpness))
    return false;
  if (!mojo::Equals(this->sharpness, other_struct.sharpness))
    return false;
  if (!mojo::Equals(this->has_focus_distance, other_struct.has_focus_distance))
    return false;
  if (!mojo::Equals(this->focus_distance, other_struct.focus_distance))
    return false;
  if (!mojo::Equals(this->has_zoom, other_struct.has_zoom))
    return false;
  if (!mojo::Equals(this->zoom, other_struct.zoom))
    return false;
  if (!mojo::Equals(this->has_torch, other_struct.has_torch))
    return false;
  if (!mojo::Equals(this->torch, other_struct.torch))
    return false;
  if (!mojo::Equals(this->has_fill_light_mode, other_struct.has_fill_light_mode))
    return false;
  if (!mojo::Equals(this->fill_light_mode, other_struct.fill_light_mode))
    return false;
  if (!mojo::Equals(this->has_width, other_struct.has_width))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->has_height, other_struct.has_height))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  if (!mojo::Equals(this->has_red_eye_reduction, other_struct.has_red_eye_reduction))
    return false;
  if (!mojo::Equals(this->red_eye_reduction, other_struct.red_eye_reduction))
    return false;
  return true;
}
template <typename StructPtrType>
BlobPtr Blob::Clone() const {
  return New(
      mojo::Clone(mime_type),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Blob>::value>::type*>
bool Blob::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::blink::Range::DataView,
                                         ::media::mojom::blink::RangePtr> {
  static bool IsNull(const ::media::mojom::blink::RangePtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::RangePtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::Range::max) max(
      const ::media::mojom::blink::RangePtr& input) {
    return input->max;
  }

  static decltype(::media::mojom::blink::Range::min) min(
      const ::media::mojom::blink::RangePtr& input) {
    return input->min;
  }

  static decltype(::media::mojom::blink::Range::current) current(
      const ::media::mojom::blink::RangePtr& input) {
    return input->current;
  }

  static decltype(::media::mojom::blink::Range::step) step(
      const ::media::mojom::blink::RangePtr& input) {
    return input->step;
  }

  static bool Read(::media::mojom::blink::Range::DataView input, ::media::mojom::blink::RangePtr* output);
};


template <>
struct  StructTraits<::media::mojom::blink::PhotoState::DataView,
                                         ::media::mojom::blink::PhotoStatePtr> {
  static bool IsNull(const ::media::mojom::blink::PhotoStatePtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::PhotoStatePtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::PhotoState::supported_white_balance_modes)& supported_white_balance_modes(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->supported_white_balance_modes;
  }

  static decltype(::media::mojom::blink::PhotoState::current_white_balance_mode) current_white_balance_mode(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->current_white_balance_mode;
  }

  static const decltype(::media::mojom::blink::PhotoState::supported_exposure_modes)& supported_exposure_modes(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->supported_exposure_modes;
  }

  static decltype(::media::mojom::blink::PhotoState::current_exposure_mode) current_exposure_mode(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->current_exposure_mode;
  }

  static const decltype(::media::mojom::blink::PhotoState::supported_focus_modes)& supported_focus_modes(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->supported_focus_modes;
  }

  static decltype(::media::mojom::blink::PhotoState::current_focus_mode) current_focus_mode(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->current_focus_mode;
  }

  static const decltype(::media::mojom::blink::PhotoState::points_of_interest)& points_of_interest(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->points_of_interest;
  }

  static const decltype(::media::mojom::blink::PhotoState::exposure_compensation)& exposure_compensation(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->exposure_compensation;
  }

  static const decltype(::media::mojom::blink::PhotoState::exposure_time)& exposure_time(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->exposure_time;
  }

  static const decltype(::media::mojom::blink::PhotoState::color_temperature)& color_temperature(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->color_temperature;
  }

  static const decltype(::media::mojom::blink::PhotoState::iso)& iso(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->iso;
  }

  static const decltype(::media::mojom::blink::PhotoState::brightness)& brightness(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->brightness;
  }

  static const decltype(::media::mojom::blink::PhotoState::contrast)& contrast(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->contrast;
  }

  static const decltype(::media::mojom::blink::PhotoState::saturation)& saturation(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->saturation;
  }

  static const decltype(::media::mojom::blink::PhotoState::sharpness)& sharpness(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->sharpness;
  }

  static const decltype(::media::mojom::blink::PhotoState::focus_distance)& focus_distance(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->focus_distance;
  }

  static const decltype(::media::mojom::blink::PhotoState::zoom)& zoom(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->zoom;
  }

  static decltype(::media::mojom::blink::PhotoState::supports_torch) supports_torch(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->supports_torch;
  }

  static decltype(::media::mojom::blink::PhotoState::torch) torch(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->torch;
  }

  static decltype(::media::mojom::blink::PhotoState::red_eye_reduction) red_eye_reduction(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->red_eye_reduction;
  }

  static const decltype(::media::mojom::blink::PhotoState::height)& height(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->height;
  }

  static const decltype(::media::mojom::blink::PhotoState::width)& width(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->width;
  }

  static const decltype(::media::mojom::blink::PhotoState::fill_light_mode)& fill_light_mode(
      const ::media::mojom::blink::PhotoStatePtr& input) {
    return input->fill_light_mode;
  }

  static bool Read(::media::mojom::blink::PhotoState::DataView input, ::media::mojom::blink::PhotoStatePtr* output);
};


template <>
struct  StructTraits<::media::mojom::blink::Point2D::DataView,
                                         ::media::mojom::blink::Point2DPtr> {
  static bool IsNull(const ::media::mojom::blink::Point2DPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::Point2DPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::Point2D::x) x(
      const ::media::mojom::blink::Point2DPtr& input) {
    return input->x;
  }

  static decltype(::media::mojom::blink::Point2D::y) y(
      const ::media::mojom::blink::Point2DPtr& input) {
    return input->y;
  }

  static bool Read(::media::mojom::blink::Point2D::DataView input, ::media::mojom::blink::Point2DPtr* output);
};


template <>
struct  StructTraits<::media::mojom::blink::PhotoSettings::DataView,
                                         ::media::mojom::blink::PhotoSettingsPtr> {
  static bool IsNull(const ::media::mojom::blink::PhotoSettingsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::PhotoSettingsPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::PhotoSettings::has_white_balance_mode) has_white_balance_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_white_balance_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::white_balance_mode) white_balance_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->white_balance_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_exposure_mode) has_exposure_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_exposure_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::exposure_mode) exposure_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->exposure_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_focus_mode) has_focus_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_focus_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::focus_mode) focus_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->focus_mode;
  }

  static const decltype(::media::mojom::blink::PhotoSettings::points_of_interest)& points_of_interest(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->points_of_interest;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_exposure_compensation) has_exposure_compensation(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_exposure_compensation;
  }

  static decltype(::media::mojom::blink::PhotoSettings::exposure_compensation) exposure_compensation(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->exposure_compensation;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_exposure_time) has_exposure_time(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_exposure_time;
  }

  static decltype(::media::mojom::blink::PhotoSettings::exposure_time) exposure_time(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->exposure_time;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_color_temperature) has_color_temperature(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_color_temperature;
  }

  static decltype(::media::mojom::blink::PhotoSettings::color_temperature) color_temperature(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->color_temperature;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_iso) has_iso(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_iso;
  }

  static decltype(::media::mojom::blink::PhotoSettings::iso) iso(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->iso;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_brightness) has_brightness(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_brightness;
  }

  static decltype(::media::mojom::blink::PhotoSettings::brightness) brightness(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->brightness;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_contrast) has_contrast(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_contrast;
  }

  static decltype(::media::mojom::blink::PhotoSettings::contrast) contrast(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->contrast;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_saturation) has_saturation(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_saturation;
  }

  static decltype(::media::mojom::blink::PhotoSettings::saturation) saturation(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->saturation;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_sharpness) has_sharpness(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_sharpness;
  }

  static decltype(::media::mojom::blink::PhotoSettings::sharpness) sharpness(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->sharpness;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_focus_distance) has_focus_distance(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_focus_distance;
  }

  static decltype(::media::mojom::blink::PhotoSettings::focus_distance) focus_distance(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->focus_distance;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_zoom) has_zoom(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_zoom;
  }

  static decltype(::media::mojom::blink::PhotoSettings::zoom) zoom(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->zoom;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_torch) has_torch(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_torch;
  }

  static decltype(::media::mojom::blink::PhotoSettings::torch) torch(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->torch;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_fill_light_mode) has_fill_light_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_fill_light_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::fill_light_mode) fill_light_mode(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->fill_light_mode;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_width) has_width(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_width;
  }

  static decltype(::media::mojom::blink::PhotoSettings::width) width(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->width;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_height) has_height(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_height;
  }

  static decltype(::media::mojom::blink::PhotoSettings::height) height(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->height;
  }

  static decltype(::media::mojom::blink::PhotoSettings::has_red_eye_reduction) has_red_eye_reduction(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->has_red_eye_reduction;
  }

  static decltype(::media::mojom::blink::PhotoSettings::red_eye_reduction) red_eye_reduction(
      const ::media::mojom::blink::PhotoSettingsPtr& input) {
    return input->red_eye_reduction;
  }

  static bool Read(::media::mojom::blink::PhotoSettings::DataView input, ::media::mojom::blink::PhotoSettingsPtr* output);
};


template <>
struct  StructTraits<::media::mojom::blink::Blob::DataView,
                                         ::media::mojom::blink::BlobPtr> {
  static bool IsNull(const ::media::mojom::blink::BlobPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::BlobPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::Blob::mime_type)& mime_type(
      const ::media::mojom::blink::BlobPtr& input) {
    return input->mime_type;
  }

  static const decltype(::media::mojom::blink::Blob::data)& data(
      const ::media::mojom::blink::BlobPtr& input) {
    return input->data;
  }

  static bool Read(::media::mojom::blink::Blob::DataView input, ::media::mojom::blink::BlobPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_H_