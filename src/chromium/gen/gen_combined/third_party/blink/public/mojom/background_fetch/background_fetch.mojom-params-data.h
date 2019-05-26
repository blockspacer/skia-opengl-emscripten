// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationObserver_OnProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationObserver_OnProgress_Params_Data));
      new (data()) BackgroundFetchRegistrationObserver_OnProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationObserver_OnProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationObserver_OnProgress_Params_Data>(index_);
    }
    BackgroundFetchRegistrationObserver_OnProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t upload_total;
  uint64_t uploaded;
  uint64_t download_total;
  uint64_t downloaded;
  int32_t result;
  int32_t failure_reason;

 private:
  BackgroundFetchRegistrationObserver_OnProgress_Params_Data();
  ~BackgroundFetchRegistrationObserver_OnProgress_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationObserver_OnProgress_Params_Data) == 48,
              "Bad sizeof(BackgroundFetchRegistrationObserver_OnProgress_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data));
      new (data()) BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data>(index_);
    }
    BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data();
  ~BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data) == 8,
              "Bad sizeof(BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data));
      new (data()) BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data>(index_);
    }
    BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data> response;

 private:
  BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data();
  ~BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data) == 24,
              "Bad sizeof(BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_Fetch_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_Fetch_Params_Data));
      new (data()) BackgroundFetchService_Fetch_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_Fetch_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_Fetch_Params_Data>(index_);
    }
    BackgroundFetchService_Fetch_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data>>> requests;
  mojo::internal::Pointer<internal::BackgroundFetchOptions_Data> options;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> icon;
  mojo::internal::Pointer<internal::BackgroundFetchUkmData_Data> ukm_data;

 private:
  BackgroundFetchService_Fetch_Params_Data();
  ~BackgroundFetchService_Fetch_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_Fetch_Params_Data) == 56,
              "Bad sizeof(BackgroundFetchService_Fetch_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_Fetch_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_Fetch_ResponseParams_Data));
      new (data()) BackgroundFetchService_Fetch_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_Fetch_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_Fetch_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_Fetch_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::BackgroundFetchRegistration_Data> registration;

 private:
  BackgroundFetchService_Fetch_ResponseParams_Data();
  ~BackgroundFetchService_Fetch_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_Fetch_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundFetchService_Fetch_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_GetRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetRegistration_Params_Data));
      new (data()) BackgroundFetchService_GetRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetRegistration_Params_Data>(index_);
    }
    BackgroundFetchService_GetRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;

 private:
  BackgroundFetchService_GetRegistration_Params_Data();
  ~BackgroundFetchService_GetRegistration_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetRegistration_Params_Data) == 24,
              "Bad sizeof(BackgroundFetchService_GetRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_GetRegistration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetRegistration_ResponseParams_Data));
      new (data()) BackgroundFetchService_GetRegistration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetRegistration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetRegistration_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_GetRegistration_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::BackgroundFetchRegistration_Data> registration;

 private:
  BackgroundFetchService_GetRegistration_ResponseParams_Data();
  ~BackgroundFetchService_GetRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetRegistration_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundFetchService_GetRegistration_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_GetDeveloperIds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetDeveloperIds_Params_Data));
      new (data()) BackgroundFetchService_GetDeveloperIds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetDeveloperIds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetDeveloperIds_Params_Data>(index_);
    }
    BackgroundFetchService_GetDeveloperIds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;

 private:
  BackgroundFetchService_GetDeveloperIds_Params_Data();
  ~BackgroundFetchService_GetDeveloperIds_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetDeveloperIds_Params_Data) == 16,
              "Bad sizeof(BackgroundFetchService_GetDeveloperIds_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_GetDeveloperIds_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetDeveloperIds_ResponseParams_Data));
      new (data()) BackgroundFetchService_GetDeveloperIds_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetDeveloperIds_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> developer_ids;

 private:
  BackgroundFetchService_GetDeveloperIds_ResponseParams_Data();
  ~BackgroundFetchService_GetDeveloperIds_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetDeveloperIds_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundFetchService_GetDeveloperIds_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_GetIconDisplaySize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetIconDisplaySize_Params_Data));
      new (data()) BackgroundFetchService_GetIconDisplaySize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetIconDisplaySize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetIconDisplaySize_Params_Data>(index_);
    }
    BackgroundFetchService_GetIconDisplaySize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BackgroundFetchService_GetIconDisplaySize_Params_Data();
  ~BackgroundFetchService_GetIconDisplaySize_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetIconDisplaySize_Params_Data) == 8,
              "Bad sizeof(BackgroundFetchService_GetIconDisplaySize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data));
      new (data()) BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data>(index_);
    }
    BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> icon_size_pixels;

 private:
  BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data();
  ~BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_UpdateUI_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_UpdateUI_Params_Data));
      new (data()) BackgroundFetchRegistrationService_UpdateUI_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_UpdateUI_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_UpdateUI_Params_Data>(index_);
    }
    BackgroundFetchRegistrationService_UpdateUI_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> icon;

 private:
  BackgroundFetchRegistrationService_UpdateUI_Params_Data();
  ~BackgroundFetchRegistrationService_UpdateUI_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_UpdateUI_Params_Data) == 24,
              "Bad sizeof(BackgroundFetchRegistrationService_UpdateUI_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data));
      new (data()) BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data>(index_);
    }
    BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data();
  ~BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_Abort_Params_Data));
      new (data()) BackgroundFetchRegistrationService_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_Abort_Params_Data>(index_);
    }
    BackgroundFetchRegistrationService_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BackgroundFetchRegistrationService_Abort_Params_Data();
  ~BackgroundFetchRegistrationService_Abort_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_Abort_Params_Data) == 8,
              "Bad sizeof(BackgroundFetchRegistrationService_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_Abort_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_Abort_ResponseParams_Data));
      new (data()) BackgroundFetchRegistrationService_Abort_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_Abort_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_Abort_ResponseParams_Data>(index_);
    }
    BackgroundFetchRegistrationService_Abort_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  BackgroundFetchRegistrationService_Abort_ResponseParams_Data();
  ~BackgroundFetchRegistrationService_Abort_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_Abort_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchRegistrationService_Abort_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_MatchRequests_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_MatchRequests_Params_Data));
      new (data()) BackgroundFetchRegistrationService_MatchRequests_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_MatchRequests_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_MatchRequests_Params_Data>(index_);
    }
    BackgroundFetchRegistrationService_MatchRequests_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request_to_match;
  mojo::internal::Pointer<::blink::mojom::internal::CacheQueryOptions_Data> cache_query_options;
  uint8_t match_all : 1;
  uint8_t padfinal_[7];

 private:
  BackgroundFetchRegistrationService_MatchRequests_Params_Data();
  ~BackgroundFetchRegistrationService_MatchRequests_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_MatchRequests_Params_Data) == 32,
              "Bad sizeof(BackgroundFetchRegistrationService_MatchRequests_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data));
      new (data()) BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data>(index_);
    }
    BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BackgroundFetchSettledFetch_Data>>> fetches;

 private:
  BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data();
  ~BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data));
      new (data()) BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data>(index_);
    }
    BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data();
  ~BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data) == 16,
              "Bad sizeof(BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data)");

}  // namespace internal
class BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView {
 public:
  BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView() {}

  BackgroundFetchRegistrationObserver_OnProgress_ParamsDataView(
      internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t upload_total() const {
    return data_->upload_total;
  }
  uint64_t uploaded() const {
    return data_->uploaded;
  }
  uint64_t download_total() const {
    return data_->download_total;
  }
  uint64_t downloaded() const {
    return data_->downloaded;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchResult>(
        data_value, output);
  }

  BackgroundFetchResult result() const {
    return static_cast<BackgroundFetchResult>(data_->result);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFailureReason(UserType* output) const {
    auto data_value = data_->failure_reason;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchFailureReason>(
        data_value, output);
  }

  BackgroundFetchFailureReason failure_reason() const {
    return static_cast<BackgroundFetchFailureReason>(data_->failure_reason);
  }
 private:
  internal::BackgroundFetchRegistrationObserver_OnProgress_Params_Data* data_ = nullptr;
};

class BackgroundFetchRegistrationObserver_OnRecordsUnavailable_ParamsDataView {
 public:
  BackgroundFetchRegistrationObserver_OnRecordsUnavailable_ParamsDataView() {}

  BackgroundFetchRegistrationObserver_OnRecordsUnavailable_ParamsDataView(
      internal::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BackgroundFetchRegistrationObserver_OnRecordsUnavailable_Params_Data* data_ = nullptr;
};

class BackgroundFetchRegistrationObserver_OnRequestCompleted_ParamsDataView {
 public:
  BackgroundFetchRegistrationObserver_OnRequestCompleted_ParamsDataView() {}

  BackgroundFetchRegistrationObserver_OnRequestCompleted_ParamsDataView(
      internal::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchRegistrationObserver_OnRequestCompleted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_Fetch_ParamsDataView {
 public:
  BackgroundFetchService_Fetch_ParamsDataView() {}

  BackgroundFetchService_Fetch_ParamsDataView(
      internal::BackgroundFetchService_Fetch_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRequestsDataView(
      mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequests(UserType* output) {
    auto* pointer = data_->requests.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      BackgroundFetchOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
  inline void GetUkmDataDataView(
      BackgroundFetchUkmDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUkmData(UserType* output) {
    auto* pointer = data_->ukm_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchUkmDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_Fetch_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_Fetch_ResponseParamsDataView {
 public:
  BackgroundFetchService_Fetch_ResponseParamsDataView() {}

  BackgroundFetchService_Fetch_ResponseParamsDataView(
      internal::BackgroundFetchService_Fetch_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
  inline void GetRegistrationDataView(
      BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_Fetch_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetRegistration_ParamsDataView {
 public:
  BackgroundFetchService_GetRegistration_ParamsDataView() {}

  BackgroundFetchService_GetRegistration_ParamsDataView(
      internal::BackgroundFetchService_GetRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetDeveloperIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperId(UserType* output) {
    auto* pointer = data_->developer_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetRegistration_ResponseParamsDataView {
 public:
  BackgroundFetchService_GetRegistration_ResponseParamsDataView() {}

  BackgroundFetchService_GetRegistration_ResponseParamsDataView(
      internal::BackgroundFetchService_GetRegistration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
  inline void GetRegistrationDataView(
      BackgroundFetchRegistrationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistration(UserType* output) {
    auto* pointer = data_->registration.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetRegistration_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetDeveloperIds_ParamsDataView {
 public:
  BackgroundFetchService_GetDeveloperIds_ParamsDataView() {}

  BackgroundFetchService_GetDeveloperIds_ParamsDataView(
      internal::BackgroundFetchService_GetDeveloperIds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::BackgroundFetchService_GetDeveloperIds_Params_Data* data_ = nullptr;
};

class BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView {
 public:
  BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView() {}

  BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView(
      internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
  inline void GetDeveloperIdsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeveloperIds(UserType* output) {
    auto* pointer = data_->developer_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetDeveloperIds_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchService_GetIconDisplaySize_ParamsDataView {
 public:
  BackgroundFetchService_GetIconDisplaySize_ParamsDataView() {}

  BackgroundFetchService_GetIconDisplaySize_ParamsDataView(
      internal::BackgroundFetchService_GetIconDisplaySize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BackgroundFetchService_GetIconDisplaySize_Params_Data* data_ = nullptr;
};

class BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView {
 public:
  BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView() {}

  BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView(
      internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIconSizePixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIconSizePixels(UserType* output) {
    auto* pointer = data_->icon_size_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchService_GetIconDisplaySize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationService_UpdateUI_ParamsDataView {
 public:
  BackgroundFetchRegistrationService_UpdateUI_ParamsDataView() {}

  BackgroundFetchRegistrationService_UpdateUI_ParamsDataView(
      internal::BackgroundFetchRegistrationService_UpdateUI_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetIconDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcon(UserType* output) {
    auto* pointer = data_->icon.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchRegistrationService_UpdateUI_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationService_UpdateUI_ResponseParamsDataView {
 public:
  BackgroundFetchRegistrationService_UpdateUI_ResponseParamsDataView() {}

  BackgroundFetchRegistrationService_UpdateUI_ResponseParamsDataView(
      internal::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
 private:
  internal::BackgroundFetchRegistrationService_UpdateUI_ResponseParams_Data* data_ = nullptr;
};

class BackgroundFetchRegistrationService_Abort_ParamsDataView {
 public:
  BackgroundFetchRegistrationService_Abort_ParamsDataView() {}

  BackgroundFetchRegistrationService_Abort_ParamsDataView(
      internal::BackgroundFetchRegistrationService_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BackgroundFetchRegistrationService_Abort_Params_Data* data_ = nullptr;
};

class BackgroundFetchRegistrationService_Abort_ResponseParamsDataView {
 public:
  BackgroundFetchRegistrationService_Abort_ResponseParamsDataView() {}

  BackgroundFetchRegistrationService_Abort_ResponseParamsDataView(
      internal::BackgroundFetchRegistrationService_Abort_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundFetchError>(
        data_value, output);
  }

  BackgroundFetchError error() const {
    return static_cast<BackgroundFetchError>(data_->error);
  }
 private:
  internal::BackgroundFetchRegistrationService_Abort_ResponseParams_Data* data_ = nullptr;
};

class BackgroundFetchRegistrationService_MatchRequests_ParamsDataView {
 public:
  BackgroundFetchRegistrationService_MatchRequests_ParamsDataView() {}

  BackgroundFetchRegistrationService_MatchRequests_ParamsDataView(
      internal::BackgroundFetchRegistrationService_MatchRequests_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestToMatchDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestToMatch(UserType* output) {
    auto* pointer = data_->request_to_match.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetCacheQueryOptionsDataView(
      ::blink::mojom::CacheQueryOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheQueryOptions(UserType* output) {
    auto* pointer = data_->cache_query_options.Get();
    return mojo::internal::Deserialize<::blink::mojom::CacheQueryOptionsDataView>(
        pointer, output, context_);
  }
  bool match_all() const {
    return data_->match_all;
  }
 private:
  internal::BackgroundFetchRegistrationService_MatchRequests_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationService_MatchRequests_ResponseParamsDataView {
 public:
  BackgroundFetchRegistrationService_MatchRequests_ResponseParamsDataView() {}

  BackgroundFetchRegistrationService_MatchRequests_ResponseParamsDataView(
      internal::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFetchesDataView(
      mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetches(UserType* output) {
    auto* pointer = data_->fetches.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::BackgroundFetchSettledFetchDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundFetchRegistrationService_MatchRequests_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundFetchRegistrationService_AddRegistrationObserver_ParamsDataView {
 public:
  BackgroundFetchRegistrationService_AddRegistrationObserver_ParamsDataView() {}

  BackgroundFetchRegistrationService_AddRegistrationObserver_ParamsDataView(
      internal::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BackgroundFetchRegistrationObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BackgroundFetchRegistrationService_AddRegistrationObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void BackgroundFetchRegistrationObserver_OnRequestCompleted_ParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void BackgroundFetchRegistrationObserver_OnRequestCompleted_ParamsDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ::blink::mojom::FetchAPIResponseDataView(pointer, context_);
}


inline void BackgroundFetchService_Fetch_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetRequestsDataView(
    mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>* output) {
  auto pointer = data_->requests.Get();
  *output = mojo::ArrayDataView<::blink::mojom::FetchAPIRequestDataView>(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetOptionsDataView(
    BackgroundFetchOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = BackgroundFetchOptionsDataView(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetIconDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}
inline void BackgroundFetchService_Fetch_ParamsDataView::GetUkmDataDataView(
    BackgroundFetchUkmDataDataView* output) {
  auto pointer = data_->ukm_data.Get();
  *output = BackgroundFetchUkmDataDataView(pointer, context_);
}


inline void BackgroundFetchService_Fetch_ResponseParamsDataView::GetRegistrationDataView(
    BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = BackgroundFetchRegistrationDataView(pointer, context_);
}


inline void BackgroundFetchService_GetRegistration_ParamsDataView::GetDeveloperIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->developer_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BackgroundFetchService_GetRegistration_ResponseParamsDataView::GetRegistrationDataView(
    BackgroundFetchRegistrationDataView* output) {
  auto pointer = data_->registration.Get();
  *output = BackgroundFetchRegistrationDataView(pointer, context_);
}




inline void BackgroundFetchService_GetDeveloperIds_ResponseParamsDataView::GetDeveloperIdsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->developer_ids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}




inline void BackgroundFetchService_GetIconDisplaySize_ResponseParamsDataView::GetIconSizePixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->icon_size_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void BackgroundFetchRegistrationService_UpdateUI_ParamsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BackgroundFetchRegistrationService_UpdateUI_ParamsDataView::GetIconDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->icon.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}








inline void BackgroundFetchRegistrationService_MatchRequests_ParamsDataView::GetRequestToMatchDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request_to_match.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void BackgroundFetchRegistrationService_MatchRequests_ParamsDataView::GetCacheQueryOptionsDataView(
    ::blink::mojom::CacheQueryOptionsDataView* output) {
  auto pointer = data_->cache_query_options.Get();
  *output = ::blink::mojom::CacheQueryOptionsDataView(pointer, context_);
}


inline void BackgroundFetchRegistrationService_MatchRequests_ResponseParamsDataView::GetFetchesDataView(
    mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>* output) {
  auto pointer = data_->fetches.Get();
  *output = mojo::ArrayDataView<BackgroundFetchSettledFetchDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_PARAMS_DATA_H_