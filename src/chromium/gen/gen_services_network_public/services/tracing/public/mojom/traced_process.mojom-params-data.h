// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_PARAMS_DATA_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_PARAMS_DATA_H_

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
namespace tracing {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TracedProcess_ConnectToTracingService_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TracedProcess_ConnectToTracingService_Params_Data));
      new (data()) TracedProcess_ConnectToTracingService_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TracedProcess_ConnectToTracingService_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TracedProcess_ConnectToTracingService_Params_Data>(index_);
    }
    TracedProcess_ConnectToTracingService_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ConnectToTracingRequest_Data> request;

 private:
  TracedProcess_ConnectToTracingService_Params_Data();
  ~TracedProcess_ConnectToTracingService_Params_Data() = delete;
};
static_assert(sizeof(TracedProcess_ConnectToTracingService_Params_Data) == 16,
              "Bad sizeof(TracedProcess_ConnectToTracingService_Params_Data)");

}  // namespace internal
class TracedProcess_ConnectToTracingService_ParamsDataView {
 public:
  TracedProcess_ConnectToTracingService_ParamsDataView() {}

  TracedProcess_ConnectToTracingService_ParamsDataView(
      internal::TracedProcess_ConnectToTracingService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ConnectToTracingRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::tracing::mojom::ConnectToTracingRequestDataView>(
        pointer, output, context_);
  }
 private:
  internal::TracedProcess_ConnectToTracingService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void TracedProcess_ConnectToTracingService_ParamsDataView::GetRequestDataView(
    ConnectToTracingRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ConnectToTracingRequestDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace tracing

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_PARAMS_DATA_H_