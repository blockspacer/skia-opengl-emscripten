// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionObserver_OnPermissionStatusChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionObserver_OnPermissionStatusChange_Params_Data));
      new (data()) PermissionObserver_OnPermissionStatusChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionObserver_OnPermissionStatusChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionObserver_OnPermissionStatusChange_Params_Data>(index_);
    }
    PermissionObserver_OnPermissionStatusChange_Params_Data* operator->() { return data(); }

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
  PermissionObserver_OnPermissionStatusChange_Params_Data();
  ~PermissionObserver_OnPermissionStatusChange_Params_Data() = delete;
};
static_assert(sizeof(PermissionObserver_OnPermissionStatusChange_Params_Data) == 16,
              "Bad sizeof(PermissionObserver_OnPermissionStatusChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_HasPermission_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_HasPermission_Params_Data));
      new (data()) PermissionService_HasPermission_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_HasPermission_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_HasPermission_Params_Data>(index_);
    }
    PermissionService_HasPermission_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PermissionDescriptor_Data> permission;

 private:
  PermissionService_HasPermission_Params_Data();
  ~PermissionService_HasPermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_HasPermission_Params_Data) == 16,
              "Bad sizeof(PermissionService_HasPermission_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_HasPermission_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_HasPermission_ResponseParams_Data));
      new (data()) PermissionService_HasPermission_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_HasPermission_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_HasPermission_ResponseParams_Data>(index_);
    }
    PermissionService_HasPermission_ResponseParams_Data* operator->() { return data(); }

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
  PermissionService_HasPermission_ResponseParams_Data();
  ~PermissionService_HasPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_HasPermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_HasPermission_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_RequestPermission_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_RequestPermission_Params_Data));
      new (data()) PermissionService_RequestPermission_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_RequestPermission_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_RequestPermission_Params_Data>(index_);
    }
    PermissionService_RequestPermission_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PermissionDescriptor_Data> permission;
  uint8_t user_gesture : 1;
  uint8_t padfinal_[7];

 private:
  PermissionService_RequestPermission_Params_Data();
  ~PermissionService_RequestPermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermission_Params_Data) == 24,
              "Bad sizeof(PermissionService_RequestPermission_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_RequestPermission_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_RequestPermission_ResponseParams_Data));
      new (data()) PermissionService_RequestPermission_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_RequestPermission_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_RequestPermission_ResponseParams_Data>(index_);
    }
    PermissionService_RequestPermission_ResponseParams_Data* operator->() { return data(); }

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
  PermissionService_RequestPermission_ResponseParams_Data();
  ~PermissionService_RequestPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_RequestPermission_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_RequestPermissions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_RequestPermissions_Params_Data));
      new (data()) PermissionService_RequestPermissions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_RequestPermissions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_RequestPermissions_Params_Data>(index_);
    }
    PermissionService_RequestPermissions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PermissionDescriptor_Data>>> permission;
  uint8_t user_gesture : 1;
  uint8_t padfinal_[7];

 private:
  PermissionService_RequestPermissions_Params_Data();
  ~PermissionService_RequestPermissions_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermissions_Params_Data) == 24,
              "Bad sizeof(PermissionService_RequestPermissions_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_RequestPermissions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_RequestPermissions_ResponseParams_Data));
      new (data()) PermissionService_RequestPermissions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_RequestPermissions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_RequestPermissions_ResponseParams_Data>(index_);
    }
    PermissionService_RequestPermissions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> statuses;

 private:
  PermissionService_RequestPermissions_ResponseParams_Data();
  ~PermissionService_RequestPermissions_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermissions_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_RequestPermissions_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_RevokePermission_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_RevokePermission_Params_Data));
      new (data()) PermissionService_RevokePermission_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_RevokePermission_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_RevokePermission_Params_Data>(index_);
    }
    PermissionService_RevokePermission_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PermissionDescriptor_Data> permission;

 private:
  PermissionService_RevokePermission_Params_Data();
  ~PermissionService_RevokePermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_RevokePermission_Params_Data) == 16,
              "Bad sizeof(PermissionService_RevokePermission_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_RevokePermission_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_RevokePermission_ResponseParams_Data));
      new (data()) PermissionService_RevokePermission_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_RevokePermission_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_RevokePermission_ResponseParams_Data>(index_);
    }
    PermissionService_RevokePermission_ResponseParams_Data* operator->() { return data(); }

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
  PermissionService_RevokePermission_ResponseParams_Data();
  ~PermissionService_RevokePermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_RevokePermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_RevokePermission_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionService_AddPermissionObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionService_AddPermissionObserver_Params_Data));
      new (data()) PermissionService_AddPermissionObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionService_AddPermissionObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionService_AddPermissionObserver_Params_Data>(index_);
    }
    PermissionService_AddPermissionObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PermissionDescriptor_Data> permission;
  int32_t last_known_status;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  PermissionService_AddPermissionObserver_Params_Data();
  ~PermissionService_AddPermissionObserver_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_AddPermissionObserver_Params_Data) == 32,
              "Bad sizeof(PermissionService_AddPermissionObserver_Params_Data)");

}  // namespace internal
class PermissionObserver_OnPermissionStatusChange_ParamsDataView {
 public:
  PermissionObserver_OnPermissionStatusChange_ParamsDataView() {}

  PermissionObserver_OnPermissionStatusChange_ParamsDataView(
      internal::PermissionObserver_OnPermissionStatusChange_Params_Data* data,
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
  internal::PermissionObserver_OnPermissionStatusChange_Params_Data* data_ = nullptr;
};

class PermissionService_HasPermission_ParamsDataView {
 public:
  PermissionService_HasPermission_ParamsDataView() {}

  PermissionService_HasPermission_ParamsDataView(
      internal::PermissionService_HasPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPermissionDataView(
      PermissionDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPermission(UserType* output) {
    auto* pointer = data_->permission.Get();
    return mojo::internal::Deserialize<::blink::mojom::PermissionDescriptorDataView>(
        pointer, output, context_);
  }
 private:
  internal::PermissionService_HasPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PermissionService_HasPermission_ResponseParamsDataView {
 public:
  PermissionService_HasPermission_ResponseParamsDataView() {}

  PermissionService_HasPermission_ResponseParamsDataView(
      internal::PermissionService_HasPermission_ResponseParams_Data* data,
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
  internal::PermissionService_HasPermission_ResponseParams_Data* data_ = nullptr;
};

class PermissionService_RequestPermission_ParamsDataView {
 public:
  PermissionService_RequestPermission_ParamsDataView() {}

  PermissionService_RequestPermission_ParamsDataView(
      internal::PermissionService_RequestPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPermissionDataView(
      PermissionDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPermission(UserType* output) {
    auto* pointer = data_->permission.Get();
    return mojo::internal::Deserialize<::blink::mojom::PermissionDescriptorDataView>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::PermissionService_RequestPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PermissionService_RequestPermission_ResponseParamsDataView {
 public:
  PermissionService_RequestPermission_ResponseParamsDataView() {}

  PermissionService_RequestPermission_ResponseParamsDataView(
      internal::PermissionService_RequestPermission_ResponseParams_Data* data,
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
  internal::PermissionService_RequestPermission_ResponseParams_Data* data_ = nullptr;
};

class PermissionService_RequestPermissions_ParamsDataView {
 public:
  PermissionService_RequestPermissions_ParamsDataView() {}

  PermissionService_RequestPermissions_ParamsDataView(
      internal::PermissionService_RequestPermissions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPermissionDataView(
      mojo::ArrayDataView<PermissionDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPermission(UserType* output) {
    auto* pointer = data_->permission.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PermissionDescriptorDataView>>(
        pointer, output, context_);
  }
  bool user_gesture() const {
    return data_->user_gesture;
  }
 private:
  internal::PermissionService_RequestPermissions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PermissionService_RequestPermissions_ResponseParamsDataView {
 public:
  PermissionService_RequestPermissions_ResponseParamsDataView() {}

  PermissionService_RequestPermissions_ResponseParamsDataView(
      internal::PermissionService_RequestPermissions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusesDataView(
      mojo::ArrayDataView<::blink::mojom::PermissionStatus>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatuses(UserType* output) {
    auto* pointer = data_->statuses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PermissionStatus>>(
        pointer, output, context_);
  }
 private:
  internal::PermissionService_RequestPermissions_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PermissionService_RevokePermission_ParamsDataView {
 public:
  PermissionService_RevokePermission_ParamsDataView() {}

  PermissionService_RevokePermission_ParamsDataView(
      internal::PermissionService_RevokePermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPermissionDataView(
      PermissionDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPermission(UserType* output) {
    auto* pointer = data_->permission.Get();
    return mojo::internal::Deserialize<::blink::mojom::PermissionDescriptorDataView>(
        pointer, output, context_);
  }
 private:
  internal::PermissionService_RevokePermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PermissionService_RevokePermission_ResponseParamsDataView {
 public:
  PermissionService_RevokePermission_ResponseParamsDataView() {}

  PermissionService_RevokePermission_ResponseParamsDataView(
      internal::PermissionService_RevokePermission_ResponseParams_Data* data,
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
  internal::PermissionService_RevokePermission_ResponseParams_Data* data_ = nullptr;
};

class PermissionService_AddPermissionObserver_ParamsDataView {
 public:
  PermissionService_AddPermissionObserver_ParamsDataView() {}

  PermissionService_AddPermissionObserver_ParamsDataView(
      internal::PermissionService_AddPermissionObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPermissionDataView(
      PermissionDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPermission(UserType* output) {
    auto* pointer = data_->permission.Get();
    return mojo::internal::Deserialize<::blink::mojom::PermissionDescriptorDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastKnownStatus(UserType* output) const {
    auto data_value = data_->last_known_status;
    return mojo::internal::Deserialize<::blink::mojom::PermissionStatus>(
        data_value, output);
  }

  ::blink::mojom::PermissionStatus last_known_status() const {
    return static_cast<::blink::mojom::PermissionStatus>(data_->last_known_status);
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PermissionObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PermissionService_AddPermissionObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void PermissionService_HasPermission_ParamsDataView::GetPermissionDataView(
    PermissionDescriptorDataView* output) {
  auto pointer = data_->permission.Get();
  *output = PermissionDescriptorDataView(pointer, context_);
}




inline void PermissionService_RequestPermission_ParamsDataView::GetPermissionDataView(
    PermissionDescriptorDataView* output) {
  auto pointer = data_->permission.Get();
  *output = PermissionDescriptorDataView(pointer, context_);
}




inline void PermissionService_RequestPermissions_ParamsDataView::GetPermissionDataView(
    mojo::ArrayDataView<PermissionDescriptorDataView>* output) {
  auto pointer = data_->permission.Get();
  *output = mojo::ArrayDataView<PermissionDescriptorDataView>(pointer, context_);
}


inline void PermissionService_RequestPermissions_ResponseParamsDataView::GetStatusesDataView(
    mojo::ArrayDataView<::blink::mojom::PermissionStatus>* output) {
  auto pointer = data_->statuses.Get();
  *output = mojo::ArrayDataView<::blink::mojom::PermissionStatus>(pointer, context_);
}


inline void PermissionService_RevokePermission_ParamsDataView::GetPermissionDataView(
    PermissionDescriptorDataView* output) {
  auto pointer = data_->permission.Get();
  *output = PermissionDescriptorDataView(pointer, context_);
}




inline void PermissionService_AddPermissionObserver_ParamsDataView::GetPermissionDataView(
    PermissionDescriptorDataView* output) {
  auto pointer = data_->permission.Get();
  *output = PermissionDescriptorDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_PARAMS_DATA_H_