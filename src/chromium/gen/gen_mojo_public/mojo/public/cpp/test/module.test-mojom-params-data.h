// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_PARAMS_DATA_H_

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
namespace test_module {
namespace internal {
class  Interface_DoSomething_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Interface_DoSomething_Params_Data));
      new (data()) Interface_DoSomething_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Interface_DoSomething_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Interface_DoSomething_Params_Data>(index_);
    }
    Interface_DoSomething_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Interface_DoSomething_Params_Data();
  ~Interface_DoSomething_Params_Data() = delete;
};
static_assert(sizeof(Interface_DoSomething_Params_Data) == 8,
              "Bad sizeof(Interface_DoSomething_Params_Data)");
class  Interface_DoSomethingElse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Interface_DoSomethingElse_Params_Data));
      new (data()) Interface_DoSomethingElse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Interface_DoSomethingElse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Interface_DoSomethingElse_Params_Data>(index_);
    }
    Interface_DoSomethingElse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Struct_Data> s;

 private:
  Interface_DoSomethingElse_Params_Data();
  ~Interface_DoSomethingElse_Params_Data() = delete;
};
static_assert(sizeof(Interface_DoSomethingElse_Params_Data) == 16,
              "Bad sizeof(Interface_DoSomethingElse_Params_Data)");
class  Interface_DoSomethingElse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Interface_DoSomethingElse_ResponseParams_Data));
      new (data()) Interface_DoSomethingElse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Interface_DoSomethingElse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Interface_DoSomethingElse_ResponseParams_Data>(index_);
    }
    Interface_DoSomethingElse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t e;
  uint8_t padfinal_[4];

 private:
  Interface_DoSomethingElse_ResponseParams_Data();
  ~Interface_DoSomethingElse_ResponseParams_Data() = delete;
};
static_assert(sizeof(Interface_DoSomethingElse_ResponseParams_Data) == 16,
              "Bad sizeof(Interface_DoSomethingElse_ResponseParams_Data)");

}  // namespace internal
class Interface_DoSomething_ParamsDataView {
 public:
  Interface_DoSomething_ParamsDataView() {}

  Interface_DoSomething_ParamsDataView(
      internal::Interface_DoSomething_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Interface_DoSomething_Params_Data* data_ = nullptr;
};

class Interface_DoSomethingElse_ParamsDataView {
 public:
  Interface_DoSomethingElse_ParamsDataView() {}

  Interface_DoSomethingElse_ParamsDataView(
      internal::Interface_DoSomethingElse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSDataView(
      StructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadS(UserType* output) {
    auto* pointer = data_->s.Get();
    return mojo::internal::Deserialize<::test_module::StructDataView>(
        pointer, output, context_);
  }
 private:
  internal::Interface_DoSomethingElse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Interface_DoSomethingElse_ResponseParamsDataView {
 public:
  Interface_DoSomethingElse_ResponseParamsDataView() {}

  Interface_DoSomethingElse_ResponseParamsDataView(
      internal::Interface_DoSomethingElse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadE(UserType* output) const {
    auto data_value = data_->e;
    return mojo::internal::Deserialize<::test_module::GlobalEnum>(
        data_value, output);
  }

  GlobalEnum e() const {
    return static_cast<GlobalEnum>(data_->e);
  }
 private:
  internal::Interface_DoSomethingElse_ResponseParams_Data* data_ = nullptr;
};




inline void Interface_DoSomethingElse_ParamsDataView::GetSDataView(
    StructDataView* output) {
  auto pointer = data_->s.Get();
  *output = StructDataView(pointer, context_);
}



}  // namespace test_module

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_PARAMS_DATA_H_