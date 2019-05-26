// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/viz/public/interfaces/compositing/filter_operation.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/filter_operation.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/paint_filter.mojom.h"
#include "skia/public/interfaces/blur_image_filter_tile_mode.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "cc/paint/filter_operation.h"




namespace viz {
namespace mojom {








class  FilterOperation {
 public:
  using DataView = FilterOperationDataView;
  using Data_ = internal::FilterOperation_Data;

  template <typename... Args>
  static FilterOperationPtr New(Args&&... args) {
    return FilterOperationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FilterOperationPtr From(const U& u) {
    return mojo::TypeConverter<FilterOperationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FilterOperation>::Convert(*this);
  }


  FilterOperation();

  FilterOperation(
      FilterType type,
      float amount,
      float outer_threshold,
      const gfx::Point& drop_shadow_offset,
      uint32_t drop_shadow_color,
      const sk_sp<cc::PaintFilter>& image_filter,
      const base::Optional<std::vector<float>>& matrix,
      int32_t zoom_inset,
      SkBlurImageFilter::TileMode blur_tile_mode,
      const base::Optional<std::vector<gfx::Rect>>& shape);

  ~FilterOperation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilterOperationPtr>
  FilterOperationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FilterOperation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FilterOperation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FilterOperation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FilterOperation_UnserializedMessageContext<
            UserType, FilterOperation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FilterOperation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FilterOperation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FilterOperation_UnserializedMessageContext<
            UserType, FilterOperation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FilterOperation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  FilterType type;
  
  float amount;
  
  float outer_threshold;
  
  gfx::Point drop_shadow_offset;
  
  uint32_t drop_shadow_color;
  
  sk_sp<cc::PaintFilter> image_filter;
  
  base::Optional<std::vector<float>> matrix;
  
  int32_t zoom_inset;
  
  SkBlurImageFilter::TileMode blur_tile_mode;
  
  base::Optional<std::vector<gfx::Rect>> shape;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FilterOperationPtr FilterOperation::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(amount),
      mojo::Clone(outer_threshold),
      mojo::Clone(drop_shadow_offset),
      mojo::Clone(drop_shadow_color),
      mojo::Clone(image_filter),
      mojo::Clone(matrix),
      mojo::Clone(zoom_inset),
      mojo::Clone(blur_tile_mode),
      mojo::Clone(shape)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FilterOperation>::value>::type*>
bool FilterOperation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->amount, other_struct.amount))
    return false;
  if (!mojo::Equals(this->outer_threshold, other_struct.outer_threshold))
    return false;
  if (!mojo::Equals(this->drop_shadow_offset, other_struct.drop_shadow_offset))
    return false;
  if (!mojo::Equals(this->drop_shadow_color, other_struct.drop_shadow_color))
    return false;
  if (!mojo::Equals(this->image_filter, other_struct.image_filter))
    return false;
  if (!mojo::Equals(this->matrix, other_struct.matrix))
    return false;
  if (!mojo::Equals(this->zoom_inset, other_struct.zoom_inset))
    return false;
  if (!mojo::Equals(this->blur_tile_mode, other_struct.blur_tile_mode))
    return false;
  if (!mojo::Equals(this->shape, other_struct.shape))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::FilterOperation::DataView,
                                         ::viz::mojom::FilterOperationPtr> {
  static bool IsNull(const ::viz::mojom::FilterOperationPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::FilterOperationPtr* output) { output->reset(); }

  static decltype(::viz::mojom::FilterOperation::type) type(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->type;
  }

  static decltype(::viz::mojom::FilterOperation::amount) amount(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->amount;
  }

  static decltype(::viz::mojom::FilterOperation::outer_threshold) outer_threshold(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->outer_threshold;
  }

  static const decltype(::viz::mojom::FilterOperation::drop_shadow_offset)& drop_shadow_offset(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->drop_shadow_offset;
  }

  static decltype(::viz::mojom::FilterOperation::drop_shadow_color) drop_shadow_color(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->drop_shadow_color;
  }

  static const decltype(::viz::mojom::FilterOperation::image_filter)& image_filter(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->image_filter;
  }

  static const decltype(::viz::mojom::FilterOperation::matrix)& matrix(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->matrix;
  }

  static decltype(::viz::mojom::FilterOperation::zoom_inset) zoom_inset(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->zoom_inset;
  }

  static decltype(::viz::mojom::FilterOperation::blur_tile_mode) blur_tile_mode(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->blur_tile_mode;
  }

  static const decltype(::viz::mojom::FilterOperation::shape)& shape(
      const ::viz::mojom::FilterOperationPtr& input) {
    return input->shape;
  }

  static bool Read(::viz::mojom::FilterOperation::DataView input, ::viz::mojom::FilterOperationPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FILTER_OPERATION_MOJOM_H_