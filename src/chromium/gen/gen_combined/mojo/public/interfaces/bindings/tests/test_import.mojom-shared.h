// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_IMPORT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_IMPORT_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_import.mojom-shared-internal.h"
#include "mojo/public/interfaces/bindings/tests/test_export.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
namespace test_import {
class ImportingStructDataView;



}  // namespace test_import
}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::test_import::ImportingStructDataView> {
  using Data = ::mojo::test::test_import::internal::ImportingStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {
namespace test_import {
class ImportingStructDataView {
 public:
  ImportingStructDataView() {}

  ImportingStructDataView(
      internal::ImportingStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStringsDataView(
      ::mojo::test::test_export::StringPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrings(UserType* output) {
    auto* pointer = data_->strings.Get();
    return mojo::internal::Deserialize<::mojo::test::test_export::StringPairDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImportingStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace test_import
}  // namespace test
}  // namespace mojo

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::test_import::ImportingStructDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::test_import::ImportingStructDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::test_import::internal::ImportingStruct_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::strings(input)) in_strings = Traits::strings(input);
    typename decltype((*output)->strings)::BaseType::BufferWriter
        strings_writer;
    mojo::internal::Serialize<::mojo::test::test_export::StringPairDataView>(
        in_strings, buffer, &strings_writer, context);
    (*output)->strings.Set(
        strings_writer.is_null() ? nullptr : strings_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->strings.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null strings in ImportingStruct struct");
  }

  static bool Deserialize(::mojo::test::test_import::internal::ImportingStruct_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::test_import::ImportingStructDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {
namespace test_import {

inline void ImportingStructDataView::GetStringsDataView(
    ::mojo::test::test_export::StringPairDataView* output) {
  auto pointer = data_->strings.Get();
  *output = ::mojo::test::test_export::StringPairDataView(pointer, context_);
}



}  // namespace test_import
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_IMPORT_MOJOM_SHARED_H_