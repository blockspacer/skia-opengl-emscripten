// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_AppendSubscriptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_AppendSubscriptions_Params_Data));
      new (data()) CookieStore_AppendSubscriptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_AppendSubscriptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_AppendSubscriptions_Params_Data>(index_);
    }
    CookieStore_AppendSubscriptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CookieChangeSubscription_Data>>> subscriptions;

 private:
  CookieStore_AppendSubscriptions_Params_Data();
  ~CookieStore_AppendSubscriptions_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_AppendSubscriptions_Params_Data) == 24,
              "Bad sizeof(CookieStore_AppendSubscriptions_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_AppendSubscriptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_AppendSubscriptions_ResponseParams_Data));
      new (data()) CookieStore_AppendSubscriptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_AppendSubscriptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_AppendSubscriptions_ResponseParams_Data>(index_);
    }
    CookieStore_AppendSubscriptions_ResponseParams_Data* operator->() { return data(); }

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
  CookieStore_AppendSubscriptions_ResponseParams_Data();
  ~CookieStore_AppendSubscriptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_AppendSubscriptions_ResponseParams_Data) == 16,
              "Bad sizeof(CookieStore_AppendSubscriptions_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_GetSubscriptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_GetSubscriptions_Params_Data));
      new (data()) CookieStore_GetSubscriptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_GetSubscriptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_GetSubscriptions_Params_Data>(index_);
    }
    CookieStore_GetSubscriptions_Params_Data* operator->() { return data(); }

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
  CookieStore_GetSubscriptions_Params_Data();
  ~CookieStore_GetSubscriptions_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_GetSubscriptions_Params_Data) == 16,
              "Bad sizeof(CookieStore_GetSubscriptions_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieStore_GetSubscriptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieStore_GetSubscriptions_ResponseParams_Data));
      new (data()) CookieStore_GetSubscriptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieStore_GetSubscriptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieStore_GetSubscriptions_ResponseParams_Data>(index_);
    }
    CookieStore_GetSubscriptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CookieChangeSubscription_Data>>> subscriptions;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  CookieStore_GetSubscriptions_ResponseParams_Data();
  ~CookieStore_GetSubscriptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_GetSubscriptions_ResponseParams_Data) == 24,
              "Bad sizeof(CookieStore_GetSubscriptions_ResponseParams_Data)");

}  // namespace internal
class CookieStore_AppendSubscriptions_ParamsDataView {
 public:
  CookieStore_AppendSubscriptions_ParamsDataView() {}

  CookieStore_AppendSubscriptions_ParamsDataView(
      internal::CookieStore_AppendSubscriptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetSubscriptionsDataView(
      mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubscriptions(UserType* output) {
    auto* pointer = data_->subscriptions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::CookieChangeSubscriptionDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CookieStore_AppendSubscriptions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CookieStore_AppendSubscriptions_ResponseParamsDataView {
 public:
  CookieStore_AppendSubscriptions_ResponseParamsDataView() {}

  CookieStore_AppendSubscriptions_ResponseParamsDataView(
      internal::CookieStore_AppendSubscriptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieStore_AppendSubscriptions_ResponseParams_Data* data_ = nullptr;
};

class CookieStore_GetSubscriptions_ParamsDataView {
 public:
  CookieStore_GetSubscriptions_ParamsDataView() {}

  CookieStore_GetSubscriptions_ParamsDataView(
      internal::CookieStore_GetSubscriptions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::CookieStore_GetSubscriptions_Params_Data* data_ = nullptr;
};

class CookieStore_GetSubscriptions_ResponseParamsDataView {
 public:
  CookieStore_GetSubscriptions_ResponseParamsDataView() {}

  CookieStore_GetSubscriptions_ResponseParamsDataView(
      internal::CookieStore_GetSubscriptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSubscriptionsDataView(
      mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSubscriptions(UserType* output) {
    auto* pointer = data_->subscriptions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::CookieChangeSubscriptionDataView>>(
        pointer, output, context_);
  }
  bool success() const {
    return data_->success;
  }
 private:
  internal::CookieStore_GetSubscriptions_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CookieStore_AppendSubscriptions_ParamsDataView::GetSubscriptionsDataView(
    mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output) {
  auto pointer = data_->subscriptions.Get();
  *output = mojo::ArrayDataView<CookieChangeSubscriptionDataView>(pointer, context_);
}






inline void CookieStore_GetSubscriptions_ResponseParamsDataView::GetSubscriptionsDataView(
    mojo::ArrayDataView<CookieChangeSubscriptionDataView>* output) {
  auto pointer = data_->subscriptions.Get();
  *output = mojo::ArrayDataView<CookieChangeSubscriptionDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_PARAMS_DATA_H_