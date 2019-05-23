// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_SHARED_H_

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
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
class TimeDataView;

class TimeDeltaDataView;

class TimeTicksDataView;



}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo_base::mojom::TimeDataView> {
  using Data = ::mojo_base::mojom::internal::Time_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo_base::mojom::TimeDeltaDataView> {
  using Data = ::mojo_base::mojom::internal::TimeDelta_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo_base::mojom::TimeTicksDataView> {
  using Data = ::mojo_base::mojom::internal::TimeTicks_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {
class TimeDataView {
 public:
  TimeDataView() {}

  TimeDataView(
      internal::Time_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t internal_value() const {
    return data_->internal_value;
  }
 private:
  internal::Time_Data* data_ = nullptr;
};

class TimeDeltaDataView {
 public:
  TimeDeltaDataView() {}

  TimeDeltaDataView(
      internal::TimeDelta_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t microseconds() const {
    return data_->microseconds;
  }
 private:
  internal::TimeDelta_Data* data_ = nullptr;
};

class TimeTicksDataView {
 public:
  TimeTicksDataView() {}

  TimeTicksDataView(
      internal::TimeTicks_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t internal_value() const {
    return data_->internal_value;
  }
 private:
  internal::TimeTicks_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace mojo_base

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::TimeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::TimeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::Time_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->internal_value = Traits::internal_value(input);
  }

  static bool Deserialize(::mojo_base::mojom::internal::Time_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::TimeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::TimeDeltaDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::TimeDeltaDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::TimeDelta_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->microseconds = Traits::microseconds(input);
  }

  static bool Deserialize(::mojo_base::mojom::internal::TimeDelta_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::TimeDeltaDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::TimeTicksDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::TimeTicksDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::TimeTicks_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->internal_value = Traits::internal_value(input);
  }

  static bool Deserialize(::mojo_base::mojom::internal::TimeTicks_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::TimeTicksDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {








}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_SHARED_H_