// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_SHARED_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_SHARED_H_

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
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
class BeginFrameArgsDataView;

class BeginFrameAckDataView;



}  // namespace mojom
}  // namespace viz

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::viz::mojom::BeginFrameArgsDataView> {
  using Data = ::viz::mojom::internal::BeginFrameArgs_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::viz::mojom::BeginFrameAckDataView> {
  using Data = ::viz::mojom::internal::BeginFrameAck_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace viz {
namespace mojom {


enum class BeginFrameArgsType : int32_t {
  
  INVALID,
  
  NORMAL,
  
  MISSED,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, BeginFrameArgsType value);
inline bool IsKnownEnumValue(BeginFrameArgsType value) {
  return internal::BeginFrameArgsType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class BeginFrameArgsDataView {
 public:
  BeginFrameArgsDataView() {}

  BeginFrameArgsDataView(
      internal::BeginFrameArgs_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameTime(UserType* output) {
    auto* pointer = data_->frame_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetDeadlineDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeadline(UserType* output) {
    auto* pointer = data_->deadline.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetIntervalDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterval(UserType* output) {
    auto* pointer = data_->interval.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  uint64_t source_id() const {
    return data_->source_id;
  }
  uint64_t sequence_number() const {
    return data_->sequence_number;
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameArgsType>(
        data_value, output);
  }

  BeginFrameArgsType type() const {
    return static_cast<BeginFrameArgsType>(data_->type);
  }
  bool on_critical_path() const {
    return data_->on_critical_path;
  }
  bool animate_only() const {
    return data_->animate_only;
  }
 private:
  internal::BeginFrameArgs_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BeginFrameAckDataView {
 public:
  BeginFrameAckDataView() {}

  BeginFrameAckDataView(
      internal::BeginFrameAck_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t source_id() const {
    return data_->source_id;
  }
  uint64_t sequence_number() const {
    return data_->sequence_number;
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
  bool has_damage() const {
    return data_->has_damage;
  }
 private:
  internal::BeginFrameAck_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace viz

namespace std {

template <>
struct hash<::viz::mojom::BeginFrameArgsType>
    : public mojo::internal::EnumHashImpl<::viz::mojom::BeginFrameArgsType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::viz::mojom::BeginFrameArgsType, ::viz::mojom::BeginFrameArgsType> {
  static ::viz::mojom::BeginFrameArgsType ToMojom(::viz::mojom::BeginFrameArgsType input) { return input; }
  static bool FromMojom(::viz::mojom::BeginFrameArgsType input, ::viz::mojom::BeginFrameArgsType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::BeginFrameArgsType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::viz::mojom::BeginFrameArgsType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::viz::mojom::BeginFrameArgsType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::BeginFrameArgsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::BeginFrameArgsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::BeginFrameArgs_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::frame_time(input)) in_frame_time = Traits::frame_time(input);
    typename decltype((*output)->frame_time)::BaseType::BufferWriter
        frame_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_frame_time, buffer, &frame_time_writer, context);
    (*output)->frame_time.Set(
        frame_time_writer.is_null() ? nullptr : frame_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->frame_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_time in BeginFrameArgs struct");
    decltype(Traits::deadline(input)) in_deadline = Traits::deadline(input);
    typename decltype((*output)->deadline)::BaseType::BufferWriter
        deadline_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_deadline, buffer, &deadline_writer, context);
    (*output)->deadline.Set(
        deadline_writer.is_null() ? nullptr : deadline_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->deadline.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null deadline in BeginFrameArgs struct");
    decltype(Traits::interval(input)) in_interval = Traits::interval(input);
    typename decltype((*output)->interval)::BaseType::BufferWriter
        interval_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
        in_interval, buffer, &interval_writer, context);
    (*output)->interval.Set(
        interval_writer.is_null() ? nullptr : interval_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->interval.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interval in BeginFrameArgs struct");
    (*output)->source_id = Traits::source_id(input);
    (*output)->sequence_number = Traits::sequence_number(input);
    (*output)->trace_id = Traits::trace_id(input);
    mojo::internal::Serialize<::viz::mojom::BeginFrameArgsType>(
        Traits::type(input), &(*output)->type);
    (*output)->on_critical_path = Traits::on_critical_path(input);
    (*output)->animate_only = Traits::animate_only(input);
  }

  static bool Deserialize(::viz::mojom::internal::BeginFrameArgs_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::BeginFrameArgsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::viz::mojom::BeginFrameAckDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::viz::mojom::BeginFrameAckDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::viz::mojom::internal::BeginFrameAck_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->source_id = Traits::source_id(input);
    (*output)->sequence_number = Traits::sequence_number(input);
    (*output)->trace_id = Traits::trace_id(input);
    (*output)->has_damage = Traits::has_damage(input);
  }

  static bool Deserialize(::viz::mojom::internal::BeginFrameAck_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::viz::mojom::BeginFrameAckDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace viz {
namespace mojom {

inline void BeginFrameArgsDataView::GetFrameTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->frame_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void BeginFrameArgsDataView::GetDeadlineDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->deadline.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void BeginFrameArgsDataView::GetIntervalDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->interval.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_SHARED_H_