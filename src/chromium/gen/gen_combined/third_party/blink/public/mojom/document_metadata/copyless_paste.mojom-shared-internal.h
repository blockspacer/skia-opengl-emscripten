// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
namespace document_metadata {
namespace internal {
class Property_Data;
class Entity_Data;
class WebPage_Data;
class Values_Data;

#pragma pack(push, 1)


class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Values_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  Values_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~Values_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Values_Data));
      new (data()) Values_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) Values_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Values_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Values_Data>(index_);
    }
    Values_Data* operator->() { return data(); }

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
    tag = static_cast<Values_Tag>(0);
    data.unknown = 0U;
  }

  enum class Values_Tag : uint32_t {

    
    BOOL_VALUES,
    
    LONG_VALUES,
    
    STRING_VALUES,
    
    ENTITY_VALUES,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<mojo::internal::Array_Data<bool>> f_bool_values;
    mojo::internal::Pointer<mojo::internal::Array_Data<int64_t>> f_long_values;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> f_string_values;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Entity_Data>>> f_entity_values;
    uint64_t unknown;
  };

  uint32_t size;
  Values_Tag tag;
  Union_ data;
};
static_assert(sizeof(Values_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(Values_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Property_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Property_Data));
      new (data()) Property_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Property_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Property_Data>(index_);
    }
    Property_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  internal::Values_Data values;

 private:
  Property_Data();
  ~Property_Data() = delete;
};
static_assert(sizeof(Property_Data) == 32,
              "Bad sizeof(Property_Data)");
// Used by Property::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Property_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Property_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Property_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Property_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Property_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Entity_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Entity_Data));
      new (data()) Entity_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Entity_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Entity_Data>(index_);
    }
    Entity_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> type;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Property_Data>>> properties;

 private:
  Entity_Data();
  ~Entity_Data() = delete;
};
static_assert(sizeof(Entity_Data) == 24,
              "Bad sizeof(Entity_Data)");
// Used by Entity::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Entity_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Entity_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Entity_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Entity_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Entity_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebPage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebPage_Data));
      new (data()) WebPage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebPage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebPage_Data>(index_);
    }
    WebPage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::String_Data> title;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Entity_Data>>> entities;

 private:
  WebPage_Data();
  ~WebPage_Data() = delete;
};
static_assert(sizeof(WebPage_Data) == 32,
              "Bad sizeof(WebPage_Data)");
// Used by WebPage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebPage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebPage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebPage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WebPage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebPage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_SHARED_INTERNAL_H_