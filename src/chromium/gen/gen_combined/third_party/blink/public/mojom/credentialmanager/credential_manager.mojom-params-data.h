// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CredentialManager_Store_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Store_Params_Data));
      new (data()) CredentialManager_Store_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Store_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Store_Params_Data>(index_);
    }
    CredentialManager_Store_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CredentialInfo_Data> credential;

 private:
  CredentialManager_Store_Params_Data();
  ~CredentialManager_Store_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_Store_Params_Data) == 16,
              "Bad sizeof(CredentialManager_Store_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CredentialManager_Store_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Store_ResponseParams_Data));
      new (data()) CredentialManager_Store_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Store_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Store_ResponseParams_Data>(index_);
    }
    CredentialManager_Store_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_Store_ResponseParams_Data();
  ~CredentialManager_Store_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_Store_ResponseParams_Data) == 8,
              "Bad sizeof(CredentialManager_Store_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CredentialManager_PreventSilentAccess_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_PreventSilentAccess_Params_Data));
      new (data()) CredentialManager_PreventSilentAccess_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_PreventSilentAccess_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_PreventSilentAccess_Params_Data>(index_);
    }
    CredentialManager_PreventSilentAccess_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_PreventSilentAccess_Params_Data();
  ~CredentialManager_PreventSilentAccess_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_PreventSilentAccess_Params_Data) == 8,
              "Bad sizeof(CredentialManager_PreventSilentAccess_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CredentialManager_PreventSilentAccess_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_PreventSilentAccess_ResponseParams_Data));
      new (data()) CredentialManager_PreventSilentAccess_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_PreventSilentAccess_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_PreventSilentAccess_ResponseParams_Data>(index_);
    }
    CredentialManager_PreventSilentAccess_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CredentialManager_PreventSilentAccess_ResponseParams_Data();
  ~CredentialManager_PreventSilentAccess_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_PreventSilentAccess_ResponseParams_Data) == 8,
              "Bad sizeof(CredentialManager_PreventSilentAccess_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CredentialManager_Get_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Get_Params_Data));
      new (data()) CredentialManager_Get_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Get_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Get_Params_Data>(index_);
    }
    CredentialManager_Get_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mediation;
  uint8_t include_passwords : 1;
  uint8_t pad1_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> federations;

 private:
  CredentialManager_Get_Params_Data();
  ~CredentialManager_Get_Params_Data() = delete;
};
static_assert(sizeof(CredentialManager_Get_Params_Data) == 24,
              "Bad sizeof(CredentialManager_Get_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CredentialManager_Get_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CredentialManager_Get_ResponseParams_Data));
      new (data()) CredentialManager_Get_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CredentialManager_Get_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CredentialManager_Get_ResponseParams_Data>(index_);
    }
    CredentialManager_Get_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::CredentialInfo_Data> credential;

 private:
  CredentialManager_Get_ResponseParams_Data();
  ~CredentialManager_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(CredentialManager_Get_ResponseParams_Data) == 24,
              "Bad sizeof(CredentialManager_Get_ResponseParams_Data)");

}  // namespace internal
class CredentialManager_Store_ParamsDataView {
 public:
  CredentialManager_Store_ParamsDataView() {}

  CredentialManager_Store_ParamsDataView(
      internal::CredentialManager_Store_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCredentialDataView(
      CredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::blink::mojom::CredentialInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Store_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CredentialManager_Store_ResponseParamsDataView {
 public:
  CredentialManager_Store_ResponseParamsDataView() {}

  CredentialManager_Store_ResponseParamsDataView(
      internal::CredentialManager_Store_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_Store_ResponseParams_Data* data_ = nullptr;
};

class CredentialManager_PreventSilentAccess_ParamsDataView {
 public:
  CredentialManager_PreventSilentAccess_ParamsDataView() {}

  CredentialManager_PreventSilentAccess_ParamsDataView(
      internal::CredentialManager_PreventSilentAccess_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_PreventSilentAccess_Params_Data* data_ = nullptr;
};

class CredentialManager_PreventSilentAccess_ResponseParamsDataView {
 public:
  CredentialManager_PreventSilentAccess_ResponseParamsDataView() {}

  CredentialManager_PreventSilentAccess_ResponseParamsDataView(
      internal::CredentialManager_PreventSilentAccess_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CredentialManager_PreventSilentAccess_ResponseParams_Data* data_ = nullptr;
};

class CredentialManager_Get_ParamsDataView {
 public:
  CredentialManager_Get_ParamsDataView() {}

  CredentialManager_Get_ParamsDataView(
      internal::CredentialManager_Get_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediation(UserType* output) const {
    auto data_value = data_->mediation;
    return mojo::internal::Deserialize<::blink::mojom::CredentialMediationRequirement>(
        data_value, output);
  }

  CredentialMediationRequirement mediation() const {
    return static_cast<CredentialMediationRequirement>(data_->mediation);
  }
  bool include_passwords() const {
    return data_->include_passwords;
  }
  inline void GetFederationsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFederations(UserType* output) {
    auto* pointer = data_->federations.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Get_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CredentialManager_Get_ResponseParamsDataView {
 public:
  CredentialManager_Get_ResponseParamsDataView() {}

  CredentialManager_Get_ResponseParamsDataView(
      internal::CredentialManager_Get_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::CredentialManagerError>(
        data_value, output);
  }

  CredentialManagerError error() const {
    return static_cast<CredentialManagerError>(data_->error);
  }
  inline void GetCredentialDataView(
      CredentialInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredential(UserType* output) {
    auto* pointer = data_->credential.Get();
    return mojo::internal::Deserialize<::blink::mojom::CredentialInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::CredentialManager_Get_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CredentialManager_Store_ParamsDataView::GetCredentialDataView(
    CredentialInfoDataView* output) {
  auto pointer = data_->credential.Get();
  *output = CredentialInfoDataView(pointer, context_);
}








inline void CredentialManager_Get_ParamsDataView::GetFederationsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->federations.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void CredentialManager_Get_ResponseParamsDataView::GetCredentialDataView(
    CredentialInfoDataView* output) {
  auto pointer = data_->credential.Get();
  *output = CredentialInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_PARAMS_DATA_H_