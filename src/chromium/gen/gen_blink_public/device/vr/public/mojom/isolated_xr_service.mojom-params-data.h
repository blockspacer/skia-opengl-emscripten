// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_PARAMS_DATA_H_
#define DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRSessionController_SetFrameDataRestricted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRSessionController_SetFrameDataRestricted_Params_Data));
      new (data()) XRSessionController_SetFrameDataRestricted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRSessionController_SetFrameDataRestricted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRSessionController_SetFrameDataRestricted_Params_Data>(index_);
    }
    XRSessionController_SetFrameDataRestricted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t restricted : 1;
  uint8_t padfinal_[7];

 private:
  XRSessionController_SetFrameDataRestricted_Params_Data();
  ~XRSessionController_SetFrameDataRestricted_Params_Data() = delete;
};
static_assert(sizeof(XRSessionController_SetFrameDataRestricted_Params_Data) == 16,
              "Bad sizeof(XRSessionController_SetFrameDataRestricted_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data));
      new (data()) XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data>(index_);
    }
    XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::VRDisplayInfo_Data> display_info;

 private:
  XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data();
  ~XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data() = delete;
};
static_assert(sizeof(XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data) == 16,
              "Bad sizeof(XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntimeEventListener_OnDeviceActivated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntimeEventListener_OnDeviceActivated_Params_Data));
      new (data()) XRRuntimeEventListener_OnDeviceActivated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntimeEventListener_OnDeviceActivated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntimeEventListener_OnDeviceActivated_Params_Data>(index_);
    }
    XRRuntimeEventListener_OnDeviceActivated_Params_Data* operator->() { return data(); }

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
  XRRuntimeEventListener_OnDeviceActivated_Params_Data();
  ~XRRuntimeEventListener_OnDeviceActivated_Params_Data() = delete;
};
static_assert(sizeof(XRRuntimeEventListener_OnDeviceActivated_Params_Data) == 16,
              "Bad sizeof(XRRuntimeEventListener_OnDeviceActivated_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data));
      new (data()) XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data>(index_);
    }
    XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data* operator->() { return data(); }

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
  XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data();
  ~XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data) == 16,
              "Bad sizeof(XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntimeEventListener_OnDeviceIdle_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntimeEventListener_OnDeviceIdle_Params_Data));
      new (data()) XRRuntimeEventListener_OnDeviceIdle_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntimeEventListener_OnDeviceIdle_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntimeEventListener_OnDeviceIdle_Params_Data>(index_);
    }
    XRRuntimeEventListener_OnDeviceIdle_Params_Data* operator->() { return data(); }

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
  XRRuntimeEventListener_OnDeviceIdle_Params_Data();
  ~XRRuntimeEventListener_OnDeviceIdle_Params_Data() = delete;
};
static_assert(sizeof(XRRuntimeEventListener_OnDeviceIdle_Params_Data) == 16,
              "Bad sizeof(XRRuntimeEventListener_OnDeviceIdle_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntimeEventListener_OnExitPresent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntimeEventListener_OnExitPresent_Params_Data));
      new (data()) XRRuntimeEventListener_OnExitPresent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntimeEventListener_OnExitPresent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntimeEventListener_OnExitPresent_Params_Data>(index_);
    }
    XRRuntimeEventListener_OnExitPresent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRRuntimeEventListener_OnExitPresent_Params_Data();
  ~XRRuntimeEventListener_OnExitPresent_Params_Data() = delete;
};
static_assert(sizeof(XRRuntimeEventListener_OnExitPresent_Params_Data) == 8,
              "Bad sizeof(XRRuntimeEventListener_OnExitPresent_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_RequestSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_RequestSession_Params_Data));
      new (data()) XRRuntime_RequestSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_RequestSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_RequestSession_Params_Data>(index_);
    }
    XRRuntime_RequestSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRRuntimeSessionOptions_Data> options;

 private:
  XRRuntime_RequestSession_Params_Data();
  ~XRRuntime_RequestSession_Params_Data() = delete;
};
static_assert(sizeof(XRRuntime_RequestSession_Params_Data) == 16,
              "Bad sizeof(XRRuntime_RequestSession_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_RequestSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_RequestSession_ResponseParams_Data));
      new (data()) XRRuntime_RequestSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_RequestSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_RequestSession_ResponseParams_Data>(index_);
    }
    XRRuntime_RequestSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::XRSession_Data> session;
  mojo::internal::Interface_Data controller;

 private:
  XRRuntime_RequestSession_ResponseParams_Data();
  ~XRRuntime_RequestSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRRuntime_RequestSession_ResponseParams_Data) == 24,
              "Bad sizeof(XRRuntime_RequestSession_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_ListenToDeviceChanges_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_ListenToDeviceChanges_Params_Data));
      new (data()) XRRuntime_ListenToDeviceChanges_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_ListenToDeviceChanges_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_ListenToDeviceChanges_Params_Data>(index_);
    }
    XRRuntime_ListenToDeviceChanges_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data listener;

 private:
  XRRuntime_ListenToDeviceChanges_Params_Data();
  ~XRRuntime_ListenToDeviceChanges_Params_Data() = delete;
};
static_assert(sizeof(XRRuntime_ListenToDeviceChanges_Params_Data) == 16,
              "Bad sizeof(XRRuntime_ListenToDeviceChanges_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_ListenToDeviceChanges_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_ListenToDeviceChanges_ResponseParams_Data));
      new (data()) XRRuntime_ListenToDeviceChanges_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_ListenToDeviceChanges_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_ListenToDeviceChanges_ResponseParams_Data>(index_);
    }
    XRRuntime_ListenToDeviceChanges_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::VRDisplayInfo_Data> display_info;

 private:
  XRRuntime_ListenToDeviceChanges_ResponseParams_Data();
  ~XRRuntime_ListenToDeviceChanges_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRRuntime_ListenToDeviceChanges_ResponseParams_Data) == 16,
              "Bad sizeof(XRRuntime_ListenToDeviceChanges_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_EnsureInitialized_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_EnsureInitialized_Params_Data));
      new (data()) XRRuntime_EnsureInitialized_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_EnsureInitialized_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_EnsureInitialized_Params_Data>(index_);
    }
    XRRuntime_EnsureInitialized_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_process_id;
  int32_t render_frame_id;

 private:
  XRRuntime_EnsureInitialized_Params_Data();
  ~XRRuntime_EnsureInitialized_Params_Data() = delete;
};
static_assert(sizeof(XRRuntime_EnsureInitialized_Params_Data) == 16,
              "Bad sizeof(XRRuntime_EnsureInitialized_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_EnsureInitialized_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_EnsureInitialized_ResponseParams_Data));
      new (data()) XRRuntime_EnsureInitialized_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_EnsureInitialized_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_EnsureInitialized_ResponseParams_Data>(index_);
    }
    XRRuntime_EnsureInitialized_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  XRRuntime_EnsureInitialized_ResponseParams_Data();
  ~XRRuntime_EnsureInitialized_ResponseParams_Data() = delete;
};
static_assert(sizeof(XRRuntime_EnsureInitialized_ResponseParams_Data) == 8,
              "Bad sizeof(XRRuntime_EnsureInitialized_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_SetListeningForActivate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_SetListeningForActivate_Params_Data));
      new (data()) XRRuntime_SetListeningForActivate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_SetListeningForActivate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_SetListeningForActivate_Params_Data>(index_);
    }
    XRRuntime_SetListeningForActivate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t listen_for_activation : 1;
  uint8_t padfinal_[7];

 private:
  XRRuntime_SetListeningForActivate_Params_Data();
  ~XRRuntime_SetListeningForActivate_Params_Data() = delete;
};
static_assert(sizeof(XRRuntime_SetListeningForActivate_Params_Data) == 16,
              "Bad sizeof(XRRuntime_SetListeningForActivate_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRRuntime_SetInlinePosesEnabled_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRRuntime_SetInlinePosesEnabled_Params_Data));
      new (data()) XRRuntime_SetInlinePosesEnabled_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRRuntime_SetInlinePosesEnabled_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRRuntime_SetInlinePosesEnabled_Params_Data>(index_);
    }
    XRRuntime_SetInlinePosesEnabled_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enable : 1;
  uint8_t padfinal_[7];

 private:
  XRRuntime_SetInlinePosesEnabled_Params_Data();
  ~XRRuntime_SetInlinePosesEnabled_Params_Data() = delete;
};
static_assert(sizeof(XRRuntime_SetInlinePosesEnabled_Params_Data) == 16,
              "Bad sizeof(XRRuntime_SetInlinePosesEnabled_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRGamepadProvider_RequestUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRGamepadProvider_RequestUpdate_Params_Data));
      new (data()) IsolatedXRGamepadProvider_RequestUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRGamepadProvider_RequestUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRGamepadProvider_RequestUpdate_Params_Data>(index_);
    }
    IsolatedXRGamepadProvider_RequestUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IsolatedXRGamepadProvider_RequestUpdate_Params_Data();
  ~IsolatedXRGamepadProvider_RequestUpdate_Params_Data() = delete;
};
static_assert(sizeof(IsolatedXRGamepadProvider_RequestUpdate_Params_Data) == 8,
              "Bad sizeof(IsolatedXRGamepadProvider_RequestUpdate_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data));
      new (data()) IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data>(index_);
    }
    IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::XRGamepadData_Data> data;

 private:
  IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data();
  ~IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data() = delete;
};
static_assert(sizeof(IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data) == 16,
              "Bad sizeof(IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data));
      new (data()) IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data>(index_);
    }
    IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data provider;
  uint8_t padfinal_[4];

 private:
  IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data();
  ~IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data() = delete;
};
static_assert(sizeof(IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data) == 16,
              "Bad sizeof(IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_RequestNextOverlayPose_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_RequestNextOverlayPose_Params_Data));
      new (data()) ImmersiveOverlay_RequestNextOverlayPose_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_RequestNextOverlayPose_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_RequestNextOverlayPose_Params_Data>(index_);
    }
    ImmersiveOverlay_RequestNextOverlayPose_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImmersiveOverlay_RequestNextOverlayPose_Params_Data();
  ~ImmersiveOverlay_RequestNextOverlayPose_Params_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_RequestNextOverlayPose_Params_Data) == 8,
              "Bad sizeof(ImmersiveOverlay_RequestNextOverlayPose_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data));
      new (data()) ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data>(index_);
    }
    ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::XRFrameData_Data> pose;

 private:
  ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data();
  ~ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data) == 16,
              "Bad sizeof(ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_SubmitOverlayTexture_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_SubmitOverlayTexture_Params_Data));
      new (data()) ImmersiveOverlay_SubmitOverlayTexture_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_SubmitOverlayTexture_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_SubmitOverlayTexture_Params_Data>(index_);
    }
    ImmersiveOverlay_SubmitOverlayTexture_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int16_t frame_id;
  uint8_t pad0_[2];
  mojo::internal::Handle_Data texture;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> left_bounds;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> right_bounds;

 private:
  ImmersiveOverlay_SubmitOverlayTexture_Params_Data();
  ~ImmersiveOverlay_SubmitOverlayTexture_Params_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_SubmitOverlayTexture_Params_Data) == 32,
              "Bad sizeof(ImmersiveOverlay_SubmitOverlayTexture_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data));
      new (data()) ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data>(index_);
    }
    ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data* operator->() { return data(); }

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
  ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data();
  ~ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data) == 16,
              "Bad sizeof(ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data));
      new (data()) ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data>(index_);
    }
    ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t overlay_visible : 1;
  uint8_t webxr_visible : 1;
  uint8_t padfinal_[7];

 private:
  ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data();
  ~ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data) == 16,
              "Bad sizeof(ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data));
      new (data()) ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data>(index_);
    }
    ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data();
  ~ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data) == 8,
              "Bad sizeof(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data));
      new (data()) ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data>(index_);
    }
    ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data();
  ~ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data) == 8,
              "Bad sizeof(ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) XRCompositorHost_CreateImmersiveOverlay_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(XRCompositorHost_CreateImmersiveOverlay_Params_Data));
      new (data()) XRCompositorHost_CreateImmersiveOverlay_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    XRCompositorHost_CreateImmersiveOverlay_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<XRCompositorHost_CreateImmersiveOverlay_Params_Data>(index_);
    }
    XRCompositorHost_CreateImmersiveOverlay_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data overlay;
  uint8_t padfinal_[4];

 private:
  XRCompositorHost_CreateImmersiveOverlay_Params_Data();
  ~XRCompositorHost_CreateImmersiveOverlay_Params_Data() = delete;
};
static_assert(sizeof(XRCompositorHost_CreateImmersiveOverlay_Params_Data) == 16,
              "Bad sizeof(XRCompositorHost_CreateImmersiveOverlay_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data));
      new (data()) IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data>(index_);
    }
    IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data runtime;
  mojo::internal::Interface_Data gamepad_factory;
  mojo::internal::Interface_Data compositor_host;
  int32_t device_id;
  uint8_t padfinal_[4];

 private:
  IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data();
  ~IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data) == 40,
              "Bad sizeof(IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data));
      new (data()) IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data>(index_);
    }
    IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t device_index;
  uint8_t padfinal_[4];

 private:
  IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data();
  ~IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data) == 16,
              "Bad sizeof(IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data));
      new (data()) IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data>(index_);
    }
    IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data();
  ~IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data() = delete;
};
static_assert(sizeof(IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data) == 8,
              "Bad sizeof(IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data)");
class COMPONENT_EXPORT(DEVICE_VR_MOJO_BINDINGS_SHARED) IsolatedXRRuntimeProvider_RequestDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(IsolatedXRRuntimeProvider_RequestDevices_Params_Data));
      new (data()) IsolatedXRRuntimeProvider_RequestDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    IsolatedXRRuntimeProvider_RequestDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<IsolatedXRRuntimeProvider_RequestDevices_Params_Data>(index_);
    }
    IsolatedXRRuntimeProvider_RequestDevices_Params_Data* operator->() { return data(); }

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
  IsolatedXRRuntimeProvider_RequestDevices_Params_Data();
  ~IsolatedXRRuntimeProvider_RequestDevices_Params_Data() = delete;
};
static_assert(sizeof(IsolatedXRRuntimeProvider_RequestDevices_Params_Data) == 16,
              "Bad sizeof(IsolatedXRRuntimeProvider_RequestDevices_Params_Data)");

}  // namespace internal
class XRSessionController_SetFrameDataRestricted_ParamsDataView {
 public:
  XRSessionController_SetFrameDataRestricted_ParamsDataView() {}

  XRSessionController_SetFrameDataRestricted_ParamsDataView(
      internal::XRSessionController_SetFrameDataRestricted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool restricted() const {
    return data_->restricted;
  }
 private:
  internal::XRSessionController_SetFrameDataRestricted_Params_Data* data_ = nullptr;
};

class XRRuntimeEventListener_OnDisplayInfoChanged_ParamsDataView {
 public:
  XRRuntimeEventListener_OnDisplayInfoChanged_ParamsDataView() {}

  XRRuntimeEventListener_OnDisplayInfoChanged_ParamsDataView(
      internal::XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayInfoDataView(
      ::device::mojom::VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayInfo(UserType* output) {
    auto* pointer = data_->display_info.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRRuntimeEventListener_OnDisplayInfoChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRRuntimeEventListener_OnDeviceActivated_ParamsDataView {
 public:
  XRRuntimeEventListener_OnDeviceActivated_ParamsDataView() {}

  XRRuntimeEventListener_OnDeviceActivated_ParamsDataView(
      internal::XRRuntimeEventListener_OnDeviceActivated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayEventReason>(
        data_value, output);
  }

  ::device::mojom::VRDisplayEventReason reason() const {
    return static_cast<::device::mojom::VRDisplayEventReason>(data_->reason);
  }
 private:
  internal::XRRuntimeEventListener_OnDeviceActivated_Params_Data* data_ = nullptr;
};

class XRRuntimeEventListener_OnDeviceActivated_ResponseParamsDataView {
 public:
  XRRuntimeEventListener_OnDeviceActivated_ResponseParamsDataView() {}

  XRRuntimeEventListener_OnDeviceActivated_ResponseParamsDataView(
      internal::XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool will_not_present() const {
    return data_->will_not_present;
  }
 private:
  internal::XRRuntimeEventListener_OnDeviceActivated_ResponseParams_Data* data_ = nullptr;
};

class XRRuntimeEventListener_OnDeviceIdle_ParamsDataView {
 public:
  XRRuntimeEventListener_OnDeviceIdle_ParamsDataView() {}

  XRRuntimeEventListener_OnDeviceIdle_ParamsDataView(
      internal::XRRuntimeEventListener_OnDeviceIdle_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::VRDisplayEventReason>(
        data_value, output);
  }

  ::device::mojom::VRDisplayEventReason reason() const {
    return static_cast<::device::mojom::VRDisplayEventReason>(data_->reason);
  }
 private:
  internal::XRRuntimeEventListener_OnDeviceIdle_Params_Data* data_ = nullptr;
};

class XRRuntimeEventListener_OnExitPresent_ParamsDataView {
 public:
  XRRuntimeEventListener_OnExitPresent_ParamsDataView() {}

  XRRuntimeEventListener_OnExitPresent_ParamsDataView(
      internal::XRRuntimeEventListener_OnExitPresent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRRuntimeEventListener_OnExitPresent_Params_Data* data_ = nullptr;
};

class XRRuntime_RequestSession_ParamsDataView {
 public:
  XRRuntime_RequestSession_ParamsDataView() {}

  XRRuntime_RequestSession_ParamsDataView(
      internal::XRRuntime_RequestSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      XRRuntimeSessionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::XRRuntimeSessionOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRRuntime_RequestSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRRuntime_RequestSession_ResponseParamsDataView {
 public:
  XRRuntime_RequestSession_ResponseParamsDataView() {}

  XRRuntime_RequestSession_ResponseParamsDataView(
      internal::XRRuntime_RequestSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionDataView(
      ::device::mojom::XRSessionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSession(UserType* output) {
    auto* pointer = data_->session.Get();
    return mojo::internal::Deserialize<::device::mojom::XRSessionDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeController() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRSessionControllerPtrDataView>(
            &data_->controller, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::XRRuntime_RequestSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRRuntime_ListenToDeviceChanges_ParamsDataView {
 public:
  XRRuntime_ListenToDeviceChanges_ParamsDataView() {}

  XRRuntime_ListenToDeviceChanges_ParamsDataView(
      internal::XRRuntime_ListenToDeviceChanges_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeListener() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRRuntimeEventListenerAssociatedPtrInfoDataView>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::XRRuntime_ListenToDeviceChanges_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRRuntime_ListenToDeviceChanges_ResponseParamsDataView {
 public:
  XRRuntime_ListenToDeviceChanges_ResponseParamsDataView() {}

  XRRuntime_ListenToDeviceChanges_ResponseParamsDataView(
      internal::XRRuntime_ListenToDeviceChanges_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDisplayInfoDataView(
      ::device::mojom::VRDisplayInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayInfo(UserType* output) {
    auto* pointer = data_->display_info.Get();
    return mojo::internal::Deserialize<::device::mojom::VRDisplayInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::XRRuntime_ListenToDeviceChanges_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class XRRuntime_EnsureInitialized_ParamsDataView {
 public:
  XRRuntime_EnsureInitialized_ParamsDataView() {}

  XRRuntime_EnsureInitialized_ParamsDataView(
      internal::XRRuntime_EnsureInitialized_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t render_process_id() const {
    return data_->render_process_id;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
 private:
  internal::XRRuntime_EnsureInitialized_Params_Data* data_ = nullptr;
};

class XRRuntime_EnsureInitialized_ResponseParamsDataView {
 public:
  XRRuntime_EnsureInitialized_ResponseParamsDataView() {}

  XRRuntime_EnsureInitialized_ResponseParamsDataView(
      internal::XRRuntime_EnsureInitialized_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::XRRuntime_EnsureInitialized_ResponseParams_Data* data_ = nullptr;
};

class XRRuntime_SetListeningForActivate_ParamsDataView {
 public:
  XRRuntime_SetListeningForActivate_ParamsDataView() {}

  XRRuntime_SetListeningForActivate_ParamsDataView(
      internal::XRRuntime_SetListeningForActivate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool listen_for_activation() const {
    return data_->listen_for_activation;
  }
 private:
  internal::XRRuntime_SetListeningForActivate_Params_Data* data_ = nullptr;
};

class XRRuntime_SetInlinePosesEnabled_ParamsDataView {
 public:
  XRRuntime_SetInlinePosesEnabled_ParamsDataView() {}

  XRRuntime_SetInlinePosesEnabled_ParamsDataView(
      internal::XRRuntime_SetInlinePosesEnabled_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enable() const {
    return data_->enable;
  }
 private:
  internal::XRRuntime_SetInlinePosesEnabled_Params_Data* data_ = nullptr;
};

class IsolatedXRGamepadProvider_RequestUpdate_ParamsDataView {
 public:
  IsolatedXRGamepadProvider_RequestUpdate_ParamsDataView() {}

  IsolatedXRGamepadProvider_RequestUpdate_ParamsDataView(
      internal::IsolatedXRGamepadProvider_RequestUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IsolatedXRGamepadProvider_RequestUpdate_Params_Data* data_ = nullptr;
};

class IsolatedXRGamepadProvider_RequestUpdate_ResponseParamsDataView {
 public:
  IsolatedXRGamepadProvider_RequestUpdate_ResponseParamsDataView() {}

  IsolatedXRGamepadProvider_RequestUpdate_ResponseParamsDataView(
      internal::IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      XRGamepadDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<::device::mojom::XRGamepadDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::IsolatedXRGamepadProvider_RequestUpdate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_ParamsDataView {
 public:
  IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_ParamsDataView() {}

  IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_ParamsDataView(
      internal::IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::IsolatedXRGamepadProviderRequestDataView>(
            &data_->provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IsolatedXRGamepadProviderFactory_GetIsolatedXRGamepadProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImmersiveOverlay_RequestNextOverlayPose_ParamsDataView {
 public:
  ImmersiveOverlay_RequestNextOverlayPose_ParamsDataView() {}

  ImmersiveOverlay_RequestNextOverlayPose_ParamsDataView(
      internal::ImmersiveOverlay_RequestNextOverlayPose_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImmersiveOverlay_RequestNextOverlayPose_Params_Data* data_ = nullptr;
};

class ImmersiveOverlay_RequestNextOverlayPose_ResponseParamsDataView {
 public:
  ImmersiveOverlay_RequestNextOverlayPose_ResponseParamsDataView() {}

  ImmersiveOverlay_RequestNextOverlayPose_ResponseParamsDataView(
      internal::ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPoseDataView(
      ::device::mojom::XRFrameDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPose(UserType* output) {
    auto* pointer = data_->pose.Get();
    return mojo::internal::Deserialize<::device::mojom::XRFrameDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImmersiveOverlay_RequestNextOverlayPose_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImmersiveOverlay_SubmitOverlayTexture_ParamsDataView {
 public:
  ImmersiveOverlay_SubmitOverlayTexture_ParamsDataView() {}

  ImmersiveOverlay_SubmitOverlayTexture_ParamsDataView(
      internal::ImmersiveOverlay_SubmitOverlayTexture_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int16_t frame_id() const {
    return data_->frame_id;
  }
  mojo::ScopedHandle TakeTexture() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->texture, &result, context_);
    DCHECK(ret);
    return result;
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
 private:
  internal::ImmersiveOverlay_SubmitOverlayTexture_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImmersiveOverlay_SubmitOverlayTexture_ResponseParamsDataView {
 public:
  ImmersiveOverlay_SubmitOverlayTexture_ResponseParamsDataView() {}

  ImmersiveOverlay_SubmitOverlayTexture_ResponseParamsDataView(
      internal::ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::ImmersiveOverlay_SubmitOverlayTexture_ResponseParams_Data* data_ = nullptr;
};

class ImmersiveOverlay_SetOverlayAndWebXRVisibility_ParamsDataView {
 public:
  ImmersiveOverlay_SetOverlayAndWebXRVisibility_ParamsDataView() {}

  ImmersiveOverlay_SetOverlayAndWebXRVisibility_ParamsDataView(
      internal::ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool overlay_visible() const {
    return data_->overlay_visible;
  }
  bool webxr_visible() const {
    return data_->webxr_visible;
  }
 private:
  internal::ImmersiveOverlay_SetOverlayAndWebXRVisibility_Params_Data* data_ = nullptr;
};

class ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ParamsDataView {
 public:
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ParamsDataView() {}

  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ParamsDataView(
      internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_Params_Data* data_ = nullptr;
};

class ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParamsDataView {
 public:
  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParamsDataView() {}

  ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParamsDataView(
      internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImmersiveOverlay_RequestNotificationOnWebXrSubmitted_ResponseParams_Data* data_ = nullptr;
};

class XRCompositorHost_CreateImmersiveOverlay_ParamsDataView {
 public:
  XRCompositorHost_CreateImmersiveOverlay_ParamsDataView() {}

  XRCompositorHost_CreateImmersiveOverlay_ParamsDataView(
      internal::XRCompositorHost_CreateImmersiveOverlay_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeOverlay() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::ImmersiveOverlayRequestDataView>(
            &data_->overlay, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::XRCompositorHost_CreateImmersiveOverlay_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IsolatedXRRuntimeProviderClient_OnDeviceAdded_ParamsDataView {
 public:
  IsolatedXRRuntimeProviderClient_OnDeviceAdded_ParamsDataView() {}

  IsolatedXRRuntimeProviderClient_OnDeviceAdded_ParamsDataView(
      internal::IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRuntime() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRRuntimePtrDataView>(
            &data_->runtime, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeGamepadFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::IsolatedXRGamepadProviderFactoryPtrDataView>(
            &data_->gamepad_factory, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCompositorHost() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::XRCompositorHostPtrDataView>(
            &data_->compositor_host, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) const {
    auto data_value = data_->device_id;
    return mojo::internal::Deserialize<::device::mojom::XRDeviceId>(
        data_value, output);
  }

  ::device::mojom::XRDeviceId device_id() const {
    return static_cast<::device::mojom::XRDeviceId>(data_->device_id);
  }
 private:
  internal::IsolatedXRRuntimeProviderClient_OnDeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class IsolatedXRRuntimeProviderClient_OnDeviceRemoved_ParamsDataView {
 public:
  IsolatedXRRuntimeProviderClient_OnDeviceRemoved_ParamsDataView() {}

  IsolatedXRRuntimeProviderClient_OnDeviceRemoved_ParamsDataView(
      internal::IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceIndex(UserType* output) const {
    auto data_value = data_->device_index;
    return mojo::internal::Deserialize<::device::mojom::XRDeviceId>(
        data_value, output);
  }

  ::device::mojom::XRDeviceId device_index() const {
    return static_cast<::device::mojom::XRDeviceId>(data_->device_index);
  }
 private:
  internal::IsolatedXRRuntimeProviderClient_OnDeviceRemoved_Params_Data* data_ = nullptr;
};

class IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_ParamsDataView {
 public:
  IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_ParamsDataView() {}

  IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_ParamsDataView(
      internal::IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::IsolatedXRRuntimeProviderClient_OnDevicesEnumerated_Params_Data* data_ = nullptr;
};

class IsolatedXRRuntimeProvider_RequestDevices_ParamsDataView {
 public:
  IsolatedXRRuntimeProvider_RequestDevices_ParamsDataView() {}

  IsolatedXRRuntimeProvider_RequestDevices_ParamsDataView(
      internal::IsolatedXRRuntimeProvider_RequestDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::IsolatedXRRuntimeProviderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::IsolatedXRRuntimeProvider_RequestDevices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void XRRuntimeEventListener_OnDisplayInfoChanged_ParamsDataView::GetDisplayInfoDataView(
    ::device::mojom::VRDisplayInfoDataView* output) {
  auto pointer = data_->display_info.Get();
  *output = ::device::mojom::VRDisplayInfoDataView(pointer, context_);
}










inline void XRRuntime_RequestSession_ParamsDataView::GetOptionsDataView(
    XRRuntimeSessionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = XRRuntimeSessionOptionsDataView(pointer, context_);
}


inline void XRRuntime_RequestSession_ResponseParamsDataView::GetSessionDataView(
    ::device::mojom::XRSessionDataView* output) {
  auto pointer = data_->session.Get();
  *output = ::device::mojom::XRSessionDataView(pointer, context_);
}




inline void XRRuntime_ListenToDeviceChanges_ResponseParamsDataView::GetDisplayInfoDataView(
    ::device::mojom::VRDisplayInfoDataView* output) {
  auto pointer = data_->display_info.Get();
  *output = ::device::mojom::VRDisplayInfoDataView(pointer, context_);
}












inline void IsolatedXRGamepadProvider_RequestUpdate_ResponseParamsDataView::GetDataDataView(
    XRGamepadDataDataView* output) {
  auto pointer = data_->data.Get();
  *output = XRGamepadDataDataView(pointer, context_);
}






inline void ImmersiveOverlay_RequestNextOverlayPose_ResponseParamsDataView::GetPoseDataView(
    ::device::mojom::XRFrameDataDataView* output) {
  auto pointer = data_->pose.Get();
  *output = ::device::mojom::XRFrameDataDataView(pointer, context_);
}


inline void ImmersiveOverlay_SubmitOverlayTexture_ParamsDataView::GetLeftBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->left_bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void ImmersiveOverlay_SubmitOverlayTexture_ParamsDataView::GetRightBoundsDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->right_bounds.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}



















}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // DEVICE_VR_PUBLIC_MOJOM_ISOLATED_XR_SERVICE_MOJOM_PARAMS_DATA_H_