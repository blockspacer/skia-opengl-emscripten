// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_INTERNAL_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/events/mojo/event_constants.mojom-shared-internal.h"
#include "ui/events/mojo/keyboard_codes.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/latency/mojo/latency_info.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace ui {
namespace mojom {
namespace internal {
class KeyData_Data;
class LocationData_Data;
class GestureData_Data;
class ScrollData_Data;
class PointerDetails_Data;
class MouseData_Data;
class TouchData_Data;
class Event_Data;

#pragma pack(push, 1)
class  KeyData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyData_Data));
      new (data()) KeyData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyData_Data>(index_);
    }
    KeyData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t key_code;
  uint32_t dom_code;
  int32_t dom_key;
  uint8_t is_char : 1;
  uint8_t padfinal_[3];

 private:
  KeyData_Data();
  ~KeyData_Data() = delete;
};
static_assert(sizeof(KeyData_Data) == 24,
              "Bad sizeof(KeyData_Data)");
// Used by KeyData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct KeyData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  KeyData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~KeyData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    KeyData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    KeyData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  LocationData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LocationData_Data));
      new (data()) LocationData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LocationData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LocationData_Data>(index_);
    }
    LocationData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> relative_location;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> root_location;

 private:
  LocationData_Data();
  ~LocationData_Data() = delete;
};
static_assert(sizeof(LocationData_Data) == 24,
              "Bad sizeof(LocationData_Data)");
// Used by LocationData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LocationData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LocationData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LocationData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LocationData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LocationData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  GestureData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GestureData_Data));
      new (data()) GestureData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GestureData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GestureData_Data>(index_);
    }
    GestureData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LocationData_Data> location;
  int32_t device_type;
  float scale;

 private:
  GestureData_Data();
  ~GestureData_Data() = delete;
};
static_assert(sizeof(GestureData_Data) == 24,
              "Bad sizeof(GestureData_Data)");
// Used by GestureData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct GestureData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  GestureData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~GestureData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    GestureData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    GestureData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ScrollData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScrollData_Data));
      new (data()) ScrollData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScrollData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScrollData_Data>(index_);
    }
    ScrollData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::LocationData_Data> location;
  float x_offset;
  float y_offset;
  float x_offset_ordinal;
  float y_offset_ordinal;
  int32_t finger_count;
  int32_t momentum_phase;
  int32_t scroll_event_phase;
  uint8_t padfinal_[4];

 private:
  ScrollData_Data();
  ~ScrollData_Data() = delete;
};
static_assert(sizeof(ScrollData_Data) == 48,
              "Bad sizeof(ScrollData_Data)");
// Used by ScrollData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ScrollData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ScrollData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ScrollData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ScrollData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ScrollData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PointerDetails_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PointerDetails_Data));
      new (data()) PointerDetails_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PointerDetails_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PointerDetails_Data>(index_);
    }
    PointerDetails_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t pointer_type;
  float radius_x;
  float radius_y;
  float force;
  float tilt_x;
  float tilt_y;
  float tangential_pressure;
  float twist;
  int32_t id;
  int32_t offset_x;
  int32_t offset_y;
  uint8_t padfinal_[4];

 private:
  PointerDetails_Data();
  ~PointerDetails_Data() = delete;
};
static_assert(sizeof(PointerDetails_Data) == 56,
              "Bad sizeof(PointerDetails_Data)");
// Used by PointerDetails::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PointerDetails_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PointerDetails_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PointerDetails_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PointerDetails_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PointerDetails_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  MouseData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MouseData_Data));
      new (data()) MouseData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MouseData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MouseData_Data>(index_);
    }
    MouseData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t changed_button_flags;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::LocationData_Data> location;
  mojo::internal::Pointer<internal::PointerDetails_Data> pointer_details;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2d_Data> wheel_offset;

 private:
  MouseData_Data();
  ~MouseData_Data() = delete;
};
static_assert(sizeof(MouseData_Data) == 40,
              "Bad sizeof(MouseData_Data)");
// Used by MouseData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MouseData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MouseData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MouseData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    MouseData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MouseData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TouchData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TouchData_Data));
      new (data()) TouchData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TouchData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TouchData_Data>(index_);
    }
    TouchData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t may_cause_scrolling : 1;
  uint8_t hovering : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<internal::LocationData_Data> location;
  mojo::internal::Pointer<internal::PointerDetails_Data> pointer_details;

 private:
  TouchData_Data();
  ~TouchData_Data() = delete;
};
static_assert(sizeof(TouchData_Data) == 32,
              "Bad sizeof(TouchData_Data)");
// Used by TouchData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TouchData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TouchData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TouchData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TouchData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TouchData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Event_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Event_Data));
      new (data()) Event_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Event_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Event_Data>(index_);
    }
    Event_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  int32_t flags;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> time_stamp;
  mojo::internal::Pointer<::ui::mojom::internal::LatencyInfo_Data> latency;
  mojo::internal::Pointer<internal::KeyData_Data> key_data;
  mojo::internal::Pointer<internal::GestureData_Data> gesture_data;
  mojo::internal::Pointer<internal::ScrollData_Data> scroll_data;
  mojo::internal::Pointer<internal::TouchData_Data> touch_data;
  mojo::internal::Pointer<internal::MouseData_Data> mouse_data;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>>>> properties;

 private:
  Event_Data();
  ~Event_Data() = delete;
};
static_assert(sizeof(Event_Data) == 80,
              "Bad sizeof(Event_Data)");
// Used by Event::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Event_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Event_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Event_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Event_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Event_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_SHARED_INTERNAL_H_