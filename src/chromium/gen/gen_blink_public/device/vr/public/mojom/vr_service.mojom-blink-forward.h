// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_FORWARD_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"


namespace device {
namespace mojom {

enum class XRDeviceId : int32_t;

enum class XRHandedness : int32_t;

enum class XRTargetRayMode : int32_t;

enum class XRPresentationTransportMethod : int32_t;

enum class XRPlaneOrientation : int32_t;

enum class VRDisplayEventReason : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_XRDeviceId_DataHashFn;

template <>
struct DefaultHash<::device::mojom::XRDeviceId> {
  using Hash = device_mojom_internal_XRDeviceId_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_XRHandedness_DataHashFn;

template <>
struct DefaultHash<::device::mojom::XRHandedness> {
  using Hash = device_mojom_internal_XRHandedness_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_XRTargetRayMode_DataHashFn;

template <>
struct DefaultHash<::device::mojom::XRTargetRayMode> {
  using Hash = device_mojom_internal_XRTargetRayMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_XRPresentationTransportMethod_DataHashFn;

template <>
struct DefaultHash<::device::mojom::XRPresentationTransportMethod> {
  using Hash = device_mojom_internal_XRPresentationTransportMethod_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_XRPlaneOrientation_DataHashFn;

template <>
struct DefaultHash<::device::mojom::XRPlaneOrientation> {
  using Hash = device_mojom_internal_XRPlaneOrientation_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_VRDisplayEventReason_DataHashFn;

template <>
struct DefaultHash<::device::mojom::VRDisplayEventReason> {
  using Hash = device_mojom_internal_VRDisplayEventReason_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using XRDeviceId = XRDeviceId;  // Alias for definition in the parent namespace.
using XRHandedness = XRHandedness;  // Alias for definition in the parent namespace.
using XRTargetRayMode = XRTargetRayMode;  // Alias for definition in the parent namespace.
using XRPresentationTransportMethod = XRPresentationTransportMethod;  // Alias for definition in the parent namespace.
using XRPlaneOrientation = XRPlaneOrientation;  // Alias for definition in the parent namespace.
using VRDisplayEventReason = VRDisplayEventReason;  // Alias for definition in the parent namespace.
class XRSessionOptions;
using XRSessionOptionsPtr = mojo::InlinedStructPtr<XRSessionOptions>;

class XRSession;
using XRSessionPtr = mojo::StructPtr<XRSession>;

class XRPresentationConnection;
using XRPresentationConnectionPtr = mojo::StructPtr<XRPresentationConnection>;

class XRInputSourceDescription;
using XRInputSourceDescriptionPtr = mojo::StructPtr<XRInputSourceDescription>;

class XRInputSourceState;
using XRInputSourceStatePtr = mojo::StructPtr<XRInputSourceState>;

class VRFieldOfView;
using VRFieldOfViewPtr = mojo::InlinedStructPtr<VRFieldOfView>;

class VRPose;
using VRPosePtr = mojo::StructPtr<VRPose>;

class XRRay;
using XRRayPtr = mojo::StructPtr<XRRay>;

class XRHitResult;
using XRHitResultPtr = mojo::StructPtr<XRHitResult>;

class VRDisplayCapabilities;
using VRDisplayCapabilitiesPtr = mojo::InlinedStructPtr<VRDisplayCapabilities>;

class VREyeParameters;
using VREyeParametersPtr = mojo::StructPtr<VREyeParameters>;

class VRStageParameters;
using VRStageParametersPtr = mojo::StructPtr<VRStageParameters>;

class VRDisplayInfo;
using VRDisplayInfoPtr = mojo::StructPtr<VRDisplayInfo>;

class XRPresentationTransportOptions;
using XRPresentationTransportOptionsPtr = mojo::InlinedStructPtr<XRPresentationTransportOptions>;

class XRPlanePointData;
using XRPlanePointDataPtr = mojo::InlinedStructPtr<XRPlanePointData>;

class XRPlaneData;
using XRPlaneDataPtr = mojo::StructPtr<XRPlaneData>;

class XRFrameData;
using XRFrameDataPtr = mojo::StructPtr<XRFrameData>;

class XRFrameDataRequestOptions;
using XRFrameDataRequestOptionsPtr = mojo::InlinedStructPtr<XRFrameDataRequestOptions>;

class VRService;
using VRServicePtr = mojo::InterfacePtr<VRService>;
using VRServicePtrInfo = mojo::InterfacePtrInfo<VRService>;
using ThreadSafeVRServicePtr =
    mojo::ThreadSafeInterfacePtr<VRService>;
using VRServiceRequest = mojo::InterfaceRequest<VRService>;
using VRServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRService>;
using ThreadSafeVRServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRService>;
using VRServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRService>;
using VRServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRService>;

class VRServiceClient;
using VRServiceClientPtr = mojo::InterfacePtr<VRServiceClient>;
using VRServiceClientPtrInfo = mojo::InterfacePtrInfo<VRServiceClient>;
using ThreadSafeVRServiceClientPtr =
    mojo::ThreadSafeInterfacePtr<VRServiceClient>;
using VRServiceClientRequest = mojo::InterfaceRequest<VRServiceClient>;
using VRServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRServiceClient>;
using ThreadSafeVRServiceClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRServiceClient>;
using VRServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRServiceClient>;
using VRServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRServiceClient>;

class XRDevice;
using XRDevicePtr = mojo::InterfacePtr<XRDevice>;
using XRDevicePtrInfo = mojo::InterfacePtrInfo<XRDevice>;
using ThreadSafeXRDevicePtr =
    mojo::ThreadSafeInterfacePtr<XRDevice>;
using XRDeviceRequest = mojo::InterfaceRequest<XRDevice>;
using XRDeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRDevice>;
using ThreadSafeXRDeviceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRDevice>;
using XRDeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRDevice>;
using XRDeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRDevice>;

class XREnvironmentIntegrationProvider;
using XREnvironmentIntegrationProviderPtr = mojo::InterfacePtr<XREnvironmentIntegrationProvider>;
using XREnvironmentIntegrationProviderPtrInfo = mojo::InterfacePtrInfo<XREnvironmentIntegrationProvider>;
using ThreadSafeXREnvironmentIntegrationProviderPtr =
    mojo::ThreadSafeInterfacePtr<XREnvironmentIntegrationProvider>;
using XREnvironmentIntegrationProviderRequest = mojo::InterfaceRequest<XREnvironmentIntegrationProvider>;
using XREnvironmentIntegrationProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<XREnvironmentIntegrationProvider>;
using ThreadSafeXREnvironmentIntegrationProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XREnvironmentIntegrationProvider>;
using XREnvironmentIntegrationProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XREnvironmentIntegrationProvider>;
using XREnvironmentIntegrationProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XREnvironmentIntegrationProvider>;

class XRFrameDataProvider;
using XRFrameDataProviderPtr = mojo::InterfacePtr<XRFrameDataProvider>;
using XRFrameDataProviderPtrInfo = mojo::InterfacePtrInfo<XRFrameDataProvider>;
using ThreadSafeXRFrameDataProviderPtr =
    mojo::ThreadSafeInterfacePtr<XRFrameDataProvider>;
using XRFrameDataProviderRequest = mojo::InterfaceRequest<XRFrameDataProvider>;
using XRFrameDataProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRFrameDataProvider>;
using ThreadSafeXRFrameDataProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRFrameDataProvider>;
using XRFrameDataProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRFrameDataProvider>;
using XRFrameDataProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRFrameDataProvider>;

class XRPresentationProvider;
using XRPresentationProviderPtr = mojo::InterfacePtr<XRPresentationProvider>;
using XRPresentationProviderPtrInfo = mojo::InterfacePtrInfo<XRPresentationProvider>;
using ThreadSafeXRPresentationProviderPtr =
    mojo::ThreadSafeInterfacePtr<XRPresentationProvider>;
using XRPresentationProviderRequest = mojo::InterfaceRequest<XRPresentationProvider>;
using XRPresentationProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRPresentationProvider>;
using ThreadSafeXRPresentationProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRPresentationProvider>;
using XRPresentationProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRPresentationProvider>;
using XRPresentationProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRPresentationProvider>;

class XRPresentationClient;
using XRPresentationClientPtr = mojo::InterfacePtr<XRPresentationClient>;
using XRPresentationClientPtrInfo = mojo::InterfacePtrInfo<XRPresentationClient>;
using ThreadSafeXRPresentationClientPtr =
    mojo::ThreadSafeInterfacePtr<XRPresentationClient>;
using XRPresentationClientRequest = mojo::InterfaceRequest<XRPresentationClient>;
using XRPresentationClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRPresentationClient>;
using ThreadSafeXRPresentationClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRPresentationClient>;
using XRPresentationClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRPresentationClient>;
using XRPresentationClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRPresentationClient>;

class XRSessionClient;
using XRSessionClientPtr = mojo::InterfacePtr<XRSessionClient>;
using XRSessionClientPtrInfo = mojo::InterfacePtrInfo<XRSessionClient>;
using ThreadSafeXRSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<XRSessionClient>;
using XRSessionClientRequest = mojo::InterfaceRequest<XRSessionClient>;
using XRSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRSessionClient>;
using ThreadSafeXRSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRSessionClient>;
using XRSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRSessionClient>;
using XRSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRSessionClient>;

class VRDisplayClient;
using VRDisplayClientPtr = mojo::InterfacePtr<VRDisplayClient>;
using VRDisplayClientPtrInfo = mojo::InterfacePtrInfo<VRDisplayClient>;
using ThreadSafeVRDisplayClientPtr =
    mojo::ThreadSafeInterfacePtr<VRDisplayClient>;
using VRDisplayClientRequest = mojo::InterfaceRequest<VRDisplayClient>;
using VRDisplayClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VRDisplayClient>;
using ThreadSafeVRDisplayClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VRDisplayClient>;
using VRDisplayClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VRDisplayClient>;
using VRDisplayClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VRDisplayClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_BLINK_FORWARD_H_