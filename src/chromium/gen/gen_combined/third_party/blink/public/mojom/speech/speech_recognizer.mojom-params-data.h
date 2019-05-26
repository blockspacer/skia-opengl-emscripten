// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognizer_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognizer_Start_Params_Data));
      new (data()) SpeechRecognizer_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognizer_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognizer_Start_Params_Data>(index_);
    }
    SpeechRecognizer_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StartSpeechRecognitionRequestParams_Data> params;

 private:
  SpeechRecognizer_Start_Params_Data();
  ~SpeechRecognizer_Start_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognizer_Start_Params_Data) == 16,
              "Bad sizeof(SpeechRecognizer_Start_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSession_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSession_Abort_Params_Data));
      new (data()) SpeechRecognitionSession_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSession_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSession_Abort_Params_Data>(index_);
    }
    SpeechRecognitionSession_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSession_Abort_Params_Data();
  ~SpeechRecognitionSession_Abort_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSession_Abort_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSession_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSession_StopCapture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSession_StopCapture_Params_Data));
      new (data()) SpeechRecognitionSession_StopCapture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSession_StopCapture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSession_StopCapture_Params_Data>(index_);
    }
    SpeechRecognitionSession_StopCapture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSession_StopCapture_Params_Data();
  ~SpeechRecognitionSession_StopCapture_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSession_StopCapture_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSession_StopCapture_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_ResultRetrieved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_ResultRetrieved_Params_Data));
      new (data()) SpeechRecognitionSessionClient_ResultRetrieved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_ResultRetrieved_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::SpeechRecognitionResult_Data>>> results;

 private:
  SpeechRecognitionSessionClient_ResultRetrieved_Params_Data();
  ~SpeechRecognitionSessionClient_ResultRetrieved_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_ResultRetrieved_Params_Data) == 16,
              "Bad sizeof(SpeechRecognitionSessionClient_ResultRetrieved_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_ErrorOccurred_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_ErrorOccurred_Params_Data));
      new (data()) SpeechRecognitionSessionClient_ErrorOccurred_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_ErrorOccurred_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::SpeechRecognitionError_Data> error;

 private:
  SpeechRecognitionSessionClient_ErrorOccurred_Params_Data();
  ~SpeechRecognitionSessionClient_ErrorOccurred_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_ErrorOccurred_Params_Data) == 16,
              "Bad sizeof(SpeechRecognitionSessionClient_ErrorOccurred_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_Started_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_Started_Params_Data));
      new (data()) SpeechRecognitionSessionClient_Started_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_Started_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_Started_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_Started_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_Started_Params_Data();
  ~SpeechRecognitionSessionClient_Started_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_Started_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_Started_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_AudioStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_AudioStarted_Params_Data));
      new (data()) SpeechRecognitionSessionClient_AudioStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_AudioStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_AudioStarted_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_AudioStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_AudioStarted_Params_Data();
  ~SpeechRecognitionSessionClient_AudioStarted_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_AudioStarted_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_AudioStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_SoundStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_SoundStarted_Params_Data));
      new (data()) SpeechRecognitionSessionClient_SoundStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_SoundStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_SoundStarted_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_SoundStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_SoundStarted_Params_Data();
  ~SpeechRecognitionSessionClient_SoundStarted_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_SoundStarted_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_SoundStarted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_SoundEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_SoundEnded_Params_Data));
      new (data()) SpeechRecognitionSessionClient_SoundEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_SoundEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_SoundEnded_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_SoundEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_SoundEnded_Params_Data();
  ~SpeechRecognitionSessionClient_SoundEnded_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_SoundEnded_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_SoundEnded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_AudioEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_AudioEnded_Params_Data));
      new (data()) SpeechRecognitionSessionClient_AudioEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_AudioEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_AudioEnded_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_AudioEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_AudioEnded_Params_Data();
  ~SpeechRecognitionSessionClient_AudioEnded_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_AudioEnded_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_AudioEnded_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpeechRecognitionSessionClient_Ended_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpeechRecognitionSessionClient_Ended_Params_Data));
      new (data()) SpeechRecognitionSessionClient_Ended_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpeechRecognitionSessionClient_Ended_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpeechRecognitionSessionClient_Ended_Params_Data>(index_);
    }
    SpeechRecognitionSessionClient_Ended_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SpeechRecognitionSessionClient_Ended_Params_Data();
  ~SpeechRecognitionSessionClient_Ended_Params_Data() = delete;
};
static_assert(sizeof(SpeechRecognitionSessionClient_Ended_Params_Data) == 8,
              "Bad sizeof(SpeechRecognitionSessionClient_Ended_Params_Data)");

}  // namespace internal
class SpeechRecognizer_Start_ParamsDataView {
 public:
  SpeechRecognizer_Start_ParamsDataView() {}

  SpeechRecognizer_Start_ParamsDataView(
      internal::SpeechRecognizer_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      StartSpeechRecognitionRequestParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::StartSpeechRecognitionRequestParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SpeechRecognizer_Start_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionSession_Abort_ParamsDataView {
 public:
  SpeechRecognitionSession_Abort_ParamsDataView() {}

  SpeechRecognitionSession_Abort_ParamsDataView(
      internal::SpeechRecognitionSession_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSession_Abort_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSession_StopCapture_ParamsDataView {
 public:
  SpeechRecognitionSession_StopCapture_ParamsDataView() {}

  SpeechRecognitionSession_StopCapture_ParamsDataView(
      internal::SpeechRecognitionSession_StopCapture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSession_StopCapture_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView() {}

  SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView(
      internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<::blink::mojom::SpeechRecognitionResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SpeechRecognitionResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SpeechRecognitionSessionClient_ResultRetrieved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView() {}

  SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView(
      internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      ::blink::mojom::SpeechRecognitionErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::blink::mojom::SpeechRecognitionErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::SpeechRecognitionSessionClient_ErrorOccurred_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SpeechRecognitionSessionClient_Started_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_Started_ParamsDataView() {}

  SpeechRecognitionSessionClient_Started_ParamsDataView(
      internal::SpeechRecognitionSessionClient_Started_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_Started_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_AudioStarted_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_AudioStarted_ParamsDataView() {}

  SpeechRecognitionSessionClient_AudioStarted_ParamsDataView(
      internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_AudioStarted_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_SoundStarted_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_SoundStarted_ParamsDataView() {}

  SpeechRecognitionSessionClient_SoundStarted_ParamsDataView(
      internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_SoundStarted_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_SoundEnded_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_SoundEnded_ParamsDataView() {}

  SpeechRecognitionSessionClient_SoundEnded_ParamsDataView(
      internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_SoundEnded_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_AudioEnded_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_AudioEnded_ParamsDataView() {}

  SpeechRecognitionSessionClient_AudioEnded_ParamsDataView(
      internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_AudioEnded_Params_Data* data_ = nullptr;
};

class SpeechRecognitionSessionClient_Ended_ParamsDataView {
 public:
  SpeechRecognitionSessionClient_Ended_ParamsDataView() {}

  SpeechRecognitionSessionClient_Ended_ParamsDataView(
      internal::SpeechRecognitionSessionClient_Ended_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SpeechRecognitionSessionClient_Ended_Params_Data* data_ = nullptr;
};


inline void SpeechRecognizer_Start_ParamsDataView::GetParamsDataView(
    StartSpeechRecognitionRequestParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = StartSpeechRecognitionRequestParamsDataView(pointer, context_);
}






inline void SpeechRecognitionSessionClient_ResultRetrieved_ParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::blink::mojom::SpeechRecognitionResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::blink::mojom::SpeechRecognitionResultDataView>(pointer, context_);
}


inline void SpeechRecognitionSessionClient_ErrorOccurred_ParamsDataView::GetErrorDataView(
    ::blink::mojom::SpeechRecognitionErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = ::blink::mojom::SpeechRecognitionErrorDataView(pointer, context_);
}













}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_PARAMS_DATA_H_