// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "device/gamepad/public/mojom/gamepad.mojom-shared.h"
#include "device/gamepad/public/mojom/gamepad.mojom-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "device/gamepad/public/cpp/gamepad.h"
#include "base/component_export.h"




namespace device {
namespace mojom {

class GamepadObserverProxy;

template <typename ImplRefTraits>
class GamepadObserverStub;

class GamepadObserverRequestValidator;


class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadObserver
    : public GamepadObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GamepadObserverInterfaceBase;
  using Proxy_ = GamepadObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = GamepadObserverStub<ImplRefTraits>;

  using RequestValidator_ = GamepadObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGamepadConnectedMinVersion = 0,
    kGamepadDisconnectedMinVersion = 0,
    kGamepadButtonOrAxisChangedMinVersion = 0,
  };
  virtual ~GamepadObserver() {}

  
  virtual void GamepadConnected(uint32_t index, const device::Gamepad& gamepad) = 0;

  
  virtual void GamepadDisconnected(uint32_t index, const device::Gamepad& gamepad) = 0;

  
  virtual void GamepadButtonOrAxisChanged(uint32_t index, const device::Gamepad& gamepad) = 0;
};

class GamepadMonitorProxy;

template <typename ImplRefTraits>
class GamepadMonitorStub;

class GamepadMonitorRequestValidator;
class GamepadMonitorResponseValidator;


class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitor
    : public GamepadMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = GamepadMonitorInterfaceBase;
  using Proxy_ = GamepadMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = GamepadMonitorStub<ImplRefTraits>;

  using RequestValidator_ = GamepadMonitorRequestValidator;
  using ResponseValidator_ = GamepadMonitorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGamepadStartPollingMinVersion = 0,
    kGamepadStopPollingMinVersion = 0,
    kSetObserverMinVersion = 0,
  };
  virtual ~GamepadMonitor() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GamepadStartPolling(base::ReadOnlySharedMemoryRegion* out_memory_region);

  using GamepadStartPollingCallback = base::OnceCallback<void(base::ReadOnlySharedMemoryRegion)>;
  
  virtual void GamepadStartPolling(GamepadStartPollingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GamepadStopPolling();

  using GamepadStopPollingCallback = base::OnceCallback<void()>;
  
  virtual void GamepadStopPolling(GamepadStopPollingCallback callback) = 0;

  
  virtual void SetObserver(GamepadObserverPtr gamepad_observer) = 0;
};

class GamepadHapticsManagerProxy;

template <typename ImplRefTraits>
class GamepadHapticsManagerStub;

class GamepadHapticsManagerRequestValidator;
class GamepadHapticsManagerResponseValidator;


class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManager
    : public GamepadHapticsManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GamepadHapticsManagerInterfaceBase;
  using Proxy_ = GamepadHapticsManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = GamepadHapticsManagerStub<ImplRefTraits>;

  using RequestValidator_ = GamepadHapticsManagerRequestValidator;
  using ResponseValidator_ = GamepadHapticsManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPlayVibrationEffectOnceMinVersion = 0,
    kResetVibrationActuatorMinVersion = 0,
  };
  virtual ~GamepadHapticsManager() {}


  using PlayVibrationEffectOnceCallback = base::OnceCallback<void(GamepadHapticsResult)>;
  
  virtual void PlayVibrationEffectOnce(uint32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) = 0;


  using ResetVibrationActuatorCallback = base::OnceCallback<void(GamepadHapticsResult)>;
  
  virtual void ResetVibrationActuator(uint32_t pad_index, ResetVibrationActuatorCallback callback) = 0;
};

class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadObserverProxy
    : public GamepadObserver {
 public:
  using InterfaceType = GamepadObserver;

  explicit GamepadObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void GamepadConnected(uint32_t index, const device::Gamepad& gamepad) final;
  void GamepadDisconnected(uint32_t index, const device::Gamepad& gamepad) final;
  void GamepadButtonOrAxisChanged(uint32_t index, const device::Gamepad& gamepad) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitorProxy
    : public GamepadMonitor {
 public:
  using InterfaceType = GamepadMonitor;

  explicit GamepadMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GamepadStartPolling(base::ReadOnlySharedMemoryRegion* out_memory_region) final;
  void GamepadStartPolling(GamepadStartPollingCallback callback) final;
  bool GamepadStopPolling() final;
  void GamepadStopPolling(GamepadStopPollingCallback callback) final;
  void SetObserver(GamepadObserverPtr gamepad_observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManagerProxy
    : public GamepadHapticsManager {
 public:
  using InterfaceType = GamepadHapticsManager;

  explicit GamepadHapticsManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void PlayVibrationEffectOnce(uint32_t pad_index, GamepadHapticEffectType type, GamepadEffectParametersPtr params, PlayVibrationEffectOnceCallback callback) final;
  void ResetVibrationActuator(uint32_t pad_index, ResetVibrationActuatorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadObserverStubDispatch {
 public:
  static bool Accept(GamepadObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GamepadObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GamepadObserver>>
class GamepadObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GamepadObserverStub() {}
  ~GamepadObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitorStubDispatch {
 public:
  static bool Accept(GamepadMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GamepadMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GamepadMonitor>>
class GamepadMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GamepadMonitorStub() {}
  ~GamepadMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManagerStubDispatch {
 public:
  static bool Accept(GamepadHapticsManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GamepadHapticsManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GamepadHapticsManager>>
class GamepadHapticsManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GamepadHapticsManagerStub() {}
  ~GamepadHapticsManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadHapticsManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GamepadHapticsManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadMonitorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticsManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadQuaternion {
 public:
  using DataView = GamepadQuaternionDataView;
  using Data_ = internal::GamepadQuaternion_Data;

  template <typename... Args>
  static GamepadQuaternionPtr New(Args&&... args) {
    return GamepadQuaternionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadQuaternionPtr From(const U& u) {
    return mojo::TypeConverter<GamepadQuaternionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadQuaternion>::Convert(*this);
  }


  GamepadQuaternion();

  GamepadQuaternion(
      float x,
      float y,
      float z,
      float w);

  ~GamepadQuaternion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadQuaternionPtr>
  GamepadQuaternionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadQuaternion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadQuaternion::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadQuaternion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadQuaternion_UnserializedMessageContext<
            UserType, GamepadQuaternion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadQuaternion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GamepadQuaternion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadQuaternion_UnserializedMessageContext<
            UserType, GamepadQuaternion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadQuaternion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;
  
  float z;
  
  float w;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadVector {
 public:
  using DataView = GamepadVectorDataView;
  using Data_ = internal::GamepadVector_Data;

  template <typename... Args>
  static GamepadVectorPtr New(Args&&... args) {
    return GamepadVectorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadVectorPtr From(const U& u) {
    return mojo::TypeConverter<GamepadVectorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadVector>::Convert(*this);
  }


  GamepadVector();

  GamepadVector(
      float x,
      float y,
      float z);

  ~GamepadVector();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadVectorPtr>
  GamepadVectorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadVector>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadVector::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadVector::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadVector_UnserializedMessageContext<
            UserType, GamepadVector::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadVector::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GamepadVector::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadVector_UnserializedMessageContext<
            UserType, GamepadVector::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadVector::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float x;
  
  float y;
  
  float z;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadButton {
 public:
  using DataView = GamepadButtonDataView;
  using Data_ = internal::GamepadButton_Data;

  template <typename... Args>
  static GamepadButtonPtr New(Args&&... args) {
    return GamepadButtonPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadButtonPtr From(const U& u) {
    return mojo::TypeConverter<GamepadButtonPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadButton>::Convert(*this);
  }


  GamepadButton();

  GamepadButton(
      bool pressed,
      bool touched,
      double value);

  ~GamepadButton();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadButtonPtr>
  GamepadButtonPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadButton>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadButton::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadButton::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadButton_UnserializedMessageContext<
            UserType, GamepadButton::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadButton::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GamepadButton::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadButton_UnserializedMessageContext<
            UserType, GamepadButton::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadButton::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool pressed;
  
  bool touched;
  
  double value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadHapticActuator {
 public:
  using DataView = GamepadHapticActuatorDataView;
  using Data_ = internal::GamepadHapticActuator_Data;

  template <typename... Args>
  static GamepadHapticActuatorPtr New(Args&&... args) {
    return GamepadHapticActuatorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadHapticActuatorPtr From(const U& u) {
    return mojo::TypeConverter<GamepadHapticActuatorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadHapticActuator>::Convert(*this);
  }


  GamepadHapticActuator();

  explicit GamepadHapticActuator(
      device::GamepadHapticActuatorType type);

  ~GamepadHapticActuator();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadHapticActuatorPtr>
  GamepadHapticActuatorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadHapticActuator>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadHapticActuator::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadHapticActuator::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadHapticActuator_UnserializedMessageContext<
            UserType, GamepadHapticActuator::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadHapticActuator::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GamepadHapticActuator::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadHapticActuator_UnserializedMessageContext<
            UserType, GamepadHapticActuator::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadHapticActuator::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  device::GamepadHapticActuatorType type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadEffectParameters {
 public:
  using DataView = GamepadEffectParametersDataView;
  using Data_ = internal::GamepadEffectParameters_Data;

  template <typename... Args>
  static GamepadEffectParametersPtr New(Args&&... args) {
    return GamepadEffectParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadEffectParametersPtr From(const U& u) {
    return mojo::TypeConverter<GamepadEffectParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadEffectParameters>::Convert(*this);
  }


  GamepadEffectParameters();

  GamepadEffectParameters(
      double duration,
      double start_delay,
      double strong_magnitude,
      double weak_magnitude);

  ~GamepadEffectParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadEffectParametersPtr>
  GamepadEffectParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadEffectParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadEffectParameters::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadEffectParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadEffectParameters_UnserializedMessageContext<
            UserType, GamepadEffectParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadEffectParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GamepadEffectParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadEffectParameters_UnserializedMessageContext<
            UserType, GamepadEffectParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadEffectParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  double duration;
  
  double start_delay;
  
  double strong_magnitude;
  
  double weak_magnitude;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class COMPONENT_EXPORT(GAMEPAD_MOJOM) GamepadPose {
 public:
  using DataView = GamepadPoseDataView;
  using Data_ = internal::GamepadPose_Data;

  template <typename... Args>
  static GamepadPosePtr New(Args&&... args) {
    return GamepadPosePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadPosePtr From(const U& u) {
    return mojo::TypeConverter<GamepadPosePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GamepadPose>::Convert(*this);
  }


  GamepadPose();

  GamepadPose(
      const device::GamepadQuaternion& orientation,
      const device::GamepadVector& position,
      const device::GamepadVector& angular_velocity,
      const device::GamepadVector& linear_velocity,
      const device::GamepadVector& angular_acceleration,
      const device::GamepadVector& linear_acceleration);

  ~GamepadPose();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadPosePtr>
  GamepadPosePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GamepadPose>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GamepadPose::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GamepadPose::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GamepadPose_UnserializedMessageContext<
            UserType, GamepadPose::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GamepadPose::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GamepadPose::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GamepadPose_UnserializedMessageContext<
            UserType, GamepadPose::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GamepadPose::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  device::GamepadQuaternion orientation;
  
  device::GamepadVector position;
  
  device::GamepadVector angular_velocity;
  
  device::GamepadVector linear_velocity;
  
  device::GamepadVector angular_acceleration;
  
  device::GamepadVector linear_acceleration;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class COMPONENT_EXPORT(GAMEPAD_MOJOM) Gamepad {
 public:
  using DataView = GamepadDataView;
  using Data_ = internal::Gamepad_Data;

  template <typename... Args>
  static GamepadPtr New(Args&&... args) {
    return GamepadPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GamepadPtr From(const U& u) {
    return mojo::TypeConverter<GamepadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Gamepad>::Convert(*this);
  }


  Gamepad();

  Gamepad(
      bool connected,
      const std::vector<uint16_t>& id,
      int64_t timestamp,
      const std::vector<double>& axes,
      const std::vector<device::GamepadButton>& buttons,
      const device::GamepadHapticActuator& vibration_actuator,
      const std::vector<uint16_t>& mapping,
      const device::GamepadPose& pose,
      device::GamepadHand hand,
      uint32_t display_id);

  ~Gamepad();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GamepadPtr>
  GamepadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Gamepad>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Gamepad::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Gamepad::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Gamepad_UnserializedMessageContext<
            UserType, Gamepad::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Gamepad::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Gamepad::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Gamepad_UnserializedMessageContext<
            UserType, Gamepad::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Gamepad::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool connected;
  
  std::vector<uint16_t> id;
  
  int64_t timestamp;
  
  std::vector<double> axes;
  
  std::vector<device::GamepadButton> buttons;
  
  device::GamepadHapticActuator vibration_actuator;
  
  std::vector<uint16_t> mapping;
  
  device::GamepadPose pose;
  
  device::GamepadHand hand;
  
  uint32_t display_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
GamepadQuaternionPtr GamepadQuaternion::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(z),
      mojo::Clone(w)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadQuaternion>::value>::type*>
bool GamepadQuaternion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  if (!mojo::Equals(this->w, other_struct.w))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadVectorPtr GamepadVector::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(z)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadVector>::value>::type*>
bool GamepadVector::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->z, other_struct.z))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadButtonPtr GamepadButton::Clone() const {
  return New(
      mojo::Clone(pressed),
      mojo::Clone(touched),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadButton>::value>::type*>
bool GamepadButton::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pressed, other_struct.pressed))
    return false;
  if (!mojo::Equals(this->touched, other_struct.touched))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadPosePtr GamepadPose::Clone() const {
  return New(
      mojo::Clone(orientation),
      mojo::Clone(position),
      mojo::Clone(angular_velocity),
      mojo::Clone(linear_velocity),
      mojo::Clone(angular_acceleration),
      mojo::Clone(linear_acceleration)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadPose>::value>::type*>
bool GamepadPose::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->position, other_struct.position))
    return false;
  if (!mojo::Equals(this->angular_velocity, other_struct.angular_velocity))
    return false;
  if (!mojo::Equals(this->linear_velocity, other_struct.linear_velocity))
    return false;
  if (!mojo::Equals(this->angular_acceleration, other_struct.angular_acceleration))
    return false;
  if (!mojo::Equals(this->linear_acceleration, other_struct.linear_acceleration))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadHapticActuatorPtr GamepadHapticActuator::Clone() const {
  return New(
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadHapticActuator>::value>::type*>
bool GamepadHapticActuator::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadPtr Gamepad::Clone() const {
  return New(
      mojo::Clone(connected),
      mojo::Clone(id),
      mojo::Clone(timestamp),
      mojo::Clone(axes),
      mojo::Clone(buttons),
      mojo::Clone(vibration_actuator),
      mojo::Clone(mapping),
      mojo::Clone(pose),
      mojo::Clone(hand),
      mojo::Clone(display_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Gamepad>::value>::type*>
bool Gamepad::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->connected, other_struct.connected))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->axes, other_struct.axes))
    return false;
  if (!mojo::Equals(this->buttons, other_struct.buttons))
    return false;
  if (!mojo::Equals(this->vibration_actuator, other_struct.vibration_actuator))
    return false;
  if (!mojo::Equals(this->mapping, other_struct.mapping))
    return false;
  if (!mojo::Equals(this->pose, other_struct.pose))
    return false;
  if (!mojo::Equals(this->hand, other_struct.hand))
    return false;
  if (!mojo::Equals(this->display_id, other_struct.display_id))
    return false;
  return true;
}
template <typename StructPtrType>
GamepadEffectParametersPtr GamepadEffectParameters::Clone() const {
  return New(
      mojo::Clone(duration),
      mojo::Clone(start_delay),
      mojo::Clone(strong_magnitude),
      mojo::Clone(weak_magnitude)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GamepadEffectParameters>::value>::type*>
bool GamepadEffectParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->start_delay, other_struct.start_delay))
    return false;
  if (!mojo::Equals(this->strong_magnitude, other_struct.strong_magnitude))
    return false;
  if (!mojo::Equals(this->weak_magnitude, other_struct.weak_magnitude))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::GamepadQuaternion::DataView,
                                         ::device::mojom::GamepadQuaternionPtr> {
  static bool IsNull(const ::device::mojom::GamepadQuaternionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadQuaternionPtr* output) { output->reset(); }

  static decltype(::device::mojom::GamepadQuaternion::x) x(
      const ::device::mojom::GamepadQuaternionPtr& input) {
    return input->x;
  }

  static decltype(::device::mojom::GamepadQuaternion::y) y(
      const ::device::mojom::GamepadQuaternionPtr& input) {
    return input->y;
  }

  static decltype(::device::mojom::GamepadQuaternion::z) z(
      const ::device::mojom::GamepadQuaternionPtr& input) {
    return input->z;
  }

  static decltype(::device::mojom::GamepadQuaternion::w) w(
      const ::device::mojom::GamepadQuaternionPtr& input) {
    return input->w;
  }

  static bool Read(::device::mojom::GamepadQuaternion::DataView input, ::device::mojom::GamepadQuaternionPtr* output);
};


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::GamepadVector::DataView,
                                         ::device::mojom::GamepadVectorPtr> {
  static bool IsNull(const ::device::mojom::GamepadVectorPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadVectorPtr* output) { output->reset(); }

  static decltype(::device::mojom::GamepadVector::x) x(
      const ::device::mojom::GamepadVectorPtr& input) {
    return input->x;
  }

  static decltype(::device::mojom::GamepadVector::y) y(
      const ::device::mojom::GamepadVectorPtr& input) {
    return input->y;
  }

  static decltype(::device::mojom::GamepadVector::z) z(
      const ::device::mojom::GamepadVectorPtr& input) {
    return input->z;
  }

  static bool Read(::device::mojom::GamepadVector::DataView input, ::device::mojom::GamepadVectorPtr* output);
};


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::GamepadButton::DataView,
                                         ::device::mojom::GamepadButtonPtr> {
  static bool IsNull(const ::device::mojom::GamepadButtonPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadButtonPtr* output) { output->reset(); }

  static decltype(::device::mojom::GamepadButton::pressed) pressed(
      const ::device::mojom::GamepadButtonPtr& input) {
    return input->pressed;
  }

  static decltype(::device::mojom::GamepadButton::touched) touched(
      const ::device::mojom::GamepadButtonPtr& input) {
    return input->touched;
  }

  static decltype(::device::mojom::GamepadButton::value) value(
      const ::device::mojom::GamepadButtonPtr& input) {
    return input->value;
  }

  static bool Read(::device::mojom::GamepadButton::DataView input, ::device::mojom::GamepadButtonPtr* output);
};


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::GamepadPose::DataView,
                                         ::device::mojom::GamepadPosePtr> {
  static bool IsNull(const ::device::mojom::GamepadPosePtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadPosePtr* output) { output->reset(); }

  static const decltype(::device::mojom::GamepadPose::orientation)& orientation(
      const ::device::mojom::GamepadPosePtr& input) {
    return input->orientation;
  }

  static const decltype(::device::mojom::GamepadPose::position)& position(
      const ::device::mojom::GamepadPosePtr& input) {
    return input->position;
  }

  static const decltype(::device::mojom::GamepadPose::angular_velocity)& angular_velocity(
      const ::device::mojom::GamepadPosePtr& input) {
    return input->angular_velocity;
  }

  static const decltype(::device::mojom::GamepadPose::linear_velocity)& linear_velocity(
      const ::device::mojom::GamepadPosePtr& input) {
    return input->linear_velocity;
  }

  static const decltype(::device::mojom::GamepadPose::angular_acceleration)& angular_acceleration(
      const ::device::mojom::GamepadPosePtr& input) {
    return input->angular_acceleration;
  }

  static const decltype(::device::mojom::GamepadPose::linear_acceleration)& linear_acceleration(
      const ::device::mojom::GamepadPosePtr& input) {
    return input->linear_acceleration;
  }

  static bool Read(::device::mojom::GamepadPose::DataView input, ::device::mojom::GamepadPosePtr* output);
};


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::GamepadHapticActuator::DataView,
                                         ::device::mojom::GamepadHapticActuatorPtr> {
  static bool IsNull(const ::device::mojom::GamepadHapticActuatorPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadHapticActuatorPtr* output) { output->reset(); }

  static decltype(::device::mojom::GamepadHapticActuator::type) type(
      const ::device::mojom::GamepadHapticActuatorPtr& input) {
    return input->type;
  }

  static bool Read(::device::mojom::GamepadHapticActuator::DataView input, ::device::mojom::GamepadHapticActuatorPtr* output);
};


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::Gamepad::DataView,
                                         ::device::mojom::GamepadPtr> {
  static bool IsNull(const ::device::mojom::GamepadPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadPtr* output) { output->reset(); }

  static decltype(::device::mojom::Gamepad::connected) connected(
      const ::device::mojom::GamepadPtr& input) {
    return input->connected;
  }

  static const decltype(::device::mojom::Gamepad::id)& id(
      const ::device::mojom::GamepadPtr& input) {
    return input->id;
  }

  static decltype(::device::mojom::Gamepad::timestamp) timestamp(
      const ::device::mojom::GamepadPtr& input) {
    return input->timestamp;
  }

  static const decltype(::device::mojom::Gamepad::axes)& axes(
      const ::device::mojom::GamepadPtr& input) {
    return input->axes;
  }

  static const decltype(::device::mojom::Gamepad::buttons)& buttons(
      const ::device::mojom::GamepadPtr& input) {
    return input->buttons;
  }

  static const decltype(::device::mojom::Gamepad::vibration_actuator)& vibration_actuator(
      const ::device::mojom::GamepadPtr& input) {
    return input->vibration_actuator;
  }

  static const decltype(::device::mojom::Gamepad::mapping)& mapping(
      const ::device::mojom::GamepadPtr& input) {
    return input->mapping;
  }

  static const decltype(::device::mojom::Gamepad::pose)& pose(
      const ::device::mojom::GamepadPtr& input) {
    return input->pose;
  }

  static decltype(::device::mojom::Gamepad::hand) hand(
      const ::device::mojom::GamepadPtr& input) {
    return input->hand;
  }

  static decltype(::device::mojom::Gamepad::display_id) display_id(
      const ::device::mojom::GamepadPtr& input) {
    return input->display_id;
  }

  static bool Read(::device::mojom::Gamepad::DataView input, ::device::mojom::GamepadPtr* output);
};


template <>
struct COMPONENT_EXPORT(GAMEPAD_MOJOM) StructTraits<::device::mojom::GamepadEffectParameters::DataView,
                                         ::device::mojom::GamepadEffectParametersPtr> {
  static bool IsNull(const ::device::mojom::GamepadEffectParametersPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GamepadEffectParametersPtr* output) { output->reset(); }

  static decltype(::device::mojom::GamepadEffectParameters::duration) duration(
      const ::device::mojom::GamepadEffectParametersPtr& input) {
    return input->duration;
  }

  static decltype(::device::mojom::GamepadEffectParameters::start_delay) start_delay(
      const ::device::mojom::GamepadEffectParametersPtr& input) {
    return input->start_delay;
  }

  static decltype(::device::mojom::GamepadEffectParameters::strong_magnitude) strong_magnitude(
      const ::device::mojom::GamepadEffectParametersPtr& input) {
    return input->strong_magnitude;
  }

  static decltype(::device::mojom::GamepadEffectParameters::weak_magnitude) weak_magnitude(
      const ::device::mojom::GamepadEffectParametersPtr& input) {
    return input->weak_magnitude;
  }

  static bool Read(::device::mojom::GamepadEffectParameters::DataView input, ::device::mojom::GamepadEffectParametersPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_H_