// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/range/mojo/range.mojom-shared-internal.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ws {
namespace mojom {
namespace internal {
class CandidateWindowProperties_Data;
class CandidateWindowEntry_Data;
class TextInputState_Data;
class TextInputClientData_Data;
class SessionDetails_Data;

struct CandidateWindowPosition_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class  CandidateWindowProperties_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CandidateWindowProperties_Data));
      new (data()) CandidateWindowProperties_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CandidateWindowProperties_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CandidateWindowProperties_Data>(index_);
    }
    CandidateWindowProperties_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t page_size;
  uint8_t vertical : 1;
  uint8_t auxiliary_text_visible : 1;
  uint8_t cursor_visible : 1;
  uint8_t pad3_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> auxiliary_text;
  int32_t cursor_position;
  int32_t window_position;

 private:
  CandidateWindowProperties_Data();
  ~CandidateWindowProperties_Data() = delete;
};
static_assert(sizeof(CandidateWindowProperties_Data) == 32,
              "Bad sizeof(CandidateWindowProperties_Data)");
// Used by CandidateWindowProperties::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CandidateWindowProperties_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CandidateWindowProperties_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CandidateWindowProperties_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CandidateWindowProperties_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CandidateWindowProperties_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CandidateWindowEntry_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CandidateWindowEntry_Data));
      new (data()) CandidateWindowEntry_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CandidateWindowEntry_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CandidateWindowEntry_Data>(index_);
    }
    CandidateWindowEntry_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> label;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> annotation;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> description_title;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> description_body;

 private:
  CandidateWindowEntry_Data();
  ~CandidateWindowEntry_Data() = delete;
};
static_assert(sizeof(CandidateWindowEntry_Data) == 48,
              "Bad sizeof(CandidateWindowEntry_Data)");
// Used by CandidateWindowEntry::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CandidateWindowEntry_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CandidateWindowEntry_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CandidateWindowEntry_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CandidateWindowEntry_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CandidateWindowEntry_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TextInputState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputState_Data));
      new (data()) TextInputState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputState_Data>(index_);
    }
    TextInputState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t text_input_type;
  int32_t text_input_mode;
  int32_t text_direction;
  int32_t text_input_flags;

 private:
  TextInputState_Data();
  ~TextInputState_Data() = delete;
};
static_assert(sizeof(TextInputState_Data) == 24,
              "Bad sizeof(TextInputState_Data)");
// Used by TextInputState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TextInputState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TextInputState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TextInputState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TextInputState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TextInputState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TextInputClientData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextInputClientData_Data));
      new (data()) TextInputClientData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextInputClientData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextInputClientData_Data>(index_);
    }
    TextInputClientData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> text_range;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> text;
  uint8_t has_composition_text : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> composition_text_range;
  mojo::internal::Pointer<::gfx::mojom::internal::Range_Data> editable_selection_range;
  mojo::internal::Pointer<mojo::internal::Array_Data<bool>> edit_command_enabled;

 private:
  TextInputClientData_Data();
  ~TextInputClientData_Data() = delete;
};
static_assert(sizeof(TextInputClientData_Data) == 56,
              "Bad sizeof(TextInputClientData_Data)");
// Used by TextInputClientData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TextInputClientData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TextInputClientData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TextInputClientData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TextInputClientData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TextInputClientData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SessionDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SessionDetails_Data));
      new (data()) SessionDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SessionDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SessionDetails_Data>(index_);
    }
    SessionDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::TextInputState_Data> state;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> caret_bounds;
  mojo::internal::Pointer<internal::TextInputClientData_Data> data;
  int32_t focus_reason;
  uint8_t should_do_learning : 1;
  uint8_t pad4_[3];
  int64_t client_source_for_metrics;

 private:
  SessionDetails_Data();
  ~SessionDetails_Data() = delete;
};
static_assert(sizeof(SessionDetails_Data) == 48,
              "Bad sizeof(SessionDetails_Data)");
// Used by SessionDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SessionDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SessionDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SessionDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SessionDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SessionDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ws

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_SHARED_INTERNAL_H_