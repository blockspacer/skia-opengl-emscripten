// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class CopyOutputRequestDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::CopyOutputRequestDataView> {
  using Data = ::viz::mojom::internal::CopyOutputRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
// Interface base classes. They are used for type safety check.
class CopyOutputResultSenderInterfaceBase {};

using CopyOutputResultSenderPtrDataView =
    mojo::InterfacePtrDataView<CopyOutputResultSenderInterfaceBase>;
using CopyOutputResultSenderRequestDataView =
    mojo::InterfaceRequestDataView<CopyOutputResultSenderInterfaceBase>;
using CopyOutputResultSenderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CopyOutputResultSenderInterfaceBase>;
using CopyOutputResultSenderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CopyOutputResultSenderInterfaceBase>;
class CopyOutputRequestDataView {
 public:
  CopyOutputRequestDataView() {}

  CopyOutputRequestDataView(
      internal::CopyOutputRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultFormat(UserType* output) const {
    auto data_value = data_->result_format;
    return mojo::internal::Deserialize<::viz::mojom::CopyOutputResultFormat>(
        data_value, output);
  }

  ::viz::mojom::CopyOutputResultFormat result_format() const {
    return static_cast<::viz::mojom::CopyOutputResultFormat>(data_->result_format);
  }
  inline void GetScaleFromDataView(
      ::gfx::mojom::Vector2dDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScaleFrom(UserType* output) {
    auto* pointer = data_->scale_from.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dDataView>(
        pointer, output, context_);
  }
  inline void GetScaleToDataView(
      ::gfx::mojom::Vector2dDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScaleTo(UserType* output) {
    auto* pointer = data_->scale_to.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dDataView>(
        pointer, output, context_);
  }
  inline void GetSourceDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSource(UserType* output) {
    auto* pointer = data_->source.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetAreaDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArea(UserType* output) {
    auto* pointer = data_->area.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  inline void GetResultSelectionDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResultSelection(UserType* output) {
    auto* pointer = data_->result_selection.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResultSender() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CopyOutputResultSenderPtrDataView>(
            &data_->result_sender, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CopyOutputRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::CopyOutputRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::CopyOutputRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::CopyOutputRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::viz::mojom::CopyOutputResultFormat>(
        Traits::result_format(input), &(*output)->result_format);
    decltype(Traits::scale_from(input)) in_scale_from = Traits::scale_from(input);
    typename decltype((*output)->scale_from)::BaseType::BufferWriter
        scale_from_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dDataView>(
        in_scale_from, buffer, &scale_from_writer, context);
    (*output)->scale_from.Set(
        scale_from_writer.is_null() ? nullptr : scale_from_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scale_from.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scale_from in CopyOutputRequest struct");
    decltype(Traits::scale_to(input)) in_scale_to = Traits::scale_to(input);
    typename decltype((*output)->scale_to)::BaseType::BufferWriter
        scale_to_writer;
    mojo::internal::Serialize<::gfx::mojom::Vector2dDataView>(
        in_scale_to, buffer, &scale_to_writer, context);
    (*output)->scale_to.Set(
        scale_to_writer.is_null() ? nullptr : scale_to_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scale_to.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scale_to in CopyOutputRequest struct");
    decltype(Traits::source(input)) in_source = Traits::source(input);
    typename decltype((*output)->source)::BaseType::BufferWriter
        source_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_source, buffer, &source_writer, context);
    (*output)->source.Set(
        source_writer.is_null() ? nullptr : source_writer.data());
    decltype(Traits::area(input)) in_area = Traits::area(input);
    typename decltype((*output)->area)::BaseType::BufferWriter
        area_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_area, buffer, &area_writer, context);
    (*output)->area.Set(
        area_writer.is_null() ? nullptr : area_writer.data());
    decltype(Traits::result_selection(input)) in_result_selection = Traits::result_selection(input);
    typename decltype((*output)->result_selection)::BaseType::BufferWriter
        result_selection_writer;
    mojo::internal::Serialize<::gfx::mojom::RectDataView>(
        in_result_selection, buffer, &result_selection_writer, context);
    (*output)->result_selection.Set(
        result_selection_writer.is_null() ? nullptr : result_selection_writer.data());
    decltype(Traits::result_sender(input)) in_result_sender = Traits::result_sender(input);
    mojo::internal::Serialize<::viz::mojom::CopyOutputResultSenderPtrDataView>(
        in_result_sender, &(*output)->result_sender, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->result_sender),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid result_sender in CopyOutputRequest struct");
  }

  static bool Deserialize(::viz::mojom::internal::CopyOutputRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::CopyOutputRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void CopyOutputRequestDataView::GetScaleFromDataView(
    ::gfx::mojom::Vector2dDataView* output) {
  auto pointer = data_->scale_from.Get();
  *output = ::gfx::mojom::Vector2dDataView(pointer, context_);
}
inline void CopyOutputRequestDataView::GetScaleToDataView(
    ::gfx::mojom::Vector2dDataView* output) {
  auto pointer = data_->scale_to.Get();
  *output = ::gfx::mojom::Vector2dDataView(pointer, context_);
}
inline void CopyOutputRequestDataView::GetSourceDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->source.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void CopyOutputRequestDataView::GetAreaDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->area.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void CopyOutputRequestDataView::GetResultSelectionDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->result_selection.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_SHARED_H_