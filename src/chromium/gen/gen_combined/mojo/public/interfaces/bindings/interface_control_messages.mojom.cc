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

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

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

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-import-headers.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_JUMBO_H_
#endif
namespace mojo {
namespace interface_control {
RunMessageParams::RunMessageParams()
    : input() {}

RunMessageParams::RunMessageParams(
    RunInputPtr input_in)
    : input(std::move(input_in)) {}

RunMessageParams::~RunMessageParams() = default;
size_t RunMessageParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->input);
  return seed;
}

bool RunMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunResponseMessageParams::RunResponseMessageParams()
    : output() {}

RunResponseMessageParams::RunResponseMessageParams(
    RunOutputPtr output_in)
    : output(std::move(output_in)) {}

RunResponseMessageParams::~RunResponseMessageParams() = default;

bool RunResponseMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
QueryVersion::QueryVersion() {}

QueryVersion::~QueryVersion() = default;
size_t QueryVersion::Hash(size_t seed) const {
  return seed;
}

bool QueryVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
QueryVersionResult::QueryVersionResult()
    : version() {}

QueryVersionResult::QueryVersionResult(
    uint32_t version_in)
    : version(std::move(version_in)) {}

QueryVersionResult::~QueryVersionResult() = default;
size_t QueryVersionResult::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->version);
  return seed;
}

bool QueryVersionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FlushForTesting::FlushForTesting() {}

FlushForTesting::~FlushForTesting() = default;
size_t FlushForTesting::Hash(size_t seed) const {
  return seed;
}

bool FlushForTesting::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : input() {}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams(
    RunOrClosePipeInputPtr input_in)
    : input(std::move(input_in)) {}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() = default;
size_t RunOrClosePipeMessageParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->input);
  return seed;
}

bool RunOrClosePipeMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RequireVersion::RequireVersion()
    : version() {}

RequireVersion::RequireVersion(
    uint32_t version_in)
    : version(std::move(version_in)) {}

RequireVersion::~RequireVersion() = default;
size_t RequireVersion::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->version);
  return seed;
}

bool RequireVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunInput::RunInput() : tag_(Tag::QUERY_VERSION) {
  data_.query_version = new QueryVersionPtr;
}

RunInput::~RunInput() {
  DestroyActive();
}


void RunInput::set_query_version(
    QueryVersionPtr query_version) {
  if (tag_ == Tag::QUERY_VERSION) {
    *(data_.query_version) = std::move(query_version);
  } else {
    DestroyActive();
    tag_ = Tag::QUERY_VERSION;
    data_.query_version = new QueryVersionPtr(
        std::move(query_version));
  }
}
void RunInput::set_flush_for_testing(
    FlushForTestingPtr flush_for_testing) {
  if (tag_ == Tag::FLUSH_FOR_TESTING) {
    *(data_.flush_for_testing) = std::move(flush_for_testing);
  } else {
    DestroyActive();
    tag_ = Tag::FLUSH_FOR_TESTING;
    data_.flush_for_testing = new FlushForTestingPtr(
        std::move(flush_for_testing));
  }
}

void RunInput::DestroyActive() {
  switch (tag_) {

    case Tag::QUERY_VERSION:

      delete data_.query_version;
      break;
    case Tag::FLUSH_FOR_TESTING:

      delete data_.flush_for_testing;
      break;
  }
}
size_t RunInput::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::QUERY_VERSION:
      return mojo::internal::Hash(seed, data_.query_version);
    case Tag::FLUSH_FOR_TESTING:
      return mojo::internal::Hash(seed, data_.flush_for_testing);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RunInput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
RunOutput::RunOutput() : tag_(Tag::QUERY_VERSION_RESULT) {
  data_.query_version_result = new QueryVersionResultPtr;
}

RunOutput::~RunOutput() {
  DestroyActive();
}


void RunOutput::set_query_version_result(
    QueryVersionResultPtr query_version_result) {
  if (tag_ == Tag::QUERY_VERSION_RESULT) {
    *(data_.query_version_result) = std::move(query_version_result);
  } else {
    DestroyActive();
    tag_ = Tag::QUERY_VERSION_RESULT;
    data_.query_version_result = new QueryVersionResultPtr(
        std::move(query_version_result));
  }
}

void RunOutput::DestroyActive() {
  switch (tag_) {

    case Tag::QUERY_VERSION_RESULT:

      delete data_.query_version_result;
      break;
  }
}
size_t RunOutput::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::QUERY_VERSION_RESULT:
      return mojo::internal::Hash(seed, data_.query_version_result);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RunOutput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
RunOrClosePipeInput::RunOrClosePipeInput() : tag_(Tag::REQUIRE_VERSION) {
  data_.require_version = new RequireVersionPtr;
}

RunOrClosePipeInput::~RunOrClosePipeInput() {
  DestroyActive();
}


void RunOrClosePipeInput::set_require_version(
    RequireVersionPtr require_version) {
  if (tag_ == Tag::REQUIRE_VERSION) {
    *(data_.require_version) = std::move(require_version);
  } else {
    DestroyActive();
    tag_ = Tag::REQUIRE_VERSION;
    data_.require_version = new RequireVersionPtr(
        std::move(require_version));
  }
}

void RunOrClosePipeInput::DestroyActive() {
  switch (tag_) {

    case Tag::REQUIRE_VERSION:

      delete data_.require_version;
      break;
  }
}
size_t RunOrClosePipeInput::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::REQUIRE_VERSION:
      return mojo::internal::Hash(seed, data_.require_version);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RunOrClosePipeInput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace interface_control
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::interface_control::RunMessageParams::DataView, ::mojo::interface_control::RunMessageParamsPtr>::Read(
    ::mojo::interface_control::RunMessageParams::DataView input,
    ::mojo::interface_control::RunMessageParamsPtr* output) {
  bool success = true;
  ::mojo::interface_control::RunMessageParamsPtr result(::mojo::interface_control::RunMessageParams::New());
  
      if (!input.ReadInput(&result->input))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::RunResponseMessageParams::DataView, ::mojo::interface_control::RunResponseMessageParamsPtr>::Read(
    ::mojo::interface_control::RunResponseMessageParams::DataView input,
    ::mojo::interface_control::RunResponseMessageParamsPtr* output) {
  bool success = true;
  ::mojo::interface_control::RunResponseMessageParamsPtr result(::mojo::interface_control::RunResponseMessageParams::New());
  
      if (!input.ReadOutput(&result->output))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::QueryVersion::DataView, ::mojo::interface_control::QueryVersionPtr>::Read(
    ::mojo::interface_control::QueryVersion::DataView input,
    ::mojo::interface_control::QueryVersionPtr* output) {
  bool success = true;
  ::mojo::interface_control::QueryVersionPtr result(::mojo::interface_control::QueryVersion::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::QueryVersionResult::DataView, ::mojo::interface_control::QueryVersionResultPtr>::Read(
    ::mojo::interface_control::QueryVersionResult::DataView input,
    ::mojo::interface_control::QueryVersionResultPtr* output) {
  bool success = true;
  ::mojo::interface_control::QueryVersionResultPtr result(::mojo::interface_control::QueryVersionResult::New());
  
      result->version = input.version();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::FlushForTesting::DataView, ::mojo::interface_control::FlushForTestingPtr>::Read(
    ::mojo::interface_control::FlushForTesting::DataView input,
    ::mojo::interface_control::FlushForTestingPtr* output) {
  bool success = true;
  ::mojo::interface_control::FlushForTestingPtr result(::mojo::interface_control::FlushForTesting::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::RunOrClosePipeMessageParams::DataView, ::mojo::interface_control::RunOrClosePipeMessageParamsPtr>::Read(
    ::mojo::interface_control::RunOrClosePipeMessageParams::DataView input,
    ::mojo::interface_control::RunOrClosePipeMessageParamsPtr* output) {
  bool success = true;
  ::mojo::interface_control::RunOrClosePipeMessageParamsPtr result(::mojo::interface_control::RunOrClosePipeMessageParams::New());
  
      if (!input.ReadInput(&result->input))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::RequireVersion::DataView, ::mojo::interface_control::RequireVersionPtr>::Read(
    ::mojo::interface_control::RequireVersion::DataView input,
    ::mojo::interface_control::RequireVersionPtr* output) {
  bool success = true;
  ::mojo::interface_control::RequireVersionPtr result(::mojo::interface_control::RequireVersion::New());
  
      result->version = input.version();
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::mojo::interface_control::RunInput::DataView, ::mojo::interface_control::RunInputPtr>::Read(
    ::mojo::interface_control::RunInput::DataView input,
    ::mojo::interface_control::RunInputPtr* output) {
  using UnionType = ::mojo::interface_control::RunInput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::QUERY_VERSION: {
      ::mojo::interface_control::QueryVersionPtr result_query_version;
      if (!input.ReadQueryVersion(&result_query_version))
        return false;

      *output = UnionType::NewQueryVersion(
          std::move(result_query_version));
      break;
    }
    case Tag::FLUSH_FOR_TESTING: {
      ::mojo::interface_control::FlushForTestingPtr result_flush_for_testing;
      if (!input.ReadFlushForTesting(&result_flush_for_testing))
        return false;

      *output = UnionType::NewFlushForTesting(
          std::move(result_flush_for_testing));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::mojo::interface_control::RunOutput::DataView, ::mojo::interface_control::RunOutputPtr>::Read(
    ::mojo::interface_control::RunOutput::DataView input,
    ::mojo::interface_control::RunOutputPtr* output) {
  using UnionType = ::mojo::interface_control::RunOutput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::QUERY_VERSION_RESULT: {
      ::mojo::interface_control::QueryVersionResultPtr result_query_version_result;
      if (!input.ReadQueryVersionResult(&result_query_version_result))
        return false;

      *output = UnionType::NewQueryVersionResult(
          std::move(result_query_version_result));
      break;
    }
    default:
      return false;
  }
  return true;
}

// static
bool UnionTraits<::mojo::interface_control::RunOrClosePipeInput::DataView, ::mojo::interface_control::RunOrClosePipeInputPtr>::Read(
    ::mojo::interface_control::RunOrClosePipeInput::DataView input,
    ::mojo::interface_control::RunOrClosePipeInputPtr* output) {
  using UnionType = ::mojo::interface_control::RunOrClosePipeInput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::REQUIRE_VERSION: {
      ::mojo::interface_control::RequireVersionPtr result_require_version;
      if (!input.ReadRequireVersion(&result_require_version))
        return false;

      *output = UnionType::NewRequireVersion(
          std::move(result_require_version));
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