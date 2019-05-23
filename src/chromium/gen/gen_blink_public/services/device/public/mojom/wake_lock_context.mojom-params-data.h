// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_PARAMS_DATA_H_

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
class  WakeLockContext_GetWakeLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLockContext_GetWakeLock_Params_Data));
      new (data()) WakeLockContext_GetWakeLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLockContext_GetWakeLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLockContext_GetWakeLock_Params_Data>(index_);
    }
    WakeLockContext_GetWakeLock_Params_Data* operator->() { return data(); }

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
  WakeLockContext_GetWakeLock_Params_Data();
  ~WakeLockContext_GetWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLockContext_GetWakeLock_Params_Data) == 32,
              "Bad sizeof(WakeLockContext_GetWakeLock_Params_Data)");

}  // namespace internal
class WakeLockContext_GetWakeLock_ParamsDataView {
 public:
  WakeLockContext_GetWakeLock_ParamsDataView() {}

  WakeLockContext_GetWakeLock_ParamsDataView(
      internal::WakeLockContext_GetWakeLock_Params_Data* data,
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
  internal::WakeLockContext_GetWakeLock_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WakeLockContext_GetWakeLock_ParamsDataView::GetDescriptionDataView(
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

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_PARAMS_DATA_H_