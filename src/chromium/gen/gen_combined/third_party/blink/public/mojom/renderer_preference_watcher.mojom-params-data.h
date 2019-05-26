// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) RendererPreferenceWatcher_NotifyUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererPreferenceWatcher_NotifyUpdate_Params_Data));
      new (data()) RendererPreferenceWatcher_NotifyUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererPreferenceWatcher_NotifyUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererPreferenceWatcher_NotifyUpdate_Params_Data>(index_);
    }
    RendererPreferenceWatcher_NotifyUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::RendererPreferences_Data> new_prefs;

 private:
  RendererPreferenceWatcher_NotifyUpdate_Params_Data();
  ~RendererPreferenceWatcher_NotifyUpdate_Params_Data() = delete;
};
static_assert(sizeof(RendererPreferenceWatcher_NotifyUpdate_Params_Data) == 16,
              "Bad sizeof(RendererPreferenceWatcher_NotifyUpdate_Params_Data)");

}  // namespace internal
class RendererPreferenceWatcher_NotifyUpdate_ParamsDataView {
 public:
  RendererPreferenceWatcher_NotifyUpdate_ParamsDataView() {}

  RendererPreferenceWatcher_NotifyUpdate_ParamsDataView(
      internal::RendererPreferenceWatcher_NotifyUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNewPrefsDataView(
      ::blink::mojom::RendererPreferencesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewPrefs(UserType* output) {
    auto* pointer = data_->new_prefs.Get();
    return mojo::internal::Deserialize<::blink::mojom::RendererPreferencesDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererPreferenceWatcher_NotifyUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void RendererPreferenceWatcher_NotifyUpdate_ParamsDataView::GetNewPrefsDataView(
    ::blink::mojom::RendererPreferencesDataView* output) {
  auto pointer = data_->new_prefs.Get();
  *output = ::blink::mojom::RendererPreferencesDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_PARAMS_DATA_H_