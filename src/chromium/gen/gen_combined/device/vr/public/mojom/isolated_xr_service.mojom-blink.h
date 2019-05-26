// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_H_

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
#include "device/vr/public/mojom/isolated_xr_service.mojom-shared.h"
#include "device/vr/public/mojom/isolated_xr_service.mojom-blink-forward.h"
#include "device/vr/public/mojom/vr_service.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
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
#include "base/component_export.h"




namespace device {
namespace mojom {
namespace blink {

class XRSessionControllerProxy;

template <typename ImplRefTraits>
class XRSessionControllerStub;

class XRSessionControllerRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionController
    : public XRSessionControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRSessionControllerInterfaceBase;
  using Proxy_ = XRSessionControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRSessionControllerStub<ImplRefTraits>;

  using RequestValidator_ = XRSessionControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetFrameDataRestrictedMinVersion = 0,
  };
  virtual ~XRSessionController() {}

  
  virtual void SetFrameDataRestricted(bool restricted) = 0;
};

class XRRuntimeEventListenerProxy;

template <typename ImplRefTraits>
class XRRuntimeEventListenerStub;

class XRRuntimeEventListenerRequestValidator;
class XRRuntimeEventListenerResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListener
    : public XRRuntimeEventListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRRuntimeEventListenerInterfaceBase;
  using Proxy_ = XRRuntimeEventListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRRuntimeEventListenerStub<ImplRefTraits>;

  using RequestValidator_ = XRRuntimeEventListenerRequestValidator;
  using ResponseValidator_ = XRRuntimeEventListenerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnDisplayInfoChangedMinVersion = 0,
    kOnDeviceActivatedMinVersion = 0,
    kOnDeviceIdleMinVersion = 0,
    kOnExitPresentMinVersion = 0,
  };
  virtual ~XRRuntimeEventListener() {}

  
  virtual void OnDisplayInfoChanged(::device::mojom::blink::VRDisplayInfoPtr display_info) = 0;


  using OnDeviceActivatedCallback = base::OnceCallback<void(bool)>;
  
  virtual void OnDeviceActivated(::device::mojom::blink::VRDisplayEventReason reason, OnDeviceActivatedCallback callback) = 0;

  
  virtual void OnDeviceIdle(::device::mojom::blink::VRDisplayEventReason reason) = 0;

  
  virtual void OnExitPresent() = 0;
};

class XRRuntimeProxy;

template <typename ImplRefTraits>
class XRRuntimeStub;

class XRRuntimeRequestValidator;
class XRRuntimeResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntime
    : public XRRuntimeInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRRuntimeInterfaceBase;
  using Proxy_ = XRRuntimeProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRRuntimeStub<ImplRefTraits>;

  using RequestValidator_ = XRRuntimeRequestValidator;
  using ResponseValidator_ = XRRuntimeResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestSessionMinVersion = 0,
    kListenToDeviceChangesMinVersion = 0,
    kEnsureInitializedMinVersion = 0,
    kSetListeningForActivateMinVersion = 0,
    kSetInlinePosesEnabledMinVersion = 0,
  };
  virtual ~XRRuntime() {}


  using RequestSessionCallback = base::OnceCallback<void(::device::mojom::blink::XRSessionPtr, XRSessionControllerPtr)>;
  
  virtual void RequestSession(XRRuntimeSessionOptionsPtr options, RequestSessionCallback callback) = 0;


  using ListenToDeviceChangesCallback = base::OnceCallback<void(::device::mojom::blink::VRDisplayInfoPtr)>;
  
  virtual void ListenToDeviceChanges(XRRuntimeEventListenerAssociatedPtrInfo listener, ListenToDeviceChangesCallback callback) = 0;


  using EnsureInitializedCallback = base::OnceCallback<void()>;
  
  virtual void EnsureInitialized(int32_t render_process_id, int32_t render_frame_id, EnsureInitializedCallback callback) = 0;

  
  virtual void SetListeningForActivate(bool listen_for_activation) = 0;

  
  virtual void SetInlinePosesEnabled(bool enable) = 0;
};

class IsolatedXRGamepadProviderProxy;

template <typename ImplRefTraits>
class IsolatedXRGamepadProviderStub;

class IsolatedXRGamepadProviderRequestValidator;
class IsolatedXRGamepadProviderResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProvider
    : public IsolatedXRGamepadProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IsolatedXRGamepadProviderInterfaceBase;
  using Proxy_ = IsolatedXRGamepadProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = IsolatedXRGamepadProviderStub<ImplRefTraits>;

  using RequestValidator_ = IsolatedXRGamepadProviderRequestValidator;
  using ResponseValidator_ = IsolatedXRGamepadProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestUpdateMinVersion = 0,
  };
  virtual ~IsolatedXRGamepadProvider() {}


  using RequestUpdateCallback = base::OnceCallback<void(XRGamepadDataPtr)>;
  
  virtual void RequestUpdate(RequestUpdateCallback callback) = 0;
};

class IsolatedXRGamepadProviderFactoryProxy;

template <typename ImplRefTraits>
class IsolatedXRGamepadProviderFactoryStub;

class IsolatedXRGamepadProviderFactoryRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderFactory
    : public IsolatedXRGamepadProviderFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IsolatedXRGamepadProviderFactoryInterfaceBase;
  using Proxy_ = IsolatedXRGamepadProviderFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = IsolatedXRGamepadProviderFactoryStub<ImplRefTraits>;

  using RequestValidator_ = IsolatedXRGamepadProviderFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetIsolatedXRGamepadProviderMinVersion = 0,
  };
  virtual ~IsolatedXRGamepadProviderFactory() {}

  
  virtual void GetIsolatedXRGamepadProvider(IsolatedXRGamepadProviderRequest provider) = 0;
};

class ImmersiveOverlayProxy;

template <typename ImplRefTraits>
class ImmersiveOverlayStub;

class ImmersiveOverlayRequestValidator;
class ImmersiveOverlayResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlay
    : public ImmersiveOverlayInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ImmersiveOverlayInterfaceBase;
  using Proxy_ = ImmersiveOverlayProxy;

  template <typename ImplRefTraits>
  using Stub_ = ImmersiveOverlayStub<ImplRefTraits>;

  using RequestValidator_ = ImmersiveOverlayRequestValidator;
  using ResponseValidator_ = ImmersiveOverlayResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestNextOverlayPoseMinVersion = 0,
    kSubmitOverlayTextureMinVersion = 0,
    kSetOverlayAndWebXRVisibilityMinVersion = 0,
    kRequestNotificationOnWebXrSubmittedMinVersion = 0,
  };
  virtual ~ImmersiveOverlay() {}


  using RequestNextOverlayPoseCallback = base::OnceCallback<void(::device::mojom::blink::XRFrameDataPtr)>;
  
  virtual void RequestNextOverlayPose(RequestNextOverlayPoseCallback callback) = 0;


  using SubmitOverlayTextureCallback = base::OnceCallback<void(bool)>;
  
  virtual void SubmitOverlayTexture(int16_t frame_id, mojo::ScopedHandle texture, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, SubmitOverlayTextureCallback callback) = 0;

  
  virtual void SetOverlayAndWebXRVisibility(bool overlay_visible, bool webxr_visible) = 0;


  using RequestNotificationOnWebXrSubmittedCallback = base::OnceCallback<void()>;
  
  virtual void RequestNotificationOnWebXrSubmitted(RequestNotificationOnWebXrSubmittedCallback callback) = 0;
};

class XRCompositorHostProxy;

template <typename ImplRefTraits>
class XRCompositorHostStub;

class XRCompositorHostRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRCompositorHost
    : public XRCompositorHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRCompositorHostInterfaceBase;
  using Proxy_ = XRCompositorHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRCompositorHostStub<ImplRefTraits>;

  using RequestValidator_ = XRCompositorHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateImmersiveOverlayMinVersion = 0,
  };
  virtual ~XRCompositorHost() {}

  
  virtual void CreateImmersiveOverlay(ImmersiveOverlayRequest overlay) = 0;
};

class IsolatedXRRuntimeProviderClientProxy;

template <typename ImplRefTraits>
class IsolatedXRRuntimeProviderClientStub;

class IsolatedXRRuntimeProviderClientRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderClient
    : public IsolatedXRRuntimeProviderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IsolatedXRRuntimeProviderClientInterfaceBase;
  using Proxy_ = IsolatedXRRuntimeProviderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = IsolatedXRRuntimeProviderClientStub<ImplRefTraits>;

  using RequestValidator_ = IsolatedXRRuntimeProviderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceAddedMinVersion = 0,
    kOnDeviceRemovedMinVersion = 0,
    kOnDevicesEnumeratedMinVersion = 0,
  };
  virtual ~IsolatedXRRuntimeProviderClient() {}

  
  virtual void OnDeviceAdded(XRRuntimePtr runtime, IsolatedXRGamepadProviderFactoryPtr gamepad_factory, XRCompositorHostPtr compositor_host, ::device::mojom::blink::XRDeviceId device_id) = 0;

  
  virtual void OnDeviceRemoved(::device::mojom::blink::XRDeviceId device_index) = 0;

  
  virtual void OnDevicesEnumerated() = 0;
};

class IsolatedXRRuntimeProviderProxy;

template <typename ImplRefTraits>
class IsolatedXRRuntimeProviderStub;

class IsolatedXRRuntimeProviderRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProvider
    : public IsolatedXRRuntimeProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IsolatedXRRuntimeProviderInterfaceBase;
  using Proxy_ = IsolatedXRRuntimeProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = IsolatedXRRuntimeProviderStub<ImplRefTraits>;

  using RequestValidator_ = IsolatedXRRuntimeProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRequestDevicesMinVersion = 0,
  };
  virtual ~IsolatedXRRuntimeProvider() {}

  
  virtual void RequestDevices(IsolatedXRRuntimeProviderClientPtr client) = 0;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionControllerProxy
    : public XRSessionController {
 public:
  using InterfaceType = XRSessionController;

  explicit XRSessionControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetFrameDataRestricted(bool restricted) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListenerProxy
    : public XRRuntimeEventListener {
 public:
  using InterfaceType = XRRuntimeEventListener;

  explicit XRRuntimeEventListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDisplayInfoChanged(::device::mojom::blink::VRDisplayInfoPtr display_info) final;
  void OnDeviceActivated(::device::mojom::blink::VRDisplayEventReason reason, OnDeviceActivatedCallback callback) final;
  void OnDeviceIdle(::device::mojom::blink::VRDisplayEventReason reason) final;
  void OnExitPresent() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeProxy
    : public XRRuntime {
 public:
  using InterfaceType = XRRuntime;

  explicit XRRuntimeProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestSession(XRRuntimeSessionOptionsPtr options, RequestSessionCallback callback) final;
  void ListenToDeviceChanges(XRRuntimeEventListenerAssociatedPtrInfo listener, ListenToDeviceChangesCallback callback) final;
  void EnsureInitialized(int32_t render_process_id, int32_t render_frame_id, EnsureInitializedCallback callback) final;
  void SetListeningForActivate(bool listen_for_activation) final;
  void SetInlinePosesEnabled(bool enable) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderProxy
    : public IsolatedXRGamepadProvider {
 public:
  using InterfaceType = IsolatedXRGamepadProvider;

  explicit IsolatedXRGamepadProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestUpdate(RequestUpdateCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderFactoryProxy
    : public IsolatedXRGamepadProviderFactory {
 public:
  using InterfaceType = IsolatedXRGamepadProviderFactory;

  explicit IsolatedXRGamepadProviderFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetIsolatedXRGamepadProvider(IsolatedXRGamepadProviderRequest provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlayProxy
    : public ImmersiveOverlay {
 public:
  using InterfaceType = ImmersiveOverlay;

  explicit ImmersiveOverlayProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestNextOverlayPose(RequestNextOverlayPoseCallback callback) final;
  void SubmitOverlayTexture(int16_t frame_id, mojo::ScopedHandle texture, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, SubmitOverlayTextureCallback callback) final;
  void SetOverlayAndWebXRVisibility(bool overlay_visible, bool webxr_visible) final;
  void RequestNotificationOnWebXrSubmitted(RequestNotificationOnWebXrSubmittedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRCompositorHostProxy
    : public XRCompositorHost {
 public:
  using InterfaceType = XRCompositorHost;

  explicit XRCompositorHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateImmersiveOverlay(ImmersiveOverlayRequest overlay) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderClientProxy
    : public IsolatedXRRuntimeProviderClient {
 public:
  using InterfaceType = IsolatedXRRuntimeProviderClient;

  explicit IsolatedXRRuntimeProviderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceAdded(XRRuntimePtr runtime, IsolatedXRGamepadProviderFactoryPtr gamepad_factory, XRCompositorHostPtr compositor_host, ::device::mojom::blink::XRDeviceId device_id) final;
  void OnDeviceRemoved(::device::mojom::blink::XRDeviceId device_index) final;
  void OnDevicesEnumerated() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderProxy
    : public IsolatedXRRuntimeProvider {
 public:
  using InterfaceType = IsolatedXRRuntimeProvider;

  explicit IsolatedXRRuntimeProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDevices(IsolatedXRRuntimeProviderClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionControllerStubDispatch {
 public:
  static bool Accept(XRSessionController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRSessionController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRSessionController>>
class XRSessionControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRSessionControllerStub() {}
  ~XRSessionControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRSessionControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRSessionControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListenerStubDispatch {
 public:
  static bool Accept(XRRuntimeEventListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRRuntimeEventListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRRuntimeEventListener>>
class XRRuntimeEventListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRRuntimeEventListenerStub() {}
  ~XRRuntimeEventListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRRuntimeEventListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRRuntimeEventListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeStubDispatch {
 public:
  static bool Accept(XRRuntime* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRRuntime* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRRuntime>>
class XRRuntimeStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRRuntimeStub() {}
  ~XRRuntimeStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRRuntimeStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRRuntimeStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderStubDispatch {
 public:
  static bool Accept(IsolatedXRGamepadProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IsolatedXRGamepadProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IsolatedXRGamepadProvider>>
class IsolatedXRGamepadProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IsolatedXRGamepadProviderStub() {}
  ~IsolatedXRGamepadProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRGamepadProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRGamepadProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderFactoryStubDispatch {
 public:
  static bool Accept(IsolatedXRGamepadProviderFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IsolatedXRGamepadProviderFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IsolatedXRGamepadProviderFactory>>
class IsolatedXRGamepadProviderFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IsolatedXRGamepadProviderFactoryStub() {}
  ~IsolatedXRGamepadProviderFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRGamepadProviderFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRGamepadProviderFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlayStubDispatch {
 public:
  static bool Accept(ImmersiveOverlay* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ImmersiveOverlay* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ImmersiveOverlay>>
class ImmersiveOverlayStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ImmersiveOverlayStub() {}
  ~ImmersiveOverlayStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImmersiveOverlayStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ImmersiveOverlayStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRCompositorHostStubDispatch {
 public:
  static bool Accept(XRCompositorHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRCompositorHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRCompositorHost>>
class XRCompositorHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRCompositorHostStub() {}
  ~XRCompositorHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRCompositorHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRCompositorHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderClientStubDispatch {
 public:
  static bool Accept(IsolatedXRRuntimeProviderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IsolatedXRRuntimeProviderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IsolatedXRRuntimeProviderClient>>
class IsolatedXRRuntimeProviderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IsolatedXRRuntimeProviderClientStub() {}
  ~IsolatedXRRuntimeProviderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRRuntimeProviderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRRuntimeProviderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderStubDispatch {
 public:
  static bool Accept(IsolatedXRRuntimeProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IsolatedXRRuntimeProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IsolatedXRRuntimeProvider>>
class IsolatedXRRuntimeProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IsolatedXRRuntimeProviderStub() {}
  ~IsolatedXRRuntimeProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRRuntimeProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IsolatedXRRuntimeProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlayRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRCompositorHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRRuntimeProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeEventListenerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) IsolatedXRGamepadProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) ImmersiveOverlayResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRGamepadButton {
 public:
  using DataView = XRGamepadButtonDataView;
  using Data_ = internal::XRGamepadButton_Data;

  template <typename... Args>
  static XRGamepadButtonPtr New(Args&&... args) {
    return XRGamepadButtonPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRGamepadButtonPtr From(const U& u) {
    return mojo::TypeConverter<XRGamepadButtonPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRGamepadButton>::Convert(*this);
  }


  XRGamepadButton();

  XRGamepadButton(
      bool pressed,
      bool touched,
      double value);

  ~XRGamepadButton();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRGamepadButtonPtr>
  XRGamepadButtonPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRGamepadButton>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRGamepadButton::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRGamepadButton::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRGamepadButton_UnserializedMessageContext<
            UserType, XRGamepadButton::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRGamepadButton::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRGamepadButton::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRGamepadButton_UnserializedMessageContext<
            UserType, XRGamepadButton::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRGamepadButton::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool pressed;
  
  bool touched;
  
  double value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRuntimeSessionOptions {
 public:
  using DataView = XRRuntimeSessionOptionsDataView;
  using Data_ = internal::XRRuntimeSessionOptions_Data;

  template <typename... Args>
  static XRRuntimeSessionOptionsPtr New(Args&&... args) {
    return XRRuntimeSessionOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRRuntimeSessionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<XRRuntimeSessionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRRuntimeSessionOptions>::Convert(*this);
  }


  XRRuntimeSessionOptions();

  XRRuntimeSessionOptions(
      bool immersive,
      bool environment_integration,
      int32_t render_process_id,
      int32_t render_frame_id,
      bool use_legacy_webvr_render_path);

  ~XRRuntimeSessionOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRRuntimeSessionOptionsPtr>
  XRRuntimeSessionOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRRuntimeSessionOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRRuntimeSessionOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRRuntimeSessionOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRRuntimeSessionOptions_UnserializedMessageContext<
            UserType, XRRuntimeSessionOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRRuntimeSessionOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRRuntimeSessionOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRRuntimeSessionOptions_UnserializedMessageContext<
            UserType, XRRuntimeSessionOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRRuntimeSessionOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool immersive;
  
  bool environment_integration;
  
  int32_t render_process_id;
  
  int32_t render_frame_id;
  
  bool use_legacy_webvr_render_path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRGamepad {
 public:
  using DataView = XRGamepadDataView;
  using Data_ = internal::XRGamepad_Data;

  template <typename... Args>
  static XRGamepadPtr New(Args&&... args) {
    return XRGamepadPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRGamepadPtr From(const U& u) {
    return mojo::TypeConverter<XRGamepadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRGamepad>::Convert(*this);
  }


  XRGamepad();

  XRGamepad(
      bool can_provide_orientation,
      bool can_provide_position,
      const WTF::Vector<double>& axes,
      WTF::Vector<XRGamepadButtonPtr> buttons,
      ::device::mojom::blink::VRPosePtr pose,
      ::device::mojom::blink::XRHandedness hand,
      uint32_t controller_id,
      base::TimeTicks timestamp);

  ~XRGamepad();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRGamepadPtr>
  XRGamepadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRGamepad>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRGamepad::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRGamepad::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRGamepad_UnserializedMessageContext<
            UserType, XRGamepad::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRGamepad::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRGamepad::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRGamepad_UnserializedMessageContext<
            UserType, XRGamepad::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRGamepad::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool can_provide_orientation;
  
  bool can_provide_position;
  
  WTF::Vector<double> axes;
  
  WTF::Vector<XRGamepadButtonPtr> buttons;
  
  ::device::mojom::blink::VRPosePtr pose;
  
  ::device::mojom::blink::XRHandedness hand;
  
  uint32_t controller_id;
  
  base::TimeTicks timestamp;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRGamepad);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRGamepadData {
 public:
  using DataView = XRGamepadDataDataView;
  using Data_ = internal::XRGamepadData_Data;

  template <typename... Args>
  static XRGamepadDataPtr New(Args&&... args) {
    return XRGamepadDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRGamepadDataPtr From(const U& u) {
    return mojo::TypeConverter<XRGamepadDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRGamepadData>::Convert(*this);
  }


  XRGamepadData();

  explicit XRGamepadData(
      WTF::Vector<XRGamepadPtr> gamepads);

  ~XRGamepadData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRGamepadDataPtr>
  XRGamepadDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRGamepadData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRGamepadData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRGamepadData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRGamepadData_UnserializedMessageContext<
            UserType, XRGamepadData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRGamepadData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRGamepadData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRGamepadData_UnserializedMessageContext<
            UserType, XRGamepadData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRGamepadData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<XRGamepadPtr> gamepads;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRGamepadData);
};

template <typename StructPtrType>
XRRuntimeSessionOptionsPtr XRRuntimeSessionOptions::Clone() const {
  return New(
      mojo::Clone(immersive),
      mojo::Clone(environment_integration),
      mojo::Clone(render_process_id),
      mojo::Clone(render_frame_id),
      mojo::Clone(use_legacy_webvr_render_path)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRRuntimeSessionOptions>::value>::type*>
bool XRRuntimeSessionOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->immersive, other_struct.immersive))
    return false;
  if (!mojo::Equals(this->environment_integration, other_struct.environment_integration))
    return false;
  if (!mojo::Equals(this->render_process_id, other_struct.render_process_id))
    return false;
  if (!mojo::Equals(this->render_frame_id, other_struct.render_frame_id))
    return false;
  if (!mojo::Equals(this->use_legacy_webvr_render_path, other_struct.use_legacy_webvr_render_path))
    return false;
  return true;
}
template <typename StructPtrType>
XRGamepadButtonPtr XRGamepadButton::Clone() const {
  return New(
      mojo::Clone(pressed),
      mojo::Clone(touched),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRGamepadButton>::value>::type*>
bool XRGamepadButton::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pressed, other_struct.pressed))
    return false;
  if (!mojo::Equals(this->touched, other_struct.touched))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
XRGamepadPtr XRGamepad::Clone() const {
  return New(
      mojo::Clone(can_provide_orientation),
      mojo::Clone(can_provide_position),
      mojo::Clone(axes),
      mojo::Clone(buttons),
      mojo::Clone(pose),
      mojo::Clone(hand),
      mojo::Clone(controller_id),
      mojo::Clone(timestamp)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRGamepad>::value>::type*>
bool XRGamepad::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->can_provide_orientation, other_struct.can_provide_orientation))
    return false;
  if (!mojo::Equals(this->can_provide_position, other_struct.can_provide_position))
    return false;
  if (!mojo::Equals(this->axes, other_struct.axes))
    return false;
  if (!mojo::Equals(this->buttons, other_struct.buttons))
    return false;
  if (!mojo::Equals(this->pose, other_struct.pose))
    return false;
  if (!mojo::Equals(this->hand, other_struct.hand))
    return false;
  if (!mojo::Equals(this->controller_id, other_struct.controller_id))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  return true;
}
template <typename StructPtrType>
XRGamepadDataPtr XRGamepadData::Clone() const {
  return New(
      mojo::Clone(gamepads)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRGamepadData>::value>::type*>
bool XRGamepadData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->gamepads, other_struct.gamepads))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRRuntimeSessionOptions::DataView,
                                         ::device::mojom::blink::XRRuntimeSessionOptionsPtr> {
  static bool IsNull(const ::device::mojom::blink::XRRuntimeSessionOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRRuntimeSessionOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRRuntimeSessionOptions::immersive) immersive(
      const ::device::mojom::blink::XRRuntimeSessionOptionsPtr& input) {
    return input->immersive;
  }

  static decltype(::device::mojom::blink::XRRuntimeSessionOptions::environment_integration) environment_integration(
      const ::device::mojom::blink::XRRuntimeSessionOptionsPtr& input) {
    return input->environment_integration;
  }

  static decltype(::device::mojom::blink::XRRuntimeSessionOptions::render_process_id) render_process_id(
      const ::device::mojom::blink::XRRuntimeSessionOptionsPtr& input) {
    return input->render_process_id;
  }

  static decltype(::device::mojom::blink::XRRuntimeSessionOptions::render_frame_id) render_frame_id(
      const ::device::mojom::blink::XRRuntimeSessionOptionsPtr& input) {
    return input->render_frame_id;
  }

  static decltype(::device::mojom::blink::XRRuntimeSessionOptions::use_legacy_webvr_render_path) use_legacy_webvr_render_path(
      const ::device::mojom::blink::XRRuntimeSessionOptionsPtr& input) {
    return input->use_legacy_webvr_render_path;
  }

  static bool Read(::device::mojom::blink::XRRuntimeSessionOptions::DataView input, ::device::mojom::blink::XRRuntimeSessionOptionsPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRGamepadButton::DataView,
                                         ::device::mojom::blink::XRGamepadButtonPtr> {
  static bool IsNull(const ::device::mojom::blink::XRGamepadButtonPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRGamepadButtonPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRGamepadButton::pressed) pressed(
      const ::device::mojom::blink::XRGamepadButtonPtr& input) {
    return input->pressed;
  }

  static decltype(::device::mojom::blink::XRGamepadButton::touched) touched(
      const ::device::mojom::blink::XRGamepadButtonPtr& input) {
    return input->touched;
  }

  static decltype(::device::mojom::blink::XRGamepadButton::value) value(
      const ::device::mojom::blink::XRGamepadButtonPtr& input) {
    return input->value;
  }

  static bool Read(::device::mojom::blink::XRGamepadButton::DataView input, ::device::mojom::blink::XRGamepadButtonPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRGamepad::DataView,
                                         ::device::mojom::blink::XRGamepadPtr> {
  static bool IsNull(const ::device::mojom::blink::XRGamepadPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRGamepadPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRGamepad::can_provide_orientation) can_provide_orientation(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->can_provide_orientation;
  }

  static decltype(::device::mojom::blink::XRGamepad::can_provide_position) can_provide_position(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->can_provide_position;
  }

  static const decltype(::device::mojom::blink::XRGamepad::axes)& axes(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->axes;
  }

  static const decltype(::device::mojom::blink::XRGamepad::buttons)& buttons(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->buttons;
  }

  static const decltype(::device::mojom::blink::XRGamepad::pose)& pose(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->pose;
  }

  static decltype(::device::mojom::blink::XRGamepad::hand) hand(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->hand;
  }

  static decltype(::device::mojom::blink::XRGamepad::controller_id) controller_id(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->controller_id;
  }

  static const decltype(::device::mojom::blink::XRGamepad::timestamp)& timestamp(
      const ::device::mojom::blink::XRGamepadPtr& input) {
    return input->timestamp;
  }

  static bool Read(::device::mojom::blink::XRGamepad::DataView input, ::device::mojom::blink::XRGamepadPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRGamepadData::DataView,
                                         ::device::mojom::blink::XRGamepadDataPtr> {
  static bool IsNull(const ::device::mojom::blink::XRGamepadDataPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRGamepadDataPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::XRGamepadData::gamepads)& gamepads(
      const ::device::mojom::blink::XRGamepadDataPtr& input) {
    return input->gamepads;
  }

  static bool Read(::device::mojom::blink::XRGamepadData::DataView input, ::device::mojom::blink::XRGamepadDataPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_H_