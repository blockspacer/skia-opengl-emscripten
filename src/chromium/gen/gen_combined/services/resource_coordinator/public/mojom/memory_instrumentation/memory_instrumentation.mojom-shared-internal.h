// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_string.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace memory_instrumentation {
namespace mojom {
namespace internal {
class RequestArgs_Data;
class RawAllocatorDumpEdge_Data;
class RawAllocatorDumpEntry_Data;
class RawAllocatorDump_Data;
class RawProcessMemoryDump_Data;
class VmRegion_Data;
class PlatformPrivateFootprint_Data;
class RawOSMemDump_Data;
class OSMemDump_Data;
class AllocatorMemDump_Data;
class ProcessMemoryDump_Data;
class AggregatedMetrics_Data;
class GlobalMemoryDump_Data;
class HeapProfileResult_Data;
class RawAllocatorDumpEntryValue_Data;

struct DumpType_Data {
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

struct LevelOfDetail_Data {
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

struct ProcessType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
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

struct MemoryMapOption_Data {
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


class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RawAllocatorDumpEntryValue_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  RawAllocatorDumpEntryValue_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~RawAllocatorDumpEntryValue_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RawAllocatorDumpEntryValue_Data));
      new (data()) RawAllocatorDumpEntryValue_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) RawAllocatorDumpEntryValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RawAllocatorDumpEntryValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RawAllocatorDumpEntryValue_Data>(index_);
    }
    RawAllocatorDumpEntryValue_Data* operator->() { return data(); }

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
    tag = static_cast<RawAllocatorDumpEntryValue_Tag>(0);
    data.unknown = 0U;
  }

  enum class RawAllocatorDumpEntryValue_Tag : uint32_t {

    
    VALUE_UINT64,
    
    VALUE_STRING,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    uint64_t f_value_uint64;
    mojo::internal::Pointer<mojo::internal::String_Data> f_value_string;
    uint64_t unknown;
  };

  uint32_t size;
  RawAllocatorDumpEntryValue_Tag tag;
  Union_ data;
};
static_assert(sizeof(RawAllocatorDumpEntryValue_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(RawAllocatorDumpEntryValue_Data)");
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RequestArgs_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RequestArgs_Data));
      new (data()) RequestArgs_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RequestArgs_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RequestArgs_Data>(index_);
    }
    RequestArgs_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t dump_guid;
  int32_t dump_type;
  int32_t level_of_detail;

 private:
  RequestArgs_Data();
  ~RequestArgs_Data() = delete;
};
static_assert(sizeof(RequestArgs_Data) == 24,
              "Bad sizeof(RequestArgs_Data)");
// Used by RequestArgs::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RequestArgs_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RequestArgs_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RequestArgs_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RequestArgs_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RequestArgs_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RawAllocatorDumpEdge_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RawAllocatorDumpEdge_Data));
      new (data()) RawAllocatorDumpEdge_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RawAllocatorDumpEdge_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RawAllocatorDumpEdge_Data>(index_);
    }
    RawAllocatorDumpEdge_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t source_id;
  uint64_t target_id;
  int32_t importance;
  uint8_t overridable : 1;
  uint8_t padfinal_[3];

 private:
  RawAllocatorDumpEdge_Data();
  ~RawAllocatorDumpEdge_Data() = delete;
};
static_assert(sizeof(RawAllocatorDumpEdge_Data) == 32,
              "Bad sizeof(RawAllocatorDumpEdge_Data)");
// Used by RawAllocatorDumpEdge::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RawAllocatorDumpEdge_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RawAllocatorDumpEdge_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RawAllocatorDumpEdge_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RawAllocatorDumpEdge_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RawAllocatorDumpEdge_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RawAllocatorDumpEntry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RawAllocatorDumpEntry_Data));
      new (data()) RawAllocatorDumpEntry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RawAllocatorDumpEntry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RawAllocatorDumpEntry_Data>(index_);
    }
    RawAllocatorDumpEntry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> units;
  internal::RawAllocatorDumpEntryValue_Data value;

 private:
  RawAllocatorDumpEntry_Data();
  ~RawAllocatorDumpEntry_Data() = delete;
};
static_assert(sizeof(RawAllocatorDumpEntry_Data) == 40,
              "Bad sizeof(RawAllocatorDumpEntry_Data)");
// Used by RawAllocatorDumpEntry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RawAllocatorDumpEntry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RawAllocatorDumpEntry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RawAllocatorDumpEntry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RawAllocatorDumpEntry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RawAllocatorDumpEntry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RawAllocatorDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RawAllocatorDump_Data));
      new (data()) RawAllocatorDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RawAllocatorDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RawAllocatorDump_Data>(index_);
    }
    RawAllocatorDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t id;
  mojo::internal::Pointer<mojo::internal::String_Data> absolute_name;
  uint8_t weak : 1;
  uint8_t pad2_[3];
  int32_t level_of_detail;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RawAllocatorDumpEntry_Data>>> entries;

 private:
  RawAllocatorDump_Data();
  ~RawAllocatorDump_Data() = delete;
};
static_assert(sizeof(RawAllocatorDump_Data) == 40,
              "Bad sizeof(RawAllocatorDump_Data)");
// Used by RawAllocatorDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RawAllocatorDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RawAllocatorDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RawAllocatorDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RawAllocatorDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RawAllocatorDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RawProcessMemoryDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RawProcessMemoryDump_Data));
      new (data()) RawProcessMemoryDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RawProcessMemoryDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RawProcessMemoryDump_Data>(index_);
    }
    RawProcessMemoryDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t level_of_detail;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RawAllocatorDumpEdge_Data>>> allocator_dump_edges;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::RawAllocatorDump_Data>>> allocator_dumps;

 private:
  RawProcessMemoryDump_Data();
  ~RawProcessMemoryDump_Data() = delete;
};
static_assert(sizeof(RawProcessMemoryDump_Data) == 32,
              "Bad sizeof(RawProcessMemoryDump_Data)");
// Used by RawProcessMemoryDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RawProcessMemoryDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RawProcessMemoryDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RawProcessMemoryDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RawProcessMemoryDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RawProcessMemoryDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) VmRegion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VmRegion_Data));
      new (data()) VmRegion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VmRegion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VmRegion_Data>(index_);
    }
    VmRegion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t start_address;
  uint64_t size_in_bytes;
  uint64_t module_timestamp;
  mojo::internal::Pointer<mojo::internal::String_Data> module_debugid;
  mojo::internal::Pointer<mojo::internal::String_Data> module_debug_path;
  uint32_t protection_flags;
  uint8_t pad5_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> mapped_file;
  uint64_t byte_stats_private_dirty_resident;
  uint64_t byte_stats_private_clean_resident;
  uint64_t byte_stats_shared_dirty_resident;
  uint64_t byte_stats_shared_clean_resident;
  uint64_t byte_stats_swapped;
  uint64_t byte_stats_proportional_resident;

 private:
  VmRegion_Data();
  ~VmRegion_Data() = delete;
};
static_assert(sizeof(VmRegion_Data) == 112,
              "Bad sizeof(VmRegion_Data)");
// Used by VmRegion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VmRegion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VmRegion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VmRegion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VmRegion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VmRegion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) PlatformPrivateFootprint_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PlatformPrivateFootprint_Data));
      new (data()) PlatformPrivateFootprint_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PlatformPrivateFootprint_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PlatformPrivateFootprint_Data>(index_);
    }
    PlatformPrivateFootprint_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t phys_footprint_bytes;
  uint64_t internal_bytes;
  uint64_t compressed_bytes;
  uint64_t rss_anon_bytes;
  uint64_t vm_swap_bytes;
  uint64_t private_bytes;

 private:
  PlatformPrivateFootprint_Data();
  ~PlatformPrivateFootprint_Data() = delete;
};
static_assert(sizeof(PlatformPrivateFootprint_Data) == 56,
              "Bad sizeof(PlatformPrivateFootprint_Data)");
// Used by PlatformPrivateFootprint::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PlatformPrivateFootprint_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PlatformPrivateFootprint_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PlatformPrivateFootprint_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PlatformPrivateFootprint_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PlatformPrivateFootprint_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) RawOSMemDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RawOSMemDump_Data));
      new (data()) RawOSMemDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RawOSMemDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RawOSMemDump_Data>(index_);
    }
    RawOSMemDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t resident_set_kb;
  uint32_t peak_resident_set_kb;
  uint8_t is_peak_rss_resettable : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<internal::PlatformPrivateFootprint_Data> platform_private_footprint;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::VmRegion_Data>>> memory_maps;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> native_library_pages_bitmap;

 private:
  RawOSMemDump_Data();
  ~RawOSMemDump_Data() = delete;
};
static_assert(sizeof(RawOSMemDump_Data) == 48,
              "Bad sizeof(RawOSMemDump_Data)");
// Used by RawOSMemDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RawOSMemDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RawOSMemDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RawOSMemDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RawOSMemDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RawOSMemDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) OSMemDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(OSMemDump_Data));
      new (data()) OSMemDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    OSMemDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<OSMemDump_Data>(index_);
    }
    OSMemDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t resident_set_kb;
  uint32_t peak_resident_set_kb;
  uint8_t is_peak_rss_resettable : 1;
  uint8_t pad2_[3];
  uint32_t private_footprint_kb;
  uint32_t shared_footprint_kb;
  uint32_t private_footprint_swap_kb;

 private:
  OSMemDump_Data();
  ~OSMemDump_Data() = delete;
};
static_assert(sizeof(OSMemDump_Data) == 32,
              "Bad sizeof(OSMemDump_Data)");
// Used by OSMemDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OSMemDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OSMemDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OSMemDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    OSMemDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OSMemDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) AllocatorMemDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AllocatorMemDump_Data));
      new (data()) AllocatorMemDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AllocatorMemDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AllocatorMemDump_Data>(index_);
    }
    AllocatorMemDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, uint64_t>> numeric_entries;

 private:
  AllocatorMemDump_Data();
  ~AllocatorMemDump_Data() = delete;
};
static_assert(sizeof(AllocatorMemDump_Data) == 16,
              "Bad sizeof(AllocatorMemDump_Data)");
// Used by AllocatorMemDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AllocatorMemDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AllocatorMemDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AllocatorMemDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AllocatorMemDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AllocatorMemDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) ProcessMemoryDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProcessMemoryDump_Data));
      new (data()) ProcessMemoryDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProcessMemoryDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProcessMemoryDump_Data>(index_);
    }
    ProcessMemoryDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t process_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::OSMemDump_Data> os_dump;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<internal::AllocatorMemDump_Data>>> chrome_allocator_dumps;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> service_names;

 private:
  ProcessMemoryDump_Data();
  ~ProcessMemoryDump_Data() = delete;
};
static_assert(sizeof(ProcessMemoryDump_Data) == 48,
              "Bad sizeof(ProcessMemoryDump_Data)");
// Used by ProcessMemoryDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProcessMemoryDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProcessMemoryDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProcessMemoryDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProcessMemoryDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProcessMemoryDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) AggregatedMetrics_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AggregatedMetrics_Data));
      new (data()) AggregatedMetrics_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AggregatedMetrics_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AggregatedMetrics_Data>(index_);
    }
    AggregatedMetrics_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t native_library_resident_kb;
  uint8_t padfinal_[4];

 private:
  AggregatedMetrics_Data();
  ~AggregatedMetrics_Data() = delete;
};
static_assert(sizeof(AggregatedMetrics_Data) == 16,
              "Bad sizeof(AggregatedMetrics_Data)");
// Used by AggregatedMetrics::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AggregatedMetrics_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AggregatedMetrics_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AggregatedMetrics_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AggregatedMetrics_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AggregatedMetrics_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) GlobalMemoryDump_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GlobalMemoryDump_Data));
      new (data()) GlobalMemoryDump_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GlobalMemoryDump_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GlobalMemoryDump_Data>(index_);
    }
    GlobalMemoryDump_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> start_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ProcessMemoryDump_Data>>> process_dumps;
  mojo::internal::Pointer<internal::AggregatedMetrics_Data> aggregated_metrics;

 private:
  GlobalMemoryDump_Data();
  ~GlobalMemoryDump_Data() = delete;
};
static_assert(sizeof(GlobalMemoryDump_Data) == 32,
              "Bad sizeof(GlobalMemoryDump_Data)");
// Used by GlobalMemoryDump::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GlobalMemoryDump_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GlobalMemoryDump_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GlobalMemoryDump_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GlobalMemoryDump_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GlobalMemoryDump_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) HeapProfileResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HeapProfileResult_Data));
      new (data()) HeapProfileResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HeapProfileResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HeapProfileResult_Data>(index_);
    }
    HeapProfileResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ProcessId_Data> pid;
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString_Data> json;

 private:
  HeapProfileResult_Data();
  ~HeapProfileResult_Data() = delete;
};
static_assert(sizeof(HeapProfileResult_Data) == 24,
              "Bad sizeof(HeapProfileResult_Data)");
// Used by HeapProfileResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HeapProfileResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HeapProfileResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HeapProfileResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HeapProfileResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HeapProfileResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace memory_instrumentation

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_MEMORY_INSTRUMENTATION_MEMORY_INSTRUMENTATION_MOJOM_SHARED_INTERNAL_H_