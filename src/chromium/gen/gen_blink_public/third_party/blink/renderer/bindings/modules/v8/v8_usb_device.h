// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_USB_DEVICE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_USB_DEVICE_H_

#include "third_party/blink/renderer/bindings/core/v8/array_buffer_or_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/generated_code_helper.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/webusb/usb_device.h"
#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/bindings/v8_dom_wrapper.h"
#include "third_party/blink/renderer/platform/bindings/wrapper_type_info.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

MODULES_EXPORT extern const WrapperTypeInfo v8_usb_device_wrapper_type_info;

class V8USBDevice {
  STATIC_ONLY(V8USBDevice);
 public:
  MODULES_EXPORT static bool HasInstance(v8::Local<v8::Value>, v8::Isolate*);
  static v8::Local<v8::Object> FindInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
  MODULES_EXPORT static v8::Local<v8::FunctionTemplate> DomTemplate(v8::Isolate*, const DOMWrapperWorld&);
  static USBDevice* ToImpl(v8::Local<v8::Object> object) {
    return ToScriptWrappable(object)->ToImpl<USBDevice>();
  }
  MODULES_EXPORT static USBDevice* ToImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);

  MODULES_EXPORT static constexpr const WrapperTypeInfo* GetWrapperTypeInfo() {
    return &v8_usb_device_wrapper_type_info;
  }

  static constexpr int kInternalFieldCount = kV8DefaultWrapperInternalFieldCount;

  MODULES_EXPORT static void InstallConditionalFeatures(
      v8::Local<v8::Context>,
      const DOMWrapperWorld&,
      v8::Local<v8::Object> instance_object,
      v8::Local<v8::Object> prototype_object,
      v8::Local<v8::Function> interface_object,
      v8::Local<v8::FunctionTemplate> interface_template);

  // Callback functions

  MODULES_EXPORT static void UsbVersionMajorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void UsbVersionMinorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void UsbVersionSubminorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void DeviceClassAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void DeviceSubclassAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void DeviceProtocolAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void VendorIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ProductIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void DeviceVersionMajorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void DeviceVersionMinorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void DeviceVersionSubminorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ManufacturerNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ProductNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void SerialNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ConfigurationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ConfigurationsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void OpenedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  MODULES_EXPORT static void OpenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void CloseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void SelectConfigurationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ClaimInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ReleaseInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void SelectAlternateInterfaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ControlTransferInMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ControlTransferOutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ClearHaltMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void TransferInMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void TransferOutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void IsochronousTransferInMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void IsochronousTransferOutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);
  MODULES_EXPORT static void ResetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>&);

  static void InstallRuntimeEnabledFeaturesOnTemplate(
      v8::Isolate*,
      const DOMWrapperWorld&,
      v8::Local<v8::FunctionTemplate> interface_template);
};

template <>
struct NativeValueTraits<USBDevice> : public NativeValueTraitsBase<USBDevice> {
  MODULES_EXPORT static USBDevice* NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static USBDevice* NullValue() { return nullptr; }
};

template <>
struct V8TypeOf<USBDevice> {
  typedef V8USBDevice Type;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_V8_USB_DEVICE_H_
