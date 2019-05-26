// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data));
      new (data()) ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data>(index_);
    }
    ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;

 private:
  ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data();
  ~ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerObjectHost_TerminateForTesting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerObjectHost_TerminateForTesting_Params_Data));
      new (data()) ServiceWorkerObjectHost_TerminateForTesting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerObjectHost_TerminateForTesting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerObjectHost_TerminateForTesting_Params_Data>(index_);
    }
    ServiceWorkerObjectHost_TerminateForTesting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerObjectHost_TerminateForTesting_Params_Data();
  ~ServiceWorkerObjectHost_TerminateForTesting_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerObjectHost_TerminateForTesting_Params_Data) == 8,
              "Bad sizeof(ServiceWorkerObjectHost_TerminateForTesting_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data));
      new (data()) ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data>(index_);
    }
    ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data();
  ~ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data) == 8,
              "Bad sizeof(ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerObject_StateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerObject_StateChanged_Params_Data));
      new (data()) ServiceWorkerObject_StateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerObject_StateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerObject_StateChanged_Params_Data>(index_);
    }
    ServiceWorkerObject_StateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  ServiceWorkerObject_StateChanged_Params_Data();
  ~ServiceWorkerObject_StateChanged_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerObject_StateChanged_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerObject_StateChanged_Params_Data)");

}  // namespace internal
class ServiceWorkerObjectHost_PostMessageToServiceWorker_ParamsDataView {
 public:
  ServiceWorkerObjectHost_PostMessageToServiceWorker_ParamsDataView() {}

  ServiceWorkerObjectHost_PostMessageToServiceWorker_ParamsDataView(
      internal::ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerObjectHost_TerminateForTesting_ParamsDataView {
 public:
  ServiceWorkerObjectHost_TerminateForTesting_ParamsDataView() {}

  ServiceWorkerObjectHost_TerminateForTesting_ParamsDataView(
      internal::ServiceWorkerObjectHost_TerminateForTesting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerObjectHost_TerminateForTesting_Params_Data* data_ = nullptr;
};

class ServiceWorkerObjectHost_TerminateForTesting_ResponseParamsDataView {
 public:
  ServiceWorkerObjectHost_TerminateForTesting_ResponseParamsDataView() {}

  ServiceWorkerObjectHost_TerminateForTesting_ResponseParamsDataView(
      internal::ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data* data_ = nullptr;
};

class ServiceWorkerObject_StateChanged_ParamsDataView {
 public:
  ServiceWorkerObject_StateChanged_ParamsDataView() {}

  ServiceWorkerObject_StateChanged_ParamsDataView(
      internal::ServiceWorkerObject_StateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerState>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerState state() const {
    return static_cast<::blink::mojom::ServiceWorkerState>(data_->state);
  }
 private:
  internal::ServiceWorkerObject_StateChanged_Params_Data* data_ = nullptr;
};


inline void ServiceWorkerObjectHost_PostMessageToServiceWorker_ParamsDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_PARAMS_DATA_H_