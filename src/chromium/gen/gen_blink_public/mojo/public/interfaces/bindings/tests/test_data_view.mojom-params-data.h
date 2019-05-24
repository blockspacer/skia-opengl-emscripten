// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_PARAMS_DATA_H_

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
namespace mojo {
namespace test {
namespace data_view {
namespace internal {
class  TestInterface_Echo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestInterface_Echo_Params_Data));
      new (data()) TestInterface_Echo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestInterface_Echo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestInterface_Echo_Params_Data>(index_);
    }
    TestInterface_Echo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t value;
  uint8_t padfinal_[4];

 private:
  TestInterface_Echo_Params_Data();
  ~TestInterface_Echo_Params_Data() = delete;
};
static_assert(sizeof(TestInterface_Echo_Params_Data) == 16,
              "Bad sizeof(TestInterface_Echo_Params_Data)");
class  TestInterface_Echo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestInterface_Echo_ResponseParams_Data));
      new (data()) TestInterface_Echo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestInterface_Echo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestInterface_Echo_ResponseParams_Data>(index_);
    }
    TestInterface_Echo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t out_value;
  uint8_t padfinal_[4];

 private:
  TestInterface_Echo_ResponseParams_Data();
  ~TestInterface_Echo_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestInterface_Echo_ResponseParams_Data) == 16,
              "Bad sizeof(TestInterface_Echo_ResponseParams_Data)");

}  // namespace internal
class TestInterface_Echo_ParamsDataView {
 public:
  TestInterface_Echo_ParamsDataView() {}

  TestInterface_Echo_ParamsDataView(
      internal::TestInterface_Echo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::TestInterface_Echo_Params_Data* data_ = nullptr;
};

class TestInterface_Echo_ResponseParamsDataView {
 public:
  TestInterface_Echo_ResponseParamsDataView() {}

  TestInterface_Echo_ResponseParamsDataView(
      internal::TestInterface_Echo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t out_value() const {
    return data_->out_value;
  }
 private:
  internal::TestInterface_Echo_ResponseParams_Data* data_ = nullptr;
};





}  // namespace data_view
}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_DATA_VIEW_MOJOM_PARAMS_DATA_H_