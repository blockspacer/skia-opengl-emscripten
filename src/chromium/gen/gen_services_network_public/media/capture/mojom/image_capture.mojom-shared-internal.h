// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_INTERNAL_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_INTERNAL_H_

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
namespace media {
namespace mojom {
namespace internal {
class Range_Data;
class PhotoState_Data;
class Point2D_Data;
class PhotoSettings_Data;
class Blob_Data;

struct MeteringMode_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
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

struct RedEyeReduction_Data {
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

struct FillLightMode_Data {
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
class  Range_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Range_Data));
      new (data()) Range_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Range_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Range_Data>(index_);
    }
    Range_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double max;
  double min;
  double current;
  double step;

 private:
  Range_Data();
  ~Range_Data() = delete;
};
static_assert(sizeof(Range_Data) == 40,
              "Bad sizeof(Range_Data)");
// Used by Range::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Range_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Range_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Range_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Range_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Range_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PhotoState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PhotoState_Data));
      new (data()) PhotoState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PhotoState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PhotoState_Data>(index_);
    }
    PhotoState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_white_balance_modes;
  int32_t current_white_balance_mode;
  int32_t current_exposure_mode;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_exposure_modes;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_focus_modes;
  int32_t current_focus_mode;
  uint8_t supports_torch : 1;
  uint8_t torch : 1;
  uint8_t pad7_[3];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Point2D_Data>>> points_of_interest;
  mojo::internal::Pointer<internal::Range_Data> exposure_compensation;
  mojo::internal::Pointer<internal::Range_Data> exposure_time;
  mojo::internal::Pointer<internal::Range_Data> color_temperature;
  mojo::internal::Pointer<internal::Range_Data> iso;
  mojo::internal::Pointer<internal::Range_Data> brightness;
  mojo::internal::Pointer<internal::Range_Data> contrast;
  mojo::internal::Pointer<internal::Range_Data> saturation;
  mojo::internal::Pointer<internal::Range_Data> sharpness;
  mojo::internal::Pointer<internal::Range_Data> focus_distance;
  mojo::internal::Pointer<internal::Range_Data> zoom;
  int32_t red_eye_reduction;
  uint8_t pad19_[4];
  mojo::internal::Pointer<internal::Range_Data> height;
  mojo::internal::Pointer<internal::Range_Data> width;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> fill_light_mode;

 private:
  PhotoState_Data();
  ~PhotoState_Data() = delete;
};
static_assert(sizeof(PhotoState_Data) == 168,
              "Bad sizeof(PhotoState_Data)");
// Used by PhotoState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PhotoState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PhotoState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PhotoState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PhotoState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PhotoState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Point2D_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Point2D_Data));
      new (data()) Point2D_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Point2D_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Point2D_Data>(index_);
    }
    Point2D_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double x;
  double y;

 private:
  Point2D_Data();
  ~Point2D_Data() = delete;
};
static_assert(sizeof(Point2D_Data) == 24,
              "Bad sizeof(Point2D_Data)");
// Used by Point2D::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Point2D_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Point2D_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Point2D_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Point2D_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Point2D_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PhotoSettings_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PhotoSettings_Data));
      new (data()) PhotoSettings_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PhotoSettings_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PhotoSettings_Data>(index_);
    }
    PhotoSettings_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_white_balance_mode : 1;
  uint8_t has_exposure_mode : 1;
  uint8_t has_focus_mode : 1;
  uint8_t has_exposure_compensation : 1;
  uint8_t has_exposure_time : 1;
  uint8_t has_color_temperature : 1;
  uint8_t has_iso : 1;
  uint8_t has_brightness : 1;
  uint8_t has_contrast : 1;
  uint8_t has_saturation : 1;
  uint8_t has_sharpness : 1;
  uint8_t has_focus_distance : 1;
  uint8_t has_zoom : 1;
  uint8_t has_torch : 1;
  uint8_t torch : 1;
  uint8_t has_fill_light_mode : 1;
  uint8_t has_width : 1;
  uint8_t has_height : 1;
  uint8_t has_red_eye_reduction : 1;
  uint8_t red_eye_reduction : 1;
  uint8_t pad19_[1];
  int32_t white_balance_mode;
  int32_t exposure_mode;
  int32_t focus_mode;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::Point2D_Data>>> points_of_interest;
  double exposure_compensation;
  double exposure_time;
  double color_temperature;
  double iso;
  double brightness;
  double contrast;
  double saturation;
  double sharpness;
  double focus_distance;
  double zoom;
  int32_t fill_light_mode;
  uint8_t pad34_[4];
  double width;
  double height;

 private:
  PhotoSettings_Data();
  ~PhotoSettings_Data() = delete;
};
static_assert(sizeof(PhotoSettings_Data) == 136,
              "Bad sizeof(PhotoSettings_Data)");
// Used by PhotoSettings::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PhotoSettings_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PhotoSettings_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PhotoSettings_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PhotoSettings_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PhotoSettings_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Blob_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_Data));
      new (data()) Blob_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_Data>(index_);
    }
    Blob_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> mime_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  Blob_Data();
  ~Blob_Data() = delete;
};
static_assert(sizeof(Blob_Data) == 24,
              "Bad sizeof(Blob_Data)");
// Used by Blob::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Blob_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Blob_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Blob_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    Blob_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Blob_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_SHARED_INTERNAL_H_