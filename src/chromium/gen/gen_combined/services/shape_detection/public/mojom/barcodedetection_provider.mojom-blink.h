// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_H_

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
#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-shared.h"
#include "services/shape_detection/public/mojom/barcodedetection_provider.mojom-blink-forward.h"
#include "services/shape_detection/public/mojom/barcodedetection.mojom-blink.h"

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

class BarcodeDetectionProviderProxy;

template <typename ImplRefTraits>
class BarcodeDetectionProviderStub;

class BarcodeDetectionProviderRequestValidator;
class BarcodeDetectionProviderResponseValidator;


class  BarcodeDetectionProvider
    : public BarcodeDetectionProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BarcodeDetectionProviderInterfaceBase;
  using Proxy_ = BarcodeDetectionProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = BarcodeDetectionProviderStub<ImplRefTraits>;

  using RequestValidator_ = BarcodeDetectionProviderRequestValidator;
  using ResponseValidator_ = BarcodeDetectionProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateBarcodeDetectionMinVersion = 0,
    kEnumerateSupportedFormatsMinVersion = 0,
  };
  virtual ~BarcodeDetectionProvider() {}

  
  virtual void CreateBarcodeDetection(::shape_detection::mojom::blink::BarcodeDetectionRequest request, BarcodeDetectorOptionsPtr options) = 0;


  using EnumerateSupportedFormatsCallback = base::OnceCallback<void(const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>&)>;
  
  virtual void EnumerateSupportedFormats(EnumerateSupportedFormatsCallback callback) = 0;
};

class  BarcodeDetectionProviderProxy
    : public BarcodeDetectionProvider {
 public:
  using InterfaceType = BarcodeDetectionProvider;

  explicit BarcodeDetectionProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateBarcodeDetection(::shape_detection::mojom::blink::BarcodeDetectionRequest request, BarcodeDetectorOptionsPtr options) final;
  void EnumerateSupportedFormats(EnumerateSupportedFormatsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BarcodeDetectionProviderStubDispatch {
 public:
  static bool Accept(BarcodeDetectionProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BarcodeDetectionProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BarcodeDetectionProvider>>
class BarcodeDetectionProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BarcodeDetectionProviderStub() {}
  ~BarcodeDetectionProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BarcodeDetectionProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BarcodeDetectionProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BarcodeDetectionProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  BarcodeDetectorOptions {
 public:
  using DataView = BarcodeDetectorOptionsDataView;
  using Data_ = internal::BarcodeDetectorOptions_Data;

  template <typename... Args>
  static BarcodeDetectorOptionsPtr New(Args&&... args) {
    return BarcodeDetectorOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BarcodeDetectorOptionsPtr From(const U& u) {
    return mojo::TypeConverter<BarcodeDetectorOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BarcodeDetectorOptions>::Convert(*this);
  }


  BarcodeDetectorOptions();

  explicit BarcodeDetectorOptions(
      const WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat>& formats);

  ~BarcodeDetectorOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BarcodeDetectorOptionsPtr>
  BarcodeDetectorOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BarcodeDetectorOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BarcodeDetectorOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BarcodeDetectorOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BarcodeDetectorOptions_UnserializedMessageContext<
            UserType, BarcodeDetectorOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BarcodeDetectorOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BarcodeDetectorOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BarcodeDetectorOptions_UnserializedMessageContext<
            UserType, BarcodeDetectorOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BarcodeDetectorOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<::shape_detection::mojom::blink::BarcodeFormat> formats;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
BarcodeDetectorOptionsPtr BarcodeDetectorOptions::Clone() const {
  return New(
      mojo::Clone(formats)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BarcodeDetectorOptions>::value>::type*>
bool BarcodeDetectorOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->formats, other_struct.formats))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

namespace mojo {


template <>
struct  StructTraits<::shape_detection::mojom::blink::BarcodeDetectorOptions::DataView,
                                         ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr> {
  static bool IsNull(const ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr& input) { return !input; }
  static void SetToNull(::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr* output) { output->reset(); }

  static const decltype(::shape_detection::mojom::blink::BarcodeDetectorOptions::formats)& formats(
      const ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr& input) {
    return input->formats;
  }

  static bool Read(::shape_detection::mojom::blink::BarcodeDetectorOptions::DataView input, ::shape_detection::mojom::blink::BarcodeDetectorOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_BLINK_H_