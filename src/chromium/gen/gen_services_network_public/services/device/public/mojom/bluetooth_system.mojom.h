// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_H_

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
#include "services/device/public/mojom/bluetooth_system.mojom-shared.h"
#include "services/device/public/mojom/bluetooth_system.mojom-forward.h"
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

class BluetoothSystemFactoryProxy;

template <typename ImplRefTraits>
class BluetoothSystemFactoryStub;

class BluetoothSystemFactoryRequestValidator;


class  BluetoothSystemFactory
    : public BluetoothSystemFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BluetoothSystemFactoryInterfaceBase;
  using Proxy_ = BluetoothSystemFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = BluetoothSystemFactoryStub<ImplRefTraits>;

  using RequestValidator_ = BluetoothSystemFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateMinVersion = 0,
  };
  virtual ~BluetoothSystemFactory() {}

  
  virtual void Create(BluetoothSystemRequest system, BluetoothSystemClientPtr system_client) = 0;
};

class BluetoothSystemProxy;

template <typename ImplRefTraits>
class BluetoothSystemStub;

class BluetoothSystemRequestValidator;
class BluetoothSystemResponseValidator;


class  BluetoothSystem
    : public BluetoothSystemInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BluetoothSystemInterfaceBase;
  using Proxy_ = BluetoothSystemProxy;

  template <typename ImplRefTraits>
  using Stub_ = BluetoothSystemStub<ImplRefTraits>;

  using RequestValidator_ = BluetoothSystemRequestValidator;
  using ResponseValidator_ = BluetoothSystemResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetStateMinVersion = 0,
    kSetPoweredMinVersion = 0,
    kGetScanStateMinVersion = 0,
    kStartScanMinVersion = 0,
    kStopScanMinVersion = 0,
    kGetAvailableDevicesMinVersion = 0,
  };
  
  using State = BluetoothSystem_State;
  
  using SetPoweredResult = BluetoothSystem_SetPoweredResult;
  
  using ScanState = BluetoothSystem_ScanState;
  
  using StartScanResult = BluetoothSystem_StartScanResult;
  
  using StopScanResult = BluetoothSystem_StopScanResult;
  virtual ~BluetoothSystem() {}


  using GetStateCallback = base::OnceCallback<void(BluetoothSystem::State)>;
  
  virtual void GetState(GetStateCallback callback) = 0;


  using SetPoweredCallback = base::OnceCallback<void(BluetoothSystem::SetPoweredResult)>;
  
  virtual void SetPowered(bool powered, SetPoweredCallback callback) = 0;


  using GetScanStateCallback = base::OnceCallback<void(BluetoothSystem::ScanState)>;
  
  virtual void GetScanState(GetScanStateCallback callback) = 0;


  using StartScanCallback = base::OnceCallback<void(BluetoothSystem::StartScanResult)>;
  
  virtual void StartScan(StartScanCallback callback) = 0;


  using StopScanCallback = base::OnceCallback<void(BluetoothSystem::StopScanResult)>;
  
  virtual void StopScan(StopScanCallback callback) = 0;


  using GetAvailableDevicesCallback = base::OnceCallback<void(std::vector<BluetoothDeviceInfoPtr>)>;
  
  virtual void GetAvailableDevices(GetAvailableDevicesCallback callback) = 0;
};

class BluetoothSystemClientProxy;

template <typename ImplRefTraits>
class BluetoothSystemClientStub;

class BluetoothSystemClientRequestValidator;


class  BluetoothSystemClient
    : public BluetoothSystemClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BluetoothSystemClientInterfaceBase;
  using Proxy_ = BluetoothSystemClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = BluetoothSystemClientStub<ImplRefTraits>;

  using RequestValidator_ = BluetoothSystemClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnStateChangedMinVersion = 0,
    kOnScanStateChangedMinVersion = 0,
  };
  virtual ~BluetoothSystemClient() {}

  
  virtual void OnStateChanged(BluetoothSystem::State new_state) = 0;

  
  virtual void OnScanStateChanged(BluetoothSystem::ScanState new_state) = 0;
};

class  BluetoothSystemFactoryProxy
    : public BluetoothSystemFactory {
 public:
  using InterfaceType = BluetoothSystemFactory;

  explicit BluetoothSystemFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void Create(BluetoothSystemRequest system, BluetoothSystemClientPtr system_client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  BluetoothSystemProxy
    : public BluetoothSystem {
 public:
  using InterfaceType = BluetoothSystem;

  explicit BluetoothSystemProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetState(GetStateCallback callback) final;
  void SetPowered(bool powered, SetPoweredCallback callback) final;
  void GetScanState(GetScanStateCallback callback) final;
  void StartScan(StartScanCallback callback) final;
  void StopScan(StopScanCallback callback) final;
  void GetAvailableDevices(GetAvailableDevicesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  BluetoothSystemClientProxy
    : public BluetoothSystemClient {
 public:
  using InterfaceType = BluetoothSystemClient;

  explicit BluetoothSystemClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStateChanged(BluetoothSystem::State new_state) final;
  void OnScanStateChanged(BluetoothSystem::ScanState new_state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  BluetoothSystemFactoryStubDispatch {
 public:
  static bool Accept(BluetoothSystemFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BluetoothSystemFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BluetoothSystemFactory>>
class BluetoothSystemFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BluetoothSystemFactoryStub() {}
  ~BluetoothSystemFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothSystemFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothSystemFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BluetoothSystemStubDispatch {
 public:
  static bool Accept(BluetoothSystem* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BluetoothSystem* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BluetoothSystem>>
class BluetoothSystemStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BluetoothSystemStub() {}
  ~BluetoothSystemStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothSystemStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothSystemStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BluetoothSystemClientStubDispatch {
 public:
  static bool Accept(BluetoothSystemClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BluetoothSystemClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BluetoothSystemClient>>
class BluetoothSystemClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BluetoothSystemClientStub() {}
  ~BluetoothSystemClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothSystemClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BluetoothSystemClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  BluetoothSystemFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BluetoothSystemRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BluetoothSystemClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  BluetoothSystemResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  BluetoothAddress {
 public:
  using DataView = BluetoothAddressDataView;
  using Data_ = internal::BluetoothAddress_Data;

  template <typename... Args>
  static BluetoothAddressPtr New(Args&&... args) {
    return BluetoothAddressPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BluetoothAddressPtr From(const U& u) {
    return mojo::TypeConverter<BluetoothAddressPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BluetoothAddress>::Convert(*this);
  }


  BluetoothAddress();

  explicit BluetoothAddress(
      const std::vector<uint8_t>& address);

  ~BluetoothAddress();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BluetoothAddressPtr>
  BluetoothAddressPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BluetoothAddress>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BluetoothAddress::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BluetoothAddress::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BluetoothAddress_UnserializedMessageContext<
            UserType, BluetoothAddress::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BluetoothAddress::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BluetoothAddress::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BluetoothAddress_UnserializedMessageContext<
            UserType, BluetoothAddress::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BluetoothAddress::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> address;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  BluetoothDeviceInfo {
 public:
  using DataView = BluetoothDeviceInfoDataView;
  using Data_ = internal::BluetoothDeviceInfo_Data;
  using ConnectionState = BluetoothDeviceInfo_ConnectionState;
  using DeviceType = BluetoothDeviceInfo_DeviceType;

  template <typename... Args>
  static BluetoothDeviceInfoPtr New(Args&&... args) {
    return BluetoothDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BluetoothDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<BluetoothDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BluetoothDeviceInfo>::Convert(*this);
  }


  BluetoothDeviceInfo();

  BluetoothDeviceInfo(
      const std::array<uint8_t, 6>& address,
      const base::Optional<std::string>& name,
      BluetoothDeviceInfo::ConnectionState connection_state,
      bool is_paired,
      BluetoothDeviceInfo::DeviceType device_type);

  ~BluetoothDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BluetoothDeviceInfoPtr>
  BluetoothDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BluetoothDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BluetoothDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BluetoothDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BluetoothDeviceInfo_UnserializedMessageContext<
            UserType, BluetoothDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BluetoothDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BluetoothDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BluetoothDeviceInfo_UnserializedMessageContext<
            UserType, BluetoothDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BluetoothDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::array<uint8_t, 6> address;
  
  base::Optional<std::string> name;
  
  BluetoothDeviceInfo::ConnectionState connection_state;
  
  bool is_paired;
  
  BluetoothDeviceInfo::DeviceType device_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
BluetoothAddressPtr BluetoothAddress::Clone() const {
  return New(
      mojo::Clone(address)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BluetoothAddress>::value>::type*>
bool BluetoothAddress::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  return true;
}
template <typename StructPtrType>
BluetoothDeviceInfoPtr BluetoothDeviceInfo::Clone() const {
  return New(
      mojo::Clone(address),
      mojo::Clone(name),
      mojo::Clone(connection_state),
      mojo::Clone(is_paired),
      mojo::Clone(device_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BluetoothDeviceInfo>::value>::type*>
bool BluetoothDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->connection_state, other_struct.connection_state))
    return false;
  if (!mojo::Equals(this->is_paired, other_struct.is_paired))
    return false;
  if (!mojo::Equals(this->device_type, other_struct.device_type))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::BluetoothAddress::DataView,
                                         ::device::mojom::BluetoothAddressPtr> {
  static bool IsNull(const ::device::mojom::BluetoothAddressPtr& input) { return !input; }
  static void SetToNull(::device::mojom::BluetoothAddressPtr* output) { output->reset(); }

  static const decltype(::device::mojom::BluetoothAddress::address)& address(
      const ::device::mojom::BluetoothAddressPtr& input) {
    return input->address;
  }

  static bool Read(::device::mojom::BluetoothAddress::DataView input, ::device::mojom::BluetoothAddressPtr* output);
};


template <>
struct  StructTraits<::device::mojom::BluetoothDeviceInfo::DataView,
                                         ::device::mojom::BluetoothDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::BluetoothDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::BluetoothDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::BluetoothDeviceInfo::address)& address(
      const ::device::mojom::BluetoothDeviceInfoPtr& input) {
    return input->address;
  }

  static const decltype(::device::mojom::BluetoothDeviceInfo::name)& name(
      const ::device::mojom::BluetoothDeviceInfoPtr& input) {
    return input->name;
  }

  static decltype(::device::mojom::BluetoothDeviceInfo::connection_state) connection_state(
      const ::device::mojom::BluetoothDeviceInfoPtr& input) {
    return input->connection_state;
  }

  static decltype(::device::mojom::BluetoothDeviceInfo::is_paired) is_paired(
      const ::device::mojom::BluetoothDeviceInfoPtr& input) {
    return input->is_paired;
  }

  static decltype(::device::mojom::BluetoothDeviceInfo::device_type) device_type(
      const ::device::mojom::BluetoothDeviceInfoPtr& input) {
    return input->device_type;
  }

  static bool Read(::device::mojom::BluetoothDeviceInfo::DataView input, ::device::mojom::BluetoothDeviceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_H_