// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ProgressClient_OnProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProgressClient_OnProgress_Params_Data));
      new (data()) ProgressClient_OnProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProgressClient_OnProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProgressClient_OnProgress_Params_Data>(index_);
    }
    ProgressClient_OnProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t delta;

 private:
  ProgressClient_OnProgress_Params_Data();
  ~ProgressClient_OnProgress_Params_Data() = delete;
};
static_assert(sizeof(ProgressClient_OnProgress_Params_Data) == 16,
              "Bad sizeof(ProgressClient_OnProgress_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_Register_Params_Data));
      new (data()) BlobRegistry_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_Register_Params_Data>(index_);
    }
    BlobRegistry_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data blob;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;
  mojo::internal::Pointer<mojo::internal::String_Data> content_type;
  mojo::internal::Pointer<mojo::internal::String_Data> content_disposition;
  mojo::internal::Pointer<mojo::internal::Array_Data<::blink::mojom::internal::DataElement_Data>> elements;

 private:
  BlobRegistry_Register_Params_Data();
  ~BlobRegistry_Register_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_Register_Params_Data) == 48,
              "Bad sizeof(BlobRegistry_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_Register_ResponseParams_Data));
      new (data()) BlobRegistry_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_Register_ResponseParams_Data>(index_);
    }
    BlobRegistry_Register_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobRegistry_Register_ResponseParams_Data();
  ~BlobRegistry_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobRegistry_Register_ResponseParams_Data) == 8,
              "Bad sizeof(BlobRegistry_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_RegisterFromStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_RegisterFromStream_Params_Data));
      new (data()) BlobRegistry_RegisterFromStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_RegisterFromStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_RegisterFromStream_Params_Data>(index_);
    }
    BlobRegistry_RegisterFromStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> content_type;
  mojo::internal::Pointer<mojo::internal::String_Data> content_disposition;
  uint64_t length_hint;
  mojo::internal::Handle_Data data;
  mojo::internal::AssociatedInterface_Data progress_client;
  uint8_t padfinal_[4];

 private:
  BlobRegistry_RegisterFromStream_Params_Data();
  ~BlobRegistry_RegisterFromStream_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_RegisterFromStream_Params_Data) == 48,
              "Bad sizeof(BlobRegistry_RegisterFromStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_RegisterFromStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_RegisterFromStream_ResponseParams_Data));
      new (data()) BlobRegistry_RegisterFromStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_RegisterFromStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_RegisterFromStream_ResponseParams_Data>(index_);
    }
    BlobRegistry_RegisterFromStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> blob;

 private:
  BlobRegistry_RegisterFromStream_ResponseParams_Data();
  ~BlobRegistry_RegisterFromStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobRegistry_RegisterFromStream_ResponseParams_Data) == 16,
              "Bad sizeof(BlobRegistry_RegisterFromStream_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_GetBlobFromUUID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_GetBlobFromUUID_Params_Data));
      new (data()) BlobRegistry_GetBlobFromUUID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_GetBlobFromUUID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_GetBlobFromUUID_Params_Data>(index_);
    }
    BlobRegistry_GetBlobFromUUID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data blob;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;

 private:
  BlobRegistry_GetBlobFromUUID_Params_Data();
  ~BlobRegistry_GetBlobFromUUID_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_GetBlobFromUUID_Params_Data) == 24,
              "Bad sizeof(BlobRegistry_GetBlobFromUUID_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_GetBlobFromUUID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_GetBlobFromUUID_ResponseParams_Data));
      new (data()) BlobRegistry_GetBlobFromUUID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_GetBlobFromUUID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_GetBlobFromUUID_ResponseParams_Data>(index_);
    }
    BlobRegistry_GetBlobFromUUID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobRegistry_GetBlobFromUUID_ResponseParams_Data();
  ~BlobRegistry_GetBlobFromUUID_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobRegistry_GetBlobFromUUID_ResponseParams_Data) == 8,
              "Bad sizeof(BlobRegistry_GetBlobFromUUID_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobRegistry_URLStoreForOrigin_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobRegistry_URLStoreForOrigin_Params_Data));
      new (data()) BlobRegistry_URLStoreForOrigin_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobRegistry_URLStoreForOrigin_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobRegistry_URLStoreForOrigin_Params_Data>(index_);
    }
    BlobRegistry_URLStoreForOrigin_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::AssociatedEndpointHandle_Data url_store;
  uint8_t padfinal_[4];

 private:
  BlobRegistry_URLStoreForOrigin_Params_Data();
  ~BlobRegistry_URLStoreForOrigin_Params_Data() = delete;
};
static_assert(sizeof(BlobRegistry_URLStoreForOrigin_Params_Data) == 24,
              "Bad sizeof(BlobRegistry_URLStoreForOrigin_Params_Data)");

}  // namespace internal
class ProgressClient_OnProgress_ParamsDataView {
 public:
  ProgressClient_OnProgress_ParamsDataView() {}

  ProgressClient_OnProgress_ParamsDataView(
      internal::ProgressClient_OnProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t delta() const {
    return data_->delta;
  }
 private:
  internal::ProgressClient_OnProgress_Params_Data* data_ = nullptr;
};

class BlobRegistry_Register_ParamsDataView {
 public:
  BlobRegistry_Register_ParamsDataView() {}

  BlobRegistry_Register_ParamsDataView(
      internal::BlobRegistry_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobRequestDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentType(UserType* output) {
    auto* pointer = data_->content_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentDisposition(UserType* output) {
    auto* pointer = data_->content_disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetElementsDataView(
      mojo::ArrayDataView<::blink::mojom::DataElementDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElements(UserType* output) {
    auto* pointer = data_->elements.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::DataElementDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BlobRegistry_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_Register_ResponseParamsDataView {
 public:
  BlobRegistry_Register_ResponseParamsDataView() {}

  BlobRegistry_Register_ResponseParamsDataView(
      internal::BlobRegistry_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobRegistry_Register_ResponseParams_Data* data_ = nullptr;
};

class BlobRegistry_RegisterFromStream_ParamsDataView {
 public:
  BlobRegistry_RegisterFromStream_ParamsDataView() {}

  BlobRegistry_RegisterFromStream_ParamsDataView(
      internal::BlobRegistry_RegisterFromStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContentTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentType(UserType* output) {
    auto* pointer = data_->content_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentDispositionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentDisposition(UserType* output) {
    auto* pointer = data_->content_disposition.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t length_hint() const {
    return data_->length_hint;
  }
  mojo::ScopedDataPipeConsumerHandle TakeData() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->data, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeProgressClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ProgressClientAssociatedPtrInfoDataView>(
            &data_->progress_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobRegistry_RegisterFromStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_RegisterFromStream_ResponseParamsDataView {
 public:
  BlobRegistry_RegisterFromStream_ResponseParamsDataView() {}

  BlobRegistry_RegisterFromStream_ResponseParamsDataView(
      internal::BlobRegistry_RegisterFromStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlobDataView(
      ::blink::mojom::SerializedBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerializedBlobDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobRegistry_RegisterFromStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_GetBlobFromUUID_ParamsDataView {
 public:
  BlobRegistry_GetBlobFromUUID_ParamsDataView() {}

  BlobRegistry_GetBlobFromUUID_ParamsDataView(
      internal::BlobRegistry_GetBlobFromUUID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobRequestDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobRegistry_GetBlobFromUUID_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobRegistry_GetBlobFromUUID_ResponseParamsDataView {
 public:
  BlobRegistry_GetBlobFromUUID_ResponseParamsDataView() {}

  BlobRegistry_GetBlobFromUUID_ResponseParamsDataView(
      internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobRegistry_GetBlobFromUUID_ResponseParams_Data* data_ = nullptr;
};

class BlobRegistry_URLStoreForOrigin_ParamsDataView {
 public:
  BlobRegistry_URLStoreForOrigin_ParamsDataView() {}

  BlobRegistry_URLStoreForOrigin_ParamsDataView(
      internal::BlobRegistry_URLStoreForOrigin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrigin(UserType* output) {
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeUrlStore() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLStoreAssociatedRequestDataView>(
            &data_->url_store, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobRegistry_URLStoreForOrigin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void BlobRegistry_Register_ParamsDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_Register_ParamsDataView::GetContentTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_Register_ParamsDataView::GetContentDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_Register_ParamsDataView::GetElementsDataView(
    mojo::ArrayDataView<::blink::mojom::DataElementDataView>* output) {
  auto pointer = data_->elements.Get();
  *output = mojo::ArrayDataView<::blink::mojom::DataElementDataView>(pointer, context_);
}




inline void BlobRegistry_RegisterFromStream_ParamsDataView::GetContentTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void BlobRegistry_RegisterFromStream_ParamsDataView::GetContentDispositionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_disposition.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void BlobRegistry_RegisterFromStream_ResponseParamsDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}


inline void BlobRegistry_GetBlobFromUUID_ParamsDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void BlobRegistry_URLStoreForOrigin_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_PARAMS_DATA_H_