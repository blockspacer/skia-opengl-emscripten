// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/geolocation_context.mojom-shared.h"
#include "services/device/public/mojom/geolocation_context.mojom-blink-forward.h"
#include "services/device/public/mojom/geolocation.mojom-blink-forward.h"
#include "services/device/public/mojom/geoposition.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace device {
namespace mojom {
namespace blink {

class GeolocationContextProxy;

template <typename ImplRefTraits>
class GeolocationContextStub;

class GeolocationContextRequestValidator;


class BLINK_PLATFORM_EXPORT GeolocationContext
    : public GeolocationContextInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GeolocationContextInterfaceBase;
  using Proxy_ = GeolocationContextProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationContextStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationContextRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBindGeolocationMinVersion = 0,
    kSetOverrideMinVersion = 0,
    kClearOverrideMinVersion = 0,
  };
  virtual ~GeolocationContext() {}

  
  virtual void BindGeolocation(::device::mojom::blink::GeolocationRequest request) = 0;

  
  virtual void SetOverride(::device::mojom::blink::GeopositionPtr geoposition) = 0;

  
  virtual void ClearOverride() = 0;
};

class BLINK_PLATFORM_EXPORT GeolocationContextProxy
    : public GeolocationContext {
 public:
  using InterfaceType = GeolocationContext;

  explicit GeolocationContextProxy(mojo::MessageReceiverWithResponder* receiver);
  void BindGeolocation(::device::mojom::blink::GeolocationRequest request) final;
  void SetOverride(::device::mojom::blink::GeopositionPtr geoposition) final;
  void ClearOverride() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT GeolocationContextStubDispatch {
 public:
  static bool Accept(GeolocationContext* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GeolocationContext* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GeolocationContext>>
class GeolocationContextStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationContextStub() {}
  ~GeolocationContextStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationContextStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationContextStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT GeolocationContextRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONTEXT_MOJOM_BLINK_H_