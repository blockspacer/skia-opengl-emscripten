// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "third_party/blink/public/mojom/permissions/permission_status.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class MidiPermissionDescriptor_Data;
class ClipboardPermissionDescriptor_Data;
class PermissionDescriptor_Data;
class PermissionDescriptorExtension_Data;

struct PermissionName_Data {
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
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
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


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionDescriptorExtension_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  PermissionDescriptorExtension_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~PermissionDescriptorExtension_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionDescriptorExtension_Data));
      new (data()) PermissionDescriptorExtension_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) PermissionDescriptorExtension_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionDescriptorExtension_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionDescriptorExtension_Data>(index_);
    }
    PermissionDescriptorExtension_Data* operator->() { return data(); }

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
    tag = static_cast<PermissionDescriptorExtension_Tag>(0);
    data.unknown = 0U;
  }

  enum class PermissionDescriptorExtension_Tag : uint32_t {

    
    MIDI,
    
    CLIPBOARD,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::MidiPermissionDescriptor_Data> f_midi;
    mojo::internal::Pointer<internal::ClipboardPermissionDescriptor_Data> f_clipboard;
    uint64_t unknown;
  };

  uint32_t size;
  PermissionDescriptorExtension_Tag tag;
  Union_ data;
};
static_assert(sizeof(PermissionDescriptorExtension_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(PermissionDescriptorExtension_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MidiPermissionDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MidiPermissionDescriptor_Data));
      new (data()) MidiPermissionDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MidiPermissionDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MidiPermissionDescriptor_Data>(index_);
    }
    MidiPermissionDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t sysex : 1;
  uint8_t padfinal_[7];

 private:
  MidiPermissionDescriptor_Data();
  ~MidiPermissionDescriptor_Data() = delete;
};
static_assert(sizeof(MidiPermissionDescriptor_Data) == 16,
              "Bad sizeof(MidiPermissionDescriptor_Data)");
// Used by MidiPermissionDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MidiPermissionDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MidiPermissionDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MidiPermissionDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MidiPermissionDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MidiPermissionDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) ClipboardPermissionDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ClipboardPermissionDescriptor_Data));
      new (data()) ClipboardPermissionDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ClipboardPermissionDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ClipboardPermissionDescriptor_Data>(index_);
    }
    ClipboardPermissionDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allowWithoutGesture : 1;
  uint8_t padfinal_[7];

 private:
  ClipboardPermissionDescriptor_Data();
  ~ClipboardPermissionDescriptor_Data() = delete;
};
static_assert(sizeof(ClipboardPermissionDescriptor_Data) == 16,
              "Bad sizeof(ClipboardPermissionDescriptor_Data)");
// Used by ClipboardPermissionDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ClipboardPermissionDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ClipboardPermissionDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ClipboardPermissionDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ClipboardPermissionDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ClipboardPermissionDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PermissionDescriptor_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PermissionDescriptor_Data));
      new (data()) PermissionDescriptor_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PermissionDescriptor_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PermissionDescriptor_Data>(index_);
    }
    PermissionDescriptor_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t name;
  uint8_t pad0_[4];
  internal::PermissionDescriptorExtension_Data extension;

 private:
  PermissionDescriptor_Data();
  ~PermissionDescriptor_Data() = delete;
};
static_assert(sizeof(PermissionDescriptor_Data) == 32,
              "Bad sizeof(PermissionDescriptor_Data)");
// Used by PermissionDescriptor::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PermissionDescriptor_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PermissionDescriptor_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PermissionDescriptor_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PermissionDescriptor_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PermissionDescriptor_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_INTERNAL_H_