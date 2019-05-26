// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "media/mojo/interfaces/audio_data_pipe.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "media/mojo/interfaces/audio_data_pipe.mojom-params-data.h"
#include "media/mojo/interfaces/audio_data_pipe.mojom-shared-message-ids.h"

#include "media/mojo/interfaces/audio_data_pipe.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace media {
namespace mojom {
namespace blink {
ReadWriteAudioDataPipe::ReadWriteAudioDataPipe()
    : shared_memory(),
      socket() {}

ReadWriteAudioDataPipe::ReadWriteAudioDataPipe(
    base::UnsafeSharedMemoryRegion shared_memory_in,
    mojo::ScopedHandle socket_in)
    : shared_memory(std::move(shared_memory_in)),
      socket(std::move(socket_in)) {}

ReadWriteAudioDataPipe::~ReadWriteAudioDataPipe() = default;

bool ReadWriteAudioDataPipe::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ReadOnlyAudioDataPipe::ReadOnlyAudioDataPipe()
    : shared_memory(),
      socket() {}

ReadOnlyAudioDataPipe::ReadOnlyAudioDataPipe(
    base::ReadOnlySharedMemoryRegion shared_memory_in,
    mojo::ScopedHandle socket_in)
    : shared_memory(std::move(shared_memory_in)),
      socket(std::move(socket_in)) {}

ReadOnlyAudioDataPipe::~ReadOnlyAudioDataPipe() = default;

bool ReadOnlyAudioDataPipe::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::blink::ReadWriteAudioDataPipe::DataView, ::media::mojom::blink::ReadWriteAudioDataPipePtr>::Read(
    ::media::mojom::blink::ReadWriteAudioDataPipe::DataView input,
    ::media::mojom::blink::ReadWriteAudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::blink::ReadWriteAudioDataPipePtr result(::media::mojom::blink::ReadWriteAudioDataPipe::New());
  
      if (!input.ReadSharedMemory(&result->shared_memory))
        success = false;
      result->socket = input.TakeSocket();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::blink::ReadOnlyAudioDataPipe::DataView, ::media::mojom::blink::ReadOnlyAudioDataPipePtr>::Read(
    ::media::mojom::blink::ReadOnlyAudioDataPipe::DataView input,
    ::media::mojom::blink::ReadOnlyAudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::blink::ReadOnlyAudioDataPipePtr result(::media::mojom::blink::ReadOnlyAudioDataPipe::New());
  
      if (!input.ReadSharedMemory(&result->shared_memory))
        success = false;
      result->socket = input.TakeSocket();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif