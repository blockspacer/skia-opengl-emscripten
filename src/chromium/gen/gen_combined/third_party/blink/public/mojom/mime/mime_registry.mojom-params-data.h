// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MimeRegistry_GetMimeTypeFromExtension_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MimeRegistry_GetMimeTypeFromExtension_Params_Data));
      new (data()) MimeRegistry_GetMimeTypeFromExtension_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MimeRegistry_GetMimeTypeFromExtension_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MimeRegistry_GetMimeTypeFromExtension_Params_Data>(index_);
    }
    MimeRegistry_GetMimeTypeFromExtension_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> extension;

 private:
  MimeRegistry_GetMimeTypeFromExtension_Params_Data();
  ~MimeRegistry_GetMimeTypeFromExtension_Params_Data() = delete;
};
static_assert(sizeof(MimeRegistry_GetMimeTypeFromExtension_Params_Data) == 16,
              "Bad sizeof(MimeRegistry_GetMimeTypeFromExtension_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data));
      new (data()) MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data>(index_);
    }
    MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;

 private:
  MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data();
  ~MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data() = delete;
};
static_assert(sizeof(MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data) == 16,
              "Bad sizeof(MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data)");

}  // namespace internal
class MimeRegistry_GetMimeTypeFromExtension_ParamsDataView {
 public:
  MimeRegistry_GetMimeTypeFromExtension_ParamsDataView() {}

  MimeRegistry_GetMimeTypeFromExtension_ParamsDataView(
      internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetExtensionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtension(UserType* output) {
    auto* pointer = data_->extension.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MimeRegistry_GetMimeTypeFromExtension_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView {
 public:
  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView() {}

  MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView(
      internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::MimeRegistry_GetMimeTypeFromExtension_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void MimeRegistry_GetMimeTypeFromExtension_ParamsDataView::GetExtensionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->extension.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void MimeRegistry_GetMimeTypeFromExtension_ResponseParamsDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_PARAMS_DATA_H_