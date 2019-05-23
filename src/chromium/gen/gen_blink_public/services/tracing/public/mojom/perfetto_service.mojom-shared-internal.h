// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace tracing {
namespace mojom {
namespace internal {
class ChunksToMove_Data;
class ChunkPatch_Data;
class ChunksToPatch_Data;
class CommitDataRequest_Data;
class ChromeConfig_Data;
class DataSourceConfig_Data;
class DataSourceRegistration_Data;
class BufferConfig_Data;
class DataSource_Data;
class PerfettoBuiltinDataSource_Data;
class TraceConfig_Data;

struct TracingClientPriority_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChunksToMove_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunksToMove_Data));
      new (data()) ChunksToMove_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunksToMove_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunksToMove_Data>(index_);
    }
    ChunksToMove_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t page;
  uint32_t chunk;
  uint32_t target_buffer;
  uint8_t padfinal_[4];

 private:
  ChunksToMove_Data();
  ~ChunksToMove_Data() = delete;
};
static_assert(sizeof(ChunksToMove_Data) == 24,
              "Bad sizeof(ChunksToMove_Data)");
// Used by ChunksToMove::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChunksToMove_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChunksToMove_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChunksToMove_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChunksToMove_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChunksToMove_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChunkPatch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunkPatch_Data));
      new (data()) ChunkPatch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunkPatch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunkPatch_Data>(index_);
    }
    ChunkPatch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t offset;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> data;

 private:
  ChunkPatch_Data();
  ~ChunkPatch_Data() = delete;
};
static_assert(sizeof(ChunkPatch_Data) == 24,
              "Bad sizeof(ChunkPatch_Data)");
// Used by ChunkPatch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChunkPatch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChunkPatch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChunkPatch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChunkPatch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChunkPatch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChunksToPatch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunksToPatch_Data));
      new (data()) ChunksToPatch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunksToPatch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunksToPatch_Data>(index_);
    }
    ChunksToPatch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t target_buffer;
  uint32_t writer_id;
  uint32_t chunk_id;
  uint8_t has_more_patches : 1;
  uint8_t pad3_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChunkPatch_Data>>> patches;

 private:
  ChunksToPatch_Data();
  ~ChunksToPatch_Data() = delete;
};
static_assert(sizeof(ChunksToPatch_Data) == 32,
              "Bad sizeof(ChunksToPatch_Data)");
// Used by ChunksToPatch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChunksToPatch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChunksToPatch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChunksToPatch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChunksToPatch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChunksToPatch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) CommitDataRequest_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CommitDataRequest_Data));
      new (data()) CommitDataRequest_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CommitDataRequest_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CommitDataRequest_Data>(index_);
    }
    CommitDataRequest_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChunksToMove_Data>>> chunks_to_move;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ChunksToPatch_Data>>> chunks_to_patch;
  uint64_t flush_request_id;

 private:
  CommitDataRequest_Data();
  ~CommitDataRequest_Data() = delete;
};
static_assert(sizeof(CommitDataRequest_Data) == 32,
              "Bad sizeof(CommitDataRequest_Data)");
// Used by CommitDataRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CommitDataRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CommitDataRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CommitDataRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CommitDataRequest_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CommitDataRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) ChromeConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChromeConfig_Data));
      new (data()) ChromeConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChromeConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChromeConfig_Data>(index_);
    }
    ChromeConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> trace_config;
  uint8_t privacy_filtering_enabled : 1;
  uint8_t padfinal_[7];

 private:
  ChromeConfig_Data();
  ~ChromeConfig_Data() = delete;
};
static_assert(sizeof(ChromeConfig_Data) == 24,
              "Bad sizeof(ChromeConfig_Data)");
// Used by ChromeConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ChromeConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ChromeConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ChromeConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ChromeConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ChromeConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) DataSourceConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataSourceConfig_Data));
      new (data()) DataSourceConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataSourceConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataSourceConfig_Data>(index_);
    }
    DataSourceConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint32_t target_buffer;
  uint32_t trace_duration_ms;
  uint64_t tracing_session_id;
  mojo::internal::Pointer<internal::ChromeConfig_Data> chrome_config;
  mojo::internal::Pointer<mojo::internal::String_Data> legacy_config;

 private:
  DataSourceConfig_Data();
  ~DataSourceConfig_Data() = delete;
};
static_assert(sizeof(DataSourceConfig_Data) == 48,
              "Bad sizeof(DataSourceConfig_Data)");
// Used by DataSourceConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataSourceConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataSourceConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataSourceConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataSourceConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataSourceConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) DataSourceRegistration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataSourceRegistration_Data));
      new (data()) DataSourceRegistration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataSourceRegistration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataSourceRegistration_Data>(index_);
    }
    DataSourceRegistration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t will_notify_on_start : 1;
  uint8_t will_notify_on_stop : 1;
  uint8_t padfinal_[7];

 private:
  DataSourceRegistration_Data();
  ~DataSourceRegistration_Data() = delete;
};
static_assert(sizeof(DataSourceRegistration_Data) == 24,
              "Bad sizeof(DataSourceRegistration_Data)");
// Used by DataSourceRegistration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataSourceRegistration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataSourceRegistration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataSourceRegistration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataSourceRegistration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataSourceRegistration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) BufferConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BufferConfig_Data));
      new (data()) BufferConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BufferConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BufferConfig_Data>(index_);
    }
    BufferConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t size_kb;
  uint8_t padfinal_[4];

 private:
  BufferConfig_Data();
  ~BufferConfig_Data() = delete;
};
static_assert(sizeof(BufferConfig_Data) == 16,
              "Bad sizeof(BufferConfig_Data)");
// Used by BufferConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BufferConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BufferConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BufferConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BufferConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BufferConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) DataSource_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataSource_Data));
      new (data()) DataSource_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataSource_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataSource_Data>(index_);
    }
    DataSource_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DataSourceConfig_Data> config;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> producer_name_filter;

 private:
  DataSource_Data();
  ~DataSource_Data() = delete;
};
static_assert(sizeof(DataSource_Data) == 24,
              "Bad sizeof(DataSource_Data)");
// Used by DataSource::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataSource_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataSource_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataSource_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DataSource_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataSource_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) PerfettoBuiltinDataSource_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PerfettoBuiltinDataSource_Data));
      new (data()) PerfettoBuiltinDataSource_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PerfettoBuiltinDataSource_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PerfettoBuiltinDataSource_Data>(index_);
    }
    PerfettoBuiltinDataSource_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t disable_clock_snapshotting : 1;
  uint8_t disable_trace_config : 1;
  uint8_t disable_system_info : 1;
  uint8_t padfinal_[7];

 private:
  PerfettoBuiltinDataSource_Data();
  ~PerfettoBuiltinDataSource_Data() = delete;
};
static_assert(sizeof(PerfettoBuiltinDataSource_Data) == 16,
              "Bad sizeof(PerfettoBuiltinDataSource_Data)");
// Used by PerfettoBuiltinDataSource::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PerfettoBuiltinDataSource_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PerfettoBuiltinDataSource_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PerfettoBuiltinDataSource_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PerfettoBuiltinDataSource_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PerfettoBuiltinDataSource_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(TRACING_MOJOM_SHARED) TraceConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TraceConfig_Data));
      new (data()) TraceConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TraceConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TraceConfig_Data>(index_);
    }
    TraceConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DataSource_Data>>> data_sources;
  mojo::internal::Pointer<internal::PerfettoBuiltinDataSource_Data> perfetto_builtin_data_source;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BufferConfig_Data>>> buffers;
  uint32_t duration_ms;
  uint8_t padfinal_[4];

 private:
  TraceConfig_Data();
  ~TraceConfig_Data() = delete;
};
static_assert(sizeof(TraceConfig_Data) == 40,
              "Bad sizeof(TraceConfig_Data)");
// Used by TraceConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TraceConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TraceConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TraceConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TraceConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TraceConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_SHARED_INTERNAL_H_