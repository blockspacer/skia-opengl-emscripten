// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_PARAMS_DATA_H_

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
namespace heap_profiling {
namespace mojom {
namespace internal {
class  ProfilingClient_StartProfiling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingClient_StartProfiling_Params_Data));
      new (data()) ProfilingClient_StartProfiling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingClient_StartProfiling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingClient_StartProfiling_Params_Data>(index_);
    }
    ProfilingClient_StartProfiling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ProfilingParams_Data> params;

 private:
  ProfilingClient_StartProfiling_Params_Data();
  ~ProfilingClient_StartProfiling_Params_Data() = delete;
};
static_assert(sizeof(ProfilingClient_StartProfiling_Params_Data) == 16,
              "Bad sizeof(ProfilingClient_StartProfiling_Params_Data)");
class  ProfilingClient_RetrieveHeapProfile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingClient_RetrieveHeapProfile_Params_Data));
      new (data()) ProfilingClient_RetrieveHeapProfile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingClient_RetrieveHeapProfile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingClient_RetrieveHeapProfile_Params_Data>(index_);
    }
    ProfilingClient_RetrieveHeapProfile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProfilingClient_RetrieveHeapProfile_Params_Data();
  ~ProfilingClient_RetrieveHeapProfile_Params_Data() = delete;
};
static_assert(sizeof(ProfilingClient_RetrieveHeapProfile_Params_Data) == 8,
              "Bad sizeof(ProfilingClient_RetrieveHeapProfile_Params_Data)");
class  ProfilingClient_RetrieveHeapProfile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingClient_RetrieveHeapProfile_ResponseParams_Data));
      new (data()) ProfilingClient_RetrieveHeapProfile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingClient_RetrieveHeapProfile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingClient_RetrieveHeapProfile_ResponseParams_Data>(index_);
    }
    ProfilingClient_RetrieveHeapProfile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HeapProfile_Data> profile;

 private:
  ProfilingClient_RetrieveHeapProfile_ResponseParams_Data();
  ~ProfilingClient_RetrieveHeapProfile_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProfilingClient_RetrieveHeapProfile_ResponseParams_Data) == 16,
              "Bad sizeof(ProfilingClient_RetrieveHeapProfile_ResponseParams_Data)");

}  // namespace internal
class ProfilingClient_StartProfiling_ParamsDataView {
 public:
  ProfilingClient_StartProfiling_ParamsDataView() {}

  ProfilingClient_StartProfiling_ParamsDataView(
      internal::ProfilingClient_StartProfiling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      ProfilingParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::heap_profiling::mojom::ProfilingParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfilingClient_StartProfiling_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfilingClient_RetrieveHeapProfile_ParamsDataView {
 public:
  ProfilingClient_RetrieveHeapProfile_ParamsDataView() {}

  ProfilingClient_RetrieveHeapProfile_ParamsDataView(
      internal::ProfilingClient_RetrieveHeapProfile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProfilingClient_RetrieveHeapProfile_Params_Data* data_ = nullptr;
};

class ProfilingClient_RetrieveHeapProfile_ResponseParamsDataView {
 public:
  ProfilingClient_RetrieveHeapProfile_ResponseParamsDataView() {}

  ProfilingClient_RetrieveHeapProfile_ResponseParamsDataView(
      internal::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProfileDataView(
      HeapProfileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProfile(UserType* output) {
    auto* pointer = data_->profile.Get();
    return mojo::internal::Deserialize<::heap_profiling::mojom::HeapProfileDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfilingClient_RetrieveHeapProfile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProfilingClient_StartProfiling_ParamsDataView::GetParamsDataView(
    ProfilingParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ProfilingParamsDataView(pointer, context_);
}




inline void ProfilingClient_RetrieveHeapProfile_ResponseParamsDataView::GetProfileDataView(
    HeapProfileDataView* output) {
  auto pointer = data_->profile.Get();
  *output = HeapProfileDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace heap_profiling

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_CLIENT_MOJOM_PARAMS_DATA_H_