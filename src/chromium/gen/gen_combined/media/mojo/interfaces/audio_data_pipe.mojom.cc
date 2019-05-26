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

#include "media/mojo/interfaces/audio_data_pipe.mojom.h"

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

#include "media/mojo/interfaces/audio_data_pipe.mojom-import-headers.h"


#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DATA_PIPE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace media {
namespace mojom {
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
}  // namespace mojom
}  // namespace media

namespace mojo {


// static
bool StructTraits<::media::mojom::ReadWriteAudioDataPipe::DataView, ::media::mojom::ReadWriteAudioDataPipePtr>::Read(
    ::media::mojom::ReadWriteAudioDataPipe::DataView input,
    ::media::mojom::ReadWriteAudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::ReadWriteAudioDataPipePtr result(::media::mojom::ReadWriteAudioDataPipe::New());
  
      if (!input.ReadSharedMemory(&result->shared_memory))
        success = false;
      result->socket = input.TakeSocket();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::media::mojom::ReadOnlyAudioDataPipe::DataView, ::media::mojom::ReadOnlyAudioDataPipePtr>::Read(
    ::media::mojom::ReadOnlyAudioDataPipe::DataView input,
    ::media::mojom::ReadOnlyAudioDataPipePtr* output) {
  bool success = true;
  ::media::mojom::ReadOnlyAudioDataPipePtr result(::media::mojom::ReadOnlyAudioDataPipe::New());
  
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