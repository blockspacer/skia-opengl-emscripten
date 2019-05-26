// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_PARAMS_DATA_H_

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
namespace test {
namespace echo {
namespace mojom {
namespace internal {
class  Echo_EchoPoint_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Echo_EchoPoint_Params_Data));
      new (data()) Echo_EchoPoint_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Echo_EchoPoint_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Echo_EchoPoint_Params_Data>(index_);
    }
    Echo_EchoPoint_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::test::echo_import::mojom::internal::Point_Data> point;

 private:
  Echo_EchoPoint_Params_Data();
  ~Echo_EchoPoint_Params_Data() = delete;
};
static_assert(sizeof(Echo_EchoPoint_Params_Data) == 16,
              "Bad sizeof(Echo_EchoPoint_Params_Data)");
class  Echo_EchoPoint_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Echo_EchoPoint_ResponseParams_Data));
      new (data()) Echo_EchoPoint_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Echo_EchoPoint_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Echo_EchoPoint_ResponseParams_Data>(index_);
    }
    Echo_EchoPoint_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::test::echo_import::mojom::internal::Point_Data> result;

 private:
  Echo_EchoPoint_ResponseParams_Data();
  ~Echo_EchoPoint_ResponseParams_Data() = delete;
};
static_assert(sizeof(Echo_EchoPoint_ResponseParams_Data) == 16,
              "Bad sizeof(Echo_EchoPoint_ResponseParams_Data)");

}  // namespace internal
class Echo_EchoPoint_ParamsDataView {
 public:
  Echo_EchoPoint_ParamsDataView() {}

  Echo_EchoPoint_ParamsDataView(
      internal::Echo_EchoPoint_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPointDataView(
      ::test::echo_import::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPoint(UserType* output) {
    auto* pointer = data_->point.Get();
    return mojo::internal::Deserialize<::test::echo_import::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::Echo_EchoPoint_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Echo_EchoPoint_ResponseParamsDataView {
 public:
  Echo_EchoPoint_ResponseParamsDataView() {}

  Echo_EchoPoint_ResponseParamsDataView(
      internal::Echo_EchoPoint_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::test::echo_import::mojom::PointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::test::echo_import::mojom::PointDataView>(
        pointer, output, context_);
  }
 private:
  internal::Echo_EchoPoint_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Echo_EchoPoint_ParamsDataView::GetPointDataView(
    ::test::echo_import::mojom::PointDataView* output) {
  auto pointer = data_->point.Get();
  *output = ::test::echo_import::mojom::PointDataView(pointer, context_);
}


inline void Echo_EchoPoint_ResponseParamsDataView::GetResultDataView(
    ::test::echo_import::mojom::PointDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::test::echo_import::mojom::PointDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace echo
}  // namespace test

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_PARAMS_DATA_H_