// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerFetchResponseCallback_OnResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponse_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponse_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data> response;
  mojo::internal::Pointer<internal::ServiceWorkerFetchEventTiming_Data> timing;

 private:
  ServiceWorkerFetchResponseCallback_OnResponse_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponse_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponse_Params_Data) == 24,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data> response;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerStreamHandle_Data> body_as_stream;
  mojo::internal::Pointer<internal::ServiceWorkerFetchEventTiming_Data> timing;

 private:
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data) == 32,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerFetchResponseCallback_OnFallback_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchResponseCallback_OnFallback_Params_Data));
      new (data()) ServiceWorkerFetchResponseCallback_OnFallback_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchResponseCallback_OnFallback_Params_Data>(index_);
    }
    ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ServiceWorkerFetchEventTiming_Data> timing;

 private:
  ServiceWorkerFetchResponseCallback_OnFallback_Params_Data();
  ~ServiceWorkerFetchResponseCallback_OnFallback_Params_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchResponseCallback_OnFallback_Params_Data) == 16,
              "Bad sizeof(ServiceWorkerFetchResponseCallback_OnFallback_Params_Data)");

}  // namespace internal
class ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        pointer, output, context_);
  }
  inline void GetTimingDataView(
      ServiceWorkerFetchEventTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTiming(UserType* output) {
    auto* pointer = data_->timing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerFetchEventTimingDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      ::blink::mojom::FetchAPIResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIResponseDataView>(
        pointer, output, context_);
  }
  inline void GetBodyAsStreamDataView(
      ::blink::mojom::ServiceWorkerStreamHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBodyAsStream(UserType* output) {
    auto* pointer = data_->body_as_stream.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerStreamHandleDataView>(
        pointer, output, context_);
  }
  inline void GetTimingDataView(
      ServiceWorkerFetchEventTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTiming(UserType* output) {
    auto* pointer = data_->timing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerFetchEventTimingDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnResponseStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView {
 public:
  ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView() {}

  ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView(
      internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimingDataView(
      ServiceWorkerFetchEventTimingDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTiming(UserType* output) {
    auto* pointer = data_->timing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerFetchEventTimingDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchResponseCallback_OnFallback_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ::blink::mojom::FetchAPIResponseDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponse_ParamsDataView::GetTimingDataView(
    ServiceWorkerFetchEventTimingDataView* output) {
  auto pointer = data_->timing.Get();
  *output = ServiceWorkerFetchEventTimingDataView(pointer, context_);
}


inline void ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView::GetResponseDataView(
    ::blink::mojom::FetchAPIResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = ::blink::mojom::FetchAPIResponseDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView::GetBodyAsStreamDataView(
    ::blink::mojom::ServiceWorkerStreamHandleDataView* output) {
  auto pointer = data_->body_as_stream.Get();
  *output = ::blink::mojom::ServiceWorkerStreamHandleDataView(pointer, context_);
}
inline void ServiceWorkerFetchResponseCallback_OnResponseStream_ParamsDataView::GetTimingDataView(
    ServiceWorkerFetchEventTimingDataView* output) {
  auto pointer = data_->timing.Get();
  *output = ServiceWorkerFetchEventTimingDataView(pointer, context_);
}


inline void ServiceWorkerFetchResponseCallback_OnFallback_ParamsDataView::GetTimingDataView(
    ServiceWorkerFetchEventTimingDataView* output) {
  auto pointer = data_->timing.Get();
  *output = ServiceWorkerFetchEventTimingDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_PARAMS_DATA_H_