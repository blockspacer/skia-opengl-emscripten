// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_PARAMS_DATA_H_

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
class  BoundsCheckTestInterface_Method0_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BoundsCheckTestInterface_Method0_Params_Data));
      new (data()) BoundsCheckTestInterface_Method0_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BoundsCheckTestInterface_Method0_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BoundsCheckTestInterface_Method0_Params_Data>(index_);
    }
    BoundsCheckTestInterface_Method0_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t param0;
  uint8_t padfinal_[7];

 private:
  BoundsCheckTestInterface_Method0_Params_Data();
  ~BoundsCheckTestInterface_Method0_Params_Data() = delete;
};
static_assert(sizeof(BoundsCheckTestInterface_Method0_Params_Data) == 16,
              "Bad sizeof(BoundsCheckTestInterface_Method0_Params_Data)");
class  BoundsCheckTestInterface_Method0_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BoundsCheckTestInterface_Method0_ResponseParams_Data));
      new (data()) BoundsCheckTestInterface_Method0_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BoundsCheckTestInterface_Method0_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BoundsCheckTestInterface_Method0_ResponseParams_Data>(index_);
    }
    BoundsCheckTestInterface_Method0_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t param0;
  uint8_t padfinal_[7];

 private:
  BoundsCheckTestInterface_Method0_ResponseParams_Data();
  ~BoundsCheckTestInterface_Method0_ResponseParams_Data() = delete;
};
static_assert(sizeof(BoundsCheckTestInterface_Method0_ResponseParams_Data) == 16,
              "Bad sizeof(BoundsCheckTestInterface_Method0_ResponseParams_Data)");
class  BoundsCheckTestInterface_Method1_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BoundsCheckTestInterface_Method1_Params_Data));
      new (data()) BoundsCheckTestInterface_Method1_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BoundsCheckTestInterface_Method1_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BoundsCheckTestInterface_Method1_Params_Data>(index_);
    }
    BoundsCheckTestInterface_Method1_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t param0;
  uint8_t padfinal_[7];

 private:
  BoundsCheckTestInterface_Method1_Params_Data();
  ~BoundsCheckTestInterface_Method1_Params_Data() = delete;
};
static_assert(sizeof(BoundsCheckTestInterface_Method1_Params_Data) == 16,
              "Bad sizeof(BoundsCheckTestInterface_Method1_Params_Data)");
class  ConformanceTestInterface_Method0_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method0_Params_Data));
      new (data()) ConformanceTestInterface_Method0_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method0_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method0_Params_Data>(index_);
    }
    ConformanceTestInterface_Method0_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method0_Params_Data();
  ~ConformanceTestInterface_Method0_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method0_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method0_Params_Data)");
class  ConformanceTestInterface_Method1_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method1_Params_Data));
      new (data()) ConformanceTestInterface_Method1_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method1_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method1_Params_Data>(index_);
    }
    ConformanceTestInterface_Method1_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructA_Data> param0;

 private:
  ConformanceTestInterface_Method1_Params_Data();
  ~ConformanceTestInterface_Method1_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method1_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method1_Params_Data)");
class  ConformanceTestInterface_Method2_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method2_Params_Data));
      new (data()) ConformanceTestInterface_Method2_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method2_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method2_Params_Data>(index_);
    }
    ConformanceTestInterface_Method2_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructB_Data> param0;
  mojo::internal::Pointer<internal::StructA_Data> param1;

 private:
  ConformanceTestInterface_Method2_Params_Data();
  ~ConformanceTestInterface_Method2_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method2_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method2_Params_Data)");
class  ConformanceTestInterface_Method3_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method3_Params_Data));
      new (data()) ConformanceTestInterface_Method3_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method3_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method3_Params_Data>(index_);
    }
    ConformanceTestInterface_Method3_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> param0;

 private:
  ConformanceTestInterface_Method3_Params_Data();
  ~ConformanceTestInterface_Method3_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method3_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method3_Params_Data)");
class  ConformanceTestInterface_Method4_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method4_Params_Data));
      new (data()) ConformanceTestInterface_Method4_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method4_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method4_Params_Data>(index_);
    }
    ConformanceTestInterface_Method4_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructC_Data> param0;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> param1;

 private:
  ConformanceTestInterface_Method4_Params_Data();
  ~ConformanceTestInterface_Method4_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method4_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method4_Params_Data)");
class  ConformanceTestInterface_Method5_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method5_Params_Data));
      new (data()) ConformanceTestInterface_Method5_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method5_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method5_Params_Data>(index_);
    }
    ConformanceTestInterface_Method5_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructE_Data> param0;
  mojo::internal::Handle_Data param1;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method5_Params_Data();
  ~ConformanceTestInterface_Method5_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method5_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method5_Params_Data)");
class  ConformanceTestInterface_Method6_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method6_Params_Data));
      new (data()) ConformanceTestInterface_Method6_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method6_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method6_Params_Data>(index_);
    }
    ConformanceTestInterface_Method6_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> param0;

 private:
  ConformanceTestInterface_Method6_Params_Data();
  ~ConformanceTestInterface_Method6_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method6_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method6_Params_Data)");
class  ConformanceTestInterface_Method7_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method7_Params_Data));
      new (data()) ConformanceTestInterface_Method7_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method7_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method7_Params_Data>(index_);
    }
    ConformanceTestInterface_Method7_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructF_Data> param0;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> param1;

 private:
  ConformanceTestInterface_Method7_Params_Data();
  ~ConformanceTestInterface_Method7_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method7_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method7_Params_Data)");
class  ConformanceTestInterface_Method8_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method8_Params_Data));
      new (data()) ConformanceTestInterface_Method8_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method8_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method8_Params_Data>(index_);
    }
    ConformanceTestInterface_Method8_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> param0;

 private:
  ConformanceTestInterface_Method8_Params_Data();
  ~ConformanceTestInterface_Method8_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method8_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method8_Params_Data)");
class  ConformanceTestInterface_Method9_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method9_Params_Data));
      new (data()) ConformanceTestInterface_Method9_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method9_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method9_Params_Data>(index_);
    }
    ConformanceTestInterface_Method9_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Handle_Data>>>> param0;

 private:
  ConformanceTestInterface_Method9_Params_Data();
  ~ConformanceTestInterface_Method9_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method9_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method9_Params_Data)");
class  ConformanceTestInterface_Method10_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method10_Params_Data));
      new (data()) ConformanceTestInterface_Method10_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method10_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method10_Params_Data>(index_);
    }
    ConformanceTestInterface_Method10_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, uint8_t>> param0;

 private:
  ConformanceTestInterface_Method10_Params_Data();
  ~ConformanceTestInterface_Method10_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method10_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method10_Params_Data)");
class  ConformanceTestInterface_Method11_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method11_Params_Data));
      new (data()) ConformanceTestInterface_Method11_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method11_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method11_Params_Data>(index_);
    }
    ConformanceTestInterface_Method11_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::StructG_Data> param0;

 private:
  ConformanceTestInterface_Method11_Params_Data();
  ~ConformanceTestInterface_Method11_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method11_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method11_Params_Data)");
class  ConformanceTestInterface_Method12_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method12_Params_Data));
      new (data()) ConformanceTestInterface_Method12_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method12_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method12_Params_Data>(index_);
    }
    ConformanceTestInterface_Method12_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method12_Params_Data();
  ~ConformanceTestInterface_Method12_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method12_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method12_Params_Data)");
class  ConformanceTestInterface_Method12_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method12_ResponseParams_Data));
      new (data()) ConformanceTestInterface_Method12_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method12_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method12_ResponseParams_Data>(index_);
    }
    ConformanceTestInterface_Method12_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method12_ResponseParams_Data();
  ~ConformanceTestInterface_Method12_ResponseParams_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method12_ResponseParams_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method12_ResponseParams_Data)");
class  ConformanceTestInterface_Method13_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method13_Params_Data));
      new (data()) ConformanceTestInterface_Method13_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method13_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method13_Params_Data>(index_);
    }
    ConformanceTestInterface_Method13_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data param0;
  uint32_t param1;
  mojo::internal::Interface_Data param2;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method13_Params_Data();
  ~ConformanceTestInterface_Method13_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method13_Params_Data) == 32,
              "Bad sizeof(ConformanceTestInterface_Method13_Params_Data)");
class  ConformanceTestInterface_Method14_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method14_Params_Data));
      new (data()) ConformanceTestInterface_Method14_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method14_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method14_Params_Data>(index_);
    }
    ConformanceTestInterface_Method14_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t param0;
  int32_t param1;

 private:
  ConformanceTestInterface_Method14_Params_Data();
  ~ConformanceTestInterface_Method14_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method14_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method14_Params_Data)");
class  ConformanceTestInterface_Method15_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method15_Params_Data));
      new (data()) ConformanceTestInterface_Method15_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method15_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method15_Params_Data>(index_);
    }
    ConformanceTestInterface_Method15_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> param0;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> param1;

 private:
  ConformanceTestInterface_Method15_Params_Data();
  ~ConformanceTestInterface_Method15_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method15_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method15_Params_Data)");
class  ConformanceTestInterface_Method16_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method16_Params_Data));
      new (data()) ConformanceTestInterface_Method16_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method16_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method16_Params_Data>(index_);
    }
    ConformanceTestInterface_Method16_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, int32_t>> param0;

 private:
  ConformanceTestInterface_Method16_Params_Data();
  ~ConformanceTestInterface_Method16_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method16_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method16_Params_Data)");
class  ConformanceTestInterface_Method17_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method17_Params_Data));
      new (data()) ConformanceTestInterface_Method17_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method17_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method17_Params_Data>(index_);
    }
    ConformanceTestInterface_Method17_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> param0;

 private:
  ConformanceTestInterface_Method17_Params_Data();
  ~ConformanceTestInterface_Method17_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method17_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method17_Params_Data)");
class  ConformanceTestInterface_Method18_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method18_Params_Data));
      new (data()) ConformanceTestInterface_Method18_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method18_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method18_Params_Data>(index_);
    }
    ConformanceTestInterface_Method18_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::UnionA_Data param0;

 private:
  ConformanceTestInterface_Method18_Params_Data();
  ~ConformanceTestInterface_Method18_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method18_Params_Data) == 24,
              "Bad sizeof(ConformanceTestInterface_Method18_Params_Data)");
class  ConformanceTestInterface_Method19_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method19_Params_Data));
      new (data()) ConformanceTestInterface_Method19_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method19_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method19_Params_Data>(index_);
    }
    ConformanceTestInterface_Method19_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Recursive_Data> recursive;

 private:
  ConformanceTestInterface_Method19_Params_Data();
  ~ConformanceTestInterface_Method19_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method19_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method19_Params_Data)");
class  ConformanceTestInterface_Method20_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method20_Params_Data));
      new (data()) ConformanceTestInterface_Method20_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method20_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method20_Params_Data>(index_);
    }
    ConformanceTestInterface_Method20_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<internal::StructB_Data>, uint8_t>> param0;

 private:
  ConformanceTestInterface_Method20_Params_Data();
  ~ConformanceTestInterface_Method20_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method20_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method20_Params_Data)");
class  ConformanceTestInterface_Method21_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method21_Params_Data));
      new (data()) ConformanceTestInterface_Method21_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method21_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method21_Params_Data>(index_);
    }
    ConformanceTestInterface_Method21_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method21_Params_Data();
  ~ConformanceTestInterface_Method21_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method21_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method21_Params_Data)");
class  ConformanceTestInterface_Method22_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ConformanceTestInterface_Method22_Params_Data));
      new (data()) ConformanceTestInterface_Method22_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ConformanceTestInterface_Method22_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ConformanceTestInterface_Method22_Params_Data>(index_);
    }
    ConformanceTestInterface_Method22_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t param0;
  uint8_t padfinal_[4];

 private:
  ConformanceTestInterface_Method22_Params_Data();
  ~ConformanceTestInterface_Method22_Params_Data() = delete;
};
static_assert(sizeof(ConformanceTestInterface_Method22_Params_Data) == 16,
              "Bad sizeof(ConformanceTestInterface_Method22_Params_Data)");
class  IntegrationTestInterface_Method0_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IntegrationTestInterface_Method0_Params_Data));
      new (data()) IntegrationTestInterface_Method0_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IntegrationTestInterface_Method0_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IntegrationTestInterface_Method0_Params_Data>(index_);
    }
    IntegrationTestInterface_Method0_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::BasicStruct_Data> param0;

 private:
  IntegrationTestInterface_Method0_Params_Data();
  ~IntegrationTestInterface_Method0_Params_Data() = delete;
};
static_assert(sizeof(IntegrationTestInterface_Method0_Params_Data) == 16,
              "Bad sizeof(IntegrationTestInterface_Method0_Params_Data)");
class  IntegrationTestInterface_Method0_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IntegrationTestInterface_Method0_ResponseParams_Data));
      new (data()) IntegrationTestInterface_Method0_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IntegrationTestInterface_Method0_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IntegrationTestInterface_Method0_ResponseParams_Data>(index_);
    }
    IntegrationTestInterface_Method0_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> param0;

 private:
  IntegrationTestInterface_Method0_ResponseParams_Data();
  ~IntegrationTestInterface_Method0_ResponseParams_Data() = delete;
};
static_assert(sizeof(IntegrationTestInterface_Method0_ResponseParams_Data) == 16,
              "Bad sizeof(IntegrationTestInterface_Method0_ResponseParams_Data)");

}  // namespace internal
class BoundsCheckTestInterface_Method0_ParamsDataView {
 public:
  BoundsCheckTestInterface_Method0_ParamsDataView() {}

  BoundsCheckTestInterface_Method0_ParamsDataView(
      internal::BoundsCheckTestInterface_Method0_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t param0() const {
    return data_->param0;
  }
 private:
  internal::BoundsCheckTestInterface_Method0_Params_Data* data_ = nullptr;
};

class BoundsCheckTestInterface_Method0_ResponseParamsDataView {
 public:
  BoundsCheckTestInterface_Method0_ResponseParamsDataView() {}

  BoundsCheckTestInterface_Method0_ResponseParamsDataView(
      internal::BoundsCheckTestInterface_Method0_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t param0() const {
    return data_->param0;
  }
 private:
  internal::BoundsCheckTestInterface_Method0_ResponseParams_Data* data_ = nullptr;
};

class BoundsCheckTestInterface_Method1_ParamsDataView {
 public:
  BoundsCheckTestInterface_Method1_ParamsDataView() {}

  BoundsCheckTestInterface_Method1_ParamsDataView(
      internal::BoundsCheckTestInterface_Method1_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t param0() const {
    return data_->param0;
  }
 private:
  internal::BoundsCheckTestInterface_Method1_Params_Data* data_ = nullptr;
};

class ConformanceTestInterface_Method0_ParamsDataView {
 public:
  ConformanceTestInterface_Method0_ParamsDataView() {}

  ConformanceTestInterface_Method0_ParamsDataView(
      internal::ConformanceTestInterface_Method0_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float param0() const {
    return data_->param0;
  }
 private:
  internal::ConformanceTestInterface_Method0_Params_Data* data_ = nullptr;
};

class ConformanceTestInterface_Method1_ParamsDataView {
 public:
  ConformanceTestInterface_Method1_ParamsDataView() {}

  ConformanceTestInterface_Method1_ParamsDataView(
      internal::ConformanceTestInterface_Method1_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      StructADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::StructADataView>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method1_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method2_ParamsDataView {
 public:
  ConformanceTestInterface_Method2_ParamsDataView() {}

  ConformanceTestInterface_Method2_ParamsDataView(
      internal::ConformanceTestInterface_Method2_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      StructBDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::StructBDataView>(
        pointer, output, context_);
  }
  inline void GetParam1DataView(
      StructADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam1(UserType* output) {
    auto* pointer = data_->param1.Get();
    return mojo::internal::Deserialize<::mojo::test::StructADataView>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method2_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method3_ParamsDataView {
 public:
  ConformanceTestInterface_Method3_ParamsDataView() {}

  ConformanceTestInterface_Method3_ParamsDataView(
      internal::ConformanceTestInterface_Method3_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<bool>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<bool>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method3_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method4_ParamsDataView {
 public:
  ConformanceTestInterface_Method4_ParamsDataView() {}

  ConformanceTestInterface_Method4_ParamsDataView(
      internal::ConformanceTestInterface_Method4_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      StructCDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::StructCDataView>(
        pointer, output, context_);
  }
  inline void GetParam1DataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam1(UserType* output) {
    auto* pointer = data_->param1.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method4_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method5_ParamsDataView {
 public:
  ConformanceTestInterface_Method5_ParamsDataView() {}

  ConformanceTestInterface_Method5_ParamsDataView(
      internal::ConformanceTestInterface_Method5_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      StructEDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::StructEDataView>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeProducerHandle TakeParam1() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->param1, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ConformanceTestInterface_Method5_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method6_ParamsDataView {
 public:
  ConformanceTestInterface_Method6_ParamsDataView() {}

  ConformanceTestInterface_Method6_ParamsDataView(
      internal::ConformanceTestInterface_Method6_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method6_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method7_ParamsDataView {
 public:
  ConformanceTestInterface_Method7_ParamsDataView() {}

  ConformanceTestInterface_Method7_ParamsDataView(
      internal::ConformanceTestInterface_Method7_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      StructFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::StructFDataView>(
        pointer, output, context_);
  }
  inline void GetParam1DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam1(UserType* output) {
    auto* pointer = data_->param1.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method7_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method8_ParamsDataView {
 public:
  ConformanceTestInterface_Method8_ParamsDataView() {}

  ConformanceTestInterface_Method8_ParamsDataView(
      internal::ConformanceTestInterface_Method8_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method8_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method9_ParamsDataView {
 public:
  ConformanceTestInterface_Method9_ParamsDataView() {}

  ConformanceTestInterface_Method9_ParamsDataView(
      internal::ConformanceTestInterface_Method9_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<mojo::ArrayDataView<mojo::ScopedHandle>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<mojo::ScopedHandle>>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method9_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method10_ParamsDataView {
 public:
  ConformanceTestInterface_Method10_ParamsDataView() {}

  ConformanceTestInterface_Method10_ParamsDataView(
      internal::ConformanceTestInterface_Method10_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::MapDataView<mojo::StringDataView, uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method10_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method11_ParamsDataView {
 public:
  ConformanceTestInterface_Method11_ParamsDataView() {}

  ConformanceTestInterface_Method11_ParamsDataView(
      internal::ConformanceTestInterface_Method11_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      StructGDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::StructGDataView>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method11_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method12_ParamsDataView {
 public:
  ConformanceTestInterface_Method12_ParamsDataView() {}

  ConformanceTestInterface_Method12_ParamsDataView(
      internal::ConformanceTestInterface_Method12_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float param0() const {
    return data_->param0;
  }
 private:
  internal::ConformanceTestInterface_Method12_Params_Data* data_ = nullptr;
};

class ConformanceTestInterface_Method12_ResponseParamsDataView {
 public:
  ConformanceTestInterface_Method12_ResponseParamsDataView() {}

  ConformanceTestInterface_Method12_ResponseParamsDataView(
      internal::ConformanceTestInterface_Method12_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float param0() const {
    return data_->param0;
  }
 private:
  internal::ConformanceTestInterface_Method12_ResponseParams_Data* data_ = nullptr;
};

class ConformanceTestInterface_Method13_ParamsDataView {
 public:
  ConformanceTestInterface_Method13_ParamsDataView() {}

  ConformanceTestInterface_Method13_ParamsDataView(
      internal::ConformanceTestInterface_Method13_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeParam0() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::mojo::test::InterfaceAPtrDataView>(
            &data_->param0, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t param1() const {
    return data_->param1;
  }
  template <typename UserType>
  UserType TakeParam2() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::mojo::test::InterfaceAPtrDataView>(
            &data_->param2, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ConformanceTestInterface_Method13_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method14_ParamsDataView {
 public:
  ConformanceTestInterface_Method14_ParamsDataView() {}

  ConformanceTestInterface_Method14_ParamsDataView(
      internal::ConformanceTestInterface_Method14_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) const {
    auto data_value = data_->param0;
    return mojo::internal::Deserialize<::mojo::test::EnumA>(
        data_value, output);
  }

  EnumA param0() const {
    return static_cast<EnumA>(data_->param0);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam1(UserType* output) const {
    auto data_value = data_->param1;
    return mojo::internal::Deserialize<::mojo::test::EnumB>(
        data_value, output);
  }

  EnumB param1() const {
    return static_cast<EnumB>(data_->param1);
  }
 private:
  internal::ConformanceTestInterface_Method14_Params_Data* data_ = nullptr;
};

class ConformanceTestInterface_Method15_ParamsDataView {
 public:
  ConformanceTestInterface_Method15_ParamsDataView() {}

  ConformanceTestInterface_Method15_ParamsDataView(
      internal::ConformanceTestInterface_Method15_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<EnumA>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::EnumA>>(
        pointer, output, context_);
  }
  inline void GetParam1DataView(
      mojo::ArrayDataView<EnumB>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam1(UserType* output) {
    auto* pointer = data_->param1.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::EnumB>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method15_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method16_ParamsDataView {
 public:
  ConformanceTestInterface_Method16_ParamsDataView() {}

  ConformanceTestInterface_Method16_ParamsDataView(
      internal::ConformanceTestInterface_Method16_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::MapDataView<EnumA, EnumA>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo::test::EnumA, ::mojo::test::EnumA>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method16_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method17_ParamsDataView {
 public:
  ConformanceTestInterface_Method17_ParamsDataView() {}

  ConformanceTestInterface_Method17_ParamsDataView(
      internal::ConformanceTestInterface_Method17_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<mojo::InterfacePtrDataView<InterfaceAInterfaceBase>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::mojo::test::InterfaceAInterfaceBase>>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method17_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method18_ParamsDataView {
 public:
  ConformanceTestInterface_Method18_ParamsDataView() {}

  ConformanceTestInterface_Method18_ParamsDataView(
      internal::ConformanceTestInterface_Method18_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      UnionADataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = !data_->param0.is_null() ? &data_->param0 : nullptr;
    return mojo::internal::Deserialize<::mojo::test::UnionADataView>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method18_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method19_ParamsDataView {
 public:
  ConformanceTestInterface_Method19_ParamsDataView() {}

  ConformanceTestInterface_Method19_ParamsDataView(
      internal::ConformanceTestInterface_Method19_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRecursiveDataView(
      RecursiveDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecursive(UserType* output) {
    auto* pointer = data_->recursive.Get();
    return mojo::internal::Deserialize<::mojo::test::RecursiveDataView>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method19_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method20_ParamsDataView {
 public:
  ConformanceTestInterface_Method20_ParamsDataView() {}

  ConformanceTestInterface_Method20_ParamsDataView(
      internal::ConformanceTestInterface_Method20_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::MapDataView<StructBDataView, uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::mojo::test::StructBDataView, uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::ConformanceTestInterface_Method20_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ConformanceTestInterface_Method21_ParamsDataView {
 public:
  ConformanceTestInterface_Method21_ParamsDataView() {}

  ConformanceTestInterface_Method21_ParamsDataView(
      internal::ConformanceTestInterface_Method21_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) const {
    auto data_value = data_->param0;
    return mojo::internal::Deserialize<::mojo::test::ExtensibleEmptyEnum>(
        data_value, output);
  }

  ExtensibleEmptyEnum param0() const {
    return static_cast<ExtensibleEmptyEnum>(data_->param0);
  }
 private:
  internal::ConformanceTestInterface_Method21_Params_Data* data_ = nullptr;
};

class ConformanceTestInterface_Method22_ParamsDataView {
 public:
  ConformanceTestInterface_Method22_ParamsDataView() {}

  ConformanceTestInterface_Method22_ParamsDataView(
      internal::ConformanceTestInterface_Method22_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) const {
    auto data_value = data_->param0;
    return mojo::internal::Deserialize<::mojo::test::EmptyEnum>(
        data_value, output);
  }

  EmptyEnum param0() const {
    return static_cast<EmptyEnum>(data_->param0);
  }
 private:
  internal::ConformanceTestInterface_Method22_Params_Data* data_ = nullptr;
};

class IntegrationTestInterface_Method0_ParamsDataView {
 public:
  IntegrationTestInterface_Method0_ParamsDataView() {}

  IntegrationTestInterface_Method0_ParamsDataView(
      internal::IntegrationTestInterface_Method0_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      BasicStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<::mojo::test::BasicStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::IntegrationTestInterface_Method0_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IntegrationTestInterface_Method0_ResponseParamsDataView {
 public:
  IntegrationTestInterface_Method0_ResponseParamsDataView() {}

  IntegrationTestInterface_Method0_ResponseParamsDataView(
      internal::IntegrationTestInterface_Method0_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParam0DataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParam0(UserType* output) {
    auto* pointer = data_->param0.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::IntegrationTestInterface_Method0_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};










inline void ConformanceTestInterface_Method1_ParamsDataView::GetParam0DataView(
    StructADataView* output) {
  auto pointer = data_->param0.Get();
  *output = StructADataView(pointer, context_);
}


inline void ConformanceTestInterface_Method2_ParamsDataView::GetParam0DataView(
    StructBDataView* output) {
  auto pointer = data_->param0.Get();
  *output = StructBDataView(pointer, context_);
}
inline void ConformanceTestInterface_Method2_ParamsDataView::GetParam1DataView(
    StructADataView* output) {
  auto pointer = data_->param1.Get();
  *output = StructADataView(pointer, context_);
}


inline void ConformanceTestInterface_Method3_ParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<bool>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<bool>(pointer, context_);
}


inline void ConformanceTestInterface_Method4_ParamsDataView::GetParam0DataView(
    StructCDataView* output) {
  auto pointer = data_->param0.Get();
  *output = StructCDataView(pointer, context_);
}
inline void ConformanceTestInterface_Method4_ParamsDataView::GetParam1DataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->param1.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void ConformanceTestInterface_Method5_ParamsDataView::GetParam0DataView(
    StructEDataView* output) {
  auto pointer = data_->param0.Get();
  *output = StructEDataView(pointer, context_);
}


inline void ConformanceTestInterface_Method6_ParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


inline void ConformanceTestInterface_Method7_ParamsDataView::GetParam0DataView(
    StructFDataView* output) {
  auto pointer = data_->param0.Get();
  *output = StructFDataView(pointer, context_);
}
inline void ConformanceTestInterface_Method7_ParamsDataView::GetParam1DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>* output) {
  auto pointer = data_->param1.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<uint8_t>>(pointer, context_);
}


inline void ConformanceTestInterface_Method8_ParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<mojo::StringDataView>>(pointer, context_);
}


inline void ConformanceTestInterface_Method9_ParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<mojo::ArrayDataView<mojo::ScopedHandle>>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<mojo::ScopedHandle>>(pointer, context_);
}


inline void ConformanceTestInterface_Method10_ParamsDataView::GetParam0DataView(
    mojo::MapDataView<mojo::StringDataView, uint8_t>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::MapDataView<mojo::StringDataView, uint8_t>(pointer, context_);
}


inline void ConformanceTestInterface_Method11_ParamsDataView::GetParam0DataView(
    StructGDataView* output) {
  auto pointer = data_->param0.Get();
  *output = StructGDataView(pointer, context_);
}










inline void ConformanceTestInterface_Method15_ParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<EnumA>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<EnumA>(pointer, context_);
}
inline void ConformanceTestInterface_Method15_ParamsDataView::GetParam1DataView(
    mojo::ArrayDataView<EnumB>* output) {
  auto pointer = data_->param1.Get();
  *output = mojo::ArrayDataView<EnumB>(pointer, context_);
}


inline void ConformanceTestInterface_Method16_ParamsDataView::GetParam0DataView(
    mojo::MapDataView<EnumA, EnumA>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::MapDataView<EnumA, EnumA>(pointer, context_);
}


inline void ConformanceTestInterface_Method17_ParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<mojo::InterfacePtrDataView<InterfaceAInterfaceBase>>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<mojo::InterfacePtrDataView<InterfaceAInterfaceBase>>(pointer, context_);
}


inline void ConformanceTestInterface_Method18_ParamsDataView::GetParam0DataView(
    UnionADataView* output) {
  auto pointer = &data_->param0;
  *output = UnionADataView(pointer, context_);
}


inline void ConformanceTestInterface_Method19_ParamsDataView::GetRecursiveDataView(
    RecursiveDataView* output) {
  auto pointer = data_->recursive.Get();
  *output = RecursiveDataView(pointer, context_);
}


inline void ConformanceTestInterface_Method20_ParamsDataView::GetParam0DataView(
    mojo::MapDataView<StructBDataView, uint8_t>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::MapDataView<StructBDataView, uint8_t>(pointer, context_);
}






inline void IntegrationTestInterface_Method0_ParamsDataView::GetParam0DataView(
    BasicStructDataView* output) {
  auto pointer = data_->param0.Get();
  *output = BasicStructDataView(pointer, context_);
}


inline void IntegrationTestInterface_Method0_ResponseParamsDataView::GetParam0DataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->param0.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VALIDATION_TEST_INTERFACES_MOJOM_PARAMS_DATA_H_