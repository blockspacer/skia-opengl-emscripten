// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_H_

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
#include "services/device/public/mojom/sensor_provider.mojom-shared.h"
#include "services/device/public/mojom/sensor_provider.mojom-forward.h"
#include "services/device/public/mojom/sensor.mojom.h"
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

class SensorProviderProxy;

template <typename ImplRefTraits>
class SensorProviderStub;

class SensorProviderRequestValidator;
class SensorProviderResponseValidator;


class  SensorProvider
    : public SensorProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SensorProviderInterfaceBase;
  using Proxy_ = SensorProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = SensorProviderStub<ImplRefTraits>;

  using RequestValidator_ = SensorProviderRequestValidator;
  using ResponseValidator_ = SensorProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSensorMinVersion = 0,
  };
  virtual ~SensorProvider() {}


  using GetSensorCallback = base::OnceCallback<void(SensorCreationResult, SensorInitParamsPtr)>;
  
  virtual void GetSensor(::device::mojom::SensorType type, GetSensorCallback callback) = 0;
};

class  SensorProviderProxy
    : public SensorProvider {
 public:
  using InterfaceType = SensorProvider;

  explicit SensorProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetSensor(::device::mojom::SensorType type, GetSensorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SensorProviderStubDispatch {
 public:
  static bool Accept(SensorProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SensorProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SensorProvider>>
class SensorProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SensorProviderStub() {}
  ~SensorProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SensorProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SensorProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SensorProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SensorProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  SensorInitParams {
 public:
  using DataView = SensorInitParamsDataView;
  using Data_ = internal::SensorInitParams_Data;
  
  static constexpr uint64_t kReadBufferSizeForTests = 48ULL;

  template <typename... Args>
  static SensorInitParamsPtr New(Args&&... args) {
    return SensorInitParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SensorInitParamsPtr From(const U& u) {
    return mojo::TypeConverter<SensorInitParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SensorInitParams>::Convert(*this);
  }


  SensorInitParams();

  SensorInitParams(
      ::device::mojom::SensorPtrInfo sensor,
      ::device::mojom::SensorClientRequest client_request,
      mojo::ScopedSharedBufferHandle memory,
      uint64_t buffer_offset,
      ::device::mojom::ReportingMode mode,
      const device::PlatformSensorConfiguration& default_configuration,
      double maximum_frequency,
      double minimum_frequency);

  ~SensorInitParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SensorInitParamsPtr>
  SensorInitParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SensorInitParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SensorInitParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SensorInitParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SensorInitParams_UnserializedMessageContext<
            UserType, SensorInitParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SensorInitParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SensorInitParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SensorInitParams_UnserializedMessageContext<
            UserType, SensorInitParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SensorInitParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::device::mojom::SensorPtrInfo sensor;
  
  ::device::mojom::SensorClientRequest client_request;
  
  mojo::ScopedSharedBufferHandle memory;
  
  uint64_t buffer_offset;
  
  ::device::mojom::ReportingMode mode;
  
  device::PlatformSensorConfiguration default_configuration;
  
  double maximum_frequency;
  
  double minimum_frequency;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SensorInitParams);
};

template <typename StructPtrType>
SensorInitParamsPtr SensorInitParams::Clone() const {
  return New(
      mojo::Clone(sensor),
      mojo::Clone(client_request),
      mojo::Clone(memory),
      mojo::Clone(buffer_offset),
      mojo::Clone(mode),
      mojo::Clone(default_configuration),
      mojo::Clone(maximum_frequency),
      mojo::Clone(minimum_frequency)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SensorInitParams>::value>::type*>
bool SensorInitParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->sensor, other_struct.sensor))
    return false;
  if (!mojo::Equals(this->client_request, other_struct.client_request))
    return false;
  if (!mojo::Equals(this->memory, other_struct.memory))
    return false;
  if (!mojo::Equals(this->buffer_offset, other_struct.buffer_offset))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->default_configuration, other_struct.default_configuration))
    return false;
  if (!mojo::Equals(this->maximum_frequency, other_struct.maximum_frequency))
    return false;
  if (!mojo::Equals(this->minimum_frequency, other_struct.minimum_frequency))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::SensorInitParams::DataView,
                                         ::device::mojom::SensorInitParamsPtr> {
  static bool IsNull(const ::device::mojom::SensorInitParamsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::SensorInitParamsPtr* output) { output->reset(); }

  static  decltype(::device::mojom::SensorInitParams::sensor)& sensor(
       ::device::mojom::SensorInitParamsPtr& input) {
    return input->sensor;
  }

  static  decltype(::device::mojom::SensorInitParams::client_request)& client_request(
       ::device::mojom::SensorInitParamsPtr& input) {
    return input->client_request;
  }

  static  decltype(::device::mojom::SensorInitParams::memory)& memory(
       ::device::mojom::SensorInitParamsPtr& input) {
    return input->memory;
  }

  static decltype(::device::mojom::SensorInitParams::buffer_offset) buffer_offset(
      const ::device::mojom::SensorInitParamsPtr& input) {
    return input->buffer_offset;
  }

  static decltype(::device::mojom::SensorInitParams::mode) mode(
      const ::device::mojom::SensorInitParamsPtr& input) {
    return input->mode;
  }

  static const decltype(::device::mojom::SensorInitParams::default_configuration)& default_configuration(
      const ::device::mojom::SensorInitParamsPtr& input) {
    return input->default_configuration;
  }

  static decltype(::device::mojom::SensorInitParams::maximum_frequency) maximum_frequency(
      const ::device::mojom::SensorInitParamsPtr& input) {
    return input->maximum_frequency;
  }

  static decltype(::device::mojom::SensorInitParams::minimum_frequency) minimum_frequency(
      const ::device::mojom::SensorInitParamsPtr& input) {
    return input->minimum_frequency;
  }

  static bool Read(::device::mojom::SensorInitParams::DataView input, ::device::mojom::SensorInitParamsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_H_