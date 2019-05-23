// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/v8_cache_options.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared-internal.h"
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
class EmbeddedWorkerStartParams_Data;
class EmbeddedWorkerStartTiming_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerStartParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerStartParams_Data));
      new (data()) EmbeddedWorkerStartParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerStartParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerStartParams_Data>(index_);
    }
    EmbeddedWorkerStartParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t service_worker_version_id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> scope;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> script_url;
  int32_t script_type;
  int32_t worker_devtools_agent_route_id;
  mojo::internal::Pointer<mojo::internal::String_Data> user_agent;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> devtools_worker_token;
  uint8_t pause_after_download : 1;
  uint8_t wait_for_debugger : 1;
  uint8_t is_installed : 1;
  uint8_t pad9_[3];
  int32_t v8_cache_options;
  mojo::internal::Pointer<::blink::mojom::internal::RendererPreferences_Data> renderer_preferences;
  mojo::internal::Handle_Data service_worker_request;
  mojo::internal::Handle_Data controller_request;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerInstalledScriptsInfo_Data> installed_scripts_info;
  mojo::internal::AssociatedInterface_Data instance_host;
  mojo::internal::Pointer<::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data> provider_info;
  mojo::internal::Interface_Data content_settings_proxy;
  mojo::internal::Handle_Data preference_watcher_request;
  uint8_t pad18_[4];
  mojo::internal::Pointer<::blink::mojom::internal::URLLoaderFactoryBundle_Data> subresource_loader_factories;

 private:
  EmbeddedWorkerStartParams_Data();
  ~EmbeddedWorkerStartParams_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerStartParams_Data) == 128,
              "Bad sizeof(EmbeddedWorkerStartParams_Data)");
// Used by EmbeddedWorkerStartParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EmbeddedWorkerStartParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EmbeddedWorkerStartParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EmbeddedWorkerStartParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EmbeddedWorkerStartParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EmbeddedWorkerStartParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) EmbeddedWorkerStartTiming_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedWorkerStartTiming_Data));
      new (data()) EmbeddedWorkerStartTiming_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedWorkerStartTiming_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedWorkerStartTiming_Data>(index_);
    }
    EmbeddedWorkerStartTiming_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> start_worker_received_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> script_evaluation_start_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> script_evaluation_end_time;

 private:
  EmbeddedWorkerStartTiming_Data();
  ~EmbeddedWorkerStartTiming_Data() = delete;
};
static_assert(sizeof(EmbeddedWorkerStartTiming_Data) == 32,
              "Bad sizeof(EmbeddedWorkerStartTiming_Data)");
// Used by EmbeddedWorkerStartTiming::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EmbeddedWorkerStartTiming_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EmbeddedWorkerStartTiming_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EmbeddedWorkerStartTiming_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EmbeddedWorkerStartTiming_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EmbeddedWorkerStartTiming_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_SHARED_INTERNAL_H_