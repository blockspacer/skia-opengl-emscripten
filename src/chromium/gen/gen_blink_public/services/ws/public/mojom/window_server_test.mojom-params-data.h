// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_PARAMS_DATA_H_

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
class  WindowServerTest_EnsureClientHasDrawnWindow_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowServerTest_EnsureClientHasDrawnWindow_Params_Data));
      new (data()) WindowServerTest_EnsureClientHasDrawnWindow_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowServerTest_EnsureClientHasDrawnWindow_Params_Data>(index_);
    }
    WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> client_name;

 private:
  WindowServerTest_EnsureClientHasDrawnWindow_Params_Data();
  ~WindowServerTest_EnsureClientHasDrawnWindow_Params_Data() = delete;
};
static_assert(sizeof(WindowServerTest_EnsureClientHasDrawnWindow_Params_Data) == 16,
              "Bad sizeof(WindowServerTest_EnsureClientHasDrawnWindow_Params_Data)");
class  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data));
      new (data()) WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data>(index_);
    }
    WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data();
  ~WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data() = delete;
};
static_assert(sizeof(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data) == 16,
              "Bad sizeof(WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data)");

}  // namespace internal
class WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView {
 public:
  WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView() {}

  WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView(
      internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetClientNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientName(UserType* output) {
    auto* pointer = data_->client_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WindowServerTest_EnsureClientHasDrawnWindow_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView {
 public:
  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView() {}

  WindowServerTest_EnsureClientHasDrawnWindow_ResponseParamsDataView(
      internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::WindowServerTest_EnsureClientHasDrawnWindow_ResponseParams_Data* data_ = nullptr;
};


inline void WindowServerTest_EnsureClientHasDrawnWindow_ParamsDataView::GetClientNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_WINDOW_SERVER_TEST_MOJOM_PARAMS_DATA_H_