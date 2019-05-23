// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_PARAMS_DATA_H_

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
namespace media {
namespace mojom {
namespace internal {
class  AudioInputStream_Record_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStream_Record_Params_Data));
      new (data()) AudioInputStream_Record_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStream_Record_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStream_Record_Params_Data>(index_);
    }
    AudioInputStream_Record_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioInputStream_Record_Params_Data();
  ~AudioInputStream_Record_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStream_Record_Params_Data) == 8,
              "Bad sizeof(AudioInputStream_Record_Params_Data)");
class  AudioInputStream_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStream_SetVolume_Params_Data));
      new (data()) AudioInputStream_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStream_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStream_SetVolume_Params_Data>(index_);
    }
    AudioInputStream_SetVolume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double volume;

 private:
  AudioInputStream_SetVolume_Params_Data();
  ~AudioInputStream_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStream_SetVolume_Params_Data) == 16,
              "Bad sizeof(AudioInputStream_SetVolume_Params_Data)");
class  AudioInputStreamClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStreamClient_OnError_Params_Data));
      new (data()) AudioInputStreamClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStreamClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStreamClient_OnError_Params_Data>(index_);
    }
    AudioInputStreamClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioInputStreamClient_OnError_Params_Data();
  ~AudioInputStreamClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStreamClient_OnError_Params_Data) == 8,
              "Bad sizeof(AudioInputStreamClient_OnError_Params_Data)");
class  AudioInputStreamClient_OnMutedStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStreamClient_OnMutedStateChanged_Params_Data));
      new (data()) AudioInputStreamClient_OnMutedStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStreamClient_OnMutedStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStreamClient_OnMutedStateChanged_Params_Data>(index_);
    }
    AudioInputStreamClient_OnMutedStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_muted : 1;
  uint8_t padfinal_[7];

 private:
  AudioInputStreamClient_OnMutedStateChanged_Params_Data();
  ~AudioInputStreamClient_OnMutedStateChanged_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStreamClient_OnMutedStateChanged_Params_Data) == 16,
              "Bad sizeof(AudioInputStreamClient_OnMutedStateChanged_Params_Data)");
class  AudioInputStreamObserver_DidStartRecording_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioInputStreamObserver_DidStartRecording_Params_Data));
      new (data()) AudioInputStreamObserver_DidStartRecording_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioInputStreamObserver_DidStartRecording_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioInputStreamObserver_DidStartRecording_Params_Data>(index_);
    }
    AudioInputStreamObserver_DidStartRecording_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioInputStreamObserver_DidStartRecording_Params_Data();
  ~AudioInputStreamObserver_DidStartRecording_Params_Data() = delete;
};
static_assert(sizeof(AudioInputStreamObserver_DidStartRecording_Params_Data) == 8,
              "Bad sizeof(AudioInputStreamObserver_DidStartRecording_Params_Data)");

}  // namespace internal
class AudioInputStream_Record_ParamsDataView {
 public:
  AudioInputStream_Record_ParamsDataView() {}

  AudioInputStream_Record_ParamsDataView(
      internal::AudioInputStream_Record_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioInputStream_Record_Params_Data* data_ = nullptr;
};

class AudioInputStream_SetVolume_ParamsDataView {
 public:
  AudioInputStream_SetVolume_ParamsDataView() {}

  AudioInputStream_SetVolume_ParamsDataView(
      internal::AudioInputStream_SetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double volume() const {
    return data_->volume;
  }
 private:
  internal::AudioInputStream_SetVolume_Params_Data* data_ = nullptr;
};

class AudioInputStreamClient_OnError_ParamsDataView {
 public:
  AudioInputStreamClient_OnError_ParamsDataView() {}

  AudioInputStreamClient_OnError_ParamsDataView(
      internal::AudioInputStreamClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioInputStreamClient_OnError_Params_Data* data_ = nullptr;
};

class AudioInputStreamClient_OnMutedStateChanged_ParamsDataView {
 public:
  AudioInputStreamClient_OnMutedStateChanged_ParamsDataView() {}

  AudioInputStreamClient_OnMutedStateChanged_ParamsDataView(
      internal::AudioInputStreamClient_OnMutedStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_muted() const {
    return data_->is_muted;
  }
 private:
  internal::AudioInputStreamClient_OnMutedStateChanged_Params_Data* data_ = nullptr;
};

class AudioInputStreamObserver_DidStartRecording_ParamsDataView {
 public:
  AudioInputStreamObserver_DidStartRecording_ParamsDataView() {}

  AudioInputStreamObserver_DidStartRecording_ParamsDataView(
      internal::AudioInputStreamObserver_DidStartRecording_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioInputStreamObserver_DidStartRecording_Params_Data* data_ = nullptr;
};











}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_INPUT_STREAM_MOJOM_PARAMS_DATA_H_