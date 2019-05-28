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

#include "mojo/public/interfaces/bindings/tests/test_export.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/test_export.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/test_export.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/test_export.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_JUMBO_H_
#endif
namespace mojo {
namespace test {
namespace test_export {
namespace blink {
StringPair::StringPair()
    : s1(),
      s2() {}

StringPair::StringPair(
    const WTF::String& s1_in,
    const WTF::String& s2_in)
    : s1(std::move(s1_in)),
      s2(std::move(s2_in)) {}

StringPair::~StringPair() = default;
size_t StringPair::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->s1);
  seed = mojo::internal::WTFHash(seed, this->s2);
  return seed;
}

bool StringPair::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StringPairContainer::StringPairContainer()
    : pairs() {}

StringPairContainer::StringPairContainer(
    WTF::Vector<StringPairPtr> pairs_in)
    : pairs(std::move(pairs_in)) {}

StringPairContainer::~StringPairContainer() = default;

bool StringPairContainer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ExportedInterface::Name_[] = "mojo.test.test_export.ExportedInterface";

ExportedInterfaceProxy::ExportedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool ExportedInterfaceStubDispatch::Accept(
    ExportedInterface* impl,
    mojo::Message* message) {
  return false;
}

// static
bool ExportedInterfaceStubDispatch::AcceptWithResponder(
    ExportedInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}

bool ExportedInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ExportedInterface RequestValidator");

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

}  // namespace blink
}  // namespace test_export
}  // namespace test
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::test::test_export::blink::StringPair::DataView, ::mojo::test::test_export::blink::StringPairPtr>::Read(
    ::mojo::test::test_export::blink::StringPair::DataView input,
    ::mojo::test::test_export::blink::StringPairPtr* output) {
  bool success = true;
  ::mojo::test::test_export::blink::StringPairPtr result(::mojo::test::test_export::blink::StringPair::New());
  
      if (!input.ReadS1(&result->s1))
        success = false;
      if (!input.ReadS2(&result->s2))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::test_export::blink::StringPairContainer::DataView, ::mojo::test::test_export::blink::StringPairContainerPtr>::Read(
    ::mojo::test::test_export::blink::StringPairContainer::DataView input,
    ::mojo::test::test_export::blink::StringPairContainerPtr* output) {
  bool success = true;
  ::mojo::test::test_export::blink::StringPairContainerPtr result(::mojo::test::test_export::blink::StringPairContainer::New());
  
      if (!input.ReadPairs(&result->pairs))
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