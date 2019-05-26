// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_H_

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
#include "services/device/public/mojom/geolocation_config.mojom-shared.h"
#include "services/device/public/mojom/geolocation_config.mojom-forward.h"
#include <string>
#include <vector>

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




namespace device {
namespace mojom {

class GeolocationConfigProxy;

template <typename ImplRefTraits>
class GeolocationConfigStub;

class GeolocationConfigRequestValidator;
class GeolocationConfigResponseValidator;


class  GeolocationConfig
    : public GeolocationConfigInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GeolocationConfigInterfaceBase;
  using Proxy_ = GeolocationConfigProxy;

  template <typename ImplRefTraits>
  using Stub_ = GeolocationConfigStub<ImplRefTraits>;

  using RequestValidator_ = GeolocationConfigRequestValidator;
  using ResponseValidator_ = GeolocationConfigResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIsHighAccuracyLocationBeingCapturedMinVersion = 0,
  };
  virtual ~GeolocationConfig() {}


  using IsHighAccuracyLocationBeingCapturedCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) = 0;
};

class  GeolocationConfigProxy
    : public GeolocationConfig {
 public:
  using InterfaceType = GeolocationConfig;

  explicit GeolocationConfigProxy(mojo::MessageReceiverWithResponder* receiver);
  void IsHighAccuracyLocationBeingCaptured(IsHighAccuracyLocationBeingCapturedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GeolocationConfigStubDispatch {
 public:
  static bool Accept(GeolocationConfig* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GeolocationConfig* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GeolocationConfig>>
class GeolocationConfigStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GeolocationConfigStub() {}
  ~GeolocationConfigStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationConfigStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GeolocationConfigStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GeolocationConfigRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GeolocationConfigResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOLOCATION_CONFIG_MOJOM_H_