// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/screen_orientation.mojom-shared.h"
#include "services/device/public/mojom/screen_orientation.mojom-blink-forward.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-blink-forward.h"

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

class ScreenOrientationProxy;

template <typename ImplRefTraits>
class ScreenOrientationStub;

class ScreenOrientationRequestValidator;
class ScreenOrientationResponseValidator;


class BLINK_PLATFORM_EXPORT ScreenOrientation
    : public ScreenOrientationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ScreenOrientationInterfaceBase;
  using Proxy_ = ScreenOrientationProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenOrientationStub<ImplRefTraits>;

  using RequestValidator_ = ScreenOrientationRequestValidator;
  using ResponseValidator_ = ScreenOrientationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kLockOrientationMinVersion = 0,
    kUnlockOrientationMinVersion = 0,
  };
  virtual ~ScreenOrientation() {}


  using LockOrientationCallback = base::OnceCallback<void(::device::mojom::blink::ScreenOrientationLockResult)>;
  
  virtual void LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) = 0;

  
  virtual void UnlockOrientation() = 0;
};

class ScreenOrientationListenerProxy;

template <typename ImplRefTraits>
class ScreenOrientationListenerStub;

class ScreenOrientationListenerRequestValidator;
class ScreenOrientationListenerResponseValidator;


class BLINK_PLATFORM_EXPORT ScreenOrientationListener
    : public ScreenOrientationListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ScreenOrientationListenerInterfaceBase;
  using Proxy_ = ScreenOrientationListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ScreenOrientationListenerStub<ImplRefTraits>;

  using RequestValidator_ = ScreenOrientationListenerRequestValidator;
  using ResponseValidator_ = ScreenOrientationListenerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIsAutoRotateEnabledByUserMinVersion = 0,
  };
  virtual ~ScreenOrientationListener() {}


  using IsAutoRotateEnabledByUserCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT ScreenOrientationProxy
    : public ScreenOrientation {
 public:
  using InterfaceType = ScreenOrientation;

  explicit ScreenOrientationProxy(mojo::MessageReceiverWithResponder* receiver);
  void LockOrientation(::blink::WebScreenOrientationLockType orientation, LockOrientationCallback callback) final;
  void UnlockOrientation() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT ScreenOrientationListenerProxy
    : public ScreenOrientationListener {
 public:
  using InterfaceType = ScreenOrientationListener;

  explicit ScreenOrientationListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void IsAutoRotateEnabledByUser(IsAutoRotateEnabledByUserCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationStubDispatch {
 public:
  static bool Accept(ScreenOrientation* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenOrientation* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenOrientation>>
class ScreenOrientationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenOrientationStub() {}
  ~ScreenOrientationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationListenerStubDispatch {
 public:
  static bool Accept(ScreenOrientationListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ScreenOrientationListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ScreenOrientationListener>>
class ScreenOrientationListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ScreenOrientationListenerStub() {}
  ~ScreenOrientationListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ScreenOrientationListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT ScreenOrientationListenerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_BLINK_H_