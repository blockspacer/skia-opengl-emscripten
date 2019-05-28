// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_PARAMS_DATA_H_

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
namespace metrics {
namespace mojom {
namespace internal {
class  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data));
      new (data()) SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data>(index_);
    }
    SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> histogram_name;
  int32_t min;
  int32_t max;
  uint32_t bucket_count;
  int32_t flags;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data();
  ~SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data() = delete;
};
static_assert(sizeof(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data) == 40,
              "Bad sizeof(SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data)");
class  SingleSampleMetric_SetSample_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SingleSampleMetric_SetSample_Params_Data));
      new (data()) SingleSampleMetric_SetSample_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SingleSampleMetric_SetSample_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SingleSampleMetric_SetSample_Params_Data>(index_);
    }
    SingleSampleMetric_SetSample_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t sample;
  uint8_t padfinal_[4];

 private:
  SingleSampleMetric_SetSample_Params_Data();
  ~SingleSampleMetric_SetSample_Params_Data() = delete;
};
static_assert(sizeof(SingleSampleMetric_SetSample_Params_Data) == 16,
              "Bad sizeof(SingleSampleMetric_SetSample_Params_Data)");

}  // namespace internal
class SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView {
 public:
  SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView() {}

  SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView(
      internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHistogramNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHistogramName(UserType* output) {
    auto* pointer = data_->histogram_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t min() const {
    return data_->min;
  }
  int32_t max() const {
    return data_->max;
  }
  uint32_t bucket_count() const {
    return data_->bucket_count;
  }
  int32_t flags() const {
    return data_->flags;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::metrics::mojom::SingleSampleMetricRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SingleSampleMetricsProvider_AcquireSingleSampleMetric_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SingleSampleMetric_SetSample_ParamsDataView {
 public:
  SingleSampleMetric_SetSample_ParamsDataView() {}

  SingleSampleMetric_SetSample_ParamsDataView(
      internal::SingleSampleMetric_SetSample_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t sample() const {
    return data_->sample;
  }
 private:
  internal::SingleSampleMetric_SetSample_Params_Data* data_ = nullptr;
};


inline void SingleSampleMetricsProvider_AcquireSingleSampleMetric_ParamsDataView::GetHistogramNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->histogram_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace metrics

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_METRICS_PUBLIC_INTERFACES_SINGLE_SAMPLE_METRICS_MOJOM_PARAMS_DATA_H_