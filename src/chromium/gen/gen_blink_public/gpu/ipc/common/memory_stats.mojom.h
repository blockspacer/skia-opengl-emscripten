// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MEMORY_STATS_MOJOM_H_
#define GPU_IPC_COMMON_MEMORY_STATS_MOJOM_H_

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
#include "gpu/ipc/common/memory_stats.mojom-shared.h"
#include "gpu/ipc/common/memory_stats.mojom-forward.h"
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
#include "gpu/ipc/common/memory_stats.h"




namespace gpu {
namespace mojom {





class  VideoMemoryProcessStats {
 public:
  using DataView = VideoMemoryProcessStatsDataView;
  using Data_ = internal::VideoMemoryProcessStats_Data;

  template <typename... Args>
  static VideoMemoryProcessStatsPtr New(Args&&... args) {
    return VideoMemoryProcessStatsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoMemoryProcessStatsPtr From(const U& u) {
    return mojo::TypeConverter<VideoMemoryProcessStatsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoMemoryProcessStats>::Convert(*this);
  }


  VideoMemoryProcessStats();

  VideoMemoryProcessStats(
      uint64_t video_memory_bytes,
      bool has_duplicates);

  ~VideoMemoryProcessStats();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoMemoryProcessStatsPtr>
  VideoMemoryProcessStatsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoMemoryProcessStats>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoMemoryProcessStats::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoMemoryProcessStats::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoMemoryProcessStats_UnserializedMessageContext<
            UserType, VideoMemoryProcessStats::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoMemoryProcessStats::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoMemoryProcessStats::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoMemoryProcessStats_UnserializedMessageContext<
            UserType, VideoMemoryProcessStats::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoMemoryProcessStats::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t video_memory_bytes;
  
  bool has_duplicates;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  VideoMemoryUsageStats {
 public:
  using DataView = VideoMemoryUsageStatsDataView;
  using Data_ = internal::VideoMemoryUsageStats_Data;

  template <typename... Args>
  static VideoMemoryUsageStatsPtr New(Args&&... args) {
    return VideoMemoryUsageStatsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoMemoryUsageStatsPtr From(const U& u) {
    return mojo::TypeConverter<VideoMemoryUsageStatsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoMemoryUsageStats>::Convert(*this);
  }


  VideoMemoryUsageStats();

  VideoMemoryUsageStats(
      const base::flat_map<int32_t, gpu::VideoMemoryUsageStats::ProcessStats>& process_map,
      uint64_t bytes_allocated);

  ~VideoMemoryUsageStats();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoMemoryUsageStatsPtr>
  VideoMemoryUsageStatsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoMemoryUsageStats>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoMemoryUsageStats::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoMemoryUsageStats::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoMemoryUsageStats_UnserializedMessageContext<
            UserType, VideoMemoryUsageStats::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoMemoryUsageStats::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoMemoryUsageStats::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoMemoryUsageStats_UnserializedMessageContext<
            UserType, VideoMemoryUsageStats::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoMemoryUsageStats::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::flat_map<int32_t, gpu::VideoMemoryUsageStats::ProcessStats> process_map;
  
  uint64_t bytes_allocated;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
VideoMemoryProcessStatsPtr VideoMemoryProcessStats::Clone() const {
  return New(
      mojo::Clone(video_memory_bytes),
      mojo::Clone(has_duplicates)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoMemoryProcessStats>::value>::type*>
bool VideoMemoryProcessStats::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->video_memory_bytes, other_struct.video_memory_bytes))
    return false;
  if (!mojo::Equals(this->has_duplicates, other_struct.has_duplicates))
    return false;
  return true;
}
template <typename StructPtrType>
VideoMemoryUsageStatsPtr VideoMemoryUsageStats::Clone() const {
  return New(
      mojo::Clone(process_map),
      mojo::Clone(bytes_allocated)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoMemoryUsageStats>::value>::type*>
bool VideoMemoryUsageStats::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->process_map, other_struct.process_map))
    return false;
  if (!mojo::Equals(this->bytes_allocated, other_struct.bytes_allocated))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::VideoMemoryProcessStats::DataView,
                                         ::gpu::mojom::VideoMemoryProcessStatsPtr> {
  static bool IsNull(const ::gpu::mojom::VideoMemoryProcessStatsPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::VideoMemoryProcessStatsPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::VideoMemoryProcessStats::video_memory_bytes) video_memory_bytes(
      const ::gpu::mojom::VideoMemoryProcessStatsPtr& input) {
    return input->video_memory_bytes;
  }

  static decltype(::gpu::mojom::VideoMemoryProcessStats::has_duplicates) has_duplicates(
      const ::gpu::mojom::VideoMemoryProcessStatsPtr& input) {
    return input->has_duplicates;
  }

  static bool Read(::gpu::mojom::VideoMemoryProcessStats::DataView input, ::gpu::mojom::VideoMemoryProcessStatsPtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::VideoMemoryUsageStats::DataView,
                                         ::gpu::mojom::VideoMemoryUsageStatsPtr> {
  static bool IsNull(const ::gpu::mojom::VideoMemoryUsageStatsPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::VideoMemoryUsageStatsPtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::VideoMemoryUsageStats::process_map)& process_map(
      const ::gpu::mojom::VideoMemoryUsageStatsPtr& input) {
    return input->process_map;
  }

  static decltype(::gpu::mojom::VideoMemoryUsageStats::bytes_allocated) bytes_allocated(
      const ::gpu::mojom::VideoMemoryUsageStatsPtr& input) {
    return input->bytes_allocated;
  }

  static bool Read(::gpu::mojom::VideoMemoryUsageStats::DataView input, ::gpu::mojom::VideoMemoryUsageStatsPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_MEMORY_STATS_MOJOM_H_