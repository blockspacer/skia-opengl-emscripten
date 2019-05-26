// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared-internal.h"
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
class ControllerServiceWorkerInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ControllerServiceWorkerInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ControllerServiceWorkerInfo_Data));
      new (data()) ControllerServiceWorkerInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ControllerServiceWorkerInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ControllerServiceWorkerInfo_Data>(index_);
    }
    ControllerServiceWorkerInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mode;
  mojo::internal::Interface_Data endpoint;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> client_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> fetch_request_window_id;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerObjectInfo_Data> object_info;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> used_features;

 private:
  ControllerServiceWorkerInfo_Data();
  ~ControllerServiceWorkerInfo_Data() = delete;
};
static_assert(sizeof(ControllerServiceWorkerInfo_Data) == 56,
              "Bad sizeof(ControllerServiceWorkerInfo_Data)");
// Used by ControllerServiceWorkerInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ControllerServiceWorkerInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ControllerServiceWorkerInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ControllerServiceWorkerInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ControllerServiceWorkerInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ControllerServiceWorkerInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_INTERNAL_H_