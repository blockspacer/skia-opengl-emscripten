// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_H_

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
#include "services/device/public/mojom/sensor.mojom-shared.h"
#include "services/device/public/mojom/sensor.mojom-forward.h"
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
#include "services/device/public/cpp/generic_sensor/platform_sensor_configuration.h"




namespace device {
namespace mojom {

class SensorProxy;

template <typename ImplRefTraits>
class SensorStub;

class SensorRequestValidator;
class SensorResponseValidator;


class  Sensor
    : public SensorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SensorInterfaceBase;
  using Proxy_ = SensorProxy;

  template <typename ImplRefTraits>
  using Stub_ = SensorStub<ImplRefTraits>;

  using RequestValidator_ = SensorRequestValidator;
  using ResponseValidator_ = SensorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDefaultConfigurationMinVersion = 0,
    kAddConfigurationMinVersion = 0,
    kRemoveConfigurationMinVersion = 0,
    kSuspendMinVersion = 0,
    kResumeMinVersion = 0,
    kConfigureReadingChangeNotificationsMinVersion = 0,
  };
  virtual ~Sensor() {}


  using GetDefaultConfigurationCallback = base::OnceCallback<void(const device::PlatformSensorConfiguration&)>;
  
  virtual void GetDefaultConfiguration(GetDefaultConfigurationCallback callback) = 0;


  using AddConfigurationCallback = base::OnceCallback<void(bool)>;
  
  virtual void AddConfiguration(const device::PlatformSensorConfiguration& configuration, AddConfigurationCallback callback) = 0;

  
  virtual void RemoveConfiguration(const device::PlatformSensorConfiguration& configuration) = 0;

  
  virtual void Suspend() = 0;

  
  virtual void Resume() = 0;

  
  virtual void ConfigureReadingChangeNotifications(bool enabled) = 0;
};

class SensorClientProxy;

template <typename ImplRefTraits>
class SensorClientStub;

class SensorClientRequestValidator;


class  SensorClient
    : public SensorClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SensorClientInterfaceBase;
  using Proxy_ = SensorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SensorClientStub<ImplRefTraits>;

  using RequestValidator_ = SensorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRaiseErrorMinVersion = 0,
    kSensorReadingChangedMinVersion = 0,
  };
  virtual ~SensorClient() {}

  
  virtual void RaiseError() = 0;

  
  virtual void SensorReadingChanged() = 0;
};

class  SensorProxy
    : public Sensor {
 public:
  using InterfaceType = Sensor;

  explicit SensorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDefaultConfiguration(GetDefaultConfigurationCallback callback) final;
  void AddConfiguration(const device::PlatformSensorConfiguration& configuration, AddConfigurationCallback callback) final;
  void RemoveConfiguration(const device::PlatformSensorConfiguration& configuration) final;
  void Suspend() final;
  void Resume() final;
  void ConfigureReadingChangeNotifications(bool enabled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  SensorClientProxy
    : public SensorClient {
 public:
  using InterfaceType = SensorClient;

  explicit SensorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RaiseError() final;
  void SensorReadingChanged() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SensorStubDispatch {
 public:
  static bool Accept(Sensor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Sensor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Sensor>>
class SensorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SensorStub() {}
  ~SensorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SensorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SensorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SensorClientStubDispatch {
 public:
  static bool Accept(SensorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SensorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SensorClient>>
class SensorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SensorClientStub() {}
  ~SensorClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SensorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SensorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SensorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SensorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SensorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  SensorConfiguration {
 public:
  using DataView = SensorConfigurationDataView;
  using Data_ = internal::SensorConfiguration_Data;

  template <typename... Args>
  static SensorConfigurationPtr New(Args&&... args) {
    return SensorConfigurationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SensorConfigurationPtr From(const U& u) {
    return mojo::TypeConverter<SensorConfigurationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SensorConfiguration>::Convert(*this);
  }


  SensorConfiguration();

  explicit SensorConfiguration(
      double frequency);

  ~SensorConfiguration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SensorConfigurationPtr>
  SensorConfigurationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SensorConfiguration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SensorConfiguration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SensorConfiguration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SensorConfiguration_UnserializedMessageContext<
            UserType, SensorConfiguration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SensorConfiguration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SensorConfiguration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SensorConfiguration_UnserializedMessageContext<
            UserType, SensorConfiguration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SensorConfiguration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  double frequency;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SensorConfigurationPtr SensorConfiguration::Clone() const {
  return New(
      mojo::Clone(frequency)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SensorConfiguration>::value>::type*>
bool SensorConfiguration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frequency, other_struct.frequency))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::SensorConfiguration::DataView,
                                         ::device::mojom::SensorConfigurationPtr> {
  static bool IsNull(const ::device::mojom::SensorConfigurationPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SensorConfigurationPtr* output) { output->reset(); }

  static decltype(::device::mojom::SensorConfiguration::frequency) frequency(
      const ::device::mojom::SensorConfigurationPtr& input) {
    return input->frequency;
  }

  static bool Read(::device::mojom::SensorConfiguration::DataView input, ::device::mojom::SensorConfigurationPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_MOJOM_H_