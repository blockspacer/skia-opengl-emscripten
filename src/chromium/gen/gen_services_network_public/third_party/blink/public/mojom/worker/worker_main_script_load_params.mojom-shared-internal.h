// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
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
class WorkerMainScriptLoadParams_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WorkerMainScriptLoadParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WorkerMainScriptLoadParams_Data));
      new (data()) WorkerMainScriptLoadParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WorkerMainScriptLoadParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WorkerMainScriptLoadParams_Data>(index_);
    }
    WorkerMainScriptLoadParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::URLResponseHead_Data> response_head;
  mojo::internal::Pointer<::network::mojom::internal::URLLoaderClientEndpoints_Data> url_loader_client_endpoints;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::URLRequestRedirectInfo_Data>>> redirect_infos;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::URLResponseHead_Data>>> redirect_response_heads;

 private:
  WorkerMainScriptLoadParams_Data();
  ~WorkerMainScriptLoadParams_Data() = delete;
};
static_assert(sizeof(WorkerMainScriptLoadParams_Data) == 40,
              "Bad sizeof(WorkerMainScriptLoadParams_Data)");
// Used by WorkerMainScriptLoadParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WorkerMainScriptLoadParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WorkerMainScriptLoadParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WorkerMainScriptLoadParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WorkerMainScriptLoadParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WorkerMainScriptLoadParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_MAIN_SCRIPT_LOAD_PARAMS_MOJOM_SHARED_INTERNAL_H_