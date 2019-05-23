// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_PARAMS_DATA_H_

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
namespace network {
namespace mojom {
namespace internal {
class  CookieChangeListener_OnCookieChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieChangeListener_OnCookieChange_Params_Data));
      new (data()) CookieChangeListener_OnCookieChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieChangeListener_OnCookieChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieChangeListener_OnCookieChange_Params_Data>(index_);
    }
    CookieChangeListener_OnCookieChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CanonicalCookie_Data> cookie;
  int32_t cause;
  uint8_t padfinal_[4];

 private:
  CookieChangeListener_OnCookieChange_Params_Data();
  ~CookieChangeListener_OnCookieChange_Params_Data() = delete;
};
static_assert(sizeof(CookieChangeListener_OnCookieChange_Params_Data) == 24,
              "Bad sizeof(CookieChangeListener_OnCookieChange_Params_Data)");
class  CookieManager_GetAllCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetAllCookies_Params_Data));
      new (data()) CookieManager_GetAllCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetAllCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetAllCookies_Params_Data>(index_);
    }
    CookieManager_GetAllCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_GetAllCookies_Params_Data();
  ~CookieManager_GetAllCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_GetAllCookies_Params_Data) == 8,
              "Bad sizeof(CookieManager_GetAllCookies_Params_Data)");
class  CookieManager_GetAllCookies_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetAllCookies_ResponseParams_Data));
      new (data()) CookieManager_GetAllCookies_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetAllCookies_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetAllCookies_ResponseParams_Data>(index_);
    }
    CookieManager_GetAllCookies_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CanonicalCookie_Data>>> cookies;

 private:
  CookieManager_GetAllCookies_ResponseParams_Data();
  ~CookieManager_GetAllCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_GetAllCookies_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_GetAllCookies_ResponseParams_Data)");
class  CookieManager_GetCookieList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetCookieList_Params_Data));
      new (data()) CookieManager_GetCookieList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetCookieList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetCookieList_Params_Data>(index_);
    }
    CookieManager_GetCookieList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<internal::CookieOptions_Data> cookie_options;

 private:
  CookieManager_GetCookieList_Params_Data();
  ~CookieManager_GetCookieList_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_GetCookieList_Params_Data) == 24,
              "Bad sizeof(CookieManager_GetCookieList_Params_Data)");
class  CookieManager_GetCookieList_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_GetCookieList_ResponseParams_Data));
      new (data()) CookieManager_GetCookieList_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_GetCookieList_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_GetCookieList_ResponseParams_Data>(index_);
    }
    CookieManager_GetCookieList_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CanonicalCookie_Data>>> cookies;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CookieWithStatus_Data>>> excluded_cookies;

 private:
  CookieManager_GetCookieList_ResponseParams_Data();
  ~CookieManager_GetCookieList_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_GetCookieList_ResponseParams_Data) == 24,
              "Bad sizeof(CookieManager_GetCookieList_ResponseParams_Data)");
class  CookieManager_SetCanonicalCookie_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_SetCanonicalCookie_Params_Data));
      new (data()) CookieManager_SetCanonicalCookie_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_SetCanonicalCookie_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_SetCanonicalCookie_Params_Data>(index_);
    }
    CookieManager_SetCanonicalCookie_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CanonicalCookie_Data> cookie;
  mojo::internal::Pointer<mojo::internal::String_Data> source_scheme;
  mojo::internal::Pointer<internal::CookieOptions_Data> cookie_options;

 private:
  CookieManager_SetCanonicalCookie_Params_Data();
  ~CookieManager_SetCanonicalCookie_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_SetCanonicalCookie_Params_Data) == 32,
              "Bad sizeof(CookieManager_SetCanonicalCookie_Params_Data)");
class  CookieManager_SetCanonicalCookie_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_SetCanonicalCookie_ResponseParams_Data));
      new (data()) CookieManager_SetCanonicalCookie_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_SetCanonicalCookie_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_SetCanonicalCookie_ResponseParams_Data>(index_);
    }
    CookieManager_SetCanonicalCookie_ResponseParams_Data* operator->() { return data(); }

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
  CookieManager_SetCanonicalCookie_ResponseParams_Data();
  ~CookieManager_SetCanonicalCookie_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_SetCanonicalCookie_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_SetCanonicalCookie_ResponseParams_Data)");
class  CookieManager_DeleteCanonicalCookie_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_DeleteCanonicalCookie_Params_Data));
      new (data()) CookieManager_DeleteCanonicalCookie_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_DeleteCanonicalCookie_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_DeleteCanonicalCookie_Params_Data>(index_);
    }
    CookieManager_DeleteCanonicalCookie_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CanonicalCookie_Data> cookie;

 private:
  CookieManager_DeleteCanonicalCookie_Params_Data();
  ~CookieManager_DeleteCanonicalCookie_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_DeleteCanonicalCookie_Params_Data) == 16,
              "Bad sizeof(CookieManager_DeleteCanonicalCookie_Params_Data)");
class  CookieManager_DeleteCanonicalCookie_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_DeleteCanonicalCookie_ResponseParams_Data));
      new (data()) CookieManager_DeleteCanonicalCookie_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_DeleteCanonicalCookie_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_DeleteCanonicalCookie_ResponseParams_Data>(index_);
    }
    CookieManager_DeleteCanonicalCookie_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  CookieManager_DeleteCanonicalCookie_ResponseParams_Data();
  ~CookieManager_DeleteCanonicalCookie_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_DeleteCanonicalCookie_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_DeleteCanonicalCookie_ResponseParams_Data)");
class  CookieManager_DeleteCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_DeleteCookies_Params_Data));
      new (data()) CookieManager_DeleteCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_DeleteCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_DeleteCookies_Params_Data>(index_);
    }
    CookieManager_DeleteCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CookieDeletionFilter_Data> filter;

 private:
  CookieManager_DeleteCookies_Params_Data();
  ~CookieManager_DeleteCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_DeleteCookies_Params_Data) == 16,
              "Bad sizeof(CookieManager_DeleteCookies_Params_Data)");
class  CookieManager_DeleteCookies_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_DeleteCookies_ResponseParams_Data));
      new (data()) CookieManager_DeleteCookies_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_DeleteCookies_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_DeleteCookies_ResponseParams_Data>(index_);
    }
    CookieManager_DeleteCookies_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t num_deleted;
  uint8_t padfinal_[4];

 private:
  CookieManager_DeleteCookies_ResponseParams_Data();
  ~CookieManager_DeleteCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_DeleteCookies_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_DeleteCookies_ResponseParams_Data)");
class  CookieManager_AddCookieChangeListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_AddCookieChangeListener_Params_Data));
      new (data()) CookieManager_AddCookieChangeListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_AddCookieChangeListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_AddCookieChangeListener_Params_Data>(index_);
    }
    CookieManager_AddCookieChangeListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Interface_Data listener;

 private:
  CookieManager_AddCookieChangeListener_Params_Data();
  ~CookieManager_AddCookieChangeListener_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_AddCookieChangeListener_Params_Data) == 32,
              "Bad sizeof(CookieManager_AddCookieChangeListener_Params_Data)");
class  CookieManager_AddGlobalChangeListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_AddGlobalChangeListener_Params_Data));
      new (data()) CookieManager_AddGlobalChangeListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_AddGlobalChangeListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_AddGlobalChangeListener_Params_Data>(index_);
    }
    CookieManager_AddGlobalChangeListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data notification_pointer;

 private:
  CookieManager_AddGlobalChangeListener_Params_Data();
  ~CookieManager_AddGlobalChangeListener_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_AddGlobalChangeListener_Params_Data) == 16,
              "Bad sizeof(CookieManager_AddGlobalChangeListener_Params_Data)");
class  CookieManager_CloneInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_CloneInterface_Params_Data));
      new (data()) CookieManager_CloneInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_CloneInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_CloneInterface_Params_Data>(index_);
    }
    CookieManager_CloneInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data new_interface;
  uint8_t padfinal_[4];

 private:
  CookieManager_CloneInterface_Params_Data();
  ~CookieManager_CloneInterface_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_CloneInterface_Params_Data) == 16,
              "Bad sizeof(CookieManager_CloneInterface_Params_Data)");
class  CookieManager_FlushCookieStore_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_FlushCookieStore_Params_Data));
      new (data()) CookieManager_FlushCookieStore_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_FlushCookieStore_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_FlushCookieStore_Params_Data>(index_);
    }
    CookieManager_FlushCookieStore_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_FlushCookieStore_Params_Data();
  ~CookieManager_FlushCookieStore_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_FlushCookieStore_Params_Data) == 8,
              "Bad sizeof(CookieManager_FlushCookieStore_Params_Data)");
class  CookieManager_FlushCookieStore_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_FlushCookieStore_ResponseParams_Data));
      new (data()) CookieManager_FlushCookieStore_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_FlushCookieStore_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_FlushCookieStore_ResponseParams_Data>(index_);
    }
    CookieManager_FlushCookieStore_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_FlushCookieStore_ResponseParams_Data();
  ~CookieManager_FlushCookieStore_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_FlushCookieStore_ResponseParams_Data) == 8,
              "Bad sizeof(CookieManager_FlushCookieStore_ResponseParams_Data)");
class  CookieManager_AllowFileSchemeCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_AllowFileSchemeCookies_Params_Data));
      new (data()) CookieManager_AllowFileSchemeCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_AllowFileSchemeCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_AllowFileSchemeCookies_Params_Data>(index_);
    }
    CookieManager_AllowFileSchemeCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allow : 1;
  uint8_t padfinal_[7];

 private:
  CookieManager_AllowFileSchemeCookies_Params_Data();
  ~CookieManager_AllowFileSchemeCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_AllowFileSchemeCookies_Params_Data) == 16,
              "Bad sizeof(CookieManager_AllowFileSchemeCookies_Params_Data)");
class  CookieManager_AllowFileSchemeCookies_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_AllowFileSchemeCookies_ResponseParams_Data));
      new (data()) CookieManager_AllowFileSchemeCookies_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_AllowFileSchemeCookies_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_AllowFileSchemeCookies_ResponseParams_Data>(index_);
    }
    CookieManager_AllowFileSchemeCookies_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  CookieManager_AllowFileSchemeCookies_ResponseParams_Data();
  ~CookieManager_AllowFileSchemeCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManager_AllowFileSchemeCookies_ResponseParams_Data) == 16,
              "Bad sizeof(CookieManager_AllowFileSchemeCookies_ResponseParams_Data)");
class  CookieManager_SetContentSettings_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_SetContentSettings_Params_Data));
      new (data()) CookieManager_SetContentSettings_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_SetContentSettings_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_SetContentSettings_Params_Data>(index_);
    }
    CookieManager_SetContentSettings_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::content_settings::mojom::internal::ContentSettingPatternSource_Data>>> settings;

 private:
  CookieManager_SetContentSettings_Params_Data();
  ~CookieManager_SetContentSettings_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_SetContentSettings_Params_Data) == 16,
              "Bad sizeof(CookieManager_SetContentSettings_Params_Data)");
class  CookieManager_SetForceKeepSessionState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_SetForceKeepSessionState_Params_Data));
      new (data()) CookieManager_SetForceKeepSessionState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_SetForceKeepSessionState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_SetForceKeepSessionState_Params_Data>(index_);
    }
    CookieManager_SetForceKeepSessionState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CookieManager_SetForceKeepSessionState_Params_Data();
  ~CookieManager_SetForceKeepSessionState_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_SetForceKeepSessionState_Params_Data) == 8,
              "Bad sizeof(CookieManager_SetForceKeepSessionState_Params_Data)");
class  CookieManager_BlockThirdPartyCookies_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManager_BlockThirdPartyCookies_Params_Data));
      new (data()) CookieManager_BlockThirdPartyCookies_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManager_BlockThirdPartyCookies_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManager_BlockThirdPartyCookies_Params_Data>(index_);
    }
    CookieManager_BlockThirdPartyCookies_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t block : 1;
  uint8_t padfinal_[7];

 private:
  CookieManager_BlockThirdPartyCookies_Params_Data();
  ~CookieManager_BlockThirdPartyCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManager_BlockThirdPartyCookies_Params_Data) == 16,
              "Bad sizeof(CookieManager_BlockThirdPartyCookies_Params_Data)");

}  // namespace internal
class CookieChangeListener_OnCookieChange_ParamsDataView {
 public:
  CookieChangeListener_OnCookieChange_ParamsDataView() {}

  CookieChangeListener_OnCookieChange_ParamsDataView(
      internal::CookieChangeListener_OnCookieChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCause(UserType* output) const {
    auto data_value = data_->cause;
    return mojo::internal::Deserialize<::network::mojom::CookieChangeCause>(
        data_value, output);
  }

  CookieChangeCause cause() const {
    return static_cast<CookieChangeCause>(data_->cause);
  }
 private:
  internal::CookieChangeListener_OnCookieChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_GetAllCookies_ParamsDataView {
 public:
  CookieManager_GetAllCookies_ParamsDataView() {}

  CookieManager_GetAllCookies_ParamsDataView(
      internal::CookieManager_GetAllCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_GetAllCookies_Params_Data* data_ = nullptr;
};

class CookieManager_GetAllCookies_ResponseParamsDataView {
 public:
  CookieManager_GetAllCookies_ResponseParamsDataView() {}

  CookieManager_GetAllCookies_ResponseParamsDataView(
      internal::CookieManager_GetAllCookies_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::ArrayDataView<CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookies(UserType* output) {
    auto* pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_GetAllCookies_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_GetCookieList_ParamsDataView {
 public:
  CookieManager_GetCookieList_ParamsDataView() {}

  CookieManager_GetCookieList_ParamsDataView(
      internal::CookieManager_GetCookieList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetCookieOptionsDataView(
      CookieOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieOptions(UserType* output) {
    auto* pointer = data_->cookie_options.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_GetCookieList_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_GetCookieList_ResponseParamsDataView {
 public:
  CookieManager_GetCookieList_ResponseParamsDataView() {}

  CookieManager_GetCookieList_ResponseParamsDataView(
      internal::CookieManager_GetCookieList_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::ArrayDataView<CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookies(UserType* output) {
    auto* pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
  inline void GetExcludedCookiesDataView(
      mojo::ArrayDataView<CookieWithStatusDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExcludedCookies(UserType* output) {
    auto* pointer = data_->excluded_cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CookieWithStatusDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_GetCookieList_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_SetCanonicalCookie_ParamsDataView {
 public:
  CookieManager_SetCanonicalCookie_ParamsDataView() {}

  CookieManager_SetCanonicalCookie_ParamsDataView(
      internal::CookieManager_SetCanonicalCookie_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
  inline void GetSourceSchemeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceScheme(UserType* output) {
    auto* pointer = data_->source_scheme.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCookieOptionsDataView(
      CookieOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookieOptions(UserType* output) {
    auto* pointer = data_->cookie_options.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_SetCanonicalCookie_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_SetCanonicalCookie_ResponseParamsDataView {
 public:
  CookieManager_SetCanonicalCookie_ResponseParamsDataView() {}

  CookieManager_SetCanonicalCookie_ResponseParamsDataView(
      internal::CookieManager_SetCanonicalCookie_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::network::mojom::CookieInclusionStatus>(
        data_value, output);
  }

  CookieInclusionStatus status() const {
    return static_cast<CookieInclusionStatus>(data_->status);
  }
 private:
  internal::CookieManager_SetCanonicalCookie_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_DeleteCanonicalCookie_ParamsDataView {
 public:
  CookieManager_DeleteCanonicalCookie_ParamsDataView() {}

  CookieManager_DeleteCanonicalCookie_ParamsDataView(
      internal::CookieManager_DeleteCanonicalCookie_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_DeleteCanonicalCookie_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_DeleteCanonicalCookie_ResponseParamsDataView {
 public:
  CookieManager_DeleteCanonicalCookie_ResponseParamsDataView() {}

  CookieManager_DeleteCanonicalCookie_ResponseParamsDataView(
      internal::CookieManager_DeleteCanonicalCookie_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieManager_DeleteCanonicalCookie_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_DeleteCookies_ParamsDataView {
 public:
  CookieManager_DeleteCookies_ParamsDataView() {}

  CookieManager_DeleteCookies_ParamsDataView(
      internal::CookieManager_DeleteCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilterDataView(
      CookieDeletionFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilter(UserType* output) {
    auto* pointer = data_->filter.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieDeletionFilterDataView>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_DeleteCookies_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_DeleteCookies_ResponseParamsDataView {
 public:
  CookieManager_DeleteCookies_ResponseParamsDataView() {}

  CookieManager_DeleteCookies_ResponseParamsDataView(
      internal::CookieManager_DeleteCookies_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t num_deleted() const {
    return data_->num_deleted;
  }
 private:
  internal::CookieManager_DeleteCookies_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_AddCookieChangeListener_ParamsDataView {
 public:
  CookieManager_AddCookieChangeListener_ParamsDataView() {}

  CookieManager_AddCookieChangeListener_ParamsDataView(
      internal::CookieManager_AddCookieChangeListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieChangeListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CookieManager_AddCookieChangeListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_AddGlobalChangeListener_ParamsDataView {
 public:
  CookieManager_AddGlobalChangeListener_ParamsDataView() {}

  CookieManager_AddGlobalChangeListener_ParamsDataView(
      internal::CookieManager_AddGlobalChangeListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNotificationPointer() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieChangeListenerPtrDataView>(
            &data_->notification_pointer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CookieManager_AddGlobalChangeListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_CloneInterface_ParamsDataView {
 public:
  CookieManager_CloneInterface_ParamsDataView() {}

  CookieManager_CloneInterface_ParamsDataView(
      internal::CookieManager_CloneInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeNewInterface() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieManagerRequestDataView>(
            &data_->new_interface, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CookieManager_CloneInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_FlushCookieStore_ParamsDataView {
 public:
  CookieManager_FlushCookieStore_ParamsDataView() {}

  CookieManager_FlushCookieStore_ParamsDataView(
      internal::CookieManager_FlushCookieStore_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_FlushCookieStore_Params_Data* data_ = nullptr;
};

class CookieManager_FlushCookieStore_ResponseParamsDataView {
 public:
  CookieManager_FlushCookieStore_ResponseParamsDataView() {}

  CookieManager_FlushCookieStore_ResponseParamsDataView(
      internal::CookieManager_FlushCookieStore_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_FlushCookieStore_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_AllowFileSchemeCookies_ParamsDataView {
 public:
  CookieManager_AllowFileSchemeCookies_ParamsDataView() {}

  CookieManager_AllowFileSchemeCookies_ParamsDataView(
      internal::CookieManager_AllowFileSchemeCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allow() const {
    return data_->allow;
  }
 private:
  internal::CookieManager_AllowFileSchemeCookies_Params_Data* data_ = nullptr;
};

class CookieManager_AllowFileSchemeCookies_ResponseParamsDataView {
 public:
  CookieManager_AllowFileSchemeCookies_ResponseParamsDataView() {}

  CookieManager_AllowFileSchemeCookies_ResponseParamsDataView(
      internal::CookieManager_AllowFileSchemeCookies_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieManager_AllowFileSchemeCookies_ResponseParams_Data* data_ = nullptr;
};

class CookieManager_SetContentSettings_ParamsDataView {
 public:
  CookieManager_SetContentSettings_ParamsDataView() {}

  CookieManager_SetContentSettings_ParamsDataView(
      internal::CookieManager_SetContentSettings_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSettingsDataView(
      mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSettings(UserType* output) {
    auto* pointer = data_->settings.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieManager_SetContentSettings_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieManager_SetForceKeepSessionState_ParamsDataView {
 public:
  CookieManager_SetForceKeepSessionState_ParamsDataView() {}

  CookieManager_SetForceKeepSessionState_ParamsDataView(
      internal::CookieManager_SetForceKeepSessionState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManager_SetForceKeepSessionState_Params_Data* data_ = nullptr;
};

class CookieManager_BlockThirdPartyCookies_ParamsDataView {
 public:
  CookieManager_BlockThirdPartyCookies_ParamsDataView() {}

  CookieManager_BlockThirdPartyCookies_ParamsDataView(
      internal::CookieManager_BlockThirdPartyCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool block() const {
    return data_->block;
  }
 private:
  internal::CookieManager_BlockThirdPartyCookies_Params_Data* data_ = nullptr;
};


inline void CookieChangeListener_OnCookieChange_ParamsDataView::GetCookieDataView(
    CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = CanonicalCookieDataView(pointer, context_);
}




inline void CookieManager_GetAllCookies_ResponseParamsDataView::GetCookiesDataView(
    mojo::ArrayDataView<CanonicalCookieDataView>* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::ArrayDataView<CanonicalCookieDataView>(pointer, context_);
}


inline void CookieManager_GetCookieList_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CookieManager_GetCookieList_ParamsDataView::GetCookieOptionsDataView(
    CookieOptionsDataView* output) {
  auto pointer = data_->cookie_options.Get();
  *output = CookieOptionsDataView(pointer, context_);
}


inline void CookieManager_GetCookieList_ResponseParamsDataView::GetCookiesDataView(
    mojo::ArrayDataView<CanonicalCookieDataView>* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::ArrayDataView<CanonicalCookieDataView>(pointer, context_);
}
inline void CookieManager_GetCookieList_ResponseParamsDataView::GetExcludedCookiesDataView(
    mojo::ArrayDataView<CookieWithStatusDataView>* output) {
  auto pointer = data_->excluded_cookies.Get();
  *output = mojo::ArrayDataView<CookieWithStatusDataView>(pointer, context_);
}


inline void CookieManager_SetCanonicalCookie_ParamsDataView::GetCookieDataView(
    CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = CanonicalCookieDataView(pointer, context_);
}
inline void CookieManager_SetCanonicalCookie_ParamsDataView::GetSourceSchemeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_scheme.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CookieManager_SetCanonicalCookie_ParamsDataView::GetCookieOptionsDataView(
    CookieOptionsDataView* output) {
  auto pointer = data_->cookie_options.Get();
  *output = CookieOptionsDataView(pointer, context_);
}




inline void CookieManager_DeleteCanonicalCookie_ParamsDataView::GetCookieDataView(
    CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = CanonicalCookieDataView(pointer, context_);
}




inline void CookieManager_DeleteCookies_ParamsDataView::GetFilterDataView(
    CookieDeletionFilterDataView* output) {
  auto pointer = data_->filter.Get();
  *output = CookieDeletionFilterDataView(pointer, context_);
}




inline void CookieManager_AddCookieChangeListener_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void CookieManager_AddCookieChangeListener_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}














inline void CookieManager_SetContentSettings_ParamsDataView::GetSettingsDataView(
    mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>* output) {
  auto pointer = data_->settings.Get();
  *output = mojo::ArrayDataView<::content_settings::mojom::ContentSettingPatternSourceDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_PARAMS_DATA_H_