// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_H_

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
#include "services/shape_detection/public/mojom/facedetection_provider.mojom-shared.h"
#include "services/shape_detection/public/mojom/facedetection_provider.mojom-blink-forward.h"
#include "services/shape_detection/public/mojom/facedetection.mojom-blink-forward.h"

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

class FaceDetectionProviderProxy;

template <typename ImplRefTraits>
class FaceDetectionProviderStub;

class FaceDetectionProviderRequestValidator;


class  FaceDetectionProvider
    : public FaceDetectionProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FaceDetectionProviderInterfaceBase;
  using Proxy_ = FaceDetectionProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = FaceDetectionProviderStub<ImplRefTraits>;

  using RequestValidator_ = FaceDetectionProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateFaceDetectionMinVersion = 0,
  };
  virtual ~FaceDetectionProvider() {}

  
  virtual void CreateFaceDetection(::shape_detection::mojom::blink::FaceDetectionRequest request, ::shape_detection::mojom::blink::FaceDetectorOptionsPtr options) = 0;
};

class  FaceDetectionProviderProxy
    : public FaceDetectionProvider {
 public:
  using InterfaceType = FaceDetectionProvider;

  explicit FaceDetectionProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateFaceDetection(::shape_detection::mojom::blink::FaceDetectionRequest request, ::shape_detection::mojom::blink::FaceDetectorOptionsPtr options) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FaceDetectionProviderStubDispatch {
 public:
  static bool Accept(FaceDetectionProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FaceDetectionProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FaceDetectionProvider>>
class FaceDetectionProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FaceDetectionProviderStub() {}
  ~FaceDetectionProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FaceDetectionProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FaceDetectionProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FaceDetectionProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_BLINK_H_