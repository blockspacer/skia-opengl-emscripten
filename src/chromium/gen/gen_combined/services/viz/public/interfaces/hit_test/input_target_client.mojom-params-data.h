// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_PARAMS_DATA_H_

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
class  InputTargetClient_FrameSinkIdAt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputTargetClient_FrameSinkIdAt_Params_Data));
      new (data()) InputTargetClient_FrameSinkIdAt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputTargetClient_FrameSinkIdAt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputTargetClient_FrameSinkIdAt_Params_Data>(index_);
    }
    InputTargetClient_FrameSinkIdAt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> point;
  uint64_t trace_id;

 private:
  InputTargetClient_FrameSinkIdAt_Params_Data();
  ~InputTargetClient_FrameSinkIdAt_Params_Data() = delete;
};
static_assert(sizeof(InputTargetClient_FrameSinkIdAt_Params_Data) == 24,
              "Bad sizeof(InputTargetClient_FrameSinkIdAt_Params_Data)");
class  InputTargetClient_FrameSinkIdAt_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InputTargetClient_FrameSinkIdAt_ResponseParams_Data));
      new (data()) InputTargetClient_FrameSinkIdAt_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InputTargetClient_FrameSinkIdAt_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InputTargetClient_FrameSinkIdAt_ResponseParams_Data>(index_);
    }
    InputTargetClient_FrameSinkIdAt_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> id;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> local_point;

 private:
  InputTargetClient_FrameSinkIdAt_ResponseParams_Data();
  ~InputTargetClient_FrameSinkIdAt_ResponseParams_Data() = delete;
};
static_assert(sizeof(InputTargetClient_FrameSinkIdAt_ResponseParams_Data) == 24,
              "Bad sizeof(InputTargetClient_FrameSinkIdAt_ResponseParams_Data)");

}  // namespace internal
class InputTargetClient_FrameSinkIdAt_ParamsDataView {
 public:
  InputTargetClient_FrameSinkIdAt_ParamsDataView() {}

  InputTargetClient_FrameSinkIdAt_ParamsDataView(
      internal::InputTargetClient_FrameSinkIdAt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
  uint64_t trace_id() const {
    return data_->trace_id;
  }
 private:
  internal::InputTargetClient_FrameSinkIdAt_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InputTargetClient_FrameSinkIdAt_ResponseParamsDataView {
 public:
  InputTargetClient_FrameSinkIdAt_ResponseParamsDataView() {}

  InputTargetClient_FrameSinkIdAt_ResponseParamsDataView(
      internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetLocalPointDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalPoint(UserType* output) {
    auto* pointer = data_->local_point.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFDataView>(
        pointer, output, context_);
  }
 private:
  internal::InputTargetClient_FrameSinkIdAt_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InputTargetClient_FrameSinkIdAt_ParamsDataView::GetPointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}


inline void InputTargetClient_FrameSinkIdAt_ResponseParamsDataView::GetIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void InputTargetClient_FrameSinkIdAt_ResponseParamsDataView::GetLocalPointDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->local_point.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_INPUT_TARGET_CLIENT_MOJOM_PARAMS_DATA_H_