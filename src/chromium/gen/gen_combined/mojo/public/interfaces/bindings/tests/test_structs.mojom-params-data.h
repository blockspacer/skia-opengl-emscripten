// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_PARAMS_DATA_H_

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
class  SomeInterface_SomeMethod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SomeInterface_SomeMethod_Params_Data));
      new (data()) SomeInterface_SomeMethod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SomeInterface_SomeMethod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SomeInterface_SomeMethod_Params_Data>(index_);
    }
    SomeInterface_SomeMethod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RectPair_Data> pair;

 private:
  SomeInterface_SomeMethod_Params_Data();
  ~SomeInterface_SomeMethod_Params_Data() = delete;
};
static_assert(sizeof(SomeInterface_SomeMethod_Params_Data) == 16,
              "Bad sizeof(SomeInterface_SomeMethod_Params_Data)");
class  SomeInterface_SomeMethod_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SomeInterface_SomeMethod_ResponseParams_Data));
      new (data()) SomeInterface_SomeMethod_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SomeInterface_SomeMethod_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SomeInterface_SomeMethod_ResponseParams_Data>(index_);
    }
    SomeInterface_SomeMethod_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::RectPair_Data> other_pair;

 private:
  SomeInterface_SomeMethod_ResponseParams_Data();
  ~SomeInterface_SomeMethod_ResponseParams_Data() = delete;
};
static_assert(sizeof(SomeInterface_SomeMethod_ResponseParams_Data) == 16,
              "Bad sizeof(SomeInterface_SomeMethod_ResponseParams_Data)");

}  // namespace internal
class SomeInterface_SomeMethod_ParamsDataView {
 public:
  SomeInterface_SomeMethod_ParamsDataView() {}

  SomeInterface_SomeMethod_ParamsDataView(
      internal::SomeInterface_SomeMethod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPairDataView(
      RectPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPair(UserType* output) {
    auto* pointer = data_->pair.Get();
    return mojo::internal::Deserialize<::mojo::test::RectPairDataView>(
        pointer, output, context_);
  }
 private:
  internal::SomeInterface_SomeMethod_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SomeInterface_SomeMethod_ResponseParamsDataView {
 public:
  SomeInterface_SomeMethod_ResponseParamsDataView() {}

  SomeInterface_SomeMethod_ResponseParamsDataView(
      internal::SomeInterface_SomeMethod_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOtherPairDataView(
      RectPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOtherPair(UserType* output) {
    auto* pointer = data_->other_pair.Get();
    return mojo::internal::Deserialize<::mojo::test::RectPairDataView>(
        pointer, output, context_);
  }
 private:
  internal::SomeInterface_SomeMethod_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SomeInterface_SomeMethod_ParamsDataView::GetPairDataView(
    RectPairDataView* output) {
  auto pointer = data_->pair.Get();
  *output = RectPairDataView(pointer, context_);
}


inline void SomeInterface_SomeMethod_ResponseParamsDataView::GetOtherPairDataView(
    RectPairDataView* output) {
  auto pointer = data_->other_pair.Get();
  *output = RectPairDataView(pointer, context_);
}

}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_PARAMS_DATA_H_