// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class AnchorElementMetricsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::AnchorElementMetricsDataView> {
  using Data = ::blink::mojom::internal::AnchorElementMetrics_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class AnchorElementMetricsHostInterfaceBase {};

using AnchorElementMetricsHostPtrDataView =
    mojo::InterfacePtrDataView<AnchorElementMetricsHostInterfaceBase>;
using AnchorElementMetricsHostRequestDataView =
    mojo::InterfaceRequestDataView<AnchorElementMetricsHostInterfaceBase>;
using AnchorElementMetricsHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AnchorElementMetricsHostInterfaceBase>;
using AnchorElementMetricsHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AnchorElementMetricsHostInterfaceBase>;
class AnchorElementMetricsDataView {
 public:
  AnchorElementMetricsDataView() {}

  AnchorElementMetricsDataView(
      internal::AnchorElementMetrics_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float ratio_area() const {
    return data_->ratio_area;
  }
  float ratio_visible_area() const {
    return data_->ratio_visible_area;
  }
  float ratio_distance_top_to_visible_top() const {
    return data_->ratio_distance_top_to_visible_top;
  }
  float ratio_distance_center_to_visible_top() const {
    return data_->ratio_distance_center_to_visible_top;
  }
  float ratio_distance_root_top() const {
    return data_->ratio_distance_root_top;
  }
  float ratio_distance_root_bottom() const {
    return data_->ratio_distance_root_bottom;
  }
  bool is_in_iframe() const {
    return data_->is_in_iframe;
  }
  bool contains_image() const {
    return data_->contains_image;
  }
  bool is_same_host() const {
    return data_->is_same_host;
  }
  bool is_url_incremented_by_one() const {
    return data_->is_url_incremented_by_one;
  }
  inline void GetSourceUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceUrl(UserType* output) {
    auto* pointer = data_->source_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTargetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargetUrl(UserType* output) {
    auto* pointer = data_->target_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::AnchorElementMetrics_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::AnchorElementMetricsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::AnchorElementMetricsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::AnchorElementMetrics_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->ratio_area = Traits::ratio_area(input);
    (*output)->ratio_visible_area = Traits::ratio_visible_area(input);
    (*output)->ratio_distance_top_to_visible_top = Traits::ratio_distance_top_to_visible_top(input);
    (*output)->ratio_distance_center_to_visible_top = Traits::ratio_distance_center_to_visible_top(input);
    (*output)->ratio_distance_root_top = Traits::ratio_distance_root_top(input);
    (*output)->ratio_distance_root_bottom = Traits::ratio_distance_root_bottom(input);
    (*output)->is_in_iframe = Traits::is_in_iframe(input);
    (*output)->contains_image = Traits::contains_image(input);
    (*output)->is_same_host = Traits::is_same_host(input);
    (*output)->is_url_incremented_by_one = Traits::is_url_incremented_by_one(input);
    decltype(Traits::source_url(input)) in_source_url = Traits::source_url(input);
    typename decltype((*output)->source_url)::BaseType::BufferWriter
        source_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_source_url, buffer, &source_url_writer, context);
    (*output)->source_url.Set(
        source_url_writer.is_null() ? nullptr : source_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source_url in AnchorElementMetrics struct");
    decltype(Traits::target_url(input)) in_target_url = Traits::target_url(input);
    typename decltype((*output)->target_url)::BaseType::BufferWriter
        target_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_target_url, buffer, &target_url_writer, context);
    (*output)->target_url.Set(
        target_url_writer.is_null() ? nullptr : target_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->target_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null target_url in AnchorElementMetrics struct");
  }

  static bool Deserialize(::blink::mojom::internal::AnchorElementMetrics_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::AnchorElementMetricsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void AnchorElementMetricsDataView::GetSourceUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->source_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void AnchorElementMetricsDataView::GetTargetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->target_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_SHARED_H_