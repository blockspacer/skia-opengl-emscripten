// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class PreviewsResourceLoadingHintsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::PreviewsResourceLoadingHintsDataView> {
  using Data = ::blink::mojom::internal::PreviewsResourceLoadingHints_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PreviewsResourceLoadingHintsReceiverInterfaceBase {};

using PreviewsResourceLoadingHintsReceiverPtrDataView =
    mojo::InterfacePtrDataView<PreviewsResourceLoadingHintsReceiverInterfaceBase>;
using PreviewsResourceLoadingHintsReceiverRequestDataView =
    mojo::InterfaceRequestDataView<PreviewsResourceLoadingHintsReceiverInterfaceBase>;
using PreviewsResourceLoadingHintsReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PreviewsResourceLoadingHintsReceiverInterfaceBase>;
using PreviewsResourceLoadingHintsReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PreviewsResourceLoadingHintsReceiverInterfaceBase>;
class PreviewsResourceLoadingHintsDataView {
 public:
  PreviewsResourceLoadingHintsDataView() {}

  PreviewsResourceLoadingHintsDataView(
      internal::PreviewsResourceLoadingHints_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t ukm_source_id() const {
    return data_->ukm_source_id;
  }
  inline void GetSubresourcesToBlockDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubresourcesToBlock(UserType* output) {
    auto* pointer = data_->subresources_to_block.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PreviewsResourceLoadingHints_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PreviewsResourceLoadingHintsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PreviewsResourceLoadingHintsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PreviewsResourceLoadingHints_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->ukm_source_id = Traits::ukm_source_id(input);
    decltype(Traits::subresources_to_block(input)) in_subresources_to_block = Traits::subresources_to_block(input);
    typename decltype((*output)->subresources_to_block)::BaseType::BufferWriter
        subresources_to_block_writer;
    const mojo::internal::ContainerValidateParams subresources_to_block_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_subresources_to_block, buffer, &subresources_to_block_writer, &subresources_to_block_validate_params,
        context);
    (*output)->subresources_to_block.Set(
        subresources_to_block_writer.is_null() ? nullptr : subresources_to_block_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->subresources_to_block.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null subresources_to_block in PreviewsResourceLoadingHints struct");
  }

  static bool Deserialize(::blink::mojom::internal::PreviewsResourceLoadingHints_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PreviewsResourceLoadingHintsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void PreviewsResourceLoadingHintsDataView::GetSubresourcesToBlockDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->subresources_to_block.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_SHARED_H_