// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUDIO_AUDIO_CONTEXT_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUDIO_AUDIO_CONTEXT_MANAGER_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data));
      new (data()) AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data>(index_);
    }
    AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t padfinal_[4];

 private:
  AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data();
  ~AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data() = delete;
};
static_assert(sizeof(AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data) == 16,
              "Bad sizeof(AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data));
      new (data()) AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data>(index_);
    }
    AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  uint8_t padfinal_[4];

 private:
  AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data();
  ~AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data() = delete;
};
static_assert(sizeof(AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data) == 16,
              "Bad sizeof(AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data)");

}  // namespace internal
class AudioContextManager_AudioContextAudiblePlaybackStarted_ParamsDataView {
 public:
  AudioContextManager_AudioContextAudiblePlaybackStarted_ParamsDataView() {}

  AudioContextManager_AudioContextAudiblePlaybackStarted_ParamsDataView(
      internal::AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
 private:
  internal::AudioContextManager_AudioContextAudiblePlaybackStarted_Params_Data* data_ = nullptr;
};

class AudioContextManager_AudioContextAudiblePlaybackStopped_ParamsDataView {
 public:
  AudioContextManager_AudioContextAudiblePlaybackStopped_ParamsDataView() {}

  AudioContextManager_AudioContextAudiblePlaybackStopped_ParamsDataView(
      internal::AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
 private:
  internal::AudioContextManager_AudioContextAudiblePlaybackStopped_Params_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUDIO_AUDIO_CONTEXT_MANAGER_MOJOM_PARAMS_DATA_H_