// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IdleMonitor_Update_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdleMonitor_Update_Params_Data));
      new (data()) IdleMonitor_Update_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdleMonitor_Update_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdleMonitor_Update_Params_Data>(index_);
    }
    IdleMonitor_Update_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IdleState_Data> state;

 private:
  IdleMonitor_Update_Params_Data();
  ~IdleMonitor_Update_Params_Data() = delete;
};
static_assert(sizeof(IdleMonitor_Update_Params_Data) == 16,
              "Bad sizeof(IdleMonitor_Update_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IdleManager_AddMonitor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdleManager_AddMonitor_Params_Data));
      new (data()) IdleManager_AddMonitor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdleManager_AddMonitor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdleManager_AddMonitor_Params_Data>(index_);
    }
    IdleManager_AddMonitor_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> threshold;
  mojo::internal::Interface_Data monitor;

 private:
  IdleManager_AddMonitor_Params_Data();
  ~IdleManager_AddMonitor_Params_Data() = delete;
};
static_assert(sizeof(IdleManager_AddMonitor_Params_Data) == 24,
              "Bad sizeof(IdleManager_AddMonitor_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) IdleManager_AddMonitor_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IdleManager_AddMonitor_ResponseParams_Data));
      new (data()) IdleManager_AddMonitor_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IdleManager_AddMonitor_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IdleManager_AddMonitor_ResponseParams_Data>(index_);
    }
    IdleManager_AddMonitor_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::IdleState_Data> state;

 private:
  IdleManager_AddMonitor_ResponseParams_Data();
  ~IdleManager_AddMonitor_ResponseParams_Data() = delete;
};
static_assert(sizeof(IdleManager_AddMonitor_ResponseParams_Data) == 16,
              "Bad sizeof(IdleManager_AddMonitor_ResponseParams_Data)");

}  // namespace internal
class IdleMonitor_Update_ParamsDataView {
 public:
  IdleMonitor_Update_ParamsDataView() {}

  IdleMonitor_Update_ParamsDataView(
      internal::IdleMonitor_Update_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      IdleStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::blink::mojom::IdleStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdleMonitor_Update_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdleManager_AddMonitor_ParamsDataView {
 public:
  IdleManager_AddMonitor_ParamsDataView() {}

  IdleManager_AddMonitor_ParamsDataView(
      internal::IdleManager_AddMonitor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetThresholdDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThreshold(UserType* output) {
    auto* pointer = data_->threshold.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeMonitor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::IdleMonitorPtrDataView>(
            &data_->monitor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IdleManager_AddMonitor_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IdleManager_AddMonitor_ResponseParamsDataView {
 public:
  IdleManager_AddMonitor_ResponseParamsDataView() {}

  IdleManager_AddMonitor_ResponseParamsDataView(
      internal::IdleManager_AddMonitor_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      IdleStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::blink::mojom::IdleStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::IdleManager_AddMonitor_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void IdleMonitor_Update_ParamsDataView::GetStateDataView(
    IdleStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = IdleStateDataView(pointer, context_);
}


inline void IdleManager_AddMonitor_ParamsDataView::GetThresholdDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->threshold.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void IdleManager_AddMonitor_ResponseParamsDataView::GetStateDataView(
    IdleStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = IdleStateDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_PARAMS_DATA_H_