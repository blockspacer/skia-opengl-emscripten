// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_H_

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
#include "services/shape_detection/public/mojom/textdetection.mojom-shared.h"
#include "services/shape_detection/public/mojom/textdetection.mojom-blink-forward.h"
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




namespace shape_detection {
namespace mojom {
namespace blink {

class TextDetectionProxy;

template <typename ImplRefTraits>
class TextDetectionStub;

class TextDetectionRequestValidator;
class TextDetectionResponseValidator;


class  TextDetection
    : public TextDetectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TextDetectionInterfaceBase;
  using Proxy_ = TextDetectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextDetectionStub<ImplRefTraits>;

  using RequestValidator_ = TextDetectionRequestValidator;
  using ResponseValidator_ = TextDetectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDetectMinVersion = 0,
  };
  virtual ~TextDetection() {}


  using DetectCallback = base::OnceCallback<void(WTF::Vector<TextDetectionResultPtr>)>;
  
  virtual void Detect(const SkBitmap& bitmap_data, DetectCallback callback) = 0;
};

class  TextDetectionProxy
    : public TextDetection {
 public:
  using InterfaceType = TextDetection;

  explicit TextDetectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Detect(const SkBitmap& bitmap_data, DetectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TextDetectionStubDispatch {
 public:
  static bool Accept(TextDetection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextDetection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextDetection>>
class TextDetectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextDetectionStub() {}
  ~TextDetectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextDetectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextDetectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TextDetectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TextDetectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  TextDetectionResult {
 public:
  using DataView = TextDetectionResultDataView;
  using Data_ = internal::TextDetectionResult_Data;

  template <typename... Args>
  static TextDetectionResultPtr New(Args&&... args) {
    return TextDetectionResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextDetectionResultPtr From(const U& u) {
    return mojo::TypeConverter<TextDetectionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextDetectionResult>::Convert(*this);
  }


  TextDetectionResult();

  TextDetectionResult(
      const WTF::String& raw_value,
      const ::blink::WebFloatRect& bounding_box,
      const WTF::Vector<::blink::WebFloatPoint>& corner_points);

  ~TextDetectionResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextDetectionResultPtr>
  TextDetectionResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextDetectionResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextDetectionResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextDetectionResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextDetectionResult_UnserializedMessageContext<
            UserType, TextDetectionResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TextDetectionResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TextDetectionResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextDetectionResult_UnserializedMessageContext<
            UserType, TextDetectionResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextDetectionResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String raw_value;
  
  ::blink::WebFloatRect bounding_box;
  
  WTF::Vector<::blink::WebFloatPoint> corner_points;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
TextDetectionResultPtr TextDetectionResult::Clone() const {
  return New(
      mojo::Clone(raw_value),
      mojo::Clone(bounding_box),
      mojo::Clone(corner_points)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextDetectionResult>::value>::type*>
bool TextDetectionResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->raw_value, other_struct.raw_value))
    return false;
  if (!mojo::Equals(this->bounding_box, other_struct.bounding_box))
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
struct  StructTraits<::shape_detection::mojom::blink::TextDetectionResult::DataView,
                                         ::shape_detection::mojom::blink::TextDetectionResultPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::TextDetectionResultPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::TextDetectionResultPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::blink::TextDetectionResult::raw_value)& raw_value(
      const ::shape_detection::mojom::blink::TextDetectionResultPtr& input) {
    return input->raw_value;
  }

  static const decltype(::shape_detection::mojom::blink::TextDetectionResult::bounding_box)& bounding_box(
      const ::shape_detection::mojom::blink::TextDetectionResultPtr& input) {
    return input->bounding_box;
  }

  static const decltype(::shape_detection::mojom::blink::TextDetectionResult::corner_points)& corner_points(
      const ::shape_detection::mojom::blink::TextDetectionResultPtr& input) {
    return input->corner_points;
  }

  static bool Read(::shape_detection::mojom::blink::TextDetectionResult::DataView input, ::shape_detection::mojom::blink::TextDetectionResultPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_BLINK_H_