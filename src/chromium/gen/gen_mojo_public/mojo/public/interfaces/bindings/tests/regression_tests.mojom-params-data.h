// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_PARAMS_DATA_H_

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
namespace regression_tests {
namespace internal {
class  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data));
      new (data()) CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data>(index_);
    }
    CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data();
  ~CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data() = delete;
};
static_assert(sizeof(CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data) == 8,
              "Bad sizeof(CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data)");
class  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data));
      new (data()) CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data>(index_);
    }
    CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data();
  ~CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data() = delete;
};
static_assert(sizeof(CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data) == 8,
              "Bad sizeof(CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data)");
class  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data));
      new (data()) CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data>(index_);
    }
    CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t b : 1;
  uint8_t padfinal_[7];

 private:
  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data();
  ~CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data() = delete;
};
static_assert(sizeof(CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data) == 16,
              "Bad sizeof(CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data)");
class  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data));
      new (data()) CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data>(index_);
    }
    CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data();
  ~CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data() = delete;
};
static_assert(sizeof(CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data) == 8,
              "Bad sizeof(CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data)");
class  CheckNameCollision_WithNameCollision_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CheckNameCollision_WithNameCollision_Params_Data));
      new (data()) CheckNameCollision_WithNameCollision_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CheckNameCollision_WithNameCollision_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CheckNameCollision_WithNameCollision_Params_Data>(index_);
    }
    CheckNameCollision_WithNameCollision_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t message : 1;
  uint8_t response : 1;
  uint8_t padfinal_[7];

 private:
  CheckNameCollision_WithNameCollision_Params_Data();
  ~CheckNameCollision_WithNameCollision_Params_Data() = delete;
};
static_assert(sizeof(CheckNameCollision_WithNameCollision_Params_Data) == 16,
              "Bad sizeof(CheckNameCollision_WithNameCollision_Params_Data)");
class  CheckNameCollision_WithNameCollision_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CheckNameCollision_WithNameCollision_ResponseParams_Data));
      new (data()) CheckNameCollision_WithNameCollision_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CheckNameCollision_WithNameCollision_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CheckNameCollision_WithNameCollision_ResponseParams_Data>(index_);
    }
    CheckNameCollision_WithNameCollision_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t message : 1;
  uint8_t response : 1;
  uint8_t padfinal_[7];

 private:
  CheckNameCollision_WithNameCollision_ResponseParams_Data();
  ~CheckNameCollision_WithNameCollision_ResponseParams_Data() = delete;
};
static_assert(sizeof(CheckNameCollision_WithNameCollision_ResponseParams_Data) == 16,
              "Bad sizeof(CheckNameCollision_WithNameCollision_ResponseParams_Data)");
class  HandlesNameCollisionInterface_Method_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandlesNameCollisionInterface_Method_Params_Data));
      new (data()) HandlesNameCollisionInterface_Method_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandlesNameCollisionInterface_Method_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandlesNameCollisionInterface_Method_Params_Data>(index_);
    }
    HandlesNameCollisionInterface_Method_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::EmptyStruct_Data> handles;

 private:
  HandlesNameCollisionInterface_Method_Params_Data();
  ~HandlesNameCollisionInterface_Method_Params_Data() = delete;
};
static_assert(sizeof(HandlesNameCollisionInterface_Method_Params_Data) == 16,
              "Bad sizeof(HandlesNameCollisionInterface_Method_Params_Data)");
class  HandlesNameCollisionInterface_Method_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HandlesNameCollisionInterface_Method_ResponseParams_Data));
      new (data()) HandlesNameCollisionInterface_Method_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HandlesNameCollisionInterface_Method_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HandlesNameCollisionInterface_Method_ResponseParams_Data>(index_);
    }
    HandlesNameCollisionInterface_Method_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data handles;
  uint8_t padfinal_[4];

 private:
  HandlesNameCollisionInterface_Method_ResponseParams_Data();
  ~HandlesNameCollisionInterface_Method_ResponseParams_Data() = delete;
};
static_assert(sizeof(HandlesNameCollisionInterface_Method_ResponseParams_Data) == 16,
              "Bad sizeof(HandlesNameCollisionInterface_Method_ResponseParams_Data)");

}  // namespace internal
class CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ParamsDataView {
 public:
  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ParamsDataView() {}

  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ParamsDataView(
      internal::CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_Params_Data* data_ = nullptr;
};

class CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParamsDataView {
 public:
  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParamsDataView() {}

  CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParamsDataView(
      internal::CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CheckMethodWithEmptyResponse_WithouParameterAndEmptyResponse_ResponseParams_Data* data_ = nullptr;
};

class CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ParamsDataView {
 public:
  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ParamsDataView() {}

  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ParamsDataView(
      internal::CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool b() const {
    return data_->b;
  }
 private:
  internal::CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_Params_Data* data_ = nullptr;
};

class CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParamsDataView {
 public:
  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParamsDataView() {}

  CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParamsDataView(
      internal::CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CheckMethodWithEmptyResponse_WithParameterAndEmptyResponse_ResponseParams_Data* data_ = nullptr;
};

class CheckNameCollision_WithNameCollision_ParamsDataView {
 public:
  CheckNameCollision_WithNameCollision_ParamsDataView() {}

  CheckNameCollision_WithNameCollision_ParamsDataView(
      internal::CheckNameCollision_WithNameCollision_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool message() const {
    return data_->message;
  }
  bool response() const {
    return data_->response;
  }
 private:
  internal::CheckNameCollision_WithNameCollision_Params_Data* data_ = nullptr;
};

class CheckNameCollision_WithNameCollision_ResponseParamsDataView {
 public:
  CheckNameCollision_WithNameCollision_ResponseParamsDataView() {}

  CheckNameCollision_WithNameCollision_ResponseParamsDataView(
      internal::CheckNameCollision_WithNameCollision_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool message() const {
    return data_->message;
  }
  bool response() const {
    return data_->response;
  }
 private:
  internal::CheckNameCollision_WithNameCollision_ResponseParams_Data* data_ = nullptr;
};

class HandlesNameCollisionInterface_Method_ParamsDataView {
 public:
  HandlesNameCollisionInterface_Method_ParamsDataView() {}

  HandlesNameCollisionInterface_Method_ParamsDataView(
      internal::HandlesNameCollisionInterface_Method_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHandlesDataView(
      EmptyStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<::regression_tests::EmptyStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::HandlesNameCollisionInterface_Method_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HandlesNameCollisionInterface_Method_ResponseParamsDataView {
 public:
  HandlesNameCollisionInterface_Method_ResponseParamsDataView() {}

  HandlesNameCollisionInterface_Method_ResponseParamsDataView(
      internal::HandlesNameCollisionInterface_Method_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeHandles() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->handles, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HandlesNameCollisionInterface_Method_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};














inline void HandlesNameCollisionInterface_Method_ParamsDataView::GetHandlesDataView(
    EmptyStructDataView* output) {
  auto pointer = data_->handles.Get();
  *output = EmptyStructDataView(pointer, context_);
}



}  // namespace regression_tests

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_PARAMS_DATA_H_