// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NonPersistentNotificationListener_OnShow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnShow_Params_Data));
      new (data()) NonPersistentNotificationListener_OnShow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnShow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnShow_Params_Data>(index_);
    }
    NonPersistentNotificationListener_OnShow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnShow_Params_Data();
  ~NonPersistentNotificationListener_OnShow_Params_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnShow_Params_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnShow_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NonPersistentNotificationListener_OnClick_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClick_Params_Data));
      new (data()) NonPersistentNotificationListener_OnClick_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClick_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClick_Params_Data>(index_);
    }
    NonPersistentNotificationListener_OnClick_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClick_Params_Data();
  ~NonPersistentNotificationListener_OnClick_Params_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClick_Params_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClick_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NonPersistentNotificationListener_OnClick_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClick_ResponseParams_Data));
      new (data()) NonPersistentNotificationListener_OnClick_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClick_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClick_ResponseParams_Data>(index_);
    }
    NonPersistentNotificationListener_OnClick_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClick_ResponseParams_Data();
  ~NonPersistentNotificationListener_OnClick_ResponseParams_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClick_ResponseParams_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClick_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NonPersistentNotificationListener_OnClose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClose_Params_Data));
      new (data()) NonPersistentNotificationListener_OnClose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClose_Params_Data>(index_);
    }
    NonPersistentNotificationListener_OnClose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClose_Params_Data();
  ~NonPersistentNotificationListener_OnClose_Params_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClose_Params_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClose_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NonPersistentNotificationListener_OnClose_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NonPersistentNotificationListener_OnClose_ResponseParams_Data));
      new (data()) NonPersistentNotificationListener_OnClose_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NonPersistentNotificationListener_OnClose_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NonPersistentNotificationListener_OnClose_ResponseParams_Data>(index_);
    }
    NonPersistentNotificationListener_OnClose_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NonPersistentNotificationListener_OnClose_ResponseParams_Data();
  ~NonPersistentNotificationListener_OnClose_ResponseParams_Data() = delete;
};
static_assert(sizeof(NonPersistentNotificationListener_OnClose_ResponseParams_Data) == 8,
              "Bad sizeof(NonPersistentNotificationListener_OnClose_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_GetPermissionStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetPermissionStatus_Params_Data));
      new (data()) NotificationService_GetPermissionStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetPermissionStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetPermissionStatus_Params_Data>(index_);
    }
    NotificationService_GetPermissionStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NotificationService_GetPermissionStatus_Params_Data();
  ~NotificationService_GetPermissionStatus_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_GetPermissionStatus_Params_Data) == 8,
              "Bad sizeof(NotificationService_GetPermissionStatus_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_GetPermissionStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetPermissionStatus_ResponseParams_Data));
      new (data()) NotificationService_GetPermissionStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetPermissionStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetPermissionStatus_ResponseParams_Data>(index_);
    }
    NotificationService_GetPermissionStatus_ResponseParams_Data* operator->() { return data(); }

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
  NotificationService_GetPermissionStatus_ResponseParams_Data();
  ~NotificationService_GetPermissionStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(NotificationService_GetPermissionStatus_ResponseParams_Data) == 16,
              "Bad sizeof(NotificationService_GetPermissionStatus_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_DisplayNonPersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_DisplayNonPersistentNotification_Params_Data));
      new (data()) NotificationService_DisplayNonPersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_DisplayNonPersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_DisplayNonPersistentNotification_Params_Data>(index_);
    }
    NotificationService_DisplayNonPersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data> notification_data;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationResources_Data> notification_resources;
  mojo::internal::Interface_Data event_listener;

 private:
  NotificationService_DisplayNonPersistentNotification_Params_Data();
  ~NotificationService_DisplayNonPersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_DisplayNonPersistentNotification_Params_Data) == 40,
              "Bad sizeof(NotificationService_DisplayNonPersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_CloseNonPersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_CloseNonPersistentNotification_Params_Data));
      new (data()) NotificationService_CloseNonPersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_CloseNonPersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_CloseNonPersistentNotification_Params_Data>(index_);
    }
    NotificationService_CloseNonPersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> token;

 private:
  NotificationService_CloseNonPersistentNotification_Params_Data();
  ~NotificationService_CloseNonPersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_CloseNonPersistentNotification_Params_Data) == 16,
              "Bad sizeof(NotificationService_CloseNonPersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_DisplayPersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_DisplayPersistentNotification_Params_Data));
      new (data()) NotificationService_DisplayPersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_DisplayPersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_DisplayPersistentNotification_Params_Data>(index_);
    }
    NotificationService_DisplayPersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data> notification_data;
  mojo::internal::Pointer<::blink::mojom::internal::NotificationResources_Data> notification_resources;

 private:
  NotificationService_DisplayPersistentNotification_Params_Data();
  ~NotificationService_DisplayPersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_DisplayPersistentNotification_Params_Data) == 32,
              "Bad sizeof(NotificationService_DisplayPersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_DisplayPersistentNotification_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_DisplayPersistentNotification_ResponseParams_Data));
      new (data()) NotificationService_DisplayPersistentNotification_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_DisplayPersistentNotification_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_DisplayPersistentNotification_ResponseParams_Data>(index_);
    }
    NotificationService_DisplayPersistentNotification_ResponseParams_Data* operator->() { return data(); }

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
  NotificationService_DisplayPersistentNotification_ResponseParams_Data();
  ~NotificationService_DisplayPersistentNotification_ResponseParams_Data() = delete;
};
static_assert(sizeof(NotificationService_DisplayPersistentNotification_ResponseParams_Data) == 16,
              "Bad sizeof(NotificationService_DisplayPersistentNotification_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_ClosePersistentNotification_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_ClosePersistentNotification_Params_Data));
      new (data()) NotificationService_ClosePersistentNotification_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_ClosePersistentNotification_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_ClosePersistentNotification_Params_Data>(index_);
    }
    NotificationService_ClosePersistentNotification_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> notification_id;

 private:
  NotificationService_ClosePersistentNotification_Params_Data();
  ~NotificationService_ClosePersistentNotification_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_ClosePersistentNotification_Params_Data) == 16,
              "Bad sizeof(NotificationService_ClosePersistentNotification_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_GetNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetNotifications_Params_Data));
      new (data()) NotificationService_GetNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetNotifications_Params_Data>(index_);
    }
    NotificationService_GetNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;
  mojo::internal::Pointer<mojo::internal::String_Data> filter_tag;
  uint8_t include_triggered : 1;
  uint8_t padfinal_[7];

 private:
  NotificationService_GetNotifications_Params_Data();
  ~NotificationService_GetNotifications_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_GetNotifications_Params_Data) == 32,
              "Bad sizeof(NotificationService_GetNotifications_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationService_GetNotifications_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationService_GetNotifications_ResponseParams_Data));
      new (data()) NotificationService_GetNotifications_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationService_GetNotifications_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationService_GetNotifications_ResponseParams_Data>(index_);
    }
    NotificationService_GetNotifications_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> notification_ids;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::NotificationData_Data>>> notification_datas;

 private:
  NotificationService_GetNotifications_ResponseParams_Data();
  ~NotificationService_GetNotifications_ResponseParams_Data() = delete;
};
static_assert(sizeof(NotificationService_GetNotifications_ResponseParams_Data) == 24,
              "Bad sizeof(NotificationService_GetNotifications_ResponseParams_Data)");

}  // namespace internal
class NonPersistentNotificationListener_OnShow_ParamsDataView {
 public:
  NonPersistentNotificationListener_OnShow_ParamsDataView() {}

  NonPersistentNotificationListener_OnShow_ParamsDataView(
      internal::NonPersistentNotificationListener_OnShow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnShow_Params_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClick_ParamsDataView {
 public:
  NonPersistentNotificationListener_OnClick_ParamsDataView() {}

  NonPersistentNotificationListener_OnClick_ParamsDataView(
      internal::NonPersistentNotificationListener_OnClick_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClick_Params_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClick_ResponseParamsDataView {
 public:
  NonPersistentNotificationListener_OnClick_ResponseParamsDataView() {}

  NonPersistentNotificationListener_OnClick_ResponseParamsDataView(
      internal::NonPersistentNotificationListener_OnClick_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClick_ResponseParams_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClose_ParamsDataView {
 public:
  NonPersistentNotificationListener_OnClose_ParamsDataView() {}

  NonPersistentNotificationListener_OnClose_ParamsDataView(
      internal::NonPersistentNotificationListener_OnClose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClose_Params_Data* data_ = nullptr;
};

class NonPersistentNotificationListener_OnClose_ResponseParamsDataView {
 public:
  NonPersistentNotificationListener_OnClose_ResponseParamsDataView() {}

  NonPersistentNotificationListener_OnClose_ResponseParamsDataView(
      internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NonPersistentNotificationListener_OnClose_ResponseParams_Data* data_ = nullptr;
};

class NotificationService_GetPermissionStatus_ParamsDataView {
 public:
  NotificationService_GetPermissionStatus_ParamsDataView() {}

  NotificationService_GetPermissionStatus_ParamsDataView(
      internal::NotificationService_GetPermissionStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NotificationService_GetPermissionStatus_Params_Data* data_ = nullptr;
};

class NotificationService_GetPermissionStatus_ResponseParamsDataView {
 public:
  NotificationService_GetPermissionStatus_ResponseParamsDataView() {}

  NotificationService_GetPermissionStatus_ResponseParamsDataView(
      internal::NotificationService_GetPermissionStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::PermissionStatus status() const {
    return static_cast<::blink::mojom::PermissionStatus>(data_->status);
  }
 private:
  internal::NotificationService_GetPermissionStatus_ResponseParams_Data* data_ = nullptr;
};

class NotificationService_DisplayNonPersistentNotification_ParamsDataView {
 public:
  NotificationService_DisplayNonPersistentNotification_ParamsDataView() {}

  NotificationService_DisplayNonPersistentNotification_ParamsDataView(
      internal::NotificationService_DisplayNonPersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationDataDataView(
      ::blink::mojom::NotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationDataDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationResourcesDataView(
      ::blink::mojom::NotificationResourcesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationResources(UserType* output) {
    auto* pointer = data_->notification_resources.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationResourcesDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeEventListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NonPersistentNotificationListenerPtrDataView>(
            &data_->event_listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NotificationService_DisplayNonPersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_CloseNonPersistentNotification_ParamsDataView {
 public:
  NotificationService_CloseNonPersistentNotification_ParamsDataView() {}

  NotificationService_CloseNonPersistentNotification_ParamsDataView(
      internal::NotificationService_CloseNonPersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_CloseNonPersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_DisplayPersistentNotification_ParamsDataView {
 public:
  NotificationService_DisplayPersistentNotification_ParamsDataView() {}

  NotificationService_DisplayPersistentNotification_ParamsDataView(
      internal::NotificationService_DisplayPersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetNotificationDataDataView(
      ::blink::mojom::NotificationDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationData(UserType* output) {
    auto* pointer = data_->notification_data.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationDataDataView>(
        pointer, output, context_);
  }
  inline void GetNotificationResourcesDataView(
      ::blink::mojom::NotificationResourcesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationResources(UserType* output) {
    auto* pointer = data_->notification_resources.Get();
    return mojo::internal::Deserialize<::blink::mojom::NotificationResourcesDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_DisplayPersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_DisplayPersistentNotification_ResponseParamsDataView {
 public:
  NotificationService_DisplayPersistentNotification_ResponseParamsDataView() {}

  NotificationService_DisplayPersistentNotification_ResponseParamsDataView(
      internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::PersistentNotificationError>(
        data_value, output);
  }

  PersistentNotificationError error() const {
    return static_cast<PersistentNotificationError>(data_->error);
  }
 private:
  internal::NotificationService_DisplayPersistentNotification_ResponseParams_Data* data_ = nullptr;
};

class NotificationService_ClosePersistentNotification_ParamsDataView {
 public:
  NotificationService_ClosePersistentNotification_ParamsDataView() {}

  NotificationService_ClosePersistentNotification_ParamsDataView(
      internal::NotificationService_ClosePersistentNotification_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationId(UserType* output) {
    auto* pointer = data_->notification_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_ClosePersistentNotification_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_GetNotifications_ParamsDataView {
 public:
  NotificationService_GetNotifications_ParamsDataView() {}

  NotificationService_GetNotifications_ParamsDataView(
      internal::NotificationService_GetNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
  inline void GetFilterTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilterTag(UserType* output) {
    auto* pointer = data_->filter_tag.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool include_triggered() const {
    return data_->include_triggered;
  }
 private:
  internal::NotificationService_GetNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NotificationService_GetNotifications_ResponseParamsDataView {
 public:
  NotificationService_GetNotifications_ResponseParamsDataView() {}

  NotificationService_GetNotifications_ResponseParamsDataView(
      internal::NotificationService_GetNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNotificationIdsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationIds(UserType* output) {
    auto* pointer = data_->notification_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetNotificationDatasDataView(
      mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNotificationDatas(UserType* output) {
    auto* pointer = data_->notification_datas.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NotificationService_GetNotifications_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};
















inline void NotificationService_DisplayNonPersistentNotification_ParamsDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NotificationService_DisplayNonPersistentNotification_ParamsDataView::GetNotificationDataDataView(
    ::blink::mojom::NotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = ::blink::mojom::NotificationDataDataView(pointer, context_);
}
inline void NotificationService_DisplayNonPersistentNotification_ParamsDataView::GetNotificationResourcesDataView(
    ::blink::mojom::NotificationResourcesDataView* output) {
  auto pointer = data_->notification_resources.Get();
  *output = ::blink::mojom::NotificationResourcesDataView(pointer, context_);
}


inline void NotificationService_CloseNonPersistentNotification_ParamsDataView::GetTokenDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->token.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NotificationService_DisplayPersistentNotification_ParamsDataView::GetNotificationDataDataView(
    ::blink::mojom::NotificationDataDataView* output) {
  auto pointer = data_->notification_data.Get();
  *output = ::blink::mojom::NotificationDataDataView(pointer, context_);
}
inline void NotificationService_DisplayPersistentNotification_ParamsDataView::GetNotificationResourcesDataView(
    ::blink::mojom::NotificationResourcesDataView* output) {
  auto pointer = data_->notification_resources.Get();
  *output = ::blink::mojom::NotificationResourcesDataView(pointer, context_);
}




inline void NotificationService_ClosePersistentNotification_ParamsDataView::GetNotificationIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->notification_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NotificationService_GetNotifications_ParamsDataView::GetFilterTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->filter_tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void NotificationService_GetNotifications_ResponseParamsDataView::GetNotificationIdsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->notification_ids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void NotificationService_GetNotifications_ResponseParamsDataView::GetNotificationDatasDataView(
    mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>* output) {
  auto pointer = data_->notification_datas.Get();
  *output = mojo::ArrayDataView<::blink::mojom::NotificationDataDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_SERVICE_MOJOM_PARAMS_DATA_H_