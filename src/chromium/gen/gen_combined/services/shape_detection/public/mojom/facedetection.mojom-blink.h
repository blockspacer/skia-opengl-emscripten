// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_H_

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
#include "services/shape_detection/public/mojom/facedetection.mojom-shared.h"
#include "services/shape_detection/public/mojom/facedetection.mojom-blink-forward.h"
#include "skia/public/interfaces/bitmap.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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
struct shape_detection_mojom_internal_LandmarkType_DataHashFn {
  static unsigned GetHash(const ::shape_detection::mojom::LandmarkType& value) {
    using utype = std::underlying_type<::shape_detection::mojom::LandmarkType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::shape_detection::mojom::LandmarkType& left, const ::shape_detection::mojom::LandmarkType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::shape_detection::mojom::LandmarkType>
    : public GenericHashTraits<::shape_detection::mojom::LandmarkType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::shape_detection::mojom::LandmarkType& value) {
    return value == static_cast<::shape_detection::mojom::LandmarkType>(-1000000);
  }
  static void ConstructDeletedValue(::shape_detection::mojom::LandmarkType& slot, bool) {
    slot = static_cast<::shape_detection::mojom::LandmarkType>(-1000001);
  }
  static bool IsDeletedValue(const ::shape_detection::mojom::LandmarkType& value) {
    return value == static_cast<::shape_detection::mojom::LandmarkType>(-1000001);
  }
};
}  // namespace WTF


namespace shape_detection {
namespace mojom {
namespace blink {

class FaceDetectionProxy;

template <typename ImplRefTraits>
class FaceDetectionStub;

class FaceDetectionRequestValidator;
class FaceDetectionResponseValidator;


class  FaceDetection
    : public FaceDetectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FaceDetectionInterfaceBase;
  using Proxy_ = FaceDetectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = FaceDetectionStub<ImplRefTraits>;

  using RequestValidator_ = FaceDetectionRequestValidator;
  using ResponseValidator_ = FaceDetectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDetectMinVersion = 0,
  };
  virtual ~FaceDetection() {}


  using DetectCallback = base::OnceCallback<void(WTF::Vector<FaceDetectionResultPtr>)>;
  
  virtual void Detect(const SkBitmap& bitmap_data, DetectCallback callback) = 0;
};

class  FaceDetectionProxy
    : public FaceDetection {
 public:
  using InterfaceType = FaceDetection;

  explicit FaceDetectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FaceDetectionStubDispatch {
 public:
  static bool Accept(FaceDetection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FaceDetection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FaceDetection>>
class FaceDetectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FaceDetectionStub() {}
  ~FaceDetectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FaceDetectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FaceDetectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FaceDetectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FaceDetectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class  FaceDetectorOptions {
 public:
  using DataView = FaceDetectorOptionsDataView;
  using Data_ = internal::FaceDetectorOptions_Data;

  template <typename... Args>
  static FaceDetectorOptionsPtr New(Args&&... args) {
    return FaceDetectorOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FaceDetectorOptionsPtr From(const U& u) {
    return mojo::TypeConverter<FaceDetectorOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FaceDetectorOptions>::Convert(*this);
  }


  FaceDetectorOptions();

  FaceDetectorOptions(
      uint32_t max_detected_faces,
      bool fast_mode);

  ~FaceDetectorOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FaceDetectorOptionsPtr>
  FaceDetectorOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FaceDetectorOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FaceDetectorOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FaceDetectorOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FaceDetectorOptions_UnserializedMessageContext<
            UserType, FaceDetectorOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FaceDetectorOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FaceDetectorOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FaceDetectorOptions_UnserializedMessageContext<
            UserType, FaceDetectorOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FaceDetectorOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t max_detected_faces;
  
  bool fast_mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  Landmark {
 public:
  using DataView = LandmarkDataView;
  using Data_ = internal::Landmark_Data;

  template <typename... Args>
  static LandmarkPtr New(Args&&... args) {
    return LandmarkPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LandmarkPtr From(const U& u) {
    return mojo::TypeConverter<LandmarkPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Landmark>::Convert(*this);
  }


  Landmark();

  Landmark(
      const WTF::Vector<::blink::WebFloatPoint>& locations,
      LandmarkType type);

  ~Landmark();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LandmarkPtr>
  LandmarkPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Landmark>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Landmark::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Landmark::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Landmark_UnserializedMessageContext<
            UserType, Landmark::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Landmark::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Landmark::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Landmark_UnserializedMessageContext<
            UserType, Landmark::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Landmark::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<::blink::WebFloatPoint> locations;
  
  LandmarkType type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  FaceDetectionResult {
 public:
  using DataView = FaceDetectionResultDataView;
  using Data_ = internal::FaceDetectionResult_Data;

  template <typename... Args>
  static FaceDetectionResultPtr New(Args&&... args) {
    return FaceDetectionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FaceDetectionResultPtr From(const U& u) {
    return mojo::TypeConverter<FaceDetectionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FaceDetectionResult>::Convert(*this);
  }


  FaceDetectionResult();

  FaceDetectionResult(
      const ::blink::WebFloatRect& bounding_box,
      WTF::Vector<LandmarkPtr> landmarks);

  ~FaceDetectionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FaceDetectionResultPtr>
  FaceDetectionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FaceDetectionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FaceDetectionResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FaceDetectionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FaceDetectionResult_UnserializedMessageContext<
            UserType, FaceDetectionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FaceDetectionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FaceDetectionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FaceDetectionResult_UnserializedMessageContext<
            UserType, FaceDetectionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FaceDetectionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::WebFloatRect bounding_box;
  
  WTF::Vector<LandmarkPtr> landmarks;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FaceDetectionResult);
};


template <typename StructPtrType>
LandmarkPtr Landmark::Clone() const {
  return New(
      mojo::Clone(locations),
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Landmark>::value>::type*>
bool Landmark::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->locations, other_struct.locations))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
FaceDetectionResultPtr FaceDetectionResult::Clone() const {
  return New(
      mojo::Clone(bounding_box),
      mojo::Clone(landmarks)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FaceDetectionResult>::value>::type*>
bool FaceDetectionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bounding_box, other_struct.bounding_box))
    return false;
  if (!mojo::Equals(this->landmarks, other_struct.landmarks))
    return false;
  return true;
}
template <typename StructPtrType>
FaceDetectorOptionsPtr FaceDetectorOptions::Clone() const {
  return New(
      mojo::Clone(max_detected_faces),
      mojo::Clone(fast_mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FaceDetectorOptions>::value>::type*>
bool FaceDetectorOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->max_detected_faces, other_struct.max_detected_faces))
    return false;
  if (!mojo::Equals(this->fast_mode, other_struct.fast_mode))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


template <>
struct  StructTraits<::shape_detection::mojom::blink::Landmark::DataView,
                                         ::shape_detection::mojom::blink::LandmarkPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::LandmarkPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::LandmarkPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::blink::Landmark::locations)& locations(
      const ::shape_detection::mojom::blink::LandmarkPtr& input) {
    return input->locations;
  }

  static decltype(::shape_detection::mojom::blink::Landmark::type) type(
      const ::shape_detection::mojom::blink::LandmarkPtr& input) {
    return input->type;
  }

  static bool Read(::shape_detection::mojom::blink::Landmark::DataView input, ::shape_detection::mojom::blink::LandmarkPtr* output);
};


template <>
struct  StructTraits<::shape_detection::mojom::blink::FaceDetectionResult::DataView,
                                         ::shape_detection::mojom::blink::FaceDetectionResultPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::FaceDetectionResultPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::FaceDetectionResultPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::blink::FaceDetectionResult::bounding_box)& bounding_box(
      const ::shape_detection::mojom::blink::FaceDetectionResultPtr& input) {
    return input->bounding_box;
  }

  static const decltype(::shape_detection::mojom::blink::FaceDetectionResult::landmarks)& landmarks(
      const ::shape_detection::mojom::blink::FaceDetectionResultPtr& input) {
    return input->landmarks;
  }

  static bool Read(::shape_detection::mojom::blink::FaceDetectionResult::DataView input, ::shape_detection::mojom::blink::FaceDetectionResultPtr* output);
};


template <>
struct  StructTraits<::shape_detection::mojom::blink::FaceDetectorOptions::DataView,
                                         ::shape_detection::mojom::blink::FaceDetectorOptionsPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::FaceDetectorOptionsPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::FaceDetectorOptionsPtr* output) { output->reset(); }

  static decltype(::shape_detection::mojom::blink::FaceDetectorOptions::max_detected_faces) max_detected_faces(
      const ::shape_detection::mojom::blink::FaceDetectorOptionsPtr& input) {
    return input->max_detected_faces;
  }

  static decltype(::shape_detection::mojom::blink::FaceDetectorOptions::fast_mode) fast_mode(
      const ::shape_detection::mojom::blink::FaceDetectorOptionsPtr& input) {
    return input->fast_mode;
  }

  static bool Read(::shape_detection::mojom::blink::FaceDetectorOptions::DataView input, ::shape_detection::mojom::blink::FaceDetectorOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_BLINK_H_