// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_SHARED_INTERNAL_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_SHARED_INTERNAL_H_

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
namespace gfx {
namespace mojom {
namespace internal {
class Point_Data;
class PointF_Data;
class Point3F_Data;
class Size_Data;
class SizeF_Data;
class Rect_Data;
class RectF_Data;
class Insets_Data;
class InsetsF_Data;
class Vector2d_Data;
class Vector2dF_Data;
class Vector3dF_Data;
class ScrollOffset_Data;

#pragma pack(push, 1)
class  Point_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Point_Data));
      new (data()) Point_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Point_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Point_Data>(index_);
    }
    Point_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;

 private:
  Point_Data();
  ~Point_Data() = delete;
};
static_assert(sizeof(Point_Data) == 16,
              "Bad sizeof(Point_Data)");
// Used by Point::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Point_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Point_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Point_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Point_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Point_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PointF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PointF_Data));
      new (data()) PointF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PointF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PointF_Data>(index_);
    }
    PointF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;

 private:
  PointF_Data();
  ~PointF_Data() = delete;
};
static_assert(sizeof(PointF_Data) == 16,
              "Bad sizeof(PointF_Data)");
// Used by PointF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PointF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PointF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PointF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PointF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PointF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Point3F_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Point3F_Data));
      new (data()) Point3F_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Point3F_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Point3F_Data>(index_);
    }
    Point3F_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  float z;
  uint8_t padfinal_[4];

 private:
  Point3F_Data();
  ~Point3F_Data() = delete;
};
static_assert(sizeof(Point3F_Data) == 24,
              "Bad sizeof(Point3F_Data)");
// Used by Point3F::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Point3F_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Point3F_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Point3F_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Point3F_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Point3F_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Size_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Size_Data));
      new (data()) Size_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Size_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Size_Data>(index_);
    }
    Size_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t width;
  int32_t height;

 private:
  Size_Data();
  ~Size_Data() = delete;
};
static_assert(sizeof(Size_Data) == 16,
              "Bad sizeof(Size_Data)");
// Used by Size::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Size_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Size_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Size_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Size_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Size_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SizeF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SizeF_Data));
      new (data()) SizeF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SizeF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SizeF_Data>(index_);
    }
    SizeF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float width;
  float height;

 private:
  SizeF_Data();
  ~SizeF_Data() = delete;
};
static_assert(sizeof(SizeF_Data) == 16,
              "Bad sizeof(SizeF_Data)");
// Used by SizeF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SizeF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SizeF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SizeF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SizeF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SizeF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Rect_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Rect_Data));
      new (data()) Rect_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Rect_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Rect_Data>(index_);
    }
    Rect_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;

 private:
  Rect_Data();
  ~Rect_Data() = delete;
};
static_assert(sizeof(Rect_Data) == 24,
              "Bad sizeof(Rect_Data)");
// Used by Rect::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Rect_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Rect_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Rect_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Rect_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Rect_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RectF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RectF_Data));
      new (data()) RectF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RectF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RectF_Data>(index_);
    }
    RectF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  float width;
  float height;

 private:
  RectF_Data();
  ~RectF_Data() = delete;
};
static_assert(sizeof(RectF_Data) == 24,
              "Bad sizeof(RectF_Data)");
// Used by RectF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RectF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RectF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RectF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RectF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RectF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Insets_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Insets_Data));
      new (data()) Insets_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Insets_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Insets_Data>(index_);
    }
    Insets_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t top;
  int32_t left;
  int32_t bottom;
  int32_t right;

 private:
  Insets_Data();
  ~Insets_Data() = delete;
};
static_assert(sizeof(Insets_Data) == 24,
              "Bad sizeof(Insets_Data)");
// Used by Insets::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Insets_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Insets_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Insets_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Insets_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Insets_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  InsetsF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(InsetsF_Data));
      new (data()) InsetsF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    InsetsF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<InsetsF_Data>(index_);
    }
    InsetsF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float top;
  float left;
  float bottom;
  float right;

 private:
  InsetsF_Data();
  ~InsetsF_Data() = delete;
};
static_assert(sizeof(InsetsF_Data) == 24,
              "Bad sizeof(InsetsF_Data)");
// Used by InsetsF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct InsetsF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  InsetsF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~InsetsF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    InsetsF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    InsetsF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Vector2d_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Vector2d_Data));
      new (data()) Vector2d_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Vector2d_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Vector2d_Data>(index_);
    }
    Vector2d_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t x;
  int32_t y;

 private:
  Vector2d_Data();
  ~Vector2d_Data() = delete;
};
static_assert(sizeof(Vector2d_Data) == 16,
              "Bad sizeof(Vector2d_Data)");
// Used by Vector2d::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Vector2d_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Vector2d_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Vector2d_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Vector2d_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Vector2d_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Vector2dF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Vector2dF_Data));
      new (data()) Vector2dF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Vector2dF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Vector2dF_Data>(index_);
    }
    Vector2dF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;

 private:
  Vector2dF_Data();
  ~Vector2dF_Data() = delete;
};
static_assert(sizeof(Vector2dF_Data) == 16,
              "Bad sizeof(Vector2dF_Data)");
// Used by Vector2dF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Vector2dF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Vector2dF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Vector2dF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Vector2dF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Vector2dF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Vector3dF_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Vector3dF_Data));
      new (data()) Vector3dF_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Vector3dF_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Vector3dF_Data>(index_);
    }
    Vector3dF_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;
  float z;
  uint8_t padfinal_[4];

 private:
  Vector3dF_Data();
  ~Vector3dF_Data() = delete;
};
static_assert(sizeof(Vector3dF_Data) == 24,
              "Bad sizeof(Vector3dF_Data)");
// Used by Vector3dF::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Vector3dF_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Vector3dF_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Vector3dF_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Vector3dF_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Vector3dF_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ScrollOffset_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScrollOffset_Data));
      new (data()) ScrollOffset_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScrollOffset_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScrollOffset_Data>(index_);
    }
    ScrollOffset_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float y;

 private:
  ScrollOffset_Data();
  ~ScrollOffset_Data() = delete;
};
static_assert(sizeof(ScrollOffset_Data) == 16,
              "Bad sizeof(ScrollOffset_Data)");
// Used by ScrollOffset::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ScrollOffset_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ScrollOffset_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ScrollOffset_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ScrollOffset_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ScrollOffset_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_SHARED_INTERNAL_H_