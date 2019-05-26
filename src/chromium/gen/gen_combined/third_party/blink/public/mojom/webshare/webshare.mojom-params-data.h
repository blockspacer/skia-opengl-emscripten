// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ShareService_Share_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ShareService_Share_Params_Data));
      new (data()) ShareService_Share_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ShareService_Share_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ShareService_Share_Params_Data>(index_);
    }
    ShareService_Share_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  mojo::internal::Pointer<mojo::internal::String_Data> text;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SharedFile_Data>>> files;

 private:
  ShareService_Share_Params_Data();
  ~ShareService_Share_Params_Data() = delete;
};
static_assert(sizeof(ShareService_Share_Params_Data) == 40,
              "Bad sizeof(ShareService_Share_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ShareService_Share_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ShareService_Share_ResponseParams_Data));
      new (data()) ShareService_Share_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ShareService_Share_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ShareService_Share_ResponseParams_Data>(index_);
    }
    ShareService_Share_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  ShareService_Share_ResponseParams_Data();
  ~ShareService_Share_ResponseParams_Data() = delete;
};
static_assert(sizeof(ShareService_Share_ResponseParams_Data) == 16,
              "Bad sizeof(ShareService_Share_ResponseParams_Data)");

}  // namespace internal
class ShareService_Share_ParamsDataView {
 public:
  ShareService_Share_ParamsDataView() {}

  ShareService_Share_ParamsDataView(
      internal::ShareService_Share_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetFilesDataView(
      mojo::ArrayDataView<SharedFileDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiles(UserType* output) {
    auto* pointer = data_->files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SharedFileDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ShareService_Share_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ShareService_Share_ResponseParamsDataView {
 public:
  ShareService_Share_ResponseParamsDataView() {}

  ShareService_Share_ResponseParamsDataView(
      internal::ShareService_Share_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ShareError>(
        data_value, output);
  }

  ShareError error() const {
    return static_cast<ShareError>(data_->error);
  }
 private:
  internal::ShareService_Share_ResponseParams_Data* data_ = nullptr;
};


inline void ShareService_Share_ParamsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ShareService_Share_ParamsDataView::GetTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ShareService_Share_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ShareService_Share_ParamsDataView::GetFilesDataView(
    mojo::ArrayDataView<SharedFileDataView>* output) {
  auto pointer = data_->files.Get();
  *output = mojo::ArrayDataView<SharedFileDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_PARAMS_DATA_H_