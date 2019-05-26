// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_SHARED_H_
#define UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/ca_layer_params.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class CALayerParamsDataView;

class CALayerContentDataView;


}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::CALayerParamsDataView> {
  using Data = ::gfx::mojom::internal::CALayerParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::CALayerContentDataView> {
  using Data = ::gfx::mojom::internal::CALayerContent_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {
class CALayerParamsDataView {
 public:
  CALayerParamsDataView() {}

  CALayerParamsDataView(
      internal::CALayerParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool is_empty() const {
    return data_->is_empty;
  }
  inline void GetContentDataView(
      CALayerContentDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContent(UserType* output) {
    auto* pointer = !data_->content.is_null() ? &data_->content : nullptr;
    return mojo::internal::Deserialize<::gfx::mojom::CALayerContentDataView>(
        pointer, output, context_);
  }
  inline void GetPixelSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPixelSize(UserType* output) {
    auto* pointer = data_->pixel_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  float scale_factor() const {
    return data_->scale_factor;
  }
 private:
  internal::CALayerParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CALayerContentDataView {
 public:
  using Tag = internal::CALayerContent_Data::CALayerContent_Tag;

  CALayerContentDataView() {}

  CALayerContentDataView(
      internal::CALayerContent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_ca_context_id() const { return data_->tag == Tag::CA_CONTEXT_ID; }
  uint32_t ca_context_id() const {
    DCHECK(is_ca_context_id());
    return data_->data.f_ca_context_id;
  }
  bool is_io_surface_mach_port() const { return data_->tag == Tag::IO_SURFACE_MACH_PORT; }
  mojo::ScopedHandle TakeIoSurfaceMachPort() {
    DCHECK(is_io_surface_mach_port());
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->data.f_io_surface_mach_port, &result, context_);
    DCHECK(ret);
    return result;
  }

 private:
  internal::CALayerContent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::CALayerParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::CALayerParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::CALayerParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->is_empty = Traits::is_empty(input);
    decltype(Traits::content(input)) in_content = Traits::content(input);
    typename decltype((*output)->content)::BufferWriter content_writer;
    content_writer.AllocateInline(buffer, &(*output)->content);
    mojo::internal::Serialize<::gfx::mojom::CALayerContentDataView>(
        in_content, buffer, &content_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->content.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null content in CALayerParams struct");
    decltype(Traits::pixel_size(input)) in_pixel_size = Traits::pixel_size(input);
    typename decltype((*output)->pixel_size)::BaseType::BufferWriter
        pixel_size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_pixel_size, buffer, &pixel_size_writer, context);
    (*output)->pixel_size.Set(
        pixel_size_writer.is_null() ? nullptr : pixel_size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->pixel_size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null pixel_size in CALayerParams struct");
    (*output)->scale_factor = Traits::scale_factor(input);
  }

  static bool Deserialize(::gfx::mojom::internal::CALayerParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::CALayerParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::CALayerContentDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::gfx::mojom::CALayerContentDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::CALayerContent_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::gfx::mojom::internal::CALayerContent_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::gfx::mojom::CALayerContentDataView::Tag::CA_CONTEXT_ID: {
        decltype(Traits::ca_context_id(input))
            in_ca_context_id = Traits::ca_context_id(input);
        result->data.f_ca_context_id = in_ca_context_id;
        break;
      }
      case ::gfx::mojom::CALayerContentDataView::Tag::IO_SURFACE_MACH_PORT: {
        decltype(Traits::io_surface_mach_port(input))
            in_io_surface_mach_port = Traits::io_surface_mach_port(input);
        mojo::internal::Serialize<mojo::ScopedHandle>(
            in_io_surface_mach_port, &result->data.f_io_surface_mach_port, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_io_surface_mach_port),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid io_surface_mach_port in CALayerContent union");
        break;
      }
    }
  }

  static bool Deserialize(::gfx::mojom::internal::CALayerContent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::CALayerContentDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {

inline void CALayerParamsDataView::GetContentDataView(
    CALayerContentDataView* output) {
  auto pointer = &data_->content;
  *output = CALayerContentDataView(pointer, context_);
}
inline void CALayerParamsDataView::GetPixelSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->pixel_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}




}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_SHARED_H_