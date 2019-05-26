// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CrashMemoryMetricsReporter_SetSharedMemory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CrashMemoryMetricsReporter_SetSharedMemory_Params_Data));
      new (data()) CrashMemoryMetricsReporter_SetSharedMemory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CrashMemoryMetricsReporter_SetSharedMemory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CrashMemoryMetricsReporter_SetSharedMemory_Params_Data>(index_);
    }
    CrashMemoryMetricsReporter_SetSharedMemory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnsafeSharedMemoryRegion_Data> shared_metrics_buffer;

 private:
  CrashMemoryMetricsReporter_SetSharedMemory_Params_Data();
  ~CrashMemoryMetricsReporter_SetSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(CrashMemoryMetricsReporter_SetSharedMemory_Params_Data) == 16,
              "Bad sizeof(CrashMemoryMetricsReporter_SetSharedMemory_Params_Data)");

}  // namespace internal
class CrashMemoryMetricsReporter_SetSharedMemory_ParamsDataView {
 public:
  CrashMemoryMetricsReporter_SetSharedMemory_ParamsDataView() {}

  CrashMemoryMetricsReporter_SetSharedMemory_ParamsDataView(
      internal::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSharedMetricsBufferDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMetricsBuffer(UserType* output) {
    auto* pointer = data_->shared_metrics_buffer.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        pointer, output, context_);
  }
 private:
  internal::CrashMemoryMetricsReporter_SetSharedMemory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void CrashMemoryMetricsReporter_SetSharedMemory_ParamsDataView::GetSharedMetricsBufferDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  auto pointer = data_->shared_metrics_buffer.Get();
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CRASH_CRASH_MEMORY_METRICS_REPORTER_MOJOM_PARAMS_DATA_H_