// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_PARAMS_DATA_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadObserver_GamepadConnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadObserver_GamepadConnected_Params_Data));
      new (data()) GamepadObserver_GamepadConnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadObserver_GamepadConnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadObserver_GamepadConnected_Params_Data>(index_);
    }
    GamepadObserver_GamepadConnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Gamepad_Data> gamepad;

 private:
  GamepadObserver_GamepadConnected_Params_Data();
  ~GamepadObserver_GamepadConnected_Params_Data() = delete;
};
static_assert(sizeof(GamepadObserver_GamepadConnected_Params_Data) == 24,
              "Bad sizeof(GamepadObserver_GamepadConnected_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadObserver_GamepadDisconnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadObserver_GamepadDisconnected_Params_Data));
      new (data()) GamepadObserver_GamepadDisconnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadObserver_GamepadDisconnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadObserver_GamepadDisconnected_Params_Data>(index_);
    }
    GamepadObserver_GamepadDisconnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Gamepad_Data> gamepad;

 private:
  GamepadObserver_GamepadDisconnected_Params_Data();
  ~GamepadObserver_GamepadDisconnected_Params_Data() = delete;
};
static_assert(sizeof(GamepadObserver_GamepadDisconnected_Params_Data) == 24,
              "Bad sizeof(GamepadObserver_GamepadDisconnected_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadObserver_GamepadButtonOrAxisChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadObserver_GamepadButtonOrAxisChanged_Params_Data));
      new (data()) GamepadObserver_GamepadButtonOrAxisChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadObserver_GamepadButtonOrAxisChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadObserver_GamepadButtonOrAxisChanged_Params_Data>(index_);
    }
    GamepadObserver_GamepadButtonOrAxisChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::Gamepad_Data> gamepad;

 private:
  GamepadObserver_GamepadButtonOrAxisChanged_Params_Data();
  ~GamepadObserver_GamepadButtonOrAxisChanged_Params_Data() = delete;
};
static_assert(sizeof(GamepadObserver_GamepadButtonOrAxisChanged_Params_Data) == 24,
              "Bad sizeof(GamepadObserver_GamepadButtonOrAxisChanged_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadMonitor_GamepadStartPolling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStartPolling_Params_Data));
      new (data()) GamepadMonitor_GamepadStartPolling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStartPolling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStartPolling_Params_Data>(index_);
    }
    GamepadMonitor_GamepadStartPolling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GamepadMonitor_GamepadStartPolling_Params_Data();
  ~GamepadMonitor_GamepadStartPolling_Params_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStartPolling_Params_Data) == 8,
              "Bad sizeof(GamepadMonitor_GamepadStartPolling_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadMonitor_GamepadStartPolling_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStartPolling_ResponseParams_Data));
      new (data()) GamepadMonitor_GamepadStartPolling_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStartPolling_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStartPolling_ResponseParams_Data>(index_);
    }
    GamepadMonitor_GamepadStartPolling_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> memory_region;

 private:
  GamepadMonitor_GamepadStartPolling_ResponseParams_Data();
  ~GamepadMonitor_GamepadStartPolling_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStartPolling_ResponseParams_Data) == 16,
              "Bad sizeof(GamepadMonitor_GamepadStartPolling_ResponseParams_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadMonitor_GamepadStopPolling_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStopPolling_Params_Data));
      new (data()) GamepadMonitor_GamepadStopPolling_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStopPolling_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStopPolling_Params_Data>(index_);
    }
    GamepadMonitor_GamepadStopPolling_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GamepadMonitor_GamepadStopPolling_Params_Data();
  ~GamepadMonitor_GamepadStopPolling_Params_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStopPolling_Params_Data) == 8,
              "Bad sizeof(GamepadMonitor_GamepadStopPolling_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadMonitor_GamepadStopPolling_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_GamepadStopPolling_ResponseParams_Data));
      new (data()) GamepadMonitor_GamepadStopPolling_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_GamepadStopPolling_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_GamepadStopPolling_ResponseParams_Data>(index_);
    }
    GamepadMonitor_GamepadStopPolling_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  GamepadMonitor_GamepadStopPolling_ResponseParams_Data();
  ~GamepadMonitor_GamepadStopPolling_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_GamepadStopPolling_ResponseParams_Data) == 8,
              "Bad sizeof(GamepadMonitor_GamepadStopPolling_ResponseParams_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadMonitor_SetObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadMonitor_SetObserver_Params_Data));
      new (data()) GamepadMonitor_SetObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadMonitor_SetObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadMonitor_SetObserver_Params_Data>(index_);
    }
    GamepadMonitor_SetObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data gamepad_observer;

 private:
  GamepadMonitor_SetObserver_Params_Data();
  ~GamepadMonitor_SetObserver_Params_Data() = delete;
};
static_assert(sizeof(GamepadMonitor_SetObserver_Params_Data) == 16,
              "Bad sizeof(GamepadMonitor_SetObserver_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data));
      new (data()) GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data>(index_);
    }
    GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t pad_index;
  int32_t type;
  mojo::internal::Pointer<internal::GamepadEffectParameters_Data> params;

 private:
  GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data();
  ~GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data) == 24,
              "Bad sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data));
      new (data()) GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data>(index_);
    }
    GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data();
  ~GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data) == 16,
              "Bad sizeof(GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadHapticsManager_ResetVibrationActuator_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_ResetVibrationActuator_Params_Data));
      new (data()) GamepadHapticsManager_ResetVibrationActuator_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_ResetVibrationActuator_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_ResetVibrationActuator_Params_Data>(index_);
    }
    GamepadHapticsManager_ResetVibrationActuator_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t pad_index;
  uint8_t padfinal_[4];

 private:
  GamepadHapticsManager_ResetVibrationActuator_Params_Data();
  ~GamepadHapticsManager_ResetVibrationActuator_Params_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_ResetVibrationActuator_Params_Data) == 16,
              "Bad sizeof(GamepadHapticsManager_ResetVibrationActuator_Params_Data)");
class COMPONENT_EXPORT(GAMEPAD_MOJOM_SHARED) GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data));
      new (data()) GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data>(index_);
    }
    GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data();
  ~GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data() = delete;
};
static_assert(sizeof(GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data) == 16,
              "Bad sizeof(GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data)");

}  // namespace internal
class GamepadObserver_GamepadConnected_ParamsDataView {
 public:
  GamepadObserver_GamepadConnected_ParamsDataView() {}

  GamepadObserver_GamepadConnected_ParamsDataView(
      internal::GamepadObserver_GamepadConnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
  inline void GetGamepadDataView(
      GamepadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepad(UserType* output) {
    auto* pointer = data_->gamepad.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadObserver_GamepadConnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadObserver_GamepadDisconnected_ParamsDataView {
 public:
  GamepadObserver_GamepadDisconnected_ParamsDataView() {}

  GamepadObserver_GamepadDisconnected_ParamsDataView(
      internal::GamepadObserver_GamepadDisconnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
  inline void GetGamepadDataView(
      GamepadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepad(UserType* output) {
    auto* pointer = data_->gamepad.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadObserver_GamepadDisconnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadObserver_GamepadButtonOrAxisChanged_ParamsDataView {
 public:
  GamepadObserver_GamepadButtonOrAxisChanged_ParamsDataView() {}

  GamepadObserver_GamepadButtonOrAxisChanged_ParamsDataView(
      internal::GamepadObserver_GamepadButtonOrAxisChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t index() const {
    return data_->index;
  }
  inline void GetGamepadDataView(
      GamepadDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGamepad(UserType* output) {
    auto* pointer = data_->gamepad.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadObserver_GamepadButtonOrAxisChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadMonitor_GamepadStartPolling_ParamsDataView {
 public:
  GamepadMonitor_GamepadStartPolling_ParamsDataView() {}

  GamepadMonitor_GamepadStartPolling_ParamsDataView(
      internal::GamepadMonitor_GamepadStartPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GamepadMonitor_GamepadStartPolling_Params_Data* data_ = nullptr;
};

class GamepadMonitor_GamepadStartPolling_ResponseParamsDataView {
 public:
  GamepadMonitor_GamepadStartPolling_ResponseParamsDataView() {}

  GamepadMonitor_GamepadStartPolling_ResponseParamsDataView(
      internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMemoryRegionDataView(
      ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMemoryRegion(UserType* output) {
    auto* pointer = data_->memory_region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadMonitor_GamepadStopPolling_ParamsDataView {
 public:
  GamepadMonitor_GamepadStopPolling_ParamsDataView() {}

  GamepadMonitor_GamepadStopPolling_ParamsDataView(
      internal::GamepadMonitor_GamepadStopPolling_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GamepadMonitor_GamepadStopPolling_Params_Data* data_ = nullptr;
};

class GamepadMonitor_GamepadStopPolling_ResponseParamsDataView {
 public:
  GamepadMonitor_GamepadStopPolling_ResponseParamsDataView() {}

  GamepadMonitor_GamepadStopPolling_ResponseParamsDataView(
      internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data* data_ = nullptr;
};

class GamepadMonitor_SetObserver_ParamsDataView {
 public:
  GamepadMonitor_SetObserver_ParamsDataView() {}

  GamepadMonitor_SetObserver_ParamsDataView(
      internal::GamepadMonitor_SetObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeGamepadObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::GamepadObserverPtrDataView>(
            &data_->gamepad_observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::GamepadMonitor_SetObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView {
 public:
  GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView() {}

  GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView(
      internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t pad_index() const {
    return data_->pad_index;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticEffectType>(
        data_value, output);
  }

  GamepadHapticEffectType type() const {
    return static_cast<GamepadHapticEffectType>(data_->type);
  }
  inline void GetParamsDataView(
      GamepadEffectParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::device::mojom::GamepadEffectParametersDataView>(
        pointer, output, context_);
  }
 private:
  internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView {
 public:
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView() {}

  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView(
      internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticsResult>(
        data_value, output);
  }

  GamepadHapticsResult result() const {
    return static_cast<GamepadHapticsResult>(data_->result);
  }
 private:
  internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* data_ = nullptr;
};

class GamepadHapticsManager_ResetVibrationActuator_ParamsDataView {
 public:
  GamepadHapticsManager_ResetVibrationActuator_ParamsDataView() {}

  GamepadHapticsManager_ResetVibrationActuator_ParamsDataView(
      internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t pad_index() const {
    return data_->pad_index;
  }
 private:
  internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data* data_ = nullptr;
};

class GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView {
 public:
  GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView() {}

  GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView(
      internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::GamepadHapticsResult>(
        data_value, output);
  }

  GamepadHapticsResult result() const {
    return static_cast<GamepadHapticsResult>(data_->result);
  }
 private:
  internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* data_ = nullptr;
};


inline void GamepadObserver_GamepadConnected_ParamsDataView::GetGamepadDataView(
    GamepadDataView* output) {
  auto pointer = data_->gamepad.Get();
  *output = GamepadDataView(pointer, context_);
}


inline void GamepadObserver_GamepadDisconnected_ParamsDataView::GetGamepadDataView(
    GamepadDataView* output) {
  auto pointer = data_->gamepad.Get();
  *output = GamepadDataView(pointer, context_);
}


inline void GamepadObserver_GamepadButtonOrAxisChanged_ParamsDataView::GetGamepadDataView(
    GamepadDataView* output) {
  auto pointer = data_->gamepad.Get();
  *output = GamepadDataView(pointer, context_);
}




inline void GamepadMonitor_GamepadStartPolling_ResponseParamsDataView::GetMemoryRegionDataView(
    ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView* output) {
  auto pointer = data_->memory_region.Get();
  *output = ::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView(pointer, context_);
}








inline void GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView::GetParamsDataView(
    GamepadEffectParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = GamepadEffectParametersDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_PARAMS_DATA_H_