// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_PARAMS_DATA_H_
#define DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace device {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_RequestDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_RequestDevice_Params_Data));
      new (data()) VRService_RequestDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_RequestDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_RequestDevice_Params_Data>(index_);
    }
    VRService_RequestDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRService_RequestDevice_Params_Data();
  ~VRService_RequestDevice_Params_Data() = delete;
};
static_assert(sizeof(VRService_RequestDevice_Params_Data) == 8,
              "Bad sizeof(VRService_RequestDevice_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_RequestDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_RequestDevice_ResponseParams_Data));
      new (data()) VRService_RequestDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_RequestDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_RequestDevice_ResponseParams_Data>(index_);
    }
    VRService_RequestDevice_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data device;

 private:
  VRService_RequestDevice_ResponseParams_Data();
  ~VRService_RequestDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRService_RequestDevice_ResponseParams_Data) == 16,
              "Bad sizeof(VRService_RequestDevice_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_SetClient_Params_Data));
      new (data()) VRService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_SetClient_Params_Data>(index_);
    }
    VRService_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  VRService_SetClient_Params_Data();
  ~VRService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(VRService_SetClient_Params_Data) == 16,
              "Bad sizeof(VRService_SetClient_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRService_SetListeningForActivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRService_SetListeningForActivate_Params_Data));
      new (data()) VRService_SetListeningForActivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRService_SetListeningForActivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRService_SetListeningForActivate_Params_Data>(index_);
    }
    VRService_SetListeningForActivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  VRService_SetListeningForActivate_Params_Data();
  ~VRService_SetListeningForActivate_Params_Data() = delete;
};
static_assert(sizeof(VRService_SetListeningForActivate_Params_Data) == 16,
              "Bad sizeof(VRService_SetListeningForActivate_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRServiceClient_OnDeviceChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRServiceClient_OnDeviceChanged_Params_Data));
      new (data()) VRServiceClient_OnDeviceChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRServiceClient_OnDeviceChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRServiceClient_OnDeviceChanged_Params_Data>(index_);
    }
    VRServiceClient_OnDeviceChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VRServiceClient_OnDeviceChanged_Params_Data();
  ~VRServiceClient_OnDeviceChanged_Params_Data() = delete;
};
static_assert(sizeof(VRServiceClient_OnDeviceChanged_Params_Data) == 8,
              "Bad sizeof(VRServiceClient_OnDeviceChanged_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_RequestSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_RequestSession_Params_Data));
      new (data()) XRDevice_RequestSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_RequestSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_RequestSession_Params_Data>(index_);
    }
    XRDevice_RequestSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRSessionOptions_Data> options;
  uint8_t triggered_by_displayactive : 1;
  uint8_t padfinal_[7];

 private:
  XRDevice_RequestSession_Params_Data();
  ~XRDevice_RequestSession_Params_Data() = delete;
};
static_assert(sizeof(XRDevice_RequestSession_Params_Data) == 24,
              "Bad sizeof(XRDevice_RequestSession_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_RequestSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_RequestSession_ResponseParams_Data));
      new (data()) XRDevice_RequestSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_RequestSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_RequestSession_ResponseParams_Data>(index_);
    }
    XRDevice_RequestSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRSession_Data> session;

 private:
  XRDevice_RequestSession_ResponseParams_Data();
  ~XRDevice_RequestSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRDevice_RequestSession_ResponseParams_Data) == 16,
              "Bad sizeof(XRDevice_RequestSession_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_SupportsSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_SupportsSession_Params_Data));
      new (data()) XRDevice_SupportsSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_SupportsSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_SupportsSession_Params_Data>(index_);
    }
    XRDevice_SupportsSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRSessionOptions_Data> options;

 private:
  XRDevice_SupportsSession_Params_Data();
  ~XRDevice_SupportsSession_Params_Data() = delete;
};
static_assert(sizeof(XRDevice_SupportsSession_Params_Data) == 16,
              "Bad sizeof(XRDevice_SupportsSession_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_SupportsSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_SupportsSession_ResponseParams_Data));
      new (data()) XRDevice_SupportsSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_SupportsSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_SupportsSession_ResponseParams_Data>(index_);
    }
    XRDevice_SupportsSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t supports_session : 1;
  uint8_t padfinal_[7];

 private:
  XRDevice_SupportsSession_ResponseParams_Data();
  ~XRDevice_SupportsSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRDevice_SupportsSession_ResponseParams_Data) == 16,
              "Bad sizeof(XRDevice_SupportsSession_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_GetImmersiveVRDisplayInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_GetImmersiveVRDisplayInfo_Params_Data));
      new (data()) XRDevice_GetImmersiveVRDisplayInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_GetImmersiveVRDisplayInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_GetImmersiveVRDisplayInfo_Params_Data>(index_);
    }
    XRDevice_GetImmersiveVRDisplayInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRDevice_GetImmersiveVRDisplayInfo_Params_Data();
  ~XRDevice_GetImmersiveVRDisplayInfo_Params_Data() = delete;
};
static_assert(sizeof(XRDevice_GetImmersiveVRDisplayInfo_Params_Data) == 8,
              "Bad sizeof(XRDevice_GetImmersiveVRDisplayInfo_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data));
      new (data()) XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data>(index_);
    }
    XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRDisplayInfo_Data> info;

 private:
  XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data();
  ~XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data) == 16,
              "Bad sizeof(XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRDevice_ExitPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRDevice_ExitPresent_Params_Data));
      new (data()) XRDevice_ExitPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRDevice_ExitPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRDevice_ExitPresent_Params_Data>(index_);
    }
    XRDevice_ExitPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRDevice_ExitPresent_Params_Data();
  ~XRDevice_ExitPresent_Params_Data() = delete;
};
static_assert(sizeof(XRDevice_ExitPresent_Params_Data) == 8,
              "Bad sizeof(XRDevice_ExitPresent_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XREnvironmentIntegrationProvider_RequestHitTest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XREnvironmentIntegrationProvider_RequestHitTest_Params_Data));
      new (data()) XREnvironmentIntegrationProvider_RequestHitTest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XREnvironmentIntegrationProvider_RequestHitTest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XREnvironmentIntegrationProvider_RequestHitTest_Params_Data>(index_);
    }
    XREnvironmentIntegrationProvider_RequestHitTest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRRay_Data> ray;

 private:
  XREnvironmentIntegrationProvider_RequestHitTest_Params_Data();
  ~XREnvironmentIntegrationProvider_RequestHitTest_Params_Data() = delete;
};
static_assert(sizeof(XREnvironmentIntegrationProvider_RequestHitTest_Params_Data) == 16,
              "Bad sizeof(XREnvironmentIntegrationProvider_RequestHitTest_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data));
      new (data()) XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data>(index_);
    }
    XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::XRHitResult_Data>>> results;

 private:
  XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data();
  ~XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data() = delete;
};
static_assert(sizeof(XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data) == 16,
              "Bad sizeof(XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRFrameDataProvider_GetFrameData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRFrameDataProvider_GetFrameData_Params_Data));
      new (data()) XRFrameDataProvider_GetFrameData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRFrameDataProvider_GetFrameData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRFrameDataProvider_GetFrameData_Params_Data>(index_);
    }
    XRFrameDataProvider_GetFrameData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRFrameDataRequestOptions_Data> options;

 private:
  XRFrameDataProvider_GetFrameData_Params_Data();
  ~XRFrameDataProvider_GetFrameData_Params_Data() = delete;
};
static_assert(sizeof(XRFrameDataProvider_GetFrameData_Params_Data) == 16,
              "Bad sizeof(XRFrameDataProvider_GetFrameData_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRFrameDataProvider_GetFrameData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRFrameDataProvider_GetFrameData_ResponseParams_Data));
      new (data()) XRFrameDataProvider_GetFrameData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRFrameDataProvider_GetFrameData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRFrameDataProvider_GetFrameData_ResponseParams_Data>(index_);
    }
    XRFrameDataProvider_GetFrameData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRFrameData_Data> frame_data;

 private:
  XRFrameDataProvider_GetFrameData_ResponseParams_Data();
  ~XRFrameDataProvider_GetFrameData_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRFrameDataProvider_GetFrameData_ResponseParams_Data) == 16,
              "Bad sizeof(XRFrameDataProvider_GetFrameData_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data));
      new (data()) XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data>(index_);
    }
    XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedEndpointHandle_Data environment_provider;
  uint8_t padfinal_[4];

 private:
  XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data();
  ~XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data() = delete;
};
static_assert(sizeof(XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data) == 16,
              "Bad sizeof(XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationProvider_UpdateLayerBounds_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationProvider_UpdateLayerBounds_Params_Data));
      new (data()) XRPresentationProvider_UpdateLayerBounds_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationProvider_UpdateLayerBounds_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationProvider_UpdateLayerBounds_Params_Data>(index_);
    }
    XRPresentationProvider_UpdateLayerBounds_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> left_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> right_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> source_size;

 private:
  XRPresentationProvider_UpdateLayerBounds_Params_Data();
  ~XRPresentationProvider_UpdateLayerBounds_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationProvider_UpdateLayerBounds_Params_Data) == 40,
              "Bad sizeof(XRPresentationProvider_UpdateLayerBounds_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationProvider_SubmitFrameMissing_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationProvider_SubmitFrameMissing_Params_Data));
      new (data()) XRPresentationProvider_SubmitFrameMissing_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationProvider_SubmitFrameMissing_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationProvider_SubmitFrameMissing_Params_Data>(index_);
    }
    XRPresentationProvider_SubmitFrameMissing_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;

 private:
  XRPresentationProvider_SubmitFrameMissing_Params_Data();
  ~XRPresentationProvider_SubmitFrameMissing_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationProvider_SubmitFrameMissing_Params_Data) == 24,
              "Bad sizeof(XRPresentationProvider_SubmitFrameMissing_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationProvider_SubmitFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationProvider_SubmitFrame_Params_Data));
      new (data()) XRPresentationProvider_SubmitFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationProvider_SubmitFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationProvider_SubmitFrame_Params_Data>(index_);
    }
    XRPresentationProvider_SubmitFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data> mailbox_holder;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_waited;

 private:
  XRPresentationProvider_SubmitFrame_Params_Data();
  ~XRPresentationProvider_SubmitFrame_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationProvider_SubmitFrame_Params_Data) == 32,
              "Bad sizeof(XRPresentationProvider_SubmitFrame_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data));
      new (data()) XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data>(index_);
    }
    XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frameId;
  uint8_t pad0_[2];
  mojo::internal::Handle_Data texture;

 private:
  XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data();
  ~XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data) == 16,
              "Bad sizeof(XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data));
      new (data()) XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data>(index_);
    }
    XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frameId;
  uint8_t pad0_[6];
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time_waited;

 private:
  XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data();
  ~XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data) == 32,
              "Bad sizeof(XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationClient_OnSubmitFrameTransferred_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationClient_OnSubmitFrameTransferred_Params_Data));
      new (data()) XRPresentationClient_OnSubmitFrameTransferred_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationClient_OnSubmitFrameTransferred_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationClient_OnSubmitFrameTransferred_Params_Data>(index_);
    }
    XRPresentationClient_OnSubmitFrameTransferred_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  XRPresentationClient_OnSubmitFrameTransferred_Params_Data();
  ~XRPresentationClient_OnSubmitFrameTransferred_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationClient_OnSubmitFrameTransferred_Params_Data) == 16,
              "Bad sizeof(XRPresentationClient_OnSubmitFrameTransferred_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationClient_OnSubmitFrameRendered_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationClient_OnSubmitFrameRendered_Params_Data));
      new (data()) XRPresentationClient_OnSubmitFrameRendered_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationClient_OnSubmitFrameRendered_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationClient_OnSubmitFrameRendered_Params_Data>(index_);
    }
    XRPresentationClient_OnSubmitFrameRendered_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRPresentationClient_OnSubmitFrameRendered_Params_Data();
  ~XRPresentationClient_OnSubmitFrameRendered_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationClient_OnSubmitFrameRendered_Params_Data) == 8,
              "Bad sizeof(XRPresentationClient_OnSubmitFrameRendered_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRPresentationClient_OnSubmitFrameGpuFence_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRPresentationClient_OnSubmitFrameGpuFence_Params_Data));
      new (data()) XRPresentationClient_OnSubmitFrameGpuFence_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRPresentationClient_OnSubmitFrameGpuFence_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRPresentationClient_OnSubmitFrameGpuFence_Params_Data>(index_);
    }
    XRPresentationClient_OnSubmitFrameGpuFence_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuFenceHandle_Data> gpu_fence_handle;

 private:
  XRPresentationClient_OnSubmitFrameGpuFence_Params_Data();
  ~XRPresentationClient_OnSubmitFrameGpuFence_Params_Data() = delete;
};
static_assert(sizeof(XRPresentationClient_OnSubmitFrameGpuFence_Params_Data) == 16,
              "Bad sizeof(XRPresentationClient_OnSubmitFrameGpuFence_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSessionClient_OnChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSessionClient_OnChanged_Params_Data));
      new (data()) XRSessionClient_OnChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSessionClient_OnChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSessionClient_OnChanged_Params_Data>(index_);
    }
    XRSessionClient_OnChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::VRDisplayInfo_Data> display;

 private:
  XRSessionClient_OnChanged_Params_Data();
  ~XRSessionClient_OnChanged_Params_Data() = delete;
};
static_assert(sizeof(XRSessionClient_OnChanged_Params_Data) == 16,
              "Bad sizeof(XRSessionClient_OnChanged_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSessionClient_OnExitPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSessionClient_OnExitPresent_Params_Data));
      new (data()) XRSessionClient_OnExitPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSessionClient_OnExitPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSessionClient_OnExitPresent_Params_Data>(index_);
    }
    XRSessionClient_OnExitPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRSessionClient_OnExitPresent_Params_Data();
  ~XRSessionClient_OnExitPresent_Params_Data() = delete;
};
static_assert(sizeof(XRSessionClient_OnExitPresent_Params_Data) == 8,
              "Bad sizeof(XRSessionClient_OnExitPresent_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSessionClient_OnBlur_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSessionClient_OnBlur_Params_Data));
      new (data()) XRSessionClient_OnBlur_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSessionClient_OnBlur_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSessionClient_OnBlur_Params_Data>(index_);
    }
    XRSessionClient_OnBlur_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRSessionClient_OnBlur_Params_Data();
  ~XRSessionClient_OnBlur_Params_Data() = delete;
};
static_assert(sizeof(XRSessionClient_OnBlur_Params_Data) == 8,
              "Bad sizeof(XRSessionClient_OnBlur_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSessionClient_OnFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSessionClient_OnFocus_Params_Data));
      new (data()) XRSessionClient_OnFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSessionClient_OnFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSessionClient_OnFocus_Params_Data>(index_);
    }
    XRSessionClient_OnFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRSessionClient_OnFocus_Params_Data();
  ~XRSessionClient_OnFocus_Params_Data() = delete;
};
static_assert(sizeof(XRSessionClient_OnFocus_Params_Data) == 8,
              "Bad sizeof(XRSessionClient_OnFocus_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnActivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnActivate_Params_Data));
      new (data()) VRDisplayClient_OnActivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnActivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnActivate_Params_Data>(index_);
    }
    VRDisplayClient_OnActivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  VRDisplayClient_OnActivate_Params_Data();
  ~VRDisplayClient_OnActivate_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnActivate_Params_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnActivate_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnActivate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnActivate_ResponseParams_Data));
      new (data()) VRDisplayClient_OnActivate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnActivate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnActivate_ResponseParams_Data>(index_);
    }
    VRDisplayClient_OnActivate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t will_not_present : 1;
  uint8_t padfinal_[7];

 private:
  VRDisplayClient_OnActivate_ResponseParams_Data();
  ~VRDisplayClient_OnActivate_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnActivate_ResponseParams_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnActivate_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) VRDisplayClient_OnDeactivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VRDisplayClient_OnDeactivate_Params_Data));
      new (data()) VRDisplayClient_OnDeactivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VRDisplayClient_OnDeactivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VRDisplayClient_OnDeactivate_Params_Data>(index_);
    }
    VRDisplayClient_OnDeactivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  VRDisplayClient_OnDeactivate_Params_Data();
  ~VRDisplayClient_OnDeactivate_Params_Data() = delete;
};
static_assert(sizeof(VRDisplayClient_OnDeactivate_Params_Data) == 16,
              "Bad sizeof(VRDisplayClient_OnDeactivate_Params_Data)");

}  // namespace internal
class VRService_RequestDevice_ParamsDataView {
 public:
  VRService_RequestDevice_ParamsDataView() {}

  VRService_RequestDevice_ParamsDataView(
      internal::VRService_RequestDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRService_RequestDevice_Params_Data* data_ = nullptr;
};

class VRService_RequestDevice_ResponseParamsDataView {
 public:
  VRService_RequestDevice_ResponseParamsDataView() {}

  VRService_RequestDevice_ResponseParamsDataView(
      internal::VRService_RequestDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDevice() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRDevicePtrDataView>(
            &data_->device, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VRService_RequestDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRService_SetClient_ParamsDataView {
 public:
  VRService_SetClient_ParamsDataView() {}

  VRService_SetClient_ParamsDataView(
      internal::VRService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRServiceClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VRService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRService_SetListeningForActivate_ParamsDataView {
 public:
  VRService_SetListeningForActivate_ParamsDataView() {}

  VRService_SetListeningForActivate_ParamsDataView(
      internal::VRService_SetListeningForActivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::VRDisplayClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VRService_SetListeningForActivate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VRServiceClient_OnDeviceChanged_ParamsDataView {
 public:
  VRServiceClient_OnDeviceChanged_ParamsDataView() {}

  VRServiceClient_OnDeviceChanged_ParamsDataView(
      internal::VRServiceClient_OnDeviceChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VRServiceClient_OnDeviceChanged_Params_Data* data_ = nullptr;
};

class XRDevice_RequestSession_ParamsDataView {
 public:
  XRDevice_RequestSession_ParamsDataView() {}

  XRDevice_RequestSession_ParamsDataView(
      internal::XRDevice_RequestSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      XRSessionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::XRSessionOptionsDataView>(
        pointer, output, context_);
  }
  bool triggered_by_displayactive() const {
    return data_->triggered_by_displayactive;
  }
 private:
  internal::XRDevice_RequestSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRDevice_RequestSession_ResponseParamsDataView {
 public:
  XRDevice_RequestSession_ResponseParamsDataView() {}

  XRDevice_RequestSession_ResponseParamsDataView(
      internal::XRDevice_RequestSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionDataView(
      XRSessionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSession(UserType* output) {
    auto* pointer = data_->session.Get();
    return mojo::internal::Deserialize<::device::mojom::XRSessionDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRDevice_RequestSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRDevice_SupportsSession_ParamsDataView {
 public:
  XRDevice_SupportsSession_ParamsDataView() {}

  XRDevice_SupportsSession_ParamsDataView(
      internal::XRDevice_SupportsSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      XRSessionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::XRSessionOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRDevice_SupportsSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRDevice_SupportsSession_ResponseParamsDataView {
 public:
  XRDevice_SupportsSession_ResponseParamsDataView() {}

  XRDevice_SupportsSession_ResponseParamsDataView(
      internal::XRDevice_SupportsSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool supports_session() const {
    return data_->supports_session;
  }
 private:
  internal::XRDevice_SupportsSession_ResponseParams_Data* data_ = nullptr;
};

class XRDevice_GetImmersiveVRDisplayInfo_ParamsDataView {
 public:
  XRDevice_GetImmersiveVRDisplayInfo_ParamsDataView() {}

  XRDevice_GetImmersiveVRDisplayInfo_ParamsDataView(
      internal::XRDevice_GetImmersiveVRDisplayInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRDevice_GetImmersiveVRDisplayInfo_Params_Data* data_ = nullptr;
};

class XRDevice_GetImmersiveVRDisplayInfo_ResponseParamsDataView {
 public:
  XRDevice_GetImmersiveVRDisplayInfo_ResponseParamsDataView() {}

  XRDevice_GetImmersiveVRDisplayInfo_ResponseParamsDataView(
      internal::XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRDevice_GetImmersiveVRDisplayInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRDevice_ExitPresent_ParamsDataView {
 public:
  XRDevice_ExitPresent_ParamsDataView() {}

  XRDevice_ExitPresent_ParamsDataView(
      internal::XRDevice_ExitPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRDevice_ExitPresent_Params_Data* data_ = nullptr;
};

class XREnvironmentIntegrationProvider_RequestHitTest_ParamsDataView {
 public:
  XREnvironmentIntegrationProvider_RequestHitTest_ParamsDataView() {}

  XREnvironmentIntegrationProvider_RequestHitTest_ParamsDataView(
      internal::XREnvironmentIntegrationProvider_RequestHitTest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRayDataView(
      XRRayDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRay(UserType* output) {
    auto* pointer = data_->ray.Get();
    return mojo::internal::Deserialize<::device::mojom::XRRayDataView>(
        pointer, output, context_);
  }
 private:
  internal::XREnvironmentIntegrationProvider_RequestHitTest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XREnvironmentIntegrationProvider_RequestHitTest_ResponseParamsDataView {
 public:
  XREnvironmentIntegrationProvider_RequestHitTest_ResponseParamsDataView() {}

  XREnvironmentIntegrationProvider_RequestHitTest_ResponseParamsDataView(
      internal::XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<XRHitResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::XRHitResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::XREnvironmentIntegrationProvider_RequestHitTest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRFrameDataProvider_GetFrameData_ParamsDataView {
 public:
  XRFrameDataProvider_GetFrameData_ParamsDataView() {}

  XRFrameDataProvider_GetFrameData_ParamsDataView(
      internal::XRFrameDataProvider_GetFrameData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      XRFrameDataRequestOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::XRFrameDataRequestOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRFrameDataProvider_GetFrameData_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRFrameDataProvider_GetFrameData_ResponseParamsDataView {
 public:
  XRFrameDataProvider_GetFrameData_ResponseParamsDataView() {}

  XRFrameDataProvider_GetFrameData_ResponseParamsDataView(
      internal::XRFrameDataProvider_GetFrameData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataDataView(
      XRFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameData(UserType* output) {
    auto* pointer = data_->frame_data.Get();
    return mojo::internal::Deserialize<::device::mojom::XRFrameDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRFrameDataProvider_GetFrameData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRFrameDataProvider_GetEnvironmentIntegrationProvider_ParamsDataView {
 public:
  XRFrameDataProvider_GetEnvironmentIntegrationProvider_ParamsDataView() {}

  XRFrameDataProvider_GetEnvironmentIntegrationProvider_ParamsDataView(
      internal::XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeEnvironmentProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XREnvironmentIntegrationProviderAssociatedRequestDataView>(
            &data_->environment_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::XRFrameDataProvider_GetEnvironmentIntegrationProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationProvider_UpdateLayerBounds_ParamsDataView {
 public:
  XRPresentationProvider_UpdateLayerBounds_ParamsDataView() {}

  XRPresentationProvider_UpdateLayerBounds_ParamsDataView(
      internal::XRPresentationProvider_UpdateLayerBounds_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetLeftBoundsDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLeftBounds(UserType* output) {
    auto* pointer = data_->left_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetRightBoundsDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRightBounds(UserType* output) {
    auto* pointer = data_->right_bounds.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFDataView>(
        pointer, output, context_);
  }
  inline void GetSourceSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceSize(UserType* output) {
    auto* pointer = data_->source_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRPresentationProvider_UpdateLayerBounds_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationProvider_SubmitFrameMissing_ParamsDataView {
 public:
  XRPresentationProvider_SubmitFrameMissing_ParamsDataView() {}

  XRPresentationProvider_SubmitFrameMissing_ParamsDataView(
      internal::XRPresentationProvider_SubmitFrameMissing_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRPresentationProvider_SubmitFrameMissing_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationProvider_SubmitFrame_ParamsDataView {
 public:
  XRPresentationProvider_SubmitFrame_ParamsDataView() {}

  XRPresentationProvider_SubmitFrame_ParamsDataView(
      internal::XRPresentationProvider_SubmitFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  inline void GetMailboxHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMailboxHolder(UserType* output) {
    auto* pointer = data_->mailbox_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderDataView>(
        pointer, output, context_);
  }
  inline void GetTimeWaitedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeWaited(UserType* output) {
    auto* pointer = data_->time_waited.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRPresentationProvider_SubmitFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView {
 public:
  XRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView() {}

  XRPresentationProvider_SubmitFrameWithTextureHandle_ParamsDataView(
      internal::XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frameId() const {
    return data_->frameId;
  }
  mojo::ScopedHandle TakeTexture() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->texture, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::XRPresentationProvider_SubmitFrameWithTextureHandle_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView {
 public:
  XRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView() {}

  XRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView(
      internal::XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frameId() const {
    return data_->frameId;
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
  inline void GetTimeWaitedDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeWaited(UserType* output) {
    auto* pointer = data_->time_waited.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRPresentationProvider_SubmitFrameDrawnIntoTexture_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRPresentationClient_OnSubmitFrameTransferred_ParamsDataView {
 public:
  XRPresentationClient_OnSubmitFrameTransferred_ParamsDataView() {}

  XRPresentationClient_OnSubmitFrameTransferred_ParamsDataView(
      internal::XRPresentationClient_OnSubmitFrameTransferred_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::XRPresentationClient_OnSubmitFrameTransferred_Params_Data* data_ = nullptr;
};

class XRPresentationClient_OnSubmitFrameRendered_ParamsDataView {
 public:
  XRPresentationClient_OnSubmitFrameRendered_ParamsDataView() {}

  XRPresentationClient_OnSubmitFrameRendered_ParamsDataView(
      internal::XRPresentationClient_OnSubmitFrameRendered_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRPresentationClient_OnSubmitFrameRendered_Params_Data* data_ = nullptr;
};

class XRPresentationClient_OnSubmitFrameGpuFence_ParamsDataView {
 public:
  XRPresentationClient_OnSubmitFrameGpuFence_ParamsDataView() {}

  XRPresentationClient_OnSubmitFrameGpuFence_ParamsDataView(
      internal::XRPresentationClient_OnSubmitFrameGpuFence_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGpuFenceHandleDataView(
      ::gfx::mojom::GpuFenceHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpuFenceHandle(UserType* output) {
    auto* pointer = data_->gpu_fence_handle.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuFenceHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRPresentationClient_OnSubmitFrameGpuFence_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRSessionClient_OnChanged_ParamsDataView {
 public:
  XRSessionClient_OnChanged_ParamsDataView() {}

  XRSessionClient_OnChanged_ParamsDataView(
      internal::XRSessionClient_OnChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayDataView(
      VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) {
    auto* pointer = data_->display.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRSessionClient_OnChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRSessionClient_OnExitPresent_ParamsDataView {
 public:
  XRSessionClient_OnExitPresent_ParamsDataView() {}

  XRSessionClient_OnExitPresent_ParamsDataView(
      internal::XRSessionClient_OnExitPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRSessionClient_OnExitPresent_Params_Data* data_ = nullptr;
};

class XRSessionClient_OnBlur_ParamsDataView {
 public:
  XRSessionClient_OnBlur_ParamsDataView() {}

  XRSessionClient_OnBlur_ParamsDataView(
      internal::XRSessionClient_OnBlur_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRSessionClient_OnBlur_Params_Data* data_ = nullptr;
};

class XRSessionClient_OnFocus_ParamsDataView {
 public:
  XRSessionClient_OnFocus_ParamsDataView() {}

  XRSessionClient_OnFocus_ParamsDataView(
      internal::XRSessionClient_OnFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRSessionClient_OnFocus_Params_Data* data_ = nullptr;
};

class VRDisplayClient_OnActivate_ParamsDataView {
 public:
  VRDisplayClient_OnActivate_ParamsDataView() {}

  VRDisplayClient_OnActivate_ParamsDataView(
      internal::VRDisplayClient_OnActivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayEventReason>(
        data_value, output);
  }

  VRDisplayEventReason reason() const {
    return static_cast<VRDisplayEventReason>(data_->reason);
  }
 private:
  internal::VRDisplayClient_OnActivate_Params_Data* data_ = nullptr;
};

class VRDisplayClient_OnActivate_ResponseParamsDataView {
 public:
  VRDisplayClient_OnActivate_ResponseParamsDataView() {}

  VRDisplayClient_OnActivate_ResponseParamsDataView(
      internal::VRDisplayClient_OnActivate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool will_not_present() const {
    return data_->will_not_present;
  }
 private:
  internal::VRDisplayClient_OnActivate_ResponseParams_Data* data_ = nullptr;
};

class VRDisplayClient_OnDeactivate_ParamsDataView {
 public:
  VRDisplayClient_OnDeactivate_ParamsDataView() {}

  VRDisplayClient_OnDeactivate_ParamsDataView(
      internal::VRDisplayClient_OnDeactivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayEventReason>(
        data_value, output);
  }

  VRDisplayEventReason reason() const {
    return static_cast<VRDisplayEventReason>(data_->reason);
  }
 private:
  internal::VRDisplayClient_OnDeactivate_Params_Data* data_ = nullptr;
};












inline void XRDevice_RequestSession_ParamsDataView::GetOptionsDataView(
    XRSessionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = XRSessionOptionsDataView(pointer, context_);
}


inline void XRDevice_RequestSession_ResponseParamsDataView::GetSessionDataView(
    XRSessionDataView* output) {
  auto pointer = data_->session.Get();
  *output = XRSessionDataView(pointer, context_);
}


inline void XRDevice_SupportsSession_ParamsDataView::GetOptionsDataView(
    XRSessionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = XRSessionOptionsDataView(pointer, context_);
}






inline void XRDevice_GetImmersiveVRDisplayInfo_ResponseParamsDataView::GetInfoDataView(
    VRDisplayInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = VRDisplayInfoDataView(pointer, context_);
}




inline void XREnvironmentIntegrationProvider_RequestHitTest_ParamsDataView::GetRayDataView(
    XRRayDataView* output) {
  auto pointer = data_->ray.Get();
  *output = XRRayDataView(pointer, context_);
}


inline void XREnvironmentIntegrationProvider_RequestHitTest_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<XRHitResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<XRHitResultDataView>(pointer, context_);
}


inline void XRFrameDataProvider_GetFrameData_ParamsDataView::GetOptionsDataView(
    XRFrameDataRequestOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = XRFrameDataRequestOptionsDataView(pointer, context_);
}


inline void XRFrameDataProvider_GetFrameData_ResponseParamsDataView::GetFrameDataDataView(
    XRFrameDataDataView* output) {
  auto pointer = data_->frame_data.Get();
  *output = XRFrameDataDataView(pointer, context_);
}




inline void XRPresentationProvider_UpdateLayerBounds_ParamsDataView::GetLeftBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->left_bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void XRPresentationProvider_UpdateLayerBounds_ParamsDataView::GetRightBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->right_bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void XRPresentationProvider_UpdateLayerBounds_ParamsDataView::GetSourceSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->source_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void XRPresentationProvider_SubmitFrameMissing_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}


inline void XRPresentationProvider_SubmitFrame_ParamsDataView::GetMailboxHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}
inline void XRPresentationProvider_SubmitFrame_ParamsDataView::GetTimeWaitedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_waited.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void XRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}
inline void XRPresentationProvider_SubmitFrameDrawnIntoTexture_ParamsDataView::GetTimeWaitedDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time_waited.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}






inline void XRPresentationClient_OnSubmitFrameGpuFence_ParamsDataView::GetGpuFenceHandleDataView(
    ::gfx::mojom::GpuFenceHandleDataView* output) {
  auto pointer = data_->gpu_fence_handle.Get();
  *output = ::gfx::mojom::GpuFenceHandleDataView(pointer, context_);
}


inline void XRSessionClient_OnChanged_ParamsDataView::GetDisplayDataView(
    VRDisplayInfoDataView* output) {
  auto pointer = data_->display.Get();
  *output = VRDisplayInfoDataView(pointer, context_);
}













}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // DEVICE_VR_PUBLIC_MOJOM_VR_SERVICE_MOJOM_PARAMS_DATA_H_