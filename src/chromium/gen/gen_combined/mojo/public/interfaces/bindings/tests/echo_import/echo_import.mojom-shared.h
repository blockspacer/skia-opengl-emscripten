// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace test {
namespace echo_import {
namespace mojom {
class PointDataView;



}  // namespace mojom
}  // namespace echo_import
}  // namespace test

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::test::echo_import::mojom::PointDataView> {
  using Data = ::test::echo_import::mojom::internal::Point_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace test {
namespace echo_import {
namespace mojom {
class PointDataView {
 public:
  PointDataView() {}

  PointDataView(
      internal::Point_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t x() const {
    return data_->x;
  }
  int32_t y() const {
    return data_->y;
  }
 private:
  internal::Point_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace echo_import
}  // namespace test

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::test::echo_import::mojom::PointDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::test::echo_import::mojom::PointDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::test::echo_import::mojom::internal::Point_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->x = Traits::x(input);
    (*output)->y = Traits::y(input);
  }

  static bool Deserialize(::test::echo_import::mojom::internal::Point_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::test::echo_import::mojom::PointDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace test {
namespace echo_import {
namespace mojom {




}  // namespace mojom
}  // namespace echo_import
}  // namespace test

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_IMPORT_ECHO_IMPORT_MOJOM_SHARED_H_