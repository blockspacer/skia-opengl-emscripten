// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_H_

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
#include "device/usb/public/mojom/device_manager_client.mojom-shared.h"
#include "device/usb/public/mojom/device_manager_client.mojom-blink-forward.h"
#include "device/usb/public/mojom/device.mojom-blink-forward.h"

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

class UsbDeviceManagerClientProxy;

template <typename ImplRefTraits>
class UsbDeviceManagerClientStub;

class UsbDeviceManagerClientRequestValidator;


class BLINK_PLATFORM_EXPORT UsbDeviceManagerClient
    : public UsbDeviceManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UsbDeviceManagerClientInterfaceBase;
  using Proxy_ = UsbDeviceManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceAddedMinVersion = 0,
    kOnDeviceRemovedMinVersion = 0,
  };
  virtual ~UsbDeviceManagerClient() {}

  
  virtual void OnDeviceAdded(::device::mojom::blink::UsbDeviceInfoPtr device_info) = 0;

  
  virtual void OnDeviceRemoved(::device::mojom::blink::UsbDeviceInfoPtr device_info) = 0;
};

class BLINK_PLATFORM_EXPORT UsbDeviceManagerClientProxy
    : public UsbDeviceManagerClient {
 public:
  using InterfaceType = UsbDeviceManagerClient;

  explicit UsbDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceAdded(::device::mojom::blink::UsbDeviceInfoPtr device_info) final;
  void OnDeviceRemoved(::device::mojom::blink::UsbDeviceInfoPtr device_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT UsbDeviceManagerClientStubDispatch {
 public:
  static bool Accept(UsbDeviceManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceManagerClient>>
class UsbDeviceManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceManagerClientStub() {}
  ~UsbDeviceManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT UsbDeviceManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MANAGER_CLIENT_MOJOM_BLINK_H_