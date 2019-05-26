// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_PARAMS_DATA_H_

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
namespace math {
namespace internal {
class  Calculator_Clear_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Calculator_Clear_Params_Data));
      new (data()) Calculator_Clear_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Calculator_Clear_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Calculator_Clear_Params_Data>(index_);
    }
    Calculator_Clear_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Calculator_Clear_Params_Data();
  ~Calculator_Clear_Params_Data() = delete;
};
static_assert(sizeof(Calculator_Clear_Params_Data) == 8,
              "Bad sizeof(Calculator_Clear_Params_Data)");
class  Calculator_Clear_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Calculator_Clear_ResponseParams_Data));
      new (data()) Calculator_Clear_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Calculator_Clear_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Calculator_Clear_ResponseParams_Data>(index_);
    }
    Calculator_Clear_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  Calculator_Clear_ResponseParams_Data();
  ~Calculator_Clear_ResponseParams_Data() = delete;
};
static_assert(sizeof(Calculator_Clear_ResponseParams_Data) == 16,
              "Bad sizeof(Calculator_Clear_ResponseParams_Data)");
class  Calculator_Add_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Calculator_Add_Params_Data));
      new (data()) Calculator_Add_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Calculator_Add_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Calculator_Add_Params_Data>(index_);
    }
    Calculator_Add_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  Calculator_Add_Params_Data();
  ~Calculator_Add_Params_Data() = delete;
};
static_assert(sizeof(Calculator_Add_Params_Data) == 16,
              "Bad sizeof(Calculator_Add_Params_Data)");
class  Calculator_Add_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Calculator_Add_ResponseParams_Data));
      new (data()) Calculator_Add_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Calculator_Add_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Calculator_Add_ResponseParams_Data>(index_);
    }
    Calculator_Add_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  Calculator_Add_ResponseParams_Data();
  ~Calculator_Add_ResponseParams_Data() = delete;
};
static_assert(sizeof(Calculator_Add_ResponseParams_Data) == 16,
              "Bad sizeof(Calculator_Add_ResponseParams_Data)");
class  Calculator_Multiply_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Calculator_Multiply_Params_Data));
      new (data()) Calculator_Multiply_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Calculator_Multiply_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Calculator_Multiply_Params_Data>(index_);
    }
    Calculator_Multiply_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  Calculator_Multiply_Params_Data();
  ~Calculator_Multiply_Params_Data() = delete;
};
static_assert(sizeof(Calculator_Multiply_Params_Data) == 16,
              "Bad sizeof(Calculator_Multiply_Params_Data)");
class  Calculator_Multiply_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Calculator_Multiply_ResponseParams_Data));
      new (data()) Calculator_Multiply_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Calculator_Multiply_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Calculator_Multiply_ResponseParams_Data>(index_);
    }
    Calculator_Multiply_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;

 private:
  Calculator_Multiply_ResponseParams_Data();
  ~Calculator_Multiply_ResponseParams_Data() = delete;
};
static_assert(sizeof(Calculator_Multiply_ResponseParams_Data) == 16,
              "Bad sizeof(Calculator_Multiply_ResponseParams_Data)");

}  // namespace internal
class Calculator_Clear_ParamsDataView {
 public:
  Calculator_Clear_ParamsDataView() {}

  Calculator_Clear_ParamsDataView(
      internal::Calculator_Clear_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Calculator_Clear_Params_Data* data_ = nullptr;
};

class Calculator_Clear_ResponseParamsDataView {
 public:
  Calculator_Clear_ResponseParamsDataView() {}

  Calculator_Clear_ResponseParamsDataView(
      internal::Calculator_Clear_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double value() const {
    return data_->value;
  }
 private:
  internal::Calculator_Clear_ResponseParams_Data* data_ = nullptr;
};

class Calculator_Add_ParamsDataView {
 public:
  Calculator_Add_ParamsDataView() {}

  Calculator_Add_ParamsDataView(
      internal::Calculator_Add_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double value() const {
    return data_->value;
  }
 private:
  internal::Calculator_Add_Params_Data* data_ = nullptr;
};

class Calculator_Add_ResponseParamsDataView {
 public:
  Calculator_Add_ResponseParamsDataView() {}

  Calculator_Add_ResponseParamsDataView(
      internal::Calculator_Add_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double value() const {
    return data_->value;
  }
 private:
  internal::Calculator_Add_ResponseParams_Data* data_ = nullptr;
};

class Calculator_Multiply_ParamsDataView {
 public:
  Calculator_Multiply_ParamsDataView() {}

  Calculator_Multiply_ParamsDataView(
      internal::Calculator_Multiply_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double value() const {
    return data_->value;
  }
 private:
  internal::Calculator_Multiply_Params_Data* data_ = nullptr;
};

class Calculator_Multiply_ResponseParamsDataView {
 public:
  Calculator_Multiply_ResponseParamsDataView() {}

  Calculator_Multiply_ResponseParamsDataView(
      internal::Calculator_Multiply_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double value() const {
    return data_->value;
  }
 private:
  internal::Calculator_Multiply_ResponseParams_Data* data_ = nullptr;
};













}  // namespace math

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_PARAMS_DATA_H_