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

#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-blink.h"

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

#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/bindings/tests/rect_blink_traits.h"
#include "mojo/public/cpp/bindings/tests/shared_rect_traits.h"
#endif
namespace mojo {
namespace test {
namespace blink {
const char DefaultFieldValues::kFoo[] = "foo";
constexpr int32_t ScopedConstants::TEN;
constexpr int32_t ScopedConstants::ALSO_TEN;
constexpr double FloatNumberValues::V0;
constexpr double FloatNumberValues::V1;
constexpr double FloatNumberValues::V2;
constexpr float FloatNumberValues::V3;
constexpr float FloatNumberValues::V4;
constexpr float FloatNumberValues::V5;
constexpr float FloatNumberValues::V6;
constexpr double FloatNumberValues::V7;
constexpr double FloatNumberValues::V8;
constexpr double FloatNumberValues::V9;
constexpr int8_t IntegerNumberValues::V0;
constexpr int8_t IntegerNumberValues::V1;
constexpr int8_t IntegerNumberValues::V2;
constexpr int8_t IntegerNumberValues::V3;
constexpr int8_t IntegerNumberValues::V4;
constexpr int16_t IntegerNumberValues::V5;
constexpr int16_t IntegerNumberValues::V6;
constexpr int16_t IntegerNumberValues::V7;
constexpr int16_t IntegerNumberValues::V8;
constexpr int16_t IntegerNumberValues::V9;
constexpr int32_t IntegerNumberValues::V10;
constexpr int32_t IntegerNumberValues::V11;
constexpr int32_t IntegerNumberValues::V12;
constexpr int32_t IntegerNumberValues::V13;
constexpr int32_t IntegerNumberValues::V14;
constexpr int64_t IntegerNumberValues::V15;
constexpr int64_t IntegerNumberValues::V16;
constexpr int64_t IntegerNumberValues::V17;
constexpr int64_t IntegerNumberValues::V18;
constexpr int64_t IntegerNumberValues::V19;
constexpr uint8_t UnsignedNumberValues::V0;
constexpr uint8_t UnsignedNumberValues::V1;
constexpr uint8_t UnsignedNumberValues::V2;
constexpr uint16_t UnsignedNumberValues::V3;
constexpr uint16_t UnsignedNumberValues::V4;
constexpr uint16_t UnsignedNumberValues::V5;
constexpr uint32_t UnsignedNumberValues::V6;
constexpr uint32_t UnsignedNumberValues::V7;
constexpr uint32_t UnsignedNumberValues::V8;
constexpr uint64_t UnsignedNumberValues::V9;
constexpr uint64_t UnsignedNumberValues::V10;
constexpr uint64_t UnsignedNumberValues::V11;
NamedRegion::NamedRegion()
    : name(),
      rects() {}

NamedRegion::NamedRegion(
    const WTF::String& name_in,
    base::Optional<WTF::Vector<::mojo::test::blink::RectPtr>> rects_in)
    : name(std::move(name_in)),
      rects(std::move(rects_in)) {}

NamedRegion::~NamedRegion() = default;

bool NamedRegion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RectPair::RectPair()
    : first(),
      second() {}

RectPair::RectPair(
    ::mojo::test::blink::RectPtr first_in,
    ::mojo::test::blink::RectPtr second_in)
    : first(std::move(first_in)),
      second(std::move(second_in)) {}

RectPair::~RectPair() = default;

bool RectPair::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EmptyStruct::EmptyStruct() {}

EmptyStruct::~EmptyStruct() = default;
size_t EmptyStruct::Hash(size_t seed) const {
  return seed;
}

bool EmptyStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NoDefaultFieldValues::NoDefaultFieldValues()
    : f0(),
      f1(),
      f2(),
      f3(),
      f4(),
      f5(),
      f6(),
      f7(),
      f8(),
      f9(),
      f10(),
      f11(),
      f12(),
      f13(),
      f14(),
      f15(),
      f16(),
      f17(),
      f18(),
      f19(),
      f20(),
      f21(),
      f22(),
      f23(),
      f24(),
      f25(),
      f26(),
      f27(),
      f28() {}

NoDefaultFieldValues::NoDefaultFieldValues(
    bool f0_in,
    int8_t f1_in,
    uint8_t f2_in,
    int16_t f3_in,
    uint16_t f4_in,
    int32_t f5_in,
    uint32_t f6_in,
    int64_t f7_in,
    uint64_t f8_in,
    float f9_in,
    double f10_in,
    const WTF::String& f11_in,
    const WTF::String& f12_in,
    mojo::ScopedMessagePipeHandle f13_in,
    mojo::ScopedDataPipeConsumerHandle f14_in,
    mojo::ScopedDataPipeProducerHandle f15_in,
    mojo::ScopedMessagePipeHandle f16_in,
    mojo::ScopedDataPipeConsumerHandle f17_in,
    mojo::ScopedDataPipeProducerHandle f18_in,
    mojo::ScopedHandle f19_in,
    mojo::ScopedHandle f20_in,
    mojo::ScopedSharedBufferHandle f21_in,
    mojo::ScopedSharedBufferHandle f22_in,
    const WTF::Vector<WTF::String>& f23_in,
    const WTF::Vector<WTF::String>& f24_in,
    const base::Optional<WTF::Vector<WTF::String>>& f25_in,
    const base::Optional<WTF::Vector<WTF::String>>& f26_in,
    EmptyStructPtr f27_in,
    EmptyStructPtr f28_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)),
      f10(std::move(f10_in)),
      f11(std::move(f11_in)),
      f12(std::move(f12_in)),
      f13(std::move(f13_in)),
      f14(std::move(f14_in)),
      f15(std::move(f15_in)),
      f16(std::move(f16_in)),
      f17(std::move(f17_in)),
      f18(std::move(f18_in)),
      f19(std::move(f19_in)),
      f20(std::move(f20_in)),
      f21(std::move(f21_in)),
      f22(std::move(f22_in)),
      f23(std::move(f23_in)),
      f24(std::move(f24_in)),
      f25(std::move(f25_in)),
      f26(std::move(f26_in)),
      f27(std::move(f27_in)),
      f28(std::move(f28_in)) {}

NoDefaultFieldValues::~NoDefaultFieldValues() = default;

bool NoDefaultFieldValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DefaultFieldValues::DefaultFieldValues()
    : f0(true),
      f1(100),
      f2(100U),
      f3(100),
      f4(100U),
      f5(100),
      f6(100U),
      f7(100),
      f8(100ULL),
      f9(100),
      f10(100.0f),
      f11(100),
      f12(100.0),
      f13(DefaultFieldValues::kFoo),
      f14(DefaultFieldValues::kFoo),
      f15(::mojo::test::blink::Rect::New()),
      f16(::mojo::test::blink::Rect::New()) {}

DefaultFieldValues::DefaultFieldValues(
    bool f0_in,
    int8_t f1_in,
    uint8_t f2_in,
    int16_t f3_in,
    uint16_t f4_in,
    int32_t f5_in,
    uint32_t f6_in,
    int64_t f7_in,
    uint64_t f8_in,
    float f9_in,
    float f10_in,
    double f11_in,
    double f12_in,
    const WTF::String& f13_in,
    const WTF::String& f14_in,
    ::mojo::test::blink::RectPtr f15_in,
    ::mojo::test::blink::RectPtr f16_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)),
      f10(std::move(f10_in)),
      f11(std::move(f11_in)),
      f12(std::move(f12_in)),
      f13(std::move(f13_in)),
      f14(std::move(f14_in)),
      f15(std::move(f15_in)),
      f16(std::move(f16_in)) {}

DefaultFieldValues::~DefaultFieldValues() = default;

bool DefaultFieldValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ScopedConstants::ScopedConstants()
    : f0(ScopedConstants_EType::E0),
      f1(ScopedConstants_EType::E1),
      f2(ScopedConstants_EType::E2),
      f3(ScopedConstants_EType::E3),
      f4(ScopedConstants_EType::E4),
      f5(ScopedConstants::TEN),
      f6(ScopedConstants::ALSO_TEN) {}

ScopedConstants::ScopedConstants(
    ScopedConstants::EType f0_in,
    ScopedConstants::EType f1_in,
    ScopedConstants::EType f2_in,
    ScopedConstants::EType f3_in,
    ScopedConstants::EType f4_in,
    int32_t f5_in,
    int32_t f6_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)) {}

ScopedConstants::~ScopedConstants() = default;
size_t ScopedConstants::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->f0);
  seed = mojo::internal::WTFHash(seed, this->f1);
  seed = mojo::internal::WTFHash(seed, this->f2);
  seed = mojo::internal::WTFHash(seed, this->f3);
  seed = mojo::internal::WTFHash(seed, this->f4);
  seed = mojo::internal::WTFHash(seed, this->f5);
  seed = mojo::internal::WTFHash(seed, this->f6);
  return seed;
}

bool ScopedConstants::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MapKeyTypes::MapKeyTypes()
    : f1(),
      f2(),
      f3(),
      f4(),
      f5(),
      f6(),
      f7(),
      f8(),
      f9(),
      f10(),
      f11() {}

MapKeyTypes::MapKeyTypes(
    const WTF::HashMap<int8_t, int8_t>& f1_in,
    const WTF::HashMap<uint8_t, uint8_t>& f2_in,
    const WTF::HashMap<int16_t, int16_t>& f3_in,
    const WTF::HashMap<uint16_t, uint16_t>& f4_in,
    const WTF::HashMap<int32_t, int32_t>& f5_in,
    const WTF::HashMap<uint32_t, uint32_t>& f6_in,
    const WTF::HashMap<int64_t, int64_t>& f7_in,
    const WTF::HashMap<uint64_t, uint64_t>& f8_in,
    const WTF::HashMap<float, float>& f9_in,
    const WTF::HashMap<double, double>& f10_in,
    const WTF::HashMap<WTF::String, WTF::String>& f11_in)
    : f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)),
      f10(std::move(f10_in)),
      f11(std::move(f11_in)) {}

MapKeyTypes::~MapKeyTypes() = default;

bool MapKeyTypes::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MapValueTypes::MapValueTypes()
    : f0(),
      f1(),
      f2(),
      f3(),
      f4(),
      f5(),
      f6(),
      f7(),
      f8(),
      f9(),
      f10(),
      f11() {}

MapValueTypes::MapValueTypes(
    const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& f0_in,
    const WTF::HashMap<WTF::String, base::Optional<WTF::Vector<WTF::String>>>& f1_in,
    const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& f2_in,
    const WTF::HashMap<WTF::String, WTF::Vector<WTF::String>>& f3_in,
    const WTF::HashMap<WTF::String, WTF::Vector<base::Optional<WTF::Vector<WTF::String>>>>& f4_in,
    const WTF::HashMap<WTF::String, WTF::Vector<WTF::Vector<WTF::String>>>& f5_in,
    WTF::HashMap<WTF::String, ::mojo::test::blink::RectPtr> f6_in,
    const WTF::HashMap<WTF::String, WTF::HashMap<WTF::String, WTF::String>>& f7_in,
    const WTF::HashMap<WTF::String, WTF::Vector<WTF::HashMap<WTF::String, WTF::String>>>& f8_in,
    WTF::HashMap<WTF::String, mojo::ScopedHandle> f9_in,
    WTF::HashMap<WTF::String, WTF::Vector<mojo::ScopedHandle>> f10_in,
    WTF::HashMap<WTF::String, WTF::HashMap<WTF::String, mojo::ScopedHandle>> f11_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)),
      f10(std::move(f10_in)),
      f11(std::move(f11_in)) {}

MapValueTypes::~MapValueTypes() = default;

bool MapValueTypes::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ArrayValueTypes::ArrayValueTypes()
    : f0(),
      f1(),
      f2(),
      f3(),
      f4(),
      f5(),
      f6(),
      f7() {}

ArrayValueTypes::ArrayValueTypes(
    const WTF::Vector<int8_t>& f0_in,
    const WTF::Vector<int16_t>& f1_in,
    const WTF::Vector<int32_t>& f2_in,
    const WTF::Vector<int64_t>& f3_in,
    const WTF::Vector<float>& f4_in,
    const WTF::Vector<double>& f5_in,
    WTF::Vector<mojo::PendingRemote<SomeInterface>> f6_in,
    WTF::Vector<mojo::PendingReceiver<SomeInterface>> f7_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)) {}

ArrayValueTypes::~ArrayValueTypes() = default;

bool ArrayValueTypes::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FloatNumberValues::FloatNumberValues()
    : f0(FloatNumberValues::V0),
      f1(FloatNumberValues::V1),
      f2(FloatNumberValues::V2),
      f3(FloatNumberValues::V3),
      f4(FloatNumberValues::V4),
      f5(FloatNumberValues::V5),
      f6(FloatNumberValues::V6),
      f7(FloatNumberValues::V7),
      f8(FloatNumberValues::V8),
      f9(FloatNumberValues::V9) {}

FloatNumberValues::FloatNumberValues(
    double f0_in,
    double f1_in,
    double f2_in,
    float f3_in,
    float f4_in,
    float f5_in,
    float f6_in,
    double f7_in,
    double f8_in,
    double f9_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)) {}

FloatNumberValues::~FloatNumberValues() = default;
size_t FloatNumberValues::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->f0);
  seed = mojo::internal::WTFHash(seed, this->f1);
  seed = mojo::internal::WTFHash(seed, this->f2);
  seed = mojo::internal::WTFHash(seed, this->f3);
  seed = mojo::internal::WTFHash(seed, this->f4);
  seed = mojo::internal::WTFHash(seed, this->f5);
  seed = mojo::internal::WTFHash(seed, this->f6);
  seed = mojo::internal::WTFHash(seed, this->f7);
  seed = mojo::internal::WTFHash(seed, this->f8);
  seed = mojo::internal::WTFHash(seed, this->f9);
  return seed;
}

bool FloatNumberValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
IntegerNumberValues::IntegerNumberValues()
    : f0(IntegerNumberValues::V0),
      f1(IntegerNumberValues::V1),
      f2(IntegerNumberValues::V2),
      f3(IntegerNumberValues::V3),
      f4(IntegerNumberValues::V4),
      f5(IntegerNumberValues::V5),
      f6(IntegerNumberValues::V6),
      f7(IntegerNumberValues::V7),
      f8(IntegerNumberValues::V8),
      f9(IntegerNumberValues::V9),
      f10(IntegerNumberValues::V10),
      f11(IntegerNumberValues::V11),
      f12(IntegerNumberValues::V12),
      f13(IntegerNumberValues::V13),
      f14(IntegerNumberValues::V14),
      f15(IntegerNumberValues::V15),
      f16(IntegerNumberValues::V16),
      f17(IntegerNumberValues::V17),
      f18(IntegerNumberValues::V18),
      f19(IntegerNumberValues::V19) {}

IntegerNumberValues::IntegerNumberValues(
    int8_t f0_in,
    int8_t f1_in,
    int8_t f2_in,
    int8_t f3_in,
    int8_t f4_in,
    int16_t f5_in,
    int16_t f6_in,
    int16_t f7_in,
    int16_t f8_in,
    int16_t f9_in,
    int32_t f10_in,
    int32_t f11_in,
    int32_t f12_in,
    int32_t f13_in,
    int32_t f14_in,
    int64_t f15_in,
    int64_t f16_in,
    int64_t f17_in,
    int64_t f18_in,
    int64_t f19_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)),
      f10(std::move(f10_in)),
      f11(std::move(f11_in)),
      f12(std::move(f12_in)),
      f13(std::move(f13_in)),
      f14(std::move(f14_in)),
      f15(std::move(f15_in)),
      f16(std::move(f16_in)),
      f17(std::move(f17_in)),
      f18(std::move(f18_in)),
      f19(std::move(f19_in)) {}

IntegerNumberValues::~IntegerNumberValues() = default;
size_t IntegerNumberValues::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->f0);
  seed = mojo::internal::WTFHash(seed, this->f1);
  seed = mojo::internal::WTFHash(seed, this->f2);
  seed = mojo::internal::WTFHash(seed, this->f3);
  seed = mojo::internal::WTFHash(seed, this->f4);
  seed = mojo::internal::WTFHash(seed, this->f5);
  seed = mojo::internal::WTFHash(seed, this->f6);
  seed = mojo::internal::WTFHash(seed, this->f7);
  seed = mojo::internal::WTFHash(seed, this->f8);
  seed = mojo::internal::WTFHash(seed, this->f9);
  seed = mojo::internal::WTFHash(seed, this->f10);
  seed = mojo::internal::WTFHash(seed, this->f11);
  seed = mojo::internal::WTFHash(seed, this->f12);
  seed = mojo::internal::WTFHash(seed, this->f13);
  seed = mojo::internal::WTFHash(seed, this->f14);
  seed = mojo::internal::WTFHash(seed, this->f15);
  seed = mojo::internal::WTFHash(seed, this->f16);
  seed = mojo::internal::WTFHash(seed, this->f17);
  seed = mojo::internal::WTFHash(seed, this->f18);
  seed = mojo::internal::WTFHash(seed, this->f19);
  return seed;
}

bool IntegerNumberValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
UnsignedNumberValues::UnsignedNumberValues()
    : f0(UnsignedNumberValues::V0),
      f1(UnsignedNumberValues::V1),
      f2(UnsignedNumberValues::V2),
      f3(UnsignedNumberValues::V3),
      f4(UnsignedNumberValues::V4),
      f5(UnsignedNumberValues::V5),
      f6(UnsignedNumberValues::V6),
      f7(UnsignedNumberValues::V7),
      f8(UnsignedNumberValues::V8),
      f9(UnsignedNumberValues::V9),
      f10(UnsignedNumberValues::V10),
      f11(UnsignedNumberValues::V11) {}

UnsignedNumberValues::UnsignedNumberValues(
    uint8_t f0_in,
    uint8_t f1_in,
    uint8_t f2_in,
    uint16_t f3_in,
    uint16_t f4_in,
    uint16_t f5_in,
    uint32_t f6_in,
    uint32_t f7_in,
    uint32_t f8_in,
    uint64_t f9_in,
    uint64_t f10_in,
    uint64_t f11_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)),
      f7(std::move(f7_in)),
      f8(std::move(f8_in)),
      f9(std::move(f9_in)),
      f10(std::move(f10_in)),
      f11(std::move(f11_in)) {}

UnsignedNumberValues::~UnsignedNumberValues() = default;
size_t UnsignedNumberValues::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->f0);
  seed = mojo::internal::WTFHash(seed, this->f1);
  seed = mojo::internal::WTFHash(seed, this->f2);
  seed = mojo::internal::WTFHash(seed, this->f3);
  seed = mojo::internal::WTFHash(seed, this->f4);
  seed = mojo::internal::WTFHash(seed, this->f5);
  seed = mojo::internal::WTFHash(seed, this->f6);
  seed = mojo::internal::WTFHash(seed, this->f7);
  seed = mojo::internal::WTFHash(seed, this->f8);
  seed = mojo::internal::WTFHash(seed, this->f9);
  seed = mojo::internal::WTFHash(seed, this->f10);
  seed = mojo::internal::WTFHash(seed, this->f11);
  return seed;
}

bool UnsignedNumberValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
BitArrayValues::BitArrayValues()
    : f0(),
      f1(),
      f2(),
      f3(),
      f4(),
      f5(),
      f6() {}

BitArrayValues::BitArrayValues(
    const WTF::Vector<bool>& f0_in,
    const WTF::Vector<bool>& f1_in,
    const WTF::Vector<bool>& f2_in,
    const WTF::Vector<bool>& f3_in,
    const WTF::Vector<WTF::Vector<bool>>& f4_in,
    const WTF::Vector<base::Optional<WTF::Vector<bool>>>& f5_in,
    const WTF::Vector<base::Optional<WTF::Vector<bool>>>& f6_in)
    : f0(std::move(f0_in)),
      f1(std::move(f1_in)),
      f2(std::move(f2_in)),
      f3(std::move(f3_in)),
      f4(std::move(f4_in)),
      f5(std::move(f5_in)),
      f6(std::move(f6_in)) {}

BitArrayValues::~BitArrayValues() = default;

bool BitArrayValues::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiVersionStruct::MultiVersionStruct()
    : f_int32(),
      f_rect(),
      f_string(),
      f_array(),
      f_message_pipe(),
      f_bool(),
      f_int16() {}

MultiVersionStruct::MultiVersionStruct(
    int32_t f_int32_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(),
      f_string(),
      f_array(),
      f_message_pipe(),
      f_bool(),
      f_int16() {}

MultiVersionStruct::MultiVersionStruct(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(),
      f_array(),
      f_message_pipe(),
      f_bool(),
      f_int16() {}

MultiVersionStruct::MultiVersionStruct(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(),
      f_message_pipe(),
      f_bool(),
      f_int16() {}

MultiVersionStruct::MultiVersionStruct(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in,
    const base::Optional<WTF::Vector<int8_t>>& f_array_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(std::move(f_array_in)),
      f_message_pipe(),
      f_bool(),
      f_int16() {}

MultiVersionStruct::MultiVersionStruct(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in,
    const base::Optional<WTF::Vector<int8_t>>& f_array_in,
    mojo::ScopedMessagePipeHandle f_message_pipe_in,
    bool f_bool_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(std::move(f_array_in)),
      f_message_pipe(std::move(f_message_pipe_in)),
      f_bool(std::move(f_bool_in)),
      f_int16() {}

MultiVersionStruct::MultiVersionStruct(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in,
    const base::Optional<WTF::Vector<int8_t>>& f_array_in,
    mojo::ScopedMessagePipeHandle f_message_pipe_in,
    bool f_bool_in,
    int16_t f_int16_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(std::move(f_array_in)),
      f_message_pipe(std::move(f_message_pipe_in)),
      f_bool(std::move(f_bool_in)),
      f_int16(std::move(f_int16_in)) {}

MultiVersionStruct::~MultiVersionStruct() = default;

bool MultiVersionStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiVersionStructV0::MultiVersionStructV0()
    : f_int32() {}

MultiVersionStructV0::MultiVersionStructV0(
    int32_t f_int32_in)
    : f_int32(std::move(f_int32_in)) {}

MultiVersionStructV0::~MultiVersionStructV0() = default;
size_t MultiVersionStructV0::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->f_int32);
  return seed;
}

bool MultiVersionStructV0::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiVersionStructV1::MultiVersionStructV1()
    : f_int32(),
      f_rect() {}

MultiVersionStructV1::MultiVersionStructV1(
    int32_t f_int32_in)
    : f_int32(std::move(f_int32_in)),
      f_rect() {}

MultiVersionStructV1::MultiVersionStructV1(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)) {}

MultiVersionStructV1::~MultiVersionStructV1() = default;

bool MultiVersionStructV1::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiVersionStructV3::MultiVersionStructV3()
    : f_int32(),
      f_rect(),
      f_string() {}

MultiVersionStructV3::MultiVersionStructV3(
    int32_t f_int32_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(),
      f_string() {}

MultiVersionStructV3::MultiVersionStructV3(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string() {}

MultiVersionStructV3::MultiVersionStructV3(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)) {}

MultiVersionStructV3::~MultiVersionStructV3() = default;

bool MultiVersionStructV3::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiVersionStructV5::MultiVersionStructV5()
    : f_int32(),
      f_rect(),
      f_string(),
      f_array() {}

MultiVersionStructV5::MultiVersionStructV5(
    int32_t f_int32_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(),
      f_string(),
      f_array() {}

MultiVersionStructV5::MultiVersionStructV5(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(),
      f_array() {}

MultiVersionStructV5::MultiVersionStructV5(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array() {}

MultiVersionStructV5::MultiVersionStructV5(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in,
    const base::Optional<WTF::Vector<int8_t>>& f_array_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(std::move(f_array_in)) {}

MultiVersionStructV5::~MultiVersionStructV5() = default;

bool MultiVersionStructV5::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MultiVersionStructV7::MultiVersionStructV7()
    : f_int32(),
      f_rect(),
      f_string(),
      f_array(),
      f_message_pipe(),
      f_bool() {}

MultiVersionStructV7::MultiVersionStructV7(
    int32_t f_int32_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(),
      f_string(),
      f_array(),
      f_message_pipe(),
      f_bool() {}

MultiVersionStructV7::MultiVersionStructV7(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(),
      f_array(),
      f_message_pipe(),
      f_bool() {}

MultiVersionStructV7::MultiVersionStructV7(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(),
      f_message_pipe(),
      f_bool() {}

MultiVersionStructV7::MultiVersionStructV7(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in,
    const base::Optional<WTF::Vector<int8_t>>& f_array_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(std::move(f_array_in)),
      f_message_pipe(),
      f_bool() {}

MultiVersionStructV7::MultiVersionStructV7(
    int32_t f_int32_in,
    ::mojo::test::blink::RectPtr f_rect_in,
    const WTF::String& f_string_in,
    const base::Optional<WTF::Vector<int8_t>>& f_array_in,
    mojo::ScopedMessagePipeHandle f_message_pipe_in,
    bool f_bool_in)
    : f_int32(std::move(f_int32_in)),
      f_rect(std::move(f_rect_in)),
      f_string(std::move(f_string_in)),
      f_array(std::move(f_array_in)),
      f_message_pipe(std::move(f_message_pipe_in)),
      f_bool(std::move(f_bool_in)) {}

MultiVersionStructV7::~MultiVersionStructV7() = default;

bool MultiVersionStructV7::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ReorderedStruct::ReorderedStruct()
    : a(3),
      b(6),
      c(1) {}

ReorderedStruct::ReorderedStruct(
    int32_t c_in)
    : a(3),
      b(6),
      c(std::move(c_in)) {}

ReorderedStruct::ReorderedStruct(
    int32_t a_in,
    int32_t c_in)
    : a(std::move(a_in)),
      b(6),
      c(std::move(c_in)) {}

ReorderedStruct::ReorderedStruct(
    int32_t a_in,
    int32_t b_in,
    int32_t c_in)
    : a(std::move(a_in)),
      b(std::move(b_in)),
      c(std::move(c_in)) {}

ReorderedStruct::~ReorderedStruct() = default;
size_t ReorderedStruct::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->a);
  seed = mojo::internal::WTFHash(seed, this->b);
  seed = mojo::internal::WTFHash(seed, this->c);
  return seed;
}

bool ReorderedStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContainsInterface::ContainsInterface()
    : some_interface() {}

ContainsInterface::ContainsInterface(
    mojo::PendingRemote<SomeInterface> some_interface_in)
    : some_interface(std::move(some_interface_in)) {}

ContainsInterface::~ContainsInterface() = default;

bool ContainsInterface::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContainsOther::ContainsOther()
    : other() {}

ContainsOther::ContainsOther(
    int32_t other_in)
    : other(std::move(other_in)) {}

ContainsOther::~ContainsOther() = default;
size_t ContainsOther::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->other);
  return seed;
}

bool ContainsOther::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContainsInterfaceRequest::ContainsInterfaceRequest()
    : request() {}

ContainsInterfaceRequest::ContainsInterfaceRequest(
    mojo::PendingReceiver<SomeInterface> request_in)
    : request(std::move(request_in)) {}

ContainsInterfaceRequest::~ContainsInterfaceRequest() = default;

bool ContainsInterfaceRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SingleBoolStruct::SingleBoolStruct()
    : value() {}

SingleBoolStruct::SingleBoolStruct(
    bool value_in)
    : value(std::move(value_in)) {}

SingleBoolStruct::~SingleBoolStruct() = default;
size_t SingleBoolStruct::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

bool SingleBoolStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ContainsHashable::ContainsHashable()
    : rect() {}

ContainsHashable::ContainsHashable(
    const mojo::test::RectBlink& rect_in)
    : rect(std::move(rect_in)) {}

ContainsHashable::~ContainsHashable() = default;
size_t ContainsHashable::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->rect);
  return seed;
}

bool ContainsHashable::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SimpleNestedStruct::SimpleNestedStruct()
    : nested() {}

SimpleNestedStruct::SimpleNestedStruct(
    ContainsOtherPtr nested_in)
    : nested(std::move(nested_in)) {}

SimpleNestedStruct::~SimpleNestedStruct() = default;
size_t SimpleNestedStruct::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->nested);
  return seed;
}

bool SimpleNestedStruct::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char SomeInterface::Name_[] = "mojo.test.SomeInterface";

class SomeInterface_SomeMethod_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SomeInterface_SomeMethod_ForwardToCallback(
      SomeInterface::SomeMethodCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SomeInterface::SomeMethodCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(SomeInterface_SomeMethod_ForwardToCallback);
};

SomeInterfaceProxy::SomeInterfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
class SomeInterfaceProxy_SomeMethod_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SomeInterfaceProxy_SomeMethod_Message(
      uint32_t message_flags
      , RectPairPtr param_pair
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSomeInterface_SomeMethod_Name,
          message_flags)
      , param_pair_(std::move(param_pair)){}
  ~SomeInterfaceProxy_SomeMethod_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool expects_response,
      bool is_sync,
      RectPairPtr param_pair) {

    
  const uint32_t kFlags =
      ((expects_response) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SomeInterfaceProxy_SomeMethod_Message>(
          kFlags
          , std::move(param_pair)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSomeInterface_SomeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::SomeInterface_SomeMethod_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->pair)::BaseType::BufferWriter
      pair_writer;
  mojo::internal::Serialize<::mojo::test::RectPairDataView>(
      param_pair, buffer, &pair_writer, &serialization_context);
  params->pair.Set(
      pair_writer.is_null() ? nullptr : pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pair in SomeInterface.SomeMethod request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SomeInterface* impl, SomeInterface::SomeMethodCallback callback) {
    impl->SomeMethod(
        std::move(param_pair_), std::move(callback));
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::SomeInterface_SomeMethod_Params_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->pair)::BaseType::BufferWriter
      pair_writer;
  mojo::internal::Serialize<::mojo::test::RectPairDataView>(
      param_pair_, buffer, &pair_writer, serialization_context);
  params->pair.Set(
      pair_writer.is_null() ? nullptr : pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pair in SomeInterface.SomeMethod request");
  }
  RectPairPtr param_pair_;

  DISALLOW_COPY_AND_ASSIGN(SomeInterfaceProxy_SomeMethod_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SomeInterfaceProxy_SomeMethod_Message::kMessageTag = {};

void SomeInterfaceProxy::SomeMethod(
    RectPairPtr in_pair, SomeMethodCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::SomeInterface::SomeMethod");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kSerialize = receiver_->PrefersSerializedMessages();
  auto message = SomeInterfaceProxy_SomeMethod_Message::Build(
      kSerialize, kExpectsResponse, kIsSync, std::move(in_pair));

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SomeInterface::Name_);
  message.set_method_name("SomeMethod");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new SomeInterface_SomeMethod_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class SomeInterface_SomeMethod_ProxyToResponder {
 public:
  static SomeInterface::SomeMethodCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<SomeInterface_SomeMethod_ProxyToResponder> proxy(
        new SomeInterface_SomeMethod_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&SomeInterface_SomeMethod_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~SomeInterface_SomeMethod_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  SomeInterface_SomeMethod_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "SomeInterface::SomeMethodCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      RectPairPtr in_other_pair);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(SomeInterface_SomeMethod_ProxyToResponder);
};
class SomeInterface_SomeMethod_Response_Message
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  explicit SomeInterface_SomeMethod_Response_Message(
      uint32_t message_flags
      , RectPairPtr param_other_pair
  )
      : mojo::internal::UnserializedMessageContext(
          &kMessageTag,
          internal::kSomeInterface_SomeMethod_Name,
          message_flags)
      , param_other_pair_(std::move(param_other_pair)){}
  ~SomeInterface_SomeMethod_Response_Message() override = default;

  static mojo::Message Build(
      bool serialize,
      bool is_sync,
      RectPairPtr param_other_pair) {

    
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync) ? mojo::Message::kFlagIsSync : 0);

    if (!serialize) {
      return mojo::Message(std::make_unique<SomeInterface_SomeMethod_Response_Message>(
          kFlags
          , std::move(param_other_pair)
          ));
    }

    DCHECK(serialize);
    
  mojo::Message message(
      internal::kSomeInterface_SomeMethod_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::mojo::test::internal::SomeInterface_SomeMethod_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->other_pair)::BaseType::BufferWriter
      other_pair_writer;
  mojo::internal::Serialize<::mojo::test::RectPairDataView>(
      param_other_pair, buffer, &other_pair_writer, &serialization_context);
  params->other_pair.Set(
      other_pair_writer.is_null() ? nullptr : other_pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->other_pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null other_pair in SomeInterface.SomeMethod response");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);
    return message;
  }


  void Dispatch(SomeInterface::SomeMethodCallback* callback) {
    std::move(*callback).Run(
        std::move(param_other_pair_));
  }



 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* serialization_context,
                 mojo::internal::Buffer* buffer) override {
    ::mojo::test::internal::SomeInterface_SomeMethod_ResponseParams_Data::BufferWriter
        params;
    params.Allocate(buffer);
  typename decltype(params->other_pair)::BaseType::BufferWriter
      other_pair_writer;
  mojo::internal::Serialize<::mojo::test::RectPairDataView>(
      param_other_pair_, buffer, &other_pair_writer, serialization_context);
  params->other_pair.Set(
      other_pair_writer.is_null() ? nullptr : other_pair_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->other_pair.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null other_pair in SomeInterface.SomeMethod response");
  }
  RectPairPtr param_other_pair_;

  DISALLOW_COPY_AND_ASSIGN(SomeInterface_SomeMethod_Response_Message);
};

const mojo::internal::UnserializedMessageContext::Tag
SomeInterface_SomeMethod_Response_Message::kMessageTag = {};

bool SomeInterface_SomeMethod_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::SomeInterface::SomeMethodCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);
  if (!message->is_serialized()) {
    auto context =
        message->TakeUnserializedContext<SomeInterface_SomeMethod_Response_Message>();
    if (!context) {
      // The Message was not of the expected type. It may be a valid message
      // which was build using a different variant of these bindings. Force
      // serialization before dispatch in this case.
      message->SerializeIfNecessary();
    } else {
      if (!callback_.is_null())
        context->Dispatch(&callback_);
      return true;
    }
  }

  DCHECK(message->is_serialized());
  internal::SomeInterface_SomeMethod_ResponseParams_Data* params =
      reinterpret_cast<
          internal::SomeInterface_SomeMethod_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  RectPairPtr p_other_pair{};
  SomeInterface_SomeMethod_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadOtherPair(&p_other_pair))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        SomeInterface::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_other_pair));
  return true;
}

void SomeInterface_SomeMethod_ProxyToResponder::Run(
    RectPairPtr in_other_pair) {
  const bool kSerialize = responder_->PrefersSerializedMessages();
  auto message = SomeInterface_SomeMethod_Response_Message::Build(kSerialize, is_sync_, std::move(in_other_pair));

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::SomeInterface::SomeMethodCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SomeInterface::Name_);
  message.set_method_name("SomeMethod");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool SomeInterfaceStubDispatch::Accept(
    SomeInterface* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSomeInterface_SomeMethod_Name: {
      break;
    }
  }
  return false;
}

// static
bool SomeInterfaceStubDispatch::AcceptWithResponder(
    SomeInterface* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kSomeInterface_SomeMethod_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::SomeInterface::SomeMethod",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);
      if (!message->is_serialized()) {
        auto context = message->TakeUnserializedContext<
            SomeInterfaceProxy_SomeMethod_Message>();
        if (!context) {
          // The Message was not of the expected type. It may be a valid message
          // which was built using a different variant of these bindings. Force
          // serialization before dispatch in this case.
          message->SerializeIfNecessary();
        } else {
          SomeInterface::SomeMethodCallback callback =
              SomeInterface_SomeMethod_ProxyToResponder::CreateCallback(
                  message->request_id(),
                  message->has_flag(mojo::Message::kFlagIsSync),
                  std::move(responder));
          context->Dispatch(impl, std::move(callback));
          return true;
        }
      }

      internal::SomeInterface_SomeMethod_Params_Data* params =
          reinterpret_cast<
              internal::SomeInterface_SomeMethod_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      RectPairPtr p_pair{};
      SomeInterface_SomeMethod_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadPair(&p_pair))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SomeInterface::Name_, 0, false);
        return false;
      }
      SomeInterface::SomeMethodCallback callback =
          SomeInterface_SomeMethod_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SomeMethod(
std::move(p_pair), std::move(callback));
      return true;
    }
  }
  return false;
}

bool SomeInterfaceRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SomeInterface RequestValidator");

  switch (message->header()->name) {
    case internal::kSomeInterface_SomeMethod_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SomeInterface_SomeMethod_Params_Data>(
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

bool SomeInterfaceResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "SomeInterface ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSomeInterface_SomeMethod_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SomeInterface_SomeMethod_ResponseParams_Data>(
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
}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


// static
bool StructTraits<::mojo::test::blink::NamedRegion::DataView, ::mojo::test::blink::NamedRegionPtr>::Read(
    ::mojo::test::blink::NamedRegion::DataView input,
    ::mojo::test::blink::NamedRegionPtr* output) {
  bool success = true;
  ::mojo::test::blink::NamedRegionPtr result(::mojo::test::blink::NamedRegion::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadRects(&result->rects))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::RectPair::DataView, ::mojo::test::blink::RectPairPtr>::Read(
    ::mojo::test::blink::RectPair::DataView input,
    ::mojo::test::blink::RectPairPtr* output) {
  bool success = true;
  ::mojo::test::blink::RectPairPtr result(::mojo::test::blink::RectPair::New());
  
      if (!input.ReadFirst(&result->first))
        success = false;
      if (!input.ReadSecond(&result->second))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::EmptyStruct::DataView, ::mojo::test::blink::EmptyStructPtr>::Read(
    ::mojo::test::blink::EmptyStruct::DataView input,
    ::mojo::test::blink::EmptyStructPtr* output) {
  bool success = true;
  ::mojo::test::blink::EmptyStructPtr result(::mojo::test::blink::EmptyStruct::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::NoDefaultFieldValues::DataView, ::mojo::test::blink::NoDefaultFieldValuesPtr>::Read(
    ::mojo::test::blink::NoDefaultFieldValues::DataView input,
    ::mojo::test::blink::NoDefaultFieldValuesPtr* output) {
  bool success = true;
  ::mojo::test::blink::NoDefaultFieldValuesPtr result(::mojo::test::blink::NoDefaultFieldValues::New());
  
      result->f0 = input.f0();
      result->f1 = input.f1();
      result->f2 = input.f2();
      result->f3 = input.f3();
      result->f4 = input.f4();
      result->f5 = input.f5();
      result->f6 = input.f6();
      result->f7 = input.f7();
      result->f8 = input.f8();
      result->f9 = input.f9();
      result->f10 = input.f10();
      if (!input.ReadF11(&result->f11))
        success = false;
      if (!input.ReadF12(&result->f12))
        success = false;
      result->f13 = input.TakeF13();
      result->f14 = input.TakeF14();
      result->f15 = input.TakeF15();
      result->f16 = input.TakeF16();
      result->f17 = input.TakeF17();
      result->f18 = input.TakeF18();
      result->f19 = input.TakeF19();
      result->f20 = input.TakeF20();
      result->f21 = input.TakeF21();
      result->f22 = input.TakeF22();
      if (!input.ReadF23(&result->f23))
        success = false;
      if (!input.ReadF24(&result->f24))
        success = false;
      if (!input.ReadF25(&result->f25))
        success = false;
      if (!input.ReadF26(&result->f26))
        success = false;
      if (!input.ReadF27(&result->f27))
        success = false;
      if (!input.ReadF28(&result->f28))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::DefaultFieldValues::DataView, ::mojo::test::blink::DefaultFieldValuesPtr>::Read(
    ::mojo::test::blink::DefaultFieldValues::DataView input,
    ::mojo::test::blink::DefaultFieldValuesPtr* output) {
  bool success = true;
  ::mojo::test::blink::DefaultFieldValuesPtr result(::mojo::test::blink::DefaultFieldValues::New());
  
      result->f0 = input.f0();
      result->f1 = input.f1();
      result->f2 = input.f2();
      result->f3 = input.f3();
      result->f4 = input.f4();
      result->f5 = input.f5();
      result->f6 = input.f6();
      result->f7 = input.f7();
      result->f8 = input.f8();
      result->f9 = input.f9();
      result->f10 = input.f10();
      result->f11 = input.f11();
      result->f12 = input.f12();
      if (!input.ReadF13(&result->f13))
        success = false;
      if (!input.ReadF14(&result->f14))
        success = false;
      if (!input.ReadF15(&result->f15))
        success = false;
      if (!input.ReadF16(&result->f16))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ScopedConstants::DataView, ::mojo::test::blink::ScopedConstantsPtr>::Read(
    ::mojo::test::blink::ScopedConstants::DataView input,
    ::mojo::test::blink::ScopedConstantsPtr* output) {
  bool success = true;
  ::mojo::test::blink::ScopedConstantsPtr result(::mojo::test::blink::ScopedConstants::New());
  
      if (!input.ReadF0(&result->f0))
        success = false;
      if (!input.ReadF1(&result->f1))
        success = false;
      if (!input.ReadF2(&result->f2))
        success = false;
      if (!input.ReadF3(&result->f3))
        success = false;
      if (!input.ReadF4(&result->f4))
        success = false;
      result->f5 = input.f5();
      result->f6 = input.f6();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MapKeyTypes::DataView, ::mojo::test::blink::MapKeyTypesPtr>::Read(
    ::mojo::test::blink::MapKeyTypes::DataView input,
    ::mojo::test::blink::MapKeyTypesPtr* output) {
  bool success = true;
  ::mojo::test::blink::MapKeyTypesPtr result(::mojo::test::blink::MapKeyTypes::New());
  
      if (!input.ReadF1(&result->f1))
        success = false;
      if (!input.ReadF2(&result->f2))
        success = false;
      if (!input.ReadF3(&result->f3))
        success = false;
      if (!input.ReadF4(&result->f4))
        success = false;
      if (!input.ReadF5(&result->f5))
        success = false;
      if (!input.ReadF6(&result->f6))
        success = false;
      if (!input.ReadF7(&result->f7))
        success = false;
      if (!input.ReadF8(&result->f8))
        success = false;
      if (!input.ReadF9(&result->f9))
        success = false;
      if (!input.ReadF10(&result->f10))
        success = false;
      if (!input.ReadF11(&result->f11))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MapValueTypes::DataView, ::mojo::test::blink::MapValueTypesPtr>::Read(
    ::mojo::test::blink::MapValueTypes::DataView input,
    ::mojo::test::blink::MapValueTypesPtr* output) {
  bool success = true;
  ::mojo::test::blink::MapValueTypesPtr result(::mojo::test::blink::MapValueTypes::New());
  
      if (!input.ReadF0(&result->f0))
        success = false;
      if (!input.ReadF1(&result->f1))
        success = false;
      if (!input.ReadF2(&result->f2))
        success = false;
      if (!input.ReadF3(&result->f3))
        success = false;
      if (!input.ReadF4(&result->f4))
        success = false;
      if (!input.ReadF5(&result->f5))
        success = false;
      if (!input.ReadF6(&result->f6))
        success = false;
      if (!input.ReadF7(&result->f7))
        success = false;
      if (!input.ReadF8(&result->f8))
        success = false;
      if (!input.ReadF9(&result->f9))
        success = false;
      if (!input.ReadF10(&result->f10))
        success = false;
      if (!input.ReadF11(&result->f11))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ArrayValueTypes::DataView, ::mojo::test::blink::ArrayValueTypesPtr>::Read(
    ::mojo::test::blink::ArrayValueTypes::DataView input,
    ::mojo::test::blink::ArrayValueTypesPtr* output) {
  bool success = true;
  ::mojo::test::blink::ArrayValueTypesPtr result(::mojo::test::blink::ArrayValueTypes::New());
  
      if (!input.ReadF0(&result->f0))
        success = false;
      if (!input.ReadF1(&result->f1))
        success = false;
      if (!input.ReadF2(&result->f2))
        success = false;
      if (!input.ReadF3(&result->f3))
        success = false;
      if (!input.ReadF4(&result->f4))
        success = false;
      if (!input.ReadF5(&result->f5))
        success = false;
      if (!input.ReadF6(&result->f6))
        success = false;
      if (!input.ReadF7(&result->f7))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::FloatNumberValues::DataView, ::mojo::test::blink::FloatNumberValuesPtr>::Read(
    ::mojo::test::blink::FloatNumberValues::DataView input,
    ::mojo::test::blink::FloatNumberValuesPtr* output) {
  bool success = true;
  ::mojo::test::blink::FloatNumberValuesPtr result(::mojo::test::blink::FloatNumberValues::New());
  
      result->f0 = input.f0();
      result->f1 = input.f1();
      result->f2 = input.f2();
      result->f3 = input.f3();
      result->f4 = input.f4();
      result->f5 = input.f5();
      result->f6 = input.f6();
      result->f7 = input.f7();
      result->f8 = input.f8();
      result->f9 = input.f9();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::IntegerNumberValues::DataView, ::mojo::test::blink::IntegerNumberValuesPtr>::Read(
    ::mojo::test::blink::IntegerNumberValues::DataView input,
    ::mojo::test::blink::IntegerNumberValuesPtr* output) {
  bool success = true;
  ::mojo::test::blink::IntegerNumberValuesPtr result(::mojo::test::blink::IntegerNumberValues::New());
  
      result->f0 = input.f0();
      result->f1 = input.f1();
      result->f2 = input.f2();
      result->f3 = input.f3();
      result->f4 = input.f4();
      result->f5 = input.f5();
      result->f6 = input.f6();
      result->f7 = input.f7();
      result->f8 = input.f8();
      result->f9 = input.f9();
      result->f10 = input.f10();
      result->f11 = input.f11();
      result->f12 = input.f12();
      result->f13 = input.f13();
      result->f14 = input.f14();
      result->f15 = input.f15();
      result->f16 = input.f16();
      result->f17 = input.f17();
      result->f18 = input.f18();
      result->f19 = input.f19();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::UnsignedNumberValues::DataView, ::mojo::test::blink::UnsignedNumberValuesPtr>::Read(
    ::mojo::test::blink::UnsignedNumberValues::DataView input,
    ::mojo::test::blink::UnsignedNumberValuesPtr* output) {
  bool success = true;
  ::mojo::test::blink::UnsignedNumberValuesPtr result(::mojo::test::blink::UnsignedNumberValues::New());
  
      result->f0 = input.f0();
      result->f1 = input.f1();
      result->f2 = input.f2();
      result->f3 = input.f3();
      result->f4 = input.f4();
      result->f5 = input.f5();
      result->f6 = input.f6();
      result->f7 = input.f7();
      result->f8 = input.f8();
      result->f9 = input.f9();
      result->f10 = input.f10();
      result->f11 = input.f11();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::BitArrayValues::DataView, ::mojo::test::blink::BitArrayValuesPtr>::Read(
    ::mojo::test::blink::BitArrayValues::DataView input,
    ::mojo::test::blink::BitArrayValuesPtr* output) {
  bool success = true;
  ::mojo::test::blink::BitArrayValuesPtr result(::mojo::test::blink::BitArrayValues::New());
  
      if (!input.ReadF0(&result->f0))
        success = false;
      if (!input.ReadF1(&result->f1))
        success = false;
      if (!input.ReadF2(&result->f2))
        success = false;
      if (!input.ReadF3(&result->f3))
        success = false;
      if (!input.ReadF4(&result->f4))
        success = false;
      if (!input.ReadF5(&result->f5))
        success = false;
      if (!input.ReadF6(&result->f6))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MultiVersionStruct::DataView, ::mojo::test::blink::MultiVersionStructPtr>::Read(
    ::mojo::test::blink::MultiVersionStruct::DataView input,
    ::mojo::test::blink::MultiVersionStructPtr* output) {
  bool success = true;
  ::mojo::test::blink::MultiVersionStructPtr result(::mojo::test::blink::MultiVersionStruct::New());
  
      result->f_int32 = input.f_int32();
      if (!input.ReadFRect(&result->f_rect))
        success = false;
      if (!input.ReadFString(&result->f_string))
        success = false;
      if (!input.ReadFArray(&result->f_array))
        success = false;
      result->f_message_pipe = input.TakeFMessagePipe();
      result->f_bool = input.f_bool();
      result->f_int16 = input.f_int16();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MultiVersionStructV0::DataView, ::mojo::test::blink::MultiVersionStructV0Ptr>::Read(
    ::mojo::test::blink::MultiVersionStructV0::DataView input,
    ::mojo::test::blink::MultiVersionStructV0Ptr* output) {
  bool success = true;
  ::mojo::test::blink::MultiVersionStructV0Ptr result(::mojo::test::blink::MultiVersionStructV0::New());
  
      result->f_int32 = input.f_int32();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MultiVersionStructV1::DataView, ::mojo::test::blink::MultiVersionStructV1Ptr>::Read(
    ::mojo::test::blink::MultiVersionStructV1::DataView input,
    ::mojo::test::blink::MultiVersionStructV1Ptr* output) {
  bool success = true;
  ::mojo::test::blink::MultiVersionStructV1Ptr result(::mojo::test::blink::MultiVersionStructV1::New());
  
      result->f_int32 = input.f_int32();
      if (!input.ReadFRect(&result->f_rect))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MultiVersionStructV3::DataView, ::mojo::test::blink::MultiVersionStructV3Ptr>::Read(
    ::mojo::test::blink::MultiVersionStructV3::DataView input,
    ::mojo::test::blink::MultiVersionStructV3Ptr* output) {
  bool success = true;
  ::mojo::test::blink::MultiVersionStructV3Ptr result(::mojo::test::blink::MultiVersionStructV3::New());
  
      result->f_int32 = input.f_int32();
      if (!input.ReadFRect(&result->f_rect))
        success = false;
      if (!input.ReadFString(&result->f_string))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MultiVersionStructV5::DataView, ::mojo::test::blink::MultiVersionStructV5Ptr>::Read(
    ::mojo::test::blink::MultiVersionStructV5::DataView input,
    ::mojo::test::blink::MultiVersionStructV5Ptr* output) {
  bool success = true;
  ::mojo::test::blink::MultiVersionStructV5Ptr result(::mojo::test::blink::MultiVersionStructV5::New());
  
      result->f_int32 = input.f_int32();
      if (!input.ReadFRect(&result->f_rect))
        success = false;
      if (!input.ReadFString(&result->f_string))
        success = false;
      if (!input.ReadFArray(&result->f_array))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::MultiVersionStructV7::DataView, ::mojo::test::blink::MultiVersionStructV7Ptr>::Read(
    ::mojo::test::blink::MultiVersionStructV7::DataView input,
    ::mojo::test::blink::MultiVersionStructV7Ptr* output) {
  bool success = true;
  ::mojo::test::blink::MultiVersionStructV7Ptr result(::mojo::test::blink::MultiVersionStructV7::New());
  
      result->f_int32 = input.f_int32();
      if (!input.ReadFRect(&result->f_rect))
        success = false;
      if (!input.ReadFString(&result->f_string))
        success = false;
      if (!input.ReadFArray(&result->f_array))
        success = false;
      result->f_message_pipe = input.TakeFMessagePipe();
      result->f_bool = input.f_bool();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ReorderedStruct::DataView, ::mojo::test::blink::ReorderedStructPtr>::Read(
    ::mojo::test::blink::ReorderedStruct::DataView input,
    ::mojo::test::blink::ReorderedStructPtr* output) {
  bool success = true;
  ::mojo::test::blink::ReorderedStructPtr result(::mojo::test::blink::ReorderedStruct::New());
  
      result->c = input.c();
      result->a = input.a();
      result->b = input.b();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ContainsInterface::DataView, ::mojo::test::blink::ContainsInterfacePtr>::Read(
    ::mojo::test::blink::ContainsInterface::DataView input,
    ::mojo::test::blink::ContainsInterfacePtr* output) {
  bool success = true;
  ::mojo::test::blink::ContainsInterfacePtr result(::mojo::test::blink::ContainsInterface::New());
  
      result->some_interface =
          input.TakeSomeInterface<decltype(result->some_interface)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ContainsOther::DataView, ::mojo::test::blink::ContainsOtherPtr>::Read(
    ::mojo::test::blink::ContainsOther::DataView input,
    ::mojo::test::blink::ContainsOtherPtr* output) {
  bool success = true;
  ::mojo::test::blink::ContainsOtherPtr result(::mojo::test::blink::ContainsOther::New());
  
      result->other = input.other();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ContainsInterfaceRequest::DataView, ::mojo::test::blink::ContainsInterfaceRequestPtr>::Read(
    ::mojo::test::blink::ContainsInterfaceRequest::DataView input,
    ::mojo::test::blink::ContainsInterfaceRequestPtr* output) {
  bool success = true;
  ::mojo::test::blink::ContainsInterfaceRequestPtr result(::mojo::test::blink::ContainsInterfaceRequest::New());
  
      result->request =
          input.TakeRequest<decltype(result->request)>();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::SingleBoolStruct::DataView, ::mojo::test::blink::SingleBoolStructPtr>::Read(
    ::mojo::test::blink::SingleBoolStruct::DataView input,
    ::mojo::test::blink::SingleBoolStructPtr* output) {
  bool success = true;
  ::mojo::test::blink::SingleBoolStructPtr result(::mojo::test::blink::SingleBoolStruct::New());
  
      result->value = input.value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::ContainsHashable::DataView, ::mojo::test::blink::ContainsHashablePtr>::Read(
    ::mojo::test::blink::ContainsHashable::DataView input,
    ::mojo::test::blink::ContainsHashablePtr* output) {
  bool success = true;
  ::mojo::test::blink::ContainsHashablePtr result(::mojo::test::blink::ContainsHashable::New());
  
      if (!input.ReadRect(&result->rect))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::test::blink::SimpleNestedStruct::DataView, ::mojo::test::blink::SimpleNestedStructPtr>::Read(
    ::mojo::test::blink::SimpleNestedStruct::DataView input,
    ::mojo::test::blink::SimpleNestedStructPtr* output) {
  bool success = true;
  ::mojo::test::blink::SimpleNestedStructPtr result(::mojo::test::blink::SimpleNestedStruct::New());
  
      if (!input.ReadNested(&result->nested))
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