// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsFrontend_SetupDevToolsFrontend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsFrontend_SetupDevToolsFrontend_Params_Data));
      new (data()) DevToolsFrontend_SetupDevToolsFrontend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsFrontend_SetupDevToolsFrontend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsFrontend_SetupDevToolsFrontend_Params_Data>(index_);
    }
    DevToolsFrontend_SetupDevToolsFrontend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> api_script;
  mojo::internal::AssociatedInterface_Data host;

 private:
  DevToolsFrontend_SetupDevToolsFrontend_Params_Data();
  ~DevToolsFrontend_SetupDevToolsFrontend_Params_Data() = delete;
};
static_assert(sizeof(DevToolsFrontend_SetupDevToolsFrontend_Params_Data) == 24,
              "Bad sizeof(DevToolsFrontend_SetupDevToolsFrontend_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data));
      new (data()) DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data>(index_);
    }
    DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> extension_api;

 private:
  DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data();
  ~DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data() = delete;
};
static_assert(sizeof(DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data) == 16,
              "Bad sizeof(DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data));
      new (data()) DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data>(index_);
    }
    DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;

 private:
  DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data();
  ~DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data() = delete;
};
static_assert(sizeof(DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data) == 16,
              "Bad sizeof(DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data)");

}  // namespace internal
class DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView {
 public:
  DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView() {}

  DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView(
      internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetApiScriptDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadApiScript(UserType* output) {
    auto* pointer = data_->api_script.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::DevToolsFrontendHostAssociatedPtrInfoDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DevToolsFrontend_SetupDevToolsFrontend_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView {
 public:
  DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView() {}

  DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView(
      internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetExtensionApiDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtensionApi(UserType* output) {
    auto* pointer = data_->extension_api.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsFrontend_SetupDevToolsExtensionAPI_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView {
 public:
  DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView() {}

  DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView(
      internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::DevToolsFrontendHost_DispatchEmbedderMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DevToolsFrontend_SetupDevToolsFrontend_ParamsDataView::GetApiScriptDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->api_script.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsFrontend_SetupDevToolsExtensionAPI_ParamsDataView::GetExtensionApiDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->extension_api.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void DevToolsFrontendHost_DispatchEmbedderMessage_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_PARAMS_DATA_H_