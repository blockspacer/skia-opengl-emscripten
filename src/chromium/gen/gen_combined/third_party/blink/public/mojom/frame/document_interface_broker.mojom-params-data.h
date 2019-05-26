// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DocumentInterfaceBroker_GetAudioContextManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentInterfaceBroker_GetAudioContextManager_Params_Data));
      new (data()) DocumentInterfaceBroker_GetAudioContextManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentInterfaceBroker_GetAudioContextManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentInterfaceBroker_GetAudioContextManager_Params_Data>(index_);
    }
    DocumentInterfaceBroker_GetAudioContextManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  DocumentInterfaceBroker_GetAudioContextManager_Params_Data();
  ~DocumentInterfaceBroker_GetAudioContextManager_Params_Data() = delete;
};
static_assert(sizeof(DocumentInterfaceBroker_GetAudioContextManager_Params_Data) == 16,
              "Bad sizeof(DocumentInterfaceBroker_GetAudioContextManager_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DocumentInterfaceBroker_GetAuthenticator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentInterfaceBroker_GetAuthenticator_Params_Data));
      new (data()) DocumentInterfaceBroker_GetAuthenticator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentInterfaceBroker_GetAuthenticator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentInterfaceBroker_GetAuthenticator_Params_Data>(index_);
    }
    DocumentInterfaceBroker_GetAuthenticator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  DocumentInterfaceBroker_GetAuthenticator_Params_Data();
  ~DocumentInterfaceBroker_GetAuthenticator_Params_Data() = delete;
};
static_assert(sizeof(DocumentInterfaceBroker_GetAuthenticator_Params_Data) == 16,
              "Bad sizeof(DocumentInterfaceBroker_GetAuthenticator_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DocumentInterfaceBroker_GetCredentialManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentInterfaceBroker_GetCredentialManager_Params_Data));
      new (data()) DocumentInterfaceBroker_GetCredentialManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentInterfaceBroker_GetCredentialManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentInterfaceBroker_GetCredentialManager_Params_Data>(index_);
    }
    DocumentInterfaceBroker_GetCredentialManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  DocumentInterfaceBroker_GetCredentialManager_Params_Data();
  ~DocumentInterfaceBroker_GetCredentialManager_Params_Data() = delete;
};
static_assert(sizeof(DocumentInterfaceBroker_GetCredentialManager_Params_Data) == 16,
              "Bad sizeof(DocumentInterfaceBroker_GetCredentialManager_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data));
      new (data()) DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data>(index_);
    }
    DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data();
  ~DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data() = delete;
};
static_assert(sizeof(DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data) == 16,
              "Bad sizeof(DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data));
      new (data()) DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data>(index_);
    }
    DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data();
  ~DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data() = delete;
};
static_assert(sizeof(DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data) == 16,
              "Bad sizeof(DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data)");

}  // namespace internal
class DocumentInterfaceBroker_GetAudioContextManager_ParamsDataView {
 public:
  DocumentInterfaceBroker_GetAudioContextManager_ParamsDataView() {}

  DocumentInterfaceBroker_GetAudioContextManager_ParamsDataView(
      internal::DocumentInterfaceBroker_GetAudioContextManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::AudioContextManagerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DocumentInterfaceBroker_GetAudioContextManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DocumentInterfaceBroker_GetAuthenticator_ParamsDataView {
 public:
  DocumentInterfaceBroker_GetAuthenticator_ParamsDataView() {}

  DocumentInterfaceBroker_GetAuthenticator_ParamsDataView(
      internal::DocumentInterfaceBroker_GetAuthenticator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::AuthenticatorRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DocumentInterfaceBroker_GetAuthenticator_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DocumentInterfaceBroker_GetCredentialManager_ParamsDataView {
 public:
  DocumentInterfaceBroker_GetCredentialManager_ParamsDataView() {}

  DocumentInterfaceBroker_GetCredentialManager_ParamsDataView(
      internal::DocumentInterfaceBroker_GetCredentialManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::CredentialManagerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DocumentInterfaceBroker_GetCredentialManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DocumentInterfaceBroker_GetFrameHostTestInterface_ParamsDataView {
 public:
  DocumentInterfaceBroker_GetFrameHostTestInterface_ParamsDataView() {}

  DocumentInterfaceBroker_GetFrameHostTestInterface_ParamsDataView(
      internal::DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::FrameHostTestInterfaceRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DocumentInterfaceBroker_GetFrameHostTestInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DocumentInterfaceBroker_GetVirtualAuthenticatorManager_ParamsDataView {
 public:
  DocumentInterfaceBroker_GetVirtualAuthenticatorManager_ParamsDataView() {}

  DocumentInterfaceBroker_GetVirtualAuthenticatorManager_ParamsDataView(
      internal::DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::test::mojom::VirtualAuthenticatorManagerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DocumentInterfaceBroker_GetVirtualAuthenticatorManager_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};











}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_PARAMS_DATA_H_