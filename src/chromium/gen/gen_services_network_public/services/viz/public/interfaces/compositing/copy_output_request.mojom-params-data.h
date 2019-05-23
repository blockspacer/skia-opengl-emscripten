// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_PARAMS_DATA_H_

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
namespace viz {
namespace mojom {
namespace internal {
class  CopyOutputResultSender_SendResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CopyOutputResultSender_SendResult_Params_Data));
      new (data()) CopyOutputResultSender_SendResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CopyOutputResultSender_SendResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CopyOutputResultSender_SendResult_Params_Data>(index_);
    }
    CopyOutputResultSender_SendResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::CopyOutputResult_Data> result;

 private:
  CopyOutputResultSender_SendResult_Params_Data();
  ~CopyOutputResultSender_SendResult_Params_Data() = delete;
};
static_assert(sizeof(CopyOutputResultSender_SendResult_Params_Data) == 16,
              "Bad sizeof(CopyOutputResultSender_SendResult_Params_Data)");

}  // namespace internal
class CopyOutputResultSender_SendResult_ParamsDataView {
 public:
  CopyOutputResultSender_SendResult_ParamsDataView() {}

  CopyOutputResultSender_SendResult_ParamsDataView(
      internal::CopyOutputResultSender_SendResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::viz::mojom::CopyOutputResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::viz::mojom::CopyOutputResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::CopyOutputResultSender_SendResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CopyOutputResultSender_SendResult_ParamsDataView::GetResultDataView(
    ::viz::mojom::CopyOutputResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::viz::mojom::CopyOutputResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_PARAMS_DATA_H_