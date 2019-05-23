// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_H_

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
#include "services/device/public/mojom/input_service.mojom-shared.h"
#include "services/device/public/mojom/input_service.mojom-forward.h"
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




namespace device {
namespace mojom {

class InputDeviceManagerClientProxy;

template <typename ImplRefTraits>
class InputDeviceManagerClientStub;

class InputDeviceManagerClientRequestValidator;


class  InputDeviceManagerClient
    : public InputDeviceManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InputDeviceManagerClientInterfaceBase;
  using Proxy_ = InputDeviceManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputDeviceManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = InputDeviceManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInputDeviceAddedMinVersion = 0,
    kInputDeviceRemovedMinVersion = 0,
  };
  virtual ~InputDeviceManagerClient() {}

  
  virtual void InputDeviceAdded(InputDeviceInfoPtr device_info) = 0;

  
  virtual void InputDeviceRemoved(const std::string& id) = 0;
};

class InputDeviceManagerProxy;

template <typename ImplRefTraits>
class InputDeviceManagerStub;

class InputDeviceManagerRequestValidator;
class InputDeviceManagerResponseValidator;


class  InputDeviceManager
    : public InputDeviceManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InputDeviceManagerInterfaceBase;
  using Proxy_ = InputDeviceManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = InputDeviceManagerStub<ImplRefTraits>;

  using RequestValidator_ = InputDeviceManagerRequestValidator;
  using ResponseValidator_ = InputDeviceManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDevicesAndSetClientMinVersion = 0,
    kGetDevicesMinVersion = 0,
  };
  virtual ~InputDeviceManager() {}


  using GetDevicesAndSetClientCallback = base::OnceCallback<void(std::vector<InputDeviceInfoPtr>)>;
  
  virtual void GetDevicesAndSetClient(InputDeviceManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) = 0;


  using GetDevicesCallback = base::OnceCallback<void(std::vector<InputDeviceInfoPtr>)>;
  
  virtual void GetDevices(GetDevicesCallback callback) = 0;
};

class  InputDeviceManagerClientProxy
    : public InputDeviceManagerClient {
 public:
  using InterfaceType = InputDeviceManagerClient;

  explicit InputDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void InputDeviceAdded(InputDeviceInfoPtr device_info) final;
  void InputDeviceRemoved(const std::string& id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  InputDeviceManagerProxy
    : public InputDeviceManager {
 public:
  using InterfaceType = InputDeviceManager;

  explicit InputDeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevicesAndSetClient(InputDeviceManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) final;
  void GetDevices(GetDevicesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InputDeviceManagerClientStubDispatch {
 public:
  static bool Accept(InputDeviceManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputDeviceManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputDeviceManagerClient>>
class InputDeviceManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputDeviceManagerClientStub() {}
  ~InputDeviceManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputDeviceManagerStubDispatch {
 public:
  static bool Accept(InputDeviceManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InputDeviceManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InputDeviceManager>>
class InputDeviceManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InputDeviceManagerStub() {}
  ~InputDeviceManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InputDeviceManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InputDeviceManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputDeviceManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InputDeviceManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  InputDeviceInfo {
 public:
  using DataView = InputDeviceInfoDataView;
  using Data_ = internal::InputDeviceInfo_Data;

  template <typename... Args>
  static InputDeviceInfoPtr New(Args&&... args) {
    return InputDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static InputDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<InputDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InputDeviceInfo>::Convert(*this);
  }


  InputDeviceInfo();

  InputDeviceInfo(
      const std::string& id,
      const std::string& name,
      InputDeviceSubsystem subsystem,
      InputDeviceType type,
      bool is_accelerometer,
      bool is_joystick,
      bool is_key,
      bool is_keyboard,
      bool is_mouse,
      bool is_tablet,
      bool is_touchpad,
      bool is_touchscreen);

  ~InputDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InputDeviceInfoPtr>
  InputDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InputDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        InputDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        InputDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::InputDeviceInfo_UnserializedMessageContext<
            UserType, InputDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<InputDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return InputDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::InputDeviceInfo_UnserializedMessageContext<
            UserType, InputDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<InputDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string id;
  
  std::string name;
  
  InputDeviceSubsystem subsystem;
  
  InputDeviceType type;
  
  bool is_accelerometer;
  
  bool is_joystick;
  
  bool is_key;
  
  bool is_keyboard;
  
  bool is_mouse;
  
  bool is_tablet;
  
  bool is_touchpad;
  
  bool is_touchscreen;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
InputDeviceInfoPtr InputDeviceInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(subsystem),
      mojo::Clone(type),
      mojo::Clone(is_accelerometer),
      mojo::Clone(is_joystick),
      mojo::Clone(is_key),
      mojo::Clone(is_keyboard),
      mojo::Clone(is_mouse),
      mojo::Clone(is_tablet),
      mojo::Clone(is_touchpad),
      mojo::Clone(is_touchscreen)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InputDeviceInfo>::value>::type*>
bool InputDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->subsystem, other_struct.subsystem))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->is_accelerometer, other_struct.is_accelerometer))
    return false;
  if (!mojo::Equals(this->is_joystick, other_struct.is_joystick))
    return false;
  if (!mojo::Equals(this->is_key, other_struct.is_key))
    return false;
  if (!mojo::Equals(this->is_keyboard, other_struct.is_keyboard))
    return false;
  if (!mojo::Equals(this->is_mouse, other_struct.is_mouse))
    return false;
  if (!mojo::Equals(this->is_tablet, other_struct.is_tablet))
    return false;
  if (!mojo::Equals(this->is_touchpad, other_struct.is_touchpad))
    return false;
  if (!mojo::Equals(this->is_touchscreen, other_struct.is_touchscreen))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::InputDeviceInfo::DataView,
                                         ::device::mojom::InputDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::InputDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::InputDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::InputDeviceInfo::id)& id(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->id;
  }

  static const decltype(::device::mojom::InputDeviceInfo::name)& name(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->name;
  }

  static decltype(::device::mojom::InputDeviceInfo::subsystem) subsystem(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->subsystem;
  }

  static decltype(::device::mojom::InputDeviceInfo::type) type(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->type;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_accelerometer) is_accelerometer(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_accelerometer;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_joystick) is_joystick(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_joystick;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_key) is_key(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_key;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_keyboard) is_keyboard(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_keyboard;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_mouse) is_mouse(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_mouse;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_tablet) is_tablet(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_tablet;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_touchpad) is_touchpad(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_touchpad;
  }

  static decltype(::device::mojom::InputDeviceInfo::is_touchscreen) is_touchscreen(
      const ::device::mojom::InputDeviceInfoPtr& input) {
    return input->is_touchscreen;
  }

  static bool Read(::device::mojom::InputDeviceInfo::DataView input, ::device::mojom::InputDeviceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_INPUT_SERVICE_MOJOM_H_