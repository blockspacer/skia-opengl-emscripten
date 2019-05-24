// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MEMORY_STATS_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_MEMORY_STATS_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/memory_stats.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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




namespace gpu {
namespace mojom {
namespace blink {





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
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoMemoryProcessStats::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
      WTF::HashMap<int32_t, VideoMemoryProcessStatsPtr> process_map,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoMemoryUsageStats::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::HashMap<int32_t, VideoMemoryProcessStatsPtr> process_map;
  
  uint64_t bytes_allocated;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoMemoryUsageStats);
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


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::VideoMemoryProcessStats::DataView,
                                         ::gpu::mojom::blink::VideoMemoryProcessStatsPtr> {
  static bool IsNull(const ::gpu::mojom::blink::VideoMemoryProcessStatsPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::VideoMemoryProcessStatsPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::VideoMemoryProcessStats::video_memory_bytes) video_memory_bytes(
      const ::gpu::mojom::blink::VideoMemoryProcessStatsPtr& input) {
    return input->video_memory_bytes;
  }

  static decltype(::gpu::mojom::blink::VideoMemoryProcessStats::has_duplicates) has_duplicates(
      const ::gpu::mojom::blink::VideoMemoryProcessStatsPtr& input) {
    return input->has_duplicates;
  }

  static bool Read(::gpu::mojom::blink::VideoMemoryProcessStats::DataView input, ::gpu::mojom::blink::VideoMemoryProcessStatsPtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::VideoMemoryUsageStats::DataView,
                                         ::gpu::mojom::blink::VideoMemoryUsageStatsPtr> {
  static bool IsNull(const ::gpu::mojom::blink::VideoMemoryUsageStatsPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::VideoMemoryUsageStatsPtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::blink::VideoMemoryUsageStats::process_map)& process_map(
      const ::gpu::mojom::blink::VideoMemoryUsageStatsPtr& input) {
    return input->process_map;
  }

  static decltype(::gpu::mojom::blink::VideoMemoryUsageStats::bytes_allocated) bytes_allocated(
      const ::gpu::mojom::blink::VideoMemoryUsageStatsPtr& input) {
    return input->bytes_allocated;
  }

  static bool Read(::gpu::mojom::blink::VideoMemoryUsageStats::DataView input, ::gpu::mojom::blink::VideoMemoryUsageStatsPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_MEMORY_STATS_MOJOM_BLINK_H_