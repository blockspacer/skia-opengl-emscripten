// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {
class ReadWriteAudioDataPipeDataView;

class ReadOnlyAudioDataPipeDataView;



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media::mojom::ReadWriteAudioDataPipeDataView> {
  using Data = ::media::mojom::internal::ReadWriteAudioDataPipe_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::media::mojom::ReadOnlyAudioDataPipeDataView> {
  using Data = ::media::mojom::internal::ReadOnlyAudioDataPipe_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {
class ReadWriteAudioDataPipeDataView {
 public:
  ReadWriteAudioDataPipeDataView() {}

  ReadWriteAudioDataPipeDataView(
      internal::ReadWriteAudioDataPipe_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSharedMemoryDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMemory(UserType* output) {
    auto* pointer = data_->shared_memory.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        pointer, output, context_);
  }
  mojo::ScopedHandle TakeSocket() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ReadWriteAudioDataPipe_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ReadOnlyAudioDataPipeDataView {
 public:
  ReadOnlyAudioDataPipeDataView() {}

  ReadOnlyAudioDataPipeDataView(
      internal::ReadOnlyAudioDataPipe_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSharedMemoryDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMemory(UserType* output) {
    auto* pointer = data_->shared_memory.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
  mojo::ScopedHandle TakeSocket() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->socket, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ReadOnlyAudioDataPipe_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ReadWriteAudioDataPipeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::ReadWriteAudioDataPipeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::ReadWriteAudioDataPipe_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::shared_memory(input)) in_shared_memory = Traits::shared_memory(input);
    typename decltype((*output)->shared_memory)::BaseType::BufferWriter
        shared_memory_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        in_shared_memory, buffer, &shared_memory_writer, context);
    (*output)->shared_memory.Set(
        shared_memory_writer.is_null() ? nullptr : shared_memory_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->shared_memory.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null shared_memory in ReadWriteAudioDataPipe struct");
    decltype(Traits::socket(input)) in_socket = Traits::socket(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_socket, &(*output)->socket, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->socket),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid socket in ReadWriteAudioDataPipe struct");
  }

  static bool Deserialize(::media::mojom::internal::ReadWriteAudioDataPipe_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::ReadWriteAudioDataPipeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ReadOnlyAudioDataPipeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::ReadOnlyAudioDataPipeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::ReadOnlyAudioDataPipe_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::shared_memory(input)) in_shared_memory = Traits::shared_memory(input);
    typename decltype((*output)->shared_memory)::BaseType::BufferWriter
        shared_memory_writer;
    mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        in_shared_memory, buffer, &shared_memory_writer, context);
    (*output)->shared_memory.Set(
        shared_memory_writer.is_null() ? nullptr : shared_memory_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->shared_memory.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null shared_memory in ReadOnlyAudioDataPipe struct");
    decltype(Traits::socket(input)) in_socket = Traits::socket(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_socket, &(*output)->socket, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->socket),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid socket in ReadOnlyAudioDataPipe struct");
  }

  static bool Deserialize(::media::mojom::internal::ReadOnlyAudioDataPipe_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::ReadOnlyAudioDataPipeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {

inline void ReadWriteAudioDataPipeDataView::GetSharedMemoryDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  auto pointer = data_->shared_memory.Get();
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(pointer, context_);
}


inline void ReadOnlyAudioDataPipeDataView::GetSharedMemoryDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->shared_memory.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_SHARED_H_