// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/texture_releaser.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/color_space.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class CopyOutputResultDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::CopyOutputResultDataView> {
  using Data = ::viz::mojom::internal::CopyOutputResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {


enum class CopyOutputResultFormat : int32_t {
  
  RGBA_BITMAP,
  
  RGBA_TEXTURE,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, CopyOutputResultFormat value);
inline bool IsKnownEnumValue(CopyOutputResultFormat value) {
  return internal::CopyOutputResultFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class CopyOutputResultDataView {
 public:
  CopyOutputResultDataView() {}

  CopyOutputResultDataView(
      internal::CopyOutputResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::viz::mojom::CopyOutputResultFormat>(
        data_value, output);
  }

  CopyOutputResultFormat format() const {
    return static_cast<CopyOutputResultFormat>(data_->format);
  }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRect(UserType* output) {
    auto* pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetBitmapDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmap(UserType* output) {
    auto* pointer = data_->bitmap.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  inline void GetMailboxDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailbox(UserType* output) {
    auto* pointer = data_->mailbox.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxDataView>(
        pointer, output, context_);
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
  inline void GetColorSpaceDataView(
      ::gfx::mojom::ColorSpaceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadColorSpace(UserType* output) {
    auto* pointer = data_->color_space.Get();
    return mojo::internal::Deserialize<::gfx::mojom::ColorSpaceDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeReleaser() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::TextureReleaserPtrDataView>(
            &data_->releaser, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CopyOutputResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

template <>
struct hash<::viz::mojom::CopyOutputResultFormat>
    : public mojo::internal::EnumHashImpl<::viz::mojom::CopyOutputResultFormat> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::viz::mojom::CopyOutputResultFormat, ::viz::mojom::CopyOutputResultFormat> {
  static ::viz::mojom::CopyOutputResultFormat ToMojom(::viz::mojom::CopyOutputResultFormat input) { return input; }
  static bool FromMojom(::viz::mojom::CopyOutputResultFormat input, ::viz::mojom::CopyOutputResultFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CopyOutputResultFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::viz::mojom::CopyOutputResultFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::viz::mojom::CopyOutputResultFormat>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CopyOutputResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::CopyOutputResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::CopyOutputResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::viz::mojom::CopyOutputResultFormat>(
        Traits::format(input), &(*output)->format);
    decltype(Traits::rect(input)) in_rect = Traits::rect(input);
    typename decltype((*output)->rect)::BaseType::BufferWriter
        rect_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_rect, buffer, &rect_writer, context);
    (*output)->rect.Set(
        rect_writer.is_null() ? nullptr : rect_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->rect.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rect in CopyOutputResult struct");
    decltype(Traits::bitmap(input)) in_bitmap = Traits::bitmap(input);
    typename decltype((*output)->bitmap)::BaseType::BufferWriter
        bitmap_writer;
    mojo::internal::Serialize<::skia::mojom::BitmapDataView>(
        in_bitmap, buffer, &bitmap_writer, context);
    (*output)->bitmap.Set(
        bitmap_writer.is_null() ? nullptr : bitmap_writer.data());
    decltype(Traits::mailbox(input)) in_mailbox = Traits::mailbox(input);
    typename decltype((*output)->mailbox)::BaseType::BufferWriter
        mailbox_writer;
    mojo::internal::Serialize<::gpu::mojom::MailboxDataView>(
        in_mailbox, buffer, &mailbox_writer, context);
    (*output)->mailbox.Set(
        mailbox_writer.is_null() ? nullptr : mailbox_writer.data());
    decltype(Traits::sync_token(input)) in_sync_token = Traits::sync_token(input);
    typename decltype((*output)->sync_token)::BaseType::BufferWriter
        sync_token_writer;
    mojo::internal::Serialize<::gpu::mojom::SyncTokenDataView>(
        in_sync_token, buffer, &sync_token_writer, context);
    (*output)->sync_token.Set(
        sync_token_writer.is_null() ? nullptr : sync_token_writer.data());
    decltype(Traits::color_space(input)) in_color_space = Traits::color_space(input);
    typename decltype((*output)->color_space)::BaseType::BufferWriter
        color_space_writer;
    mojo::internal::Serialize<::gfx::mojom::ColorSpaceDataView>(
        in_color_space, buffer, &color_space_writer, context);
    (*output)->color_space.Set(
        color_space_writer.is_null() ? nullptr : color_space_writer.data());
    decltype(Traits::releaser(input)) in_releaser = Traits::releaser(input);
    mojo::internal::Serialize<::viz::mojom::TextureReleaserPtrDataView>(
        in_releaser, &(*output)->releaser, context);
  }

  static bool Deserialize(::viz::mojom::internal::CopyOutputResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::CopyOutputResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void CopyOutputResultDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void CopyOutputResultDataView::GetBitmapDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->bitmap.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}
inline void CopyOutputResultDataView::GetMailboxDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->mailbox.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}
inline void CopyOutputResultDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}
inline void CopyOutputResultDataView::GetColorSpaceDataView(
    ::gfx::mojom::ColorSpaceDataView* output) {
  auto pointer = data_->color_space.Get();
  *output = ::gfx::mojom::ColorSpaceDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_SHARED_H_