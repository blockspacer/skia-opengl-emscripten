// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "device/gamepad/public/mojom/gamepad.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "ui/display/mojo/display.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/gpu_fence_handle.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
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
class XRSessionOptions_Data;
class XRSession_Data;
class XRPresentationConnection_Data;
class XRInputSourceDescription_Data;
class XRInputSourceState_Data;
class VRFieldOfView_Data;
class VRPose_Data;
class XRRay_Data;
class XRHitResult_Data;
class VRDisplayCapabilities_Data;
class VREyeParameters_Data;
class VRStageParameters_Data;
class VRDisplayInfo_Data;
class XRPresentationTransportOptions_Data;
class XRPlanePointData_Data;
class XRPlaneData_Data;
class XRFrameData_Data;
class XRFrameDataRequestOptions_Data;

struct XRDeviceId_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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

struct XRHandedness_Data {
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

struct XRTargetRayMode_Data {
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

struct XRPresentationTransportMethod_Data {
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

struct XRPlaneOrientation_Data {
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

struct VRDisplayEventReason_Data {
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

#pragma pack(push, 1)
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSessionOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSessionOptions_Data));
      new (data()) XRSessionOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSessionOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSessionOptions_Data>(index_);
    }
    XRSessionOptions_Data* operator->() { return data(); }

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
  uint8_t padfinal_[7];

 private:
  XRSessionOptions_Data();
  ~XRSessionOptions_Data() = delete;
};
static_assert(sizeof(XRSessionOptions_Data) == 16,
              "Bad sizeof(XRSessionOptions_Data)");
// Used by XRSessionOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRSessionOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRSessionOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRSessionOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRSessionOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRSessionOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSession_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSession_Data));
      new (data()) XRSession_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSession_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSession_Data>(index_);
    }
    XRSession_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data data_provider;
  mojo::internal::Handle_Data client_request;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::VRDisplayInfo_Data> display_info;
  mojo::internal::Pointer<internal::XRPresentationConnection_Data> submit_frame_sink;

 private:
  XRSession_Data();
  ~XRSession_Data() = delete;
};
static_assert(sizeof(XRSession_Data) == 40,
              "Bad sizeof(XRSession_Data)");
// Used by XRSession::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRSession_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRSession_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRSession_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRSession_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRSession_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationConnection_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationConnection_Data));
      new (data()) XRPresentationConnection_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationConnection_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationConnection_Data>(index_);
    }
    XRPresentationConnection_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data provider;
  mojo::internal::Handle_Data client_request;
  uint8_t pad1_[4];
  mojo::internal::Pointer<internal::XRPresentationTransportOptions_Data> transport_options;

 private:
  XRPresentationConnection_Data();
  ~XRPresentationConnection_Data() = delete;
};
static_assert(sizeof(XRPresentationConnection_Data) == 32,
              "Bad sizeof(XRPresentationConnection_Data)");
// Used by XRPresentationConnection::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRPresentationConnection_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRPresentationConnection_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRPresentationConnection_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRPresentationConnection_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRPresentationConnection_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRInputSourceDescription_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRInputSourceDescription_Data));
      new (data()) XRInputSourceDescription_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRInputSourceDescription_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRInputSourceDescription_Data>(index_);
    }
    XRInputSourceDescription_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t target_ray_mode;
  int32_t handedness;
  uint8_t emulated_position : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> pointer_offset;

 private:
  XRInputSourceDescription_Data();
  ~XRInputSourceDescription_Data() = delete;
};
static_assert(sizeof(XRInputSourceDescription_Data) == 32,
              "Bad sizeof(XRInputSourceDescription_Data)");
// Used by XRInputSourceDescription::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRInputSourceDescription_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRInputSourceDescription_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRInputSourceDescription_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRInputSourceDescription_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRInputSourceDescription_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRInputSourceState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRInputSourceState_Data));
      new (data()) XRInputSourceState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRInputSourceState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRInputSourceState_Data>(index_);
    }
    XRInputSourceState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t source_id;
  uint8_t primary_input_pressed : 1;
  uint8_t primary_input_clicked : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<internal::XRInputSourceDescription_Data> description;
  mojo::internal::Pointer<::gfx::mojom::internal::Transform_Data> grip;
  mojo::internal::Pointer<::device::mojom::internal::Gamepad_Data> gamepad;

 private:
  XRInputSourceState_Data();
  ~XRInputSourceState_Data() = delete;
};
static_assert(sizeof(XRInputSourceState_Data) == 40,
              "Bad sizeof(XRInputSourceState_Data)");
// Used by XRInputSourceState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRInputSourceState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRInputSourceState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRInputSourceState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRInputSourceState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRInputSourceState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRFieldOfView_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRFieldOfView_Data));
      new (data()) VRFieldOfView_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRFieldOfView_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRFieldOfView_Data>(index_);
    }
    VRFieldOfView_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float upDegrees;
  float downDegrees;
  float leftDegrees;
  float rightDegrees;

 private:
  VRFieldOfView_Data();
  ~VRFieldOfView_Data() = delete;
};
static_assert(sizeof(VRFieldOfView_Data) == 24,
              "Bad sizeof(VRFieldOfView_Data)");
// Used by VRFieldOfView::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRFieldOfView_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRFieldOfView_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRFieldOfView_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRFieldOfView_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRFieldOfView_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRPose_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRPose_Data));
      new (data()) VRPose_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRPose_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRPose_Data>(index_);
    }
    VRPose_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> orientation;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> position;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> angularVelocity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> linearVelocity;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> angularAcceleration;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> linearAcceleration;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRInputSourceState_Data>>> input_state;
  uint8_t pose_reset : 1;
  uint8_t padfinal_[7];

 private:
  VRPose_Data();
  ~VRPose_Data() = delete;
};
static_assert(sizeof(VRPose_Data) == 72,
              "Bad sizeof(VRPose_Data)");
// Used by VRPose::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRPose_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRPose_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRPose_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRPose_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRPose_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRay_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRay_Data));
      new (data()) XRRay_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRay_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRay_Data>(index_);
    }
    XRRay_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Point3F_Data> origin;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector3dF_Data> direction;

 private:
  XRRay_Data();
  ~XRRay_Data() = delete;
};
static_assert(sizeof(XRRay_Data) == 24,
              "Bad sizeof(XRRay_Data)");
// Used by XRRay::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRRay_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRRay_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRRay_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRRay_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRRay_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRHitResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRHitResult_Data));
      new (data()) XRHitResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRHitResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRHitResult_Data>(index_);
    }
    XRHitResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> hit_matrix;

 private:
  XRHitResult_Data();
  ~XRHitResult_Data() = delete;
};
static_assert(sizeof(XRHitResult_Data) == 16,
              "Bad sizeof(XRHitResult_Data)");
// Used by XRHitResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRHitResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRHitResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRHitResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRHitResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRHitResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayCapabilities_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayCapabilities_Data));
      new (data()) VRDisplayCapabilities_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayCapabilities_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayCapabilities_Data>(index_);
    }
    VRDisplayCapabilities_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t hasPosition : 1;
  uint8_t hasExternalDisplay : 1;
  uint8_t canPresent : 1;
  uint8_t canProvideEnvironmentIntegration : 1;
  uint8_t padfinal_[7];

 private:
  VRDisplayCapabilities_Data();
  ~VRDisplayCapabilities_Data() = delete;
};
static_assert(sizeof(VRDisplayCapabilities_Data) == 16,
              "Bad sizeof(VRDisplayCapabilities_Data)");
// Used by VRDisplayCapabilities::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRDisplayCapabilities_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRDisplayCapabilities_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRDisplayCapabilities_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRDisplayCapabilities_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRDisplayCapabilities_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VREyeParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VREyeParameters_Data));
      new (data()) VREyeParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VREyeParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VREyeParameters_Data>(index_);
    }
    VREyeParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRFieldOfView_Data> fieldOfView;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> offset;
  uint32_t renderWidth;
  uint32_t renderHeight;

 private:
  VREyeParameters_Data();
  ~VREyeParameters_Data() = delete;
};
static_assert(sizeof(VREyeParameters_Data) == 32,
              "Bad sizeof(VREyeParameters_Data)");
// Used by VREyeParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VREyeParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VREyeParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VREyeParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VREyeParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VREyeParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRStageParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRStageParameters_Data));
      new (data()) VRStageParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRStageParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRStageParameters_Data>(index_);
    }
    VRStageParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> standingTransform;
  float sizeX;
  float sizeZ;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::Point3F_Data>>> bounds;

 private:
  VRStageParameters_Data();
  ~VRStageParameters_Data() = delete;
};
static_assert(sizeof(VRStageParameters_Data) == 32,
              "Bad sizeof(VRStageParameters_Data)");
// Used by VRStageParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRStageParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRStageParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRStageParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRStageParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRStageParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayInfo_Data));
      new (data()) VRDisplayInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayInfo_Data>(index_);
    }
    VRDisplayInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  float webvr_default_framebuffer_scale;
  mojo::internal::Pointer<mojo::internal::String_Data> displayName;
  mojo::internal::Pointer<internal::VRDisplayCapabilities_Data> capabilities;
  mojo::internal::Pointer<internal::VRStageParameters_Data> stageParameters;
  mojo::internal::Pointer<internal::VREyeParameters_Data> leftEye;
  mojo::internal::Pointer<internal::VREyeParameters_Data> rightEye;
  float webxr_default_framebuffer_scale;
  uint8_t padfinal_[4];

 private:
  VRDisplayInfo_Data();
  ~VRDisplayInfo_Data() = delete;
};
static_assert(sizeof(VRDisplayInfo_Data) == 64,
              "Bad sizeof(VRDisplayInfo_Data)");
// Used by VRDisplayInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VRDisplayInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VRDisplayInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VRDisplayInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VRDisplayInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VRDisplayInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationTransportOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationTransportOptions_Data));
      new (data()) XRPresentationTransportOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationTransportOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationTransportOptions_Data>(index_);
    }
    XRPresentationTransportOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t transport_method;
  uint8_t wait_for_transfer_notification : 1;
  uint8_t wait_for_render_notification : 1;
  uint8_t wait_for_gpu_fence : 1;
  uint8_t padfinal_[3];

 private:
  XRPresentationTransportOptions_Data();
  ~XRPresentationTransportOptions_Data() = delete;
};
static_assert(sizeof(XRPresentationTransportOptions_Data) == 16,
              "Bad sizeof(XRPresentationTransportOptions_Data)");
// Used by XRPresentationTransportOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRPresentationTransportOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRPresentationTransportOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRPresentationTransportOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRPresentationTransportOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRPresentationTransportOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPlanePointData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPlanePointData_Data));
      new (data()) XRPlanePointData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPlanePointData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPlanePointData_Data>(index_);
    }
    XRPlanePointData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  float z;

 private:
  XRPlanePointData_Data();
  ~XRPlanePointData_Data() = delete;
};
static_assert(sizeof(XRPlanePointData_Data) == 16,
              "Bad sizeof(XRPlanePointData_Data)");
// Used by XRPlanePointData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRPlanePointData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRPlanePointData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRPlanePointData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRPlanePointData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRPlanePointData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPlaneData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPlaneData_Data));
      new (data()) XRPlaneData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPlaneData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPlaneData_Data>(index_);
    }
    XRPlaneData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t id;
  int32_t orientation;
  mojo::internal::Pointer<internal::VRPose_Data> pose;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRPlanePointData_Data>>> polygon;

 private:
  XRPlaneData_Data();
  ~XRPlaneData_Data() = delete;
};
static_assert(sizeof(XRPlaneData_Data) == 32,
              "Bad sizeof(XRPlaneData_Data)");
// Used by XRPlaneData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRPlaneData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRPlaneData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRPlaneData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRPlaneData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRPlaneData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRFrameData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRFrameData_Data));
      new (data()) XRFrameData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRFrameData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRFrameData_Data>(index_);
    }
    XRFrameData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRPose_Data> pose;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_delta;
  mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data> buffer_holder;
  int16_t frame_id;
  uint8_t stage_parameters_updated : 1;
  uint8_t pad4_[5];
  mojo::internal::Pointer<internal::VREyeParameters_Data> left_eye;
  mojo::internal::Pointer<internal::VREyeParameters_Data> right_eye;
  mojo::internal::Pointer<internal::VRStageParameters_Data> stage_parameters;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRPlaneData_Data>>> detected_planes;

 private:
  XRFrameData_Data();
  ~XRFrameData_Data() = delete;
};
static_assert(sizeof(XRFrameData_Data) == 72,
              "Bad sizeof(XRFrameData_Data)");
// Used by XRFrameData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRFrameData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRFrameData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRFrameData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRFrameData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRFrameData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRFrameDataRequestOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRFrameDataRequestOptions_Data));
      new (data()) XRFrameDataRequestOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRFrameDataRequestOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRFrameDataRequestOptions_Data>(index_);
    }
    XRFrameDataRequestOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t include_plane_data : 1;
  uint8_t padfinal_[7];

 private:
  XRFrameDataRequestOptions_Data();
  ~XRFrameDataRequestOptions_Data() = delete;
};
static_assert(sizeof(XRFrameDataRequestOptions_Data) == 16,
              "Bad sizeof(XRFrameDataRequestOptions_Data)");
// Used by XRFrameDataRequestOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct XRFrameDataRequestOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  XRFrameDataRequestOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~XRFrameDataRequestOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    XRFrameDataRequestOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    XRFrameDataRequestOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_SHARED_INTERNAL_H_