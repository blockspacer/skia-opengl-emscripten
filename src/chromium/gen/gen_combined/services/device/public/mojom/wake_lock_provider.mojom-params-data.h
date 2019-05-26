// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_PARAMS_DATA_H_

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
namespace device {
namespace mojom {
namespace internal {
class  WakeLockProvider_GetWakeLockContextForID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockProvider_GetWakeLockContextForID_Params_Data));
      new (data()) WakeLockProvider_GetWakeLockContextForID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockProvider_GetWakeLockContextForID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockProvider_GetWakeLockContextForID_Params_Data>(index_);
    }
    WakeLockProvider_GetWakeLockContextForID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t context_id;
  mojo::internal::Handle_Data context;

 private:
  WakeLockProvider_GetWakeLockContextForID_Params_Data();
  ~WakeLockProvider_GetWakeLockContextForID_Params_Data() = delete;
};
static_assert(sizeof(WakeLockProvider_GetWakeLockContextForID_Params_Data) == 16,
              "Bad sizeof(WakeLockProvider_GetWakeLockContextForID_Params_Data)");
class  WakeLockProvider_GetWakeLockWithoutContext_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockProvider_GetWakeLockWithoutContext_Params_Data));
      new (data()) WakeLockProvider_GetWakeLockWithoutContext_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockProvider_GetWakeLockWithoutContext_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockProvider_GetWakeLockWithoutContext_Params_Data>(index_);
    }
    WakeLockProvider_GetWakeLockWithoutContext_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t reason;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Handle_Data wake_lock;
  uint8_t padfinal_[4];

 private:
  WakeLockProvider_GetWakeLockWithoutContext_Params_Data();
  ~WakeLockProvider_GetWakeLockWithoutContext_Params_Data() = delete;
};
static_assert(sizeof(WakeLockProvider_GetWakeLockWithoutContext_Params_Data) == 32,
              "Bad sizeof(WakeLockProvider_GetWakeLockWithoutContext_Params_Data)");
class  WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data));
      new (data()) WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data>(index_);
    }
    WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data();
  ~WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data() = delete;
};
static_assert(sizeof(WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data) == 24,
              "Bad sizeof(WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data)");
class  WakeLockProvider_GetActiveWakeLocksForTests_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockProvider_GetActiveWakeLocksForTests_Params_Data));
      new (data()) WakeLockProvider_GetActiveWakeLocksForTests_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockProvider_GetActiveWakeLocksForTests_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockProvider_GetActiveWakeLocksForTests_Params_Data>(index_);
    }
    WakeLockProvider_GetActiveWakeLocksForTests_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  WakeLockProvider_GetActiveWakeLocksForTests_Params_Data();
  ~WakeLockProvider_GetActiveWakeLocksForTests_Params_Data() = delete;
};
static_assert(sizeof(WakeLockProvider_GetActiveWakeLocksForTests_Params_Data) == 16,
              "Bad sizeof(WakeLockProvider_GetActiveWakeLocksForTests_Params_Data)");
class  WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data));
      new (data()) WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data>(index_);
    }
    WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t count;
  uint8_t padfinal_[4];

 private:
  WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data();
  ~WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data() = delete;
};
static_assert(sizeof(WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data) == 16,
              "Bad sizeof(WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data)");
class  WakeLockObserver_OnWakeLockDeactivated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockObserver_OnWakeLockDeactivated_Params_Data));
      new (data()) WakeLockObserver_OnWakeLockDeactivated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockObserver_OnWakeLockDeactivated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockObserver_OnWakeLockDeactivated_Params_Data>(index_);
    }
    WakeLockObserver_OnWakeLockDeactivated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  WakeLockObserver_OnWakeLockDeactivated_Params_Data();
  ~WakeLockObserver_OnWakeLockDeactivated_Params_Data() = delete;
};
static_assert(sizeof(WakeLockObserver_OnWakeLockDeactivated_Params_Data) == 16,
              "Bad sizeof(WakeLockObserver_OnWakeLockDeactivated_Params_Data)");

}  // namespace internal
class WakeLockProvider_GetWakeLockContextForID_ParamsDataView {
 public:
  WakeLockProvider_GetWakeLockContextForID_ParamsDataView() {}

  WakeLockProvider_GetWakeLockContextForID_ParamsDataView(
      internal::WakeLockProvider_GetWakeLockContextForID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t context_id() const {
    return data_->context_id;
  }
  template <typename UserType>
  UserType TakeContext() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockContextRequestDataView>(
            &data_->context, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLockProvider_GetWakeLockContextForID_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView {
 public:
  WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView() {}

  WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView(
      internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  ::device::mojom::WakeLockType type() const {
    return static_cast<::device::mojom::WakeLockType>(data_->type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::WakeLockReason>(
        data_value, output);
  }

  ::device::mojom::WakeLockReason reason() const {
    return static_cast<::device::mojom::WakeLockReason>(data_->reason);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeWakeLock() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockRequestDataView>(
            &data_->wake_lock, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLockProvider_GetWakeLockWithoutContext_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WakeLockProvider_NotifyOnWakeLockDeactivation_ParamsDataView {
 public:
  WakeLockProvider_NotifyOnWakeLockDeactivation_ParamsDataView() {}

  WakeLockProvider_NotifyOnWakeLockDeactivation_ParamsDataView(
      internal::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  ::device::mojom::WakeLockType type() const {
    return static_cast<::device::mojom::WakeLockType>(data_->type);
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLockProvider_NotifyOnWakeLockDeactivation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WakeLockProvider_GetActiveWakeLocksForTests_ParamsDataView {
 public:
  WakeLockProvider_GetActiveWakeLocksForTests_ParamsDataView() {}

  WakeLockProvider_GetActiveWakeLocksForTests_ParamsDataView(
      internal::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  ::device::mojom::WakeLockType type() const {
    return static_cast<::device::mojom::WakeLockType>(data_->type);
  }
 private:
  internal::WakeLockProvider_GetActiveWakeLocksForTests_Params_Data* data_ = nullptr;
};

class WakeLockProvider_GetActiveWakeLocksForTests_ResponseParamsDataView {
 public:
  WakeLockProvider_GetActiveWakeLocksForTests_ResponseParamsDataView() {}

  WakeLockProvider_GetActiveWakeLocksForTests_ResponseParamsDataView(
      internal::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t count() const {
    return data_->count;
  }
 private:
  internal::WakeLockProvider_GetActiveWakeLocksForTests_ResponseParams_Data* data_ = nullptr;
};

class WakeLockObserver_OnWakeLockDeactivated_ParamsDataView {
 public:
  WakeLockObserver_OnWakeLockDeactivated_ParamsDataView() {}

  WakeLockObserver_OnWakeLockDeactivated_ParamsDataView(
      internal::WakeLockObserver_OnWakeLockDeactivated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  ::device::mojom::WakeLockType type() const {
    return static_cast<::device::mojom::WakeLockType>(data_->type);
  }
 private:
  internal::WakeLockObserver_OnWakeLockDeactivated_Params_Data* data_ = nullptr;
};




inline void WakeLockProvider_GetWakeLockWithoutContext_ParamsDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}









}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_PROVIDER_MOJOM_PARAMS_DATA_H_