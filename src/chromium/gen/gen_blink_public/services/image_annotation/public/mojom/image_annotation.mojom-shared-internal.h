// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_INTERNAL_H_

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
namespace image_annotation {
namespace mojom {
namespace internal {
class Annotation_Data;
class AnnotateImageResult_Data;

struct AnnotateImageError_Data {
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

struct AnnotationType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 1:
      case 2:
      case 3:
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


class  AnnotateImageResult_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  AnnotateImageResult_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~AnnotateImageResult_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AnnotateImageResult_Data));
      new (data()) AnnotateImageResult_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) AnnotateImageResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AnnotateImageResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AnnotateImageResult_Data>(index_);
    }
    AnnotateImageResult_Data* operator->() { return data(); }

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
    tag = static_cast<AnnotateImageResult_Tag>(0);
    data.unknown = 0U;
  }

  enum class AnnotateImageResult_Tag : uint32_t {

    
    ERROR_CODE,
    
    ANNOTATIONS,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    int32_t f_error_code;
    mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Annotation_Data>>> f_annotations;
    uint64_t unknown;
  };

  uint32_t size;
  AnnotateImageResult_Tag tag;
  Union_ data;
};
static_assert(sizeof(AnnotateImageResult_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(AnnotateImageResult_Data)");
class  Annotation_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Annotation_Data));
      new (data()) Annotation_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Annotation_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Annotation_Data>(index_);
    }
    Annotation_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  double score;
  mojo::internal::Pointer<mojo::internal::String_Data> text;

 private:
  Annotation_Data();
  ~Annotation_Data() = delete;
};
static_assert(sizeof(Annotation_Data) == 32,
              "Bad sizeof(Annotation_Data)");
// Used by Annotation::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Annotation_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Annotation_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Annotation_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Annotation_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Annotation_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace image_annotation

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_SHARED_INTERNAL_H_