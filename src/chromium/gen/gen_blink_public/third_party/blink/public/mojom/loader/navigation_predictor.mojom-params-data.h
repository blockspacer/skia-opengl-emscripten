// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data));
      new (data()) AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data>(index_);
    }
    AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AnchorElementMetrics_Data> metrics;

 private:
  AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data();
  ~AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data() = delete;
};
static_assert(sizeof(AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data) == 16,
              "Bad sizeof(AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data));
      new (data()) AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data>(index_);
    }
    AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AnchorElementMetrics_Data>>> metrics;

 private:
  AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data();
  ~AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data() = delete;
};
static_assert(sizeof(AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data) == 16,
              "Bad sizeof(AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data)");

}  // namespace internal
class AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_ParamsDataView {
 public:
  AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_ParamsDataView() {}

  AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_ParamsDataView(
      internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetricsDataView(
      AnchorElementMetricsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetrics(UserType* output) {
    auto* pointer = data_->metrics.Get();
    return mojo::internal::Deserialize<::blink::mojom::AnchorElementMetricsDataView>(
        pointer, output, context_);
  }
 private:
  internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_ParamsDataView {
 public:
  AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_ParamsDataView() {}

  AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_ParamsDataView(
      internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetricsDataView(
      mojo::ArrayDataView<AnchorElementMetricsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetrics(UserType* output) {
    auto* pointer = data_->metrics.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::AnchorElementMetricsDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AnchorElementMetricsHost_ReportAnchorElementMetricsOnClick_ParamsDataView::GetMetricsDataView(
    AnchorElementMetricsDataView* output) {
  auto pointer = data_->metrics.Get();
  *output = AnchorElementMetricsDataView(pointer, context_);
}


inline void AnchorElementMetricsHost_ReportAnchorElementMetricsOnLoad_ParamsDataView::GetMetricsDataView(
    mojo::ArrayDataView<AnchorElementMetricsDataView>* output) {
  auto pointer = data_->metrics.Get();
  *output = mojo::ArrayDataView<AnchorElementMetricsDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_PARAMS_DATA_H_