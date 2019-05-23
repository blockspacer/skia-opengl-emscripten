// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/usb/public/mojom/device_enumeration_options.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "device/usb/public/mojom/device_enumeration_options.mojom-params-data.h"
#include "device/usb/public/mojom/device_enumeration_options.mojom-shared-message-ids.h"

#include "device/usb/public/mojom/device_enumeration_options.mojom-import-headers.h"


#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_JUMBO_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#endif
namespace device {
namespace mojom {
UsbDeviceFilter::UsbDeviceFilter()
    : has_vendor_id(),
      vendor_id(),
      has_product_id(),
      product_id(),
      has_class_code(),
      class_code(),
      has_subclass_code(),
      subclass_code(),
      has_protocol_code(),
      protocol_code(),
      serial_number() {}

UsbDeviceFilter::UsbDeviceFilter(
    bool has_vendor_id_in,
    uint16_t vendor_id_in,
    bool has_product_id_in,
    uint16_t product_id_in,
    bool has_class_code_in,
    uint8_t class_code_in,
    bool has_subclass_code_in,
    uint8_t subclass_code_in,
    bool has_protocol_code_in,
    uint8_t protocol_code_in,
    const base::Optional<base::string16>& serial_number_in)
    : has_vendor_id(std::move(has_vendor_id_in)),
      vendor_id(std::move(vendor_id_in)),
      has_product_id(std::move(has_product_id_in)),
      product_id(std::move(product_id_in)),
      has_class_code(std::move(has_class_code_in)),
      class_code(std::move(class_code_in)),
      has_subclass_code(std::move(has_subclass_code_in)),
      subclass_code(std::move(subclass_code_in)),
      has_protocol_code(std::move(has_protocol_code_in)),
      protocol_code(std::move(protocol_code_in)),
      serial_number(std::move(serial_number_in)) {}

UsbDeviceFilter::~UsbDeviceFilter() = default;

bool UsbDeviceFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UsbEnumerationOptions::UsbEnumerationOptions()
    : filters() {}

UsbEnumerationOptions::UsbEnumerationOptions(
    std::vector<UsbDeviceFilterPtr> filters_in)
    : filters(std::move(filters_in)) {}

UsbEnumerationOptions::~UsbEnumerationOptions() = default;

bool UsbEnumerationOptions::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::UsbDeviceFilter::DataView, ::device::mojom::UsbDeviceFilterPtr>::Read(
    ::device::mojom::UsbDeviceFilter::DataView input,
    ::device::mojom::UsbDeviceFilterPtr* output) {
  bool success = true;
  ::device::mojom::UsbDeviceFilterPtr result(::device::mojom::UsbDeviceFilter::New());
  
      result->has_vendor_id = input.has_vendor_id();
      result->vendor_id = input.vendor_id();
      result->has_product_id = input.has_product_id();
      result->product_id = input.product_id();
      result->has_class_code = input.has_class_code();
      result->class_code = input.class_code();
      result->has_subclass_code = input.has_subclass_code();
      result->subclass_code = input.subclass_code();
      result->has_protocol_code = input.has_protocol_code();
      result->protocol_code = input.protocol_code();
      if (!input.ReadSerialNumber(&result->serial_number))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::UsbEnumerationOptions::DataView, ::device::mojom::UsbEnumerationOptionsPtr>::Read(
    ::device::mojom::UsbEnumerationOptions::DataView input,
    ::device::mojom::UsbEnumerationOptionsPtr* output) {
  bool success = true;
  ::device::mojom::UsbEnumerationOptionsPtr result(::device::mojom::UsbEnumerationOptions::New());
  
      if (!input.ReadFilters(&result->filters))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif