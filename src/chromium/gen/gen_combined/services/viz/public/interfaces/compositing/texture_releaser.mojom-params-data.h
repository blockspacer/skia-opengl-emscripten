// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_PARAMS_DATA_H_

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
class  TextureReleaser_Release_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextureReleaser_Release_Params_Data));
      new (data()) TextureReleaser_Release_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextureReleaser_Release_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextureReleaser_Release_Params_Data>(index_);
    }
    TextureReleaser_Release_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;
  uint8_t is_lost : 1;
  uint8_t padfinal_[7];

 private:
  TextureReleaser_Release_Params_Data();
  ~TextureReleaser_Release_Params_Data() = delete;
};
static_assert(sizeof(TextureReleaser_Release_Params_Data) == 24,
              "Bad sizeof(TextureReleaser_Release_Params_Data)");

}  // namespace internal
class TextureReleaser_Release_ParamsDataView {
 public:
  TextureReleaser_Release_ParamsDataView() {}

  TextureReleaser_Release_ParamsDataView(
      internal::TextureReleaser_Release_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
  bool is_lost() const {
    return data_->is_lost;
  }
 private:
  internal::TextureReleaser_Release_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void TextureReleaser_Release_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TEXTURE_RELEASER_MOJOM_PARAMS_DATA_H_