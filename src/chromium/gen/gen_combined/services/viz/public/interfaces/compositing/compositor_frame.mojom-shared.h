// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/compositor_frame.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/render_pass.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class CompositorFrameDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::CompositorFrameDataView> {
  using Data = ::viz::mojom::internal::CompositorFrame_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class CompositorFrameDataView {
 public:
  CompositorFrameDataView() {}

  CompositorFrameDataView(
      internal::CompositorFrame_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::viz::mojom::CompositorFrameMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameMetadataDataView>(
        pointer, output, context_);
  }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>>(
        pointer, output, context_);
  }
  inline void GetPassesDataView(
      mojo::ArrayDataView<::viz::mojom::RenderPassDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPasses(UserType* output) {
    auto* pointer = data_->passes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::RenderPassDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrame_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CompositorFrameDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::CompositorFrameDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::CompositorFrame_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::metadata(input)) in_metadata = Traits::metadata(input);
    typename decltype((*output)->metadata)::BaseType::BufferWriter
        metadata_writer;
    mojo::internal::Serialize<::viz::mojom::CompositorFrameMetadataDataView>(
        in_metadata, buffer, &metadata_writer, context);
    (*output)->metadata.Set(
        metadata_writer.is_null() ? nullptr : metadata_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->metadata.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null metadata in CompositorFrame struct");
    decltype(Traits::resources(input)) in_resources = Traits::resources(input);
    typename decltype((*output)->resources)::BaseType::BufferWriter
        resources_writer;
    const mojo::internal::ContainerValidateParams resources_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>>(
        in_resources, buffer, &resources_writer, &resources_validate_params,
        context);
    (*output)->resources.Set(
        resources_writer.is_null() ? nullptr : resources_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->resources.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null resources in CompositorFrame struct");
    decltype(Traits::passes(input)) in_passes = Traits::passes(input);
    typename decltype((*output)->passes)::BaseType::BufferWriter
        passes_writer;
    const mojo::internal::ContainerValidateParams passes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::viz::mojom::RenderPassDataView>>(
        in_passes, buffer, &passes_writer, &passes_validate_params,
        context);
    (*output)->passes.Set(
        passes_writer.is_null() ? nullptr : passes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->passes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null passes in CompositorFrame struct");
  }

  static bool Deserialize(::viz::mojom::internal::CompositorFrame_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::CompositorFrameDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void CompositorFrameDataView::GetMetadataDataView(
    ::viz::mojom::CompositorFrameMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::viz::mojom::CompositorFrameMetadataDataView(pointer, context_);
}
inline void CompositorFrameDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::TransferableResourceDataView>(pointer, context_);
}
inline void CompositorFrameDataView::GetPassesDataView(
    mojo::ArrayDataView<::viz::mojom::RenderPassDataView>* output) {
  auto pointer = data_->passes.Get();
  *output = mojo::ArrayDataView<::viz::mojom::RenderPassDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_MOJOM_SHARED_H_