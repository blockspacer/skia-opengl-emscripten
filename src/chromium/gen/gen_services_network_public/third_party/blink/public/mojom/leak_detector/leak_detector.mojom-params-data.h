// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LeakDetector_PerformLeakDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LeakDetector_PerformLeakDetection_Params_Data));
      new (data()) LeakDetector_PerformLeakDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LeakDetector_PerformLeakDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LeakDetector_PerformLeakDetection_Params_Data>(index_);
    }
    LeakDetector_PerformLeakDetection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  LeakDetector_PerformLeakDetection_Params_Data();
  ~LeakDetector_PerformLeakDetection_Params_Data() = delete;
};
static_assert(sizeof(LeakDetector_PerformLeakDetection_Params_Data) == 8,
              "Bad sizeof(LeakDetector_PerformLeakDetection_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) LeakDetector_PerformLeakDetection_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LeakDetector_PerformLeakDetection_ResponseParams_Data));
      new (data()) LeakDetector_PerformLeakDetection_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LeakDetector_PerformLeakDetection_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LeakDetector_PerformLeakDetection_ResponseParams_Data>(index_);
    }
    LeakDetector_PerformLeakDetection_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LeakDetectionResult_Data> result;

 private:
  LeakDetector_PerformLeakDetection_ResponseParams_Data();
  ~LeakDetector_PerformLeakDetection_ResponseParams_Data() = delete;
};
static_assert(sizeof(LeakDetector_PerformLeakDetection_ResponseParams_Data) == 16,
              "Bad sizeof(LeakDetector_PerformLeakDetection_ResponseParams_Data)");

}  // namespace internal
class LeakDetector_PerformLeakDetection_ParamsDataView {
 public:
  LeakDetector_PerformLeakDetection_ParamsDataView() {}

  LeakDetector_PerformLeakDetection_ParamsDataView(
      internal::LeakDetector_PerformLeakDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LeakDetector_PerformLeakDetection_Params_Data* data_ = nullptr;
};

class LeakDetector_PerformLeakDetection_ResponseParamsDataView {
 public:
  LeakDetector_PerformLeakDetection_ResponseParamsDataView() {}

  LeakDetector_PerformLeakDetection_ResponseParamsDataView(
      internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      LeakDetectionResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::LeakDetectionResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::LeakDetector_PerformLeakDetection_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void LeakDetector_PerformLeakDetection_ResponseParamsDataView::GetResultDataView(
    LeakDetectionResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = LeakDetectionResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LEAK_DETECTOR_LEAK_DETECTOR_MOJOM_PARAMS_DATA_H_