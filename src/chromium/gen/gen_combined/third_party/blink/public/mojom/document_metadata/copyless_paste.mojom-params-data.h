// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_PARAMS_DATA_H_

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
namespace document_metadata {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CopylessPaste_GetEntities_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CopylessPaste_GetEntities_Params_Data));
      new (data()) CopylessPaste_GetEntities_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CopylessPaste_GetEntities_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CopylessPaste_GetEntities_Params_Data>(index_);
    }
    CopylessPaste_GetEntities_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CopylessPaste_GetEntities_Params_Data();
  ~CopylessPaste_GetEntities_Params_Data() = delete;
};
static_assert(sizeof(CopylessPaste_GetEntities_Params_Data) == 8,
              "Bad sizeof(CopylessPaste_GetEntities_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CopylessPaste_GetEntities_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CopylessPaste_GetEntities_ResponseParams_Data));
      new (data()) CopylessPaste_GetEntities_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CopylessPaste_GetEntities_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CopylessPaste_GetEntities_ResponseParams_Data>(index_);
    }
    CopylessPaste_GetEntities_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebPage_Data> page;

 private:
  CopylessPaste_GetEntities_ResponseParams_Data();
  ~CopylessPaste_GetEntities_ResponseParams_Data() = delete;
};
static_assert(sizeof(CopylessPaste_GetEntities_ResponseParams_Data) == 16,
              "Bad sizeof(CopylessPaste_GetEntities_ResponseParams_Data)");

}  // namespace internal
class CopylessPaste_GetEntities_ParamsDataView {
 public:
  CopylessPaste_GetEntities_ParamsDataView() {}

  CopylessPaste_GetEntities_ParamsDataView(
      internal::CopylessPaste_GetEntities_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CopylessPaste_GetEntities_Params_Data* data_ = nullptr;
};

class CopylessPaste_GetEntities_ResponseParamsDataView {
 public:
  CopylessPaste_GetEntities_ResponseParamsDataView() {}

  CopylessPaste_GetEntities_ResponseParamsDataView(
      internal::CopylessPaste_GetEntities_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPageDataView(
      WebPageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPage(UserType* output) {
    auto* pointer = data_->page.Get();
    return mojo::internal::Deserialize<::blink::mojom::document_metadata::WebPageDataView>(
        pointer, output, context_);
  }
 private:
  internal::CopylessPaste_GetEntities_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void CopylessPaste_GetEntities_ResponseParamsDataView::GetPageDataView(
    WebPageDataView* output) {
  auto pointer = data_->page.Get();
  *output = WebPageDataView(pointer, context_);
}

}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_PARAMS_DATA_H_