// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class TransferableResourceDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::TransferableResourceDataView> {
  using Data = ::viz::mojom::internal::TransferableResource_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {


enum class ResourceFormat : int32_t {
  
  RGBA_8888,
  
  RGBA_4444,
  
  BGRA_8888,
  
  ALPHA_8,
  
  LUMINANCE_8,
  
  RGB_565,
  
  BGR_565,
  
  ETC1,
  
  RED_8,
  
  RG_88,
  
  LUMINANCE_F16,
  
  RGBA_F16,
  
  R16_EXT,
  
  RGBX_8888,
  
  BGRX_8888,
  
  RGBX_1010102,
  
  BGRX_1010102,
  
  YVU_420,
  
  YUV_420_BIPLANAR,
  
  UYVY_422,
  kMinValue = 0,
  kMaxValue = 19,
};

 std::ostream& operator<<(std::ostream& os, ResourceFormat value);
inline bool IsKnownEnumValue(ResourceFormat value) {
  return internal::ResourceFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class TransferableResourceDataView {
 public:
  TransferableResourceDataView() {}

  TransferableResourceDataView(
      internal::TransferableResource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::viz::mojom::ResourceFormat>(
        data_value, output);
  }

  ResourceFormat format() const {
    return static_cast<ResourceFormat>(data_->format);
  }
  uint32_t filter() const {
    return data_->filter;
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  inline void GetMailboxHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHolder(UserType* output) {
    auto* pointer = data_->mailbox_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderDataView>(
        pointer, output, context_);
  }
  bool read_lock_fences_enabled() const {
    return data_->read_lock_fences_enabled;
  }
  bool is_software() const {
    return data_->is_software;
  }
  bool is_overlay_candidate() const {
    return data_->is_overlay_candidate;
  }
  bool is_backed_by_surface_texture() const {
    return data_->is_backed_by_surface_texture;
  }
  bool wants_promotion_hint() const {
    return data_->wants_promotion_hint;
  }
  inline void GetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) {
    auto* pointer = data_->color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
 private:
  internal::TransferableResource_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

template <>
struct hash<::viz::mojom::ResourceFormat>
    : public mojo::internal::EnumHashImpl<::viz::mojom::ResourceFormat> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::viz::mojom::ResourceFormat, ::viz::mojom::ResourceFormat> {
  static ::viz::mojom::ResourceFormat ToMojom(::viz::mojom::ResourceFormat input) { return input; }
  static bool FromMojom(::viz::mojom::ResourceFormat input, ::viz::mojom::ResourceFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::ResourceFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::viz::mojom::ResourceFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::viz::mojom::ResourceFormat>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::TransferableResourceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::TransferableResourceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::TransferableResource_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
    mojo::internal::Serialize<::viz::mojom::ResourceFormat>(
        Traits::format(input), &(*output)->format);
    (*output)->filter = Traits::filter(input);
    decltype(Traits::size(input)) in_size = Traits::size(input);
    typename decltype((*output)->size)::BaseType::BufferWriter
        size_writer;
    mojo::internal::Serialize<::gfx::mojom::SizeDataView>(
        in_size, buffer, &size_writer, context);
    (*output)->size.Set(
        size_writer.is_null() ? nullptr : size_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->size.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null size in TransferableResource struct");
    decltype(Traits::mailbox_holder(input)) in_mailbox_holder = Traits::mailbox_holder(input);
    typename decltype((*output)->mailbox_holder)::BaseType::BufferWriter
        mailbox_holder_writer;
    mojo::internal::Serialize<::gpu::mojom::MailboxHolderDataView>(
        in_mailbox_holder, buffer, &mailbox_holder_writer, context);
    (*output)->mailbox_holder.Set(
        mailbox_holder_writer.is_null() ? nullptr : mailbox_holder_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mailbox_holder.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mailbox_holder in TransferableResource struct");
    (*output)->read_lock_fences_enabled = Traits::read_lock_fences_enabled(input);
    (*output)->is_software = Traits::is_software(input);
    (*output)->is_overlay_candidate = Traits::is_overlay_candidate(input);
    (*output)->is_backed_by_surface_texture = Traits::is_backed_by_surface_texture(input);
    (*output)->wants_promotion_hint = Traits::wants_promotion_hint(input);
    decltype(Traits::color_space(input)) in_color_space = Traits::color_space(input);
    typename decltype((*output)->color_space)::BaseType::BufferWriter
        color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_color_space, buffer, &color_space_writer, context);
    (*output)->color_space.Set(
        color_space_writer.is_null() ? nullptr : color_space_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->color_space.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null color_space in TransferableResource struct");
  }

  static bool Deserialize(::viz::mojom::internal::TransferableResource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::TransferableResourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void TransferableResourceDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void TransferableResourceDataView::GetMailboxHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}
inline void TransferableResourceDataView::GetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_SHARED_H_