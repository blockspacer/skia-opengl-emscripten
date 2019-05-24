// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_H_

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
#include "services/shape_detection/public/mojom/barcodedetection.mojom-shared.h"
#include "services/shape_detection/public/mojom/barcodedetection.mojom-blink-forward.h"
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
struct shape_detection_mojom_internal_BarcodeFormat_DataHashFn {
  static unsigned GetHash(const ::shape_detection::mojom::BarcodeFormat& value) {
    using utype = std::underlying_type<::shape_detection::mojom::BarcodeFormat>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::shape_detection::mojom::BarcodeFormat& left, const ::shape_detection::mojom::BarcodeFormat& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::shape_detection::mojom::BarcodeFormat>
    : public GenericHashTraits<::shape_detection::mojom::BarcodeFormat> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::shape_detection::mojom::BarcodeFormat& value) {
    return value == static_cast<::shape_detection::mojom::BarcodeFormat>(-1000000);
  }
  static void ConstructDeletedValue(::shape_detection::mojom::BarcodeFormat& slot, bool) {
    slot = static_cast<::shape_detection::mojom::BarcodeFormat>(-1000001);
  }
  static bool IsDeletedValue(const ::shape_detection::mojom::BarcodeFormat& value) {
    return value == static_cast<::shape_detection::mojom::BarcodeFormat>(-1000001);
  }
};
}  // namespace WTF


namespace shape_detection {
namespace mojom {
namespace blink {

class BarcodeDetectionProxy;

template <typename ImplRefTraits>
class BarcodeDetectionStub;

class BarcodeDetectionRequestValidator;
class BarcodeDetectionResponseValidator;


class  BarcodeDetection
    : public BarcodeDetectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BarcodeDetectionInterfaceBase;
  using Proxy_ = BarcodeDetectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = BarcodeDetectionStub<ImplRefTraits>;

  using RequestValidator_ = BarcodeDetectionRequestValidator;
  using ResponseValidator_ = BarcodeDetectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDetectMinVersion = 0,
  };
  virtual ~BarcodeDetection() {}


  using DetectCallback = base::OnceCallback<void(WTF::Vector<BarcodeDetectionResultPtr>)>;
  
  virtual void Detect(const SkBitmap& bitmap_data, DetectCallback callback) = 0;
};

class  BarcodeDetectionProxy
    : public BarcodeDetection {
 public:
  using InterfaceType = BarcodeDetection;

  explicit BarcodeDetectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BarcodeDetectionStubDispatch {
 public:
  static bool Accept(BarcodeDetection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BarcodeDetection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BarcodeDetection>>
class BarcodeDetectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BarcodeDetectionStub() {}
  ~BarcodeDetectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BarcodeDetectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BarcodeDetectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  BarcodeDetectionResult {
 public:
  using DataView = BarcodeDetectionResultDataView;
  using Data_ = internal::BarcodeDetectionResult_Data;

  template <typename... Args>
  static BarcodeDetectionResultPtr New(Args&&... args) {
    return BarcodeDetectionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BarcodeDetectionResultPtr From(const U& u) {
    return mojo::TypeConverter<BarcodeDetectionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BarcodeDetectionResult>::Convert(*this);
  }


  BarcodeDetectionResult();

  BarcodeDetectionResult(
      const WTF::String& raw_value,
      const ::blink::WebFloatRect& bounding_box,
      BarcodeFormat format,
      const WTF::Vector<::blink::WebFloatPoint>& corner_points);

  ~BarcodeDetectionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BarcodeDetectionResultPtr>
  BarcodeDetectionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BarcodeDetectionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BarcodeDetectionResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BarcodeDetectionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BarcodeDetectionResult_UnserializedMessageContext<
            UserType, BarcodeDetectionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BarcodeDetectionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BarcodeDetectionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BarcodeDetectionResult_UnserializedMessageContext<
            UserType, BarcodeDetectionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BarcodeDetectionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String raw_value;
  
  ::blink::WebFloatRect bounding_box;
  
  BarcodeFormat format;
  
  WTF::Vector<::blink::WebFloatPoint> corner_points;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
BarcodeDetectionResultPtr BarcodeDetectionResult::Clone() const {
  return New(
      mojo::Clone(raw_value),
      mojo::Clone(bounding_box),
      mojo::Clone(format),
      mojo::Clone(corner_points)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BarcodeDetectionResult>::value>::type*>
bool BarcodeDetectionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->raw_value, other_struct.raw_value))
    return false;
  if (!mojo::Equals(this->bounding_box, other_struct.bounding_box))
    return false;
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  if (!mojo::Equals(this->corner_points, other_struct.corner_points))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


template <>
struct  StructTraits<::shape_detection::mojom::blink::BarcodeDetectionResult::DataView,
                                         ::shape_detection::mojom::blink::BarcodeDetectionResultPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::BarcodeDetectionResultPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::BarcodeDetectionResultPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::blink::BarcodeDetectionResult::raw_value)& raw_value(
      const ::shape_detection::mojom::blink::BarcodeDetectionResultPtr& input) {
    return input->raw_value;
  }

  static const decltype(::shape_detection::mojom::blink::BarcodeDetectionResult::bounding_box)& bounding_box(
      const ::shape_detection::mojom::blink::BarcodeDetectionResultPtr& input) {
    return input->bounding_box;
  }

  static decltype(::shape_detection::mojom::blink::BarcodeDetectionResult::format) format(
      const ::shape_detection::mojom::blink::BarcodeDetectionResultPtr& input) {
    return input->format;
  }

  static const decltype(::shape_detection::mojom::blink::BarcodeDetectionResult::corner_points)& corner_points(
      const ::shape_detection::mojom::blink::BarcodeDetectionResultPtr& input) {
    return input->corner_points;
  }

  static bool Read(::shape_detection::mojom::blink::BarcodeDetectionResult::DataView input, ::shape_detection::mojom::blink::BarcodeDetectionResultPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_MOJOM_BLINK_H_