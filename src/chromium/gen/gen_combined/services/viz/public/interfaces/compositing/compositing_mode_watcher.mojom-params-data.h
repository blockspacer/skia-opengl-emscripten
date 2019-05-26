// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_PARAMS_DATA_H_

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
namespace viz {
namespace mojom {
namespace internal {
class  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data));
      new (data()) CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data>(index_);
    }
    CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data();
  ~CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data() = delete;
};
static_assert(sizeof(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data) == 8,
              "Bad sizeof(CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data)");
class  CompositingModeReporter_AddCompositingModeWatcher_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositingModeReporter_AddCompositingModeWatcher_Params_Data));
      new (data()) CompositingModeReporter_AddCompositingModeWatcher_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositingModeReporter_AddCompositingModeWatcher_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositingModeReporter_AddCompositingModeWatcher_Params_Data>(index_);
    }
    CompositingModeReporter_AddCompositingModeWatcher_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data watcher;

 private:
  CompositingModeReporter_AddCompositingModeWatcher_Params_Data();
  ~CompositingModeReporter_AddCompositingModeWatcher_Params_Data() = delete;
};
static_assert(sizeof(CompositingModeReporter_AddCompositingModeWatcher_Params_Data) == 16,
              "Bad sizeof(CompositingModeReporter_AddCompositingModeWatcher_Params_Data)");

}  // namespace internal
class CompositingModeWatcher_CompositingModeFallbackToSoftware_ParamsDataView {
 public:
  CompositingModeWatcher_CompositingModeFallbackToSoftware_ParamsDataView() {}

  CompositingModeWatcher_CompositingModeFallbackToSoftware_ParamsDataView(
      internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CompositingModeWatcher_CompositingModeFallbackToSoftware_Params_Data* data_ = nullptr;
};

class CompositingModeReporter_AddCompositingModeWatcher_ParamsDataView {
 public:
  CompositingModeReporter_AddCompositingModeWatcher_ParamsDataView() {}

  CompositingModeReporter_AddCompositingModeWatcher_ParamsDataView(
      internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeWatcher() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositingModeWatcherPtrDataView>(
            &data_->watcher, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CompositingModeReporter_AddCompositingModeWatcher_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};





}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_PARAMS_DATA_H_