// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DisplayCutoutHost_NotifyViewportFitChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayCutoutHost_NotifyViewportFitChanged_Params_Data));
      new (data()) DisplayCutoutHost_NotifyViewportFitChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayCutoutHost_NotifyViewportFitChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayCutoutHost_NotifyViewportFitChanged_Params_Data>(index_);
    }
    DisplayCutoutHost_NotifyViewportFitChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t value;
  uint8_t padfinal_[4];

 private:
  DisplayCutoutHost_NotifyViewportFitChanged_Params_Data();
  ~DisplayCutoutHost_NotifyViewportFitChanged_Params_Data() = delete;
};
static_assert(sizeof(DisplayCutoutHost_NotifyViewportFitChanged_Params_Data) == 16,
              "Bad sizeof(DisplayCutoutHost_NotifyViewportFitChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DisplayCutoutClient_SetSafeArea_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplayCutoutClient_SetSafeArea_Params_Data));
      new (data()) DisplayCutoutClient_SetSafeArea_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplayCutoutClient_SetSafeArea_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplayCutoutClient_SetSafeArea_Params_Data>(index_);
    }
    DisplayCutoutClient_SetSafeArea_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DisplayCutoutSafeArea_Data> safe_area;

 private:
  DisplayCutoutClient_SetSafeArea_Params_Data();
  ~DisplayCutoutClient_SetSafeArea_Params_Data() = delete;
};
static_assert(sizeof(DisplayCutoutClient_SetSafeArea_Params_Data) == 16,
              "Bad sizeof(DisplayCutoutClient_SetSafeArea_Params_Data)");

}  // namespace internal
class DisplayCutoutHost_NotifyViewportFitChanged_ParamsDataView {
 public:
  DisplayCutoutHost_NotifyViewportFitChanged_ParamsDataView() {}

  DisplayCutoutHost_NotifyViewportFitChanged_ParamsDataView(
      internal::DisplayCutoutHost_NotifyViewportFitChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) const {
    auto data_value = data_->value;
    return mojo::internal::Deserialize<::blink::mojom::ViewportFit>(
        data_value, output);
  }

  ViewportFit value() const {
    return static_cast<ViewportFit>(data_->value);
  }
 private:
  internal::DisplayCutoutHost_NotifyViewportFitChanged_Params_Data* data_ = nullptr;
};

class DisplayCutoutClient_SetSafeArea_ParamsDataView {
 public:
  DisplayCutoutClient_SetSafeArea_ParamsDataView() {}

  DisplayCutoutClient_SetSafeArea_ParamsDataView(
      internal::DisplayCutoutClient_SetSafeArea_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSafeAreaDataView(
      DisplayCutoutSafeAreaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSafeArea(UserType* output) {
    auto* pointer = data_->safe_area.Get();
    return mojo::internal::Deserialize<::blink::mojom::DisplayCutoutSafeAreaDataView>(
        pointer, output, context_);
  }
 private:
  internal::DisplayCutoutClient_SetSafeArea_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void DisplayCutoutClient_SetSafeArea_ParamsDataView::GetSafeAreaDataView(
    DisplayCutoutSafeAreaDataView* output) {
  auto pointer = data_->safe_area.Get();
  *output = DisplayCutoutSafeAreaDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_DISPLAY_CUTOUT_MOJOM_PARAMS_DATA_H_