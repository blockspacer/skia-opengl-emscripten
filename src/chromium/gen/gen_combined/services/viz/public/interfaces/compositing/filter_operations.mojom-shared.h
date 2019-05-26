// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/filter_operations.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/filter_operation.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class FilterOperationsDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::FilterOperationsDataView> {
  using Data = ::viz::mojom::internal::FilterOperations_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class FilterOperationsDataView {
 public:
  FilterOperationsDataView() {}

  FilterOperationsDataView(
      internal::FilterOperations_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOperationsDataView(
      mojo::ArrayDataView<::viz::mojom::FilterOperationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOperations(UserType* output) {
    auto* pointer = data_->operations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::FilterOperationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FilterOperations_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::FilterOperationsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::FilterOperationsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::FilterOperations_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::operations(input)) in_operations = Traits::operations(input);
    typename decltype((*output)->operations)::BaseType::BufferWriter
        operations_writer;
    const mojo::internal::ContainerValidateParams operations_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::FilterOperationDataView>>(
        in_operations, buffer, &operations_writer, &operations_validate_params,
        context);
    (*output)->operations.Set(
        operations_writer.is_null() ? nullptr : operations_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->operations.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null operations in FilterOperations struct");
  }

  static bool Deserialize(::viz::mojom::internal::FilterOperations_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::FilterOperationsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void FilterOperationsDataView::GetOperationsDataView(
    mojo::ArrayDataView<::viz::mojom::FilterOperationDataView>* output) {
  auto pointer = data_->operations.Get();
  *output = mojo::ArrayDataView<::viz::mojom::FilterOperationDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATIONS_MOJOM_SHARED_H_