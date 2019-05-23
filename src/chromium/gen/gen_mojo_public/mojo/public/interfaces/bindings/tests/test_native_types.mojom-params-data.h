// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_PARAMS_DATA_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_PARAMS_DATA_H_

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
class  PicklePasser_PassPickledStruct_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickledStruct_Params_Data));
      new (data()) PicklePasser_PassPickledStruct_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickledStruct_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickledStruct_Params_Data>(index_);
    }
    PicklePasser_PassPickledStruct_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PickledStruct_Data> pickle;

 private:
  PicklePasser_PassPickledStruct_Params_Data();
  ~PicklePasser_PassPickledStruct_Params_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickledStruct_Params_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickledStruct_Params_Data)");
class  PicklePasser_PassPickledStruct_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickledStruct_ResponseParams_Data));
      new (data()) PicklePasser_PassPickledStruct_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickledStruct_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickledStruct_ResponseParams_Data>(index_);
    }
    PicklePasser_PassPickledStruct_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PickledStruct_Data> passed;

 private:
  PicklePasser_PassPickledStruct_ResponseParams_Data();
  ~PicklePasser_PassPickledStruct_ResponseParams_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickledStruct_ResponseParams_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickledStruct_ResponseParams_Data)");
class  PicklePasser_PassPickledEnum_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickledEnum_Params_Data));
      new (data()) PicklePasser_PassPickledEnum_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickledEnum_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickledEnum_Params_Data>(index_);
    }
    PicklePasser_PassPickledEnum_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pickle;
  uint8_t padfinal_[4];

 private:
  PicklePasser_PassPickledEnum_Params_Data();
  ~PicklePasser_PassPickledEnum_Params_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickledEnum_Params_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickledEnum_Params_Data)");
class  PicklePasser_PassPickledEnum_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickledEnum_ResponseParams_Data));
      new (data()) PicklePasser_PassPickledEnum_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickledEnum_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickledEnum_ResponseParams_Data>(index_);
    }
    PicklePasser_PassPickledEnum_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t passed;
  uint8_t padfinal_[4];

 private:
  PicklePasser_PassPickledEnum_ResponseParams_Data();
  ~PicklePasser_PassPickledEnum_ResponseParams_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickledEnum_ResponseParams_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickledEnum_ResponseParams_Data)");
class  PicklePasser_PassPickleContainer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickleContainer_Params_Data));
      new (data()) PicklePasser_PassPickleContainer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickleContainer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickleContainer_Params_Data>(index_);
    }
    PicklePasser_PassPickleContainer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PickleContainer_Data> container;

 private:
  PicklePasser_PassPickleContainer_Params_Data();
  ~PicklePasser_PassPickleContainer_Params_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickleContainer_Params_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickleContainer_Params_Data)");
class  PicklePasser_PassPickleContainer_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickleContainer_ResponseParams_Data));
      new (data()) PicklePasser_PassPickleContainer_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickleContainer_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickleContainer_ResponseParams_Data>(index_);
    }
    PicklePasser_PassPickleContainer_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PickleContainer_Data> passed;

 private:
  PicklePasser_PassPickleContainer_ResponseParams_Data();
  ~PicklePasser_PassPickleContainer_ResponseParams_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickleContainer_ResponseParams_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickleContainer_ResponseParams_Data)");
class  PicklePasser_PassPickles_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickles_Params_Data));
      new (data()) PicklePasser_PassPickles_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickles_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickles_Params_Data>(index_);
    }
    PicklePasser_PassPickles_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PickledStruct_Data>>> pickles;

 private:
  PicklePasser_PassPickles_Params_Data();
  ~PicklePasser_PassPickles_Params_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickles_Params_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickles_Params_Data)");
class  PicklePasser_PassPickles_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickles_ResponseParams_Data));
      new (data()) PicklePasser_PassPickles_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickles_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickles_ResponseParams_Data>(index_);
    }
    PicklePasser_PassPickles_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PickledStruct_Data>>> passed;

 private:
  PicklePasser_PassPickles_ResponseParams_Data();
  ~PicklePasser_PassPickles_ResponseParams_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickles_ResponseParams_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickles_ResponseParams_Data)");
class  PicklePasser_PassPickleArrays_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickleArrays_Params_Data));
      new (data()) PicklePasser_PassPickleArrays_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickleArrays_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickleArrays_Params_Data>(index_);
    }
    PicklePasser_PassPickleArrays_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PickledStruct_Data>>>>> pickle_arrays;

 private:
  PicklePasser_PassPickleArrays_Params_Data();
  ~PicklePasser_PassPickleArrays_Params_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickleArrays_Params_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickleArrays_Params_Data)");
class  PicklePasser_PassPickleArrays_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PicklePasser_PassPickleArrays_ResponseParams_Data));
      new (data()) PicklePasser_PassPickleArrays_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PicklePasser_PassPickleArrays_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PicklePasser_PassPickleArrays_ResponseParams_Data>(index_);
    }
    PicklePasser_PassPickleArrays_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PickledStruct_Data>>>>> passed;

 private:
  PicklePasser_PassPickleArrays_ResponseParams_Data();
  ~PicklePasser_PassPickleArrays_ResponseParams_Data() = delete;
};
static_assert(sizeof(PicklePasser_PassPickleArrays_ResponseParams_Data) == 16,
              "Bad sizeof(PicklePasser_PassPickleArrays_ResponseParams_Data)");
class  RectService_AddRect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectService_AddRect_Params_Data));
      new (data()) RectService_AddRect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectService_AddRect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectService_AddRect_Params_Data>(index_);
    }
    RectService_AddRect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::test::internal::TypemappedRect_Data> r;

 private:
  RectService_AddRect_Params_Data();
  ~RectService_AddRect_Params_Data() = delete;
};
static_assert(sizeof(RectService_AddRect_Params_Data) == 16,
              "Bad sizeof(RectService_AddRect_Params_Data)");
class  RectService_GetLargestRect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectService_GetLargestRect_Params_Data));
      new (data()) RectService_GetLargestRect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectService_GetLargestRect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectService_GetLargestRect_Params_Data>(index_);
    }
    RectService_GetLargestRect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RectService_GetLargestRect_Params_Data();
  ~RectService_GetLargestRect_Params_Data() = delete;
};
static_assert(sizeof(RectService_GetLargestRect_Params_Data) == 8,
              "Bad sizeof(RectService_GetLargestRect_Params_Data)");
class  RectService_GetLargestRect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectService_GetLargestRect_ResponseParams_Data));
      new (data()) RectService_GetLargestRect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectService_GetLargestRect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectService_GetLargestRect_ResponseParams_Data>(index_);
    }
    RectService_GetLargestRect_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::test::internal::TypemappedRect_Data> largest;

 private:
  RectService_GetLargestRect_ResponseParams_Data();
  ~RectService_GetLargestRect_ResponseParams_Data() = delete;
};
static_assert(sizeof(RectService_GetLargestRect_ResponseParams_Data) == 16,
              "Bad sizeof(RectService_GetLargestRect_ResponseParams_Data)");
class  RectService_PassSharedRect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectService_PassSharedRect_Params_Data));
      new (data()) RectService_PassSharedRect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectService_PassSharedRect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectService_PassSharedRect_Params_Data>(index_);
    }
    RectService_PassSharedRect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::test::internal::SharedTypemappedRect_Data> r;

 private:
  RectService_PassSharedRect_Params_Data();
  ~RectService_PassSharedRect_Params_Data() = delete;
};
static_assert(sizeof(RectService_PassSharedRect_Params_Data) == 16,
              "Bad sizeof(RectService_PassSharedRect_Params_Data)");
class  RectService_PassSharedRect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectService_PassSharedRect_ResponseParams_Data));
      new (data()) RectService_PassSharedRect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectService_PassSharedRect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectService_PassSharedRect_ResponseParams_Data>(index_);
    }
    RectService_PassSharedRect_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo::test::internal::SharedTypemappedRect_Data> passed;

 private:
  RectService_PassSharedRect_ResponseParams_Data();
  ~RectService_PassSharedRect_ResponseParams_Data() = delete;
};
static_assert(sizeof(RectService_PassSharedRect_ResponseParams_Data) == 16,
              "Bad sizeof(RectService_PassSharedRect_ResponseParams_Data)");
class  NativeTypeTester_PassNativeStruct_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeTypeTester_PassNativeStruct_Params_Data));
      new (data()) NativeTypeTester_PassNativeStruct_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeTypeTester_PassNativeStruct_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeTypeTester_PassNativeStruct_Params_Data>(index_);
    }
    NativeTypeTester_PassNativeStruct_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TestNativeStructMojom_Data> s;

 private:
  NativeTypeTester_PassNativeStruct_Params_Data();
  ~NativeTypeTester_PassNativeStruct_Params_Data() = delete;
};
static_assert(sizeof(NativeTypeTester_PassNativeStruct_Params_Data) == 16,
              "Bad sizeof(NativeTypeTester_PassNativeStruct_Params_Data)");
class  NativeTypeTester_PassNativeStruct_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeTypeTester_PassNativeStruct_ResponseParams_Data));
      new (data()) NativeTypeTester_PassNativeStruct_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeTypeTester_PassNativeStruct_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeTypeTester_PassNativeStruct_ResponseParams_Data>(index_);
    }
    NativeTypeTester_PassNativeStruct_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TestNativeStructMojom_Data> passed;

 private:
  NativeTypeTester_PassNativeStruct_ResponseParams_Data();
  ~NativeTypeTester_PassNativeStruct_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeTypeTester_PassNativeStruct_ResponseParams_Data) == 16,
              "Bad sizeof(NativeTypeTester_PassNativeStruct_ResponseParams_Data)");
class  NativeTypeTester_PassNativeStructWithAttachments_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeTypeTester_PassNativeStructWithAttachments_Params_Data));
      new (data()) NativeTypeTester_PassNativeStructWithAttachments_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeTypeTester_PassNativeStructWithAttachments_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeTypeTester_PassNativeStructWithAttachments_Params_Data>(index_);
    }
    NativeTypeTester_PassNativeStructWithAttachments_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TestNativeStructWithAttachmentsMojom_Data> s;

 private:
  NativeTypeTester_PassNativeStructWithAttachments_Params_Data();
  ~NativeTypeTester_PassNativeStructWithAttachments_Params_Data() = delete;
};
static_assert(sizeof(NativeTypeTester_PassNativeStructWithAttachments_Params_Data) == 16,
              "Bad sizeof(NativeTypeTester_PassNativeStructWithAttachments_Params_Data)");
class  NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data));
      new (data()) NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data>(index_);
    }
    NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TestNativeStructWithAttachmentsMojom_Data> s;

 private:
  NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data();
  ~NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data) == 16,
              "Bad sizeof(NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data)");

}  // namespace internal
class PicklePasser_PassPickledStruct_ParamsDataView {
 public:
  PicklePasser_PassPickledStruct_ParamsDataView() {}

  PicklePasser_PassPickledStruct_ParamsDataView(
      internal::PicklePasser_PassPickledStruct_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPickleDataView(
      PickledStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPickle(UserType* output) {
    auto* pointer = data_->pickle.Get();
    return mojo::internal::Deserialize<::mojo::test::PickledStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickledStruct_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickledStruct_ResponseParamsDataView {
 public:
  PicklePasser_PassPickledStruct_ResponseParamsDataView() {}

  PicklePasser_PassPickledStruct_ResponseParamsDataView(
      internal::PicklePasser_PassPickledStruct_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPassedDataView(
      PickledStructDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) {
    auto* pointer = data_->passed.Get();
    return mojo::internal::Deserialize<::mojo::test::PickledStructDataView>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickledStruct_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickledEnum_ParamsDataView {
 public:
  PicklePasser_PassPickledEnum_ParamsDataView() {}

  PicklePasser_PassPickledEnum_ParamsDataView(
      internal::PicklePasser_PassPickledEnum_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPickle(UserType* output) const {
    auto data_value = data_->pickle;
    return mojo::internal::Deserialize<::mojo::test::PickledEnum>(
        data_value, output);
  }

  PickledEnum pickle() const {
    return static_cast<PickledEnum>(data_->pickle);
  }
 private:
  internal::PicklePasser_PassPickledEnum_Params_Data* data_ = nullptr;
};

class PicklePasser_PassPickledEnum_ResponseParamsDataView {
 public:
  PicklePasser_PassPickledEnum_ResponseParamsDataView() {}

  PicklePasser_PassPickledEnum_ResponseParamsDataView(
      internal::PicklePasser_PassPickledEnum_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) const {
    auto data_value = data_->passed;
    return mojo::internal::Deserialize<::mojo::test::PickledEnum>(
        data_value, output);
  }

  PickledEnum passed() const {
    return static_cast<PickledEnum>(data_->passed);
  }
 private:
  internal::PicklePasser_PassPickledEnum_ResponseParams_Data* data_ = nullptr;
};

class PicklePasser_PassPickleContainer_ParamsDataView {
 public:
  PicklePasser_PassPickleContainer_ParamsDataView() {}

  PicklePasser_PassPickleContainer_ParamsDataView(
      internal::PicklePasser_PassPickleContainer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContainerDataView(
      PickleContainerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContainer(UserType* output) {
    auto* pointer = data_->container.Get();
    return mojo::internal::Deserialize<::mojo::test::PickleContainerDataView>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickleContainer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickleContainer_ResponseParamsDataView {
 public:
  PicklePasser_PassPickleContainer_ResponseParamsDataView() {}

  PicklePasser_PassPickleContainer_ResponseParamsDataView(
      internal::PicklePasser_PassPickleContainer_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPassedDataView(
      PickleContainerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) {
    auto* pointer = data_->passed.Get();
    return mojo::internal::Deserialize<::mojo::test::PickleContainerDataView>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickleContainer_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickles_ParamsDataView {
 public:
  PicklePasser_PassPickles_ParamsDataView() {}

  PicklePasser_PassPickles_ParamsDataView(
      internal::PicklePasser_PassPickles_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPicklesDataView(
      mojo::ArrayDataView<PickledStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPickles(UserType* output) {
    auto* pointer = data_->pickles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::PickledStructDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickles_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickles_ResponseParamsDataView {
 public:
  PicklePasser_PassPickles_ResponseParamsDataView() {}

  PicklePasser_PassPickles_ResponseParamsDataView(
      internal::PicklePasser_PassPickles_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPassedDataView(
      mojo::ArrayDataView<PickledStructDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) {
    auto* pointer = data_->passed.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::test::PickledStructDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickles_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickleArrays_ParamsDataView {
 public:
  PicklePasser_PassPickleArrays_ParamsDataView() {}

  PicklePasser_PassPickleArrays_ParamsDataView(
      internal::PicklePasser_PassPickleArrays_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPickleArraysDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<PickledStructDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPickleArrays(UserType* output) {
    auto* pointer = data_->pickle_arrays.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<::mojo::test::PickledStructDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickleArrays_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PicklePasser_PassPickleArrays_ResponseParamsDataView {
 public:
  PicklePasser_PassPickleArrays_ResponseParamsDataView() {}

  PicklePasser_PassPickleArrays_ResponseParamsDataView(
      internal::PicklePasser_PassPickleArrays_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPassedDataView(
      mojo::ArrayDataView<mojo::ArrayDataView<PickledStructDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) {
    auto* pointer = data_->passed.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ArrayDataView<::mojo::test::PickledStructDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::PicklePasser_PassPickleArrays_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RectService_AddRect_ParamsDataView {
 public:
  RectService_AddRect_ParamsDataView() {}

  RectService_AddRect_ParamsDataView(
      internal::RectService_AddRect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRDataView(
      ::mojo::test::TypemappedRectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadR(UserType* output) {
    auto* pointer = data_->r.Get();
    return mojo::internal::Deserialize<::mojo::test::TypemappedRectDataView>(
        pointer, output, context_);
  }
 private:
  internal::RectService_AddRect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RectService_GetLargestRect_ParamsDataView {
 public:
  RectService_GetLargestRect_ParamsDataView() {}

  RectService_GetLargestRect_ParamsDataView(
      internal::RectService_GetLargestRect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RectService_GetLargestRect_Params_Data* data_ = nullptr;
};

class RectService_GetLargestRect_ResponseParamsDataView {
 public:
  RectService_GetLargestRect_ResponseParamsDataView() {}

  RectService_GetLargestRect_ResponseParamsDataView(
      internal::RectService_GetLargestRect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLargestDataView(
      ::mojo::test::TypemappedRectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLargest(UserType* output) {
    auto* pointer = data_->largest.Get();
    return mojo::internal::Deserialize<::mojo::test::TypemappedRectDataView>(
        pointer, output, context_);
  }
 private:
  internal::RectService_GetLargestRect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RectService_PassSharedRect_ParamsDataView {
 public:
  RectService_PassSharedRect_ParamsDataView() {}

  RectService_PassSharedRect_ParamsDataView(
      internal::RectService_PassSharedRect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRDataView(
      ::mojo::test::SharedTypemappedRectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadR(UserType* output) {
    auto* pointer = data_->r.Get();
    return mojo::internal::Deserialize<::mojo::test::SharedTypemappedRectDataView>(
        pointer, output, context_);
  }
 private:
  internal::RectService_PassSharedRect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RectService_PassSharedRect_ResponseParamsDataView {
 public:
  RectService_PassSharedRect_ResponseParamsDataView() {}

  RectService_PassSharedRect_ResponseParamsDataView(
      internal::RectService_PassSharedRect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPassedDataView(
      ::mojo::test::SharedTypemappedRectDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) {
    auto* pointer = data_->passed.Get();
    return mojo::internal::Deserialize<::mojo::test::SharedTypemappedRectDataView>(
        pointer, output, context_);
  }
 private:
  internal::RectService_PassSharedRect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeTypeTester_PassNativeStruct_ParamsDataView {
 public:
  NativeTypeTester_PassNativeStruct_ParamsDataView() {}

  NativeTypeTester_PassNativeStruct_ParamsDataView(
      internal::NativeTypeTester_PassNativeStruct_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSDataView(
      TestNativeStructMojomDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadS(UserType* output) {
    auto* pointer = data_->s.Get();
    return mojo::internal::Deserialize<::mojo::test::TestNativeStructMojomDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeTypeTester_PassNativeStruct_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeTypeTester_PassNativeStruct_ResponseParamsDataView {
 public:
  NativeTypeTester_PassNativeStruct_ResponseParamsDataView() {}

  NativeTypeTester_PassNativeStruct_ResponseParamsDataView(
      internal::NativeTypeTester_PassNativeStruct_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPassedDataView(
      TestNativeStructMojomDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPassed(UserType* output) {
    auto* pointer = data_->passed.Get();
    return mojo::internal::Deserialize<::mojo::test::TestNativeStructMojomDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeTypeTester_PassNativeStruct_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeTypeTester_PassNativeStructWithAttachments_ParamsDataView {
 public:
  NativeTypeTester_PassNativeStructWithAttachments_ParamsDataView() {}

  NativeTypeTester_PassNativeStructWithAttachments_ParamsDataView(
      internal::NativeTypeTester_PassNativeStructWithAttachments_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSDataView(
      TestNativeStructWithAttachmentsMojomDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadS(UserType* output) {
    auto* pointer = data_->s.Get();
    return mojo::internal::Deserialize<::mojo::test::TestNativeStructWithAttachmentsMojomDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeTypeTester_PassNativeStructWithAttachments_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeTypeTester_PassNativeStructWithAttachments_ResponseParamsDataView {
 public:
  NativeTypeTester_PassNativeStructWithAttachments_ResponseParamsDataView() {}

  NativeTypeTester_PassNativeStructWithAttachments_ResponseParamsDataView(
      internal::NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSDataView(
      TestNativeStructWithAttachmentsMojomDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadS(UserType* output) {
    auto* pointer = data_->s.Get();
    return mojo::internal::Deserialize<::mojo::test::TestNativeStructWithAttachmentsMojomDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeTypeTester_PassNativeStructWithAttachments_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PicklePasser_PassPickledStruct_ParamsDataView::GetPickleDataView(
    PickledStructDataView* output) {
  auto pointer = data_->pickle.Get();
  *output = PickledStructDataView(pointer, context_);
}


inline void PicklePasser_PassPickledStruct_ResponseParamsDataView::GetPassedDataView(
    PickledStructDataView* output) {
  auto pointer = data_->passed.Get();
  *output = PickledStructDataView(pointer, context_);
}






inline void PicklePasser_PassPickleContainer_ParamsDataView::GetContainerDataView(
    PickleContainerDataView* output) {
  auto pointer = data_->container.Get();
  *output = PickleContainerDataView(pointer, context_);
}


inline void PicklePasser_PassPickleContainer_ResponseParamsDataView::GetPassedDataView(
    PickleContainerDataView* output) {
  auto pointer = data_->passed.Get();
  *output = PickleContainerDataView(pointer, context_);
}


inline void PicklePasser_PassPickles_ParamsDataView::GetPicklesDataView(
    mojo::ArrayDataView<PickledStructDataView>* output) {
  auto pointer = data_->pickles.Get();
  *output = mojo::ArrayDataView<PickledStructDataView>(pointer, context_);
}


inline void PicklePasser_PassPickles_ResponseParamsDataView::GetPassedDataView(
    mojo::ArrayDataView<PickledStructDataView>* output) {
  auto pointer = data_->passed.Get();
  *output = mojo::ArrayDataView<PickledStructDataView>(pointer, context_);
}


inline void PicklePasser_PassPickleArrays_ParamsDataView::GetPickleArraysDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<PickledStructDataView>>* output) {
  auto pointer = data_->pickle_arrays.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<PickledStructDataView>>(pointer, context_);
}


inline void PicklePasser_PassPickleArrays_ResponseParamsDataView::GetPassedDataView(
    mojo::ArrayDataView<mojo::ArrayDataView<PickledStructDataView>>* output) {
  auto pointer = data_->passed.Get();
  *output = mojo::ArrayDataView<mojo::ArrayDataView<PickledStructDataView>>(pointer, context_);
}


inline void RectService_AddRect_ParamsDataView::GetRDataView(
    ::mojo::test::TypemappedRectDataView* output) {
  auto pointer = data_->r.Get();
  *output = ::mojo::test::TypemappedRectDataView(pointer, context_);
}




inline void RectService_GetLargestRect_ResponseParamsDataView::GetLargestDataView(
    ::mojo::test::TypemappedRectDataView* output) {
  auto pointer = data_->largest.Get();
  *output = ::mojo::test::TypemappedRectDataView(pointer, context_);
}


inline void RectService_PassSharedRect_ParamsDataView::GetRDataView(
    ::mojo::test::SharedTypemappedRectDataView* output) {
  auto pointer = data_->r.Get();
  *output = ::mojo::test::SharedTypemappedRectDataView(pointer, context_);
}


inline void RectService_PassSharedRect_ResponseParamsDataView::GetPassedDataView(
    ::mojo::test::SharedTypemappedRectDataView* output) {
  auto pointer = data_->passed.Get();
  *output = ::mojo::test::SharedTypemappedRectDataView(pointer, context_);
}


inline void NativeTypeTester_PassNativeStruct_ParamsDataView::GetSDataView(
    TestNativeStructMojomDataView* output) {
  auto pointer = data_->s.Get();
  *output = TestNativeStructMojomDataView(pointer, context_);
}


inline void NativeTypeTester_PassNativeStruct_ResponseParamsDataView::GetPassedDataView(
    TestNativeStructMojomDataView* output) {
  auto pointer = data_->passed.Get();
  *output = TestNativeStructMojomDataView(pointer, context_);
}


inline void NativeTypeTester_PassNativeStructWithAttachments_ParamsDataView::GetSDataView(
    TestNativeStructWithAttachmentsMojomDataView* output) {
  auto pointer = data_->s.Get();
  *output = TestNativeStructWithAttachmentsMojomDataView(pointer, context_);
}


inline void NativeTypeTester_PassNativeStructWithAttachments_ResponseParamsDataView::GetSDataView(
    TestNativeStructWithAttachmentsMojomDataView* output) {
  auto pointer = data_->s.Get();
  *output = TestNativeStructWithAttachmentsMojomDataView(pointer, context_);
}

}  // namespace test
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_NATIVE_TYPES_MOJOM_PARAMS_DATA_H_