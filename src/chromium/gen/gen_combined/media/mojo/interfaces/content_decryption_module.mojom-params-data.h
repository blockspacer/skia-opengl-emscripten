// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_PARAMS_DATA_H_

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
class  ContentDecryptionModule_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_SetClient_Params_Data));
      new (data()) ContentDecryptionModule_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_SetClient_Params_Data>(index_);
    }
    ContentDecryptionModule_SetClient_Params_Data* operator->() { return data(); }

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
  ContentDecryptionModule_SetClient_Params_Data();
  ~ContentDecryptionModule_SetClient_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_SetClient_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_SetClient_Params_Data)");
class  ContentDecryptionModule_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_Initialize_Params_Data));
      new (data()) ContentDecryptionModule_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_Initialize_Params_Data>(index_);
    }
    ContentDecryptionModule_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> security_origin;
  mojo::internal::Pointer<internal::CdmConfig_Data> cdm_config;

 private:
  ContentDecryptionModule_Initialize_Params_Data();
  ~ContentDecryptionModule_Initialize_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_Initialize_Params_Data) == 32,
              "Bad sizeof(ContentDecryptionModule_Initialize_Params_Data)");
class  ContentDecryptionModule_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_Initialize_ResponseParams_Data));
      new (data()) ContentDecryptionModule_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_Initialize_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  int32_t cdm_id;
  mojo::internal::Interface_Data decryptor;
  uint8_t padfinal_[4];

 private:
  ContentDecryptionModule_Initialize_ResponseParams_Data();
  ~ContentDecryptionModule_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_Initialize_ResponseParams_Data) == 32,
              "Bad sizeof(ContentDecryptionModule_Initialize_ResponseParams_Data)");
class  ContentDecryptionModule_SetServerCertificate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_SetServerCertificate_Params_Data));
      new (data()) ContentDecryptionModule_SetServerCertificate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_SetServerCertificate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_SetServerCertificate_Params_Data>(index_);
    }
    ContentDecryptionModule_SetServerCertificate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> certificate_data;

 private:
  ContentDecryptionModule_SetServerCertificate_Params_Data();
  ~ContentDecryptionModule_SetServerCertificate_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_SetServerCertificate_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_SetServerCertificate_Params_Data)");
class  ContentDecryptionModule_SetServerCertificate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_SetServerCertificate_ResponseParams_Data));
      new (data()) ContentDecryptionModule_SetServerCertificate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_SetServerCertificate_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_SetServerCertificate_ResponseParams_Data();
  ~ContentDecryptionModule_SetServerCertificate_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_SetServerCertificate_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_SetServerCertificate_ResponseParams_Data)");
class  ContentDecryptionModule_GetStatusForPolicy_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_GetStatusForPolicy_Params_Data));
      new (data()) ContentDecryptionModule_GetStatusForPolicy_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_GetStatusForPolicy_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_GetStatusForPolicy_Params_Data>(index_);
    }
    ContentDecryptionModule_GetStatusForPolicy_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t min_hdcp_version;
  uint8_t padfinal_[4];

 private:
  ContentDecryptionModule_GetStatusForPolicy_Params_Data();
  ~ContentDecryptionModule_GetStatusForPolicy_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_GetStatusForPolicy_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_GetStatusForPolicy_Params_Data)");
class  ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data));
      new (data()) ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  int32_t key_status;
  uint8_t padfinal_[4];

 private:
  ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data();
  ~ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data)");
class  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data));
      new (data()) ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data>(index_);
    }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t session_type;
  int32_t init_data_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> init_data;

 private:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data();
  ~ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data)");
class  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data));
      new (data()) ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data();
  ~ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data)");
class  ContentDecryptionModule_LoadSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_LoadSession_Params_Data));
      new (data()) ContentDecryptionModule_LoadSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_LoadSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_LoadSession_Params_Data>(index_);
    }
    ContentDecryptionModule_LoadSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t session_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_LoadSession_Params_Data();
  ~ContentDecryptionModule_LoadSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_LoadSession_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_LoadSession_Params_Data)");
class  ContentDecryptionModule_LoadSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_LoadSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_LoadSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_LoadSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_LoadSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_LoadSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_LoadSession_ResponseParams_Data();
  ~ContentDecryptionModule_LoadSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_LoadSession_ResponseParams_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_LoadSession_ResponseParams_Data)");
class  ContentDecryptionModule_UpdateSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_UpdateSession_Params_Data));
      new (data()) ContentDecryptionModule_UpdateSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_UpdateSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_UpdateSession_Params_Data>(index_);
    }
    ContentDecryptionModule_UpdateSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> response;

 private:
  ContentDecryptionModule_UpdateSession_Params_Data();
  ~ContentDecryptionModule_UpdateSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_UpdateSession_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModule_UpdateSession_Params_Data)");
class  ContentDecryptionModule_UpdateSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_UpdateSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_UpdateSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_UpdateSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_UpdateSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_UpdateSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_UpdateSession_ResponseParams_Data();
  ~ContentDecryptionModule_UpdateSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_UpdateSession_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_UpdateSession_ResponseParams_Data)");
class  ContentDecryptionModule_CloseSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CloseSession_Params_Data));
      new (data()) ContentDecryptionModule_CloseSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CloseSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CloseSession_Params_Data>(index_);
    }
    ContentDecryptionModule_CloseSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_CloseSession_Params_Data();
  ~ContentDecryptionModule_CloseSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CloseSession_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_CloseSession_Params_Data)");
class  ContentDecryptionModule_CloseSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_CloseSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_CloseSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_CloseSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_CloseSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_CloseSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_CloseSession_ResponseParams_Data();
  ~ContentDecryptionModule_CloseSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_CloseSession_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_CloseSession_ResponseParams_Data)");
class  ContentDecryptionModule_RemoveSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_RemoveSession_Params_Data));
      new (data()) ContentDecryptionModule_RemoveSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_RemoveSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_RemoveSession_Params_Data>(index_);
    }
    ContentDecryptionModule_RemoveSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModule_RemoveSession_Params_Data();
  ~ContentDecryptionModule_RemoveSession_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_RemoveSession_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_RemoveSession_Params_Data)");
class  ContentDecryptionModule_RemoveSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModule_RemoveSession_ResponseParams_Data));
      new (data()) ContentDecryptionModule_RemoveSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModule_RemoveSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModule_RemoveSession_ResponseParams_Data>(index_);
    }
    ContentDecryptionModule_RemoveSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CdmPromiseResult_Data> result;

 private:
  ContentDecryptionModule_RemoveSession_ResponseParams_Data();
  ~ContentDecryptionModule_RemoveSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModule_RemoveSession_ResponseParams_Data) == 16,
              "Bad sizeof(ContentDecryptionModule_RemoveSession_ResponseParams_Data)");
class  ContentDecryptionModuleClient_OnSessionMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionMessage_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionMessage_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  int32_t message_type;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> message;

 private:
  ContentDecryptionModuleClient_OnSessionMessage_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionMessage_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionMessage_Params_Data) == 32,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionMessage_Params_Data)");
class  ContentDecryptionModuleClient_OnSessionClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionClosed_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionClosed_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;

 private:
  ContentDecryptionModuleClient_OnSessionClosed_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionClosed_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionClosed_Params_Data) == 16,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionClosed_Params_Data)");
class  ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  uint8_t has_additional_usable_key : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CdmKeyInformation_Data>>> keys_info;

 private:
  ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data) == 32,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data)");
class  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data));
      new (data()) ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data>(index_);
    }
    ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> session_id;
  double new_expiry_time_sec;

 private:
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data();
  ~ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data() = delete;
};
static_assert(sizeof(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data) == 24,
              "Bad sizeof(ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data)");
class  CdmFactory_CreateCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CdmFactory_CreateCdm_Params_Data));
      new (data()) CdmFactory_CreateCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CdmFactory_CreateCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CdmFactory_CreateCdm_Params_Data>(index_);
    }
    CdmFactory_CreateCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;
  mojo::internal::Handle_Data cdm;
  uint8_t padfinal_[4];

 private:
  CdmFactory_CreateCdm_Params_Data();
  ~CdmFactory_CreateCdm_Params_Data() = delete;
};
static_assert(sizeof(CdmFactory_CreateCdm_Params_Data) == 24,
              "Bad sizeof(CdmFactory_CreateCdm_Params_Data)");

}  // namespace internal
class ContentDecryptionModule_SetClient_ParamsDataView {
 public:
  ContentDecryptionModule_SetClient_ParamsDataView() {}

  ContentDecryptionModule_SetClient_ParamsDataView(
      internal::ContentDecryptionModule_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentDecryptionModule_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_Initialize_ParamsDataView {
 public:
  ContentDecryptionModule_Initialize_ParamsDataView() {}

  ContentDecryptionModule_Initialize_ParamsDataView(
      internal::ContentDecryptionModule_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSecurityOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSecurityOrigin(UserType* output) {
    auto* pointer = data_->security_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetCdmConfigDataView(
      CdmConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCdmConfig(UserType* output) {
    auto* pointer = data_->cdm_config.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_Initialize_ResponseParamsDataView {
 public:
  ContentDecryptionModule_Initialize_ResponseParamsDataView() {}

  ContentDecryptionModule_Initialize_ResponseParamsDataView(
      internal::ContentDecryptionModule_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
  template <typename UserType>
  UserType TakeDecryptor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::DecryptorPtrDataView>(
            &data_->decryptor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentDecryptionModule_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_SetServerCertificate_ParamsDataView {
 public:
  ContentDecryptionModule_SetServerCertificate_ParamsDataView() {}

  ContentDecryptionModule_SetServerCertificate_ParamsDataView(
      internal::ContentDecryptionModule_SetServerCertificate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCertificateDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCertificateData(UserType* output) {
    auto* pointer = data_->certificate_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_SetServerCertificate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView {
 public:
  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView() {}

  ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView(
      internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_SetServerCertificate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_GetStatusForPolicy_ParamsDataView {
 public:
  ContentDecryptionModule_GetStatusForPolicy_ParamsDataView() {}

  ContentDecryptionModule_GetStatusForPolicy_ParamsDataView(
      internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMinHdcpVersion(UserType* output) const {
    auto data_value = data_->min_hdcp_version;
    return mojo::internal::Deserialize<::media::mojom::HdcpVersion>(
        data_value, output);
  }

  HdcpVersion min_hdcp_version() const {
    return static_cast<HdcpVersion>(data_->min_hdcp_version);
  }
 private:
  internal::ContentDecryptionModule_GetStatusForPolicy_Params_Data* data_ = nullptr;
};

class ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView {
 public:
  ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView() {}

  ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView(
      internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyStatus(UserType* output) const {
    auto data_value = data_->key_status;
    return mojo::internal::Deserialize<::media::mojom::CdmKeyStatus>(
        data_value, output);
  }

  CdmKeyStatus key_status() const {
    return static_cast<CdmKeyStatus>(data_->key_status);
  }
 private:
  internal::ContentDecryptionModule_GetStatusForPolicy_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView() {}

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView(
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionType(UserType* output) const {
    auto data_value = data_->session_type;
    return mojo::internal::Deserialize<::media::mojom::CdmSessionType>(
        data_value, output);
  }

  CdmSessionType session_type() const {
    return static_cast<CdmSessionType>(data_->session_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitDataType(UserType* output) const {
    auto data_value = data_->init_data_type;
    return mojo::internal::Deserialize<::media::mojom::EmeInitDataType>(
        data_value, output);
  }

  EmeInitDataType init_data_type() const {
    return static_cast<EmeInitDataType>(data_->init_data_type);
  }
  inline void GetInitDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitData(UserType* output) {
    auto* pointer = data_->init_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView {
 public:
  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView() {}

  ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView(
      internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_LoadSession_ParamsDataView {
 public:
  ContentDecryptionModule_LoadSession_ParamsDataView() {}

  ContentDecryptionModule_LoadSession_ParamsDataView(
      internal::ContentDecryptionModule_LoadSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionType(UserType* output) const {
    auto data_value = data_->session_type;
    return mojo::internal::Deserialize<::media::mojom::CdmSessionType>(
        data_value, output);
  }

  CdmSessionType session_type() const {
    return static_cast<CdmSessionType>(data_->session_type);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_LoadSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_LoadSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_LoadSession_ResponseParamsDataView() {}

  ContentDecryptionModule_LoadSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_LoadSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_UpdateSession_ParamsDataView {
 public:
  ContentDecryptionModule_UpdateSession_ParamsDataView() {}

  ContentDecryptionModule_UpdateSession_ParamsDataView(
      internal::ContentDecryptionModule_UpdateSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetResponseDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_UpdateSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_UpdateSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_UpdateSession_ResponseParamsDataView() {}

  ContentDecryptionModule_UpdateSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_UpdateSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CloseSession_ParamsDataView {
 public:
  ContentDecryptionModule_CloseSession_ParamsDataView() {}

  ContentDecryptionModule_CloseSession_ParamsDataView(
      internal::ContentDecryptionModule_CloseSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CloseSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_CloseSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_CloseSession_ResponseParamsDataView() {}

  ContentDecryptionModule_CloseSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_CloseSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_RemoveSession_ParamsDataView {
 public:
  ContentDecryptionModule_RemoveSession_ParamsDataView() {}

  ContentDecryptionModule_RemoveSession_ParamsDataView(
      internal::ContentDecryptionModule_RemoveSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_RemoveSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModule_RemoveSession_ResponseParamsDataView {
 public:
  ContentDecryptionModule_RemoveSession_ResponseParamsDataView() {}

  ContentDecryptionModule_RemoveSession_ResponseParamsDataView(
      internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      CdmPromiseResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::media::mojom::CdmPromiseResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModule_RemoveSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessageType(UserType* output) const {
    auto data_value = data_->message_type;
    return mojo::internal::Deserialize<::media::mojom::CdmMessageType>(
        data_value, output);
  }

  CdmMessageType message_type() const {
    return static_cast<CdmMessageType>(data_->message_type);
  }
  inline void GetMessageDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionClosed_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool has_additional_usable_key() const {
    return data_->has_additional_usable_key;
  }
  inline void GetKeysInfoDataView(
      mojo::ArrayDataView<CdmKeyInformationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeysInfo(UserType* output) {
    auto* pointer = data_->keys_info.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::CdmKeyInformationDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionKeysChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView {
 public:
  ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView() {}

  ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView(
      internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionId(UserType* output) {
    auto* pointer = data_->session_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  double new_expiry_time_sec() const {
    return data_->new_expiry_time_sec;
  }
 private:
  internal::ContentDecryptionModuleClient_OnSessionExpirationUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CdmFactory_CreateCdm_ParamsDataView {
 public:
  CdmFactory_CreateCdm_ParamsDataView() {}

  CdmFactory_CreateCdm_ParamsDataView(
      internal::CdmFactory_CreateCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeCdm() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::ContentDecryptionModuleRequestDataView>(
            &data_->cdm, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmFactory_CreateCdm_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void ContentDecryptionModule_Initialize_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_Initialize_ParamsDataView::GetSecurityOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->security_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void ContentDecryptionModule_Initialize_ParamsDataView::GetCdmConfigDataView(
    CdmConfigDataView* output) {
  auto pointer = data_->cdm_config.Get();
  *output = CdmConfigDataView(pointer, context_);
}


inline void ContentDecryptionModule_Initialize_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_SetServerCertificate_ParamsDataView::GetCertificateDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->certificate_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModule_SetServerCertificate_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}




inline void ContentDecryptionModule_GetStatusForPolicy_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ParamsDataView::GetInitDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->init_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}
inline void ContentDecryptionModule_CreateSessionAndGenerateRequest_ResponseParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_LoadSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_LoadSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}
inline void ContentDecryptionModule_LoadSession_ResponseParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_UpdateSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModule_UpdateSession_ParamsDataView::GetResponseDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->response.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModule_UpdateSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_CloseSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_CloseSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModule_RemoveSession_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModule_RemoveSession_ResponseParamsDataView::GetResultDataView(
    CdmPromiseResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = CdmPromiseResultDataView(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionMessage_ParamsDataView::GetMessageDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->message.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionClosed_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ContentDecryptionModuleClient_OnSessionKeysChange_ParamsDataView::GetKeysInfoDataView(
    mojo::ArrayDataView<CdmKeyInformationDataView>* output) {
  auto pointer = data_->keys_info.Get();
  *output = mojo::ArrayDataView<CdmKeyInformationDataView>(pointer, context_);
}


inline void ContentDecryptionModuleClient_OnSessionExpirationUpdate_ParamsDataView::GetSessionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->session_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CdmFactory_CreateCdm_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_PARAMS_DATA_H_