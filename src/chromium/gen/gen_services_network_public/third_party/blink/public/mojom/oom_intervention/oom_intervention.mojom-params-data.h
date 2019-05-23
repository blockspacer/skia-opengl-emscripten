// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) OomInterventionHost_OnHighMemoryUsage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OomInterventionHost_OnHighMemoryUsage_Params_Data));
      new (data()) OomInterventionHost_OnHighMemoryUsage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OomInterventionHost_OnHighMemoryUsage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OomInterventionHost_OnHighMemoryUsage_Params_Data>(index_);
    }
    OomInterventionHost_OnHighMemoryUsage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  OomInterventionHost_OnHighMemoryUsage_Params_Data();
  ~OomInterventionHost_OnHighMemoryUsage_Params_Data() = delete;
};
static_assert(sizeof(OomInterventionHost_OnHighMemoryUsage_Params_Data) == 8,
              "Bad sizeof(OomInterventionHost_OnHighMemoryUsage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) OomIntervention_StartDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OomIntervention_StartDetection_Params_Data));
      new (data()) OomIntervention_StartDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OomIntervention_StartDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OomIntervention_StartDetection_Params_Data>(index_);
    }
    OomIntervention_StartDetection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data host;
  mojo::internal::Pointer<internal::DetectionArgs_Data> detection_args;
  uint8_t renderer_pause_enabled : 1;
  uint8_t navigate_ads_enabled : 1;
  uint8_t purge_v8_memory_enabled : 1;
  uint8_t padfinal_[7];

 private:
  OomIntervention_StartDetection_Params_Data();
  ~OomIntervention_StartDetection_Params_Data() = delete;
};
static_assert(sizeof(OomIntervention_StartDetection_Params_Data) == 32,
              "Bad sizeof(OomIntervention_StartDetection_Params_Data)");

}  // namespace internal
class OomInterventionHost_OnHighMemoryUsage_ParamsDataView {
 public:
  OomInterventionHost_OnHighMemoryUsage_ParamsDataView() {}

  OomInterventionHost_OnHighMemoryUsage_ParamsDataView(
      internal::OomInterventionHost_OnHighMemoryUsage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OomInterventionHost_OnHighMemoryUsage_Params_Data* data_ = nullptr;
};

class OomIntervention_StartDetection_ParamsDataView {
 public:
  OomIntervention_StartDetection_ParamsDataView() {}

  OomIntervention_StartDetection_ParamsDataView(
      internal::OomIntervention_StartDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::OomInterventionHostPtrDataView>(
            &data_->host, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetDetectionArgsDataView(
      DetectionArgsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetectionArgs(UserType* output) {
    auto* pointer = data_->detection_args.Get();
    return mojo::internal::Deserialize<::blink::mojom::DetectionArgsDataView>(
        pointer, output, context_);
  }
  bool renderer_pause_enabled() const {
    return data_->renderer_pause_enabled;
  }
  bool navigate_ads_enabled() const {
    return data_->navigate_ads_enabled;
  }
  bool purge_v8_memory_enabled() const {
    return data_->purge_v8_memory_enabled;
  }
 private:
  internal::OomIntervention_StartDetection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void OomIntervention_StartDetection_ParamsDataView::GetDetectionArgsDataView(
    DetectionArgsDataView* output) {
  auto pointer = data_->detection_args.Get();
  *output = DetectionArgsDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_PARAMS_DATA_H_