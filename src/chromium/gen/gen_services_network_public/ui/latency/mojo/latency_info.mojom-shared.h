// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_H_
#define UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_H_

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
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {
class LatencyInfoDataView;



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ui::mojom::LatencyInfoDataView> {
  using Data = ::ui::mojom::internal::LatencyInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {


enum class LatencyComponentType : int32_t {
  
  INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT,
  
  LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT,
  
  LATENCY_BEGIN_FRAME_RENDERER_MAIN_COMPONENT,
  
  LATENCY_BEGIN_FRAME_RENDERER_INVALIDATE_COMPONENT,
  
  LATENCY_BEGIN_FRAME_RENDERER_COMPOSITOR_COMPONENT,
  
  LATENCY_BEGIN_FRAME_UI_MAIN_COMPONENT,
  
  LATENCY_BEGIN_FRAME_UI_COMPOSITOR_COMPONENT,
  
  LATENCY_BEGIN_FRAME_DISPLAY_COMPOSITOR_COMPONENT,
  
  INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT,
  
  INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT,
  
  INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT,
  
  INPUT_EVENT_LATENCY_UI_COMPONENT,
  
  INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT,
  
  INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT,
  
  INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT,
  
  INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT,
  
  INPUT_EVENT_LATENCY_SCROLL_UPDATE_LAST_EVENT_COMPONENT,
  
  INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT,
  
  INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT,
  
  DISPLAY_COMPOSITOR_RECEIVED_FRAME_COMPONENT,
  
  INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT,
  
  INPUT_EVENT_LATENCY_FRAME_SWAP_COMPONENT,
  kMinValue = 0,
  kMaxValue = 21,
};

 std::ostream& operator<<(std::ostream& os, LatencyComponentType value);
inline bool IsKnownEnumValue(LatencyComponentType value) {
  return internal::LatencyComponentType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SourceEventType : int32_t {
  
  UNKNOWN,
  
  WHEEL,
  
  MOUSE,
  
  TOUCH,
  
  INERTIAL,
  
  KEY_PRESS,
  
  TOUCHPAD,
  
  FRAME,
  
  SCROLLBAR,
  
  OTHER,
  kMinValue = 0,
  kMaxValue = 9,
};

 std::ostream& operator<<(std::ostream& os, SourceEventType value);
inline bool IsKnownEnumValue(SourceEventType value) {
  return internal::SourceEventType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class LatencyInfoDataView {
 public:
  LatencyInfoDataView() {}

  LatencyInfoDataView(
      internal::LatencyInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTraceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTraceName(UserType* output) {
    auto* pointer = data_->trace_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetLatencyComponentsDataView(
      mojo::MapDataView<LatencyComponentType, ::mojo_base::mojom::TimeTicksDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLatencyComponents(UserType* output) {
    auto* pointer = data_->latency_components.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::ui::mojom::LatencyComponentType, ::mojo_base::mojom::TimeTicksDataView>>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
  int64_t ukm_source_id() const {
    return data_->ukm_source_id;
  }
  bool coalesced() const {
    return data_->coalesced;
  }
  bool began() const {
    return data_->began;
  }
  bool terminated() const {
    return data_->terminated;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceEventType(UserType* output) const {
    auto data_value = data_->source_event_type;
    return mojo::internal::Deserialize<::ui::mojom::SourceEventType>(
        data_value, output);
  }

  SourceEventType source_event_type() const {
    return static_cast<SourceEventType>(data_->source_event_type);
  }
  float scroll_update_delta() const {
    return data_->scroll_update_delta;
  }
  float predicted_scroll_update_delta() const {
    return data_->predicted_scroll_update_delta;
  }
 private:
  internal::LatencyInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::LatencyComponentType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::LatencyComponentType> {};

template <>
struct hash<::ui::mojom::SourceEventType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::SourceEventType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::LatencyComponentType, ::ui::mojom::LatencyComponentType> {
  static ::ui::mojom::LatencyComponentType ToMojom(::ui::mojom::LatencyComponentType input) { return input; }
  static bool FromMojom(::ui::mojom::LatencyComponentType input, ::ui::mojom::LatencyComponentType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::LatencyComponentType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::LatencyComponentType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::SourceEventType, ::ui::mojom::SourceEventType> {
  static ::ui::mojom::SourceEventType ToMojom(::ui::mojom::SourceEventType input) { return input; }
  static bool FromMojom(::ui::mojom::SourceEventType input, ::ui::mojom::SourceEventType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::SourceEventType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::SourceEventType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::SourceEventType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::trace_name(input)) in_trace_name = Traits::trace_name(input);
    typename decltype((*output)->trace_name)::BaseType::BufferWriter
        trace_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_trace_name, buffer, &trace_name_writer, context);
    (*output)->trace_name.Set(
        trace_name_writer.is_null() ? nullptr : trace_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->trace_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null trace_name in LatencyInfo struct");
    decltype(Traits::latency_components(input)) in_latency_components = Traits::latency_components(input);
    typename decltype((*output)->latency_components)::BaseType::BufferWriter
        latency_components_writer;
    const mojo::internal::ContainerValidateParams latency_components_validate_params(
        new mojo::internal::ContainerValidateParams(0, ::ui::mojom::internal::LatencyComponentType_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<::ui::mojom::LatencyComponentType, ::mojo_base::mojom::TimeTicksDataView>>(
        in_latency_components, buffer, &latency_components_writer, &latency_components_validate_params,
        context);
    (*output)->latency_components.Set(
        latency_components_writer.is_null() ? nullptr : latency_components_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->latency_components.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null latency_components in LatencyInfo struct");
    (*output)->trace_id = Traits::trace_id(input);
    (*output)->ukm_source_id = Traits::ukm_source_id(input);
    (*output)->coalesced = Traits::coalesced(input);
    (*output)->began = Traits::began(input);
    (*output)->terminated = Traits::terminated(input);
    mojo::internal::Serialize<::ui::mojom::SourceEventType>(
        Traits::source_event_type(input), &(*output)->source_event_type);
    (*output)->scroll_update_delta = Traits::scroll_update_delta(input);
    (*output)->predicted_scroll_update_delta = Traits::predicted_scroll_update_delta(input);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {

inline void LatencyInfoDataView::GetTraceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trace_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LatencyInfoDataView::GetLatencyComponentsDataView(
    mojo::MapDataView<LatencyComponentType, ::mojo_base::mojom::TimeTicksDataView>* output) {
  auto pointer = data_->latency_components.Get();
  *output = mojo::MapDataView<LatencyComponentType, ::mojo_base::mojom::TimeTicksDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

#endif  // UI_LATENCY_MOJO_LATENCY_INFO_MOJOM_SHARED_H_