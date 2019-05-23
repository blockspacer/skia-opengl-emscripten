// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_H_

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
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
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




namespace media {
namespace mojom {









class  ReadWriteAudioDataPipe {
 public:
  using DataView = ReadWriteAudioDataPipeDataView;
  using Data_ = internal::ReadWriteAudioDataPipe_Data;

  template <typename... Args>
  static ReadWriteAudioDataPipePtr New(Args&&... args) {
    return ReadWriteAudioDataPipePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReadWriteAudioDataPipePtr From(const U& u) {
    return mojo::TypeConverter<ReadWriteAudioDataPipePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReadWriteAudioDataPipe>::Convert(*this);
  }


  ReadWriteAudioDataPipe();

  ReadWriteAudioDataPipe(
      base::UnsafeSharedMemoryRegion shared_memory,
      mojo::ScopedHandle socket);

  ~ReadWriteAudioDataPipe();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReadWriteAudioDataPipePtr>
  ReadWriteAudioDataPipePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReadWriteAudioDataPipe>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReadWriteAudioDataPipe::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReadWriteAudioDataPipe::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReadWriteAudioDataPipe_UnserializedMessageContext<
            UserType, ReadWriteAudioDataPipe::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReadWriteAudioDataPipe::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ReadWriteAudioDataPipe::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReadWriteAudioDataPipe_UnserializedMessageContext<
            UserType, ReadWriteAudioDataPipe::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReadWriteAudioDataPipe::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::UnsafeSharedMemoryRegion shared_memory;
  
  mojo::ScopedHandle socket;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ReadWriteAudioDataPipe);
};





class  ReadOnlyAudioDataPipe {
 public:
  using DataView = ReadOnlyAudioDataPipeDataView;
  using Data_ = internal::ReadOnlyAudioDataPipe_Data;

  template <typename... Args>
  static ReadOnlyAudioDataPipePtr New(Args&&... args) {
    return ReadOnlyAudioDataPipePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReadOnlyAudioDataPipePtr From(const U& u) {
    return mojo::TypeConverter<ReadOnlyAudioDataPipePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReadOnlyAudioDataPipe>::Convert(*this);
  }


  ReadOnlyAudioDataPipe();

  ReadOnlyAudioDataPipe(
      base::ReadOnlySharedMemoryRegion shared_memory,
      mojo::ScopedHandle socket);

  ~ReadOnlyAudioDataPipe();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReadOnlyAudioDataPipePtr>
  ReadOnlyAudioDataPipePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReadOnlyAudioDataPipe>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReadOnlyAudioDataPipe::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReadOnlyAudioDataPipe::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReadOnlyAudioDataPipe_UnserializedMessageContext<
            UserType, ReadOnlyAudioDataPipe::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReadOnlyAudioDataPipe::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ReadOnlyAudioDataPipe::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReadOnlyAudioDataPipe_UnserializedMessageContext<
            UserType, ReadOnlyAudioDataPipe::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReadOnlyAudioDataPipe::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::ReadOnlySharedMemoryRegion shared_memory;
  
  mojo::ScopedHandle socket;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ReadOnlyAudioDataPipe);
};

template <typename StructPtrType>
ReadWriteAudioDataPipePtr ReadWriteAudioDataPipe::Clone() const {
  return New(
      mojo::Clone(shared_memory),
      mojo::Clone(socket)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReadWriteAudioDataPipe>::value>::type*>
bool ReadWriteAudioDataPipe::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->shared_memory, other_struct.shared_memory))
    return false;
  if (!mojo::Equals(this->socket, other_struct.socket))
    return false;
  return true;
}
template <typename StructPtrType>
ReadOnlyAudioDataPipePtr ReadOnlyAudioDataPipe::Clone() const {
  return New(
      mojo::Clone(shared_memory),
      mojo::Clone(socket)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReadOnlyAudioDataPipe>::value>::type*>
bool ReadOnlyAudioDataPipe::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->shared_memory, other_struct.shared_memory))
    return false;
  if (!mojo::Equals(this->socket, other_struct.socket))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::ReadWriteAudioDataPipe::DataView,
                                         ::media::mojom::ReadWriteAudioDataPipePtr> {
  static bool IsNull(const ::media::mojom::ReadWriteAudioDataPipePtr& input) { return !input; }
  static void SetToNull(::media::mojom::ReadWriteAudioDataPipePtr* output) { output->reset(); }

  static  decltype(::media::mojom::ReadWriteAudioDataPipe::shared_memory)& shared_memory(
       ::media::mojom::ReadWriteAudioDataPipePtr& input) {
    return input->shared_memory;
  }

  static  decltype(::media::mojom::ReadWriteAudioDataPipe::socket)& socket(
       ::media::mojom::ReadWriteAudioDataPipePtr& input) {
    return input->socket;
  }

  static bool Read(::media::mojom::ReadWriteAudioDataPipe::DataView input, ::media::mojom::ReadWriteAudioDataPipePtr* output);
};


template <>
struct  StructTraits<::media::mojom::ReadOnlyAudioDataPipe::DataView,
                                         ::media::mojom::ReadOnlyAudioDataPipePtr> {
  static bool IsNull(const ::media::mojom::ReadOnlyAudioDataPipePtr& input) { return !input; }
  static void SetToNull(::media::mojom::ReadOnlyAudioDataPipePtr* output) { output->reset(); }

  static  decltype(::media::mojom::ReadOnlyAudioDataPipe::shared_memory)& shared_memory(
       ::media::mojom::ReadOnlyAudioDataPipePtr& input) {
    return input->shared_memory;
  }

  static  decltype(::media::mojom::ReadOnlyAudioDataPipe::socket)& socket(
       ::media::mojom::ReadOnlyAudioDataPipePtr& input) {
    return input->socket;
  }

  static bool Read(::media::mojom::ReadOnlyAudioDataPipe::DataView input, ::media::mojom::ReadOnlyAudioDataPipePtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_H_