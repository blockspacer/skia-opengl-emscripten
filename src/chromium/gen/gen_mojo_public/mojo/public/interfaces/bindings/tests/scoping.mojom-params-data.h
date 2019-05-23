// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_PARAMS_DATA_H_

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
namespace internal {
class  A_GetB_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(A_GetB_Params_Data));
      new (data()) A_GetB_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    A_GetB_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<A_GetB_Params_Data>(index_);
    }
    A_GetB_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data b;
  uint8_t padfinal_[4];

 private:
  A_GetB_Params_Data();
  ~A_GetB_Params_Data() = delete;
};
static_assert(sizeof(A_GetB_Params_Data) == 16,
              "Bad sizeof(A_GetB_Params_Data)");
class  B_GetC_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(B_GetC_Params_Data));
      new (data()) B_GetC_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    B_GetC_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<B_GetC_Params_Data>(index_);
    }
    B_GetC_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data c;
  uint8_t padfinal_[4];

 private:
  B_GetC_Params_Data();
  ~B_GetC_Params_Data() = delete;
};
static_assert(sizeof(B_GetC_Params_Data) == 16,
              "Bad sizeof(B_GetC_Params_Data)");
class  C_D_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(C_D_Params_Data));
      new (data()) C_D_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    C_D_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<C_D_Params_Data>(index_);
    }
    C_D_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  C_D_Params_Data();
  ~C_D_Params_Data() = delete;
};
static_assert(sizeof(C_D_Params_Data) == 8,
              "Bad sizeof(C_D_Params_Data)");

}  // namespace internal
class A_GetB_ParamsDataView {
 public:
  A_GetB_ParamsDataView() {}

  A_GetB_ParamsDataView(
      internal::A_GetB_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeB() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::mojo::test::BInterfaceBase>>(
            &data_->b, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::A_GetB_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class B_GetC_ParamsDataView {
 public:
  B_GetC_ParamsDataView() {}

  B_GetC_ParamsDataView(
      internal::B_GetC_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeC() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::mojo::test::CInterfaceBase>>(
            &data_->c, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::B_GetC_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class C_D_ParamsDataView {
 public:
  C_D_ParamsDataView() {}

  C_D_ParamsDataView(
      internal::C_D_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::C_D_Params_Data* data_ = nullptr;
};







}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SCOPING_MOJOM_PARAMS_DATA_H_