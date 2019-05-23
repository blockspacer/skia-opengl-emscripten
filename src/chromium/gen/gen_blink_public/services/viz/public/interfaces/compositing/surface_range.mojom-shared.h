// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/surface_range.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class SurfaceRangeDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::SurfaceRangeDataView> {
  using Data = ::viz::mojom::internal::SurfaceRange_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class SurfaceRangeDataView {
 public:
  SurfaceRangeDataView() {}

  SurfaceRangeDataView(
      internal::SurfaceRange_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStartDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStart(UserType* output) {
    auto* pointer = data_->start.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetEndDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnd(UserType* output) {
    auto* pointer = data_->end.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::SurfaceRange_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::SurfaceRangeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::SurfaceRangeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::SurfaceRange_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::start(input)) in_start = Traits::start(input);
    typename decltype((*output)->start)::BaseType::BufferWriter
        start_writer;
    mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
        in_start, buffer, &start_writer, context);
    (*output)->start.Set(
        start_writer.is_null() ? nullptr : start_writer.data());
    decltype(Traits::end(input)) in_end = Traits::end(input);
    typename decltype((*output)->end)::BaseType::BufferWriter
        end_writer;
    mojo::internal::Serialize<::viz::mojom::SurfaceIdDataView>(
        in_end, buffer, &end_writer, context);
    (*output)->end.Set(
        end_writer.is_null() ? nullptr : end_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->end.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null end in SurfaceRange struct");
  }

  static bool Deserialize(::viz::mojom::internal::SurfaceRange_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::SurfaceRangeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void SurfaceRangeDataView::GetStartDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->start.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void SurfaceRangeDataView::GetEndDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->end.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_RANGE_MOJOM_SHARED_H_