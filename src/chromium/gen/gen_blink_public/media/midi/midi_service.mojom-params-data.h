// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_PARAMS_DATA_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_PARAMS_DATA_H_

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
namespace midi {
namespace mojom {
namespace internal {
class  MidiSessionClient_AddInputPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_AddInputPort_Params_Data));
      new (data()) MidiSessionClient_AddInputPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_AddInputPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_AddInputPort_Params_Data>(index_);
    }
    MidiSessionClient_AddInputPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PortInfo_Data> info;

 private:
  MidiSessionClient_AddInputPort_Params_Data();
  ~MidiSessionClient_AddInputPort_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_AddInputPort_Params_Data) == 16,
              "Bad sizeof(MidiSessionClient_AddInputPort_Params_Data)");
class  MidiSessionClient_AddOutputPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_AddOutputPort_Params_Data));
      new (data()) MidiSessionClient_AddOutputPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_AddOutputPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_AddOutputPort_Params_Data>(index_);
    }
    MidiSessionClient_AddOutputPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PortInfo_Data> info;

 private:
  MidiSessionClient_AddOutputPort_Params_Data();
  ~MidiSessionClient_AddOutputPort_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_AddOutputPort_Params_Data) == 16,
              "Bad sizeof(MidiSessionClient_AddOutputPort_Params_Data)");
class  MidiSessionClient_SetInputPortState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_SetInputPortState_Params_Data));
      new (data()) MidiSessionClient_SetInputPortState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_SetInputPortState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_SetInputPortState_Params_Data>(index_);
    }
    MidiSessionClient_SetInputPortState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t port;
  int32_t state;

 private:
  MidiSessionClient_SetInputPortState_Params_Data();
  ~MidiSessionClient_SetInputPortState_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_SetInputPortState_Params_Data) == 16,
              "Bad sizeof(MidiSessionClient_SetInputPortState_Params_Data)");
class  MidiSessionClient_SetOutputPortState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_SetOutputPortState_Params_Data));
      new (data()) MidiSessionClient_SetOutputPortState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_SetOutputPortState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_SetOutputPortState_Params_Data>(index_);
    }
    MidiSessionClient_SetOutputPortState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t port;
  int32_t state;

 private:
  MidiSessionClient_SetOutputPortState_Params_Data();
  ~MidiSessionClient_SetOutputPortState_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_SetOutputPortState_Params_Data) == 16,
              "Bad sizeof(MidiSessionClient_SetOutputPortState_Params_Data)");
class  MidiSessionClient_SessionStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_SessionStarted_Params_Data));
      new (data()) MidiSessionClient_SessionStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_SessionStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_SessionStarted_Params_Data>(index_);
    }
    MidiSessionClient_SessionStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  MidiSessionClient_SessionStarted_Params_Data();
  ~MidiSessionClient_SessionStarted_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_SessionStarted_Params_Data) == 16,
              "Bad sizeof(MidiSessionClient_SessionStarted_Params_Data)");
class  MidiSessionClient_AcknowledgeSentData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_AcknowledgeSentData_Params_Data));
      new (data()) MidiSessionClient_AcknowledgeSentData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_AcknowledgeSentData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_AcknowledgeSentData_Params_Data>(index_);
    }
    MidiSessionClient_AcknowledgeSentData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bytes;
  uint8_t padfinal_[4];

 private:
  MidiSessionClient_AcknowledgeSentData_Params_Data();
  ~MidiSessionClient_AcknowledgeSentData_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_AcknowledgeSentData_Params_Data) == 16,
              "Bad sizeof(MidiSessionClient_AcknowledgeSentData_Params_Data)");
class  MidiSessionClient_DataReceived_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionClient_DataReceived_Params_Data));
      new (data()) MidiSessionClient_DataReceived_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionClient_DataReceived_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionClient_DataReceived_Params_Data>(index_);
    }
    MidiSessionClient_DataReceived_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t port;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  MidiSessionClient_DataReceived_Params_Data();
  ~MidiSessionClient_DataReceived_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionClient_DataReceived_Params_Data) == 32,
              "Bad sizeof(MidiSessionClient_DataReceived_Params_Data)");
class  MidiSessionProvider_StartSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSessionProvider_StartSession_Params_Data));
      new (data()) MidiSessionProvider_StartSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSessionProvider_StartSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSessionProvider_StartSession_Params_Data>(index_);
    }
    MidiSessionProvider_StartSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  MidiSessionProvider_StartSession_Params_Data();
  ~MidiSessionProvider_StartSession_Params_Data() = delete;
};
static_assert(sizeof(MidiSessionProvider_StartSession_Params_Data) == 24,
              "Bad sizeof(MidiSessionProvider_StartSession_Params_Data)");
class  MidiSession_SendData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiSession_SendData_Params_Data));
      new (data()) MidiSession_SendData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiSession_SendData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiSession_SendData_Params_Data>(index_);
    }
    MidiSession_SendData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t port;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  MidiSession_SendData_Params_Data();
  ~MidiSession_SendData_Params_Data() = delete;
};
static_assert(sizeof(MidiSession_SendData_Params_Data) == 32,
              "Bad sizeof(MidiSession_SendData_Params_Data)");

}  // namespace internal
class MidiSessionClient_AddInputPort_ParamsDataView {
 public:
  MidiSessionClient_AddInputPort_ParamsDataView() {}

  MidiSessionClient_AddInputPort_ParamsDataView(
      internal::MidiSessionClient_AddInputPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      PortInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::midi::mojom::PortInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MidiSessionClient_AddInputPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MidiSessionClient_AddOutputPort_ParamsDataView {
 public:
  MidiSessionClient_AddOutputPort_ParamsDataView() {}

  MidiSessionClient_AddOutputPort_ParamsDataView(
      internal::MidiSessionClient_AddOutputPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      PortInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::midi::mojom::PortInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MidiSessionClient_AddOutputPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MidiSessionClient_SetInputPortState_ParamsDataView {
 public:
  MidiSessionClient_SetInputPortState_ParamsDataView() {}

  MidiSessionClient_SetInputPortState_ParamsDataView(
      internal::MidiSessionClient_SetInputPortState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t port() const {
    return data_->port;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::midi::mojom::PortState>(
        data_value, output);
  }

  PortState state() const {
    return static_cast<PortState>(data_->state);
  }
 private:
  internal::MidiSessionClient_SetInputPortState_Params_Data* data_ = nullptr;
};

class MidiSessionClient_SetOutputPortState_ParamsDataView {
 public:
  MidiSessionClient_SetOutputPortState_ParamsDataView() {}

  MidiSessionClient_SetOutputPortState_ParamsDataView(
      internal::MidiSessionClient_SetOutputPortState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t port() const {
    return data_->port;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::midi::mojom::PortState>(
        data_value, output);
  }

  PortState state() const {
    return static_cast<PortState>(data_->state);
  }
 private:
  internal::MidiSessionClient_SetOutputPortState_Params_Data* data_ = nullptr;
};

class MidiSessionClient_SessionStarted_ParamsDataView {
 public:
  MidiSessionClient_SessionStarted_ParamsDataView() {}

  MidiSessionClient_SessionStarted_ParamsDataView(
      internal::MidiSessionClient_SessionStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::midi::mojom::Result>(
        data_value, output);
  }

  Result result() const {
    return static_cast<Result>(data_->result);
  }
 private:
  internal::MidiSessionClient_SessionStarted_Params_Data* data_ = nullptr;
};

class MidiSessionClient_AcknowledgeSentData_ParamsDataView {
 public:
  MidiSessionClient_AcknowledgeSentData_ParamsDataView() {}

  MidiSessionClient_AcknowledgeSentData_ParamsDataView(
      internal::MidiSessionClient_AcknowledgeSentData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bytes() const {
    return data_->bytes;
  }
 private:
  internal::MidiSessionClient_AcknowledgeSentData_Params_Data* data_ = nullptr;
};

class MidiSessionClient_DataReceived_ParamsDataView {
 public:
  MidiSessionClient_DataReceived_ParamsDataView() {}

  MidiSessionClient_DataReceived_ParamsDataView(
      internal::MidiSessionClient_DataReceived_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t port() const {
    return data_->port;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::MidiSessionClient_DataReceived_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MidiSessionProvider_StartSession_ParamsDataView {
 public:
  MidiSessionProvider_StartSession_ParamsDataView() {}

  MidiSessionProvider_StartSession_ParamsDataView(
      internal::MidiSessionProvider_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::midi::mojom::MidiSessionRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::midi::mojom::MidiSessionClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MidiSessionProvider_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MidiSession_SendData_ParamsDataView {
 public:
  MidiSession_SendData_ParamsDataView() {}

  MidiSession_SendData_ParamsDataView(
      internal::MidiSession_SendData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t port() const {
    return data_->port;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::MidiSession_SendData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void MidiSessionClient_AddInputPort_ParamsDataView::GetInfoDataView(
    PortInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = PortInfoDataView(pointer, context_);
}


inline void MidiSessionClient_AddOutputPort_ParamsDataView::GetInfoDataView(
    PortInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = PortInfoDataView(pointer, context_);
}










inline void MidiSessionClient_DataReceived_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void MidiSessionClient_DataReceived_ParamsDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}




inline void MidiSession_SendData_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void MidiSession_SendData_ParamsDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace midi

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_PARAMS_DATA_H_