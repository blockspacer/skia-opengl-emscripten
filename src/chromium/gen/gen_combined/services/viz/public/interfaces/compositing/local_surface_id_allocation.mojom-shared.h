// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/local_surface_id_allocation.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class LocalSurfaceIdAllocationDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::LocalSurfaceIdAllocationDataView> {
  using Data = ::viz::mojom::internal::LocalSurfaceIdAllocation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class LocalSurfaceIdAllocationDataView {
 public:
  LocalSurfaceIdAllocationDataView() {}

  LocalSurfaceIdAllocationDataView(
      internal::LocalSurfaceIdAllocation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetAllocationTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllocationTime(UserType* output) {
    auto* pointer = data_->allocation_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::LocalSurfaceIdAllocation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::LocalSurfaceIdAllocationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::LocalSurfaceIdAllocationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::LocalSurfaceIdAllocation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::local_surface_id(input)) in_local_surface_id = Traits::local_surface_id(input);
    typename decltype((*output)->local_surface_id)::BaseType::BufferWriter
        local_surface_id_writer;
    mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdDataView>(
        in_local_surface_id, buffer, &local_surface_id_writer, context);
    (*output)->local_surface_id.Set(
        local_surface_id_writer.is_null() ? nullptr : local_surface_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->local_surface_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null local_surface_id in LocalSurfaceIdAllocation struct");
    decltype(Traits::allocation_time(input)) in_allocation_time = Traits::allocation_time(input);
    typename decltype((*output)->allocation_time)::BaseType::BufferWriter
        allocation_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_allocation_time, buffer, &allocation_time_writer, context);
    (*output)->allocation_time.Set(
        allocation_time_writer.is_null() ? nullptr : allocation_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allocation_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allocation_time in LocalSurfaceIdAllocation struct");
  }

  static bool Deserialize(::viz::mojom::internal::LocalSurfaceIdAllocation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::LocalSurfaceIdAllocationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void LocalSurfaceIdAllocationDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}
inline void LocalSurfaceIdAllocationDataView::GetAllocationTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->allocation_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_LOCAL_SURFACE_ID_ALLOCATION_MOJOM_SHARED_H_