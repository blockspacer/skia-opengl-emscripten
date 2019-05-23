// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_PARAMS_DATA_H_

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
namespace media {
namespace mojom {
namespace internal {
class  PlatformVerification_ChallengePlatform_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_ChallengePlatform_Params_Data));
      new (data()) PlatformVerification_ChallengePlatform_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_ChallengePlatform_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_ChallengePlatform_Params_Data>(index_);
    }
    PlatformVerification_ChallengePlatform_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_id;
  mojo::internal::Pointer<mojo::internal::String_Data> challenge;

 private:
  PlatformVerification_ChallengePlatform_Params_Data();
  ~PlatformVerification_ChallengePlatform_Params_Data() = delete;
};
static_assert(sizeof(PlatformVerification_ChallengePlatform_Params_Data) == 24,
              "Bad sizeof(PlatformVerification_ChallengePlatform_Params_Data)");
class  PlatformVerification_ChallengePlatform_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_ChallengePlatform_ResponseParams_Data));
      new (data()) PlatformVerification_ChallengePlatform_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_ChallengePlatform_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_ChallengePlatform_ResponseParams_Data>(index_);
    }
    PlatformVerification_ChallengePlatform_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> signed_data;
  mojo::internal::Pointer<mojo::internal::String_Data> signed_data_signature;
  mojo::internal::Pointer<mojo::internal::String_Data> platform_key_certificate;

 private:
  PlatformVerification_ChallengePlatform_ResponseParams_Data();
  ~PlatformVerification_ChallengePlatform_ResponseParams_Data() = delete;
};
static_assert(sizeof(PlatformVerification_ChallengePlatform_ResponseParams_Data) == 40,
              "Bad sizeof(PlatformVerification_ChallengePlatform_ResponseParams_Data)");
class  PlatformVerification_GetStorageId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_GetStorageId_Params_Data));
      new (data()) PlatformVerification_GetStorageId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_GetStorageId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_GetStorageId_Params_Data>(index_);
    }
    PlatformVerification_GetStorageId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t padfinal_[4];

 private:
  PlatformVerification_GetStorageId_Params_Data();
  ~PlatformVerification_GetStorageId_Params_Data() = delete;
};
static_assert(sizeof(PlatformVerification_GetStorageId_Params_Data) == 16,
              "Bad sizeof(PlatformVerification_GetStorageId_Params_Data)");
class  PlatformVerification_GetStorageId_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformVerification_GetStorageId_ResponseParams_Data));
      new (data()) PlatformVerification_GetStorageId_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformVerification_GetStorageId_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformVerification_GetStorageId_ResponseParams_Data>(index_);
    }
    PlatformVerification_GetStorageId_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> storage_id;

 private:
  PlatformVerification_GetStorageId_ResponseParams_Data();
  ~PlatformVerification_GetStorageId_ResponseParams_Data() = delete;
};
static_assert(sizeof(PlatformVerification_GetStorageId_ResponseParams_Data) == 24,
              "Bad sizeof(PlatformVerification_GetStorageId_ResponseParams_Data)");

}  // namespace internal
class PlatformVerification_ChallengePlatform_ParamsDataView {
 public:
  PlatformVerification_ChallengePlatform_ParamsDataView() {}

  PlatformVerification_ChallengePlatform_ParamsDataView(
      internal::PlatformVerification_ChallengePlatform_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceId(UserType* output) {
    auto* pointer = data_->service_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetChallengeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadChallenge(UserType* output) {
    auto* pointer = data_->challenge.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PlatformVerification_ChallengePlatform_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlatformVerification_ChallengePlatform_ResponseParamsDataView {
 public:
  PlatformVerification_ChallengePlatform_ResponseParamsDataView() {}

  PlatformVerification_ChallengePlatform_ResponseParamsDataView(
      internal::PlatformVerification_ChallengePlatform_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetSignedDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignedData(UserType* output) {
    auto* pointer = data_->signed_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetSignedDataSignatureDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignedDataSignature(UserType* output) {
    auto* pointer = data_->signed_data_signature.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPlatformKeyCertificateDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformKeyCertificate(UserType* output) {
    auto* pointer = data_->platform_key_certificate.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PlatformVerification_ChallengePlatform_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PlatformVerification_GetStorageId_ParamsDataView {
 public:
  PlatformVerification_GetStorageId_ParamsDataView() {}

  PlatformVerification_GetStorageId_ParamsDataView(
      internal::PlatformVerification_GetStorageId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t version() const {
    return data_->version;
  }
 private:
  internal::PlatformVerification_GetStorageId_Params_Data* data_ = nullptr;
};

class PlatformVerification_GetStorageId_ResponseParamsDataView {
 public:
  PlatformVerification_GetStorageId_ResponseParamsDataView() {}

  PlatformVerification_GetStorageId_ResponseParamsDataView(
      internal::PlatformVerification_GetStorageId_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t version() const {
    return data_->version;
  }
  inline void GetStorageIdDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStorageId(UserType* output) {
    auto* pointer = data_->storage_id.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::PlatformVerification_GetStorageId_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PlatformVerification_ChallengePlatform_ParamsDataView::GetServiceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PlatformVerification_ChallengePlatform_ParamsDataView::GetChallengeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->challenge.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PlatformVerification_ChallengePlatform_ResponseParamsDataView::GetSignedDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signed_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PlatformVerification_ChallengePlatform_ResponseParamsDataView::GetSignedDataSignatureDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->signed_data_signature.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PlatformVerification_ChallengePlatform_ResponseParamsDataView::GetPlatformKeyCertificateDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->platform_key_certificate.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PlatformVerification_GetStorageId_ResponseParamsDataView::GetStorageIdDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->storage_id.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_PARAMS_DATA_H_