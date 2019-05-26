// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_PARAMS_DATA_H_

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
class  AudioLog_OnCreated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnCreated_Params_Data));
      new (data()) AudioLog_OnCreated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnCreated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnCreated_Params_Data>(index_);
    }
    AudioLog_OnCreated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioParameters_Data> params;
  mojo::internal::Pointer<mojo::internal::String_Data> device_id;

 private:
  AudioLog_OnCreated_Params_Data();
  ~AudioLog_OnCreated_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnCreated_Params_Data) == 24,
              "Bad sizeof(AudioLog_OnCreated_Params_Data)");
class  AudioLog_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnStarted_Params_Data));
      new (data()) AudioLog_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnStarted_Params_Data>(index_);
    }
    AudioLog_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnStarted_Params_Data();
  ~AudioLog_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnStarted_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnStarted_Params_Data)");
class  AudioLog_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnStopped_Params_Data));
      new (data()) AudioLog_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnStopped_Params_Data>(index_);
    }
    AudioLog_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnStopped_Params_Data();
  ~AudioLog_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnStopped_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnStopped_Params_Data)");
class  AudioLog_OnClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnClosed_Params_Data));
      new (data()) AudioLog_OnClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnClosed_Params_Data>(index_);
    }
    AudioLog_OnClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnClosed_Params_Data();
  ~AudioLog_OnClosed_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnClosed_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnClosed_Params_Data)");
class  AudioLog_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnError_Params_Data));
      new (data()) AudioLog_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnError_Params_Data>(index_);
    }
    AudioLog_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioLog_OnError_Params_Data();
  ~AudioLog_OnError_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnError_Params_Data) == 8,
              "Bad sizeof(AudioLog_OnError_Params_Data)");
class  AudioLog_OnSetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnSetVolume_Params_Data));
      new (data()) AudioLog_OnSetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnSetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnSetVolume_Params_Data>(index_);
    }
    AudioLog_OnSetVolume_Params_Data* operator->() { return data(); }

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
  AudioLog_OnSetVolume_Params_Data();
  ~AudioLog_OnSetVolume_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnSetVolume_Params_Data) == 16,
              "Bad sizeof(AudioLog_OnSetVolume_Params_Data)");
class  AudioLog_OnProcessingStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnProcessingStateChanged_Params_Data));
      new (data()) AudioLog_OnProcessingStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnProcessingStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnProcessingStateChanged_Params_Data>(index_);
    }
    AudioLog_OnProcessingStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  AudioLog_OnProcessingStateChanged_Params_Data();
  ~AudioLog_OnProcessingStateChanged_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnProcessingStateChanged_Params_Data) == 16,
              "Bad sizeof(AudioLog_OnProcessingStateChanged_Params_Data)");
class  AudioLog_OnLogMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLog_OnLogMessage_Params_Data));
      new (data()) AudioLog_OnLogMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLog_OnLogMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLog_OnLogMessage_Params_Data>(index_);
    }
    AudioLog_OnLogMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  AudioLog_OnLogMessage_Params_Data();
  ~AudioLog_OnLogMessage_Params_Data() = delete;
};
static_assert(sizeof(AudioLog_OnLogMessage_Params_Data) == 16,
              "Bad sizeof(AudioLog_OnLogMessage_Params_Data)");
class  AudioLogFactory_CreateAudioLog_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioLogFactory_CreateAudioLog_Params_Data));
      new (data()) AudioLogFactory_CreateAudioLog_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioLogFactory_CreateAudioLog_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioLogFactory_CreateAudioLog_Params_Data>(index_);
    }
    AudioLogFactory_CreateAudioLog_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t component;
  int32_t component_id;
  mojo::internal::Handle_Data audio_log_request;
  uint8_t padfinal_[4];

 private:
  AudioLogFactory_CreateAudioLog_Params_Data();
  ~AudioLogFactory_CreateAudioLog_Params_Data() = delete;
};
static_assert(sizeof(AudioLogFactory_CreateAudioLog_Params_Data) == 24,
              "Bad sizeof(AudioLogFactory_CreateAudioLog_Params_Data)");

}  // namespace internal
class AudioLog_OnCreated_ParamsDataView {
 public:
  AudioLog_OnCreated_ParamsDataView() {}

  AudioLog_OnCreated_ParamsDataView(
      internal::AudioLog_OnCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersDataView>(
        pointer, output, context_);
  }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioLog_OnCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioLog_OnStarted_ParamsDataView {
 public:
  AudioLog_OnStarted_ParamsDataView() {}

  AudioLog_OnStarted_ParamsDataView(
      internal::AudioLog_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnStarted_Params_Data* data_ = nullptr;
};

class AudioLog_OnStopped_ParamsDataView {
 public:
  AudioLog_OnStopped_ParamsDataView() {}

  AudioLog_OnStopped_ParamsDataView(
      internal::AudioLog_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnStopped_Params_Data* data_ = nullptr;
};

class AudioLog_OnClosed_ParamsDataView {
 public:
  AudioLog_OnClosed_ParamsDataView() {}

  AudioLog_OnClosed_ParamsDataView(
      internal::AudioLog_OnClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnClosed_Params_Data* data_ = nullptr;
};

class AudioLog_OnError_ParamsDataView {
 public:
  AudioLog_OnError_ParamsDataView() {}

  AudioLog_OnError_ParamsDataView(
      internal::AudioLog_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioLog_OnError_Params_Data* data_ = nullptr;
};

class AudioLog_OnSetVolume_ParamsDataView {
 public:
  AudioLog_OnSetVolume_ParamsDataView() {}

  AudioLog_OnSetVolume_ParamsDataView(
      internal::AudioLog_OnSetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double volume() const {
    return data_->volume;
  }
 private:
  internal::AudioLog_OnSetVolume_Params_Data* data_ = nullptr;
};

class AudioLog_OnProcessingStateChanged_ParamsDataView {
 public:
  AudioLog_OnProcessingStateChanged_ParamsDataView() {}

  AudioLog_OnProcessingStateChanged_ParamsDataView(
      internal::AudioLog_OnProcessingStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioLog_OnProcessingStateChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioLog_OnLogMessage_ParamsDataView {
 public:
  AudioLog_OnLogMessage_ParamsDataView() {}

  AudioLog_OnLogMessage_ParamsDataView(
      internal::AudioLog_OnLogMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioLog_OnLogMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioLogFactory_CreateAudioLog_ParamsDataView {
 public:
  AudioLogFactory_CreateAudioLog_ParamsDataView() {}

  AudioLogFactory_CreateAudioLog_ParamsDataView(
      internal::AudioLogFactory_CreateAudioLog_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadComponent(UserType* output) const {
    auto data_value = data_->component;
    return mojo::internal::Deserialize<::media::mojom::AudioLogComponent>(
        data_value, output);
  }

  AudioLogComponent component() const {
    return static_cast<AudioLogComponent>(data_->component);
  }
  int32_t component_id() const {
    return data_->component_id;
  }
  template <typename UserType>
  UserType TakeAudioLogRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioLogRequestDataView>(
            &data_->audio_log_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioLogFactory_CreateAudioLog_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AudioLog_OnCreated_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}
inline void AudioLog_OnCreated_ParamsDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}












inline void AudioLog_OnProcessingStateChanged_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void AudioLog_OnLogMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_PARAMS_DATA_H_