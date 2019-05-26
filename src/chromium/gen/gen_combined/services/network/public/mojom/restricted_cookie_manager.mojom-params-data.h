// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_PARAMS_DATA_H_

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
namespace network {
namespace mojom {
namespace internal {
class  RestrictedCookieManager_GetAllForUrl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_GetAllForUrl_Params_Data));
      new (data()) RestrictedCookieManager_GetAllForUrl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_GetAllForUrl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_GetAllForUrl_Params_Data>(index_);
    }
    RestrictedCookieManager_GetAllForUrl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;
  mojo::internal::Pointer<internal::CookieManagerGetOptions_Data> options;

 private:
  RestrictedCookieManager_GetAllForUrl_Params_Data();
  ~RestrictedCookieManager_GetAllForUrl_Params_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_GetAllForUrl_Params_Data) == 32,
              "Bad sizeof(RestrictedCookieManager_GetAllForUrl_Params_Data)");
class  RestrictedCookieManager_GetAllForUrl_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_GetAllForUrl_ResponseParams_Data));
      new (data()) RestrictedCookieManager_GetAllForUrl_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_GetAllForUrl_ResponseParams_Data>(index_);
    }
    RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data>>> cookies;

 private:
  RestrictedCookieManager_GetAllForUrl_ResponseParams_Data();
  ~RestrictedCookieManager_GetAllForUrl_ResponseParams_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_GetAllForUrl_ResponseParams_Data) == 16,
              "Bad sizeof(RestrictedCookieManager_GetAllForUrl_ResponseParams_Data)");
class  RestrictedCookieManager_SetCanonicalCookie_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_SetCanonicalCookie_Params_Data));
      new (data()) RestrictedCookieManager_SetCanonicalCookie_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_SetCanonicalCookie_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_SetCanonicalCookie_Params_Data>(index_);
    }
    RestrictedCookieManager_SetCanonicalCookie_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::CanonicalCookie_Data> cookie;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;

 private:
  RestrictedCookieManager_SetCanonicalCookie_Params_Data();
  ~RestrictedCookieManager_SetCanonicalCookie_Params_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_SetCanonicalCookie_Params_Data) == 32,
              "Bad sizeof(RestrictedCookieManager_SetCanonicalCookie_Params_Data)");
class  RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data));
      new (data()) RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data>(index_);
    }
    RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data();
  ~RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data) == 16,
              "Bad sizeof(RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data)");
class  RestrictedCookieManager_AddChangeListener_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_AddChangeListener_Params_Data));
      new (data()) RestrictedCookieManager_AddChangeListener_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_AddChangeListener_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_AddChangeListener_Params_Data>(index_);
    }
    RestrictedCookieManager_AddChangeListener_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> site_for_cookies;
  mojo::internal::Interface_Data listener;

 private:
  RestrictedCookieManager_AddChangeListener_Params_Data();
  ~RestrictedCookieManager_AddChangeListener_Params_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_AddChangeListener_Params_Data) == 32,
              "Bad sizeof(RestrictedCookieManager_AddChangeListener_Params_Data)");
class  RestrictedCookieManager_AddChangeListener_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RestrictedCookieManager_AddChangeListener_ResponseParams_Data));
      new (data()) RestrictedCookieManager_AddChangeListener_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RestrictedCookieManager_AddChangeListener_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RestrictedCookieManager_AddChangeListener_ResponseParams_Data>(index_);
    }
    RestrictedCookieManager_AddChangeListener_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RestrictedCookieManager_AddChangeListener_ResponseParams_Data();
  ~RestrictedCookieManager_AddChangeListener_ResponseParams_Data() = delete;
};
static_assert(sizeof(RestrictedCookieManager_AddChangeListener_ResponseParams_Data) == 8,
              "Bad sizeof(RestrictedCookieManager_AddChangeListener_ResponseParams_Data)");

}  // namespace internal
class RestrictedCookieManager_GetAllForUrl_ParamsDataView {
 public:
  RestrictedCookieManager_GetAllForUrl_ParamsDataView() {}

  RestrictedCookieManager_GetAllForUrl_ParamsDataView(
      internal::RestrictedCookieManager_GetAllForUrl_Params_Data* data,
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
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      CookieManagerGetOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::network::mojom::CookieManagerGetOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::RestrictedCookieManager_GetAllForUrl_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView {
 public:
  RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView() {}

  RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView(
      internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookies(UserType* output) {
    auto* pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>>(
        pointer, output, context_);
  }
 private:
  internal::RestrictedCookieManager_GetAllForUrl_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_SetCanonicalCookie_ParamsDataView {
 public:
  RestrictedCookieManager_SetCanonicalCookie_ParamsDataView() {}

  RestrictedCookieManager_SetCanonicalCookie_ParamsDataView(
      internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookieDataView(
      ::network::mojom::CanonicalCookieDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCookie(UserType* output) {
    auto* pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<::network::mojom::CanonicalCookieDataView>(
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
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::RestrictedCookieManager_SetCanonicalCookie_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView {
 public:
  RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView() {}

  RestrictedCookieManager_SetCanonicalCookie_ResponseParamsDataView(
      internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::RestrictedCookieManager_SetCanonicalCookie_ResponseParams_Data* data_ = nullptr;
};

class RestrictedCookieManager_AddChangeListener_ParamsDataView {
 public:
  RestrictedCookieManager_AddChangeListener_ParamsDataView() {}

  RestrictedCookieManager_AddChangeListener_ParamsDataView(
      internal::RestrictedCookieManager_AddChangeListener_Params_Data* data,
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
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::CookieChangeListenerPtrDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::RestrictedCookieManager_AddChangeListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RestrictedCookieManager_AddChangeListener_ResponseParamsDataView {
 public:
  RestrictedCookieManager_AddChangeListener_ResponseParamsDataView() {}

  RestrictedCookieManager_AddChangeListener_ResponseParamsDataView(
      internal::RestrictedCookieManager_AddChangeListener_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RestrictedCookieManager_AddChangeListener_ResponseParams_Data* data_ = nullptr;
};


inline void RestrictedCookieManager_GetAllForUrl_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_GetAllForUrl_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_GetAllForUrl_ParamsDataView::GetOptionsDataView(
    CookieManagerGetOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = CookieManagerGetOptionsDataView(pointer, context_);
}


inline void RestrictedCookieManager_GetAllForUrl_ResponseParamsDataView::GetCookiesDataView(
    mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::ArrayDataView<::network::mojom::CanonicalCookieDataView>(pointer, context_);
}


inline void RestrictedCookieManager_SetCanonicalCookie_ParamsDataView::GetCookieDataView(
    ::network::mojom::CanonicalCookieDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = ::network::mojom::CanonicalCookieDataView(pointer, context_);
}
inline void RestrictedCookieManager_SetCanonicalCookie_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_SetCanonicalCookie_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}




inline void RestrictedCookieManager_AddChangeListener_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RestrictedCookieManager_AddChangeListener_ParamsDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_PARAMS_DATA_H_