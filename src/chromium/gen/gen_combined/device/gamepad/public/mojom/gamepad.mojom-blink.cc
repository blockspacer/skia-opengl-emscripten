// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/gamepad/public/mojom/gamepad.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "device/gamepad/public/mojom/gamepad.mojom-params-data.h"
#include "device/gamepad/public/mojom/gamepad.mojom-shared-message-ids.h"

#include "device/gamepad/public/mojom/gamepad.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_JUMBO_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_BLINK_JUMBO_H_
#include "device/gamepad/public/cpp/gamepad_mojom_traits.h"
#include "mojo/public/cpp/base/shared_memory_mojom_traits.h"
#endif
namespace device {
namespace mojom {
namespace blink {
GamepadQuaternion::GamepadQuaternion()
    : x(),
      y(),
      z(),
      w() {}

GamepadQuaternion::GamepadQuaternion(
    float x_in,
    float y_in,
    float z_in,
    float w_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      z(std::move(z_in)),
      w(std::move(w_in)) {}

GamepadQuaternion::~GamepadQuaternion() = default;

bool GamepadQuaternion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GamepadVector::GamepadVector()
    : x(),
      y(),
      z() {}

GamepadVector::GamepadVector(
    float x_in,
    float y_in,
    float z_in)
    : x(std::move(x_in)),
      y(std::move(y_in)),
      z(std::move(z_in)) {}

GamepadVector::~GamepadVector() = default;

bool GamepadVector::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GamepadButton::GamepadButton()
    : pressed(),
      touched(),
      value() {}

GamepadButton::GamepadButton(
    bool pressed_in,
    bool touched_in,
    double value_in)
    : pressed(std::move(pressed_in)),
      touched(std::move(touched_in)),
      value(std::move(value_in)) {}

GamepadButton::~GamepadButton() = default;

bool GamepadButton::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GamepadPose::GamepadPose()
    : orientation(),
      position(),
      angular_velocity(),
      linear_velocity(),
      angular_acceleration(),
      linear_acceleration() {}

GamepadPose::GamepadPose(
    const device::GamepadQuaternion& orientation_in,
    const device::GamepadVector& position_in,
    const device::GamepadVector& angular_velocity_in,
    const device::GamepadVector& linear_velocity_in,
    const device::GamepadVector& angular_acceleration_in,
    const device::GamepadVector& linear_acceleration_in)
    : orientation(std::move(orientation_in)),
      position(std::move(position_in)),
      angular_velocity(std::move(angular_velocity_in)),
      linear_velocity(std::move(linear_velocity_in)),
      angular_acceleration(std::move(angular_acceleration_in)),
      linear_acceleration(std::move(linear_acceleration_in)) {}

GamepadPose::~GamepadPose() = default;

bool GamepadPose::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GamepadHapticActuator::GamepadHapticActuator()
    : type() {}

GamepadHapticActuator::GamepadHapticActuator(
    device::GamepadHapticActuatorType type_in)
    : type(std::move(type_in)) {}

GamepadHapticActuator::~GamepadHapticActuator() = default;

bool GamepadHapticActuator::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Gamepad::Gamepad()
    : connected(),
      id(),
      timestamp(),
      axes(),
      buttons(),
      vibration_actuator(),
      mapping(),
      pose(),
      hand(),
      display_id() {}

Gamepad::Gamepad(
    bool connected_in,
    const WTF::Vector<uint16_t>& id_in,
    int64_t timestamp_in,
    const WTF::Vector<double>& axes_in,
    const WTF::Vector<device::GamepadButton>& buttons_in,
    const device::GamepadHapticActuator& vibration_actuator_in,
    const WTF::Vector<uint16_t>& mapping_in,
    const device::GamepadPose& pose_in,
    device::GamepadHand hand_in,
    uint32_t display_id_in)
    : connected(std::move(connected_in)),
      id(std::move(id_in)),
      timestamp(std::move(timestamp_in)),
      axes(std::move(axes_in)),
      buttons(std::move(buttons_in)),
      vibration_actuator(std::move(vibration_actuator_in)),
      mapping(std::move(mapping_in)),
      pose(std::move(pose_in)),
      hand(std::move(hand_in)),
      display_id(std::move(display_id_in)) {}

Gamepad::~Gamepad() = default;

bool Gamepad::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GamepadEffectParameters::GamepadEffectParameters()
    : duration(),
      start_delay(),
      strong_magnitude(),
      weak_magnitude() {}

GamepadEffectParameters::GamepadEffectParameters(
    double duration_in,
    double start_delay_in,
    double strong_magnitude_in,
    double weak_magnitude_in)
    : duration(std::move(duration_in)),
      start_delay(std::move(start_delay_in)),
      strong_magnitude(std::move(strong_magnitude_in)),
      weak_magnitude(std::move(weak_magnitude_in)) {}

GamepadEffectParameters::~GamepadEffectParameters() = default;
size_t GamepadEffectParameters::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->duration);
  seed = mojo::internal::WTFHash(seed, this->start_delay);
  seed = mojo::internal::WTFHash(seed, this->strong_magnitude);
  seed = mojo::internal::WTFHash(seed, this->weak_magnitude);
  return seed;
}

bool GamepadEffectParameters::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char GamepadObserver::Name_[] = "device.mojom.GamepadObserver";

GamepadObserverProxy::GamepadObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GamepadObserverProxy::GamepadConnected(
    uint32_t in_index, const device::Gamepad& in_gamepad) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadObserver::GamepadConnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadObserver_GamepadConnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadObserver_GamepadConnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->index = in_index;
  typename decltype(params->gamepad)::BaseType::BufferWriter
      gamepad_writer;
  mojo::internal::Serialize<::device::mojom::GamepadDataView>(
      in_gamepad, buffer, &gamepad_writer, &serialization_context);
  params->gamepad.Set(
      gamepad_writer.is_null() ? nullptr : gamepad_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gamepad.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gamepad in GamepadObserver.GamepadConnected request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadObserver::Name_);
  message.set_method_name("GamepadConnected");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GamepadObserverProxy::GamepadDisconnected(
    uint32_t in_index, const device::Gamepad& in_gamepad) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadObserver::GamepadDisconnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadObserver_GamepadDisconnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadObserver_GamepadDisconnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->index = in_index;
  typename decltype(params->gamepad)::BaseType::BufferWriter
      gamepad_writer;
  mojo::internal::Serialize<::device::mojom::GamepadDataView>(
      in_gamepad, buffer, &gamepad_writer, &serialization_context);
  params->gamepad.Set(
      gamepad_writer.is_null() ? nullptr : gamepad_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gamepad.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gamepad in GamepadObserver.GamepadDisconnected request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadObserver::Name_);
  message.set_method_name("GamepadDisconnected");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void GamepadObserverProxy::GamepadButtonOrAxisChanged(
    uint32_t in_index, const device::Gamepad& in_gamepad) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadObserver::GamepadButtonOrAxisChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadObserver_GamepadButtonOrAxisChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadObserver_GamepadButtonOrAxisChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->index = in_index;
  typename decltype(params->gamepad)::BaseType::BufferWriter
      gamepad_writer;
  mojo::internal::Serialize<::device::mojom::GamepadDataView>(
      in_gamepad, buffer, &gamepad_writer, &serialization_context);
  params->gamepad.Set(
      gamepad_writer.is_null() ? nullptr : gamepad_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->gamepad.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null gamepad in GamepadObserver.GamepadButtonOrAxisChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadObserver::Name_);
  message.set_method_name("GamepadButtonOrAxisChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool GamepadObserverStubDispatch::Accept(
    GamepadObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGamepadObserver_GamepadConnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadObserver::GamepadConnected",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GamepadObserver_GamepadConnected_Params_Data* params =
          reinterpret_cast<internal::GamepadObserver_GamepadConnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_index{};
      device::Gamepad p_gamepad{};
      GamepadObserver_GamepadConnected_ParamsDataView input_data_view(params, &serialization_context);
      
      p_index = input_data_view.index();
      if (!input_data_view.ReadGamepad(&p_gamepad))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GamepadConnected(
std::move(p_index), 
std::move(p_gamepad));
      return true;
    }
    case internal::kGamepadObserver_GamepadDisconnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadObserver::GamepadDisconnected",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GamepadObserver_GamepadDisconnected_Params_Data* params =
          reinterpret_cast<internal::GamepadObserver_GamepadDisconnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_index{};
      device::Gamepad p_gamepad{};
      GamepadObserver_GamepadDisconnected_ParamsDataView input_data_view(params, &serialization_context);
      
      p_index = input_data_view.index();
      if (!input_data_view.ReadGamepad(&p_gamepad))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GamepadDisconnected(
std::move(p_index), 
std::move(p_gamepad));
      return true;
    }
    case internal::kGamepadObserver_GamepadButtonOrAxisChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadObserver::GamepadButtonOrAxisChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GamepadObserver_GamepadButtonOrAxisChanged_Params_Data* params =
          reinterpret_cast<internal::GamepadObserver_GamepadButtonOrAxisChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_index{};
      device::Gamepad p_gamepad{};
      GamepadObserver_GamepadButtonOrAxisChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_index = input_data_view.index();
      if (!input_data_view.ReadGamepad(&p_gamepad))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GamepadButtonOrAxisChanged(
std::move(p_index), 
std::move(p_gamepad));
      return true;
    }
  }
  return false;
}

// static
bool GamepadObserverStubDispatch::AcceptWithResponder(
    GamepadObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGamepadObserver_GamepadConnected_Name: {
      break;
    }
    case internal::kGamepadObserver_GamepadDisconnected_Name: {
      break;
    }
    case internal::kGamepadObserver_GamepadButtonOrAxisChanged_Name: {
      break;
    }
  }
  return false;
}

bool GamepadObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GamepadObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kGamepadObserver_GamepadConnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadObserver_GamepadConnected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadObserver_GamepadDisconnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadObserver_GamepadDisconnected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadObserver_GamepadButtonOrAxisChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadObserver_GamepadButtonOrAxisChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char GamepadMonitor::Name_[] = "device.mojom.GamepadMonitor";
bool GamepadMonitor::GamepadStartPolling(base::ReadOnlySharedMemoryRegion* out_memory_region) {
  NOTREACHED();
  return false;
}
bool GamepadMonitor::GamepadStopPolling() {
  NOTREACHED();
  return false;
}
class GamepadMonitor_GamepadStartPolling_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  GamepadMonitor_GamepadStartPolling_HandleSyncResponse(
      bool* result, base::ReadOnlySharedMemoryRegion* out_memory_region)
      : result_(result), out_memory_region_(out_memory_region) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  base::ReadOnlySharedMemoryRegion* out_memory_region_;DISALLOW_COPY_AND_ASSIGN(GamepadMonitor_GamepadStartPolling_HandleSyncResponse);
};

class GamepadMonitor_GamepadStartPolling_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GamepadMonitor_GamepadStartPolling_ForwardToCallback(
      GamepadMonitor::GamepadStartPollingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GamepadMonitor::GamepadStartPollingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GamepadMonitor_GamepadStartPolling_ForwardToCallback);
};
class GamepadMonitor_GamepadStopPolling_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  GamepadMonitor_GamepadStopPolling_HandleSyncResponse(
      bool* result)
      : result_(result) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;DISALLOW_COPY_AND_ASSIGN(GamepadMonitor_GamepadStopPolling_HandleSyncResponse);
};

class GamepadMonitor_GamepadStopPolling_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GamepadMonitor_GamepadStopPolling_ForwardToCallback(
      GamepadMonitor::GamepadStopPollingCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GamepadMonitor::GamepadStopPollingCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GamepadMonitor_GamepadStopPolling_ForwardToCallback);
};

GamepadMonitorProxy::GamepadMonitorProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}
bool GamepadMonitorProxy::GamepadStartPolling(
    base::ReadOnlySharedMemoryRegion* out_param_memory_region) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStartPolling");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_GamepadStartPolling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_GamepadStartPolling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("GamepadStartPolling");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GamepadMonitor_GamepadStartPolling_HandleSyncResponse(
          &result, out_param_memory_region));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void GamepadMonitorProxy::GamepadStartPolling(
    GamepadStartPollingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStartPolling");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_GamepadStartPolling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_GamepadStartPolling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("GamepadStartPolling");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GamepadMonitor_GamepadStartPolling_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool GamepadMonitorProxy::GamepadStopPolling(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStopPolling");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_GamepadStopPolling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_GamepadStopPolling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("GamepadStopPolling");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GamepadMonitor_GamepadStopPolling_HandleSyncResponse(
          &result));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void GamepadMonitorProxy::GamepadStopPolling(
    GamepadStopPollingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStopPolling");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_GamepadStopPolling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_GamepadStopPolling_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("GamepadStopPolling");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GamepadMonitor_GamepadStopPolling_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GamepadMonitorProxy::SetObserver(
    GamepadObserverPtr in_gamepad_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::SetObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_SetObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_SetObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::GamepadObserverPtrDataView>(
      in_gamepad_observer, &params->gamepad_observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->gamepad_observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid gamepad_observer in GamepadMonitor.SetObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("SetObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class GamepadMonitor_GamepadStartPolling_ProxyToResponder {
 public:
  static GamepadMonitor::GamepadStartPollingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GamepadMonitor_GamepadStartPolling_ProxyToResponder> proxy(
        new GamepadMonitor_GamepadStartPolling_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GamepadMonitor_GamepadStartPolling_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GamepadMonitor_GamepadStartPolling_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  GamepadMonitor_GamepadStartPolling_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "GamepadMonitor::GamepadStartPollingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      base::ReadOnlySharedMemoryRegion in_memory_region);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GamepadMonitor_GamepadStartPolling_ProxyToResponder);
};

bool GamepadMonitor_GamepadStartPolling_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStartPollingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::ReadOnlySharedMemoryRegion p_memory_region{};
  GamepadMonitor_GamepadStartPolling_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMemoryRegion(&p_memory_region))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GamepadMonitor::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_memory_region));
  return true;
}

void GamepadMonitor_GamepadStartPolling_ProxyToResponder::Run(
    base::ReadOnlySharedMemoryRegion in_memory_region) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_GamepadStartPolling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->memory_region)::BaseType::BufferWriter
      memory_region_writer;
  mojo::internal::Serialize<::mojo_base::mojom::ReadOnlySharedMemoryRegionDataView>(
      in_memory_region, buffer, &memory_region_writer, &serialization_context);
  params->memory_region.Set(
      memory_region_writer.is_null() ? nullptr : memory_region_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->memory_region.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null memory_region in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStartPollingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("GamepadStartPolling");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool GamepadMonitor_GamepadStartPolling_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data* params =
      reinterpret_cast<internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::ReadOnlySharedMemoryRegion p_memory_region{};
  GamepadMonitor_GamepadStartPolling_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadMemoryRegion(&p_memory_region))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GamepadMonitor::Name_, 0, true);
    return false;
  }
  *out_memory_region_ = std::move(p_memory_region);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}
class GamepadMonitor_GamepadStopPolling_ProxyToResponder {
 public:
  static GamepadMonitor::GamepadStopPollingCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GamepadMonitor_GamepadStopPolling_ProxyToResponder> proxy(
        new GamepadMonitor_GamepadStopPolling_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GamepadMonitor_GamepadStopPolling_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GamepadMonitor_GamepadStopPolling_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  GamepadMonitor_GamepadStopPolling_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "GamepadMonitor::GamepadStopPollingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GamepadMonitor_GamepadStopPolling_ProxyToResponder);
};

bool GamepadMonitor_GamepadStopPolling_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStopPollingCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GamepadMonitor_GamepadStopPolling_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GamepadMonitor::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void GamepadMonitor_GamepadStopPolling_ProxyToResponder::Run(
    ) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadMonitor_GamepadStopPolling_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStopPollingCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadMonitor::Name_);
  message.set_method_name("GamepadStopPolling");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool GamepadMonitor_GamepadStopPolling_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data* params =
      reinterpret_cast<internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GamepadMonitor_GamepadStopPolling_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GamepadMonitor::Name_, 1, true);
    return false;
  }
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool GamepadMonitorStubDispatch::Accept(
    GamepadMonitor* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGamepadMonitor_GamepadStartPolling_Name: {
      break;
    }
    case internal::kGamepadMonitor_GamepadStopPolling_Name: {
      break;
    }
    case internal::kGamepadMonitor_SetObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadMonitor::SetObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::GamepadMonitor_SetObserver_Params_Data* params =
          reinterpret_cast<internal::GamepadMonitor_SetObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GamepadObserverPtr p_gamepad_observer{};
      GamepadMonitor_SetObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_gamepad_observer =
          input_data_view.TakeGamepadObserver<decltype(p_gamepad_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadMonitor::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetObserver(
std::move(p_gamepad_observer));
      return true;
    }
  }
  return false;
}

// static
bool GamepadMonitorStubDispatch::AcceptWithResponder(
    GamepadMonitor* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGamepadMonitor_GamepadStartPolling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStartPolling",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::GamepadMonitor_GamepadStartPolling_Params_Data* params =
          reinterpret_cast<
              internal::GamepadMonitor_GamepadStartPolling_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GamepadMonitor_GamepadStartPolling_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadMonitor::Name_, 0, false);
        return false;
      }
      GamepadMonitor::GamepadStartPollingCallback callback =
          GamepadMonitor_GamepadStartPolling_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GamepadStartPolling(std::move(callback));
      return true;
    }
    case internal::kGamepadMonitor_GamepadStopPolling_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadMonitor::GamepadStopPolling",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::GamepadMonitor_GamepadStopPolling_Params_Data* params =
          reinterpret_cast<
              internal::GamepadMonitor_GamepadStopPolling_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      GamepadMonitor_GamepadStopPolling_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadMonitor::Name_, 1, false);
        return false;
      }
      GamepadMonitor::GamepadStopPollingCallback callback =
          GamepadMonitor_GamepadStopPolling_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GamepadStopPolling(std::move(callback));
      return true;
    }
    case internal::kGamepadMonitor_SetObserver_Name: {
      break;
    }
  }
  return false;
}

bool GamepadMonitorRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GamepadMonitor RequestValidator");

  switch (message->header()->name) {
    case internal::kGamepadMonitor_GamepadStartPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadMonitor_GamepadStartPolling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadMonitor_GamepadStopPolling_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadMonitor_GamepadStopPolling_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadMonitor_SetObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadMonitor_SetObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool GamepadMonitorResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GamepadMonitor ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGamepadMonitor_GamepadStartPolling_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadMonitor_GamepadStartPolling_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadMonitor_GamepadStopPolling_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadMonitor_GamepadStopPolling_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char GamepadHapticsManager::Name_[] = "device.mojom.GamepadHapticsManager";

class GamepadHapticsManager_PlayVibrationEffectOnce_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GamepadHapticsManager_PlayVibrationEffectOnce_ForwardToCallback(
      GamepadHapticsManager::PlayVibrationEffectOnceCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GamepadHapticsManager::PlayVibrationEffectOnceCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManager_PlayVibrationEffectOnce_ForwardToCallback);
};

class GamepadHapticsManager_ResetVibrationActuator_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GamepadHapticsManager_ResetVibrationActuator_ForwardToCallback(
      GamepadHapticsManager::ResetVibrationActuatorCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GamepadHapticsManager::ResetVibrationActuatorCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManager_ResetVibrationActuator_ForwardToCallback);
};

GamepadHapticsManagerProxy::GamepadHapticsManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void GamepadHapticsManagerProxy::PlayVibrationEffectOnce(
    uint32_t in_pad_index, GamepadHapticEffectType in_type, GamepadEffectParametersPtr in_params, PlayVibrationEffectOnceCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::PlayVibrationEffectOnce");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadHapticsManager_PlayVibrationEffectOnce_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->pad_index = in_pad_index;
  mojo::internal::Serialize<::device::mojom::GamepadHapticEffectType>(
      in_type, &params->type);
  typename decltype(params->params)::BaseType::BufferWriter
      params_writer;
  mojo::internal::Serialize<::device::mojom::GamepadEffectParametersDataView>(
      in_params, buffer, &params_writer, &serialization_context);
  params->params.Set(
      params_writer.is_null() ? nullptr : params_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in GamepadHapticsManager.PlayVibrationEffectOnce request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadHapticsManager::Name_);
  message.set_method_name("PlayVibrationEffectOnce");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GamepadHapticsManager_PlayVibrationEffectOnce_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void GamepadHapticsManagerProxy::ResetVibrationActuator(
    uint32_t in_pad_index, ResetVibrationActuatorCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::ResetVibrationActuator");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadHapticsManager_ResetVibrationActuator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->pad_index = in_pad_index;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadHapticsManager::Name_);
  message.set_method_name("ResetVibrationActuator");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new GamepadHapticsManager_ResetVibrationActuator_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder {
 public:
  static GamepadHapticsManager::PlayVibrationEffectOnceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder> proxy(
        new GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "GamepadHapticsManager::PlayVibrationEffectOnceCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GamepadHapticsResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder);
};

bool GamepadHapticsManager_PlayVibrationEffectOnce_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::PlayVibrationEffectOnceCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GamepadHapticsResult p_result{};
  GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GamepadHapticsManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder::Run(
    GamepadHapticsResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadHapticsManager_PlayVibrationEffectOnce_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::GamepadHapticsResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::PlayVibrationEffectOnceCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadHapticsManager::Name_);
  message.set_method_name("PlayVibrationEffectOnce");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder {
 public:
  static GamepadHapticsManager::ResetVibrationActuatorCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder> proxy(
        new GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "GamepadHapticsManager::ResetVibrationActuatorCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GamepadHapticsResult in_result);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder);
};

bool GamepadHapticsManager_ResetVibrationActuator_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::ResetVibrationActuatorCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data* params =
      reinterpret_cast<
          internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  GamepadHapticsResult p_result{};
  GamepadHapticsManager_ResetVibrationActuator_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        GamepadHapticsManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder::Run(
    GamepadHapticsResult in_result) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kGamepadHapticsManager_ResetVibrationActuator_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::device::mojom::internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::device::mojom::GamepadHapticsResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::ResetVibrationActuatorCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(GamepadHapticsManager::Name_);
  message.set_method_name("ResetVibrationActuator");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool GamepadHapticsManagerStubDispatch::Accept(
    GamepadHapticsManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kGamepadHapticsManager_PlayVibrationEffectOnce_Name: {
      break;
    }
    case internal::kGamepadHapticsManager_ResetVibrationActuator_Name: {
      break;
    }
  }
  return false;
}

// static
bool GamepadHapticsManagerStubDispatch::AcceptWithResponder(
    GamepadHapticsManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kGamepadHapticsManager_PlayVibrationEffectOnce_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::PlayVibrationEffectOnce",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data* params =
          reinterpret_cast<
              internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_pad_index{};
      GamepadHapticEffectType p_type{};
      GamepadEffectParametersPtr p_params{};
      GamepadHapticsManager_PlayVibrationEffectOnce_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pad_index = input_data_view.pad_index();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadHapticsManager::Name_, 0, false);
        return false;
      }
      GamepadHapticsManager::PlayVibrationEffectOnceCallback callback =
          GamepadHapticsManager_PlayVibrationEffectOnce_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PlayVibrationEffectOnce(
std::move(p_pad_index), 
std::move(p_type), 
std::move(p_params), std::move(callback));
      return true;
    }
    case internal::kGamepadHapticsManager_ResetVibrationActuator_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::GamepadHapticsManager::ResetVibrationActuator",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data* params =
          reinterpret_cast<
              internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_pad_index{};
      GamepadHapticsManager_ResetVibrationActuator_ParamsDataView input_data_view(params, &serialization_context);
      
      p_pad_index = input_data_view.pad_index();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            GamepadHapticsManager::Name_, 1, false);
        return false;
      }
      GamepadHapticsManager::ResetVibrationActuatorCallback callback =
          GamepadHapticsManager_ResetVibrationActuator_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ResetVibrationActuator(
std::move(p_pad_index), std::move(callback));
      return true;
    }
  }
  return false;
}

bool GamepadHapticsManagerRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GamepadHapticsManager RequestValidator");

  switch (message->header()->name) {
    case internal::kGamepadHapticsManager_PlayVibrationEffectOnce_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadHapticsManager_PlayVibrationEffectOnce_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadHapticsManager_ResetVibrationActuator_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadHapticsManager_ResetVibrationActuator_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool GamepadHapticsManagerResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "GamepadHapticsManager ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kGamepadHapticsManager_PlayVibrationEffectOnce_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadHapticsManager_PlayVibrationEffectOnce_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kGamepadHapticsManager_ResetVibrationActuator_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GamepadHapticsManager_ResetVibrationActuator_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


// static
bool StructTraits<::device::mojom::blink::GamepadQuaternion::DataView, ::device::mojom::blink::GamepadQuaternionPtr>::Read(
    ::device::mojom::blink::GamepadQuaternion::DataView input,
    ::device::mojom::blink::GamepadQuaternionPtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadQuaternionPtr result(::device::mojom::blink::GamepadQuaternion::New());
  
      result->x = input.x();
      result->y = input.y();
      result->z = input.z();
      result->w = input.w();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::GamepadVector::DataView, ::device::mojom::blink::GamepadVectorPtr>::Read(
    ::device::mojom::blink::GamepadVector::DataView input,
    ::device::mojom::blink::GamepadVectorPtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadVectorPtr result(::device::mojom::blink::GamepadVector::New());
  
      result->x = input.x();
      result->y = input.y();
      result->z = input.z();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::GamepadButton::DataView, ::device::mojom::blink::GamepadButtonPtr>::Read(
    ::device::mojom::blink::GamepadButton::DataView input,
    ::device::mojom::blink::GamepadButtonPtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadButtonPtr result(::device::mojom::blink::GamepadButton::New());
  
      result->pressed = input.pressed();
      result->touched = input.touched();
      result->value = input.value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::GamepadPose::DataView, ::device::mojom::blink::GamepadPosePtr>::Read(
    ::device::mojom::blink::GamepadPose::DataView input,
    ::device::mojom::blink::GamepadPosePtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadPosePtr result(::device::mojom::blink::GamepadPose::New());
  
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadPosition(&result->position))
        success = false;
      if (!input.ReadAngularVelocity(&result->angular_velocity))
        success = false;
      if (!input.ReadLinearVelocity(&result->linear_velocity))
        success = false;
      if (!input.ReadAngularAcceleration(&result->angular_acceleration))
        success = false;
      if (!input.ReadLinearAcceleration(&result->linear_acceleration))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::GamepadHapticActuator::DataView, ::device::mojom::blink::GamepadHapticActuatorPtr>::Read(
    ::device::mojom::blink::GamepadHapticActuator::DataView input,
    ::device::mojom::blink::GamepadHapticActuatorPtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadHapticActuatorPtr result(::device::mojom::blink::GamepadHapticActuator::New());
  
      if (!input.ReadType(&result->type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::Gamepad::DataView, ::device::mojom::blink::GamepadPtr>::Read(
    ::device::mojom::blink::Gamepad::DataView input,
    ::device::mojom::blink::GamepadPtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadPtr result(::device::mojom::blink::Gamepad::New());
  
      result->connected = input.connected();
      if (!input.ReadId(&result->id))
        success = false;
      result->timestamp = input.timestamp();
      if (!input.ReadAxes(&result->axes))
        success = false;
      if (!input.ReadButtons(&result->buttons))
        success = false;
      if (!input.ReadVibrationActuator(&result->vibration_actuator))
        success = false;
      if (!input.ReadMapping(&result->mapping))
        success = false;
      if (!input.ReadPose(&result->pose))
        success = false;
      if (!input.ReadHand(&result->hand))
        success = false;
      result->display_id = input.display_id();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::device::mojom::blink::GamepadEffectParameters::DataView, ::device::mojom::blink::GamepadEffectParametersPtr>::Read(
    ::device::mojom::blink::GamepadEffectParameters::DataView input,
    ::device::mojom::blink::GamepadEffectParametersPtr* output) {
  bool success = true;
  ::device::mojom::blink::GamepadEffectParametersPtr result(::device::mojom::blink::GamepadEffectParameters::New());
  
      result->duration = input.duration();
      result->start_delay = input.start_delay();
      result->strong_magnitude = input.strong_magnitude();
      result->weak_magnitude = input.weak_magnitude();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif