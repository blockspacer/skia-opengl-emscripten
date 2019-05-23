// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_PARAMS_DATA_H_

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
class  AuthenticationHandler_OnAuthRequired_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AuthenticationHandler_OnAuthRequired_Params_Data));
      new (data()) AuthenticationHandler_OnAuthRequired_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AuthenticationHandler_OnAuthRequired_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AuthenticationHandler_OnAuthRequired_Params_Data>(index_);
    }
    AuthenticationHandler_OnAuthRequired_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::AuthChallengeInfo_Data> info;
  mojo::internal::Pointer<::network::mojom::internal::HttpResponseHeaders_Data> headers;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> remote_endpoint;

 private:
  AuthenticationHandler_OnAuthRequired_Params_Data();
  ~AuthenticationHandler_OnAuthRequired_Params_Data() = delete;
};
static_assert(sizeof(AuthenticationHandler_OnAuthRequired_Params_Data) == 32,
              "Bad sizeof(AuthenticationHandler_OnAuthRequired_Params_Data)");
class  AuthenticationHandler_OnAuthRequired_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AuthenticationHandler_OnAuthRequired_ResponseParams_Data));
      new (data()) AuthenticationHandler_OnAuthRequired_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AuthenticationHandler_OnAuthRequired_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AuthenticationHandler_OnAuthRequired_ResponseParams_Data>(index_);
    }
    AuthenticationHandler_OnAuthRequired_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::AuthCredentials_Data> credentials;

 private:
  AuthenticationHandler_OnAuthRequired_ResponseParams_Data();
  ~AuthenticationHandler_OnAuthRequired_ResponseParams_Data() = delete;
};
static_assert(sizeof(AuthenticationHandler_OnAuthRequired_ResponseParams_Data) == 16,
              "Bad sizeof(AuthenticationHandler_OnAuthRequired_ResponseParams_Data)");
class  WebSocketClient_OnFailChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnFailChannel_Params_Data));
      new (data()) WebSocketClient_OnFailChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnFailChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnFailChannel_Params_Data>(index_);
    }
    WebSocketClient_OnFailChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  WebSocketClient_OnFailChannel_Params_Data();
  ~WebSocketClient_OnFailChannel_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnFailChannel_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnFailChannel_Params_Data)");
class  WebSocketClient_OnStartOpeningHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnStartOpeningHandshake_Params_Data));
      new (data()) WebSocketClient_OnStartOpeningHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnStartOpeningHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnStartOpeningHandshake_Params_Data>(index_);
    }
    WebSocketClient_OnStartOpeningHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebSocketHandshakeRequest_Data> request;

 private:
  WebSocketClient_OnStartOpeningHandshake_Params_Data();
  ~WebSocketClient_OnStartOpeningHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnStartOpeningHandshake_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnStartOpeningHandshake_Params_Data)");
class  WebSocketClient_OnFinishOpeningHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnFinishOpeningHandshake_Params_Data));
      new (data()) WebSocketClient_OnFinishOpeningHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnFinishOpeningHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnFinishOpeningHandshake_Params_Data>(index_);
    }
    WebSocketClient_OnFinishOpeningHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebSocketHandshakeResponse_Data> response;

 private:
  WebSocketClient_OnFinishOpeningHandshake_Params_Data();
  ~WebSocketClient_OnFinishOpeningHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnFinishOpeningHandshake_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnFinishOpeningHandshake_Params_Data)");
class  WebSocketClient_OnAddChannelResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnAddChannelResponse_Params_Data));
      new (data()) WebSocketClient_OnAddChannelResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnAddChannelResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnAddChannelResponse_Params_Data>(index_);
    }
    WebSocketClient_OnAddChannelResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> selected_protocol;
  mojo::internal::Pointer<mojo::internal::String_Data> extensions;

 private:
  WebSocketClient_OnAddChannelResponse_Params_Data();
  ~WebSocketClient_OnAddChannelResponse_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnAddChannelResponse_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_OnAddChannelResponse_Params_Data)");
class  WebSocketClient_OnDataFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnDataFrame_Params_Data));
      new (data()) WebSocketClient_OnDataFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnDataFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnDataFrame_Params_Data>(index_);
    }
    WebSocketClient_OnDataFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t fin : 1;
  uint8_t pad0_[3];
  int32_t type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  WebSocketClient_OnDataFrame_Params_Data();
  ~WebSocketClient_OnDataFrame_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnDataFrame_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_OnDataFrame_Params_Data)");
class  WebSocketClient_OnFlowControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnFlowControl_Params_Data));
      new (data()) WebSocketClient_OnFlowControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnFlowControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnFlowControl_Params_Data>(index_);
    }
    WebSocketClient_OnFlowControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t quota;

 private:
  WebSocketClient_OnFlowControl_Params_Data();
  ~WebSocketClient_OnFlowControl_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnFlowControl_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_OnFlowControl_Params_Data)");
class  WebSocketClient_OnDropChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnDropChannel_Params_Data));
      new (data()) WebSocketClient_OnDropChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnDropChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnDropChannel_Params_Data>(index_);
    }
    WebSocketClient_OnDropChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t was_clean : 1;
  uint8_t pad0_[1];
  uint16_t code;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  WebSocketClient_OnDropChannel_Params_Data();
  ~WebSocketClient_OnDropChannel_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnDropChannel_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_OnDropChannel_Params_Data)");
class  WebSocketClient_OnClosingHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocketClient_OnClosingHandshake_Params_Data));
      new (data()) WebSocketClient_OnClosingHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocketClient_OnClosingHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocketClient_OnClosingHandshake_Params_Data>(index_);
    }
    WebSocketClient_OnClosingHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebSocketClient_OnClosingHandshake_Params_Data();
  ~WebSocketClient_OnClosingHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_OnClosingHandshake_Params_Data) == 8,
              "Bad sizeof(WebSocketClient_OnClosingHandshake_Params_Data)");
class  WebSocket_AddChannelRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_AddChannelRequest_Params_Data));
      new (data()) WebSocket_AddChannelRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_AddChannelRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_AddChannelRequest_Params_Data>(index_);
    }
    WebSocket_AddChannelRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> requested_protocols;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> first_party_for_cookies;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HttpHeader_Data>>> additional_headers;
  mojo::internal::Interface_Data client;

 private:
  WebSocket_AddChannelRequest_Params_Data();
  ~WebSocket_AddChannelRequest_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_AddChannelRequest_Params_Data) == 48,
              "Bad sizeof(WebSocket_AddChannelRequest_Params_Data)");
class  WebSocket_SendFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_SendFrame_Params_Data));
      new (data()) WebSocket_SendFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_SendFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_SendFrame_Params_Data>(index_);
    }
    WebSocket_SendFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t fin : 1;
  uint8_t pad0_[3];
  int32_t type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  WebSocket_SendFrame_Params_Data();
  ~WebSocket_SendFrame_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_SendFrame_Params_Data) == 24,
              "Bad sizeof(WebSocket_SendFrame_Params_Data)");
class  WebSocket_SendFlowControl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_SendFlowControl_Params_Data));
      new (data()) WebSocket_SendFlowControl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_SendFlowControl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_SendFlowControl_Params_Data>(index_);
    }
    WebSocket_SendFlowControl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t quota;

 private:
  WebSocket_SendFlowControl_Params_Data();
  ~WebSocket_SendFlowControl_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_SendFlowControl_Params_Data) == 16,
              "Bad sizeof(WebSocket_SendFlowControl_Params_Data)");
class  WebSocket_StartClosingHandshake_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebSocket_StartClosingHandshake_Params_Data));
      new (data()) WebSocket_StartClosingHandshake_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebSocket_StartClosingHandshake_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebSocket_StartClosingHandshake_Params_Data>(index_);
    }
    WebSocket_StartClosingHandshake_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t code;
  uint8_t pad0_[6];
  mojo::internal::Pointer<mojo::internal::String_Data> reason;

 private:
  WebSocket_StartClosingHandshake_Params_Data();
  ~WebSocket_StartClosingHandshake_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_StartClosingHandshake_Params_Data) == 24,
              "Bad sizeof(WebSocket_StartClosingHandshake_Params_Data)");

}  // namespace internal
class AuthenticationHandler_OnAuthRequired_ParamsDataView {
 public:
  AuthenticationHandler_OnAuthRequired_ParamsDataView() {}

  AuthenticationHandler_OnAuthRequired_ParamsDataView(
      internal::AuthenticationHandler_OnAuthRequired_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::network::mojom::AuthChallengeInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::network::mojom::AuthChallengeInfoDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      ::network::mojom::HttpResponseHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpResponseHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteEndpointDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteEndpoint(UserType* output) {
    auto* pointer = data_->remote_endpoint.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::AuthenticationHandler_OnAuthRequired_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AuthenticationHandler_OnAuthRequired_ResponseParamsDataView {
 public:
  AuthenticationHandler_OnAuthRequired_ResponseParamsDataView() {}

  AuthenticationHandler_OnAuthRequired_ResponseParamsDataView(
      internal::AuthenticationHandler_OnAuthRequired_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCredentialsDataView(
      ::network::mojom::AuthCredentialsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredentials(UserType* output) {
    auto* pointer = data_->credentials.Get();
    return mojo::internal::Deserialize<::network::mojom::AuthCredentialsDataView>(
        pointer, output, context_);
  }
 private:
  internal::AuthenticationHandler_OnAuthRequired_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnFailChannel_ParamsDataView {
 public:
  WebSocketClient_OnFailChannel_ParamsDataView() {}

  WebSocketClient_OnFailChannel_ParamsDataView(
      internal::WebSocketClient_OnFailChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) {
    auto* pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnFailChannel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnStartOpeningHandshake_ParamsDataView {
 public:
  WebSocketClient_OnStartOpeningHandshake_ParamsDataView() {}

  WebSocketClient_OnStartOpeningHandshake_ParamsDataView(
      internal::WebSocketClient_OnStartOpeningHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      WebSocketHandshakeRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::network::mojom::WebSocketHandshakeRequestDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnStartOpeningHandshake_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnFinishOpeningHandshake_ParamsDataView {
 public:
  WebSocketClient_OnFinishOpeningHandshake_ParamsDataView() {}

  WebSocketClient_OnFinishOpeningHandshake_ParamsDataView(
      internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      WebSocketHandshakeResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::network::mojom::WebSocketHandshakeResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnFinishOpeningHandshake_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnAddChannelResponse_ParamsDataView {
 public:
  WebSocketClient_OnAddChannelResponse_ParamsDataView() {}

  WebSocketClient_OnAddChannelResponse_ParamsDataView(
      internal::WebSocketClient_OnAddChannelResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSelectedProtocolDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSelectedProtocol(UserType* output) {
    auto* pointer = data_->selected_protocol.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtensions(UserType* output) {
    auto* pointer = data_->extensions.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnAddChannelResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnDataFrame_ParamsDataView {
 public:
  WebSocketClient_OnDataFrame_ParamsDataView() {}

  WebSocketClient_OnDataFrame_ParamsDataView(
      internal::WebSocketClient_OnDataFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool fin() const {
    return data_->fin;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::WebSocketMessageType>(
        data_value, output);
  }

  WebSocketMessageType type() const {
    return static_cast<WebSocketMessageType>(data_->type);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnDataFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnFlowControl_ParamsDataView {
 public:
  WebSocketClient_OnFlowControl_ParamsDataView() {}

  WebSocketClient_OnFlowControl_ParamsDataView(
      internal::WebSocketClient_OnFlowControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t quota() const {
    return data_->quota;
  }
 private:
  internal::WebSocketClient_OnFlowControl_Params_Data* data_ = nullptr;
};

class WebSocketClient_OnDropChannel_ParamsDataView {
 public:
  WebSocketClient_OnDropChannel_ParamsDataView() {}

  WebSocketClient_OnDropChannel_ParamsDataView(
      internal::WebSocketClient_OnDropChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool was_clean() const {
    return data_->was_clean;
  }
  uint16_t code() const {
    return data_->code;
  }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) {
    auto* pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketClient_OnDropChannel_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketClient_OnClosingHandshake_ParamsDataView {
 public:
  WebSocketClient_OnClosingHandshake_ParamsDataView() {}

  WebSocketClient_OnClosingHandshake_ParamsDataView(
      internal::WebSocketClient_OnClosingHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebSocketClient_OnClosingHandshake_Params_Data* data_ = nullptr;
};

class WebSocket_AddChannelRequest_ParamsDataView {
 public:
  WebSocket_AddChannelRequest_ParamsDataView() {}

  WebSocket_AddChannelRequest_ParamsDataView(
      internal::WebSocket_AddChannelRequest_Params_Data* data,
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
  inline void GetRequestedProtocolsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestedProtocols(UserType* output) {
    auto* pointer = data_->requested_protocols.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetFirstPartyForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstPartyForCookies(UserType* output) {
    auto* pointer = data_->first_party_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetAdditionalHeadersDataView(
      mojo::ArrayDataView<HttpHeaderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAdditionalHeaders(UserType* output) {
    auto* pointer = data_->additional_headers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::HttpHeaderDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::WebSocketClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebSocket_AddChannelRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocket_SendFrame_ParamsDataView {
 public:
  WebSocket_SendFrame_ParamsDataView() {}

  WebSocket_SendFrame_ParamsDataView(
      internal::WebSocket_SendFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool fin() const {
    return data_->fin;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::WebSocketMessageType>(
        data_value, output);
  }

  WebSocketMessageType type() const {
    return static_cast<WebSocketMessageType>(data_->type);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebSocket_SendFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocket_SendFlowControl_ParamsDataView {
 public:
  WebSocket_SendFlowControl_ParamsDataView() {}

  WebSocket_SendFlowControl_ParamsDataView(
      internal::WebSocket_SendFlowControl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t quota() const {
    return data_->quota;
  }
 private:
  internal::WebSocket_SendFlowControl_Params_Data* data_ = nullptr;
};

class WebSocket_StartClosingHandshake_ParamsDataView {
 public:
  WebSocket_StartClosingHandshake_ParamsDataView() {}

  WebSocket_StartClosingHandshake_ParamsDataView(
      internal::WebSocket_StartClosingHandshake_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint16_t code() const {
    return data_->code;
  }
  inline void GetReasonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) {
    auto* pointer = data_->reason.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocket_StartClosingHandshake_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AuthenticationHandler_OnAuthRequired_ParamsDataView::GetInfoDataView(
    ::network::mojom::AuthChallengeInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::network::mojom::AuthChallengeInfoDataView(pointer, context_);
}
inline void AuthenticationHandler_OnAuthRequired_ParamsDataView::GetHeadersDataView(
    ::network::mojom::HttpResponseHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = ::network::mojom::HttpResponseHeadersDataView(pointer, context_);
}
inline void AuthenticationHandler_OnAuthRequired_ParamsDataView::GetRemoteEndpointDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->remote_endpoint.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void AuthenticationHandler_OnAuthRequired_ResponseParamsDataView::GetCredentialsDataView(
    ::network::mojom::AuthCredentialsDataView* output) {
  auto pointer = data_->credentials.Get();
  *output = ::network::mojom::AuthCredentialsDataView(pointer, context_);
}


inline void WebSocketClient_OnFailChannel_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebSocketClient_OnStartOpeningHandshake_ParamsDataView::GetRequestDataView(
    WebSocketHandshakeRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = WebSocketHandshakeRequestDataView(pointer, context_);
}


inline void WebSocketClient_OnFinishOpeningHandshake_ParamsDataView::GetResponseDataView(
    WebSocketHandshakeResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = WebSocketHandshakeResponseDataView(pointer, context_);
}


inline void WebSocketClient_OnAddChannelResponse_ParamsDataView::GetSelectedProtocolDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->selected_protocol.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebSocketClient_OnAddChannelResponse_ParamsDataView::GetExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebSocketClient_OnDataFrame_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void WebSocketClient_OnDropChannel_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void WebSocket_AddChannelRequest_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetRequestedProtocolsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->requested_protocols.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetFirstPartyForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->first_party_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocket_AddChannelRequest_ParamsDataView::GetAdditionalHeadersDataView(
    mojo::ArrayDataView<HttpHeaderDataView>* output) {
  auto pointer = data_->additional_headers.Get();
  *output = mojo::ArrayDataView<HttpHeaderDataView>(pointer, context_);
}


inline void WebSocket_SendFrame_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void WebSocket_StartClosingHandshake_ParamsDataView::GetReasonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->reason.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_PARAMS_DATA_H_