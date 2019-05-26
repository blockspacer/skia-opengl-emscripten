// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojo {
namespace interface_control {
namespace internal {
class RunMessageParams_Data;
class RunResponseMessageParams_Data;
class QueryVersion_Data;
class QueryVersionResult_Data;
class FlushForTesting_Data;
class RunOrClosePipeMessageParams_Data;
class RequireVersion_Data;
class RunInput_Data;
class RunOutput_Data;
class RunOrClosePipeInput_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunInput_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RunInput_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RunInput_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunInput_Data));
      new (data()) RunInput_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RunInput_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunInput_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunInput_Data>(index_);
    }
    RunInput_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<RunInput_Tag>(0);
    data.unknown = 0U;
  }

  enum class RunInput_Tag : uint32_t {

    
    QUERY_VERSION,
    
    FLUSH_FOR_TESTING,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::QueryVersion_Data> f_query_version;
    mojo::internal::Pointer<internal::FlushForTesting_Data> f_flush_for_testing;
    uint64_t unknown;
  };

  uint32_t size;
  RunInput_Tag tag;
  Union_ data;
};
static_assert(sizeof(RunInput_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RunInput_Data)");


class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunOutput_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RunOutput_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RunOutput_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunOutput_Data));
      new (data()) RunOutput_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RunOutput_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunOutput_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunOutput_Data>(index_);
    }
    RunOutput_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<RunOutput_Tag>(0);
    data.unknown = 0U;
  }

  enum class RunOutput_Tag : uint32_t {

    
    QUERY_VERSION_RESULT,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::QueryVersionResult_Data> f_query_version_result;
    uint64_t unknown;
  };

  uint32_t size;
  RunOutput_Tag tag;
  Union_ data;
};
static_assert(sizeof(RunOutput_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RunOutput_Data)");


class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunOrClosePipeInput_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RunOrClosePipeInput_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RunOrClosePipeInput_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunOrClosePipeInput_Data));
      new (data()) RunOrClosePipeInput_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RunOrClosePipeInput_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunOrClosePipeInput_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunOrClosePipeInput_Data>(index_);
    }
    RunOrClosePipeInput_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<RunOrClosePipeInput_Tag>(0);
    data.unknown = 0U;
  }

  enum class RunOrClosePipeInput_Tag : uint32_t {

    
    REQUIRE_VERSION,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::RequireVersion_Data> f_require_version;
    uint64_t unknown;
  };

  uint32_t size;
  RunOrClosePipeInput_Tag tag;
  Union_ data;
};
static_assert(sizeof(RunOrClosePipeInput_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RunOrClosePipeInput_Data)");
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunMessageParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunMessageParams_Data));
      new (data()) RunMessageParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunMessageParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunMessageParams_Data>(index_);
    }
    RunMessageParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::RunInput_Data input;

 private:
  RunMessageParams_Data();
  ~RunMessageParams_Data() = delete;
};
static_assert(sizeof(RunMessageParams_Data) == 24,
              "Bad sizeof(RunMessageParams_Data)");
// Used by RunMessageParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RunMessageParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RunMessageParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RunMessageParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RunMessageParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RunMessageParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunResponseMessageParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunResponseMessageParams_Data));
      new (data()) RunResponseMessageParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunResponseMessageParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunResponseMessageParams_Data>(index_);
    }
    RunResponseMessageParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::RunOutput_Data output;

 private:
  RunResponseMessageParams_Data();
  ~RunResponseMessageParams_Data() = delete;
};
static_assert(sizeof(RunResponseMessageParams_Data) == 24,
              "Bad sizeof(RunResponseMessageParams_Data)");
// Used by RunResponseMessageParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RunResponseMessageParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RunResponseMessageParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RunResponseMessageParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RunResponseMessageParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RunResponseMessageParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) QueryVersion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QueryVersion_Data));
      new (data()) QueryVersion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QueryVersion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QueryVersion_Data>(index_);
    }
    QueryVersion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  QueryVersion_Data();
  ~QueryVersion_Data() = delete;
};
static_assert(sizeof(QueryVersion_Data) == 8,
              "Bad sizeof(QueryVersion_Data)");
// Used by QueryVersion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct QueryVersion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  QueryVersion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~QueryVersion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    QueryVersion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    QueryVersion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) QueryVersionResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(QueryVersionResult_Data));
      new (data()) QueryVersionResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    QueryVersionResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<QueryVersionResult_Data>(index_);
    }
    QueryVersionResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t padfinal_[4];

 private:
  QueryVersionResult_Data();
  ~QueryVersionResult_Data() = delete;
};
static_assert(sizeof(QueryVersionResult_Data) == 16,
              "Bad sizeof(QueryVersionResult_Data)");
// Used by QueryVersionResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct QueryVersionResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  QueryVersionResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~QueryVersionResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    QueryVersionResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    QueryVersionResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) FlushForTesting_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FlushForTesting_Data));
      new (data()) FlushForTesting_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FlushForTesting_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FlushForTesting_Data>(index_);
    }
    FlushForTesting_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  FlushForTesting_Data();
  ~FlushForTesting_Data() = delete;
};
static_assert(sizeof(FlushForTesting_Data) == 8,
              "Bad sizeof(FlushForTesting_Data)");
// Used by FlushForTesting::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FlushForTesting_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FlushForTesting_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FlushForTesting_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FlushForTesting_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FlushForTesting_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RunOrClosePipeMessageParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RunOrClosePipeMessageParams_Data));
      new (data()) RunOrClosePipeMessageParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RunOrClosePipeMessageParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RunOrClosePipeMessageParams_Data>(index_);
    }
    RunOrClosePipeMessageParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::RunOrClosePipeInput_Data input;

 private:
  RunOrClosePipeMessageParams_Data();
  ~RunOrClosePipeMessageParams_Data() = delete;
};
static_assert(sizeof(RunOrClosePipeMessageParams_Data) == 24,
              "Bad sizeof(RunOrClosePipeMessageParams_Data)");
// Used by RunOrClosePipeMessageParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RunOrClosePipeMessageParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RunOrClosePipeMessageParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RunOrClosePipeMessageParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RunOrClosePipeMessageParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RunOrClosePipeMessageParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) RequireVersion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RequireVersion_Data));
      new (data()) RequireVersion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RequireVersion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RequireVersion_Data>(index_);
    }
    RequireVersion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t version;
  uint8_t padfinal_[4];

 private:
  RequireVersion_Data();
  ~RequireVersion_Data() = delete;
};
static_assert(sizeof(RequireVersion_Data) == 16,
              "Bad sizeof(RequireVersion_Data)");
// Used by RequireVersion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RequireVersion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RequireVersion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RequireVersion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RequireVersion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RequireVersion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace interface_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_SHARED_INTERNAL_H_