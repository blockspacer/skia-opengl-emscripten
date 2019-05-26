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

#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"

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

#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_JUMBO_H_
#endif
namespace imported {
Point::Point()
    : x(),
      y() {}

Point::Point(
    int32_t x_in,
    int32_t y_in)
    : x(std::move(x_in)),
      y(std::move(y_in)) {}

Point::~Point() = default;
size_t Point::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->x);
  seed = mojo::internal::Hash(seed, this->y);
  return seed;
}

bool Point::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PointOrShape::PointOrShape() : tag_(Tag::POINT) {
  data_.point = new PointPtr;
}

PointOrShape::~PointOrShape() {
  DestroyActive();
}


void PointOrShape::set_point(
    PointPtr point) {
  if (tag_ == Tag::POINT) {
    *(data_.point) = std::move(point);
  } else {
    DestroyActive();
    tag_ = Tag::POINT;
    data_.point = new PointPtr(
        std::move(point));
  }
}
void PointOrShape::set_shape(
    Shape shape) {
  if (tag_ != Tag::SHAPE) {
    DestroyActive();
    tag_ = Tag::SHAPE;
  }
  data_.shape = shape;
}

void PointOrShape::DestroyActive() {
  switch (tag_) {

    case Tag::POINT:

      delete data_.point;
      break;
    case Tag::SHAPE:

      break;
  }
}
size_t PointOrShape::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::POINT:
      return mojo::internal::Hash(seed, data_.point);
    case Tag::SHAPE:
      return mojo::internal::Hash(seed, data_.shape);
    default:
      NOTREACHED();
      return seed;
  }
}

bool PointOrShape::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char ImportedInterface::Name_[] = "imported.ImportedInterface";

ImportedInterfaceProxy::ImportedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ImportedInterfaceProxy::DoSomething(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::ImportedInterface::DoSomething");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kImportedInterface_DoSomething_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::imported::internal::ImportedInterface_DoSomething_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ImportedInterface::Name_);
  message.set_method_name("DoSomething");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool ImportedInterfaceStubDispatch::Accept(
    ImportedInterface* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kImportedInterface_DoSomething_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::ImportedInterface::DoSomething",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::ImportedInterface_DoSomething_Params_Data* params =
          reinterpret_cast<internal::ImportedInterface_DoSomething_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ImportedInterface_DoSomething_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ImportedInterface::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DoSomething();
      return true;
    }
  }
  return false;
}

// static
bool ImportedInterfaceStubDispatch::AcceptWithResponder(
    ImportedInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kImportedInterface_DoSomething_Name: {
      break;
    }
  }
  return false;
}

bool ImportedInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "ImportedInterface RequestValidator");

  switch (message->header()->name) {
    case internal::kImportedInterface_DoSomething_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ImportedInterface_DoSomething_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace imported

namespace mojo {


// static
bool StructTraits<::imported::Point::DataView, ::imported::PointPtr>::Read(
    ::imported::Point::DataView input,
    ::imported::PointPtr* output) {
  bool success = true;
  ::imported::PointPtr result(::imported::Point::New());
  
      result->x = input.x();
      result->y = input.y();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::imported::PointOrShape::DataView, ::imported::PointOrShapePtr>::Read(
    ::imported::PointOrShape::DataView input,
    ::imported::PointOrShapePtr* output) {
  using UnionType = ::imported::PointOrShape;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::POINT: {
      ::imported::PointPtr result_point;
      if (!input.ReadPoint(&result_point))
        return false;

      *output = UnionType::NewPoint(
          std::move(result_point));
      break;
    }
    case Tag::SHAPE: {
      ::imported::Shape result_shape;
      if (!input.ReadShape(&result_shape))
        return false;

      *output = UnionType::NewShape(result_shape);
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif