// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data));
      new (data()) QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data>(index_);
    }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t storage_type;
  uint8_t padfinal_[4];

 private:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data();
  ~QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data) == 24,
              "Bad sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data));
      new (data()) QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data>(index_);
    }
    QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* operator->() { return data(); }

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
  int64_t current_usage;
  int64_t current_quota;
  mojo::internal::Pointer<::blink::mojom::internal::UsageBreakdown_Data> usage_breakdown;

 private:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data();
  ~QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data) == 40,
              "Bad sizeof(QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_RequestStorageQuota_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_RequestStorageQuota_Params_Data));
      new (data()) QuotaDispatcherHost_RequestStorageQuota_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_RequestStorageQuota_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_RequestStorageQuota_Params_Data>(index_);
    }
    QuotaDispatcherHost_RequestStorageQuota_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  int32_t storage_type;
  uint8_t pad1_[4];
  uint64_t requested_size;

 private:
  QuotaDispatcherHost_RequestStorageQuota_Params_Data();
  ~QuotaDispatcherHost_RequestStorageQuota_Params_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_RequestStorageQuota_Params_Data) == 32,
              "Bad sizeof(QuotaDispatcherHost_RequestStorageQuota_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data));
      new (data()) QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data>(index_);
    }
    QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* operator->() { return data(); }

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
  int64_t current_usage;
  int64_t granted_quota;

 private:
  QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data();
  ~QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data() = delete;
};
static_assert(sizeof(QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data) == 32,
              "Bad sizeof(QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data)");

}  // namespace internal
class QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView {
 public:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView() {}

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView(
      internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorageType(UserType* output) const {
    auto data_value = data_->storage_type;
    return mojo::internal::Deserialize<::blink::mojom::StorageType>(
        data_value, output);
  }

  ::blink::mojom::StorageType storage_type() const {
    return static_cast<::blink::mojom::StorageType>(data_->storage_type);
  }
 private:
  internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView {
 public:
  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView() {}

  QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView(
      internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::QuotaStatusCode>(
        data_value, output);
  }

  ::blink::mojom::QuotaStatusCode error() const {
    return static_cast<::blink::mojom::QuotaStatusCode>(data_->error);
  }
  int64_t current_usage() const {
    return data_->current_usage;
  }
  int64_t current_quota() const {
    return data_->current_quota;
  }
  inline void GetUsageBreakdownDataView(
      ::blink::mojom::UsageBreakdownDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsageBreakdown(UserType* output) {
    auto* pointer = data_->usage_breakdown.Get();
    return mojo::internal::Deserialize<::blink::mojom::UsageBreakdownDataView>(
        pointer, output, context_);
  }
 private:
  internal::QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class QuotaDispatcherHost_RequestStorageQuota_ParamsDataView {
 public:
  QuotaDispatcherHost_RequestStorageQuota_ParamsDataView() {}

  QuotaDispatcherHost_RequestStorageQuota_ParamsDataView(
      internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorageType(UserType* output) const {
    auto data_value = data_->storage_type;
    return mojo::internal::Deserialize<::blink::mojom::StorageType>(
        data_value, output);
  }

  ::blink::mojom::StorageType storage_type() const {
    return static_cast<::blink::mojom::StorageType>(data_->storage_type);
  }
  uint64_t requested_size() const {
    return data_->requested_size;
  }
 private:
  internal::QuotaDispatcherHost_RequestStorageQuota_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView {
 public:
  QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView() {}

  QuotaDispatcherHost_RequestStorageQuota_ResponseParamsDataView(
      internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::QuotaStatusCode>(
        data_value, output);
  }

  ::blink::mojom::QuotaStatusCode error() const {
    return static_cast<::blink::mojom::QuotaStatusCode>(data_->error);
  }
  int64_t current_usage() const {
    return data_->current_usage;
  }
  int64_t granted_quota() const {
    return data_->granted_quota;
  }
 private:
  internal::QuotaDispatcherHost_RequestStorageQuota_ResponseParams_Data* data_ = nullptr;
};


inline void QuotaDispatcherHost_QueryStorageUsageAndQuota_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void QuotaDispatcherHost_QueryStorageUsageAndQuota_ResponseParamsDataView::GetUsageBreakdownDataView(
    ::blink::mojom::UsageBreakdownDataView* output) {
  auto pointer = data_->usage_breakdown.Get();
  *output = ::blink::mojom::UsageBreakdownDataView(pointer, context_);
}


inline void QuotaDispatcherHost_RequestStorageQuota_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_PARAMS_DATA_H_