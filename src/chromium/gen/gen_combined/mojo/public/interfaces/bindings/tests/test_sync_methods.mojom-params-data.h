// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_PARAMS_DATA_H_

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
class  TestSyncCodeGeneration_NoInput_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_NoInput_Params_Data));
      new (data()) TestSyncCodeGeneration_NoInput_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_NoInput_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_NoInput_Params_Data>(index_);
    }
    TestSyncCodeGeneration_NoInput_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSyncCodeGeneration_NoInput_Params_Data();
  ~TestSyncCodeGeneration_NoInput_Params_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_NoInput_Params_Data) == 8,
              "Bad sizeof(TestSyncCodeGeneration_NoInput_Params_Data)");
class  TestSyncCodeGeneration_NoInput_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_NoInput_ResponseParams_Data));
      new (data()) TestSyncCodeGeneration_NoInput_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_NoInput_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_NoInput_ResponseParams_Data>(index_);
    }
    TestSyncCodeGeneration_NoInput_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  TestSyncCodeGeneration_NoInput_ResponseParams_Data();
  ~TestSyncCodeGeneration_NoInput_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_NoInput_ResponseParams_Data) == 16,
              "Bad sizeof(TestSyncCodeGeneration_NoInput_ResponseParams_Data)");
class  TestSyncCodeGeneration_NoOutput_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_NoOutput_Params_Data));
      new (data()) TestSyncCodeGeneration_NoOutput_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_NoOutput_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_NoOutput_Params_Data>(index_);
    }
    TestSyncCodeGeneration_NoOutput_Params_Data* operator->() { return data(); }

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
  TestSyncCodeGeneration_NoOutput_Params_Data();
  ~TestSyncCodeGeneration_NoOutput_Params_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_NoOutput_Params_Data) == 16,
              "Bad sizeof(TestSyncCodeGeneration_NoOutput_Params_Data)");
class  TestSyncCodeGeneration_NoOutput_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_NoOutput_ResponseParams_Data));
      new (data()) TestSyncCodeGeneration_NoOutput_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_NoOutput_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_NoOutput_ResponseParams_Data>(index_);
    }
    TestSyncCodeGeneration_NoOutput_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSyncCodeGeneration_NoOutput_ResponseParams_Data();
  ~TestSyncCodeGeneration_NoOutput_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_NoOutput_ResponseParams_Data) == 8,
              "Bad sizeof(TestSyncCodeGeneration_NoOutput_ResponseParams_Data)");
class  TestSyncCodeGeneration_NoInOut_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_NoInOut_Params_Data));
      new (data()) TestSyncCodeGeneration_NoInOut_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_NoInOut_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_NoInOut_Params_Data>(index_);
    }
    TestSyncCodeGeneration_NoInOut_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSyncCodeGeneration_NoInOut_Params_Data();
  ~TestSyncCodeGeneration_NoInOut_Params_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_NoInOut_Params_Data) == 8,
              "Bad sizeof(TestSyncCodeGeneration_NoInOut_Params_Data)");
class  TestSyncCodeGeneration_NoInOut_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_NoInOut_ResponseParams_Data));
      new (data()) TestSyncCodeGeneration_NoInOut_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_NoInOut_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_NoInOut_ResponseParams_Data>(index_);
    }
    TestSyncCodeGeneration_NoInOut_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSyncCodeGeneration_NoInOut_ResponseParams_Data();
  ~TestSyncCodeGeneration_NoInOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_NoInOut_ResponseParams_Data) == 8,
              "Bad sizeof(TestSyncCodeGeneration_NoInOut_ResponseParams_Data)");
class  TestSyncCodeGeneration_HaveInOut_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_HaveInOut_Params_Data));
      new (data()) TestSyncCodeGeneration_HaveInOut_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_HaveInOut_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_HaveInOut_Params_Data>(index_);
    }
    TestSyncCodeGeneration_HaveInOut_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t value1;
  int32_t value2;

 private:
  TestSyncCodeGeneration_HaveInOut_Params_Data();
  ~TestSyncCodeGeneration_HaveInOut_Params_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_HaveInOut_Params_Data) == 16,
              "Bad sizeof(TestSyncCodeGeneration_HaveInOut_Params_Data)");
class  TestSyncCodeGeneration_HaveInOut_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncCodeGeneration_HaveInOut_ResponseParams_Data));
      new (data()) TestSyncCodeGeneration_HaveInOut_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncCodeGeneration_HaveInOut_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncCodeGeneration_HaveInOut_ResponseParams_Data>(index_);
    }
    TestSyncCodeGeneration_HaveInOut_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result1;
  int32_t result2;

 private:
  TestSyncCodeGeneration_HaveInOut_ResponseParams_Data();
  ~TestSyncCodeGeneration_HaveInOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncCodeGeneration_HaveInOut_ResponseParams_Data) == 16,
              "Bad sizeof(TestSyncCodeGeneration_HaveInOut_ResponseParams_Data)");
class  TestSync_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSync_Ping_Params_Data));
      new (data()) TestSync_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSync_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSync_Ping_Params_Data>(index_);
    }
    TestSync_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSync_Ping_Params_Data();
  ~TestSync_Ping_Params_Data() = delete;
};
static_assert(sizeof(TestSync_Ping_Params_Data) == 8,
              "Bad sizeof(TestSync_Ping_Params_Data)");
class  TestSync_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSync_Ping_ResponseParams_Data));
      new (data()) TestSync_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSync_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSync_Ping_ResponseParams_Data>(index_);
    }
    TestSync_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSync_Ping_ResponseParams_Data();
  ~TestSync_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSync_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(TestSync_Ping_ResponseParams_Data)");
class  TestSync_Echo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSync_Echo_Params_Data));
      new (data()) TestSync_Echo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSync_Echo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSync_Echo_Params_Data>(index_);
    }
    TestSync_Echo_Params_Data* operator->() { return data(); }

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
  TestSync_Echo_Params_Data();
  ~TestSync_Echo_Params_Data() = delete;
};
static_assert(sizeof(TestSync_Echo_Params_Data) == 16,
              "Bad sizeof(TestSync_Echo_Params_Data)");
class  TestSync_Echo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSync_Echo_ResponseParams_Data));
      new (data()) TestSync_Echo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSync_Echo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSync_Echo_ResponseParams_Data>(index_);
    }
    TestSync_Echo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  TestSync_Echo_ResponseParams_Data();
  ~TestSync_Echo_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSync_Echo_ResponseParams_Data) == 16,
              "Bad sizeof(TestSync_Echo_ResponseParams_Data)");
class  TestSync_AsyncEcho_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSync_AsyncEcho_Params_Data));
      new (data()) TestSync_AsyncEcho_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSync_AsyncEcho_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSync_AsyncEcho_Params_Data>(index_);
    }
    TestSync_AsyncEcho_Params_Data* operator->() { return data(); }

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
  TestSync_AsyncEcho_Params_Data();
  ~TestSync_AsyncEcho_Params_Data() = delete;
};
static_assert(sizeof(TestSync_AsyncEcho_Params_Data) == 16,
              "Bad sizeof(TestSync_AsyncEcho_Params_Data)");
class  TestSync_AsyncEcho_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSync_AsyncEcho_ResponseParams_Data));
      new (data()) TestSync_AsyncEcho_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSync_AsyncEcho_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSync_AsyncEcho_ResponseParams_Data>(index_);
    }
    TestSync_AsyncEcho_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  TestSync_AsyncEcho_ResponseParams_Data();
  ~TestSync_AsyncEcho_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSync_AsyncEcho_ResponseParams_Data) == 16,
              "Bad sizeof(TestSync_AsyncEcho_ResponseParams_Data)");
class  TestSyncMaster_Ping_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_Ping_Params_Data));
      new (data()) TestSyncMaster_Ping_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_Ping_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_Ping_Params_Data>(index_);
    }
    TestSyncMaster_Ping_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSyncMaster_Ping_Params_Data();
  ~TestSyncMaster_Ping_Params_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_Ping_Params_Data) == 8,
              "Bad sizeof(TestSyncMaster_Ping_Params_Data)");
class  TestSyncMaster_Ping_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_Ping_ResponseParams_Data));
      new (data()) TestSyncMaster_Ping_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_Ping_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_Ping_ResponseParams_Data>(index_);
    }
    TestSyncMaster_Ping_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  TestSyncMaster_Ping_ResponseParams_Data();
  ~TestSyncMaster_Ping_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_Ping_ResponseParams_Data) == 8,
              "Bad sizeof(TestSyncMaster_Ping_ResponseParams_Data)");
class  TestSyncMaster_Echo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_Echo_Params_Data));
      new (data()) TestSyncMaster_Echo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_Echo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_Echo_Params_Data>(index_);
    }
    TestSyncMaster_Echo_Params_Data* operator->() { return data(); }

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
  TestSyncMaster_Echo_Params_Data();
  ~TestSyncMaster_Echo_Params_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_Echo_Params_Data) == 16,
              "Bad sizeof(TestSyncMaster_Echo_Params_Data)");
class  TestSyncMaster_Echo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_Echo_ResponseParams_Data));
      new (data()) TestSyncMaster_Echo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_Echo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_Echo_ResponseParams_Data>(index_);
    }
    TestSyncMaster_Echo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  TestSyncMaster_Echo_ResponseParams_Data();
  ~TestSyncMaster_Echo_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_Echo_ResponseParams_Data) == 16,
              "Bad sizeof(TestSyncMaster_Echo_ResponseParams_Data)");
class  TestSyncMaster_AsyncEcho_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_AsyncEcho_Params_Data));
      new (data()) TestSyncMaster_AsyncEcho_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_AsyncEcho_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_AsyncEcho_Params_Data>(index_);
    }
    TestSyncMaster_AsyncEcho_Params_Data* operator->() { return data(); }

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
  TestSyncMaster_AsyncEcho_Params_Data();
  ~TestSyncMaster_AsyncEcho_Params_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_AsyncEcho_Params_Data) == 16,
              "Bad sizeof(TestSyncMaster_AsyncEcho_Params_Data)");
class  TestSyncMaster_AsyncEcho_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_AsyncEcho_ResponseParams_Data));
      new (data()) TestSyncMaster_AsyncEcho_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_AsyncEcho_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_AsyncEcho_ResponseParams_Data>(index_);
    }
    TestSyncMaster_AsyncEcho_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  TestSyncMaster_AsyncEcho_ResponseParams_Data();
  ~TestSyncMaster_AsyncEcho_ResponseParams_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_AsyncEcho_ResponseParams_Data) == 16,
              "Bad sizeof(TestSyncMaster_AsyncEcho_ResponseParams_Data)");
class  TestSyncMaster_SendRemote_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_SendRemote_Params_Data));
      new (data()) TestSyncMaster_SendRemote_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_SendRemote_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_SendRemote_Params_Data>(index_);
    }
    TestSyncMaster_SendRemote_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data remote;

 private:
  TestSyncMaster_SendRemote_Params_Data();
  ~TestSyncMaster_SendRemote_Params_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_SendRemote_Params_Data) == 16,
              "Bad sizeof(TestSyncMaster_SendRemote_Params_Data)");
class  TestSyncMaster_SendReceiver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TestSyncMaster_SendReceiver_Params_Data));
      new (data()) TestSyncMaster_SendReceiver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TestSyncMaster_SendReceiver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TestSyncMaster_SendReceiver_Params_Data>(index_);
    }
    TestSyncMaster_SendReceiver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data receiver;
  uint8_t padfinal_[4];

 private:
  TestSyncMaster_SendReceiver_Params_Data();
  ~TestSyncMaster_SendReceiver_Params_Data() = delete;
};
static_assert(sizeof(TestSyncMaster_SendReceiver_Params_Data) == 16,
              "Bad sizeof(TestSyncMaster_SendReceiver_Params_Data)");

}  // namespace internal
class TestSyncCodeGeneration_NoInput_ParamsDataView {
 public:
  TestSyncCodeGeneration_NoInput_ParamsDataView() {}

  TestSyncCodeGeneration_NoInput_ParamsDataView(
      internal::TestSyncCodeGeneration_NoInput_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSyncCodeGeneration_NoInput_Params_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_NoInput_ResponseParamsDataView {
 public:
  TestSyncCodeGeneration_NoInput_ResponseParamsDataView() {}

  TestSyncCodeGeneration_NoInput_ResponseParamsDataView(
      internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::TestSyncCodeGeneration_NoInput_ResponseParams_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_NoOutput_ParamsDataView {
 public:
  TestSyncCodeGeneration_NoOutput_ParamsDataView() {}

  TestSyncCodeGeneration_NoOutput_ParamsDataView(
      internal::TestSyncCodeGeneration_NoOutput_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::TestSyncCodeGeneration_NoOutput_Params_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_NoOutput_ResponseParamsDataView {
 public:
  TestSyncCodeGeneration_NoOutput_ResponseParamsDataView() {}

  TestSyncCodeGeneration_NoOutput_ResponseParamsDataView(
      internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSyncCodeGeneration_NoOutput_ResponseParams_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_NoInOut_ParamsDataView {
 public:
  TestSyncCodeGeneration_NoInOut_ParamsDataView() {}

  TestSyncCodeGeneration_NoInOut_ParamsDataView(
      internal::TestSyncCodeGeneration_NoInOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSyncCodeGeneration_NoInOut_Params_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_NoInOut_ResponseParamsDataView {
 public:
  TestSyncCodeGeneration_NoInOut_ResponseParamsDataView() {}

  TestSyncCodeGeneration_NoInOut_ResponseParamsDataView(
      internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSyncCodeGeneration_NoInOut_ResponseParams_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_HaveInOut_ParamsDataView {
 public:
  TestSyncCodeGeneration_HaveInOut_ParamsDataView() {}

  TestSyncCodeGeneration_HaveInOut_ParamsDataView(
      internal::TestSyncCodeGeneration_HaveInOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value1() const {
    return data_->value1;
  }
  int32_t value2() const {
    return data_->value2;
  }
 private:
  internal::TestSyncCodeGeneration_HaveInOut_Params_Data* data_ = nullptr;
};

class TestSyncCodeGeneration_HaveInOut_ResponseParamsDataView {
 public:
  TestSyncCodeGeneration_HaveInOut_ResponseParamsDataView() {}

  TestSyncCodeGeneration_HaveInOut_ResponseParamsDataView(
      internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result1() const {
    return data_->result1;
  }
  int32_t result2() const {
    return data_->result2;
  }
 private:
  internal::TestSyncCodeGeneration_HaveInOut_ResponseParams_Data* data_ = nullptr;
};

class TestSync_Ping_ParamsDataView {
 public:
  TestSync_Ping_ParamsDataView() {}

  TestSync_Ping_ParamsDataView(
      internal::TestSync_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSync_Ping_Params_Data* data_ = nullptr;
};

class TestSync_Ping_ResponseParamsDataView {
 public:
  TestSync_Ping_ResponseParamsDataView() {}

  TestSync_Ping_ResponseParamsDataView(
      internal::TestSync_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSync_Ping_ResponseParams_Data* data_ = nullptr;
};

class TestSync_Echo_ParamsDataView {
 public:
  TestSync_Echo_ParamsDataView() {}

  TestSync_Echo_ParamsDataView(
      internal::TestSync_Echo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::TestSync_Echo_Params_Data* data_ = nullptr;
};

class TestSync_Echo_ResponseParamsDataView {
 public:
  TestSync_Echo_ResponseParamsDataView() {}

  TestSync_Echo_ResponseParamsDataView(
      internal::TestSync_Echo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::TestSync_Echo_ResponseParams_Data* data_ = nullptr;
};

class TestSync_AsyncEcho_ParamsDataView {
 public:
  TestSync_AsyncEcho_ParamsDataView() {}

  TestSync_AsyncEcho_ParamsDataView(
      internal::TestSync_AsyncEcho_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::TestSync_AsyncEcho_Params_Data* data_ = nullptr;
};

class TestSync_AsyncEcho_ResponseParamsDataView {
 public:
  TestSync_AsyncEcho_ResponseParamsDataView() {}

  TestSync_AsyncEcho_ResponseParamsDataView(
      internal::TestSync_AsyncEcho_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::TestSync_AsyncEcho_ResponseParams_Data* data_ = nullptr;
};

class TestSyncMaster_Ping_ParamsDataView {
 public:
  TestSyncMaster_Ping_ParamsDataView() {}

  TestSyncMaster_Ping_ParamsDataView(
      internal::TestSyncMaster_Ping_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSyncMaster_Ping_Params_Data* data_ = nullptr;
};

class TestSyncMaster_Ping_ResponseParamsDataView {
 public:
  TestSyncMaster_Ping_ResponseParamsDataView() {}

  TestSyncMaster_Ping_ResponseParamsDataView(
      internal::TestSyncMaster_Ping_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::TestSyncMaster_Ping_ResponseParams_Data* data_ = nullptr;
};

class TestSyncMaster_Echo_ParamsDataView {
 public:
  TestSyncMaster_Echo_ParamsDataView() {}

  TestSyncMaster_Echo_ParamsDataView(
      internal::TestSyncMaster_Echo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::TestSyncMaster_Echo_Params_Data* data_ = nullptr;
};

class TestSyncMaster_Echo_ResponseParamsDataView {
 public:
  TestSyncMaster_Echo_ResponseParamsDataView() {}

  TestSyncMaster_Echo_ResponseParamsDataView(
      internal::TestSyncMaster_Echo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::TestSyncMaster_Echo_ResponseParams_Data* data_ = nullptr;
};

class TestSyncMaster_AsyncEcho_ParamsDataView {
 public:
  TestSyncMaster_AsyncEcho_ParamsDataView() {}

  TestSyncMaster_AsyncEcho_ParamsDataView(
      internal::TestSyncMaster_AsyncEcho_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t value() const {
    return data_->value;
  }
 private:
  internal::TestSyncMaster_AsyncEcho_Params_Data* data_ = nullptr;
};

class TestSyncMaster_AsyncEcho_ResponseParamsDataView {
 public:
  TestSyncMaster_AsyncEcho_ResponseParamsDataView() {}

  TestSyncMaster_AsyncEcho_ResponseParamsDataView(
      internal::TestSyncMaster_AsyncEcho_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::TestSyncMaster_AsyncEcho_ResponseParams_Data* data_ = nullptr;
};

class TestSyncMaster_SendRemote_ParamsDataView {
 public:
  TestSyncMaster_SendRemote_ParamsDataView() {}

  TestSyncMaster_SendRemote_ParamsDataView(
      internal::TestSyncMaster_SendRemote_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRemote() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::mojo::test::TestSyncAssociatedPtrInfoDataView>(
            &data_->remote, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TestSyncMaster_SendRemote_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TestSyncMaster_SendReceiver_ParamsDataView {
 public:
  TestSyncMaster_SendReceiver_ParamsDataView() {}

  TestSyncMaster_SendReceiver_ParamsDataView(
      internal::TestSyncMaster_SendReceiver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::mojo::test::TestSyncAssociatedRequestDataView>(
            &data_->receiver, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TestSyncMaster_SendReceiver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};













































}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_PARAMS_DATA_H_