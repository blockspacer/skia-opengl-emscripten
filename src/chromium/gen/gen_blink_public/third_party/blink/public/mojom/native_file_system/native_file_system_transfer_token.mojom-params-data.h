// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemTransferToken_GetInternalID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemTransferToken_GetInternalID_Params_Data));
      new (data()) NativeFileSystemTransferToken_GetInternalID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemTransferToken_GetInternalID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemTransferToken_GetInternalID_Params_Data>(index_);
    }
    NativeFileSystemTransferToken_GetInternalID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeFileSystemTransferToken_GetInternalID_Params_Data();
  ~NativeFileSystemTransferToken_GetInternalID_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemTransferToken_GetInternalID_Params_Data) == 8,
              "Bad sizeof(NativeFileSystemTransferToken_GetInternalID_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data));
      new (data()) NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data>(index_);
    }
    NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> id;

 private:
  NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data();
  ~NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data) == 16,
              "Bad sizeof(NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data)");

}  // namespace internal
class NativeFileSystemTransferToken_GetInternalID_ParamsDataView {
 public:
  NativeFileSystemTransferToken_GetInternalID_ParamsDataView() {}

  NativeFileSystemTransferToken_GetInternalID_ParamsDataView(
      internal::NativeFileSystemTransferToken_GetInternalID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeFileSystemTransferToken_GetInternalID_Params_Data* data_ = nullptr;
};

class NativeFileSystemTransferToken_GetInternalID_ResponseParamsDataView {
 public:
  NativeFileSystemTransferToken_GetInternalID_ResponseParamsDataView() {}

  NativeFileSystemTransferToken_GetInternalID_ResponseParamsDataView(
      internal::NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemTransferToken_GetInternalID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void NativeFileSystemTransferToken_GetInternalID_ResponseParamsDataView::GetIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_TRANSFER_TOKEN_MOJOM_PARAMS_DATA_H_