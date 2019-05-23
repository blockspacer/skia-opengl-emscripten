// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_ID_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_ID_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/surface_id.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class SurfaceIdDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::SurfaceIdDataView> {
  using Data = ::viz::mojom::internal::SurfaceId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class SurfaceIdDataView {
 public:
  SurfaceIdDataView() {}

  SurfaceIdDataView(
      internal::SurfaceId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::SurfaceId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::SurfaceIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::SurfaceIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::SurfaceId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::frame_sink_id(input)) in_frame_sink_id = Traits::frame_sink_id(input);
    typename decltype((*output)->frame_sink_id)::BaseType::BufferWriter
        frame_sink_id_writer;
    mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
        in_frame_sink_id, buffer, &frame_sink_id_writer, context);
    (*output)->frame_sink_id.Set(
        frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_sink_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_sink_id in SurfaceId struct");
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
        "null local_surface_id in SurfaceId struct");
  }

  static bool Deserialize(::viz::mojom::internal::SurfaceId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::SurfaceIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void SurfaceIdDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void SurfaceIdDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_ID_MOJOM_SHARED_H_