// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_TRANSFORM_MOJOM_SHARED_H_
#define UI_GFX_MOJO_TRANSFORM_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class TransformDataView;



}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::TransformDataView> {
  using Data = ::gfx::mojom::internal::Transform_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {
class TransformDataView {
 public:
  TransformDataView() {}

  TransformDataView(
      internal::Transform_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMatrixDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMatrix(UserType* output) {
    auto* pointer = data_->matrix.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<float>>(
        pointer, output, context_);
  }
 private:
  internal::Transform_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::TransformDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::TransformDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::Transform_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::matrix(input)) in_matrix = Traits::matrix(input);
    typename decltype((*output)->matrix)::BaseType::BufferWriter
        matrix_writer;
    const mojo::internal::ContainerValidateParams matrix_validate_params(
        16, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<float>>(
        in_matrix, buffer, &matrix_writer, &matrix_validate_params,
        context);
    (*output)->matrix.Set(
        matrix_writer.is_null() ? nullptr : matrix_writer.data());
  }

  static bool Deserialize(::gfx::mojom::internal::Transform_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::TransformDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {

inline void TransformDataView::GetMatrixDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->matrix.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}



}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_TRANSFORM_MOJOM_SHARED_H_