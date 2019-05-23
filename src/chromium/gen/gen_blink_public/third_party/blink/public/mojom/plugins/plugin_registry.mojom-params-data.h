// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PluginRegistry_GetPlugins_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginRegistry_GetPlugins_Params_Data));
      new (data()) PluginRegistry_GetPlugins_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginRegistry_GetPlugins_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginRegistry_GetPlugins_Params_Data>(index_);
    }
    PluginRegistry_GetPlugins_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t refresh : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> main_frame_origin;

 private:
  PluginRegistry_GetPlugins_Params_Data();
  ~PluginRegistry_GetPlugins_Params_Data() = delete;
};
static_assert(sizeof(PluginRegistry_GetPlugins_Params_Data) == 24,
              "Bad sizeof(PluginRegistry_GetPlugins_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PluginRegistry_GetPlugins_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PluginRegistry_GetPlugins_ResponseParams_Data));
      new (data()) PluginRegistry_GetPlugins_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PluginRegistry_GetPlugins_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PluginRegistry_GetPlugins_ResponseParams_Data>(index_);
    }
    PluginRegistry_GetPlugins_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PluginInfo_Data>>> plugins;

 private:
  PluginRegistry_GetPlugins_ResponseParams_Data();
  ~PluginRegistry_GetPlugins_ResponseParams_Data() = delete;
};
static_assert(sizeof(PluginRegistry_GetPlugins_ResponseParams_Data) == 16,
              "Bad sizeof(PluginRegistry_GetPlugins_ResponseParams_Data)");

}  // namespace internal
class PluginRegistry_GetPlugins_ParamsDataView {
 public:
  PluginRegistry_GetPlugins_ParamsDataView() {}

  PluginRegistry_GetPlugins_ParamsDataView(
      internal::PluginRegistry_GetPlugins_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool refresh() const {
    return data_->refresh;
  }
  inline void GetMainFrameOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMainFrameOrigin(UserType* output) {
    auto* pointer = data_->main_frame_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
 private:
  internal::PluginRegistry_GetPlugins_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginRegistry_GetPlugins_ResponseParamsDataView {
 public:
  PluginRegistry_GetPlugins_ResponseParamsDataView() {}

  PluginRegistry_GetPlugins_ResponseParamsDataView(
      internal::PluginRegistry_GetPlugins_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPluginsDataView(
      mojo::ArrayDataView<PluginInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlugins(UserType* output) {
    auto* pointer = data_->plugins.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PluginInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PluginRegistry_GetPlugins_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PluginRegistry_GetPlugins_ParamsDataView::GetMainFrameOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->main_frame_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}


inline void PluginRegistry_GetPlugins_ResponseParamsDataView::GetPluginsDataView(
    mojo::ArrayDataView<PluginInfoDataView>* output) {
  auto pointer = data_->plugins.Get();
  *output = mojo::ArrayDataView<PluginInfoDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_PARAMS_DATA_H_