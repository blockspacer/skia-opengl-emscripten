// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_PARAMS_DATA_H_

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
class  RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data));
      new (data()) RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data>(index_);
    }
    RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> location;

 private:
  RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data();
  ~RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data() = delete;
};
static_assert(sizeof(RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data) == 16,
              "Bad sizeof(RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data)");
class  RemotingEventInjector_InjectMousePressOrRelease_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingEventInjector_InjectMousePressOrRelease_Params_Data));
      new (data()) RemotingEventInjector_InjectMousePressOrRelease_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingEventInjector_InjectMousePressOrRelease_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingEventInjector_InjectMousePressOrRelease_Params_Data>(index_);
    }
    RemotingEventInjector_InjectMousePressOrRelease_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t button;
  uint8_t down : 1;
  uint8_t padfinal_[3];

 private:
  RemotingEventInjector_InjectMousePressOrRelease_Params_Data();
  ~RemotingEventInjector_InjectMousePressOrRelease_Params_Data() = delete;
};
static_assert(sizeof(RemotingEventInjector_InjectMousePressOrRelease_Params_Data) == 16,
              "Bad sizeof(RemotingEventInjector_InjectMousePressOrRelease_Params_Data)");
class  RemotingEventInjector_InjectMouseWheelInPixels_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingEventInjector_InjectMouseWheelInPixels_Params_Data));
      new (data()) RemotingEventInjector_InjectMouseWheelInPixels_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingEventInjector_InjectMouseWheelInPixels_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingEventInjector_InjectMouseWheelInPixels_Params_Data>(index_);
    }
    RemotingEventInjector_InjectMouseWheelInPixels_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t delta_x;
  int32_t delta_y;

 private:
  RemotingEventInjector_InjectMouseWheelInPixels_Params_Data();
  ~RemotingEventInjector_InjectMouseWheelInPixels_Params_Data() = delete;
};
static_assert(sizeof(RemotingEventInjector_InjectMouseWheelInPixels_Params_Data) == 16,
              "Bad sizeof(RemotingEventInjector_InjectMouseWheelInPixels_Params_Data)");
class  RemotingEventInjector_InjectKeyEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RemotingEventInjector_InjectKeyEvent_Params_Data));
      new (data()) RemotingEventInjector_InjectKeyEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RemotingEventInjector_InjectKeyEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RemotingEventInjector_InjectKeyEvent_Params_Data>(index_);
    }
    RemotingEventInjector_InjectKeyEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t native_key_code;
  uint8_t down : 1;
  uint8_t suppress_auto_repeat : 1;
  uint8_t padfinal_[3];

 private:
  RemotingEventInjector_InjectKeyEvent_Params_Data();
  ~RemotingEventInjector_InjectKeyEvent_Params_Data() = delete;
};
static_assert(sizeof(RemotingEventInjector_InjectKeyEvent_Params_Data) == 16,
              "Bad sizeof(RemotingEventInjector_InjectKeyEvent_Params_Data)");

}  // namespace internal
class RemotingEventInjector_MoveCursorToLocationInPixels_ParamsDataView {
 public:
  RemotingEventInjector_MoveCursorToLocationInPixels_ParamsDataView() {}

  RemotingEventInjector_MoveCursorToLocationInPixels_ParamsDataView(
      internal::RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocationDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocation(UserType* output) {
    auto* pointer = data_->location.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::RemotingEventInjector_MoveCursorToLocationInPixels_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RemotingEventInjector_InjectMousePressOrRelease_ParamsDataView {
 public:
  RemotingEventInjector_InjectMousePressOrRelease_ParamsDataView() {}

  RemotingEventInjector_InjectMousePressOrRelease_ParamsDataView(
      internal::RemotingEventInjector_InjectMousePressOrRelease_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadButton(UserType* output) const {
    auto data_value = data_->button;
    return mojo::internal::Deserialize<::ws::mojom::InjectedMouseButtonType>(
        data_value, output);
  }

  InjectedMouseButtonType button() const {
    return static_cast<InjectedMouseButtonType>(data_->button);
  }
  bool down() const {
    return data_->down;
  }
 private:
  internal::RemotingEventInjector_InjectMousePressOrRelease_Params_Data* data_ = nullptr;
};

class RemotingEventInjector_InjectMouseWheelInPixels_ParamsDataView {
 public:
  RemotingEventInjector_InjectMouseWheelInPixels_ParamsDataView() {}

  RemotingEventInjector_InjectMouseWheelInPixels_ParamsDataView(
      internal::RemotingEventInjector_InjectMouseWheelInPixels_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t delta_x() const {
    return data_->delta_x;
  }
  int32_t delta_y() const {
    return data_->delta_y;
  }
 private:
  internal::RemotingEventInjector_InjectMouseWheelInPixels_Params_Data* data_ = nullptr;
};

class RemotingEventInjector_InjectKeyEvent_ParamsDataView {
 public:
  RemotingEventInjector_InjectKeyEvent_ParamsDataView() {}

  RemotingEventInjector_InjectKeyEvent_ParamsDataView(
      internal::RemotingEventInjector_InjectKeyEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t native_key_code() const {
    return data_->native_key_code;
  }
  bool down() const {
    return data_->down;
  }
  bool suppress_auto_repeat() const {
    return data_->suppress_auto_repeat;
  }
 private:
  internal::RemotingEventInjector_InjectKeyEvent_Params_Data* data_ = nullptr;
};


inline void RemotingEventInjector_MoveCursorToLocationInPixels_ParamsDataView::GetLocationDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->location.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_REMOTING_EVENT_INJECTOR_MOJOM_PARAMS_DATA_H_