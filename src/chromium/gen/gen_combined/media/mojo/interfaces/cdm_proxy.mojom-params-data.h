// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_PARAMS_DATA_H_

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
class  CdmProxy_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Initialize_Params_Data));
      new (data()) CdmProxy_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Initialize_Params_Data>(index_);
    }
    CdmProxy_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  CdmProxy_Initialize_Params_Data();
  ~CdmProxy_Initialize_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_Initialize_Params_Data) == 16,
              "Bad sizeof(CdmProxy_Initialize_Params_Data)");
class  CdmProxy_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Initialize_ResponseParams_Data));
      new (data()) CdmProxy_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Initialize_ResponseParams_Data>(index_);
    }
    CdmProxy_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  int32_t protocol;
  uint32_t crypto_session_id;
  int32_t cdm_id;

 private:
  CdmProxy_Initialize_ResponseParams_Data();
  ~CdmProxy_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_Initialize_ResponseParams_Data) == 24,
              "Bad sizeof(CdmProxy_Initialize_ResponseParams_Data)");
class  CdmProxy_Process_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Process_Params_Data));
      new (data()) CdmProxy_Process_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Process_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Process_Params_Data>(index_);
    }
    CdmProxy_Process_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t function;
  uint32_t crypto_session_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> input_data;
  uint32_t output_data_size;
  uint8_t padfinal_[4];

 private:
  CdmProxy_Process_Params_Data();
  ~CdmProxy_Process_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_Process_Params_Data) == 32,
              "Bad sizeof(CdmProxy_Process_Params_Data)");
class  CdmProxy_Process_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_Process_ResponseParams_Data));
      new (data()) CdmProxy_Process_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_Process_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_Process_ResponseParams_Data>(index_);
    }
    CdmProxy_Process_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> output_data;

 private:
  CdmProxy_Process_ResponseParams_Data();
  ~CdmProxy_Process_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_Process_ResponseParams_Data) == 24,
              "Bad sizeof(CdmProxy_Process_ResponseParams_Data)");
class  CdmProxy_CreateMediaCryptoSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_CreateMediaCryptoSession_Params_Data));
      new (data()) CdmProxy_CreateMediaCryptoSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_CreateMediaCryptoSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_CreateMediaCryptoSession_Params_Data>(index_);
    }
    CdmProxy_CreateMediaCryptoSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> input_data;

 private:
  CdmProxy_CreateMediaCryptoSession_Params_Data();
  ~CdmProxy_CreateMediaCryptoSession_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_CreateMediaCryptoSession_Params_Data) == 16,
              "Bad sizeof(CdmProxy_CreateMediaCryptoSession_Params_Data)");
class  CdmProxy_CreateMediaCryptoSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_CreateMediaCryptoSession_ResponseParams_Data));
      new (data()) CdmProxy_CreateMediaCryptoSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_CreateMediaCryptoSession_ResponseParams_Data>(index_);
    }
    CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint32_t crypto_session_id;
  uint64_t output_data;

 private:
  CdmProxy_CreateMediaCryptoSession_ResponseParams_Data();
  ~CdmProxy_CreateMediaCryptoSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_CreateMediaCryptoSession_ResponseParams_Data) == 24,
              "Bad sizeof(CdmProxy_CreateMediaCryptoSession_ResponseParams_Data)");
class  CdmProxy_SetKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_SetKey_Params_Data));
      new (data()) CdmProxy_SetKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_SetKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_SetKey_Params_Data>(index_);
    }
    CdmProxy_SetKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t crypto_session_id;
  int32_t key_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_blob;

 private:
  CdmProxy_SetKey_Params_Data();
  ~CdmProxy_SetKey_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_SetKey_Params_Data) == 32,
              "Bad sizeof(CdmProxy_SetKey_Params_Data)");
class  CdmProxy_SetKey_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_SetKey_ResponseParams_Data));
      new (data()) CdmProxy_SetKey_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_SetKey_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_SetKey_ResponseParams_Data>(index_);
    }
    CdmProxy_SetKey_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  CdmProxy_SetKey_ResponseParams_Data();
  ~CdmProxy_SetKey_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_SetKey_ResponseParams_Data) == 16,
              "Bad sizeof(CdmProxy_SetKey_ResponseParams_Data)");
class  CdmProxy_RemoveKey_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_RemoveKey_Params_Data));
      new (data()) CdmProxy_RemoveKey_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_RemoveKey_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_RemoveKey_Params_Data>(index_);
    }
    CdmProxy_RemoveKey_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t crypto_session_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> key_id;

 private:
  CdmProxy_RemoveKey_Params_Data();
  ~CdmProxy_RemoveKey_Params_Data() = delete;
};
static_assert(sizeof(CdmProxy_RemoveKey_Params_Data) == 24,
              "Bad sizeof(CdmProxy_RemoveKey_Params_Data)");
class  CdmProxy_RemoveKey_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxy_RemoveKey_ResponseParams_Data));
      new (data()) CdmProxy_RemoveKey_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxy_RemoveKey_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxy_RemoveKey_ResponseParams_Data>(index_);
    }
    CdmProxy_RemoveKey_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  CdmProxy_RemoveKey_ResponseParams_Data();
  ~CdmProxy_RemoveKey_ResponseParams_Data() = delete;
};
static_assert(sizeof(CdmProxy_RemoveKey_ResponseParams_Data) == 16,
              "Bad sizeof(CdmProxy_RemoveKey_ResponseParams_Data)");
class  CdmProxyClient_NotifyHardwareReset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmProxyClient_NotifyHardwareReset_Params_Data));
      new (data()) CdmProxyClient_NotifyHardwareReset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmProxyClient_NotifyHardwareReset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmProxyClient_NotifyHardwareReset_Params_Data>(index_);
    }
    CdmProxyClient_NotifyHardwareReset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CdmProxyClient_NotifyHardwareReset_Params_Data();
  ~CdmProxyClient_NotifyHardwareReset_Params_Data() = delete;
};
static_assert(sizeof(CdmProxyClient_NotifyHardwareReset_Params_Data) == 8,
              "Bad sizeof(CdmProxyClient_NotifyHardwareReset_Params_Data)");

}  // namespace internal
class CdmProxy_Initialize_ParamsDataView {
 public:
  CdmProxy_Initialize_ParamsDataView() {}

  CdmProxy_Initialize_ParamsDataView(
      internal::CdmProxy_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::CdmProxyClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmProxy_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_Initialize_ResponseParamsDataView {
 public:
  CdmProxy_Initialize_ResponseParamsDataView() {}

  CdmProxy_Initialize_ResponseParamsDataView(
      internal::CdmProxy_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtocol(UserType* output) const {
    auto data_value = data_->protocol;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Protocol>(
        data_value, output);
  }

  CdmProxy_Protocol protocol() const {
    return static_cast<CdmProxy_Protocol>(data_->protocol);
  }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::CdmProxy_Initialize_ResponseParams_Data* data_ = nullptr;
};

class CdmProxy_Process_ParamsDataView {
 public:
  CdmProxy_Process_ParamsDataView() {}

  CdmProxy_Process_ParamsDataView(
      internal::CdmProxy_Process_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFunction(UserType* output) const {
    auto data_value = data_->function;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Function>(
        data_value, output);
  }

  CdmProxy_Function function() const {
    return static_cast<CdmProxy_Function>(data_->function);
  }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  inline void GetInputDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputData(UserType* output) {
    auto* pointer = data_->input_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t output_data_size() const {
    return data_->output_data_size;
  }
 private:
  internal::CdmProxy_Process_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_Process_ResponseParamsDataView {
 public:
  CdmProxy_Process_ResponseParamsDataView() {}

  CdmProxy_Process_ResponseParamsDataView(
      internal::CdmProxy_Process_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
  inline void GetOutputDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOutputData(UserType* output) {
    auto* pointer = data_->output_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_Process_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_CreateMediaCryptoSession_ParamsDataView {
 public:
  CdmProxy_CreateMediaCryptoSession_ParamsDataView() {}

  CdmProxy_CreateMediaCryptoSession_ParamsDataView(
      internal::CdmProxy_CreateMediaCryptoSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInputDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInputData(UserType* output) {
    auto* pointer = data_->input_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_CreateMediaCryptoSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView {
 public:
  CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView() {}

  CdmProxy_CreateMediaCryptoSession_ResponseParamsDataView(
      internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  uint64_t output_data() const {
    return data_->output_data;
  }
 private:
  internal::CdmProxy_CreateMediaCryptoSession_ResponseParams_Data* data_ = nullptr;
};

class CdmProxy_SetKey_ParamsDataView {
 public:
  CdmProxy_SetKey_ParamsDataView() {}

  CdmProxy_SetKey_ParamsDataView(
      internal::CdmProxy_SetKey_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyType(UserType* output) const {
    auto data_value = data_->key_type;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_KeyType>(
        data_value, output);
  }

  CdmProxy_KeyType key_type() const {
    return static_cast<CdmProxy_KeyType>(data_->key_type);
  }
  inline void GetKeyBlobDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyBlob(UserType* output) {
    auto* pointer = data_->key_blob.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_SetKey_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_SetKey_ResponseParamsDataView {
 public:
  CdmProxy_SetKey_ResponseParamsDataView() {}

  CdmProxy_SetKey_ResponseParamsDataView(
      internal::CdmProxy_SetKey_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
 private:
  internal::CdmProxy_SetKey_ResponseParams_Data* data_ = nullptr;
};

class CdmProxy_RemoveKey_ParamsDataView {
 public:
  CdmProxy_RemoveKey_ParamsDataView() {}

  CdmProxy_RemoveKey_ParamsDataView(
      internal::CdmProxy_RemoveKey_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t crypto_session_id() const {
    return data_->crypto_session_id;
  }
  inline void GetKeyIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyId(UserType* output) {
    auto* pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::CdmProxy_RemoveKey_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmProxy_RemoveKey_ResponseParamsDataView {
 public:
  CdmProxy_RemoveKey_ResponseParamsDataView() {}

  CdmProxy_RemoveKey_ResponseParamsDataView(
      internal::CdmProxy_RemoveKey_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::CdmProxy_Status>(
        data_value, output);
  }

  CdmProxy_Status status() const {
    return static_cast<CdmProxy_Status>(data_->status);
  }
 private:
  internal::CdmProxy_RemoveKey_ResponseParams_Data* data_ = nullptr;
};

class CdmProxyClient_NotifyHardwareReset_ParamsDataView {
 public:
  CdmProxyClient_NotifyHardwareReset_ParamsDataView() {}

  CdmProxyClient_NotifyHardwareReset_ParamsDataView(
      internal::CdmProxyClient_NotifyHardwareReset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CdmProxyClient_NotifyHardwareReset_Params_Data* data_ = nullptr;
};






inline void CdmProxy_Process_ParamsDataView::GetInputDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->input_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CdmProxy_Process_ResponseParamsDataView::GetOutputDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->output_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void CdmProxy_CreateMediaCryptoSession_ParamsDataView::GetInputDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->input_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void CdmProxy_SetKey_ParamsDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void CdmProxy_SetKey_ParamsDataView::GetKeyBlobDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_blob.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void CdmProxy_RemoveKey_ParamsDataView::GetKeyIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_PARAMS_DATA_H_