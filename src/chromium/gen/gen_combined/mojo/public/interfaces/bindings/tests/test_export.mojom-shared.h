// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/interfaces/bindings/tests/test_export.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo {
namespace test {
namespace test_export {
class StringPairDataView;

class StringPairContainerDataView;



}  // namespace test_export
}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::test_export::StringPairDataView> {
  using Data = ::mojo::test::test_export::internal::StringPair_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::test::test_export::StringPairContainerDataView> {
  using Data = ::mojo::test::test_export::internal::StringPairContainer_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {
namespace test_export {
// Interface base classes. They are used for type safety check.
class ExportedInterfaceInterfaceBase {};

using ExportedInterfacePtrDataView =
    mojo::InterfacePtrDataView<ExportedInterfaceInterfaceBase>;
using ExportedInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<ExportedInterfaceInterfaceBase>;
using ExportedInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ExportedInterfaceInterfaceBase>;
using ExportedInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ExportedInterfaceInterfaceBase>;
class StringPairDataView {
 public:
  StringPairDataView() {}

  StringPairDataView(
      internal::StringPair_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetS1DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadS1(UserType* output) {
    auto* pointer = data_->s1.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetS2DataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadS2(UserType* output) {
    auto* pointer = data_->s2.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::StringPair_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class StringPairContainerDataView {
 public:
  StringPairContainerDataView() {}

  StringPairContainerDataView(
      internal::StringPairContainer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPairsDataView(
      mojo::ArrayDataView<StringPairDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPairs(UserType* output) {
    auto* pointer = data_->pairs.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::test_export::StringPairDataView>>(
        pointer, output, context_);
  }
 private:
  internal::StringPairContainer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace test_export
}  // namespace test
}  // namespace mojo

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::test_export::StringPairDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::test_export::StringPairDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::test_export::internal::StringPair_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::s1(input)) in_s1 = Traits::s1(input);
    typename decltype((*output)->s1)::BaseType::BufferWriter
        s1_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_s1, buffer, &s1_writer, context);
    (*output)->s1.Set(
        s1_writer.is_null() ? nullptr : s1_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->s1.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null s1 in StringPair struct");
    decltype(Traits::s2(input)) in_s2 = Traits::s2(input);
    typename decltype((*output)->s2)::BaseType::BufferWriter
        s2_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_s2, buffer, &s2_writer, context);
    (*output)->s2.Set(
        s2_writer.is_null() ? nullptr : s2_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->s2.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null s2 in StringPair struct");
  }

  static bool Deserialize(::mojo::test::test_export::internal::StringPair_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::test_export::StringPairDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::test_export::StringPairContainerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::test_export::StringPairContainerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::test_export::internal::StringPairContainer_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::pairs(input)) in_pairs = Traits::pairs(input);
    typename decltype((*output)->pairs)::BaseType::BufferWriter
        pairs_writer;
    const mojo::internal::ContainerValidateParams pairs_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::test::test_export::StringPairDataView>>(
        in_pairs, buffer, &pairs_writer, &pairs_validate_params,
        context);
    (*output)->pairs.Set(
        pairs_writer.is_null() ? nullptr : pairs_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pairs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pairs in StringPairContainer struct");
  }

  static bool Deserialize(::mojo::test::test_export::internal::StringPairContainer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::test_export::StringPairContainerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {
namespace test_export {

inline void StringPairDataView::GetS1DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->s1.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void StringPairDataView::GetS2DataView(
    mojo::StringDataView* output) {
  auto pointer = data_->s2.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void StringPairContainerDataView::GetPairsDataView(
    mojo::ArrayDataView<StringPairDataView>* output) {
  auto pointer = data_->pairs.Get();
  *output = mojo::ArrayDataView<StringPairDataView>(pointer, context_);
}



}  // namespace test_export
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_SHARED_H_