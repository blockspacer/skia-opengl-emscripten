// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_PARAMS_DATA_H_

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
class  RemoterFactory_Create_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemoterFactory_Create_Params_Data));
      new (data()) RemoterFactory_Create_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemoterFactory_Create_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemoterFactory_Create_Params_Data>(index_);
    }
    RemoterFactory_Create_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data source;
  mojo::internal::Handle_Data remoter;
  uint8_t padfinal_[4];

 private:
  RemoterFactory_Create_Params_Data();
  ~RemoterFactory_Create_Params_Data() = delete;
};
static_assert(sizeof(RemoterFactory_Create_Params_Data) == 24,
              "Bad sizeof(RemoterFactory_Create_Params_Data)");
class  RemotingDataStreamSender_SendFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingDataStreamSender_SendFrame_Params_Data));
      new (data()) RemotingDataStreamSender_SendFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingDataStreamSender_SendFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingDataStreamSender_SendFrame_Params_Data>(index_);
    }
    RemotingDataStreamSender_SendFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t frame_size;
  uint8_t padfinal_[4];

 private:
  RemotingDataStreamSender_SendFrame_Params_Data();
  ~RemotingDataStreamSender_SendFrame_Params_Data() = delete;
};
static_assert(sizeof(RemotingDataStreamSender_SendFrame_Params_Data) == 16,
              "Bad sizeof(RemotingDataStreamSender_SendFrame_Params_Data)");
class  RemotingDataStreamSender_CancelInFlightData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingDataStreamSender_CancelInFlightData_Params_Data));
      new (data()) RemotingDataStreamSender_CancelInFlightData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingDataStreamSender_CancelInFlightData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingDataStreamSender_CancelInFlightData_Params_Data>(index_);
    }
    RemotingDataStreamSender_CancelInFlightData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemotingDataStreamSender_CancelInFlightData_Params_Data();
  ~RemotingDataStreamSender_CancelInFlightData_Params_Data() = delete;
};
static_assert(sizeof(RemotingDataStreamSender_CancelInFlightData_Params_Data) == 8,
              "Bad sizeof(RemotingDataStreamSender_CancelInFlightData_Params_Data)");
class  Remoter_Start_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_Start_Params_Data));
      new (data()) Remoter_Start_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_Start_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_Start_Params_Data>(index_);
    }
    Remoter_Start_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Remoter_Start_Params_Data();
  ~Remoter_Start_Params_Data() = delete;
};
static_assert(sizeof(Remoter_Start_Params_Data) == 8,
              "Bad sizeof(Remoter_Start_Params_Data)");
class  Remoter_StartDataStreams_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_StartDataStreams_Params_Data));
      new (data()) Remoter_StartDataStreams_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_StartDataStreams_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_StartDataStreams_Params_Data>(index_);
    }
    Remoter_StartDataStreams_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data audio_pipe;
  mojo::internal::Handle_Data video_pipe;
  mojo::internal::Handle_Data audio_sender;
  mojo::internal::Handle_Data video_sender;

 private:
  Remoter_StartDataStreams_Params_Data();
  ~Remoter_StartDataStreams_Params_Data() = delete;
};
static_assert(sizeof(Remoter_StartDataStreams_Params_Data) == 24,
              "Bad sizeof(Remoter_StartDataStreams_Params_Data)");
class  Remoter_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_Stop_Params_Data));
      new (data()) Remoter_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_Stop_Params_Data>(index_);
    }
    Remoter_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  Remoter_Stop_Params_Data();
  ~Remoter_Stop_Params_Data() = delete;
};
static_assert(sizeof(Remoter_Stop_Params_Data) == 16,
              "Bad sizeof(Remoter_Stop_Params_Data)");
class  Remoter_SendMessageToSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_SendMessageToSink_Params_Data));
      new (data()) Remoter_SendMessageToSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_SendMessageToSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_SendMessageToSink_Params_Data>(index_);
    }
    Remoter_SendMessageToSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> message;

 private:
  Remoter_SendMessageToSink_Params_Data();
  ~Remoter_SendMessageToSink_Params_Data() = delete;
};
static_assert(sizeof(Remoter_SendMessageToSink_Params_Data) == 16,
              "Bad sizeof(Remoter_SendMessageToSink_Params_Data)");
class  Remoter_EstimateTransmissionCapacity_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_EstimateTransmissionCapacity_Params_Data));
      new (data()) Remoter_EstimateTransmissionCapacity_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_EstimateTransmissionCapacity_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_EstimateTransmissionCapacity_Params_Data>(index_);
    }
    Remoter_EstimateTransmissionCapacity_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Remoter_EstimateTransmissionCapacity_Params_Data();
  ~Remoter_EstimateTransmissionCapacity_Params_Data() = delete;
};
static_assert(sizeof(Remoter_EstimateTransmissionCapacity_Params_Data) == 8,
              "Bad sizeof(Remoter_EstimateTransmissionCapacity_Params_Data)");
class  Remoter_EstimateTransmissionCapacity_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Remoter_EstimateTransmissionCapacity_ResponseParams_Data));
      new (data()) Remoter_EstimateTransmissionCapacity_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Remoter_EstimateTransmissionCapacity_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Remoter_EstimateTransmissionCapacity_ResponseParams_Data>(index_);
    }
    Remoter_EstimateTransmissionCapacity_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double rate;

 private:
  Remoter_EstimateTransmissionCapacity_ResponseParams_Data();
  ~Remoter_EstimateTransmissionCapacity_ResponseParams_Data() = delete;
};
static_assert(sizeof(Remoter_EstimateTransmissionCapacity_ResponseParams_Data) == 16,
              "Bad sizeof(Remoter_EstimateTransmissionCapacity_ResponseParams_Data)");
class  RemotingSource_OnSinkAvailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnSinkAvailable_Params_Data));
      new (data()) RemotingSource_OnSinkAvailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnSinkAvailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnSinkAvailable_Params_Data>(index_);
    }
    RemotingSource_OnSinkAvailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::RemotingSinkMetadata_Data> metadata;

 private:
  RemotingSource_OnSinkAvailable_Params_Data();
  ~RemotingSource_OnSinkAvailable_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnSinkAvailable_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnSinkAvailable_Params_Data)");
class  RemotingSource_OnSinkGone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnSinkGone_Params_Data));
      new (data()) RemotingSource_OnSinkGone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnSinkGone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnSinkGone_Params_Data>(index_);
    }
    RemotingSource_OnSinkGone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemotingSource_OnSinkGone_Params_Data();
  ~RemotingSource_OnSinkGone_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnSinkGone_Params_Data) == 8,
              "Bad sizeof(RemotingSource_OnSinkGone_Params_Data)");
class  RemotingSource_OnStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnStarted_Params_Data));
      new (data()) RemotingSource_OnStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnStarted_Params_Data>(index_);
    }
    RemotingSource_OnStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RemotingSource_OnStarted_Params_Data();
  ~RemotingSource_OnStarted_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnStarted_Params_Data) == 8,
              "Bad sizeof(RemotingSource_OnStarted_Params_Data)");
class  RemotingSource_OnStartFailed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnStartFailed_Params_Data));
      new (data()) RemotingSource_OnStartFailed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnStartFailed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnStartFailed_Params_Data>(index_);
    }
    RemotingSource_OnStartFailed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  RemotingSource_OnStartFailed_Params_Data();
  ~RemotingSource_OnStartFailed_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnStartFailed_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnStartFailed_Params_Data)");
class  RemotingSource_OnMessageFromSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnMessageFromSink_Params_Data));
      new (data()) RemotingSource_OnMessageFromSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnMessageFromSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnMessageFromSink_Params_Data>(index_);
    }
    RemotingSource_OnMessageFromSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> message;

 private:
  RemotingSource_OnMessageFromSink_Params_Data();
  ~RemotingSource_OnMessageFromSink_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnMessageFromSink_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnMessageFromSink_Params_Data)");
class  RemotingSource_OnStopped_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingSource_OnStopped_Params_Data));
      new (data()) RemotingSource_OnStopped_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingSource_OnStopped_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingSource_OnStopped_Params_Data>(index_);
    }
    RemotingSource_OnStopped_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  RemotingSource_OnStopped_Params_Data();
  ~RemotingSource_OnStopped_Params_Data() = delete;
};
static_assert(sizeof(RemotingSource_OnStopped_Params_Data) == 16,
              "Bad sizeof(RemotingSource_OnStopped_Params_Data)");

}  // namespace internal
class RemoterFactory_Create_ParamsDataView {
 public:
  RemoterFactory_Create_ParamsDataView() {}

  RemoterFactory_Create_ParamsDataView(
      internal::RemoterFactory_Create_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSource() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemotingSourcePtrDataView>(
            &data_->source, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRemoter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemoterRequestDataView>(
            &data_->remoter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RemoterFactory_Create_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingDataStreamSender_SendFrame_ParamsDataView {
 public:
  RemotingDataStreamSender_SendFrame_ParamsDataView() {}

  RemotingDataStreamSender_SendFrame_ParamsDataView(
      internal::RemotingDataStreamSender_SendFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t frame_size() const {
    return data_->frame_size;
  }
 private:
  internal::RemotingDataStreamSender_SendFrame_Params_Data* data_ = nullptr;
};

class RemotingDataStreamSender_CancelInFlightData_ParamsDataView {
 public:
  RemotingDataStreamSender_CancelInFlightData_ParamsDataView() {}

  RemotingDataStreamSender_CancelInFlightData_ParamsDataView(
      internal::RemotingDataStreamSender_CancelInFlightData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemotingDataStreamSender_CancelInFlightData_Params_Data* data_ = nullptr;
};

class Remoter_Start_ParamsDataView {
 public:
  Remoter_Start_ParamsDataView() {}

  Remoter_Start_ParamsDataView(
      internal::Remoter_Start_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Remoter_Start_Params_Data* data_ = nullptr;
};

class Remoter_StartDataStreams_ParamsDataView {
 public:
  Remoter_StartDataStreams_ParamsDataView() {}

  Remoter_StartDataStreams_ParamsDataView(
      internal::Remoter_StartDataStreams_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeAudioPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->audio_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeVideoPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->video_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeAudioSender() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemotingDataStreamSenderRequestDataView>(
            &data_->audio_sender, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeVideoSender() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RemotingDataStreamSenderRequestDataView>(
            &data_->video_sender, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Remoter_StartDataStreams_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Remoter_Stop_ParamsDataView {
 public:
  Remoter_Stop_ParamsDataView() {}

  Remoter_Stop_ParamsDataView(
      internal::Remoter_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::RemotingStopReason>(
        data_value, output);
  }

  ::media::mojom::RemotingStopReason reason() const {
    return static_cast<::media::mojom::RemotingStopReason>(data_->reason);
  }
 private:
  internal::Remoter_Stop_Params_Data* data_ = nullptr;
};

class Remoter_SendMessageToSink_ParamsDataView {
 public:
  Remoter_SendMessageToSink_ParamsDataView() {}

  Remoter_SendMessageToSink_ParamsDataView(
      internal::Remoter_SendMessageToSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::Remoter_SendMessageToSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Remoter_EstimateTransmissionCapacity_ParamsDataView {
 public:
  Remoter_EstimateTransmissionCapacity_ParamsDataView() {}

  Remoter_EstimateTransmissionCapacity_ParamsDataView(
      internal::Remoter_EstimateTransmissionCapacity_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Remoter_EstimateTransmissionCapacity_Params_Data* data_ = nullptr;
};

class Remoter_EstimateTransmissionCapacity_ResponseParamsDataView {
 public:
  Remoter_EstimateTransmissionCapacity_ResponseParamsDataView() {}

  Remoter_EstimateTransmissionCapacity_ResponseParamsDataView(
      internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double rate() const {
    return data_->rate;
  }
 private:
  internal::Remoter_EstimateTransmissionCapacity_ResponseParams_Data* data_ = nullptr;
};

class RemotingSource_OnSinkAvailable_ParamsDataView {
 public:
  RemotingSource_OnSinkAvailable_ParamsDataView() {}

  RemotingSource_OnSinkAvailable_ParamsDataView(
      internal::RemotingSource_OnSinkAvailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::media::mojom::RemotingSinkMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::media::mojom::RemotingSinkMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemotingSource_OnSinkAvailable_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingSource_OnSinkGone_ParamsDataView {
 public:
  RemotingSource_OnSinkGone_ParamsDataView() {}

  RemotingSource_OnSinkGone_ParamsDataView(
      internal::RemotingSource_OnSinkGone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemotingSource_OnSinkGone_Params_Data* data_ = nullptr;
};

class RemotingSource_OnStarted_ParamsDataView {
 public:
  RemotingSource_OnStarted_ParamsDataView() {}

  RemotingSource_OnStarted_ParamsDataView(
      internal::RemotingSource_OnStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RemotingSource_OnStarted_Params_Data* data_ = nullptr;
};

class RemotingSource_OnStartFailed_ParamsDataView {
 public:
  RemotingSource_OnStartFailed_ParamsDataView() {}

  RemotingSource_OnStartFailed_ParamsDataView(
      internal::RemotingSource_OnStartFailed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::RemotingStartFailReason>(
        data_value, output);
  }

  ::media::mojom::RemotingStartFailReason reason() const {
    return static_cast<::media::mojom::RemotingStartFailReason>(data_->reason);
  }
 private:
  internal::RemotingSource_OnStartFailed_Params_Data* data_ = nullptr;
};

class RemotingSource_OnMessageFromSink_ParamsDataView {
 public:
  RemotingSource_OnMessageFromSink_ParamsDataView() {}

  RemotingSource_OnMessageFromSink_ParamsDataView(
      internal::RemotingSource_OnMessageFromSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::RemotingSource_OnMessageFromSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingSource_OnStopped_ParamsDataView {
 public:
  RemotingSource_OnStopped_ParamsDataView() {}

  RemotingSource_OnStopped_ParamsDataView(
      internal::RemotingSource_OnStopped_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::RemotingStopReason>(
        data_value, output);
  }

  ::media::mojom::RemotingStopReason reason() const {
    return static_cast<::media::mojom::RemotingStopReason>(data_->reason);
  }
 private:
  internal::RemotingSource_OnStopped_Params_Data* data_ = nullptr;
};














inline void Remoter_SendMessageToSink_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void RemotingSource_OnSinkAvailable_ParamsDataView::GetMetadataDataView(
    ::media::mojom::RemotingSinkMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::media::mojom::RemotingSinkMetadataDataView(pointer, context_);
}








inline void RemotingSource_OnMessageFromSink_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_PARAMS_DATA_H_