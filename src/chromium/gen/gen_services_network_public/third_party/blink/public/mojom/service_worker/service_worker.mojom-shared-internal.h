// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/payments/payment_app.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class ExtendableMessageEvent_Data;

struct FetchHandlerExistence_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ExtendableMessageEvent_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ExtendableMessageEvent_Data));
      new (data()) ExtendableMessageEvent_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ExtendableMessageEvent_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ExtendableMessageEvent_Data>(index_);
    }
    ExtendableMessageEvent_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::TransferableMessage_Data> message;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> source_origin;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerClientInfo_Data> source_info_for_client;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> source_info_for_service_worker;

 private:
  ExtendableMessageEvent_Data();
  ~ExtendableMessageEvent_Data() = delete;
};
static_assert(sizeof(ExtendableMessageEvent_Data) == 40,
              "Bad sizeof(ExtendableMessageEvent_Data)");
// Used by ExtendableMessageEvent::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ExtendableMessageEvent_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ExtendableMessageEvent_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ExtendableMessageEvent_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ExtendableMessageEvent_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ExtendableMessageEvent_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_