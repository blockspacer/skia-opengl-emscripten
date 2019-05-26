// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifest_Params_Data));
      new (data()) ManifestManager_RequestManifest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifest_Params_Data>(index_);
    }
    ManifestManager_RequestManifest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ManifestManager_RequestManifest_Params_Data();
  ~ManifestManager_RequestManifest_Params_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifest_Params_Data) == 8,
              "Bad sizeof(ManifestManager_RequestManifest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifest_ResponseParams_Data));
      new (data()) ManifestManager_RequestManifest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifest_ResponseParams_Data>(index_);
    }
    ManifestManager_RequestManifest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::blink::mojom::internal::Manifest_Data> manifest;

 private:
  ManifestManager_RequestManifest_ResponseParams_Data();
  ~ManifestManager_RequestManifest_ResponseParams_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifest_ResponseParams_Data) == 24,
              "Bad sizeof(ManifestManager_RequestManifest_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifestDebugInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifestDebugInfo_Params_Data));
      new (data()) ManifestManager_RequestManifestDebugInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifestDebugInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifestDebugInfo_Params_Data>(index_);
    }
    ManifestManager_RequestManifestDebugInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ManifestManager_RequestManifestDebugInfo_Params_Data();
  ~ManifestManager_RequestManifestDebugInfo_Params_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifestDebugInfo_Params_Data) == 8,
              "Bad sizeof(ManifestManager_RequestManifestDebugInfo_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ManifestManager_RequestManifestDebugInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ManifestManager_RequestManifestDebugInfo_ResponseParams_Data));
      new (data()) ManifestManager_RequestManifestDebugInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ManifestManager_RequestManifestDebugInfo_ResponseParams_Data>(index_);
    }
    ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::blink::mojom::internal::ManifestDebugInfo_Data> debug_info;

 private:
  ManifestManager_RequestManifestDebugInfo_ResponseParams_Data();
  ~ManifestManager_RequestManifestDebugInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(ManifestManager_RequestManifestDebugInfo_ResponseParams_Data) == 24,
              "Bad sizeof(ManifestManager_RequestManifestDebugInfo_ResponseParams_Data)");

}  // namespace internal
class ManifestManager_RequestManifest_ParamsDataView {
 public:
  ManifestManager_RequestManifest_ParamsDataView() {}

  ManifestManager_RequestManifest_ParamsDataView(
      internal::ManifestManager_RequestManifest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ManifestManager_RequestManifest_Params_Data* data_ = nullptr;
};

class ManifestManager_RequestManifest_ResponseParamsDataView {
 public:
  ManifestManager_RequestManifest_ResponseParamsDataView() {}

  ManifestManager_RequestManifest_ResponseParamsDataView(
      internal::ManifestManager_RequestManifest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetManifestDataView(
      ::blink::mojom::ManifestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManifest(UserType* output) {
    auto* pointer = data_->manifest.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestManager_RequestManifest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestManager_RequestManifestDebugInfo_ParamsDataView {
 public:
  ManifestManager_RequestManifestDebugInfo_ParamsDataView() {}

  ManifestManager_RequestManifestDebugInfo_ParamsDataView(
      internal::ManifestManager_RequestManifestDebugInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ManifestManager_RequestManifestDebugInfo_Params_Data* data_ = nullptr;
};

class ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView {
 public:
  ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView() {}

  ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView(
      internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetDebugInfoDataView(
      ::blink::mojom::ManifestDebugInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDebugInfo(UserType* output) {
    auto* pointer = data_->debug_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestDebugInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestManager_RequestManifestDebugInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void ManifestManager_RequestManifest_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestManager_RequestManifest_ResponseParamsDataView::GetManifestDataView(
    ::blink::mojom::ManifestDataView* output) {
  auto pointer = data_->manifest.Get();
  *output = ::blink::mojom::ManifestDataView(pointer, context_);
}




inline void ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestManager_RequestManifestDebugInfo_ResponseParamsDataView::GetDebugInfoDataView(
    ::blink::mojom::ManifestDebugInfoDataView* output) {
  auto pointer = data_->debug_info.Get();
  *output = ::blink::mojom::ManifestDebugInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MANAGER_MOJOM_PARAMS_DATA_H_