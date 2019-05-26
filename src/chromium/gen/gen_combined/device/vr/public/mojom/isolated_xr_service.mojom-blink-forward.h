// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_FORWARD_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_FORWARD_H_

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
}  // namespace device
}  // namespace mojom


namespace device {
namespace mojom {
namespace blink {

COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_BLINK) extern const char kVrIsolatedServiceName[];
class XRRuntimeSessionOptions;
using XRRuntimeSessionOptionsPtr = mojo::StructPtr<XRRuntimeSessionOptions>;

class XRGamepadButton;
using XRGamepadButtonPtr = mojo::InlinedStructPtr<XRGamepadButton>;

class XRGamepad;
using XRGamepadPtr = mojo::StructPtr<XRGamepad>;

class XRGamepadData;
using XRGamepadDataPtr = mojo::StructPtr<XRGamepadData>;

class XRSessionController;
using XRSessionControllerPtr = mojo::InterfacePtr<XRSessionController>;
using XRSessionControllerPtrInfo = mojo::InterfacePtrInfo<XRSessionController>;
using ThreadSafeXRSessionControllerPtr =
    mojo::ThreadSafeInterfacePtr<XRSessionController>;
using XRSessionControllerRequest = mojo::InterfaceRequest<XRSessionController>;
using XRSessionControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRSessionController>;
using ThreadSafeXRSessionControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRSessionController>;
using XRSessionControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRSessionController>;
using XRSessionControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRSessionController>;

class XRRuntimeEventListener;
using XRRuntimeEventListenerPtr = mojo::InterfacePtr<XRRuntimeEventListener>;
using XRRuntimeEventListenerPtrInfo = mojo::InterfacePtrInfo<XRRuntimeEventListener>;
using ThreadSafeXRRuntimeEventListenerPtr =
    mojo::ThreadSafeInterfacePtr<XRRuntimeEventListener>;
using XRRuntimeEventListenerRequest = mojo::InterfaceRequest<XRRuntimeEventListener>;
using XRRuntimeEventListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRRuntimeEventListener>;
using ThreadSafeXRRuntimeEventListenerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRRuntimeEventListener>;
using XRRuntimeEventListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRRuntimeEventListener>;
using XRRuntimeEventListenerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRRuntimeEventListener>;

class XRRuntime;
using XRRuntimePtr = mojo::InterfacePtr<XRRuntime>;
using XRRuntimePtrInfo = mojo::InterfacePtrInfo<XRRuntime>;
using ThreadSafeXRRuntimePtr =
    mojo::ThreadSafeInterfacePtr<XRRuntime>;
using XRRuntimeRequest = mojo::InterfaceRequest<XRRuntime>;
using XRRuntimeAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRRuntime>;
using ThreadSafeXRRuntimeAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRRuntime>;
using XRRuntimeAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRRuntime>;
using XRRuntimeAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRRuntime>;

class IsolatedXRGamepadProvider;
using IsolatedXRGamepadProviderPtr = mojo::InterfacePtr<IsolatedXRGamepadProvider>;
using IsolatedXRGamepadProviderPtrInfo = mojo::InterfacePtrInfo<IsolatedXRGamepadProvider>;
using ThreadSafeIsolatedXRGamepadProviderPtr =
    mojo::ThreadSafeInterfacePtr<IsolatedXRGamepadProvider>;
using IsolatedXRGamepadProviderRequest = mojo::InterfaceRequest<IsolatedXRGamepadProvider>;
using IsolatedXRGamepadProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<IsolatedXRGamepadProvider>;
using ThreadSafeIsolatedXRGamepadProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IsolatedXRGamepadProvider>;
using IsolatedXRGamepadProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IsolatedXRGamepadProvider>;
using IsolatedXRGamepadProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IsolatedXRGamepadProvider>;

class IsolatedXRGamepadProviderFactory;
using IsolatedXRGamepadProviderFactoryPtr = mojo::InterfacePtr<IsolatedXRGamepadProviderFactory>;
using IsolatedXRGamepadProviderFactoryPtrInfo = mojo::InterfacePtrInfo<IsolatedXRGamepadProviderFactory>;
using ThreadSafeIsolatedXRGamepadProviderFactoryPtr =
    mojo::ThreadSafeInterfacePtr<IsolatedXRGamepadProviderFactory>;
using IsolatedXRGamepadProviderFactoryRequest = mojo::InterfaceRequest<IsolatedXRGamepadProviderFactory>;
using IsolatedXRGamepadProviderFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<IsolatedXRGamepadProviderFactory>;
using ThreadSafeIsolatedXRGamepadProviderFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IsolatedXRGamepadProviderFactory>;
using IsolatedXRGamepadProviderFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IsolatedXRGamepadProviderFactory>;
using IsolatedXRGamepadProviderFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IsolatedXRGamepadProviderFactory>;

class ImmersiveOverlay;
using ImmersiveOverlayPtr = mojo::InterfacePtr<ImmersiveOverlay>;
using ImmersiveOverlayPtrInfo = mojo::InterfacePtrInfo<ImmersiveOverlay>;
using ThreadSafeImmersiveOverlayPtr =
    mojo::ThreadSafeInterfacePtr<ImmersiveOverlay>;
using ImmersiveOverlayRequest = mojo::InterfaceRequest<ImmersiveOverlay>;
using ImmersiveOverlayAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImmersiveOverlay>;
using ThreadSafeImmersiveOverlayAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImmersiveOverlay>;
using ImmersiveOverlayAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImmersiveOverlay>;
using ImmersiveOverlayAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImmersiveOverlay>;

class XRCompositorHost;
using XRCompositorHostPtr = mojo::InterfacePtr<XRCompositorHost>;
using XRCompositorHostPtrInfo = mojo::InterfacePtrInfo<XRCompositorHost>;
using ThreadSafeXRCompositorHostPtr =
    mojo::ThreadSafeInterfacePtr<XRCompositorHost>;
using XRCompositorHostRequest = mojo::InterfaceRequest<XRCompositorHost>;
using XRCompositorHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<XRCompositorHost>;
using ThreadSafeXRCompositorHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<XRCompositorHost>;
using XRCompositorHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<XRCompositorHost>;
using XRCompositorHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<XRCompositorHost>;

class IsolatedXRRuntimeProviderClient;
using IsolatedXRRuntimeProviderClientPtr = mojo::InterfacePtr<IsolatedXRRuntimeProviderClient>;
using IsolatedXRRuntimeProviderClientPtrInfo = mojo::InterfacePtrInfo<IsolatedXRRuntimeProviderClient>;
using ThreadSafeIsolatedXRRuntimeProviderClientPtr =
    mojo::ThreadSafeInterfacePtr<IsolatedXRRuntimeProviderClient>;
using IsolatedXRRuntimeProviderClientRequest = mojo::InterfaceRequest<IsolatedXRRuntimeProviderClient>;
using IsolatedXRRuntimeProviderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<IsolatedXRRuntimeProviderClient>;
using ThreadSafeIsolatedXRRuntimeProviderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IsolatedXRRuntimeProviderClient>;
using IsolatedXRRuntimeProviderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IsolatedXRRuntimeProviderClient>;
using IsolatedXRRuntimeProviderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IsolatedXRRuntimeProviderClient>;

class IsolatedXRRuntimeProvider;
using IsolatedXRRuntimeProviderPtr = mojo::InterfacePtr<IsolatedXRRuntimeProvider>;
using IsolatedXRRuntimeProviderPtrInfo = mojo::InterfacePtrInfo<IsolatedXRRuntimeProvider>;
using ThreadSafeIsolatedXRRuntimeProviderPtr =
    mojo::ThreadSafeInterfacePtr<IsolatedXRRuntimeProvider>;
using IsolatedXRRuntimeProviderRequest = mojo::InterfaceRequest<IsolatedXRRuntimeProvider>;
using IsolatedXRRuntimeProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<IsolatedXRRuntimeProvider>;
using ThreadSafeIsolatedXRRuntimeProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IsolatedXRRuntimeProvider>;
using IsolatedXRRuntimeProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IsolatedXRRuntimeProvider>;
using IsolatedXRRuntimeProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IsolatedXRRuntimeProvider>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_BLINK_FORWARD_H_