// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_PARAMS_DATA_H_

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
class  ProfilingService_AddProfilingClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_AddProfilingClient_Params_Data));
      new (data()) ProfilingService_AddProfilingClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_AddProfilingClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_AddProfilingClient_Params_Data>(index_);
    }
    ProfilingService_AddProfilingClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Interface_Data client;
  int32_t process_type;
  uint8_t pad2_[4];
  mojo::internal::Pointer<::heap_profiling::mojom::internal::ProfilingParams_Data> params;

 private:
  ProfilingService_AddProfilingClient_Params_Data();
  ~ProfilingService_AddProfilingClient_Params_Data() = delete;
};
static_assert(sizeof(ProfilingService_AddProfilingClient_Params_Data) == 40,
              "Bad sizeof(ProfilingService_AddProfilingClient_Params_Data)");
class  ProfilingService_GetProfiledPids_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_GetProfiledPids_Params_Data));
      new (data()) ProfilingService_GetProfiledPids_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_GetProfiledPids_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_GetProfiledPids_Params_Data>(index_);
    }
    ProfilingService_GetProfiledPids_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProfilingService_GetProfiledPids_Params_Data();
  ~ProfilingService_GetProfiledPids_Params_Data() = delete;
};
static_assert(sizeof(ProfilingService_GetProfiledPids_Params_Data) == 8,
              "Bad sizeof(ProfilingService_GetProfiledPids_Params_Data)");
class  ProfilingService_GetProfiledPids_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProfilingService_GetProfiledPids_ResponseParams_Data));
      new (data()) ProfilingService_GetProfiledPids_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProfilingService_GetProfiledPids_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProfilingService_GetProfiledPids_ResponseParams_Data>(index_);
    }
    ProfilingService_GetProfiledPids_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data>>> pids;

 private:
  ProfilingService_GetProfiledPids_ResponseParams_Data();
  ~ProfilingService_GetProfiledPids_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProfilingService_GetProfiledPids_ResponseParams_Data) == 16,
              "Bad sizeof(ProfilingService_GetProfiledPids_ResponseParams_Data)");

}  // namespace internal
class ProfilingService_AddProfilingClient_ParamsDataView {
 public:
  ProfilingService_AddProfilingClient_ParamsDataView() {}

  ProfilingService_AddProfilingClient_ParamsDataView(
      internal::ProfilingService_AddProfilingClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidDataView(
      ::mojo_base::mojom::ProcessIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPid(UserType* output) {
    auto* pointer = data_->pid.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ProcessIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::heap_profiling::mojom::ProfilingClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProcessType(UserType* output) const {
    auto data_value = data_->process_type;
    return mojo::internal::Deserialize<::heap_profiling::mojom::ProcessType>(
        data_value, output);
  }

  ProcessType process_type() const {
    return static_cast<ProcessType>(data_->process_type);
  }
  inline void GetParamsDataView(
      ::heap_profiling::mojom::ProfilingParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::heap_profiling::mojom::ProfilingParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProfilingService_AddProfilingClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProfilingService_GetProfiledPids_ParamsDataView {
 public:
  ProfilingService_GetProfiledPids_ParamsDataView() {}

  ProfilingService_GetProfiledPids_ParamsDataView(
      internal::ProfilingService_GetProfiledPids_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProfilingService_GetProfiledPids_Params_Data* data_ = nullptr;
};

class ProfilingService_GetProfiledPids_ResponseParamsDataView {
 public:
  ProfilingService_GetProfiledPids_ResponseParamsDataView() {}

  ProfilingService_GetProfiledPids_ResponseParamsDataView(
      internal::ProfilingService_GetProfiledPids_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPidsDataView(
      mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPids(UserType* output) {
    auto* pointer = data_->pids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ProfilingService_GetProfiledPids_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProfilingService_AddProfilingClient_ParamsDataView::GetPidDataView(
    ::mojo_base::mojom::ProcessIdDataView* output) {
  auto pointer = data_->pid.Get();
  *output = ::mojo_base::mojom::ProcessIdDataView(pointer, context_);
}
inline void ProfilingService_AddProfilingClient_ParamsDataView::GetParamsDataView(
    ::heap_profiling::mojom::ProfilingParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::heap_profiling::mojom::ProfilingParamsDataView(pointer, context_);
}




inline void ProfilingService_GetProfiledPids_ResponseParamsDataView::GetPidsDataView(
    mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>* output) {
  auto pointer = data_->pids.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::ProcessIdDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace heap_profiling

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_PARAMS_DATA_H_