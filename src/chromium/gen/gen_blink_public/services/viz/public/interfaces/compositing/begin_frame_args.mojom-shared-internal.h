// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {
class BeginFrameArgs_Data;
class BeginFrameAck_Data;

struct BeginFrameArgsType_Data {
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
class  BeginFrameArgs_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BeginFrameArgs_Data));
      new (data()) BeginFrameArgs_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BeginFrameArgs_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BeginFrameArgs_Data>(index_);
    }
    BeginFrameArgs_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> frame_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> deadline;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> interval;
  uint64_t source_id;
  uint64_t sequence_number;
  int64_t trace_id;
  int32_t type;
  uint8_t on_critical_path : 1;
  uint8_t animate_only : 1;
  uint8_t padfinal_[3];

 private:
  BeginFrameArgs_Data();
  ~BeginFrameArgs_Data() = delete;
};
static_assert(sizeof(BeginFrameArgs_Data) == 64,
              "Bad sizeof(BeginFrameArgs_Data)");
// Used by BeginFrameArgs::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BeginFrameArgs_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BeginFrameArgs_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BeginFrameArgs_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BeginFrameArgs_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BeginFrameArgs_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  BeginFrameAck_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BeginFrameAck_Data));
      new (data()) BeginFrameAck_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BeginFrameAck_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BeginFrameAck_Data>(index_);
    }
    BeginFrameAck_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t source_id;
  uint64_t sequence_number;
  int64_t trace_id;
  uint8_t has_damage : 1;
  uint8_t padfinal_[7];

 private:
  BeginFrameAck_Data();
  ~BeginFrameAck_Data() = delete;
};
static_assert(sizeof(BeginFrameAck_Data) == 40,
              "Bad sizeof(BeginFrameAck_Data)");
// Used by BeginFrameAck::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BeginFrameAck_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BeginFrameAck_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BeginFrameAck_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BeginFrameAck_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BeginFrameAck_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_BEGIN_FRAME_ARGS_MOJOM_SHARED_INTERNAL_H_