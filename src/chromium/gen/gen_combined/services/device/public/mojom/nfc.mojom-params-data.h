// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_PARAMS_DATA_H_

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
namespace device {
namespace mojom {
namespace internal {
class  NFC_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_SetClient_Params_Data));
      new (data()) NFC_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_SetClient_Params_Data>(index_);
    }
    NFC_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  NFC_SetClient_Params_Data();
  ~NFC_SetClient_Params_Data() = delete;
};
static_assert(sizeof(NFC_SetClient_Params_Data) == 16,
              "Bad sizeof(NFC_SetClient_Params_Data)");
class  NFC_Push_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Push_Params_Data));
      new (data()) NFC_Push_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Push_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Push_Params_Data>(index_);
    }
    NFC_Push_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NDEFMessage_Data> message;
  mojo::internal::Pointer<internal::NFCPushOptions_Data> options;

 private:
  NFC_Push_Params_Data();
  ~NFC_Push_Params_Data() = delete;
};
static_assert(sizeof(NFC_Push_Params_Data) == 24,
              "Bad sizeof(NFC_Push_Params_Data)");
class  NFC_Push_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Push_ResponseParams_Data));
      new (data()) NFC_Push_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Push_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Push_ResponseParams_Data>(index_);
    }
    NFC_Push_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_Push_ResponseParams_Data();
  ~NFC_Push_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_Push_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_Push_ResponseParams_Data)");
class  NFC_CancelPush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelPush_Params_Data));
      new (data()) NFC_CancelPush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelPush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelPush_Params_Data>(index_);
    }
    NFC_CancelPush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t target;
  uint8_t padfinal_[4];

 private:
  NFC_CancelPush_Params_Data();
  ~NFC_CancelPush_Params_Data() = delete;
};
static_assert(sizeof(NFC_CancelPush_Params_Data) == 16,
              "Bad sizeof(NFC_CancelPush_Params_Data)");
class  NFC_CancelPush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelPush_ResponseParams_Data));
      new (data()) NFC_CancelPush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelPush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelPush_ResponseParams_Data>(index_);
    }
    NFC_CancelPush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_CancelPush_ResponseParams_Data();
  ~NFC_CancelPush_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_CancelPush_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_CancelPush_ResponseParams_Data)");
class  NFC_Watch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Watch_Params_Data));
      new (data()) NFC_Watch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Watch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Watch_Params_Data>(index_);
    }
    NFC_Watch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCWatchOptions_Data> options;

 private:
  NFC_Watch_Params_Data();
  ~NFC_Watch_Params_Data() = delete;
};
static_assert(sizeof(NFC_Watch_Params_Data) == 16,
              "Bad sizeof(NFC_Watch_Params_Data)");
class  NFC_Watch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_Watch_ResponseParams_Data));
      new (data()) NFC_Watch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_Watch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_Watch_ResponseParams_Data>(index_);
    }
    NFC_Watch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_Watch_ResponseParams_Data();
  ~NFC_Watch_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_Watch_ResponseParams_Data) == 24,
              "Bad sizeof(NFC_Watch_ResponseParams_Data)");
class  NFC_CancelWatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelWatch_Params_Data));
      new (data()) NFC_CancelWatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelWatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelWatch_Params_Data>(index_);
    }
    NFC_CancelWatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  NFC_CancelWatch_Params_Data();
  ~NFC_CancelWatch_Params_Data() = delete;
};
static_assert(sizeof(NFC_CancelWatch_Params_Data) == 16,
              "Bad sizeof(NFC_CancelWatch_Params_Data)");
class  NFC_CancelWatch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelWatch_ResponseParams_Data));
      new (data()) NFC_CancelWatch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelWatch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelWatch_ResponseParams_Data>(index_);
    }
    NFC_CancelWatch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_CancelWatch_ResponseParams_Data();
  ~NFC_CancelWatch_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_CancelWatch_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_CancelWatch_ResponseParams_Data)");
class  NFC_CancelAllWatches_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelAllWatches_Params_Data));
      new (data()) NFC_CancelAllWatches_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelAllWatches_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelAllWatches_Params_Data>(index_);
    }
    NFC_CancelAllWatches_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NFC_CancelAllWatches_Params_Data();
  ~NFC_CancelAllWatches_Params_Data() = delete;
};
static_assert(sizeof(NFC_CancelAllWatches_Params_Data) == 8,
              "Bad sizeof(NFC_CancelAllWatches_Params_Data)");
class  NFC_CancelAllWatches_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_CancelAllWatches_ResponseParams_Data));
      new (data()) NFC_CancelAllWatches_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_CancelAllWatches_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_CancelAllWatches_ResponseParams_Data>(index_);
    }
    NFC_CancelAllWatches_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::NFCError_Data> error;

 private:
  NFC_CancelAllWatches_ResponseParams_Data();
  ~NFC_CancelAllWatches_ResponseParams_Data() = delete;
};
static_assert(sizeof(NFC_CancelAllWatches_ResponseParams_Data) == 16,
              "Bad sizeof(NFC_CancelAllWatches_ResponseParams_Data)");
class  NFC_SuspendNFCOperations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_SuspendNFCOperations_Params_Data));
      new (data()) NFC_SuspendNFCOperations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_SuspendNFCOperations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_SuspendNFCOperations_Params_Data>(index_);
    }
    NFC_SuspendNFCOperations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NFC_SuspendNFCOperations_Params_Data();
  ~NFC_SuspendNFCOperations_Params_Data() = delete;
};
static_assert(sizeof(NFC_SuspendNFCOperations_Params_Data) == 8,
              "Bad sizeof(NFC_SuspendNFCOperations_Params_Data)");
class  NFC_ResumeNFCOperations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFC_ResumeNFCOperations_Params_Data));
      new (data()) NFC_ResumeNFCOperations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFC_ResumeNFCOperations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFC_ResumeNFCOperations_Params_Data>(index_);
    }
    NFC_ResumeNFCOperations_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NFC_ResumeNFCOperations_Params_Data();
  ~NFC_ResumeNFCOperations_Params_Data() = delete;
};
static_assert(sizeof(NFC_ResumeNFCOperations_Params_Data) == 8,
              "Bad sizeof(NFC_ResumeNFCOperations_Params_Data)");
class  NFCClient_OnWatch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCClient_OnWatch_Params_Data));
      new (data()) NFCClient_OnWatch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCClient_OnWatch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCClient_OnWatch_Params_Data>(index_);
    }
    NFCClient_OnWatch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> watch_ids;
  mojo::internal::Pointer<internal::NDEFMessage_Data> message;

 private:
  NFCClient_OnWatch_Params_Data();
  ~NFCClient_OnWatch_Params_Data() = delete;
};
static_assert(sizeof(NFCClient_OnWatch_Params_Data) == 24,
              "Bad sizeof(NFCClient_OnWatch_Params_Data)");

}  // namespace internal
class NFC_SetClient_ParamsDataView {
 public:
  NFC_SetClient_ParamsDataView() {}

  NFC_SetClient_ParamsDataView(
      internal::NFC_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::NFCClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NFC_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_Push_ParamsDataView {
 public:
  NFC_Push_ParamsDataView() {}

  NFC_Push_ParamsDataView(
      internal::NFC_Push_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      NDEFMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::device::mojom::NDEFMessageDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      NFCPushOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCPushOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Push_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_Push_ResponseParamsDataView {
 public:
  NFC_Push_ResponseParamsDataView() {}

  NFC_Push_ResponseParamsDataView(
      internal::NFC_Push_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Push_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_CancelPush_ParamsDataView {
 public:
  NFC_CancelPush_ParamsDataView() {}

  NFC_CancelPush_ParamsDataView(
      internal::NFC_CancelPush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) const {
    auto data_value = data_->target;
    return mojo::internal::Deserialize<::device::mojom::NFCPushTarget>(
        data_value, output);
  }

  NFCPushTarget target() const {
    return static_cast<NFCPushTarget>(data_->target);
  }
 private:
  internal::NFC_CancelPush_Params_Data* data_ = nullptr;
};

class NFC_CancelPush_ResponseParamsDataView {
 public:
  NFC_CancelPush_ResponseParamsDataView() {}

  NFC_CancelPush_ResponseParamsDataView(
      internal::NFC_CancelPush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_CancelPush_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_Watch_ParamsDataView {
 public:
  NFC_Watch_ParamsDataView() {}

  NFC_Watch_ParamsDataView(
      internal::NFC_Watch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      NFCWatchOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCWatchOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Watch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_Watch_ResponseParamsDataView {
 public:
  NFC_Watch_ResponseParamsDataView() {}

  NFC_Watch_ResponseParamsDataView(
      internal::NFC_Watch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_Watch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_CancelWatch_ParamsDataView {
 public:
  NFC_CancelWatch_ParamsDataView() {}

  NFC_CancelWatch_ParamsDataView(
      internal::NFC_CancelWatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
 private:
  internal::NFC_CancelWatch_Params_Data* data_ = nullptr;
};

class NFC_CancelWatch_ResponseParamsDataView {
 public:
  NFC_CancelWatch_ResponseParamsDataView() {}

  NFC_CancelWatch_ResponseParamsDataView(
      internal::NFC_CancelWatch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_CancelWatch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_CancelAllWatches_ParamsDataView {
 public:
  NFC_CancelAllWatches_ParamsDataView() {}

  NFC_CancelAllWatches_ParamsDataView(
      internal::NFC_CancelAllWatches_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NFC_CancelAllWatches_Params_Data* data_ = nullptr;
};

class NFC_CancelAllWatches_ResponseParamsDataView {
 public:
  NFC_CancelAllWatches_ResponseParamsDataView() {}

  NFC_CancelAllWatches_ResponseParamsDataView(
      internal::NFC_CancelAllWatches_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      NFCErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<::device::mojom::NFCErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFC_CancelAllWatches_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFC_SuspendNFCOperations_ParamsDataView {
 public:
  NFC_SuspendNFCOperations_ParamsDataView() {}

  NFC_SuspendNFCOperations_ParamsDataView(
      internal::NFC_SuspendNFCOperations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NFC_SuspendNFCOperations_Params_Data* data_ = nullptr;
};

class NFC_ResumeNFCOperations_ParamsDataView {
 public:
  NFC_ResumeNFCOperations_ParamsDataView() {}

  NFC_ResumeNFCOperations_ParamsDataView(
      internal::NFC_ResumeNFCOperations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NFC_ResumeNFCOperations_Params_Data* data_ = nullptr;
};

class NFCClient_OnWatch_ParamsDataView {
 public:
  NFCClient_OnWatch_ParamsDataView() {}

  NFCClient_OnWatch_ParamsDataView(
      internal::NFCClient_OnWatch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetWatchIdsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWatchIds(UserType* output) {
    auto* pointer = data_->watch_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
  inline void GetMessageDataView(
      NDEFMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::device::mojom::NDEFMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::NFCClient_OnWatch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void NFC_Push_ParamsDataView::GetMessageDataView(
    NDEFMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = NDEFMessageDataView(pointer, context_);
}
inline void NFC_Push_ParamsDataView::GetOptionsDataView(
    NFCPushOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = NFCPushOptionsDataView(pointer, context_);
}


inline void NFC_Push_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}




inline void NFC_CancelPush_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}


inline void NFC_Watch_ParamsDataView::GetOptionsDataView(
    NFCWatchOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = NFCWatchOptionsDataView(pointer, context_);
}


inline void NFC_Watch_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}




inline void NFC_CancelWatch_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}




inline void NFC_CancelAllWatches_ResponseParamsDataView::GetErrorDataView(
    NFCErrorDataView* output) {
  auto pointer = data_->error.Get();
  *output = NFCErrorDataView(pointer, context_);
}






inline void NFCClient_OnWatch_ParamsDataView::GetWatchIdsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->watch_ids.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}
inline void NFCClient_OnWatch_ParamsDataView::GetMessageDataView(
    NDEFMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = NDEFMessageDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_PARAMS_DATA_H_