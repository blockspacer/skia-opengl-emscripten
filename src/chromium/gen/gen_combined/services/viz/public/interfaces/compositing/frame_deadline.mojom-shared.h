// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class FrameDeadlineDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::FrameDeadlineDataView> {
  using Data = ::viz::mojom::internal::FrameDeadline_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {
class FrameDeadlineDataView {
 public:
  FrameDeadlineDataView() {}

  FrameDeadlineDataView(
      internal::FrameDeadline_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameStartTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameStartTime(UserType* output) {
    auto* pointer = data_->frame_start_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  uint32_t deadline_in_frames() const {
    return data_->deadline_in_frames;
  }
  inline void GetFrameIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameInterval(UserType* output) {
    auto* pointer = data_->frame_interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  bool use_default_lower_bound_deadline() const {
    return data_->use_default_lower_bound_deadline;
  }
 private:
  internal::FrameDeadline_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::FrameDeadlineDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::FrameDeadlineDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::FrameDeadline_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::frame_start_time(input)) in_frame_start_time = Traits::frame_start_time(input);
    typename decltype((*output)->frame_start_time)::BaseType::BufferWriter
        frame_start_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_frame_start_time, buffer, &frame_start_time_writer, context);
    (*output)->frame_start_time.Set(
        frame_start_time_writer.is_null() ? nullptr : frame_start_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_start_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_start_time in FrameDeadline struct");
    (*output)->deadline_in_frames = Traits::deadline_in_frames(input);
    decltype(Traits::frame_interval(input)) in_frame_interval = Traits::frame_interval(input);
    typename decltype((*output)->frame_interval)::BaseType::BufferWriter
        frame_interval_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_frame_interval, buffer, &frame_interval_writer, context);
    (*output)->frame_interval.Set(
        frame_interval_writer.is_null() ? nullptr : frame_interval_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_interval.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_interval in FrameDeadline struct");
    (*output)->use_default_lower_bound_deadline = Traits::use_default_lower_bound_deadline(input);
  }

  static bool Deserialize(::viz::mojom::internal::FrameDeadline_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::FrameDeadlineDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void FrameDeadlineDataView::GetFrameStartTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->frame_start_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void FrameDeadlineDataView::GetFrameIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->frame_interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_FRAME_DEADLINE_MOJOM_SHARED_H_