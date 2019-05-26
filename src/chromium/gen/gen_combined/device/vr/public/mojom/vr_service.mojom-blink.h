// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_H_

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
#include "device/vr/public/mojom/vr_service.mojom-shared.h"
#include "device/vr/public/mojom/vr_service.mojom-blink-forward.h"
#include "device/gamepad/public/mojom/gamepad.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "gpu/ipc/common/mailbox_holder.mojom-blink.h"
#include "gpu/ipc/common/sync_token.mojom-blink.h"
#include "ui/display/mojo/display.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-blink.h"
#include "ui/gfx/mojo/transform.mojom-blink.h"

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




namespace WTF {
struct device_mojom_internal_XRDeviceId_DataHashFn {
  static unsigned GetHash(const ::device::mojom::XRDeviceId& value) {
    using utype = std::underlying_type<::device::mojom::XRDeviceId>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::XRDeviceId& left, const ::device::mojom::XRDeviceId& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::XRDeviceId>
    : public GenericHashTraits<::device::mojom::XRDeviceId> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::XRDeviceId& value) {
    return value == static_cast<::device::mojom::XRDeviceId>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::XRDeviceId& slot, bool) {
    slot = static_cast<::device::mojom::XRDeviceId>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::XRDeviceId& value) {
    return value == static_cast<::device::mojom::XRDeviceId>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_XRHandedness_DataHashFn {
  static unsigned GetHash(const ::device::mojom::XRHandedness& value) {
    using utype = std::underlying_type<::device::mojom::XRHandedness>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::XRHandedness& left, const ::device::mojom::XRHandedness& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::XRHandedness>
    : public GenericHashTraits<::device::mojom::XRHandedness> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::XRHandedness& value) {
    return value == static_cast<::device::mojom::XRHandedness>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::XRHandedness& slot, bool) {
    slot = static_cast<::device::mojom::XRHandedness>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::XRHandedness& value) {
    return value == static_cast<::device::mojom::XRHandedness>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_XRTargetRayMode_DataHashFn {
  static unsigned GetHash(const ::device::mojom::XRTargetRayMode& value) {
    using utype = std::underlying_type<::device::mojom::XRTargetRayMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::XRTargetRayMode& left, const ::device::mojom::XRTargetRayMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::XRTargetRayMode>
    : public GenericHashTraits<::device::mojom::XRTargetRayMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::XRTargetRayMode& value) {
    return value == static_cast<::device::mojom::XRTargetRayMode>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::XRTargetRayMode& slot, bool) {
    slot = static_cast<::device::mojom::XRTargetRayMode>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::XRTargetRayMode& value) {
    return value == static_cast<::device::mojom::XRTargetRayMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_XRPresentationTransportMethod_DataHashFn {
  static unsigned GetHash(const ::device::mojom::XRPresentationTransportMethod& value) {
    using utype = std::underlying_type<::device::mojom::XRPresentationTransportMethod>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::XRPresentationTransportMethod& left, const ::device::mojom::XRPresentationTransportMethod& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::XRPresentationTransportMethod>
    : public GenericHashTraits<::device::mojom::XRPresentationTransportMethod> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::XRPresentationTransportMethod& value) {
    return value == static_cast<::device::mojom::XRPresentationTransportMethod>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::XRPresentationTransportMethod& slot, bool) {
    slot = static_cast<::device::mojom::XRPresentationTransportMethod>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::XRPresentationTransportMethod& value) {
    return value == static_cast<::device::mojom::XRPresentationTransportMethod>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_XRPlaneOrientation_DataHashFn {
  static unsigned GetHash(const ::device::mojom::XRPlaneOrientation& value) {
    using utype = std::underlying_type<::device::mojom::XRPlaneOrientation>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::XRPlaneOrientation& left, const ::device::mojom::XRPlaneOrientation& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::XRPlaneOrientation>
    : public GenericHashTraits<::device::mojom::XRPlaneOrientation> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::XRPlaneOrientation& value) {
    return value == static_cast<::device::mojom::XRPlaneOrientation>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::XRPlaneOrientation& slot, bool) {
    slot = static_cast<::device::mojom::XRPlaneOrientation>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::XRPlaneOrientation& value) {
    return value == static_cast<::device::mojom::XRPlaneOrientation>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_VRDisplayEventReason_DataHashFn {
  static unsigned GetHash(const ::device::mojom::VRDisplayEventReason& value) {
    using utype = std::underlying_type<::device::mojom::VRDisplayEventReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::VRDisplayEventReason& left, const ::device::mojom::VRDisplayEventReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::VRDisplayEventReason>
    : public GenericHashTraits<::device::mojom::VRDisplayEventReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::VRDisplayEventReason& value) {
    return value == static_cast<::device::mojom::VRDisplayEventReason>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::VRDisplayEventReason& slot, bool) {
    slot = static_cast<::device::mojom::VRDisplayEventReason>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::VRDisplayEventReason& value) {
    return value == static_cast<::device::mojom::VRDisplayEventReason>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {

class VRServiceProxy;

template <typename ImplRefTraits>
class VRServiceStub;

class VRServiceRequestValidator;
class VRServiceResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRService
    : public VRServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VRServiceInterfaceBase;
  using Proxy_ = VRServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRServiceStub<ImplRefTraits>;

  using RequestValidator_ = VRServiceRequestValidator;
  using ResponseValidator_ = VRServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestDeviceMinVersion = 0,
    kSetClientMinVersion = 0,
    kSetListeningForActivateMinVersion = 0,
  };
  virtual ~VRService() {}


  using RequestDeviceCallback = base::OnceCallback<void(XRDevicePtr)>;
  
  virtual void RequestDevice(RequestDeviceCallback callback) = 0;

  
  virtual void SetClient(VRServiceClientPtr client) = 0;

  
  virtual void SetListeningForActivate(VRDisplayClientPtr client) = 0;
};

class VRServiceClientProxy;

template <typename ImplRefTraits>
class VRServiceClientStub;

class VRServiceClientRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceClient
    : public VRServiceClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VRServiceClientInterfaceBase;
  using Proxy_ = VRServiceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRServiceClientStub<ImplRefTraits>;

  using RequestValidator_ = VRServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceChangedMinVersion = 0,
  };
  virtual ~VRServiceClient() {}

  
  virtual void OnDeviceChanged() = 0;
};

class XRDeviceProxy;

template <typename ImplRefTraits>
class XRDeviceStub;

class XRDeviceRequestValidator;
class XRDeviceResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDevice
    : public XRDeviceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRDeviceInterfaceBase;
  using Proxy_ = XRDeviceProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRDeviceStub<ImplRefTraits>;

  using RequestValidator_ = XRDeviceRequestValidator;
  using ResponseValidator_ = XRDeviceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestSessionMinVersion = 0,
    kSupportsSessionMinVersion = 0,
    kGetImmersiveVRDisplayInfoMinVersion = 0,
    kExitPresentMinVersion = 0,
  };
  virtual ~XRDevice() {}


  using RequestSessionCallback = base::OnceCallback<void(XRSessionPtr)>;
  
  virtual void RequestSession(XRSessionOptionsPtr options, bool triggered_by_displayactive, RequestSessionCallback callback) = 0;


  using SupportsSessionCallback = base::OnceCallback<void(bool)>;
  
  virtual void SupportsSession(XRSessionOptionsPtr options, SupportsSessionCallback callback) = 0;


  using GetImmersiveVRDisplayInfoCallback = base::OnceCallback<void(VRDisplayInfoPtr)>;
  
  virtual void GetImmersiveVRDisplayInfo(GetImmersiveVRDisplayInfoCallback callback) = 0;

  
  virtual void ExitPresent() = 0;
};

class XREnvironmentIntegrationProviderProxy;

template <typename ImplRefTraits>
class XREnvironmentIntegrationProviderStub;

class XREnvironmentIntegrationProviderRequestValidator;
class XREnvironmentIntegrationProviderResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProvider
    : public XREnvironmentIntegrationProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XREnvironmentIntegrationProviderInterfaceBase;
  using Proxy_ = XREnvironmentIntegrationProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = XREnvironmentIntegrationProviderStub<ImplRefTraits>;

  using RequestValidator_ = XREnvironmentIntegrationProviderRequestValidator;
  using ResponseValidator_ = XREnvironmentIntegrationProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestHitTestMinVersion = 0,
  };
  virtual ~XREnvironmentIntegrationProvider() {}


  using RequestHitTestCallback = base::OnceCallback<void(base::Optional<WTF::Vector<XRHitResultPtr>>)>;
  
  virtual void RequestHitTest(XRRayPtr ray, RequestHitTestCallback callback) = 0;
};

class XRFrameDataProviderProxy;

template <typename ImplRefTraits>
class XRFrameDataProviderStub;

class XRFrameDataProviderRequestValidator;
class XRFrameDataProviderResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProvider
    : public XRFrameDataProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRFrameDataProviderInterfaceBase;
  using Proxy_ = XRFrameDataProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRFrameDataProviderStub<ImplRefTraits>;

  using RequestValidator_ = XRFrameDataProviderRequestValidator;
  using ResponseValidator_ = XRFrameDataProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetFrameDataMinVersion = 0,
    kGetEnvironmentIntegrationProviderMinVersion = 0,
  };
  virtual ~XRFrameDataProvider() {}


  using GetFrameDataCallback = base::OnceCallback<void(XRFrameDataPtr)>;
  
  virtual void GetFrameData(XRFrameDataRequestOptionsPtr options, GetFrameDataCallback callback) = 0;

  
  virtual void GetEnvironmentIntegrationProvider(XREnvironmentIntegrationProviderAssociatedRequest environment_provider) = 0;
};

class XRPresentationProviderProxy;

template <typename ImplRefTraits>
class XRPresentationProviderStub;

class XRPresentationProviderRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationProvider
    : public XRPresentationProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRPresentationProviderInterfaceBase;
  using Proxy_ = XRPresentationProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRPresentationProviderStub<ImplRefTraits>;

  using RequestValidator_ = XRPresentationProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateLayerBoundsMinVersion = 0,
    kSubmitFrameMissingMinVersion = 0,
    kSubmitFrameMinVersion = 0,
    kSubmitFrameWithTextureHandleMinVersion = 0,
    kSubmitFrameDrawnIntoTextureMinVersion = 0,
  };
  virtual ~XRPresentationProvider() {}

  
  virtual void UpdateLayerBounds(int16_t frame_id, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, const ::blink::WebSize& source_size) = 0;

  
  virtual void SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) = 0;

  
  virtual void SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) = 0;

  
  virtual void SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) = 0;

  
  virtual void SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) = 0;
};

class XRPresentationClientProxy;

template <typename ImplRefTraits>
class XRPresentationClientStub;

class XRPresentationClientRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationClient
    : public XRPresentationClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRPresentationClientInterfaceBase;
  using Proxy_ = XRPresentationClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRPresentationClientStub<ImplRefTraits>;

  using RequestValidator_ = XRPresentationClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSubmitFrameTransferredMinVersion = 0,
    kOnSubmitFrameRenderedMinVersion = 0,
    kOnSubmitFrameGpuFenceMinVersion = 0,
  };
  virtual ~XRPresentationClient() {}

  
  virtual void OnSubmitFrameTransferred(bool success) = 0;

  
  virtual void OnSubmitFrameRendered() = 0;

  
  virtual void OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) = 0;
};

class XRSessionClientProxy;

template <typename ImplRefTraits>
class XRSessionClientStub;

class XRSessionClientRequestValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionClient
    : public XRSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = XRSessionClientInterfaceBase;
  using Proxy_ = XRSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = XRSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = XRSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnChangedMinVersion = 0,
    kOnExitPresentMinVersion = 0,
    kOnBlurMinVersion = 0,
    kOnFocusMinVersion = 0,
  };
  virtual ~XRSessionClient() {}

  
  virtual void OnChanged(VRDisplayInfoPtr display) = 0;

  
  virtual void OnExitPresent() = 0;

  
  virtual void OnBlur() = 0;

  
  virtual void OnFocus() = 0;
};

class VRDisplayClientProxy;

template <typename ImplRefTraits>
class VRDisplayClientStub;

class VRDisplayClientRequestValidator;
class VRDisplayClientResponseValidator;


class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClient
    : public VRDisplayClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VRDisplayClientInterfaceBase;
  using Proxy_ = VRDisplayClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = VRDisplayClientStub<ImplRefTraits>;

  using RequestValidator_ = VRDisplayClientRequestValidator;
  using ResponseValidator_ = VRDisplayClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnActivateMinVersion = 0,
    kOnDeactivateMinVersion = 0,
  };
  virtual ~VRDisplayClient() {}


  using OnActivateCallback = base::OnceCallback<void(bool)>;
  
  virtual void OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) = 0;

  
  virtual void OnDeactivate(VRDisplayEventReason reason) = 0;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceProxy
    : public VRService {
 public:
  using InterfaceType = VRService;

  explicit VRServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDevice(RequestDeviceCallback callback) final;
  void SetClient(VRServiceClientPtr client) final;
  void SetListeningForActivate(VRDisplayClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceClientProxy
    : public VRServiceClient {
 public:
  using InterfaceType = VRServiceClient;

  explicit VRServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceChanged() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDeviceProxy
    : public XRDevice {
 public:
  using InterfaceType = XRDevice;

  explicit XRDeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestSession(XRSessionOptionsPtr options, bool triggered_by_displayactive, RequestSessionCallback callback) final;
  void SupportsSession(XRSessionOptionsPtr options, SupportsSessionCallback callback) final;
  void GetImmersiveVRDisplayInfo(GetImmersiveVRDisplayInfoCallback callback) final;
  void ExitPresent() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProviderProxy
    : public XREnvironmentIntegrationProvider {
 public:
  using InterfaceType = XREnvironmentIntegrationProvider;

  explicit XREnvironmentIntegrationProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestHitTest(XRRayPtr ray, RequestHitTestCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProviderProxy
    : public XRFrameDataProvider {
 public:
  using InterfaceType = XRFrameDataProvider;

  explicit XRFrameDataProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetFrameData(XRFrameDataRequestOptionsPtr options, GetFrameDataCallback callback) final;
  void GetEnvironmentIntegrationProvider(XREnvironmentIntegrationProviderAssociatedRequest environment_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationProviderProxy
    : public XRPresentationProvider {
 public:
  using InterfaceType = XRPresentationProvider;

  explicit XRPresentationProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpdateLayerBounds(int16_t frame_id, const ::blink::WebFloatRect& left_bounds, const ::blink::WebFloatRect& right_bounds, const ::blink::WebSize& source_size) final;
  void SubmitFrameMissing(int16_t frame_id, const ::gpu::SyncToken& sync_token) final;
  void SubmitFrame(int16_t frame_id, const ::gpu::MailboxHolder& mailbox_holder, base::TimeDelta time_waited) final;
  void SubmitFrameWithTextureHandle(int16_t frameId, mojo::ScopedHandle texture) final;
  void SubmitFrameDrawnIntoTexture(int16_t frameId, const ::gpu::SyncToken& sync_token, base::TimeDelta time_waited) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationClientProxy
    : public XRPresentationClient {
 public:
  using InterfaceType = XRPresentationClient;

  explicit XRPresentationClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSubmitFrameTransferred(bool success) final;
  void OnSubmitFrameRendered() final;
  void OnSubmitFrameGpuFence(const ::gfx::GpuFenceHandle& gpu_fence_handle) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionClientProxy
    : public XRSessionClient {
 public:
  using InterfaceType = XRSessionClient;

  explicit XRSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnChanged(VRDisplayInfoPtr display) final;
  void OnExitPresent() final;
  void OnBlur() final;
  void OnFocus() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClientProxy
    : public VRDisplayClient {
 public:
  using InterfaceType = VRDisplayClient;

  explicit VRDisplayClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnActivate(VRDisplayEventReason reason, OnActivateCallback callback) final;
  void OnDeactivate(VRDisplayEventReason reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceStubDispatch {
 public:
  static bool Accept(VRService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRService>>
class VRServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRServiceStub() {}
  ~VRServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceClientStubDispatch {
 public:
  static bool Accept(VRServiceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRServiceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRServiceClient>>
class VRServiceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRServiceClientStub() {}
  ~VRServiceClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRServiceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDeviceStubDispatch {
 public:
  static bool Accept(XRDevice* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRDevice* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRDevice>>
class XRDeviceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRDeviceStub() {}
  ~XRDeviceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRDeviceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRDeviceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProviderStubDispatch {
 public:
  static bool Accept(XREnvironmentIntegrationProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XREnvironmentIntegrationProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XREnvironmentIntegrationProvider>>
class XREnvironmentIntegrationProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XREnvironmentIntegrationProviderStub() {}
  ~XREnvironmentIntegrationProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XREnvironmentIntegrationProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XREnvironmentIntegrationProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProviderStubDispatch {
 public:
  static bool Accept(XRFrameDataProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRFrameDataProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRFrameDataProvider>>
class XRFrameDataProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRFrameDataProviderStub() {}
  ~XRFrameDataProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRFrameDataProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRFrameDataProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationProviderStubDispatch {
 public:
  static bool Accept(XRPresentationProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRPresentationProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRPresentationProvider>>
class XRPresentationProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRPresentationProviderStub() {}
  ~XRPresentationProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRPresentationProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRPresentationProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationClientStubDispatch {
 public:
  static bool Accept(XRPresentationClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRPresentationClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRPresentationClient>>
class XRPresentationClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRPresentationClientStub() {}
  ~XRPresentationClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRPresentationClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRPresentationClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionClientStubDispatch {
 public:
  static bool Accept(XRSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XRSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XRSessionClient>>
class XRSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XRSessionClientStub() {}
  ~XRSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XRSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClientStubDispatch {
 public:
  static bool Accept(VRDisplayClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VRDisplayClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VRDisplayClient>>
class VRDisplayClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VRDisplayClientStub() {}
  ~VRDisplayClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRDisplayClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VRDisplayClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDeviceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRDeviceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XREnvironmentIntegrationProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSessionOptions {
 public:
  using DataView = XRSessionOptionsDataView;
  using Data_ = internal::XRSessionOptions_Data;

  template <typename... Args>
  static XRSessionOptionsPtr New(Args&&... args) {
    return XRSessionOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRSessionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<XRSessionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRSessionOptions>::Convert(*this);
  }


  XRSessionOptions();

  XRSessionOptions(
      bool immersive,
      bool environment_integration,
      bool use_legacy_webvr_render_path);

  ~XRSessionOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRSessionOptionsPtr>
  XRSessionOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRSessionOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRSessionOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRSessionOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRSessionOptions_UnserializedMessageContext<
            UserType, XRSessionOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRSessionOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRSessionOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRSessionOptions_UnserializedMessageContext<
            UserType, XRSessionOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRSessionOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool immersive;
  
  bool environment_integration;
  
  bool use_legacy_webvr_render_path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRFieldOfView {
 public:
  using DataView = VRFieldOfViewDataView;
  using Data_ = internal::VRFieldOfView_Data;

  template <typename... Args>
  static VRFieldOfViewPtr New(Args&&... args) {
    return VRFieldOfViewPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRFieldOfViewPtr From(const U& u) {
    return mojo::TypeConverter<VRFieldOfViewPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRFieldOfView>::Convert(*this);
  }


  VRFieldOfView();

  VRFieldOfView(
      float upDegrees,
      float downDegrees,
      float leftDegrees,
      float rightDegrees);

  ~VRFieldOfView();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRFieldOfViewPtr>
  VRFieldOfViewPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRFieldOfView>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRFieldOfView::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRFieldOfView::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRFieldOfView_UnserializedMessageContext<
            UserType, VRFieldOfView::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRFieldOfView::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VRFieldOfView::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRFieldOfView_UnserializedMessageContext<
            UserType, VRFieldOfView::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRFieldOfView::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float upDegrees;
  
  float downDegrees;
  
  float leftDegrees;
  
  float rightDegrees;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayCapabilities {
 public:
  using DataView = VRDisplayCapabilitiesDataView;
  using Data_ = internal::VRDisplayCapabilities_Data;

  template <typename... Args>
  static VRDisplayCapabilitiesPtr New(Args&&... args) {
    return VRDisplayCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRDisplayCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplayCapabilities>::Convert(*this);
  }


  VRDisplayCapabilities();

  VRDisplayCapabilities(
      bool hasPosition,
      bool hasExternalDisplay,
      bool canPresent,
      bool canProvideEnvironmentIntegration);

  ~VRDisplayCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayCapabilitiesPtr>
  VRDisplayCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplayCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRDisplayCapabilities::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRDisplayCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRDisplayCapabilities_UnserializedMessageContext<
            UserType, VRDisplayCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRDisplayCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VRDisplayCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRDisplayCapabilities_UnserializedMessageContext<
            UserType, VRDisplayCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRDisplayCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool hasPosition;
  
  bool hasExternalDisplay;
  
  bool canPresent;
  
  bool canProvideEnvironmentIntegration;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationTransportOptions {
 public:
  using DataView = XRPresentationTransportOptionsDataView;
  using Data_ = internal::XRPresentationTransportOptions_Data;

  template <typename... Args>
  static XRPresentationTransportOptionsPtr New(Args&&... args) {
    return XRPresentationTransportOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRPresentationTransportOptionsPtr From(const U& u) {
    return mojo::TypeConverter<XRPresentationTransportOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRPresentationTransportOptions>::Convert(*this);
  }


  XRPresentationTransportOptions();

  XRPresentationTransportOptions(
      XRPresentationTransportMethod transport_method,
      bool wait_for_transfer_notification,
      bool wait_for_render_notification,
      bool wait_for_gpu_fence);

  ~XRPresentationTransportOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRPresentationTransportOptionsPtr>
  XRPresentationTransportOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRPresentationTransportOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRPresentationTransportOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRPresentationTransportOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRPresentationTransportOptions_UnserializedMessageContext<
            UserType, XRPresentationTransportOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRPresentationTransportOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRPresentationTransportOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRPresentationTransportOptions_UnserializedMessageContext<
            UserType, XRPresentationTransportOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRPresentationTransportOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  XRPresentationTransportMethod transport_method;
  
  bool wait_for_transfer_notification;
  
  bool wait_for_render_notification;
  
  bool wait_for_gpu_fence;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPlanePointData {
 public:
  using DataView = XRPlanePointDataDataView;
  using Data_ = internal::XRPlanePointData_Data;

  template <typename... Args>
  static XRPlanePointDataPtr New(Args&&... args) {
    return XRPlanePointDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRPlanePointDataPtr From(const U& u) {
    return mojo::TypeConverter<XRPlanePointDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRPlanePointData>::Convert(*this);
  }


  XRPlanePointData();

  XRPlanePointData(
      float x,
      float z);

  ~XRPlanePointData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRPlanePointDataPtr>
  XRPlanePointDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRPlanePointData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRPlanePointData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRPlanePointData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRPlanePointData_UnserializedMessageContext<
            UserType, XRPlanePointData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRPlanePointData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRPlanePointData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRPlanePointData_UnserializedMessageContext<
            UserType, XRPlanePointData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRPlanePointData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float z;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameDataRequestOptions {
 public:
  using DataView = XRFrameDataRequestOptionsDataView;
  using Data_ = internal::XRFrameDataRequestOptions_Data;

  template <typename... Args>
  static XRFrameDataRequestOptionsPtr New(Args&&... args) {
    return XRFrameDataRequestOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRFrameDataRequestOptionsPtr From(const U& u) {
    return mojo::TypeConverter<XRFrameDataRequestOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRFrameDataRequestOptions>::Convert(*this);
  }


  XRFrameDataRequestOptions();

  explicit XRFrameDataRequestOptions(
      bool include_plane_data);

  ~XRFrameDataRequestOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRFrameDataRequestOptionsPtr>
  XRFrameDataRequestOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRFrameDataRequestOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRFrameDataRequestOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRFrameDataRequestOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRFrameDataRequestOptions_UnserializedMessageContext<
            UserType, XRFrameDataRequestOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRFrameDataRequestOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRFrameDataRequestOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRFrameDataRequestOptions_UnserializedMessageContext<
            UserType, XRFrameDataRequestOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRFrameDataRequestOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool include_plane_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRSession {
 public:
  using DataView = XRSessionDataView;
  using Data_ = internal::XRSession_Data;

  template <typename... Args>
  static XRSessionPtr New(Args&&... args) {
    return XRSessionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRSessionPtr From(const U& u) {
    return mojo::TypeConverter<XRSessionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRSession>::Convert(*this);
  }


  XRSession();

  XRSession(
      XRFrameDataProviderPtrInfo data_provider,
      XRSessionClientRequest client_request,
      VRDisplayInfoPtr display_info,
      XRPresentationConnectionPtr submit_frame_sink);

  ~XRSession();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRSessionPtr>
  XRSessionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRSession>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRSession::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRSession::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRSession_UnserializedMessageContext<
            UserType, XRSession::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRSession::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRSession::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRSession_UnserializedMessageContext<
            UserType, XRSession::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRSession::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  XRFrameDataProviderPtrInfo data_provider;
  
  XRSessionClientRequest client_request;
  
  VRDisplayInfoPtr display_info;
  
  XRPresentationConnectionPtr submit_frame_sink;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRSession);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPresentationConnection {
 public:
  using DataView = XRPresentationConnectionDataView;
  using Data_ = internal::XRPresentationConnection_Data;

  template <typename... Args>
  static XRPresentationConnectionPtr New(Args&&... args) {
    return XRPresentationConnectionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRPresentationConnectionPtr From(const U& u) {
    return mojo::TypeConverter<XRPresentationConnectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRPresentationConnection>::Convert(*this);
  }


  XRPresentationConnection();

  XRPresentationConnection(
      XRPresentationProviderPtrInfo provider,
      XRPresentationClientRequest client_request,
      XRPresentationTransportOptionsPtr transport_options);

  ~XRPresentationConnection();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRPresentationConnectionPtr>
  XRPresentationConnectionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRPresentationConnection>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRPresentationConnection::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRPresentationConnection::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRPresentationConnection_UnserializedMessageContext<
            UserType, XRPresentationConnection::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRPresentationConnection::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRPresentationConnection::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRPresentationConnection_UnserializedMessageContext<
            UserType, XRPresentationConnection::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRPresentationConnection::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  XRPresentationProviderPtrInfo provider;
  
  XRPresentationClientRequest client_request;
  
  XRPresentationTransportOptionsPtr transport_options;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRPresentationConnection);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRInputSourceDescription {
 public:
  using DataView = XRInputSourceDescriptionDataView;
  using Data_ = internal::XRInputSourceDescription_Data;

  template <typename... Args>
  static XRInputSourceDescriptionPtr New(Args&&... args) {
    return XRInputSourceDescriptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRInputSourceDescriptionPtr From(const U& u) {
    return mojo::TypeConverter<XRInputSourceDescriptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRInputSourceDescription>::Convert(*this);
  }


  XRInputSourceDescription();

  XRInputSourceDescription(
      XRTargetRayMode target_ray_mode,
      XRHandedness handedness,
      bool emulated_position,
      ::gfx::mojom::blink::TransformPtr pointer_offset);

  ~XRInputSourceDescription();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRInputSourceDescriptionPtr>
  XRInputSourceDescriptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRInputSourceDescription>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRInputSourceDescription::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRInputSourceDescription::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRInputSourceDescription_UnserializedMessageContext<
            UserType, XRInputSourceDescription::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRInputSourceDescription::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRInputSourceDescription::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRInputSourceDescription_UnserializedMessageContext<
            UserType, XRInputSourceDescription::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRInputSourceDescription::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  XRTargetRayMode target_ray_mode;
  
  XRHandedness handedness;
  
  bool emulated_position;
  
  ::gfx::mojom::blink::TransformPtr pointer_offset;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRInputSourceDescription);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRInputSourceState {
 public:
  using DataView = XRInputSourceStateDataView;
  using Data_ = internal::XRInputSourceState_Data;

  template <typename... Args>
  static XRInputSourceStatePtr New(Args&&... args) {
    return XRInputSourceStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRInputSourceStatePtr From(const U& u) {
    return mojo::TypeConverter<XRInputSourceStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRInputSourceState>::Convert(*this);
  }


  XRInputSourceState();

  XRInputSourceState(
      uint32_t source_id,
      XRInputSourceDescriptionPtr description,
      ::gfx::mojom::blink::TransformPtr grip,
      bool primary_input_pressed,
      bool primary_input_clicked,
      const base::Optional<device::Gamepad>& gamepad);

  ~XRInputSourceState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRInputSourceStatePtr>
  XRInputSourceStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRInputSourceState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRInputSourceState::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRInputSourceState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRInputSourceState_UnserializedMessageContext<
            UserType, XRInputSourceState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRInputSourceState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRInputSourceState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRInputSourceState_UnserializedMessageContext<
            UserType, XRInputSourceState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRInputSourceState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t source_id;
  
  XRInputSourceDescriptionPtr description;
  
  ::gfx::mojom::blink::TransformPtr grip;
  
  bool primary_input_pressed;
  
  bool primary_input_clicked;
  
  base::Optional<device::Gamepad> gamepad;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRInputSourceState);
};






class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRPose {
 public:
  using DataView = VRPoseDataView;
  using Data_ = internal::VRPose_Data;

  template <typename... Args>
  static VRPosePtr New(Args&&... args) {
    return VRPosePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRPosePtr From(const U& u) {
    return mojo::TypeConverter<VRPosePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRPose>::Convert(*this);
  }


  VRPose();

  VRPose(
      const base::Optional<WTF::Vector<float>>& orientation,
      const base::Optional<WTF::Vector<float>>& position,
      const base::Optional<WTF::Vector<float>>& angularVelocity,
      const base::Optional<WTF::Vector<float>>& linearVelocity,
      const base::Optional<WTF::Vector<float>>& angularAcceleration,
      const base::Optional<WTF::Vector<float>>& linearAcceleration,
      base::Optional<WTF::Vector<XRInputSourceStatePtr>> input_state,
      bool pose_reset);

  ~VRPose();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRPosePtr>
  VRPosePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRPose>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRPose::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRPose::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRPose_UnserializedMessageContext<
            UserType, VRPose::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRPose::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VRPose::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRPose_UnserializedMessageContext<
            UserType, VRPose::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRPose::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<WTF::Vector<float>> orientation;
  
  base::Optional<WTF::Vector<float>> position;
  
  base::Optional<WTF::Vector<float>> angularVelocity;
  
  base::Optional<WTF::Vector<float>> linearVelocity;
  
  base::Optional<WTF::Vector<float>> angularAcceleration;
  
  base::Optional<WTF::Vector<float>> linearAcceleration;
  
  base::Optional<WTF::Vector<XRInputSourceStatePtr>> input_state;
  
  bool pose_reset;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VRPose);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRRay {
 public:
  using DataView = XRRayDataView;
  using Data_ = internal::XRRay_Data;

  template <typename... Args>
  static XRRayPtr New(Args&&... args) {
    return XRRayPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRRayPtr From(const U& u) {
    return mojo::TypeConverter<XRRayPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRRay>::Convert(*this);
  }


  XRRay();

  XRRay(
      ::gfx::mojom::blink::Point3FPtr origin,
      ::gfx::mojom::blink::Vector3dFPtr direction);

  ~XRRay();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRRayPtr>
  XRRayPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRRay>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRRay::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRRay::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRRay_UnserializedMessageContext<
            UserType, XRRay::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRRay::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRRay::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRRay_UnserializedMessageContext<
            UserType, XRRay::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRRay::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::gfx::mojom::blink::Point3FPtr origin;
  
  ::gfx::mojom::blink::Vector3dFPtr direction;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRRay);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRHitResult {
 public:
  using DataView = XRHitResultDataView;
  using Data_ = internal::XRHitResult_Data;

  template <typename... Args>
  static XRHitResultPtr New(Args&&... args) {
    return XRHitResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRHitResultPtr From(const U& u) {
    return mojo::TypeConverter<XRHitResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRHitResult>::Convert(*this);
  }


  XRHitResult();

  explicit XRHitResult(
      const WTF::Vector<float>& hit_matrix);

  ~XRHitResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRHitResultPtr>
  XRHitResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRHitResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRHitResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRHitResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRHitResult_UnserializedMessageContext<
            UserType, XRHitResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRHitResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRHitResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRHitResult_UnserializedMessageContext<
            UserType, XRHitResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRHitResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<float> hit_matrix;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VREyeParameters {
 public:
  using DataView = VREyeParametersDataView;
  using Data_ = internal::VREyeParameters_Data;

  template <typename... Args>
  static VREyeParametersPtr New(Args&&... args) {
    return VREyeParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VREyeParametersPtr From(const U& u) {
    return mojo::TypeConverter<VREyeParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VREyeParameters>::Convert(*this);
  }


  VREyeParameters();

  VREyeParameters(
      VRFieldOfViewPtr fieldOfView,
      const WTF::Vector<float>& offset,
      uint32_t renderWidth,
      uint32_t renderHeight);

  ~VREyeParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VREyeParametersPtr>
  VREyeParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VREyeParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VREyeParameters::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VREyeParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VREyeParameters_UnserializedMessageContext<
            UserType, VREyeParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VREyeParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VREyeParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VREyeParameters_UnserializedMessageContext<
            UserType, VREyeParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VREyeParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VRFieldOfViewPtr fieldOfView;
  
  WTF::Vector<float> offset;
  
  uint32_t renderWidth;
  
  uint32_t renderHeight;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VREyeParameters);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRStageParameters {
 public:
  using DataView = VRStageParametersDataView;
  using Data_ = internal::VRStageParameters_Data;

  template <typename... Args>
  static VRStageParametersPtr New(Args&&... args) {
    return VRStageParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRStageParametersPtr From(const U& u) {
    return mojo::TypeConverter<VRStageParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRStageParameters>::Convert(*this);
  }


  VRStageParameters();

  VRStageParameters(
      const WTF::Vector<float>& standingTransform,
      float sizeX,
      float sizeZ,
      base::Optional<WTF::Vector<::gfx::mojom::blink::Point3FPtr>> bounds);

  ~VRStageParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRStageParametersPtr>
  VRStageParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRStageParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRStageParameters::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRStageParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRStageParameters_UnserializedMessageContext<
            UserType, VRStageParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRStageParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VRStageParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRStageParameters_UnserializedMessageContext<
            UserType, VRStageParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRStageParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<float> standingTransform;
  
  float sizeX;
  
  float sizeZ;
  
  base::Optional<WTF::Vector<::gfx::mojom::blink::Point3FPtr>> bounds;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VRStageParameters);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) VRDisplayInfo {
 public:
  using DataView = VRDisplayInfoDataView;
  using Data_ = internal::VRDisplayInfo_Data;

  template <typename... Args>
  static VRDisplayInfoPtr New(Args&&... args) {
    return VRDisplayInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VRDisplayInfoPtr From(const U& u) {
    return mojo::TypeConverter<VRDisplayInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VRDisplayInfo>::Convert(*this);
  }


  VRDisplayInfo();

  VRDisplayInfo(
      XRDeviceId id,
      const WTF::String& displayName,
      VRDisplayCapabilitiesPtr capabilities,
      VRStageParametersPtr stageParameters,
      VREyeParametersPtr leftEye,
      VREyeParametersPtr rightEye,
      float webvr_default_framebuffer_scale,
      float webxr_default_framebuffer_scale);

  ~VRDisplayInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VRDisplayInfoPtr>
  VRDisplayInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VRDisplayInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VRDisplayInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VRDisplayInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VRDisplayInfo_UnserializedMessageContext<
            UserType, VRDisplayInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VRDisplayInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VRDisplayInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VRDisplayInfo_UnserializedMessageContext<
            UserType, VRDisplayInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VRDisplayInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  XRDeviceId id;
  
  WTF::String displayName;
  
  VRDisplayCapabilitiesPtr capabilities;
  
  VRStageParametersPtr stageParameters;
  
  VREyeParametersPtr leftEye;
  
  VREyeParametersPtr rightEye;
  
  float webvr_default_framebuffer_scale;
  
  float webxr_default_framebuffer_scale;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VRDisplayInfo);
};







class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRPlaneData {
 public:
  using DataView = XRPlaneDataDataView;
  using Data_ = internal::XRPlaneData_Data;

  template <typename... Args>
  static XRPlaneDataPtr New(Args&&... args) {
    return XRPlaneDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRPlaneDataPtr From(const U& u) {
    return mojo::TypeConverter<XRPlaneDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRPlaneData>::Convert(*this);
  }


  XRPlaneData();

  XRPlaneData(
      int32_t id,
      XRPlaneOrientation orientation,
      VRPosePtr pose,
      WTF::Vector<XRPlanePointDataPtr> polygon);

  ~XRPlaneData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRPlaneDataPtr>
  XRPlaneDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRPlaneData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRPlaneData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRPlaneData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRPlaneData_UnserializedMessageContext<
            UserType, XRPlaneData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRPlaneData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRPlaneData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRPlaneData_UnserializedMessageContext<
            UserType, XRPlaneData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRPlaneData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t id;
  
  XRPlaneOrientation orientation;
  
  VRPosePtr pose;
  
  WTF::Vector<XRPlanePointDataPtr> polygon;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRPlaneData);
};





class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) XRFrameData {
 public:
  using DataView = XRFrameDataDataView;
  using Data_ = internal::XRFrameData_Data;

  template <typename... Args>
  static XRFrameDataPtr New(Args&&... args) {
    return XRFrameDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static XRFrameDataPtr From(const U& u) {
    return mojo::TypeConverter<XRFrameDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, XRFrameData>::Convert(*this);
  }


  XRFrameData();

  XRFrameData(
      VRPosePtr pose,
      base::TimeDelta time_delta,
      const base::Optional<::gpu::MailboxHolder>& buffer_holder,
      int16_t frame_id,
      VREyeParametersPtr left_eye,
      VREyeParametersPtr right_eye,
      bool stage_parameters_updated,
      VRStageParametersPtr stage_parameters,
      base::Optional<WTF::Vector<XRPlaneDataPtr>> detected_planes);

  ~XRFrameData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = XRFrameDataPtr>
  XRFrameDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, XRFrameData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        XRFrameData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        XRFrameData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::XRFrameData_UnserializedMessageContext<
            UserType, XRFrameData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<XRFrameData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return XRFrameData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::XRFrameData_UnserializedMessageContext<
            UserType, XRFrameData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<XRFrameData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VRPosePtr pose;
  
  base::TimeDelta time_delta;
  
  base::Optional<::gpu::MailboxHolder> buffer_holder;
  
  int16_t frame_id;
  
  VREyeParametersPtr left_eye;
  
  VREyeParametersPtr right_eye;
  
  bool stage_parameters_updated;
  
  VRStageParametersPtr stage_parameters;
  
  base::Optional<WTF::Vector<XRPlaneDataPtr>> detected_planes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(XRFrameData);
};


template <typename StructPtrType>
XRSessionOptionsPtr XRSessionOptions::Clone() const {
  return New(
      mojo::Clone(immersive),
      mojo::Clone(environment_integration),
      mojo::Clone(use_legacy_webvr_render_path)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRSessionOptions>::value>::type*>
bool XRSessionOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->immersive, other_struct.immersive))
    return false;
  if (!mojo::Equals(this->environment_integration, other_struct.environment_integration))
    return false;
  if (!mojo::Equals(this->use_legacy_webvr_render_path, other_struct.use_legacy_webvr_render_path))
    return false;
  return true;
}
template <typename StructPtrType>
XRSessionPtr XRSession::Clone() const {
  return New(
      mojo::Clone(data_provider),
      mojo::Clone(client_request),
      mojo::Clone(display_info),
      mojo::Clone(submit_frame_sink)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRSession>::value>::type*>
bool XRSession::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data_provider, other_struct.data_provider))
    return false;
  if (!mojo::Equals(this->client_request, other_struct.client_request))
    return false;
  if (!mojo::Equals(this->display_info, other_struct.display_info))
    return false;
  if (!mojo::Equals(this->submit_frame_sink, other_struct.submit_frame_sink))
    return false;
  return true;
}
template <typename StructPtrType>
XRPresentationConnectionPtr XRPresentationConnection::Clone() const {
  return New(
      mojo::Clone(provider),
      mojo::Clone(client_request),
      mojo::Clone(transport_options)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRPresentationConnection>::value>::type*>
bool XRPresentationConnection::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->provider, other_struct.provider))
    return false;
  if (!mojo::Equals(this->client_request, other_struct.client_request))
    return false;
  if (!mojo::Equals(this->transport_options, other_struct.transport_options))
    return false;
  return true;
}
template <typename StructPtrType>
XRInputSourceDescriptionPtr XRInputSourceDescription::Clone() const {
  return New(
      mojo::Clone(target_ray_mode),
      mojo::Clone(handedness),
      mojo::Clone(emulated_position),
      mojo::Clone(pointer_offset)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRInputSourceDescription>::value>::type*>
bool XRInputSourceDescription::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->target_ray_mode, other_struct.target_ray_mode))
    return false;
  if (!mojo::Equals(this->handedness, other_struct.handedness))
    return false;
  if (!mojo::Equals(this->emulated_position, other_struct.emulated_position))
    return false;
  if (!mojo::Equals(this->pointer_offset, other_struct.pointer_offset))
    return false;
  return true;
}
template <typename StructPtrType>
XRInputSourceStatePtr XRInputSourceState::Clone() const {
  return New(
      mojo::Clone(source_id),
      mojo::Clone(description),
      mojo::Clone(grip),
      mojo::Clone(primary_input_pressed),
      mojo::Clone(primary_input_clicked),
      mojo::Clone(gamepad)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRInputSourceState>::value>::type*>
bool XRInputSourceState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_id, other_struct.source_id))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->grip, other_struct.grip))
    return false;
  if (!mojo::Equals(this->primary_input_pressed, other_struct.primary_input_pressed))
    return false;
  if (!mojo::Equals(this->primary_input_clicked, other_struct.primary_input_clicked))
    return false;
  if (!mojo::Equals(this->gamepad, other_struct.gamepad))
    return false;
  return true;
}
template <typename StructPtrType>
VRFieldOfViewPtr VRFieldOfView::Clone() const {
  return New(
      mojo::Clone(upDegrees),
      mojo::Clone(downDegrees),
      mojo::Clone(leftDegrees),
      mojo::Clone(rightDegrees)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRFieldOfView>::value>::type*>
bool VRFieldOfView::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->upDegrees, other_struct.upDegrees))
    return false;
  if (!mojo::Equals(this->downDegrees, other_struct.downDegrees))
    return false;
  if (!mojo::Equals(this->leftDegrees, other_struct.leftDegrees))
    return false;
  if (!mojo::Equals(this->rightDegrees, other_struct.rightDegrees))
    return false;
  return true;
}
template <typename StructPtrType>
VRPosePtr VRPose::Clone() const {
  return New(
      mojo::Clone(orientation),
      mojo::Clone(position),
      mojo::Clone(angularVelocity),
      mojo::Clone(linearVelocity),
      mojo::Clone(angularAcceleration),
      mojo::Clone(linearAcceleration),
      mojo::Clone(input_state),
      mojo::Clone(pose_reset)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRPose>::value>::type*>
bool VRPose::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->position, other_struct.position))
    return false;
  if (!mojo::Equals(this->angularVelocity, other_struct.angularVelocity))
    return false;
  if (!mojo::Equals(this->linearVelocity, other_struct.linearVelocity))
    return false;
  if (!mojo::Equals(this->angularAcceleration, other_struct.angularAcceleration))
    return false;
  if (!mojo::Equals(this->linearAcceleration, other_struct.linearAcceleration))
    return false;
  if (!mojo::Equals(this->input_state, other_struct.input_state))
    return false;
  if (!mojo::Equals(this->pose_reset, other_struct.pose_reset))
    return false;
  return true;
}
template <typename StructPtrType>
XRRayPtr XRRay::Clone() const {
  return New(
      mojo::Clone(origin),
      mojo::Clone(direction)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRRay>::value>::type*>
bool XRRay::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->direction, other_struct.direction))
    return false;
  return true;
}
template <typename StructPtrType>
XRHitResultPtr XRHitResult::Clone() const {
  return New(
      mojo::Clone(hit_matrix)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRHitResult>::value>::type*>
bool XRHitResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hit_matrix, other_struct.hit_matrix))
    return false;
  return true;
}
template <typename StructPtrType>
VRDisplayCapabilitiesPtr VRDisplayCapabilities::Clone() const {
  return New(
      mojo::Clone(hasPosition),
      mojo::Clone(hasExternalDisplay),
      mojo::Clone(canPresent),
      mojo::Clone(canProvideEnvironmentIntegration)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplayCapabilities>::value>::type*>
bool VRDisplayCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hasPosition, other_struct.hasPosition))
    return false;
  if (!mojo::Equals(this->hasExternalDisplay, other_struct.hasExternalDisplay))
    return false;
  if (!mojo::Equals(this->canPresent, other_struct.canPresent))
    return false;
  if (!mojo::Equals(this->canProvideEnvironmentIntegration, other_struct.canProvideEnvironmentIntegration))
    return false;
  return true;
}
template <typename StructPtrType>
VREyeParametersPtr VREyeParameters::Clone() const {
  return New(
      mojo::Clone(fieldOfView),
      mojo::Clone(offset),
      mojo::Clone(renderWidth),
      mojo::Clone(renderHeight)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VREyeParameters>::value>::type*>
bool VREyeParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fieldOfView, other_struct.fieldOfView))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->renderWidth, other_struct.renderWidth))
    return false;
  if (!mojo::Equals(this->renderHeight, other_struct.renderHeight))
    return false;
  return true;
}
template <typename StructPtrType>
VRStageParametersPtr VRStageParameters::Clone() const {
  return New(
      mojo::Clone(standingTransform),
      mojo::Clone(sizeX),
      mojo::Clone(sizeZ),
      mojo::Clone(bounds)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRStageParameters>::value>::type*>
bool VRStageParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->standingTransform, other_struct.standingTransform))
    return false;
  if (!mojo::Equals(this->sizeX, other_struct.sizeX))
    return false;
  if (!mojo::Equals(this->sizeZ, other_struct.sizeZ))
    return false;
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  return true;
}
template <typename StructPtrType>
VRDisplayInfoPtr VRDisplayInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(displayName),
      mojo::Clone(capabilities),
      mojo::Clone(stageParameters),
      mojo::Clone(leftEye),
      mojo::Clone(rightEye),
      mojo::Clone(webvr_default_framebuffer_scale),
      mojo::Clone(webxr_default_framebuffer_scale)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VRDisplayInfo>::value>::type*>
bool VRDisplayInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->displayName, other_struct.displayName))
    return false;
  if (!mojo::Equals(this->capabilities, other_struct.capabilities))
    return false;
  if (!mojo::Equals(this->stageParameters, other_struct.stageParameters))
    return false;
  if (!mojo::Equals(this->leftEye, other_struct.leftEye))
    return false;
  if (!mojo::Equals(this->rightEye, other_struct.rightEye))
    return false;
  if (!mojo::Equals(this->webvr_default_framebuffer_scale, other_struct.webvr_default_framebuffer_scale))
    return false;
  if (!mojo::Equals(this->webxr_default_framebuffer_scale, other_struct.webxr_default_framebuffer_scale))
    return false;
  return true;
}
template <typename StructPtrType>
XRPresentationTransportOptionsPtr XRPresentationTransportOptions::Clone() const {
  return New(
      mojo::Clone(transport_method),
      mojo::Clone(wait_for_transfer_notification),
      mojo::Clone(wait_for_render_notification),
      mojo::Clone(wait_for_gpu_fence)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRPresentationTransportOptions>::value>::type*>
bool XRPresentationTransportOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->transport_method, other_struct.transport_method))
    return false;
  if (!mojo::Equals(this->wait_for_transfer_notification, other_struct.wait_for_transfer_notification))
    return false;
  if (!mojo::Equals(this->wait_for_render_notification, other_struct.wait_for_render_notification))
    return false;
  if (!mojo::Equals(this->wait_for_gpu_fence, other_struct.wait_for_gpu_fence))
    return false;
  return true;
}
template <typename StructPtrType>
XRPlanePointDataPtr XRPlanePointData::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(z)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRPlanePointData>::value>::type*>
bool XRPlanePointData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  return true;
}
template <typename StructPtrType>
XRPlaneDataPtr XRPlaneData::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(orientation),
      mojo::Clone(pose),
      mojo::Clone(polygon)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRPlaneData>::value>::type*>
bool XRPlaneData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->pose, other_struct.pose))
    return false;
  if (!mojo::Equals(this->polygon, other_struct.polygon))
    return false;
  return true;
}
template <typename StructPtrType>
XRFrameDataPtr XRFrameData::Clone() const {
  return New(
      mojo::Clone(pose),
      mojo::Clone(time_delta),
      mojo::Clone(buffer_holder),
      mojo::Clone(frame_id),
      mojo::Clone(left_eye),
      mojo::Clone(right_eye),
      mojo::Clone(stage_parameters_updated),
      mojo::Clone(stage_parameters),
      mojo::Clone(detected_planes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRFrameData>::value>::type*>
bool XRFrameData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pose, other_struct.pose))
    return false;
  if (!mojo::Equals(this->time_delta, other_struct.time_delta))
    return false;
  if (!mojo::Equals(this->buffer_holder, other_struct.buffer_holder))
    return false;
  if (!mojo::Equals(this->frame_id, other_struct.frame_id))
    return false;
  if (!mojo::Equals(this->left_eye, other_struct.left_eye))
    return false;
  if (!mojo::Equals(this->right_eye, other_struct.right_eye))
    return false;
  if (!mojo::Equals(this->stage_parameters_updated, other_struct.stage_parameters_updated))
    return false;
  if (!mojo::Equals(this->stage_parameters, other_struct.stage_parameters))
    return false;
  if (!mojo::Equals(this->detected_planes, other_struct.detected_planes))
    return false;
  return true;
}
template <typename StructPtrType>
XRFrameDataRequestOptionsPtr XRFrameDataRequestOptions::Clone() const {
  return New(
      mojo::Clone(include_plane_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, XRFrameDataRequestOptions>::value>::type*>
bool XRFrameDataRequestOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->include_plane_data, other_struct.include_plane_data))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRSessionOptions::DataView,
                                         ::device::mojom::blink::XRSessionOptionsPtr> {
  static bool IsNull(const ::device::mojom::blink::XRSessionOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRSessionOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRSessionOptions::immersive) immersive(
      const ::device::mojom::blink::XRSessionOptionsPtr& input) {
    return input->immersive;
  }

  static decltype(::device::mojom::blink::XRSessionOptions::environment_integration) environment_integration(
      const ::device::mojom::blink::XRSessionOptionsPtr& input) {
    return input->environment_integration;
  }

  static decltype(::device::mojom::blink::XRSessionOptions::use_legacy_webvr_render_path) use_legacy_webvr_render_path(
      const ::device::mojom::blink::XRSessionOptionsPtr& input) {
    return input->use_legacy_webvr_render_path;
  }

  static bool Read(::device::mojom::blink::XRSessionOptions::DataView input, ::device::mojom::blink::XRSessionOptionsPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRSession::DataView,
                                         ::device::mojom::blink::XRSessionPtr> {
  static bool IsNull(const ::device::mojom::blink::XRSessionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRSessionPtr* output) { output->reset(); }

  static  decltype(::device::mojom::blink::XRSession::data_provider)& data_provider(
       ::device::mojom::blink::XRSessionPtr& input) {
    return input->data_provider;
  }

  static  decltype(::device::mojom::blink::XRSession::client_request)& client_request(
       ::device::mojom::blink::XRSessionPtr& input) {
    return input->client_request;
  }

  static const decltype(::device::mojom::blink::XRSession::display_info)& display_info(
      const ::device::mojom::blink::XRSessionPtr& input) {
    return input->display_info;
  }

  static  decltype(::device::mojom::blink::XRSession::submit_frame_sink)& submit_frame_sink(
       ::device::mojom::blink::XRSessionPtr& input) {
    return input->submit_frame_sink;
  }

  static bool Read(::device::mojom::blink::XRSession::DataView input, ::device::mojom::blink::XRSessionPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRPresentationConnection::DataView,
                                         ::device::mojom::blink::XRPresentationConnectionPtr> {
  static bool IsNull(const ::device::mojom::blink::XRPresentationConnectionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRPresentationConnectionPtr* output) { output->reset(); }

  static  decltype(::device::mojom::blink::XRPresentationConnection::provider)& provider(
       ::device::mojom::blink::XRPresentationConnectionPtr& input) {
    return input->provider;
  }

  static  decltype(::device::mojom::blink::XRPresentationConnection::client_request)& client_request(
       ::device::mojom::blink::XRPresentationConnectionPtr& input) {
    return input->client_request;
  }

  static const decltype(::device::mojom::blink::XRPresentationConnection::transport_options)& transport_options(
      const ::device::mojom::blink::XRPresentationConnectionPtr& input) {
    return input->transport_options;
  }

  static bool Read(::device::mojom::blink::XRPresentationConnection::DataView input, ::device::mojom::blink::XRPresentationConnectionPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRInputSourceDescription::DataView,
                                         ::device::mojom::blink::XRInputSourceDescriptionPtr> {
  static bool IsNull(const ::device::mojom::blink::XRInputSourceDescriptionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRInputSourceDescriptionPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRInputSourceDescription::target_ray_mode) target_ray_mode(
      const ::device::mojom::blink::XRInputSourceDescriptionPtr& input) {
    return input->target_ray_mode;
  }

  static decltype(::device::mojom::blink::XRInputSourceDescription::handedness) handedness(
      const ::device::mojom::blink::XRInputSourceDescriptionPtr& input) {
    return input->handedness;
  }

  static decltype(::device::mojom::blink::XRInputSourceDescription::emulated_position) emulated_position(
      const ::device::mojom::blink::XRInputSourceDescriptionPtr& input) {
    return input->emulated_position;
  }

  static const decltype(::device::mojom::blink::XRInputSourceDescription::pointer_offset)& pointer_offset(
      const ::device::mojom::blink::XRInputSourceDescriptionPtr& input) {
    return input->pointer_offset;
  }

  static bool Read(::device::mojom::blink::XRInputSourceDescription::DataView input, ::device::mojom::blink::XRInputSourceDescriptionPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRInputSourceState::DataView,
                                         ::device::mojom::blink::XRInputSourceStatePtr> {
  static bool IsNull(const ::device::mojom::blink::XRInputSourceStatePtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRInputSourceStatePtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRInputSourceState::source_id) source_id(
      const ::device::mojom::blink::XRInputSourceStatePtr& input) {
    return input->source_id;
  }

  static const decltype(::device::mojom::blink::XRInputSourceState::description)& description(
      const ::device::mojom::blink::XRInputSourceStatePtr& input) {
    return input->description;
  }

  static const decltype(::device::mojom::blink::XRInputSourceState::grip)& grip(
      const ::device::mojom::blink::XRInputSourceStatePtr& input) {
    return input->grip;
  }

  static decltype(::device::mojom::blink::XRInputSourceState::primary_input_pressed) primary_input_pressed(
      const ::device::mojom::blink::XRInputSourceStatePtr& input) {
    return input->primary_input_pressed;
  }

  static decltype(::device::mojom::blink::XRInputSourceState::primary_input_clicked) primary_input_clicked(
      const ::device::mojom::blink::XRInputSourceStatePtr& input) {
    return input->primary_input_clicked;
  }

  static const decltype(::device::mojom::blink::XRInputSourceState::gamepad)& gamepad(
      const ::device::mojom::blink::XRInputSourceStatePtr& input) {
    return input->gamepad;
  }

  static bool Read(::device::mojom::blink::XRInputSourceState::DataView input, ::device::mojom::blink::XRInputSourceStatePtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::VRFieldOfView::DataView,
                                         ::device::mojom::blink::VRFieldOfViewPtr> {
  static bool IsNull(const ::device::mojom::blink::VRFieldOfViewPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::VRFieldOfViewPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::VRFieldOfView::upDegrees) upDegrees(
      const ::device::mojom::blink::VRFieldOfViewPtr& input) {
    return input->upDegrees;
  }

  static decltype(::device::mojom::blink::VRFieldOfView::downDegrees) downDegrees(
      const ::device::mojom::blink::VRFieldOfViewPtr& input) {
    return input->downDegrees;
  }

  static decltype(::device::mojom::blink::VRFieldOfView::leftDegrees) leftDegrees(
      const ::device::mojom::blink::VRFieldOfViewPtr& input) {
    return input->leftDegrees;
  }

  static decltype(::device::mojom::blink::VRFieldOfView::rightDegrees) rightDegrees(
      const ::device::mojom::blink::VRFieldOfViewPtr& input) {
    return input->rightDegrees;
  }

  static bool Read(::device::mojom::blink::VRFieldOfView::DataView input, ::device::mojom::blink::VRFieldOfViewPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::VRPose::DataView,
                                         ::device::mojom::blink::VRPosePtr> {
  static bool IsNull(const ::device::mojom::blink::VRPosePtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::VRPosePtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::VRPose::orientation)& orientation(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->orientation;
  }

  static const decltype(::device::mojom::blink::VRPose::position)& position(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->position;
  }

  static const decltype(::device::mojom::blink::VRPose::angularVelocity)& angularVelocity(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->angularVelocity;
  }

  static const decltype(::device::mojom::blink::VRPose::linearVelocity)& linearVelocity(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->linearVelocity;
  }

  static const decltype(::device::mojom::blink::VRPose::angularAcceleration)& angularAcceleration(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->angularAcceleration;
  }

  static const decltype(::device::mojom::blink::VRPose::linearAcceleration)& linearAcceleration(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->linearAcceleration;
  }

  static const decltype(::device::mojom::blink::VRPose::input_state)& input_state(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->input_state;
  }

  static decltype(::device::mojom::blink::VRPose::pose_reset) pose_reset(
      const ::device::mojom::blink::VRPosePtr& input) {
    return input->pose_reset;
  }

  static bool Read(::device::mojom::blink::VRPose::DataView input, ::device::mojom::blink::VRPosePtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRRay::DataView,
                                         ::device::mojom::blink::XRRayPtr> {
  static bool IsNull(const ::device::mojom::blink::XRRayPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRRayPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::XRRay::origin)& origin(
      const ::device::mojom::blink::XRRayPtr& input) {
    return input->origin;
  }

  static const decltype(::device::mojom::blink::XRRay::direction)& direction(
      const ::device::mojom::blink::XRRayPtr& input) {
    return input->direction;
  }

  static bool Read(::device::mojom::blink::XRRay::DataView input, ::device::mojom::blink::XRRayPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRHitResult::DataView,
                                         ::device::mojom::blink::XRHitResultPtr> {
  static bool IsNull(const ::device::mojom::blink::XRHitResultPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRHitResultPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::XRHitResult::hit_matrix)& hit_matrix(
      const ::device::mojom::blink::XRHitResultPtr& input) {
    return input->hit_matrix;
  }

  static bool Read(::device::mojom::blink::XRHitResult::DataView input, ::device::mojom::blink::XRHitResultPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::VRDisplayCapabilities::DataView,
                                         ::device::mojom::blink::VRDisplayCapabilitiesPtr> {
  static bool IsNull(const ::device::mojom::blink::VRDisplayCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::VRDisplayCapabilitiesPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::VRDisplayCapabilities::hasPosition) hasPosition(
      const ::device::mojom::blink::VRDisplayCapabilitiesPtr& input) {
    return input->hasPosition;
  }

  static decltype(::device::mojom::blink::VRDisplayCapabilities::hasExternalDisplay) hasExternalDisplay(
      const ::device::mojom::blink::VRDisplayCapabilitiesPtr& input) {
    return input->hasExternalDisplay;
  }

  static decltype(::device::mojom::blink::VRDisplayCapabilities::canPresent) canPresent(
      const ::device::mojom::blink::VRDisplayCapabilitiesPtr& input) {
    return input->canPresent;
  }

  static decltype(::device::mojom::blink::VRDisplayCapabilities::canProvideEnvironmentIntegration) canProvideEnvironmentIntegration(
      const ::device::mojom::blink::VRDisplayCapabilitiesPtr& input) {
    return input->canProvideEnvironmentIntegration;
  }

  static bool Read(::device::mojom::blink::VRDisplayCapabilities::DataView input, ::device::mojom::blink::VRDisplayCapabilitiesPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::VREyeParameters::DataView,
                                         ::device::mojom::blink::VREyeParametersPtr> {
  static bool IsNull(const ::device::mojom::blink::VREyeParametersPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::VREyeParametersPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::VREyeParameters::fieldOfView)& fieldOfView(
      const ::device::mojom::blink::VREyeParametersPtr& input) {
    return input->fieldOfView;
  }

  static const decltype(::device::mojom::blink::VREyeParameters::offset)& offset(
      const ::device::mojom::blink::VREyeParametersPtr& input) {
    return input->offset;
  }

  static decltype(::device::mojom::blink::VREyeParameters::renderWidth) renderWidth(
      const ::device::mojom::blink::VREyeParametersPtr& input) {
    return input->renderWidth;
  }

  static decltype(::device::mojom::blink::VREyeParameters::renderHeight) renderHeight(
      const ::device::mojom::blink::VREyeParametersPtr& input) {
    return input->renderHeight;
  }

  static bool Read(::device::mojom::blink::VREyeParameters::DataView input, ::device::mojom::blink::VREyeParametersPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::VRStageParameters::DataView,
                                         ::device::mojom::blink::VRStageParametersPtr> {
  static bool IsNull(const ::device::mojom::blink::VRStageParametersPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::VRStageParametersPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::VRStageParameters::standingTransform)& standingTransform(
      const ::device::mojom::blink::VRStageParametersPtr& input) {
    return input->standingTransform;
  }

  static decltype(::device::mojom::blink::VRStageParameters::sizeX) sizeX(
      const ::device::mojom::blink::VRStageParametersPtr& input) {
    return input->sizeX;
  }

  static decltype(::device::mojom::blink::VRStageParameters::sizeZ) sizeZ(
      const ::device::mojom::blink::VRStageParametersPtr& input) {
    return input->sizeZ;
  }

  static const decltype(::device::mojom::blink::VRStageParameters::bounds)& bounds(
      const ::device::mojom::blink::VRStageParametersPtr& input) {
    return input->bounds;
  }

  static bool Read(::device::mojom::blink::VRStageParameters::DataView input, ::device::mojom::blink::VRStageParametersPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::VRDisplayInfo::DataView,
                                         ::device::mojom::blink::VRDisplayInfoPtr> {
  static bool IsNull(const ::device::mojom::blink::VRDisplayInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::VRDisplayInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::VRDisplayInfo::id) id(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->id;
  }

  static const decltype(::device::mojom::blink::VRDisplayInfo::displayName)& displayName(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->displayName;
  }

  static const decltype(::device::mojom::blink::VRDisplayInfo::capabilities)& capabilities(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->capabilities;
  }

  static const decltype(::device::mojom::blink::VRDisplayInfo::stageParameters)& stageParameters(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->stageParameters;
  }

  static const decltype(::device::mojom::blink::VRDisplayInfo::leftEye)& leftEye(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->leftEye;
  }

  static const decltype(::device::mojom::blink::VRDisplayInfo::rightEye)& rightEye(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->rightEye;
  }

  static decltype(::device::mojom::blink::VRDisplayInfo::webvr_default_framebuffer_scale) webvr_default_framebuffer_scale(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->webvr_default_framebuffer_scale;
  }

  static decltype(::device::mojom::blink::VRDisplayInfo::webxr_default_framebuffer_scale) webxr_default_framebuffer_scale(
      const ::device::mojom::blink::VRDisplayInfoPtr& input) {
    return input->webxr_default_framebuffer_scale;
  }

  static bool Read(::device::mojom::blink::VRDisplayInfo::DataView input, ::device::mojom::blink::VRDisplayInfoPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRPresentationTransportOptions::DataView,
                                         ::device::mojom::blink::XRPresentationTransportOptionsPtr> {
  static bool IsNull(const ::device::mojom::blink::XRPresentationTransportOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRPresentationTransportOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRPresentationTransportOptions::transport_method) transport_method(
      const ::device::mojom::blink::XRPresentationTransportOptionsPtr& input) {
    return input->transport_method;
  }

  static decltype(::device::mojom::blink::XRPresentationTransportOptions::wait_for_transfer_notification) wait_for_transfer_notification(
      const ::device::mojom::blink::XRPresentationTransportOptionsPtr& input) {
    return input->wait_for_transfer_notification;
  }

  static decltype(::device::mojom::blink::XRPresentationTransportOptions::wait_for_render_notification) wait_for_render_notification(
      const ::device::mojom::blink::XRPresentationTransportOptionsPtr& input) {
    return input->wait_for_render_notification;
  }

  static decltype(::device::mojom::blink::XRPresentationTransportOptions::wait_for_gpu_fence) wait_for_gpu_fence(
      const ::device::mojom::blink::XRPresentationTransportOptionsPtr& input) {
    return input->wait_for_gpu_fence;
  }

  static bool Read(::device::mojom::blink::XRPresentationTransportOptions::DataView input, ::device::mojom::blink::XRPresentationTransportOptionsPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRPlanePointData::DataView,
                                         ::device::mojom::blink::XRPlanePointDataPtr> {
  static bool IsNull(const ::device::mojom::blink::XRPlanePointDataPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRPlanePointDataPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRPlanePointData::x) x(
      const ::device::mojom::blink::XRPlanePointDataPtr& input) {
    return input->x;
  }

  static decltype(::device::mojom::blink::XRPlanePointData::z) z(
      const ::device::mojom::blink::XRPlanePointDataPtr& input) {
    return input->z;
  }

  static bool Read(::device::mojom::blink::XRPlanePointData::DataView input, ::device::mojom::blink::XRPlanePointDataPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRPlaneData::DataView,
                                         ::device::mojom::blink::XRPlaneDataPtr> {
  static bool IsNull(const ::device::mojom::blink::XRPlaneDataPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRPlaneDataPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRPlaneData::id) id(
      const ::device::mojom::blink::XRPlaneDataPtr& input) {
    return input->id;
  }

  static decltype(::device::mojom::blink::XRPlaneData::orientation) orientation(
      const ::device::mojom::blink::XRPlaneDataPtr& input) {
    return input->orientation;
  }

  static const decltype(::device::mojom::blink::XRPlaneData::pose)& pose(
      const ::device::mojom::blink::XRPlaneDataPtr& input) {
    return input->pose;
  }

  static const decltype(::device::mojom::blink::XRPlaneData::polygon)& polygon(
      const ::device::mojom::blink::XRPlaneDataPtr& input) {
    return input->polygon;
  }

  static bool Read(::device::mojom::blink::XRPlaneData::DataView input, ::device::mojom::blink::XRPlaneDataPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRFrameData::DataView,
                                         ::device::mojom::blink::XRFrameDataPtr> {
  static bool IsNull(const ::device::mojom::blink::XRFrameDataPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRFrameDataPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::XRFrameData::pose)& pose(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->pose;
  }

  static const decltype(::device::mojom::blink::XRFrameData::time_delta)& time_delta(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->time_delta;
  }

  static const decltype(::device::mojom::blink::XRFrameData::buffer_holder)& buffer_holder(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->buffer_holder;
  }

  static decltype(::device::mojom::blink::XRFrameData::frame_id) frame_id(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->frame_id;
  }

  static const decltype(::device::mojom::blink::XRFrameData::left_eye)& left_eye(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->left_eye;
  }

  static const decltype(::device::mojom::blink::XRFrameData::right_eye)& right_eye(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->right_eye;
  }

  static decltype(::device::mojom::blink::XRFrameData::stage_parameters_updated) stage_parameters_updated(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->stage_parameters_updated;
  }

  static const decltype(::device::mojom::blink::XRFrameData::stage_parameters)& stage_parameters(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->stage_parameters;
  }

  static const decltype(::device::mojom::blink::XRFrameData::detected_planes)& detected_planes(
      const ::device::mojom::blink::XRFrameDataPtr& input) {
    return input->detected_planes;
  }

  static bool Read(::device::mojom::blink::XRFrameData::DataView input, ::device::mojom::blink::XRFrameDataPtr* output);
};


template <>
struct COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) StructTraits<::device::mojom::blink::XRFrameDataRequestOptions::DataView,
                                         ::device::mojom::blink::XRFrameDataRequestOptionsPtr> {
  static bool IsNull(const ::device::mojom::blink::XRFrameDataRequestOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::XRFrameDataRequestOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::XRFrameDataRequestOptions::include_plane_data) include_plane_data(
      const ::device::mojom::blink::XRFrameDataRequestOptionsPtr& input) {
    return input->include_plane_data;
  }

  static bool Read(::device::mojom::blink::XRFrameDataRequestOptions::DataView input, ::device::mojom::blink::XRFrameDataRequestOptionsPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_H_