// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/vr/public/mojom/vr_service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace device {
namespace mojom {
namespace internal {
class XRRuntimeSessionOptions_Data;
class XRGamepadButton_Data;
class XRGamepad_Data;
class XRGamepadData_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntimeSessionOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntimeSessionOptions_Data));
      new (data()) XRRuntimeSessionOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntimeSessionOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntimeSessionOptions_Data>(index_);
    }
    XRRuntimeSessionOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t immersive : 1;
  uint8_t environment_integration : 1;
  uint8_t use_legacy_webvr_render_path : 1;
  uint8_t pad2_[3];
  int32_t render_process_id;
  int32_t render_frame_id;
  uint8_t padfinal_[4];

 private:
  XRRuntimeSessionOptions_Data();
  ~XRRuntimeSessionOptions_Data() = delete;
};
static_assert(sizeof(XRRuntimeSessionOptions_Data) == 24,
              "Bad sizeof(XRRuntimeSessionOptions_Data)");
// Used by XRRuntimeSessionOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRRuntimeSessionOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRRuntimeSessionOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRRuntimeSessionOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRRuntimeSessionOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRRuntimeSessionOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRGamepadButton_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRGamepadButton_Data));
      new (data()) XRGamepadButton_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRGamepadButton_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRGamepadButton_Data>(index_);
    }
    XRGamepadButton_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t pressed : 1;
  uint8_t touched : 1;
  uint8_t pad1_[7];
  double value;

 private:
  XRGamepadButton_Data();
  ~XRGamepadButton_Data() = delete;
};
static_assert(sizeof(XRGamepadButton_Data) == 24,
              "Bad sizeof(XRGamepadButton_Data)");
// Used by XRGamepadButton::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRGamepadButton_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRGamepadButton_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRGamepadButton_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRGamepadButton_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRGamepadButton_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRGamepad_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRGamepad_Data));
      new (data()) XRGamepad_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRGamepad_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRGamepad_Data>(index_);
    }
    XRGamepad_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t can_provide_orientation : 1;
  uint8_t can_provide_position : 1;
  uint8_t pad1_[3];
  int32_t hand;
  mojo::internal::Pointer<mojo::internal::Array_Data<double>> axes;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRGamepadButton_Data>>> buttons;
  mojo::internal::Pointer<::device::mojom::internal::VRPose_Data> pose;
  uint32_t controller_id;
  uint8_t pad6_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> timestamp;

 private:
  XRGamepad_Data();
  ~XRGamepad_Data() = delete;
};
static_assert(sizeof(XRGamepad_Data) == 56,
              "Bad sizeof(XRGamepad_Data)");
// Used by XRGamepad::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRGamepad_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRGamepad_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRGamepad_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRGamepad_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRGamepad_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRGamepadData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRGamepadData_Data));
      new (data()) XRGamepadData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRGamepadData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRGamepadData_Data>(index_);
    }
    XRGamepadData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRGamepad_Data>>> gamepads;

 private:
  XRGamepadData_Data();
  ~XRGamepadData_Data() = delete;
};
static_assert(sizeof(XRGamepadData_Data) == 16,
              "Bad sizeof(XRGamepadData_Data)");
// Used by XRGamepadData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRGamepadData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRGamepadData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRGamepadData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRGamepadData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRGamepadData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_SHARED_INTERNAL_H_