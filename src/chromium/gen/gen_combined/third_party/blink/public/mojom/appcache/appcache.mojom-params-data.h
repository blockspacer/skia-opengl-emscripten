// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheBackend_RegisterHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheBackend_RegisterHost_Params_Data));
      new (data()) AppCacheBackend_RegisterHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheBackend_RegisterHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheBackend_RegisterHost_Params_Data>(index_);
    }
    AppCacheBackend_RegisterHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data host_request;
  mojo::internal::Interface_Data frontend;
  int32_t host_id;
  int32_t render_frame_id;
  uint8_t padfinal_[4];

 private:
  AppCacheBackend_RegisterHost_Params_Data();
  ~AppCacheBackend_RegisterHost_Params_Data() = delete;
};
static_assert(sizeof(AppCacheBackend_RegisterHost_Params_Data) == 32,
              "Bad sizeof(AppCacheBackend_RegisterHost_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_SetSpawningHostId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_SetSpawningHostId_Params_Data));
      new (data()) AppCacheHost_SetSpawningHostId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_SetSpawningHostId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_SetSpawningHostId_Params_Data>(index_);
    }
    AppCacheHost_SetSpawningHostId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t spawning_host_id;
  uint8_t padfinal_[4];

 private:
  AppCacheHost_SetSpawningHostId_Params_Data();
  ~AppCacheHost_SetSpawningHostId_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_SetSpawningHostId_Params_Data) == 16,
              "Bad sizeof(AppCacheHost_SetSpawningHostId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_SelectCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_SelectCache_Params_Data));
      new (data()) AppCacheHost_SelectCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_SelectCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_SelectCache_Params_Data>(index_);
    }
    AppCacheHost_SelectCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> document_url;
  int64_t appcache_document_was_loaded_from;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> opt_manifest_url;

 private:
  AppCacheHost_SelectCache_Params_Data();
  ~AppCacheHost_SelectCache_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_SelectCache_Params_Data) == 32,
              "Bad sizeof(AppCacheHost_SelectCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_SelectCacheForSharedWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_SelectCacheForSharedWorker_Params_Data));
      new (data()) AppCacheHost_SelectCacheForSharedWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_SelectCacheForSharedWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_SelectCacheForSharedWorker_Params_Data>(index_);
    }
    AppCacheHost_SelectCacheForSharedWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t appcache_id;

 private:
  AppCacheHost_SelectCacheForSharedWorker_Params_Data();
  ~AppCacheHost_SelectCacheForSharedWorker_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_SelectCacheForSharedWorker_Params_Data) == 16,
              "Bad sizeof(AppCacheHost_SelectCacheForSharedWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_MarkAsForeignEntry_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_MarkAsForeignEntry_Params_Data));
      new (data()) AppCacheHost_MarkAsForeignEntry_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_MarkAsForeignEntry_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_MarkAsForeignEntry_Params_Data>(index_);
    }
    AppCacheHost_MarkAsForeignEntry_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> document_url;
  int64_t appcache_document_was_loaded_from;

 private:
  AppCacheHost_MarkAsForeignEntry_Params_Data();
  ~AppCacheHost_MarkAsForeignEntry_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_MarkAsForeignEntry_Params_Data) == 24,
              "Bad sizeof(AppCacheHost_MarkAsForeignEntry_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_GetStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_GetStatus_Params_Data));
      new (data()) AppCacheHost_GetStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_GetStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_GetStatus_Params_Data>(index_);
    }
    AppCacheHost_GetStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppCacheHost_GetStatus_Params_Data();
  ~AppCacheHost_GetStatus_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_GetStatus_Params_Data) == 8,
              "Bad sizeof(AppCacheHost_GetStatus_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_GetStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_GetStatus_ResponseParams_Data));
      new (data()) AppCacheHost_GetStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_GetStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_GetStatus_ResponseParams_Data>(index_);
    }
    AppCacheHost_GetStatus_ResponseParams_Data* operator->() { return data(); }

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
  AppCacheHost_GetStatus_ResponseParams_Data();
  ~AppCacheHost_GetStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheHost_GetStatus_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheHost_GetStatus_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_StartUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_StartUpdate_Params_Data));
      new (data()) AppCacheHost_StartUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_StartUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_StartUpdate_Params_Data>(index_);
    }
    AppCacheHost_StartUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppCacheHost_StartUpdate_Params_Data();
  ~AppCacheHost_StartUpdate_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_StartUpdate_Params_Data) == 8,
              "Bad sizeof(AppCacheHost_StartUpdate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_StartUpdate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_StartUpdate_ResponseParams_Data));
      new (data()) AppCacheHost_StartUpdate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_StartUpdate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_StartUpdate_ResponseParams_Data>(index_);
    }
    AppCacheHost_StartUpdate_ResponseParams_Data* operator->() { return data(); }

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
  AppCacheHost_StartUpdate_ResponseParams_Data();
  ~AppCacheHost_StartUpdate_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheHost_StartUpdate_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheHost_StartUpdate_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_SwapCache_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_SwapCache_Params_Data));
      new (data()) AppCacheHost_SwapCache_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_SwapCache_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_SwapCache_Params_Data>(index_);
    }
    AppCacheHost_SwapCache_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppCacheHost_SwapCache_Params_Data();
  ~AppCacheHost_SwapCache_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_SwapCache_Params_Data) == 8,
              "Bad sizeof(AppCacheHost_SwapCache_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_SwapCache_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_SwapCache_ResponseParams_Data));
      new (data()) AppCacheHost_SwapCache_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_SwapCache_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_SwapCache_ResponseParams_Data>(index_);
    }
    AppCacheHost_SwapCache_ResponseParams_Data* operator->() { return data(); }

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
  AppCacheHost_SwapCache_ResponseParams_Data();
  ~AppCacheHost_SwapCache_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheHost_SwapCache_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheHost_SwapCache_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_GetResourceList_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_GetResourceList_Params_Data));
      new (data()) AppCacheHost_GetResourceList_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_GetResourceList_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_GetResourceList_Params_Data>(index_);
    }
    AppCacheHost_GetResourceList_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AppCacheHost_GetResourceList_Params_Data();
  ~AppCacheHost_GetResourceList_Params_Data() = delete;
};
static_assert(sizeof(AppCacheHost_GetResourceList_Params_Data) == 8,
              "Bad sizeof(AppCacheHost_GetResourceList_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheHost_GetResourceList_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheHost_GetResourceList_ResponseParams_Data));
      new (data()) AppCacheHost_GetResourceList_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheHost_GetResourceList_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheHost_GetResourceList_ResponseParams_Data>(index_);
    }
    AppCacheHost_GetResourceList_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AppCacheResourceInfo_Data>>> resources;

 private:
  AppCacheHost_GetResourceList_ResponseParams_Data();
  ~AppCacheHost_GetResourceList_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppCacheHost_GetResourceList_ResponseParams_Data) == 16,
              "Bad sizeof(AppCacheHost_GetResourceList_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheFrontend_CacheSelected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_CacheSelected_Params_Data));
      new (data()) AppCacheFrontend_CacheSelected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_CacheSelected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_CacheSelected_Params_Data>(index_);
    }
    AppCacheFrontend_CacheSelected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::AppCacheInfo_Data> info;

 private:
  AppCacheFrontend_CacheSelected_Params_Data();
  ~AppCacheFrontend_CacheSelected_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_CacheSelected_Params_Data) == 16,
              "Bad sizeof(AppCacheFrontend_CacheSelected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheFrontend_EventRaised_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_EventRaised_Params_Data));
      new (data()) AppCacheFrontend_EventRaised_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_EventRaised_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_EventRaised_Params_Data>(index_);
    }
    AppCacheFrontend_EventRaised_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t event_id;
  uint8_t padfinal_[4];

 private:
  AppCacheFrontend_EventRaised_Params_Data();
  ~AppCacheFrontend_EventRaised_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_EventRaised_Params_Data) == 16,
              "Bad sizeof(AppCacheFrontend_EventRaised_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheFrontend_ProgressEventRaised_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_ProgressEventRaised_Params_Data));
      new (data()) AppCacheFrontend_ProgressEventRaised_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_ProgressEventRaised_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_ProgressEventRaised_Params_Data>(index_);
    }
    AppCacheFrontend_ProgressEventRaised_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t total;
  int32_t complete;

 private:
  AppCacheFrontend_ProgressEventRaised_Params_Data();
  ~AppCacheFrontend_ProgressEventRaised_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_ProgressEventRaised_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_ProgressEventRaised_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheFrontend_ErrorEventRaised_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_ErrorEventRaised_Params_Data));
      new (data()) AppCacheFrontend_ErrorEventRaised_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_ErrorEventRaised_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_ErrorEventRaised_Params_Data>(index_);
    }
    AppCacheFrontend_ErrorEventRaised_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AppCacheErrorDetails_Data> error_details;

 private:
  AppCacheFrontend_ErrorEventRaised_Params_Data();
  ~AppCacheFrontend_ErrorEventRaised_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_ErrorEventRaised_Params_Data) == 16,
              "Bad sizeof(AppCacheFrontend_ErrorEventRaised_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheFrontend_LogMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_LogMessage_Params_Data));
      new (data()) AppCacheFrontend_LogMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_LogMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_LogMessage_Params_Data>(index_);
    }
    AppCacheFrontend_LogMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t log_level;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  AppCacheFrontend_LogMessage_Params_Data();
  ~AppCacheFrontend_LogMessage_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_LogMessage_Params_Data) == 24,
              "Bad sizeof(AppCacheFrontend_LogMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppCacheFrontend_SetSubresourceFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AppCacheFrontend_SetSubresourceFactory_Params_Data));
      new (data()) AppCacheFrontend_SetSubresourceFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AppCacheFrontend_SetSubresourceFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AppCacheFrontend_SetSubresourceFactory_Params_Data>(index_);
    }
    AppCacheFrontend_SetSubresourceFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data url_loader_factory;

 private:
  AppCacheFrontend_SetSubresourceFactory_Params_Data();
  ~AppCacheFrontend_SetSubresourceFactory_Params_Data() = delete;
};
static_assert(sizeof(AppCacheFrontend_SetSubresourceFactory_Params_Data) == 16,
              "Bad sizeof(AppCacheFrontend_SetSubresourceFactory_Params_Data)");

}  // namespace internal
class AppCacheBackend_RegisterHost_ParamsDataView {
 public:
  AppCacheBackend_RegisterHost_ParamsDataView() {}

  AppCacheBackend_RegisterHost_ParamsDataView(
      internal::AppCacheBackend_RegisterHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::AppCacheHostRequestDataView>(
            &data_->host_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeFrontend() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::AppCacheFrontendPtrDataView>(
            &data_->frontend, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t host_id() const {
    return data_->host_id;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
 private:
  internal::AppCacheBackend_RegisterHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheHost_SetSpawningHostId_ParamsDataView {
 public:
  AppCacheHost_SetSpawningHostId_ParamsDataView() {}

  AppCacheHost_SetSpawningHostId_ParamsDataView(
      internal::AppCacheHost_SetSpawningHostId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t spawning_host_id() const {
    return data_->spawning_host_id;
  }
 private:
  internal::AppCacheHost_SetSpawningHostId_Params_Data* data_ = nullptr;
};

class AppCacheHost_SelectCache_ParamsDataView {
 public:
  AppCacheHost_SelectCache_ParamsDataView() {}

  AppCacheHost_SelectCache_ParamsDataView(
      internal::AppCacheHost_SelectCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDocumentUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentUrl(UserType* output) {
    auto* pointer = data_->document_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t appcache_document_was_loaded_from() const {
    return data_->appcache_document_was_loaded_from;
  }
  inline void GetOptManifestUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptManifestUrl(UserType* output) {
    auto* pointer = data_->opt_manifest_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheHost_SelectCache_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheHost_SelectCacheForSharedWorker_ParamsDataView {
 public:
  AppCacheHost_SelectCacheForSharedWorker_ParamsDataView() {}

  AppCacheHost_SelectCacheForSharedWorker_ParamsDataView(
      internal::AppCacheHost_SelectCacheForSharedWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t appcache_id() const {
    return data_->appcache_id;
  }
 private:
  internal::AppCacheHost_SelectCacheForSharedWorker_Params_Data* data_ = nullptr;
};

class AppCacheHost_MarkAsForeignEntry_ParamsDataView {
 public:
  AppCacheHost_MarkAsForeignEntry_ParamsDataView() {}

  AppCacheHost_MarkAsForeignEntry_ParamsDataView(
      internal::AppCacheHost_MarkAsForeignEntry_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDocumentUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDocumentUrl(UserType* output) {
    auto* pointer = data_->document_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  int64_t appcache_document_was_loaded_from() const {
    return data_->appcache_document_was_loaded_from;
  }
 private:
  internal::AppCacheHost_MarkAsForeignEntry_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheHost_GetStatus_ParamsDataView {
 public:
  AppCacheHost_GetStatus_ParamsDataView() {}

  AppCacheHost_GetStatus_ParamsDataView(
      internal::AppCacheHost_GetStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppCacheHost_GetStatus_Params_Data* data_ = nullptr;
};

class AppCacheHost_GetStatus_ResponseParamsDataView {
 public:
  AppCacheHost_GetStatus_ResponseParamsDataView() {}

  AppCacheHost_GetStatus_ResponseParamsDataView(
      internal::AppCacheHost_GetStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::AppCacheStatus>(
        data_value, output);
  }

  ::blink::mojom::AppCacheStatus status() const {
    return static_cast<::blink::mojom::AppCacheStatus>(data_->status);
  }
 private:
  internal::AppCacheHost_GetStatus_ResponseParams_Data* data_ = nullptr;
};

class AppCacheHost_StartUpdate_ParamsDataView {
 public:
  AppCacheHost_StartUpdate_ParamsDataView() {}

  AppCacheHost_StartUpdate_ParamsDataView(
      internal::AppCacheHost_StartUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppCacheHost_StartUpdate_Params_Data* data_ = nullptr;
};

class AppCacheHost_StartUpdate_ResponseParamsDataView {
 public:
  AppCacheHost_StartUpdate_ResponseParamsDataView() {}

  AppCacheHost_StartUpdate_ResponseParamsDataView(
      internal::AppCacheHost_StartUpdate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::AppCacheHost_StartUpdate_ResponseParams_Data* data_ = nullptr;
};

class AppCacheHost_SwapCache_ParamsDataView {
 public:
  AppCacheHost_SwapCache_ParamsDataView() {}

  AppCacheHost_SwapCache_ParamsDataView(
      internal::AppCacheHost_SwapCache_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppCacheHost_SwapCache_Params_Data* data_ = nullptr;
};

class AppCacheHost_SwapCache_ResponseParamsDataView {
 public:
  AppCacheHost_SwapCache_ResponseParamsDataView() {}

  AppCacheHost_SwapCache_ResponseParamsDataView(
      internal::AppCacheHost_SwapCache_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::AppCacheHost_SwapCache_ResponseParams_Data* data_ = nullptr;
};

class AppCacheHost_GetResourceList_ParamsDataView {
 public:
  AppCacheHost_GetResourceList_ParamsDataView() {}

  AppCacheHost_GetResourceList_ParamsDataView(
      internal::AppCacheHost_GetResourceList_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppCacheHost_GetResourceList_Params_Data* data_ = nullptr;
};

class AppCacheHost_GetResourceList_ResponseParamsDataView {
 public:
  AppCacheHost_GetResourceList_ResponseParamsDataView() {}

  AppCacheHost_GetResourceList_ResponseParamsDataView(
      internal::AppCacheHost_GetResourceList_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<AppCacheResourceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AppCacheResourceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheHost_GetResourceList_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_CacheSelected_ParamsDataView {
 public:
  AppCacheFrontend_CacheSelected_ParamsDataView() {}

  AppCacheFrontend_CacheSelected_ParamsDataView(
      internal::AppCacheFrontend_CacheSelected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::blink::mojom::AppCacheInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::blink::mojom::AppCacheInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_CacheSelected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_EventRaised_ParamsDataView {
 public:
  AppCacheFrontend_EventRaised_ParamsDataView() {}

  AppCacheFrontend_EventRaised_ParamsDataView(
      internal::AppCacheFrontend_EventRaised_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEventId(UserType* output) const {
    auto data_value = data_->event_id;
    return mojo::internal::Deserialize<::blink::mojom::AppCacheEventID>(
        data_value, output);
  }

  AppCacheEventID event_id() const {
    return static_cast<AppCacheEventID>(data_->event_id);
  }
 private:
  internal::AppCacheFrontend_EventRaised_Params_Data* data_ = nullptr;
};

class AppCacheFrontend_ProgressEventRaised_ParamsDataView {
 public:
  AppCacheFrontend_ProgressEventRaised_ParamsDataView() {}

  AppCacheFrontend_ProgressEventRaised_ParamsDataView(
      internal::AppCacheFrontend_ProgressEventRaised_Params_Data* data,
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
  int32_t total() const {
    return data_->total;
  }
  int32_t complete() const {
    return data_->complete;
  }
 private:
  internal::AppCacheFrontend_ProgressEventRaised_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_ErrorEventRaised_ParamsDataView {
 public:
  AppCacheFrontend_ErrorEventRaised_ParamsDataView() {}

  AppCacheFrontend_ErrorEventRaised_ParamsDataView(
      internal::AppCacheFrontend_ErrorEventRaised_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDetailsDataView(
      AppCacheErrorDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorDetails(UserType* output) {
    auto* pointer = data_->error_details.Get();
    return mojo::internal::Deserialize<::blink::mojom::AppCacheErrorDetailsDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_ErrorEventRaised_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_LogMessage_ParamsDataView {
 public:
  AppCacheFrontend_LogMessage_ParamsDataView() {}

  AppCacheFrontend_LogMessage_ParamsDataView(
      internal::AppCacheFrontend_LogMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLogLevel(UserType* output) const {
    auto data_value = data_->log_level;
    return mojo::internal::Deserialize<::blink::mojom::ConsoleMessageLevel>(
        data_value, output);
  }

  ::blink::mojom::ConsoleMessageLevel log_level() const {
    return static_cast<::blink::mojom::ConsoleMessageLevel>(data_->log_level);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AppCacheFrontend_LogMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AppCacheFrontend_SetSubresourceFactory_ParamsDataView {
 public:
  AppCacheFrontend_SetSubresourceFactory_ParamsDataView() {}

  AppCacheFrontend_SetSubresourceFactory_ParamsDataView(
      internal::AppCacheFrontend_SetSubresourceFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoaderFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->url_loader_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AppCacheFrontend_SetSubresourceFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void AppCacheHost_SelectCache_ParamsDataView::GetDocumentUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->document_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void AppCacheHost_SelectCache_ParamsDataView::GetOptManifestUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->opt_manifest_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void AppCacheHost_MarkAsForeignEntry_ParamsDataView::GetDocumentUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->document_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
















inline void AppCacheHost_GetResourceList_ResponseParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<AppCacheResourceInfoDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<AppCacheResourceInfoDataView>(pointer, context_);
}


inline void AppCacheFrontend_CacheSelected_ParamsDataView::GetInfoDataView(
    ::blink::mojom::AppCacheInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::blink::mojom::AppCacheInfoDataView(pointer, context_);
}




inline void AppCacheFrontend_ProgressEventRaised_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void AppCacheFrontend_ErrorEventRaised_ParamsDataView::GetErrorDetailsDataView(
    AppCacheErrorDetailsDataView* output) {
  auto pointer = data_->error_details.Get();
  *output = AppCacheErrorDetailsDataView(pointer, context_);
}


inline void AppCacheFrontend_LogMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_PARAMS_DATA_H_