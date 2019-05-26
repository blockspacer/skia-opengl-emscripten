// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojo {
namespace test {
namespace internal {
class Struct1_Data;
class Struct2_Data;
class Struct3_Data;
class Struct4_Data;
class Struct5_Data;
class Struct6_Data;
class StructOfNullables_Data;

#pragma pack(push, 1)
class  Struct1_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Struct1_Data));
      new (data()) Struct1_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Struct1_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Struct1_Data>(index_);
    }
    Struct1_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t i;
  uint8_t padfinal_[7];

 private:
  Struct1_Data();
  ~Struct1_Data() = delete;
};
static_assert(sizeof(Struct1_Data) == 16,
              "Bad sizeof(Struct1_Data)");
// Used by Struct1::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Struct1_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Struct1_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Struct1_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Struct1_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Struct1_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Struct2_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Struct2_Data));
      new (data()) Struct2_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Struct2_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Struct2_Data>(index_);
    }
    Struct2_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data hdl;
  uint8_t padfinal_[4];

 private:
  Struct2_Data();
  ~Struct2_Data() = delete;
};
static_assert(sizeof(Struct2_Data) == 16,
              "Bad sizeof(Struct2_Data)");
// Used by Struct2::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Struct2_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Struct2_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Struct2_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Struct2_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Struct2_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Struct3_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Struct3_Data));
      new (data()) Struct3_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Struct3_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Struct3_Data>(index_);
    }
    Struct3_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Struct1_Data> struct_1;

 private:
  Struct3_Data();
  ~Struct3_Data() = delete;
};
static_assert(sizeof(Struct3_Data) == 16,
              "Bad sizeof(Struct3_Data)");
// Used by Struct3::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Struct3_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Struct3_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Struct3_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Struct3_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Struct3_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Struct4_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Struct4_Data));
      new (data()) Struct4_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Struct4_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Struct4_Data>(index_);
    }
    Struct4_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Struct1_Data>>> data;

 private:
  Struct4_Data();
  ~Struct4_Data() = delete;
};
static_assert(sizeof(Struct4_Data) == 16,
              "Bad sizeof(Struct4_Data)");
// Used by Struct4::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Struct4_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Struct4_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Struct4_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Struct4_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Struct4_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Struct5_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Struct5_Data));
      new (data()) Struct5_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Struct5_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Struct5_Data>(index_);
    }
    Struct5_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Struct1_Data>>> pair;

 private:
  Struct5_Data();
  ~Struct5_Data() = delete;
};
static_assert(sizeof(Struct5_Data) == 16,
              "Bad sizeof(Struct5_Data)");
// Used by Struct5::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Struct5_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Struct5_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Struct5_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Struct5_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Struct5_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Struct6_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Struct6_Data));
      new (data()) Struct6_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Struct6_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Struct6_Data>(index_);
    }
    Struct6_Data* operator->() { return data(); }

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
  Struct6_Data();
  ~Struct6_Data() = delete;
};
static_assert(sizeof(Struct6_Data) == 16,
              "Bad sizeof(Struct6_Data)");
// Used by Struct6::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Struct6_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Struct6_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Struct6_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Struct6_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Struct6_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StructOfNullables_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StructOfNullables_Data));
      new (data()) StructOfNullables_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StructOfNullables_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StructOfNullables_Data>(index_);
    }
    StructOfNullables_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data hdl;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Struct1_Data> struct_1;
  mojo::internal::Pointer<mojo::internal::String_Data> str;

 private:
  StructOfNullables_Data();
  ~StructOfNullables_Data() = delete;
};
static_assert(sizeof(StructOfNullables_Data) == 32,
              "Bad sizeof(StructOfNullables_Data)");
// Used by StructOfNullables::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StructOfNullables_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StructOfNullables_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StructOfNullables_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StructOfNullables_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StructOfNullables_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_SHARED_INTERNAL_H_