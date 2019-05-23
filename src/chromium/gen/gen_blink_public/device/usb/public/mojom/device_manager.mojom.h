// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_H_

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
#include "device/usb/public/mojom/device_manager.mojom-shared.h"
#include "device/usb/public/mojom/device_manager.mojom-forward.h"
#include "device/usb/public/mojom/device.mojom-forward.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom-forward.h"
#include "device/usb/public/mojom/device_manager_client.mojom-forward.h"
#include "mojo/public/mojom/base/file.mojom-forward.h"
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

class UsbDeviceManagerProxy;

template <typename ImplRefTraits>
class UsbDeviceManagerStub;

class UsbDeviceManagerRequestValidator;
class UsbDeviceManagerResponseValidator;


class  UsbDeviceManager
    : public UsbDeviceManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UsbDeviceManagerInterfaceBase;
  using Proxy_ = UsbDeviceManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceManagerStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceManagerRequestValidator;
  using ResponseValidator_ = UsbDeviceManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEnumerateDevicesAndSetClientMinVersion = 0,
    kGetDevicesMinVersion = 0,
    kGetDeviceMinVersion = 0,
    kSetClientMinVersion = 0,
  };
  virtual ~UsbDeviceManager() {}


  using EnumerateDevicesAndSetClientCallback = base::OnceCallback<void(std::vector<::device::mojom::UsbDeviceInfoPtr>)>;
  
  virtual void EnumerateDevicesAndSetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client, EnumerateDevicesAndSetClientCallback callback) = 0;


  using GetDevicesCallback = base::OnceCallback<void(std::vector<::device::mojom::UsbDeviceInfoPtr>)>;
  
  virtual void GetDevices(::device::mojom::UsbEnumerationOptionsPtr options, GetDevicesCallback callback) = 0;

  
  virtual void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request, ::device::mojom::UsbDeviceClientPtr device_client) = 0;

  
  virtual void SetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client) = 0;
};

class  UsbDeviceManagerProxy
    : public UsbDeviceManager {
 public:
  using InterfaceType = UsbDeviceManager;

  explicit UsbDeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnumerateDevicesAndSetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client, EnumerateDevicesAndSetClientCallback callback) final;
  void GetDevices(::device::mojom::UsbEnumerationOptionsPtr options, GetDevicesCallback callback) final;
  void GetDevice(const std::string& guid, ::device::mojom::UsbDeviceRequest device_request, ::device::mojom::UsbDeviceClientPtr device_client) final;
  void SetClient(::device::mojom::UsbDeviceManagerClientAssociatedPtrInfo client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbDeviceManagerStubDispatch {
 public:
  static bool Accept(UsbDeviceManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceManager>>
class UsbDeviceManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceManagerStub() {}
  ~UsbDeviceManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbDeviceManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_MOJOM_H_