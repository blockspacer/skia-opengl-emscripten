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

#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_JUMBO_H_
#endif
namespace mojo {
namespace test {
namespace blink {
Struct1::Struct1()
    : i() {}

Struct1::Struct1(
    uint8_t i_in)
    : i(std::move(i_in)) {}

Struct1::~Struct1() = default;
size_t Struct1::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->i);
  return seed;
}

bool Struct1::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Struct2::Struct2()
    : hdl() {}

Struct2::Struct2(
    mojo::ScopedHandle hdl_in)
    : hdl(std::move(hdl_in)) {}

Struct2::~Struct2() = default;

bool Struct2::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Struct3::Struct3()
    : struct_1() {}

Struct3::Struct3(
    Struct1Ptr struct_1_in)
    : struct_1(std::move(struct_1_in)) {}

Struct3::~Struct3() = default;
size_t Struct3::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->struct_1);
  return seed;
}

bool Struct3::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Struct4::Struct4()
    : data() {}

Struct4::Struct4(
    WTF::Vector<Struct1Ptr> data_in)
    : data(std::move(data_in)) {}

Struct4::~Struct4() = default;

bool Struct4::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Struct5::Struct5()
    : pair() {}

Struct5::Struct5(
    WTF::Vector<Struct1Ptr> pair_in)
    : pair(std::move(pair_in)) {}

Struct5::~Struct5() = default;

bool Struct5::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Struct6::Struct6()
    : str() {}

Struct6::Struct6(
    const WTF::String& str_in)
    : str(std::move(str_in)) {}

Struct6::~Struct6() = default;
size_t Struct6::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->str);
  return seed;
}

bool Struct6::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StructOfNullables::StructOfNullables()
    : hdl(),
      struct_1(),
      str() {}

StructOfNullables::StructOfNullables(
    mojo::ScopedHandle hdl_in,
    Struct1Ptr struct_1_in,
    const WTF::String& str_in)
    : hdl(std::move(hdl_in)),
      struct_1(std::move(struct_1_in)),
      str(std::move(str_in)) {}

StructOfNullables::~StructOfNullables() = default;

bool StructOfNullables::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::test::blink::Struct1::DataView, ::mojo::test::blink::Struct1Ptr>::Read(
    ::mojo::test::blink::Struct1::DataView input,
    ::mojo::test::blink::Struct1Ptr* output) {
  bool success = true;
  ::mojo::test::blink::Struct1Ptr result(::mojo::test::blink::Struct1::New());
  
      result->i = input.i();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::Struct2::DataView, ::mojo::test::blink::Struct2Ptr>::Read(
    ::mojo::test::blink::Struct2::DataView input,
    ::mojo::test::blink::Struct2Ptr* output) {
  bool success = true;
  ::mojo::test::blink::Struct2Ptr result(::mojo::test::blink::Struct2::New());
  
      result->hdl = input.TakeHdl();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::Struct3::DataView, ::mojo::test::blink::Struct3Ptr>::Read(
    ::mojo::test::blink::Struct3::DataView input,
    ::mojo::test::blink::Struct3Ptr* output) {
  bool success = true;
  ::mojo::test::blink::Struct3Ptr result(::mojo::test::blink::Struct3::New());
  
      if (!input.ReadStruct1(&result->struct_1))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::Struct4::DataView, ::mojo::test::blink::Struct4Ptr>::Read(
    ::mojo::test::blink::Struct4::DataView input,
    ::mojo::test::blink::Struct4Ptr* output) {
  bool success = true;
  ::mojo::test::blink::Struct4Ptr result(::mojo::test::blink::Struct4::New());
  
      if (!input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::Struct5::DataView, ::mojo::test::blink::Struct5Ptr>::Read(
    ::mojo::test::blink::Struct5::DataView input,
    ::mojo::test::blink::Struct5Ptr* output) {
  bool success = true;
  ::mojo::test::blink::Struct5Ptr result(::mojo::test::blink::Struct5::New());
  
      if (!input.ReadPair(&result->pair))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::Struct6::DataView, ::mojo::test::blink::Struct6Ptr>::Read(
    ::mojo::test::blink::Struct6::DataView input,
    ::mojo::test::blink::Struct6Ptr* output) {
  bool success = true;
  ::mojo::test::blink::Struct6Ptr result(::mojo::test::blink::Struct6::New());
  
      if (!input.ReadStr(&result->str))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::StructOfNullables::DataView, ::mojo::test::blink::StructOfNullablesPtr>::Read(
    ::mojo::test::blink::StructOfNullables::DataView input,
    ::mojo::test::blink::StructOfNullablesPtr* output) {
  bool success = true;
  ::mojo::test::blink::StructOfNullablesPtr result(::mojo::test::blink::StructOfNullables::New());
  
      result->hdl = input.TakeHdl();
      if (!input.ReadStruct1(&result->struct_1))
        success = false;
      if (!input.ReadStr(&result->str))
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