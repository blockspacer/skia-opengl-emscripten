// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace mojo {
namespace test {
class StructWithConstantsDataView;



}  // namespace test
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::test::StructWithConstantsDataView> {
  using Data = ::mojo::test::internal::StructWithConstants_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace test {
// Interface base classes. They are used for type safety check.
class InterfaceWithConstantsInterfaceBase {};

using InterfaceWithConstantsPtrDataView =
    mojo::InterfacePtrDataView<InterfaceWithConstantsInterfaceBase>;
using InterfaceWithConstantsRequestDataView =
    mojo::InterfaceRequestDataView<InterfaceWithConstantsInterfaceBase>;
using InterfaceWithConstantsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<InterfaceWithConstantsInterfaceBase>;
using InterfaceWithConstantsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<InterfaceWithConstantsInterfaceBase>;
class StructWithConstantsDataView {
 public:
  StructWithConstantsDataView() {}

  StructWithConstantsDataView(
      internal::StructWithConstants_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::StructWithConstants_Data* data_ = nullptr;
};



}  // namespace test
}  // namespace mojo

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::test::StructWithConstantsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::test::StructWithConstantsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::test::internal::StructWithConstants_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
  }

  static bool Deserialize(::mojo::test::internal::StructWithConstants_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::test::StructWithConstantsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo {
namespace test {




}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_SHARED_H_