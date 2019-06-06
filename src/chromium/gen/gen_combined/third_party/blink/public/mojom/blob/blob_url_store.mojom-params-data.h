// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Register_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Register_Params_Data));
      new (data()) BlobURLStore_Register_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Register_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Register_Params_Data>(index_);
    }
    BlobURLStore_Register_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  BlobURLStore_Register_Params_Data();
  ~BlobURLStore_Register_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Register_Params_Data) == 24,
              "Bad sizeof(BlobURLStore_Register_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Register_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Register_ResponseParams_Data));
      new (data()) BlobURLStore_Register_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Register_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Register_ResponseParams_Data>(index_);
    }
    BlobURLStore_Register_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobURLStore_Register_ResponseParams_Data();
  ~BlobURLStore_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Register_ResponseParams_Data) == 8,
              "Bad sizeof(BlobURLStore_Register_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Revoke_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Revoke_Params_Data));
      new (data()) BlobURLStore_Revoke_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Revoke_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Revoke_Params_Data>(index_);
    }
    BlobURLStore_Revoke_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  BlobURLStore_Revoke_Params_Data();
  ~BlobURLStore_Revoke_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Revoke_Params_Data) == 16,
              "Bad sizeof(BlobURLStore_Revoke_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Resolve_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Resolve_Params_Data));
      new (data()) BlobURLStore_Resolve_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Resolve_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Resolve_Params_Data>(index_);
    }
    BlobURLStore_Resolve_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  BlobURLStore_Resolve_Params_Data();
  ~BlobURLStore_Resolve_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Resolve_Params_Data) == 16,
              "Bad sizeof(BlobURLStore_Resolve_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_Resolve_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_Resolve_ResponseParams_Data));
      new (data()) BlobURLStore_Resolve_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_Resolve_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_Resolve_ResponseParams_Data>(index_);
    }
    BlobURLStore_Resolve_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data blob;

 private:
  BlobURLStore_Resolve_ResponseParams_Data();
  ~BlobURLStore_Resolve_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobURLStore_Resolve_ResponseParams_Data) == 16,
              "Bad sizeof(BlobURLStore_Resolve_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_ResolveAsURLLoaderFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_ResolveAsURLLoaderFactory_Params_Data));
      new (data()) BlobURLStore_ResolveAsURLLoaderFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_ResolveAsURLLoaderFactory_Params_Data>(index_);
    }
    BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Handle_Data factory;
  uint8_t padfinal_[4];

 private:
  BlobURLStore_ResolveAsURLLoaderFactory_Params_Data();
  ~BlobURLStore_ResolveAsURLLoaderFactory_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_ResolveAsURLLoaderFactory_Params_Data) == 24,
              "Bad sizeof(BlobURLStore_ResolveAsURLLoaderFactory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLStore_ResolveForNavigation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLStore_ResolveForNavigation_Params_Data));
      new (data()) BlobURLStore_ResolveForNavigation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLStore_ResolveForNavigation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLStore_ResolveForNavigation_Params_Data>(index_);
    }
    BlobURLStore_ResolveForNavigation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Handle_Data token;
  uint8_t padfinal_[4];

 private:
  BlobURLStore_ResolveForNavigation_Params_Data();
  ~BlobURLStore_ResolveForNavigation_Params_Data() = delete;
};
static_assert(sizeof(BlobURLStore_ResolveForNavigation_Params_Data) == 24,
              "Bad sizeof(BlobURLStore_ResolveForNavigation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLToken_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLToken_Clone_Params_Data));
      new (data()) BlobURLToken_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLToken_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLToken_Clone_Params_Data>(index_);
    }
    BlobURLToken_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data token;
  uint8_t padfinal_[4];

 private:
  BlobURLToken_Clone_Params_Data();
  ~BlobURLToken_Clone_Params_Data() = delete;
};
static_assert(sizeof(BlobURLToken_Clone_Params_Data) == 16,
              "Bad sizeof(BlobURLToken_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLToken_GetToken_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLToken_GetToken_Params_Data));
      new (data()) BlobURLToken_GetToken_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLToken_GetToken_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLToken_GetToken_Params_Data>(index_);
    }
    BlobURLToken_GetToken_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BlobURLToken_GetToken_Params_Data();
  ~BlobURLToken_GetToken_Params_Data() = delete;
};
static_assert(sizeof(BlobURLToken_GetToken_Params_Data) == 8,
              "Bad sizeof(BlobURLToken_GetToken_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobURLToken_GetToken_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobURLToken_GetToken_ResponseParams_Data));
      new (data()) BlobURLToken_GetToken_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobURLToken_GetToken_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobURLToken_GetToken_ResponseParams_Data>(index_);
    }
    BlobURLToken_GetToken_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;

 private:
  BlobURLToken_GetToken_ResponseParams_Data();
  ~BlobURLToken_GetToken_ResponseParams_Data() = delete;
};
static_assert(sizeof(BlobURLToken_GetToken_ResponseParams_Data) == 16,
              "Bad sizeof(BlobURLToken_GetToken_ResponseParams_Data)");

}  // namespace internal
class BlobURLStore_Register_ParamsDataView {
 public:
  BlobURLStore_Register_ParamsDataView() {}

  BlobURLStore_Register_ParamsDataView(
      internal::BlobURLStore_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobURLStore_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_Register_ResponseParamsDataView {
 public:
  BlobURLStore_Register_ResponseParamsDataView() {}

  BlobURLStore_Register_ResponseParamsDataView(
      internal::BlobURLStore_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobURLStore_Register_ResponseParams_Data* data_ = nullptr;
};

class BlobURLStore_Revoke_ParamsDataView {
 public:
  BlobURLStore_Revoke_ParamsDataView() {}

  BlobURLStore_Revoke_ParamsDataView(
      internal::BlobURLStore_Revoke_Params_Data* data,
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
 private:
  internal::BlobURLStore_Revoke_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_Resolve_ParamsDataView {
 public:
  BlobURLStore_Resolve_ParamsDataView() {}

  BlobURLStore_Resolve_ParamsDataView(
      internal::BlobURLStore_Resolve_Params_Data* data,
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
 private:
  internal::BlobURLStore_Resolve_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_Resolve_ResponseParamsDataView {
 public:
  BlobURLStore_Resolve_ResponseParamsDataView() {}

  BlobURLStore_Resolve_ResponseParamsDataView(
      internal::BlobURLStore_Resolve_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLStore_Resolve_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView {
 public:
  BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView() {}

  BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView(
      internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* data,
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
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
#if defined(ENABLE_GNET)
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryRequestDataView>(
            &data_->factory, &result, context_);
    DCHECK(ret);
#endif // ENABLE_GNET
    return result;
  }
 private:
  internal::BlobURLStore_ResolveAsURLLoaderFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLStore_ResolveForNavigation_ParamsDataView {
 public:
  BlobURLStore_ResolveForNavigation_ParamsDataView() {}

  BlobURLStore_ResolveForNavigation_ParamsDataView(
      internal::BlobURLStore_ResolveForNavigation_Params_Data* data,
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
  template <typename UserType>
  UserType TakeToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLTokenRequestDataView>(
            &data_->token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLStore_ResolveForNavigation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLToken_Clone_ParamsDataView {
 public:
  BlobURLToken_Clone_ParamsDataView() {}

  BlobURLToken_Clone_ParamsDataView(
      internal::BlobURLToken_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobURLTokenRequestDataView>(
            &data_->token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BlobURLToken_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BlobURLToken_GetToken_ParamsDataView {
 public:
  BlobURLToken_GetToken_ParamsDataView() {}

  BlobURLToken_GetToken_ParamsDataView(
      internal::BlobURLToken_GetToken_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BlobURLToken_GetToken_Params_Data* data_ = nullptr;
};

class BlobURLToken_GetToken_ResponseParamsDataView {
 public:
  BlobURLToken_GetToken_ResponseParamsDataView() {}

  BlobURLToken_GetToken_ResponseParamsDataView(
      internal::BlobURLToken_GetToken_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::BlobURLToken_GetToken_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BlobURLStore_Register_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void BlobURLStore_Revoke_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void BlobURLStore_Resolve_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void BlobURLStore_ResolveAsURLLoaderFactory_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void BlobURLStore_ResolveForNavigation_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}






inline void BlobURLToken_GetToken_ResponseParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_PARAMS_DATA_H_
