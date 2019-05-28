// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_PARAMS_DATA_H_

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
class  TestWTF_EchoString_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTF_EchoString_Params_Data));
      new (data()) TestWTF_EchoString_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTF_EchoString_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTF_EchoString_Params_Data>(index_);
    }
    TestWTF_EchoString_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> str;

 private:
  TestWTF_EchoString_Params_Data();
  ~TestWTF_EchoString_Params_Data() = delete;
};
static_assert(sizeof(TestWTF_EchoString_Params_Data) == 16,
              "Bad sizeof(TestWTF_EchoString_Params_Data)");
class  TestWTF_EchoString_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTF_EchoString_ResponseParams_Data));
      new (data()) TestWTF_EchoString_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTF_EchoString_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTF_EchoString_ResponseParams_Data>(index_);
    }
    TestWTF_EchoString_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> str;

 private:
  TestWTF_EchoString_ResponseParams_Data();
  ~TestWTF_EchoString_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestWTF_EchoString_ResponseParams_Data) == 16,
              "Bad sizeof(TestWTF_EchoString_ResponseParams_Data)");
class  TestWTF_EchoStringArray_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTF_EchoStringArray_Params_Data));
      new (data()) TestWTF_EchoStringArray_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTF_EchoStringArray_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTF_EchoStringArray_Params_Data>(index_);
    }
    TestWTF_EchoStringArray_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> arr;

 private:
  TestWTF_EchoStringArray_Params_Data();
  ~TestWTF_EchoStringArray_Params_Data() = delete;
};
static_assert(sizeof(TestWTF_EchoStringArray_Params_Data) == 16,
              "Bad sizeof(TestWTF_EchoStringArray_Params_Data)");
class  TestWTF_EchoStringArray_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTF_EchoStringArray_ResponseParams_Data));
      new (data()) TestWTF_EchoStringArray_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTF_EchoStringArray_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTF_EchoStringArray_ResponseParams_Data>(index_);
    }
    TestWTF_EchoStringArray_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> arr;

 private:
  TestWTF_EchoStringArray_ResponseParams_Data();
  ~TestWTF_EchoStringArray_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestWTF_EchoStringArray_ResponseParams_Data) == 16,
              "Bad sizeof(TestWTF_EchoStringArray_ResponseParams_Data)");
class  TestWTF_EchoStringMap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTF_EchoStringMap_Params_Data));
      new (data()) TestWTF_EchoStringMap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTF_EchoStringMap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTF_EchoStringMap_Params_Data>(index_);
    }
    TestWTF_EchoStringMap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> str_map;

 private:
  TestWTF_EchoStringMap_Params_Data();
  ~TestWTF_EchoStringMap_Params_Data() = delete;
};
static_assert(sizeof(TestWTF_EchoStringMap_Params_Data) == 16,
              "Bad sizeof(TestWTF_EchoStringMap_Params_Data)");
class  TestWTF_EchoStringMap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestWTF_EchoStringMap_ResponseParams_Data));
      new (data()) TestWTF_EchoStringMap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestWTF_EchoStringMap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestWTF_EchoStringMap_ResponseParams_Data>(index_);
    }
    TestWTF_EchoStringMap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> str_map;

 private:
  TestWTF_EchoStringMap_ResponseParams_Data();
  ~TestWTF_EchoStringMap_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestWTF_EchoStringMap_ResponseParams_Data) == 16,
              "Bad sizeof(TestWTF_EchoStringMap_ResponseParams_Data)");

}  // namespace internal
class TestWTF_EchoString_ParamsDataView {
 public:
  TestWTF_EchoString_ParamsDataView() {}

  TestWTF_EchoString_ParamsDataView(
      internal::TestWTF_EchoString_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStr(UserType* output) {
    auto* pointer = data_->str.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TestWTF_EchoString_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTF_EchoString_ResponseParamsDataView {
 public:
  TestWTF_EchoString_ResponseParamsDataView() {}

  TestWTF_EchoString_ResponseParamsDataView(
      internal::TestWTF_EchoString_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStr(UserType* output) {
    auto* pointer = data_->str.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TestWTF_EchoString_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTF_EchoStringArray_ParamsDataView {
 public:
  TestWTF_EchoStringArray_ParamsDataView() {}

  TestWTF_EchoStringArray_ParamsDataView(
      internal::TestWTF_EchoStringArray_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArrDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArr(UserType* output) {
    auto* pointer = data_->arr.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TestWTF_EchoStringArray_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTF_EchoStringArray_ResponseParamsDataView {
 public:
  TestWTF_EchoStringArray_ResponseParamsDataView() {}

  TestWTF_EchoStringArray_ResponseParamsDataView(
      internal::TestWTF_EchoStringArray_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArrDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArr(UserType* output) {
    auto* pointer = data_->arr.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TestWTF_EchoStringArray_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTF_EchoStringMap_ParamsDataView {
 public:
  TestWTF_EchoStringMap_ParamsDataView() {}

  TestWTF_EchoStringMap_ParamsDataView(
      internal::TestWTF_EchoStringMap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrMapDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrMap(UserType* output) {
    auto* pointer = data_->str_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TestWTF_EchoStringMap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestWTF_EchoStringMap_ResponseParamsDataView {
 public:
  TestWTF_EchoStringMap_ResponseParamsDataView() {}

  TestWTF_EchoStringMap_ResponseParamsDataView(
      internal::TestWTF_EchoStringMap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStrMapDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStrMap(UserType* output) {
    auto* pointer = data_->str_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::TestWTF_EchoStringMap_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void TestWTF_EchoString_ParamsDataView::GetStrDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->str.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void TestWTF_EchoString_ResponseParamsDataView::GetStrDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->str.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void TestWTF_EchoStringArray_ParamsDataView::GetArrDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->arr.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void TestWTF_EchoStringArray_ResponseParamsDataView::GetArrDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->arr.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void TestWTF_EchoStringMap_ParamsDataView::GetStrMapDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->str_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}


inline void TestWTF_EchoStringMap_ResponseParamsDataView::GetStrMapDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->str_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}

}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_WTF_TYPES_MOJOM_PARAMS_DATA_H_