// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorker_DispatchFetchEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ControllerServiceWorker_DispatchFetchEvent_Params_Data));
      new (data()) ControllerServiceWorker_DispatchFetchEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ControllerServiceWorker_DispatchFetchEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ControllerServiceWorker_DispatchFetchEvent_Params_Data>(index_);
    }
    ControllerServiceWorker_DispatchFetchEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::DispatchFetchEventParams_Data> params;
  mojo::internal::Interface_Data response_callback;

 private:
  ControllerServiceWorker_DispatchFetchEvent_Params_Data();
  ~ControllerServiceWorker_DispatchFetchEvent_Params_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorker_DispatchFetchEvent_Params_Data) == 24,
              "Bad sizeof(ControllerServiceWorker_DispatchFetchEvent_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data));
      new (data()) ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data>(index_);
    }
    ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* operator->() { return data(); }

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
  ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data();
  ~ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data) == 16,
              "Bad sizeof(ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorker_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ControllerServiceWorker_Clone_Params_Data));
      new (data()) ControllerServiceWorker_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ControllerServiceWorker_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ControllerServiceWorker_Clone_Params_Data>(index_);
    }
    ControllerServiceWorker_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data controller;
  uint8_t padfinal_[4];

 private:
  ControllerServiceWorker_Clone_Params_Data();
  ~ControllerServiceWorker_Clone_Params_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorker_Clone_Params_Data) == 16,
              "Bad sizeof(ControllerServiceWorker_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorkerConnector_UpdateController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ControllerServiceWorkerConnector_UpdateController_Params_Data));
      new (data()) ControllerServiceWorkerConnector_UpdateController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ControllerServiceWorkerConnector_UpdateController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ControllerServiceWorkerConnector_UpdateController_Params_Data>(index_);
    }
    ControllerServiceWorkerConnector_UpdateController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data controller;

 private:
  ControllerServiceWorkerConnector_UpdateController_Params_Data();
  ~ControllerServiceWorkerConnector_UpdateController_Params_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorkerConnector_UpdateController_Params_Data) == 16,
              "Bad sizeof(ControllerServiceWorkerConnector_UpdateController_Params_Data)");

}  // namespace internal
class ControllerServiceWorker_DispatchFetchEvent_ParamsDataView {
 public:
  ControllerServiceWorker_DispatchFetchEvent_ParamsDataView() {}

  ControllerServiceWorker_DispatchFetchEvent_ParamsDataView(
      internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ::blink::mojom::DispatchFetchEventParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::DispatchFetchEventParamsDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseCallback() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerFetchResponseCallbackPtrDataView>(
            &data_->response_callback, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorker_DispatchFetchEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView {
 public:
  ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView() {}

  ControllerServiceWorker_DispatchFetchEvent_ResponseParamsDataView(
      internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::ControllerServiceWorker_DispatchFetchEvent_ResponseParams_Data* data_ = nullptr;
};

class ControllerServiceWorker_Clone_ParamsDataView {
 public:
  ControllerServiceWorker_Clone_ParamsDataView() {}

  ControllerServiceWorker_Clone_ParamsDataView(
      internal::ControllerServiceWorker_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerRequestDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorker_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ControllerServiceWorkerConnector_UpdateController_ParamsDataView {
 public:
  ControllerServiceWorkerConnector_UpdateController_ParamsDataView() {}

  ControllerServiceWorkerConnector_UpdateController_ParamsDataView(
      internal::ControllerServiceWorkerConnector_UpdateController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerPtrDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ControllerServiceWorkerConnector_UpdateController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ControllerServiceWorker_DispatchFetchEvent_ParamsDataView::GetParamsDataView(
    ::blink::mojom::DispatchFetchEventParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::blink::mojom::DispatchFetchEventParamsDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_PARAMS_DATA_H_