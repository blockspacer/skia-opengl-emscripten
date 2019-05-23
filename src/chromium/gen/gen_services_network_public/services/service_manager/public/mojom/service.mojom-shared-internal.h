// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/process_id.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/connector.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/service_control.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace service_manager {
namespace mojom {
namespace internal {
class BindSourceInfo_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) BindSourceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BindSourceInfo_Data));
      new (data()) BindSourceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BindSourceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BindSourceInfo_Data>(index_);
    }
    BindSourceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::service_manager::mojom::internal::Identity_Data> identity;
  mojo::internal::Pointer<::service_manager::mojom::internal::CapabilitySet_Data> required_capabilities;

 private:
  BindSourceInfo_Data();
  ~BindSourceInfo_Data() = delete;
};
static_assert(sizeof(BindSourceInfo_Data) == 24,
              "Bad sizeof(BindSourceInfo_Data)");
// Used by BindSourceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BindSourceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BindSourceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BindSourceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BindSourceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BindSourceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_INTERNAL_H_