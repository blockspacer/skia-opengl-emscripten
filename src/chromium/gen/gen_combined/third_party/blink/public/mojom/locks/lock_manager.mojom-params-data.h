// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LockRequest_Granted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockRequest_Granted_Params_Data));
      new (data()) LockRequest_Granted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockRequest_Granted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockRequest_Granted_Params_Data>(index_);
    }
    LockRequest_Granted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data lock_handle;

 private:
  LockRequest_Granted_Params_Data();
  ~LockRequest_Granted_Params_Data() = delete;
};
static_assert(sizeof(LockRequest_Granted_Params_Data) == 16,
              "Bad sizeof(LockRequest_Granted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LockRequest_Failed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockRequest_Failed_Params_Data));
      new (data()) LockRequest_Failed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockRequest_Failed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockRequest_Failed_Params_Data>(index_);
    }
    LockRequest_Failed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LockRequest_Failed_Params_Data();
  ~LockRequest_Failed_Params_Data() = delete;
};
static_assert(sizeof(LockRequest_Failed_Params_Data) == 8,
              "Bad sizeof(LockRequest_Failed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LockRequest_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockRequest_Abort_Params_Data));
      new (data()) LockRequest_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockRequest_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockRequest_Abort_Params_Data>(index_);
    }
    LockRequest_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  LockRequest_Abort_Params_Data();
  ~LockRequest_Abort_Params_Data() = delete;
};
static_assert(sizeof(LockRequest_Abort_Params_Data) == 16,
              "Bad sizeof(LockRequest_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LockManager_RequestLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockManager_RequestLock_Params_Data));
      new (data()) LockManager_RequestLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockManager_RequestLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockManager_RequestLock_Params_Data>(index_);
    }
    LockManager_RequestLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  int32_t mode;
  int32_t wait;
  mojo::internal::AssociatedInterface_Data request;

 private:
  LockManager_RequestLock_Params_Data();
  ~LockManager_RequestLock_Params_Data() = delete;
};
static_assert(sizeof(LockManager_RequestLock_Params_Data) == 32,
              "Bad sizeof(LockManager_RequestLock_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LockManager_QueryState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockManager_QueryState_Params_Data));
      new (data()) LockManager_QueryState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockManager_QueryState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockManager_QueryState_Params_Data>(index_);
    }
    LockManager_QueryState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LockManager_QueryState_Params_Data();
  ~LockManager_QueryState_Params_Data() = delete;
};
static_assert(sizeof(LockManager_QueryState_Params_Data) == 8,
              "Bad sizeof(LockManager_QueryState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LockManager_QueryState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LockManager_QueryState_ResponseParams_Data));
      new (data()) LockManager_QueryState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LockManager_QueryState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LockManager_QueryState_ResponseParams_Data>(index_);
    }
    LockManager_QueryState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::LockInfo_Data>>> requested;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::LockInfo_Data>>> held;

 private:
  LockManager_QueryState_ResponseParams_Data();
  ~LockManager_QueryState_ResponseParams_Data() = delete;
};
static_assert(sizeof(LockManager_QueryState_ResponseParams_Data) == 24,
              "Bad sizeof(LockManager_QueryState_ResponseParams_Data)");

}  // namespace internal
class LockRequest_Granted_ParamsDataView {
 public:
  LockRequest_Granted_ParamsDataView() {}

  LockRequest_Granted_ParamsDataView(
      internal::LockRequest_Granted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeLockHandle() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::LockHandleAssociatedPtrInfoDataView>(
            &data_->lock_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LockRequest_Granted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockRequest_Failed_ParamsDataView {
 public:
  LockRequest_Failed_ParamsDataView() {}

  LockRequest_Failed_ParamsDataView(
      internal::LockRequest_Failed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LockRequest_Failed_Params_Data* data_ = nullptr;
};

class LockRequest_Abort_ParamsDataView {
 public:
  LockRequest_Abort_ParamsDataView() {}

  LockRequest_Abort_ParamsDataView(
      internal::LockRequest_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) {
    auto* pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::LockRequest_Abort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockManager_RequestLock_ParamsDataView {
 public:
  LockManager_RequestLock_ParamsDataView() {}

  LockManager_RequestLock_ParamsDataView(
      internal::LockManager_RequestLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::LockMode>(
        data_value, output);
  }

  LockMode mode() const {
    return static_cast<LockMode>(data_->mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWait(UserType* output) const {
    auto data_value = data_->wait;
    return mojo::internal::Deserialize<::blink::mojom::LockManager_WaitMode>(
        data_value, output);
  }

  LockManager_WaitMode wait() const {
    return static_cast<LockManager_WaitMode>(data_->wait);
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::LockRequestAssociatedPtrInfoDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::LockManager_RequestLock_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class LockManager_QueryState_ParamsDataView {
 public:
  LockManager_QueryState_ParamsDataView() {}

  LockManager_QueryState_ParamsDataView(
      internal::LockManager_QueryState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LockManager_QueryState_Params_Data* data_ = nullptr;
};

class LockManager_QueryState_ResponseParamsDataView {
 public:
  LockManager_QueryState_ResponseParamsDataView() {}

  LockManager_QueryState_ResponseParamsDataView(
      internal::LockManager_QueryState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestedDataView(
      mojo::ArrayDataView<LockInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequested(UserType* output) {
    auto* pointer = data_->requested.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::LockInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetHeldDataView(
      mojo::ArrayDataView<LockInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeld(UserType* output) {
    auto* pointer = data_->held.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::LockInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::LockManager_QueryState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void LockRequest_Abort_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void LockManager_RequestLock_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void LockManager_QueryState_ResponseParamsDataView::GetRequestedDataView(
    mojo::ArrayDataView<LockInfoDataView>* output) {
  auto pointer = data_->requested.Get();
  *output = mojo::ArrayDataView<LockInfoDataView>(pointer, context_);
}
inline void LockManager_QueryState_ResponseParamsDataView::GetHeldDataView(
    mojo::ArrayDataView<LockInfoDataView>* output) {
  auto pointer = data_->held.Get();
  *output = mojo::ArrayDataView<LockInfoDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_PARAMS_DATA_H_