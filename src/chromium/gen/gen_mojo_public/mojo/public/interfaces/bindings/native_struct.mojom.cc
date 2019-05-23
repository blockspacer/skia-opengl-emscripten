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

#include "mojo/public/interfaces/bindings/native_struct.mojom.h"

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

#include "mojo/public/interfaces/bindings/native_struct.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/native_struct.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace native {
SerializedHandle::SerializedHandle()
    : the_handle(),
      type() {}

SerializedHandle::SerializedHandle(
    mojo::ScopedHandle the_handle_in,
    SerializedHandleType type_in)
    : the_handle(std::move(the_handle_in)),
      type(std::move(type_in)) {}

SerializedHandle::~SerializedHandle() = default;

bool SerializedHandle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NativeStruct::NativeStruct()
    : data(),
      handles() {}

NativeStruct::NativeStruct(
    const std::vector<uint8_t>& data_in,
    base::Optional<std::vector<SerializedHandlePtr>> handles_in)
    : data(std::move(data_in)),
      handles(std::move(handles_in)) {}

NativeStruct::~NativeStruct() = default;

bool NativeStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace native
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::native::SerializedHandle::DataView, ::mojo::native::SerializedHandlePtr>::Read(
    ::mojo::native::SerializedHandle::DataView input,
    ::mojo::native::SerializedHandlePtr* output) {
  bool success = true;
  ::mojo::native::SerializedHandlePtr result(::mojo::native::SerializedHandle::New());
  
      result->the_handle = input.TakeTheHandle();
      if (!input.ReadType(&result->type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::native::NativeStruct::DataView, ::mojo::native::NativeStructPtr>::Read(
    ::mojo::native::NativeStruct::DataView input,
    ::mojo::native::NativeStructPtr* output) {
  bool success = true;
  ::mojo::native::NativeStructPtr result(::mojo::native::NativeStruct::New());
  
      if (!input.ReadData(&result->data))
        success = false;
      if (!input.ReadHandles(&result->handles))
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