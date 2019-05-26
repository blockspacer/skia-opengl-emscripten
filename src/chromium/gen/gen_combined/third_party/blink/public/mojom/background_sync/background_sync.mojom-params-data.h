// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundSyncService_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_Register_Params_Data));
      new (data()) BackgroundSyncService_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_Register_Params_Data>(index_);
    }
    BackgroundSyncService_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SyncRegistrationOptions_Data> options;
  int64_t service_worker_registration_id;

 private:
  BackgroundSyncService_Register_Params_Data();
  ~BackgroundSyncService_Register_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Register_Params_Data) == 24,
              "Bad sizeof(BackgroundSyncService_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundSyncService_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_Register_ResponseParams_Data));
      new (data()) BackgroundSyncService_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_Register_ResponseParams_Data>(index_);
    }
    BackgroundSyncService_Register_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t err;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::SyncRegistrationOptions_Data> options;

 private:
  BackgroundSyncService_Register_ResponseParams_Data();
  ~BackgroundSyncService_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Register_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundSyncService_DidResolveRegistration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_DidResolveRegistration_Params_Data));
      new (data()) BackgroundSyncService_DidResolveRegistration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_DidResolveRegistration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_DidResolveRegistration_Params_Data>(index_);
    }
    BackgroundSyncService_DidResolveRegistration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::BackgroundSyncRegistrationInfo_Data> registration_info;

 private:
  BackgroundSyncService_DidResolveRegistration_Params_Data();
  ~BackgroundSyncService_DidResolveRegistration_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_DidResolveRegistration_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_DidResolveRegistration_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundSyncService_GetRegistrations_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_GetRegistrations_Params_Data));
      new (data()) BackgroundSyncService_GetRegistrations_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_GetRegistrations_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_GetRegistrations_Params_Data>(index_);
    }
    BackgroundSyncService_GetRegistrations_Params_Data* operator->() { return data(); }

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
  BackgroundSyncService_GetRegistrations_Params_Data();
  ~BackgroundSyncService_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistrations_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_GetRegistrations_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundSyncService_GetRegistrations_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data));
      new (data()) BackgroundSyncService_GetRegistrations_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundSyncService_GetRegistrations_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundSyncService_GetRegistrations_ResponseParams_Data>(index_);
    }
    BackgroundSyncService_GetRegistrations_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t err;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SyncRegistrationOptions_Data>>> registrations;

 private:
  BackgroundSyncService_GetRegistrations_ResponseParams_Data();
  ~BackgroundSyncService_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data)");

}  // namespace internal
class BackgroundSyncService_Register_ParamsDataView {
 public:
  BackgroundSyncService_Register_ParamsDataView() {}

  BackgroundSyncService_Register_ParamsDataView(
      internal::BackgroundSyncService_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      SyncRegistrationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::SyncRegistrationOptionsDataView>(
        pointer, output, context_);
  }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::BackgroundSyncService_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundSyncService_Register_ResponseParamsDataView {
 public:
  BackgroundSyncService_Register_ResponseParamsDataView() {}

  BackgroundSyncService_Register_ResponseParamsDataView(
      internal::BackgroundSyncService_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErr(UserType* output) const {
    auto data_value = data_->err;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncError>(
        data_value, output);
  }

  BackgroundSyncError err() const {
    return static_cast<BackgroundSyncError>(data_->err);
  }
  inline void GetOptionsDataView(
      SyncRegistrationOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::SyncRegistrationOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundSyncService_Register_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundSyncService_DidResolveRegistration_ParamsDataView {
 public:
  BackgroundSyncService_DidResolveRegistration_ParamsDataView() {}

  BackgroundSyncService_DidResolveRegistration_ParamsDataView(
      internal::BackgroundSyncService_DidResolveRegistration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegistrationInfoDataView(
      BackgroundSyncRegistrationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrationInfo(UserType* output) {
    auto* pointer = data_->registration_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncRegistrationInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundSyncService_DidResolveRegistration_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BackgroundSyncService_GetRegistrations_ParamsDataView {
 public:
  BackgroundSyncService_GetRegistrations_ParamsDataView() {}

  BackgroundSyncService_GetRegistrations_ParamsDataView(
      internal::BackgroundSyncService_GetRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::BackgroundSyncService_GetRegistrations_Params_Data* data_ = nullptr;
};

class BackgroundSyncService_GetRegistrations_ResponseParamsDataView {
 public:
  BackgroundSyncService_GetRegistrations_ResponseParamsDataView() {}

  BackgroundSyncService_GetRegistrations_ResponseParamsDataView(
      internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErr(UserType* output) const {
    auto data_value = data_->err;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncError>(
        data_value, output);
  }

  BackgroundSyncError err() const {
    return static_cast<BackgroundSyncError>(data_->err);
  }
  inline void GetRegistrationsDataView(
      mojo::ArrayDataView<SyncRegistrationOptionsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRegistrations(UserType* output) {
    auto* pointer = data_->registrations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SyncRegistrationOptionsDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BackgroundSyncService_Register_ParamsDataView::GetOptionsDataView(
    SyncRegistrationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = SyncRegistrationOptionsDataView(pointer, context_);
}


inline void BackgroundSyncService_Register_ResponseParamsDataView::GetOptionsDataView(
    SyncRegistrationOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = SyncRegistrationOptionsDataView(pointer, context_);
}


inline void BackgroundSyncService_DidResolveRegistration_ParamsDataView::GetRegistrationInfoDataView(
    BackgroundSyncRegistrationInfoDataView* output) {
  auto pointer = data_->registration_info.Get();
  *output = BackgroundSyncRegistrationInfoDataView(pointer, context_);
}




inline void BackgroundSyncService_GetRegistrations_ResponseParamsDataView::GetRegistrationsDataView(
    mojo::ArrayDataView<SyncRegistrationOptionsDataView>* output) {
  auto pointer = data_->registrations.Get();
  *output = mojo::ArrayDataView<SyncRegistrationOptionsDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_PARAMS_DATA_H_