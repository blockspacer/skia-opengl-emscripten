// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PushMessaging_Subscribe_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Subscribe_Params_Data));
      new (data()) PushMessaging_Subscribe_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Subscribe_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Subscribe_Params_Data>(index_);
    }
    PushMessaging_Subscribe_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  uint8_t user_gesture : 1;
  uint8_t pad1_[3];
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<internal::PushSubscriptionOptions_Data> options;

 private:
  PushMessaging_Subscribe_Params_Data();
  ~PushMessaging_Subscribe_Params_Data() = delete;
};
static_assert(sizeof(PushMessaging_Subscribe_Params_Data) == 32,
              "Bad sizeof(PushMessaging_Subscribe_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PushMessaging_Subscribe_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Subscribe_ResponseParams_Data));
      new (data()) PushMessaging_Subscribe_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Subscribe_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Subscribe_ResponseParams_Data>(index_);
    }
    PushMessaging_Subscribe_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> endpoint;
  mojo::internal::Pointer<internal::PushSubscriptionOptions_Data> options;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> p256dh;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> auth;

 private:
  PushMessaging_Subscribe_ResponseParams_Data();
  ~PushMessaging_Subscribe_ResponseParams_Data() = delete;
};
static_assert(sizeof(PushMessaging_Subscribe_ResponseParams_Data) == 48,
              "Bad sizeof(PushMessaging_Subscribe_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PushMessaging_Unsubscribe_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Unsubscribe_Params_Data));
      new (data()) PushMessaging_Unsubscribe_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Unsubscribe_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Unsubscribe_Params_Data>(index_);
    }
    PushMessaging_Unsubscribe_Params_Data* operator->() { return data(); }

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
  PushMessaging_Unsubscribe_Params_Data();
  ~PushMessaging_Unsubscribe_Params_Data() = delete;
};
static_assert(sizeof(PushMessaging_Unsubscribe_Params_Data) == 16,
              "Bad sizeof(PushMessaging_Unsubscribe_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PushMessaging_Unsubscribe_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_Unsubscribe_ResponseParams_Data));
      new (data()) PushMessaging_Unsubscribe_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_Unsubscribe_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_Unsubscribe_ResponseParams_Data>(index_);
    }
    PushMessaging_Unsubscribe_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_type;
  uint8_t did_unsubscribe : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  PushMessaging_Unsubscribe_ResponseParams_Data();
  ~PushMessaging_Unsubscribe_ResponseParams_Data() = delete;
};
static_assert(sizeof(PushMessaging_Unsubscribe_ResponseParams_Data) == 24,
              "Bad sizeof(PushMessaging_Unsubscribe_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PushMessaging_GetSubscription_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_GetSubscription_Params_Data));
      new (data()) PushMessaging_GetSubscription_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_GetSubscription_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_GetSubscription_Params_Data>(index_);
    }
    PushMessaging_GetSubscription_Params_Data* operator->() { return data(); }

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
  PushMessaging_GetSubscription_Params_Data();
  ~PushMessaging_GetSubscription_Params_Data() = delete;
};
static_assert(sizeof(PushMessaging_GetSubscription_Params_Data) == 16,
              "Bad sizeof(PushMessaging_GetSubscription_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PushMessaging_GetSubscription_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PushMessaging_GetSubscription_ResponseParams_Data));
      new (data()) PushMessaging_GetSubscription_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PushMessaging_GetSubscription_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PushMessaging_GetSubscription_ResponseParams_Data>(index_);
    }
    PushMessaging_GetSubscription_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> endpoint;
  mojo::internal::Pointer<internal::PushSubscriptionOptions_Data> options;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> p256dh;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> auth;

 private:
  PushMessaging_GetSubscription_ResponseParams_Data();
  ~PushMessaging_GetSubscription_ResponseParams_Data() = delete;
};
static_assert(sizeof(PushMessaging_GetSubscription_ResponseParams_Data) == 48,
              "Bad sizeof(PushMessaging_GetSubscription_ResponseParams_Data)");

}  // namespace internal
class PushMessaging_Subscribe_ParamsDataView {
 public:
  PushMessaging_Subscribe_ParamsDataView() {}

  PushMessaging_Subscribe_ParamsDataView(
      internal::PushMessaging_Subscribe_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetOptionsDataView(
      PushSubscriptionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::PushSubscriptionOptionsDataView>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::PushMessaging_Subscribe_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_Subscribe_ResponseParamsDataView {
 public:
  PushMessaging_Subscribe_ResponseParamsDataView() {}

  PushMessaging_Subscribe_ResponseParamsDataView(
      internal::PushMessaging_Subscribe_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::PushRegistrationStatus>(
        data_value, output);
  }

  ::blink::mojom::PushRegistrationStatus status() const {
    return static_cast<::blink::mojom::PushRegistrationStatus>(data_->status);
  }
  inline void GetEndpointDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoint(UserType* output) {
    auto* pointer = data_->endpoint.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      PushSubscriptionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::PushSubscriptionOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetP256dhDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadP256dh(UserType* output) {
    auto* pointer = data_->p256dh.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAuthDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuth(UserType* output) {
    auto* pointer = data_->auth.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::PushMessaging_Subscribe_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_Unsubscribe_ParamsDataView {
 public:
  PushMessaging_Unsubscribe_ParamsDataView() {}

  PushMessaging_Unsubscribe_ParamsDataView(
      internal::PushMessaging_Unsubscribe_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::PushMessaging_Unsubscribe_Params_Data* data_ = nullptr;
};

class PushMessaging_Unsubscribe_ResponseParamsDataView {
 public:
  PushMessaging_Unsubscribe_ResponseParamsDataView() {}

  PushMessaging_Unsubscribe_ResponseParamsDataView(
      internal::PushMessaging_Unsubscribe_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::blink::mojom::PushErrorType>(
        data_value, output);
  }

  PushErrorType error_type() const {
    return static_cast<PushErrorType>(data_->error_type);
  }
  bool did_unsubscribe() const {
    return data_->did_unsubscribe;
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorMessage(UserType* output) {
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PushMessaging_Unsubscribe_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PushMessaging_GetSubscription_ParamsDataView {
 public:
  PushMessaging_GetSubscription_ParamsDataView() {}

  PushMessaging_GetSubscription_ParamsDataView(
      internal::PushMessaging_GetSubscription_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::PushMessaging_GetSubscription_Params_Data* data_ = nullptr;
};

class PushMessaging_GetSubscription_ResponseParamsDataView {
 public:
  PushMessaging_GetSubscription_ResponseParamsDataView() {}

  PushMessaging_GetSubscription_ResponseParamsDataView(
      internal::PushMessaging_GetSubscription_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::PushGetRegistrationStatus>(
        data_value, output);
  }

  ::blink::mojom::PushGetRegistrationStatus status() const {
    return static_cast<::blink::mojom::PushGetRegistrationStatus>(data_->status);
  }
  inline void GetEndpointDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoint(UserType* output) {
    auto* pointer = data_->endpoint.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      PushSubscriptionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::PushSubscriptionOptionsDataView>(
        pointer, output, context_);
  }
  inline void GetP256dhDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadP256dh(UserType* output) {
    auto* pointer = data_->p256dh.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetAuthDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAuth(UserType* output) {
    auto* pointer = data_->auth.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::PushMessaging_GetSubscription_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PushMessaging_Subscribe_ParamsDataView::GetOptionsDataView(
    PushSubscriptionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PushSubscriptionOptionsDataView(pointer, context_);
}


inline void PushMessaging_Subscribe_ResponseParamsDataView::GetEndpointDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->endpoint.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PushMessaging_Subscribe_ResponseParamsDataView::GetOptionsDataView(
    PushSubscriptionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PushSubscriptionOptionsDataView(pointer, context_);
}
inline void PushMessaging_Subscribe_ResponseParamsDataView::GetP256dhDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->p256dh.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PushMessaging_Subscribe_ResponseParamsDataView::GetAuthDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->auth.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void PushMessaging_Unsubscribe_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetEndpointDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->endpoint.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetOptionsDataView(
    PushSubscriptionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PushSubscriptionOptionsDataView(pointer, context_);
}
inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetP256dhDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->p256dh.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void PushMessaging_GetSubscription_ResponseParamsDataView::GetAuthDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->auth.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_PARAMS_DATA_H_