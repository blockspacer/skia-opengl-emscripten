// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_PARAMS_DATA_H_

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
class  TestBadMessages_RejectEventually_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RejectEventually_Params_Data));
      new (data()) TestBadMessages_RejectEventually_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RejectEventually_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RejectEventually_Params_Data>(index_);
    }
    TestBadMessages_RejectEventually_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RejectEventually_Params_Data();
  ~TestBadMessages_RejectEventually_Params_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RejectEventually_Params_Data) == 8,
              "Bad sizeof(TestBadMessages_RejectEventually_Params_Data)");
class  TestBadMessages_RejectEventually_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RejectEventually_ResponseParams_Data));
      new (data()) TestBadMessages_RejectEventually_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RejectEventually_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RejectEventually_ResponseParams_Data>(index_);
    }
    TestBadMessages_RejectEventually_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RejectEventually_ResponseParams_Data();
  ~TestBadMessages_RejectEventually_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RejectEventually_ResponseParams_Data) == 8,
              "Bad sizeof(TestBadMessages_RejectEventually_ResponseParams_Data)");
class  TestBadMessages_RequestResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RequestResponse_Params_Data));
      new (data()) TestBadMessages_RequestResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RequestResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RequestResponse_Params_Data>(index_);
    }
    TestBadMessages_RequestResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RequestResponse_Params_Data();
  ~TestBadMessages_RequestResponse_Params_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RequestResponse_Params_Data) == 8,
              "Bad sizeof(TestBadMessages_RequestResponse_Params_Data)");
class  TestBadMessages_RequestResponse_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RequestResponse_ResponseParams_Data));
      new (data()) TestBadMessages_RequestResponse_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RequestResponse_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RequestResponse_ResponseParams_Data>(index_);
    }
    TestBadMessages_RequestResponse_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RequestResponse_ResponseParams_Data();
  ~TestBadMessages_RequestResponse_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RequestResponse_ResponseParams_Data) == 8,
              "Bad sizeof(TestBadMessages_RequestResponse_ResponseParams_Data)");
class  TestBadMessages_RejectSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RejectSync_Params_Data));
      new (data()) TestBadMessages_RejectSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RejectSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RejectSync_Params_Data>(index_);
    }
    TestBadMessages_RejectSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RejectSync_Params_Data();
  ~TestBadMessages_RejectSync_Params_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RejectSync_Params_Data) == 8,
              "Bad sizeof(TestBadMessages_RejectSync_Params_Data)");
class  TestBadMessages_RejectSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RejectSync_ResponseParams_Data));
      new (data()) TestBadMessages_RejectSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RejectSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RejectSync_ResponseParams_Data>(index_);
    }
    TestBadMessages_RejectSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RejectSync_ResponseParams_Data();
  ~TestBadMessages_RejectSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RejectSync_ResponseParams_Data) == 8,
              "Bad sizeof(TestBadMessages_RejectSync_ResponseParams_Data)");
class  TestBadMessages_RequestResponseSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RequestResponseSync_Params_Data));
      new (data()) TestBadMessages_RequestResponseSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RequestResponseSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RequestResponseSync_Params_Data>(index_);
    }
    TestBadMessages_RequestResponseSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RequestResponseSync_Params_Data();
  ~TestBadMessages_RequestResponseSync_Params_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RequestResponseSync_Params_Data) == 8,
              "Bad sizeof(TestBadMessages_RequestResponseSync_Params_Data)");
class  TestBadMessages_RequestResponseSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestBadMessages_RequestResponseSync_ResponseParams_Data));
      new (data()) TestBadMessages_RequestResponseSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestBadMessages_RequestResponseSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestBadMessages_RequestResponseSync_ResponseParams_Data>(index_);
    }
    TestBadMessages_RequestResponseSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestBadMessages_RequestResponseSync_ResponseParams_Data();
  ~TestBadMessages_RequestResponseSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestBadMessages_RequestResponseSync_ResponseParams_Data) == 8,
              "Bad sizeof(TestBadMessages_RequestResponseSync_ResponseParams_Data)");

}  // namespace internal
class TestBadMessages_RejectEventually_ParamsDataView {
 public:
  TestBadMessages_RejectEventually_ParamsDataView() {}

  TestBadMessages_RejectEventually_ParamsDataView(
      internal::TestBadMessages_RejectEventually_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RejectEventually_Params_Data* data_ = nullptr;
};

class TestBadMessages_RejectEventually_ResponseParamsDataView {
 public:
  TestBadMessages_RejectEventually_ResponseParamsDataView() {}

  TestBadMessages_RejectEventually_ResponseParamsDataView(
      internal::TestBadMessages_RejectEventually_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RejectEventually_ResponseParams_Data* data_ = nullptr;
};

class TestBadMessages_RequestResponse_ParamsDataView {
 public:
  TestBadMessages_RequestResponse_ParamsDataView() {}

  TestBadMessages_RequestResponse_ParamsDataView(
      internal::TestBadMessages_RequestResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RequestResponse_Params_Data* data_ = nullptr;
};

class TestBadMessages_RequestResponse_ResponseParamsDataView {
 public:
  TestBadMessages_RequestResponse_ResponseParamsDataView() {}

  TestBadMessages_RequestResponse_ResponseParamsDataView(
      internal::TestBadMessages_RequestResponse_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RequestResponse_ResponseParams_Data* data_ = nullptr;
};

class TestBadMessages_RejectSync_ParamsDataView {
 public:
  TestBadMessages_RejectSync_ParamsDataView() {}

  TestBadMessages_RejectSync_ParamsDataView(
      internal::TestBadMessages_RejectSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RejectSync_Params_Data* data_ = nullptr;
};

class TestBadMessages_RejectSync_ResponseParamsDataView {
 public:
  TestBadMessages_RejectSync_ResponseParamsDataView() {}

  TestBadMessages_RejectSync_ResponseParamsDataView(
      internal::TestBadMessages_RejectSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RejectSync_ResponseParams_Data* data_ = nullptr;
};

class TestBadMessages_RequestResponseSync_ParamsDataView {
 public:
  TestBadMessages_RequestResponseSync_ParamsDataView() {}

  TestBadMessages_RequestResponseSync_ParamsDataView(
      internal::TestBadMessages_RequestResponseSync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RequestResponseSync_Params_Data* data_ = nullptr;
};

class TestBadMessages_RequestResponseSync_ResponseParamsDataView {
 public:
  TestBadMessages_RequestResponseSync_ResponseParamsDataView() {}

  TestBadMessages_RequestResponseSync_ResponseParamsDataView(
      internal::TestBadMessages_RequestResponseSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestBadMessages_RequestResponseSync_ResponseParams_Data* data_ = nullptr;
};

















}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_PARAMS_DATA_H_