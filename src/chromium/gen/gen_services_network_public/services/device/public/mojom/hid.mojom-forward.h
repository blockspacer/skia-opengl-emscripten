// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_FORWARD_H_

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




namespace device {
namespace mojom {
class HidUsageAndPageDataView;

class HidReportItemDataView;

class HidReportDescriptionDataView;

class HidCollectionInfoDataView;

class HidDeviceInfoDataView;


enum class HidBusType : int32_t;

constexpr uint16_t kPageUndefined = 0x00U;

constexpr uint16_t kPageGenericDesktop = 0x01U;

constexpr uint16_t kPageSimulation = 0x02U;

constexpr uint16_t kPageVirtualReality = 0x03U;

constexpr uint16_t kPageSport = 0x04U;

constexpr uint16_t kPageGame = 0x05U;

constexpr uint16_t kPageGenericDevice = 0x06U;

constexpr uint16_t kPageKeyboard = 0x07U;

constexpr uint16_t kPageLed = 0x08U;

constexpr uint16_t kPageButton = 0x09U;

constexpr uint16_t kPageOrdinal = 0x0AU;

constexpr uint16_t kPageTelephony = 0x0BU;

constexpr uint16_t kPageConsumer = 0x0CU;

constexpr uint16_t kPageDigitizer = 0x0DU;

constexpr uint16_t kPagePidPage = 0x0FU;

constexpr uint16_t kPageUnicode = 0x10U;

constexpr uint16_t kPageAlphanumericDisplay = 0x14U;

constexpr uint16_t kPageMedicalInstruments = 0x40U;

constexpr uint16_t kPageMonitor0 = 0x80U;

constexpr uint16_t kPageMonitor1 = 0x81U;

constexpr uint16_t kPageMonitor2 = 0x82U;

constexpr uint16_t kPageMonitor3 = 0x83U;

constexpr uint16_t kPagePower0 = 0x84U;

constexpr uint16_t kPagePower1 = 0x85U;

constexpr uint16_t kPagePower2 = 0x86U;

constexpr uint16_t kPagePower3 = 0x87U;

constexpr uint16_t kPageBarCodeScanner = 0x8CU;

constexpr uint16_t kPageScale = 0x8DU;

constexpr uint16_t kPageMagneticStripeReader = 0x8EU;

constexpr uint16_t kPageReservedPointOfSale = 0x8FU;

constexpr uint16_t kPageCameraControl = 0x90U;

constexpr uint16_t kPageArcade = 0x91U;

constexpr uint16_t kPageFido = 0xF1D0U;

constexpr uint16_t kPageVendor = 0xFF00U;

constexpr uint16_t kPageMediaCenter = 0xFFBCU;

constexpr uint16_t kGenericDesktopUndefined = 0x00U;

constexpr uint16_t kGenericDesktopPointer = 0x01U;

constexpr uint16_t kGenericDesktopMouse = 0x02U;

constexpr uint16_t kGenericDesktopJoystick = 0x04U;

constexpr uint16_t kGenericDesktopGamePad = 0x05U;

constexpr uint16_t kGenericDesktopKeyboard = 0x06U;

constexpr uint16_t kGenericDesktopKeypad = 0x07U;

constexpr uint16_t kGenericDesktopMultiAxisController = 0x08U;

constexpr uint16_t kGenericDesktopX = 0x30U;

constexpr uint16_t kGenericDesktopY = 0x31U;

constexpr uint16_t kGenericDesktopZ = 0x32U;

constexpr uint16_t kGenericDesktopRx = 0x33U;

constexpr uint16_t kGenericDesktopRy = 0x34U;

constexpr uint16_t kGenericDesktopRz = 0x35U;

constexpr uint16_t kGenericDesktopSlider = 0x36U;

constexpr uint16_t kGenericDesktopDial = 0x37U;

constexpr uint16_t kGenericDesktopWheel = 0x38U;

constexpr uint16_t kGenericDesktopHatSwitch = 0x39U;

constexpr uint16_t kGenericDesktopCountedBuffer = 0x3aU;

constexpr uint16_t kGenericDesktopByteCount = 0x3bU;

constexpr uint16_t kGenericDesktopMotionWakeup = 0x3cU;

constexpr uint16_t kGenericDesktopStart = 0x3dU;

constexpr uint16_t kGenericDesktopSelect = 0x3eU;

constexpr uint16_t kGenericDesktopVx = 0x40U;

constexpr uint16_t kGenericDesktopVy = 0x41U;

constexpr uint16_t kGenericDesktopVz = 0x42U;

constexpr uint16_t kGenericDesktopVbrx = 0x43U;

constexpr uint16_t kGenericDesktopVbry = 0x44U;

constexpr uint16_t kGenericDesktopVbrz = 0x45U;

constexpr uint16_t kGenericDesktopVno = 0x46U;

constexpr uint16_t kGenericDesktopSystemControl = 0x80U;

constexpr uint16_t kGenericDesktopSystemPowerDown = 0x81U;

constexpr uint16_t kGenericDesktopSystemSleep = 0x82U;

constexpr uint16_t kGenericDesktopSystemWakeUp = 0x83U;

constexpr uint16_t kGenericDesktopSystemContextMenu = 0x84U;

constexpr uint16_t kGenericDesktopSystemMainMenu = 0x85U;

constexpr uint16_t kGenericDesktopSystemAppMenu = 0x86U;

constexpr uint16_t kGenericDesktopSystemMenuHelp = 0x87U;

constexpr uint16_t kGenericDesktopSystemMenuExit = 0x88U;

constexpr uint16_t kGenericDesktopSystemMenuSelect = 0x89U;

constexpr uint16_t kGenericDesktopSystemMenuRight = 0x8aU;

constexpr uint16_t kGenericDesktopSystemMenuLeft = 0x8bU;

constexpr uint16_t kGenericDesktopSystemMenuUp = 0x8cU;

constexpr uint16_t kGenericDesktopSystemMenuDown = 0x8dU;

constexpr uint16_t kGenericDesktopSystemColdRestart = 0x8eU;

constexpr uint16_t kGenericDesktopSystemWarmRestart = 0x8fU;

constexpr uint16_t kGenericDesktopDPadUp = 0x90U;

constexpr uint16_t kGenericDesktopDPadDown = 0x91U;

constexpr uint16_t kGenericDesktopDPadLeft = 0x92U;

constexpr uint16_t kGenericDesktopDPadRight = 0x93U;

constexpr uint16_t kGenericDesktopSystemDock = 0xa0U;

constexpr uint16_t kGenericDesktopSystemUndock = 0xa1U;

constexpr uint16_t kGenericDesktopSystemSetup = 0xa2U;

constexpr uint16_t kGenericDesktopSystemBreak = 0xa3U;

constexpr uint16_t kGenericDesktopSystemDebuggerBreak = 0xa4U;

constexpr uint16_t kGenericDesktopApplicationBreak = 0xa5U;

constexpr uint16_t kGenericDesktopApplicationDebuggerBreak = 0xa6U;

constexpr uint16_t kGenericDesktopSystemSpeakerMute = 0xa7U;

constexpr uint16_t kGenericDesktopSystemHibernate = 0xa8U;

constexpr uint16_t kGenericDesktopSystemDisplayInvert = 0xb0U;

constexpr uint16_t kGenericDesktopSystemDisplayInternal = 0xb1U;

constexpr uint16_t kGenericDesktopSystemDisplayExternal = 0xb2U;

constexpr uint16_t kGenericDesktopSystemDisplayBoth = 0xb3U;

constexpr uint16_t kGenericDesktopSystemDisplayDual = 0xb4U;

constexpr uint16_t kGenericDesktopSystemDisplayToggle = 0xb5U;

constexpr uint16_t kGenericDesktopSystemDisplaySwap = 0xb6U;

constexpr uint32_t kHIDCollectionTypePhysical = 0x00U;

constexpr uint32_t kHIDCollectionTypeApplication = 0x01U;

constexpr uint32_t kHIDCollectionTypeLogical = 0x02U;

constexpr uint32_t kHIDCollectionTypeReport = 0x03U;

constexpr uint32_t kHIDCollectionTypeNamedArray = 0x04U;

constexpr uint32_t kHIDCollectionTypeUsageSwitch = 0x05U;

constexpr uint32_t kHIDCollectionTypeUsageModifier = 0x06U;

constexpr uint32_t kHIDCollectionTypeVendorMin = 0x80U;

constexpr uint32_t kHIDCollectionTypeVendorMax = 0xffU;
class HidUsageAndPage;
using HidUsageAndPagePtr = mojo::InlinedStructPtr<HidUsageAndPage>;

class HidReportItem;
using HidReportItemPtr = mojo::StructPtr<HidReportItem>;

class HidReportDescription;
using HidReportDescriptionPtr = mojo::StructPtr<HidReportDescription>;

class HidCollectionInfo;
using HidCollectionInfoPtr = mojo::StructPtr<HidCollectionInfo>;

class HidDeviceInfo;
using HidDeviceInfoPtr = mojo::StructPtr<HidDeviceInfo>;

class HidManagerClient;
using HidManagerClientPtr = mojo::InterfacePtr<HidManagerClient>;
using HidManagerClientPtrInfo = mojo::InterfacePtrInfo<HidManagerClient>;
using ThreadSafeHidManagerClientPtr =
    mojo::ThreadSafeInterfacePtr<HidManagerClient>;
using HidManagerClientRequest = mojo::InterfaceRequest<HidManagerClient>;
using HidManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidManagerClient>;
using ThreadSafeHidManagerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidManagerClient>;
using HidManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidManagerClient>;
using HidManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidManagerClient>;

class HidManager;
using HidManagerPtr = mojo::InterfacePtr<HidManager>;
using HidManagerPtrInfo = mojo::InterfacePtrInfo<HidManager>;
using ThreadSafeHidManagerPtr =
    mojo::ThreadSafeInterfacePtr<HidManager>;
using HidManagerRequest = mojo::InterfaceRequest<HidManager>;
using HidManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidManager>;
using ThreadSafeHidManagerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidManager>;
using HidManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidManager>;
using HidManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidManager>;

class HidConnection;
using HidConnectionPtr = mojo::InterfacePtr<HidConnection>;
using HidConnectionPtrInfo = mojo::InterfacePtrInfo<HidConnection>;
using ThreadSafeHidConnectionPtr =
    mojo::ThreadSafeInterfacePtr<HidConnection>;
using HidConnectionRequest = mojo::InterfaceRequest<HidConnection>;
using HidConnectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidConnection>;
using ThreadSafeHidConnectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidConnection>;
using HidConnectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidConnection>;
using HidConnectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidConnection>;

class HidConnectionClient;
using HidConnectionClientPtr = mojo::InterfacePtr<HidConnectionClient>;
using HidConnectionClientPtrInfo = mojo::InterfacePtrInfo<HidConnectionClient>;
using ThreadSafeHidConnectionClientPtr =
    mojo::ThreadSafeInterfacePtr<HidConnectionClient>;
using HidConnectionClientRequest = mojo::InterfaceRequest<HidConnectionClient>;
using HidConnectionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<HidConnectionClient>;
using ThreadSafeHidConnectionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<HidConnectionClient>;
using HidConnectionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HidConnectionClient>;
using HidConnectionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<HidConnectionClient>;




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_FORWARD_H_