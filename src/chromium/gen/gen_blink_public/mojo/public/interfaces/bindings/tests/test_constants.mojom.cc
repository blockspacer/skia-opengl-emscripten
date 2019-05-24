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

#include "mojo/public/interfaces/bindings/tests/test_constants.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace test {
const char kStringValue[] = "test string contents";
constexpr int8_t StructWithConstants::kInt8Value;
constexpr float StructWithConstants::kFloatValue;
const char StructWithConstants::kStringValue[] = "struct test string contents";
StructWithConstants::StructWithConstants() {}

StructWithConstants::~StructWithConstants() = default;
size_t StructWithConstants::Hash(size_t seed) const {
  return seed;
}

bool StructWithConstants::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char InterfaceWithConstants::Name_[] = "mojo.test.InterfaceWithConstants";
constexpr uint32_t InterfaceWithConstants::kUint32Value;
constexpr double InterfaceWithConstants::kDoubleValue;
const char InterfaceWithConstants::kStringValue[] = "interface test string contents";

InterfaceWithConstantsProxy::InterfaceWithConstantsProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool InterfaceWithConstantsStubDispatch::Accept(
    InterfaceWithConstants* impl,
    mojo::Message* message) {
  return false;
}

// static
bool InterfaceWithConstantsStubDispatch::AcceptWithResponder(
    InterfaceWithConstants* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool InterfaceWithConstantsRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "InterfaceWithConstants RequestValidator");

  switch (message->header()->name) {
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace test
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::test::StructWithConstants::DataView, ::mojo::test::StructWithConstantsPtr>::Read(
    ::mojo::test::StructWithConstants::DataView input,
    ::mojo::test::StructWithConstantsPtr* output) {
  bool success = true;
  ::mojo::test::StructWithConstantsPtr result(::mojo::test::StructWithConstants::New());
  
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif