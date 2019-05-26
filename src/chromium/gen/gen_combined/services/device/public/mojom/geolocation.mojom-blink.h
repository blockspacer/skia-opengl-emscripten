// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/geolocation.mojom-shared.h"
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

class GeolocationProxy;

template <typename ImplRefTraits>
class GeolocationStub;

class GeolocationRequestValidator;
class GeolocationResponseValidator;


class BLINK_PLATFORM_EXPORT Geolocation
    : public GeolocationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GeolocationInterfaceBase;
  using Proxy_ = GeolocationProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationRequestValidator;
  using ResponseValidator_ = GeolocationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetHighAccuracyMinVersion = 0,
    kQueryNextPositionMinVersion = 0,
  };
  virtual ~Geolocation() {}

  
  virtual void SetHighAccuracy(bool high_accuracy) = 0;


  using QueryNextPositionCallback = base::OnceCallback<void(::device::mojom::blink::GeopositionPtr)>;
  
  virtual void QueryNextPosition(QueryNextPositionCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT GeolocationProxy
    : public Geolocation {
 public:
  using InterfaceType = Geolocation;

  explicit GeolocationProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHighAccuracy(bool high_accuracy) final;
  void QueryNextPosition(QueryNextPositionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT GeolocationStubDispatch {
 public:
  static bool Accept(Geolocation* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Geolocation* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Geolocation>>
class GeolocationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationStub() {}
  ~GeolocationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT GeolocationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT GeolocationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_MOJOM_BLINK_H_