// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_PARAMS_DATA_H_

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
class  URLLoader_FollowRedirect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_FollowRedirect_Params_Data));
      new (data()) URLLoader_FollowRedirect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_FollowRedirect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_FollowRedirect_Params_Data>(index_);
    }
    URLLoader_FollowRedirect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> removed_headers;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> modified_headers;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> new_url;

 private:
  URLLoader_FollowRedirect_Params_Data();
  ~URLLoader_FollowRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_FollowRedirect_Params_Data) == 32,
              "Bad sizeof(URLLoader_FollowRedirect_Params_Data)");
class  URLLoader_ProceedWithResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_ProceedWithResponse_Params_Data));
      new (data()) URLLoader_ProceedWithResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_ProceedWithResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_ProceedWithResponse_Params_Data>(index_);
    }
    URLLoader_ProceedWithResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_ProceedWithResponse_Params_Data();
  ~URLLoader_ProceedWithResponse_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_ProceedWithResponse_Params_Data) == 8,
              "Bad sizeof(URLLoader_ProceedWithResponse_Params_Data)");
class  URLLoader_SetPriority_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_SetPriority_Params_Data));
      new (data()) URLLoader_SetPriority_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_SetPriority_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_SetPriority_Params_Data>(index_);
    }
    URLLoader_SetPriority_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t priority;
  int32_t intra_priority_value;

 private:
  URLLoader_SetPriority_Params_Data();
  ~URLLoader_SetPriority_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_SetPriority_Params_Data) == 16,
              "Bad sizeof(URLLoader_SetPriority_Params_Data)");
class  URLLoader_PauseReadingBodyFromNet_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_PauseReadingBodyFromNet_Params_Data));
      new (data()) URLLoader_PauseReadingBodyFromNet_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_PauseReadingBodyFromNet_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_PauseReadingBodyFromNet_Params_Data>(index_);
    }
    URLLoader_PauseReadingBodyFromNet_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_PauseReadingBodyFromNet_Params_Data();
  ~URLLoader_PauseReadingBodyFromNet_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_PauseReadingBodyFromNet_Params_Data) == 8,
              "Bad sizeof(URLLoader_PauseReadingBodyFromNet_Params_Data)");
class  URLLoader_ResumeReadingBodyFromNet_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoader_ResumeReadingBodyFromNet_Params_Data));
      new (data()) URLLoader_ResumeReadingBodyFromNet_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoader_ResumeReadingBodyFromNet_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoader_ResumeReadingBodyFromNet_Params_Data>(index_);
    }
    URLLoader_ResumeReadingBodyFromNet_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_ResumeReadingBodyFromNet_Params_Data();
  ~URLLoader_ResumeReadingBodyFromNet_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_ResumeReadingBodyFromNet_Params_Data) == 8,
              "Bad sizeof(URLLoader_ResumeReadingBodyFromNet_Params_Data)");
class  URLLoaderClient_OnReceiveResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnReceiveResponse_Params_Data));
      new (data()) URLLoaderClient_OnReceiveResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnReceiveResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnReceiveResponse_Params_Data>(index_);
    }
    URLLoaderClient_OnReceiveResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::URLResponseHead_Data> head;

 private:
  URLLoaderClient_OnReceiveResponse_Params_Data();
  ~URLLoaderClient_OnReceiveResponse_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnReceiveResponse_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnReceiveResponse_Params_Data)");
class  URLLoaderClient_OnReceiveRedirect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnReceiveRedirect_Params_Data));
      new (data()) URLLoaderClient_OnReceiveRedirect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnReceiveRedirect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnReceiveRedirect_Params_Data>(index_);
    }
    URLLoaderClient_OnReceiveRedirect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::URLRequestRedirectInfo_Data> redirect_info;
  mojo::internal::Pointer<internal::URLResponseHead_Data> head;

 private:
  URLLoaderClient_OnReceiveRedirect_Params_Data();
  ~URLLoaderClient_OnReceiveRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnReceiveRedirect_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnReceiveRedirect_Params_Data)");
class  URLLoaderClient_OnUploadProgress_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnUploadProgress_Params_Data));
      new (data()) URLLoaderClient_OnUploadProgress_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnUploadProgress_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnUploadProgress_Params_Data>(index_);
    }
    URLLoaderClient_OnUploadProgress_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t current_position;
  int64_t total_size;

 private:
  URLLoaderClient_OnUploadProgress_Params_Data();
  ~URLLoaderClient_OnUploadProgress_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnUploadProgress_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnUploadProgress_Params_Data)");
class  URLLoaderClient_OnUploadProgress_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnUploadProgress_ResponseParams_Data));
      new (data()) URLLoaderClient_OnUploadProgress_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnUploadProgress_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnUploadProgress_ResponseParams_Data>(index_);
    }
    URLLoaderClient_OnUploadProgress_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  URLLoaderClient_OnUploadProgress_ResponseParams_Data();
  ~URLLoaderClient_OnUploadProgress_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnUploadProgress_ResponseParams_Data) == 8,
              "Bad sizeof(URLLoaderClient_OnUploadProgress_ResponseParams_Data)");
class  URLLoaderClient_OnReceiveCachedMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnReceiveCachedMetadata_Params_Data));
      new (data()) URLLoaderClient_OnReceiveCachedMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnReceiveCachedMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnReceiveCachedMetadata_Params_Data>(index_);
    }
    URLLoaderClient_OnReceiveCachedMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::mojo_base::mojom::internal::BigBuffer_Data data;

 private:
  URLLoaderClient_OnReceiveCachedMetadata_Params_Data();
  ~URLLoaderClient_OnReceiveCachedMetadata_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnReceiveCachedMetadata_Params_Data) == 24,
              "Bad sizeof(URLLoaderClient_OnReceiveCachedMetadata_Params_Data)");
class  URLLoaderClient_OnTransferSizeUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnTransferSizeUpdated_Params_Data));
      new (data()) URLLoaderClient_OnTransferSizeUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnTransferSizeUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnTransferSizeUpdated_Params_Data>(index_);
    }
    URLLoaderClient_OnTransferSizeUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t transfer_size_diff;
  uint8_t padfinal_[4];

 private:
  URLLoaderClient_OnTransferSizeUpdated_Params_Data();
  ~URLLoaderClient_OnTransferSizeUpdated_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnTransferSizeUpdated_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnTransferSizeUpdated_Params_Data)");
class  URLLoaderClient_OnStartLoadingResponseBody_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnStartLoadingResponseBody_Params_Data));
      new (data()) URLLoaderClient_OnStartLoadingResponseBody_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnStartLoadingResponseBody_Params_Data>(index_);
    }
    URLLoaderClient_OnStartLoadingResponseBody_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data body;
  uint8_t padfinal_[4];

 private:
  URLLoaderClient_OnStartLoadingResponseBody_Params_Data();
  ~URLLoaderClient_OnStartLoadingResponseBody_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnStartLoadingResponseBody_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnStartLoadingResponseBody_Params_Data)");
class  URLLoaderClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(URLLoaderClient_OnComplete_Params_Data));
      new (data()) URLLoaderClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    URLLoaderClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<URLLoaderClient_OnComplete_Params_Data>(index_);
    }
    URLLoaderClient_OnComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::URLLoaderCompletionStatus_Data> status;

 private:
  URLLoaderClient_OnComplete_Params_Data();
  ~URLLoaderClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderClient_OnComplete_Params_Data) == 16,
              "Bad sizeof(URLLoaderClient_OnComplete_Params_Data)");

}  // namespace internal
class URLLoader_FollowRedirect_ParamsDataView {
 public:
  URLLoader_FollowRedirect_ParamsDataView() {}

  URLLoader_FollowRedirect_ParamsDataView(
      internal::URLLoader_FollowRedirect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRemovedHeadersDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemovedHeaders(UserType* output) {
    auto* pointer = data_->removed_headers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetModifiedHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModifiedHeaders(UserType* output) {
    auto* pointer = data_->modified_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetNewUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewUrl(UserType* output) {
    auto* pointer = data_->new_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoader_FollowRedirect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoader_ProceedWithResponse_ParamsDataView {
 public:
  URLLoader_ProceedWithResponse_ParamsDataView() {}

  URLLoader_ProceedWithResponse_ParamsDataView(
      internal::URLLoader_ProceedWithResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_ProceedWithResponse_Params_Data* data_ = nullptr;
};

class URLLoader_SetPriority_ParamsDataView {
 public:
  URLLoader_SetPriority_ParamsDataView() {}

  URLLoader_SetPriority_ParamsDataView(
      internal::URLLoader_SetPriority_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::RequestPriority>(
        data_value, output);
  }

  RequestPriority priority() const {
    return static_cast<RequestPriority>(data_->priority);
  }
  int32_t intra_priority_value() const {
    return data_->intra_priority_value;
  }
 private:
  internal::URLLoader_SetPriority_Params_Data* data_ = nullptr;
};

class URLLoader_PauseReadingBodyFromNet_ParamsDataView {
 public:
  URLLoader_PauseReadingBodyFromNet_ParamsDataView() {}

  URLLoader_PauseReadingBodyFromNet_ParamsDataView(
      internal::URLLoader_PauseReadingBodyFromNet_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_PauseReadingBodyFromNet_Params_Data* data_ = nullptr;
};

class URLLoader_ResumeReadingBodyFromNet_ParamsDataView {
 public:
  URLLoader_ResumeReadingBodyFromNet_ParamsDataView() {}

  URLLoader_ResumeReadingBodyFromNet_ParamsDataView(
      internal::URLLoader_ResumeReadingBodyFromNet_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoader_ResumeReadingBodyFromNet_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnReceiveResponse_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveResponse_ParamsDataView() {}

  URLLoaderClient_OnReceiveResponse_ParamsDataView(
      internal::URLLoaderClient_OnReceiveResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadDataView(
      URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnReceiveResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnReceiveRedirect_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveRedirect_ParamsDataView() {}

  URLLoaderClient_OnReceiveRedirect_ParamsDataView(
      internal::URLLoaderClient_OnReceiveRedirect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRedirectInfoDataView(
      URLRequestRedirectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectInfo(UserType* output) {
    auto* pointer = data_->redirect_info.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestRedirectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetHeadDataView(
      URLResponseHeadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHead(UserType* output) {
    auto* pointer = data_->head.Get();
    return mojo::internal::Deserialize<::network::mojom::URLResponseHeadDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnReceiveRedirect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnUploadProgress_ParamsDataView {
 public:
  URLLoaderClient_OnUploadProgress_ParamsDataView() {}

  URLLoaderClient_OnUploadProgress_ParamsDataView(
      internal::URLLoaderClient_OnUploadProgress_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t current_position() const {
    return data_->current_position;
  }
  int64_t total_size() const {
    return data_->total_size;
  }
 private:
  internal::URLLoaderClient_OnUploadProgress_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnUploadProgress_ResponseParamsDataView {
 public:
  URLLoaderClient_OnUploadProgress_ResponseParamsDataView() {}

  URLLoaderClient_OnUploadProgress_ResponseParamsDataView(
      internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::URLLoaderClient_OnUploadProgress_ResponseParams_Data* data_ = nullptr;
};

class URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView {
 public:
  URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView() {}

  URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView(
      internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnReceiveCachedMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnTransferSizeUpdated_ParamsDataView {
 public:
  URLLoaderClient_OnTransferSizeUpdated_ParamsDataView() {}

  URLLoaderClient_OnTransferSizeUpdated_ParamsDataView(
      internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t transfer_size_diff() const {
    return data_->transfer_size_diff;
  }
 private:
  internal::URLLoaderClient_OnTransferSizeUpdated_Params_Data* data_ = nullptr;
};

class URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView {
 public:
  URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView() {}

  URLLoaderClient_OnStartLoadingResponseBody_ParamsDataView(
      internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeBody() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->body, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderClient_OnStartLoadingResponseBody_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClient_OnComplete_ParamsDataView {
 public:
  URLLoaderClient_OnComplete_ParamsDataView() {}

  URLLoaderClient_OnComplete_ParamsDataView(
      internal::URLLoaderClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusDataView(
      URLLoaderCompletionStatusDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) {
    auto* pointer = data_->status.Get();
    return mojo::internal::Deserialize<::network::mojom::URLLoaderCompletionStatusDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLLoaderClient_OnComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void URLLoader_FollowRedirect_ParamsDataView::GetRemovedHeadersDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->removed_headers.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void URLLoader_FollowRedirect_ParamsDataView::GetModifiedHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->modified_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void URLLoader_FollowRedirect_ParamsDataView::GetNewUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->new_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}










inline void URLLoaderClient_OnReceiveResponse_ParamsDataView::GetHeadDataView(
    URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = URLResponseHeadDataView(pointer, context_);
}


inline void URLLoaderClient_OnReceiveRedirect_ParamsDataView::GetRedirectInfoDataView(
    URLRequestRedirectInfoDataView* output) {
  auto pointer = data_->redirect_info.Get();
  *output = URLRequestRedirectInfoDataView(pointer, context_);
}
inline void URLLoaderClient_OnReceiveRedirect_ParamsDataView::GetHeadDataView(
    URLResponseHeadDataView* output) {
  auto pointer = data_->head.Get();
  *output = URLResponseHeadDataView(pointer, context_);
}






inline void URLLoaderClient_OnReceiveCachedMetadata_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}






inline void URLLoaderClient_OnComplete_ParamsDataView::GetStatusDataView(
    URLLoaderCompletionStatusDataView* output) {
  auto pointer = data_->status.Get();
  *output = URLLoaderCompletionStatusDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_PARAMS_DATA_H_