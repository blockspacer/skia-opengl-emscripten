// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_PARAMS_DATA_H_

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
namespace ws {
namespace mojom {
namespace internal {
class  ScreenProviderObserver_OnDisplaysChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenProviderObserver_OnDisplaysChanged_Params_Data));
      new (data()) ScreenProviderObserver_OnDisplaysChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenProviderObserver_OnDisplaysChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenProviderObserver_OnDisplaysChanged_Params_Data>(index_);
    }
    ScreenProviderObserver_OnDisplaysChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::ws::mojom::internal::WsDisplay_Data>>> displays;
  int64_t primary_display_id;
  int64_t internal_display_id;
  int64_t display_id_for_new_windows;

 private:
  ScreenProviderObserver_OnDisplaysChanged_Params_Data();
  ~ScreenProviderObserver_OnDisplaysChanged_Params_Data() = delete;
};
static_assert(sizeof(ScreenProviderObserver_OnDisplaysChanged_Params_Data) == 40,
              "Bad sizeof(ScreenProviderObserver_OnDisplaysChanged_Params_Data)");

}  // namespace internal
class ScreenProviderObserver_OnDisplaysChanged_ParamsDataView {
 public:
  ScreenProviderObserver_OnDisplaysChanged_ParamsDataView() {}

  ScreenProviderObserver_OnDisplaysChanged_ParamsDataView(
      internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplaysDataView(
      mojo::ArrayDataView<::ws::mojom::WsDisplayDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplays(UserType* output) {
    auto* pointer = data_->displays.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ws::mojom::WsDisplayDataView>>(
        pointer, output, context_);
  }
  int64_t primary_display_id() const {
    return data_->primary_display_id;
  }
  int64_t internal_display_id() const {
    return data_->internal_display_id;
  }
  int64_t display_id_for_new_windows() const {
    return data_->display_id_for_new_windows;
  }
 private:
  internal::ScreenProviderObserver_OnDisplaysChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ScreenProviderObserver_OnDisplaysChanged_ParamsDataView::GetDisplaysDataView(
    mojo::ArrayDataView<::ws::mojom::WsDisplayDataView>* output) {
  auto pointer = data_->displays.Get();
  *output = mojo::ArrayDataView<::ws::mojom::WsDisplayDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_SCREEN_PROVIDER_OBSERVER_MOJOM_PARAMS_DATA_H_