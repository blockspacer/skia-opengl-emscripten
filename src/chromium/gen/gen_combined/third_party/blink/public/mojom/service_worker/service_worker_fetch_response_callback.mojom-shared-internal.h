// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class ServiceWorkerFetchEventTiming_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ServiceWorkerFetchEventTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ServiceWorkerFetchEventTiming_Data));
      new (data()) ServiceWorkerFetchEventTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ServiceWorkerFetchEventTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ServiceWorkerFetchEventTiming_Data>(index_);
    }
    ServiceWorkerFetchEventTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> dispatch_event_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> respond_with_settled_time;

 private:
  ServiceWorkerFetchEventTiming_Data();
  ~ServiceWorkerFetchEventTiming_Data() = delete;
};
static_assert(sizeof(ServiceWorkerFetchEventTiming_Data) == 24,
              "Bad sizeof(ServiceWorkerFetchEventTiming_Data)");
// Used by ServiceWorkerFetchEventTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ServiceWorkerFetchEventTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ServiceWorkerFetchEventTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ServiceWorkerFetchEventTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ServiceWorkerFetchEventTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ServiceWorkerFetchEventTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_INTERNAL_H_