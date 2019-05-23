// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MEMORY_STATS_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_MEMORY_STATS_MOJOM_SHARED_H_

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
#include "gpu/ipc/common/memory_stats.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class VideoMemoryProcessStatsDataView;

class VideoMemoryUsageStatsDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::VideoMemoryProcessStatsDataView> {
  using Data = ::gpu::mojom::internal::VideoMemoryProcessStats_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::VideoMemoryUsageStatsDataView> {
  using Data = ::gpu::mojom::internal::VideoMemoryUsageStats_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {
class VideoMemoryProcessStatsDataView {
 public:
  VideoMemoryProcessStatsDataView() {}

  VideoMemoryProcessStatsDataView(
      internal::VideoMemoryProcessStats_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t video_memory_bytes() const {
    return data_->video_memory_bytes;
  }
  bool has_duplicates() const {
    return data_->has_duplicates;
  }
 private:
  internal::VideoMemoryProcessStats_Data* data_ = nullptr;
};

class VideoMemoryUsageStatsDataView {
 public:
  VideoMemoryUsageStatsDataView() {}

  VideoMemoryUsageStatsDataView(
      internal::VideoMemoryUsageStats_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProcessMapDataView(
      mojo::MapDataView<int32_t, VideoMemoryProcessStatsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessMap(UserType* output) {
    auto* pointer = data_->process_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<int32_t, ::gpu::mojom::VideoMemoryProcessStatsDataView>>(
        pointer, output, context_);
  }
  uint64_t bytes_allocated() const {
    return data_->bytes_allocated;
  }
 private:
  internal::VideoMemoryUsageStats_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoMemoryProcessStatsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoMemoryProcessStatsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoMemoryProcessStats_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->video_memory_bytes = Traits::video_memory_bytes(input);
    (*output)->has_duplicates = Traits::has_duplicates(input);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoMemoryProcessStats_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoMemoryProcessStatsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoMemoryUsageStatsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::VideoMemoryUsageStatsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::VideoMemoryUsageStats_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::process_map(input)) in_process_map = Traits::process_map(input);
    typename decltype((*output)->process_map)::BaseType::BufferWriter
        process_map_writer;
    const mojo::internal::ContainerValidateParams process_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<int32_t, ::gpu::mojom::VideoMemoryProcessStatsDataView>>(
        in_process_map, buffer, &process_map_writer, &process_map_validate_params,
        context);
    (*output)->process_map.Set(
        process_map_writer.is_null() ? nullptr : process_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->process_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null process_map in VideoMemoryUsageStats struct");
    (*output)->bytes_allocated = Traits::bytes_allocated(input);
  }

  static bool Deserialize(::gpu::mojom::internal::VideoMemoryUsageStats_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::VideoMemoryUsageStatsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {



inline void VideoMemoryUsageStatsDataView::GetProcessMapDataView(
    mojo::MapDataView<int32_t, VideoMemoryProcessStatsDataView>* output) {
  auto pointer = data_->process_map.Get();
  *output = mojo::MapDataView<int32_t, VideoMemoryProcessStatsDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_MEMORY_STATS_MOJOM_SHARED_H_