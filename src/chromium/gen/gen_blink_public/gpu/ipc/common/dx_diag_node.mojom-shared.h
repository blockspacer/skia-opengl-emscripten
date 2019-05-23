// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_SHARED_H_

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
#include "gpu/ipc/common/dx_diag_node.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class DxDiagNodeDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::DxDiagNodeDataView> {
  using Data = ::gpu::mojom::internal::DxDiagNode_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {
class DxDiagNodeDataView {
 public:
  DxDiagNodeDataView() {}

  DxDiagNodeDataView(
      internal::DxDiagNode_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValuesDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValues(UserType* output) {
    auto* pointer = data_->values.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetChildrenDataView(
      mojo::MapDataView<mojo::StringDataView, DxDiagNodeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChildren(UserType* output) {
    auto* pointer = data_->children.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::gpu::mojom::DxDiagNodeDataView>>(
        pointer, output, context_);
  }
 private:
  internal::DxDiagNode_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::DxDiagNodeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::DxDiagNodeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::DxDiagNode_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::values(input)) in_values = Traits::values(input);
    typename decltype((*output)->values)::BaseType::BufferWriter
        values_writer;
    const mojo::internal::ContainerValidateParams values_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_values, buffer, &values_writer, &values_validate_params,
        context);
    (*output)->values.Set(
        values_writer.is_null() ? nullptr : values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null values in DxDiagNode struct");
    decltype(Traits::children(input)) in_children = Traits::children(input);
    typename decltype((*output)->children)::BaseType::BufferWriter
        children_writer;
    const mojo::internal::ContainerValidateParams children_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::gpu::mojom::DxDiagNodeDataView>>(
        in_children, buffer, &children_writer, &children_validate_params,
        context);
    (*output)->children.Set(
        children_writer.is_null() ? nullptr : children_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->children.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null children in DxDiagNode struct");
  }

  static bool Deserialize(::gpu::mojom::internal::DxDiagNode_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::DxDiagNodeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {

inline void DxDiagNodeDataView::GetValuesDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->values.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}
inline void DxDiagNodeDataView::GetChildrenDataView(
    mojo::MapDataView<mojo::StringDataView, DxDiagNodeDataView>* output) {
  auto pointer = data_->children.Get();
  *output = mojo::MapDataView<mojo::StringDataView, DxDiagNodeDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_SHARED_H_