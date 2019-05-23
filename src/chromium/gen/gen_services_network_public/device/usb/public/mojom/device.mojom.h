// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_H_

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
#include "device/usb/public/mojom/device.mojom-shared.h"
#include "device/usb/public/mojom/device.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/url.mojom.h"
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

class UsbDeviceProxy;

template <typename ImplRefTraits>
class UsbDeviceStub;

class UsbDeviceRequestValidator;
class UsbDeviceResponseValidator;


class  UsbDevice
    : public UsbDeviceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UsbDeviceInterfaceBase;
  using Proxy_ = UsbDeviceProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceRequestValidator;
  using ResponseValidator_ = UsbDeviceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
    kCloseMinVersion = 0,
    kSetConfigurationMinVersion = 0,
    kClaimInterfaceMinVersion = 0,
    kReleaseInterfaceMinVersion = 0,
    kSetInterfaceAlternateSettingMinVersion = 0,
    kResetMinVersion = 0,
    kClearHaltMinVersion = 0,
    kControlTransferInMinVersion = 0,
    kControlTransferOutMinVersion = 0,
    kGenericTransferInMinVersion = 0,
    kGenericTransferOutMinVersion = 0,
    kIsochronousTransferInMinVersion = 0,
    kIsochronousTransferOutMinVersion = 0,
  };
  virtual ~UsbDevice() {}


  using OpenCallback = base::OnceCallback<void(UsbOpenDeviceError)>;
  
  virtual void Open(OpenCallback callback) = 0;


  using CloseCallback = base::OnceCallback<void()>;
  
  virtual void Close(CloseCallback callback) = 0;


  using SetConfigurationCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetConfiguration(uint8_t value, SetConfigurationCallback callback) = 0;


  using ClaimInterfaceCallback = base::OnceCallback<void(bool)>;
  
  virtual void ClaimInterface(uint8_t interface_number, ClaimInterfaceCallback callback) = 0;


  using ReleaseInterfaceCallback = base::OnceCallback<void(bool)>;
  
  virtual void ReleaseInterface(uint8_t interface_number, ReleaseInterfaceCallback callback) = 0;


  using SetInterfaceAlternateSettingCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, SetInterfaceAlternateSettingCallback callback) = 0;


  using ResetCallback = base::OnceCallback<void(bool)>;
  
  virtual void Reset(ResetCallback callback) = 0;


  using ClearHaltCallback = base::OnceCallback<void(bool)>;
  
  virtual void ClearHalt(uint8_t endpoint, ClearHaltCallback callback) = 0;


  using ControlTransferInCallback = base::OnceCallback<void(UsbTransferStatus, const std::vector<uint8_t>&)>;
  
  virtual void ControlTransferIn(UsbControlTransferParamsPtr params, uint32_t length, uint32_t timeout, ControlTransferInCallback callback) = 0;


  using ControlTransferOutCallback = base::OnceCallback<void(UsbTransferStatus)>;
  
  virtual void ControlTransferOut(UsbControlTransferParamsPtr params, const std::vector<uint8_t>& data, uint32_t timeout, ControlTransferOutCallback callback) = 0;


  using GenericTransferInCallback = base::OnceCallback<void(UsbTransferStatus, const std::vector<uint8_t>&)>;
  
  virtual void GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, GenericTransferInCallback callback) = 0;


  using GenericTransferOutCallback = base::OnceCallback<void(UsbTransferStatus)>;
  
  virtual void GenericTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, uint32_t timeout, GenericTransferOutCallback callback) = 0;


  using IsochronousTransferInCallback = base::OnceCallback<void(const std::vector<uint8_t>&, std::vector<UsbIsochronousPacketPtr>)>;
  
  virtual void IsochronousTransferIn(uint8_t endpoint_number, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferInCallback callback) = 0;


  using IsochronousTransferOutCallback = base::OnceCallback<void(std::vector<UsbIsochronousPacketPtr>)>;
  
  virtual void IsochronousTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferOutCallback callback) = 0;
};

class UsbDeviceClientProxy;

template <typename ImplRefTraits>
class UsbDeviceClientStub;

class UsbDeviceClientRequestValidator;


class  UsbDeviceClient
    : public UsbDeviceClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UsbDeviceClientInterfaceBase;
  using Proxy_ = UsbDeviceClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceClientStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceOpenedMinVersion = 0,
    kOnDeviceClosedMinVersion = 0,
  };
  virtual ~UsbDeviceClient() {}

  
  virtual void OnDeviceOpened() = 0;

  
  virtual void OnDeviceClosed() = 0;
};

class  UsbDeviceProxy
    : public UsbDevice {
 public:
  using InterfaceType = UsbDevice;

  explicit UsbDeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(OpenCallback callback) final;
  void Close(CloseCallback callback) final;
  void SetConfiguration(uint8_t value, SetConfigurationCallback callback) final;
  void ClaimInterface(uint8_t interface_number, ClaimInterfaceCallback callback) final;
  void ReleaseInterface(uint8_t interface_number, ReleaseInterfaceCallback callback) final;
  void SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, SetInterfaceAlternateSettingCallback callback) final;
  void Reset(ResetCallback callback) final;
  void ClearHalt(uint8_t endpoint, ClearHaltCallback callback) final;
  void ControlTransferIn(UsbControlTransferParamsPtr params, uint32_t length, uint32_t timeout, ControlTransferInCallback callback) final;
  void ControlTransferOut(UsbControlTransferParamsPtr params, const std::vector<uint8_t>& data, uint32_t timeout, ControlTransferOutCallback callback) final;
  void GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, GenericTransferInCallback callback) final;
  void GenericTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, uint32_t timeout, GenericTransferOutCallback callback) final;
  void IsochronousTransferIn(uint8_t endpoint_number, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferInCallback callback) final;
  void IsochronousTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, IsochronousTransferOutCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UsbDeviceClientProxy
    : public UsbDeviceClient {
 public:
  using InterfaceType = UsbDeviceClient;

  explicit UsbDeviceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceOpened() final;
  void OnDeviceClosed() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbDeviceStubDispatch {
 public:
  static bool Accept(UsbDevice* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDevice* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDevice>>
class UsbDeviceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceStub() {}
  ~UsbDeviceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceClientStubDispatch {
 public:
  static bool Accept(UsbDeviceClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceClient>>
class UsbDeviceClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceClientStub() {}
  ~UsbDeviceClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbDeviceClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbDeviceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};











class  UsbIsochronousPacket {
 public:
  using DataView = UsbIsochronousPacketDataView;
  using Data_ = internal::UsbIsochronousPacket_Data;

  template <typename... Args>
  static UsbIsochronousPacketPtr New(Args&&... args) {
    return UsbIsochronousPacketPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbIsochronousPacketPtr From(const U& u) {
    return mojo::TypeConverter<UsbIsochronousPacketPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbIsochronousPacket>::Convert(*this);
  }


  UsbIsochronousPacket();

  UsbIsochronousPacket(
      uint32_t length,
      uint32_t transferred_length,
      UsbTransferStatus status);

  ~UsbIsochronousPacket();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbIsochronousPacketPtr>
  UsbIsochronousPacketPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbIsochronousPacket>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbIsochronousPacket::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbIsochronousPacket::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbIsochronousPacket_UnserializedMessageContext<
            UserType, UsbIsochronousPacket::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbIsochronousPacket::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbIsochronousPacket::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbIsochronousPacket_UnserializedMessageContext<
            UserType, UsbIsochronousPacket::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbIsochronousPacket::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t length;
  
  uint32_t transferred_length;
  
  UsbTransferStatus status;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  UsbEndpointInfo {
 public:
  using DataView = UsbEndpointInfoDataView;
  using Data_ = internal::UsbEndpointInfo_Data;

  template <typename... Args>
  static UsbEndpointInfoPtr New(Args&&... args) {
    return UsbEndpointInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbEndpointInfoPtr From(const U& u) {
    return mojo::TypeConverter<UsbEndpointInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbEndpointInfo>::Convert(*this);
  }


  UsbEndpointInfo();

  UsbEndpointInfo(
      uint8_t endpoint_number,
      UsbTransferDirection direction,
      UsbTransferType type,
      uint32_t packet_size,
      UsbSynchronizationType synchronization_type,
      UsbUsageType usage_type,
      uint8_t polling_interval,
      const std::vector<uint8_t>& extra_data);

  ~UsbEndpointInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbEndpointInfoPtr>
  UsbEndpointInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbEndpointInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbEndpointInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbEndpointInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbEndpointInfo_UnserializedMessageContext<
            UserType, UsbEndpointInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbEndpointInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbEndpointInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbEndpointInfo_UnserializedMessageContext<
            UserType, UsbEndpointInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbEndpointInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t endpoint_number;
  
  UsbTransferDirection direction;
  
  UsbTransferType type;
  
  uint32_t packet_size;
  
  UsbSynchronizationType synchronization_type;
  
  UsbUsageType usage_type;
  
  uint8_t polling_interval;
  
  std::vector<uint8_t> extra_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  UsbAlternateInterfaceInfo {
 public:
  using DataView = UsbAlternateInterfaceInfoDataView;
  using Data_ = internal::UsbAlternateInterfaceInfo_Data;

  template <typename... Args>
  static UsbAlternateInterfaceInfoPtr New(Args&&... args) {
    return UsbAlternateInterfaceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbAlternateInterfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<UsbAlternateInterfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbAlternateInterfaceInfo>::Convert(*this);
  }


  UsbAlternateInterfaceInfo();

  UsbAlternateInterfaceInfo(
      uint8_t alternate_setting,
      uint8_t class_code,
      uint8_t subclass_code,
      uint8_t protocol_code,
      const base::Optional<base::string16>& interface_name,
      std::vector<UsbEndpointInfoPtr> endpoints,
      const std::vector<uint8_t>& extra_data);

  ~UsbAlternateInterfaceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbAlternateInterfaceInfoPtr>
  UsbAlternateInterfaceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbAlternateInterfaceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbAlternateInterfaceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbAlternateInterfaceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbAlternateInterfaceInfo_UnserializedMessageContext<
            UserType, UsbAlternateInterfaceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbAlternateInterfaceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbAlternateInterfaceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbAlternateInterfaceInfo_UnserializedMessageContext<
            UserType, UsbAlternateInterfaceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbAlternateInterfaceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t alternate_setting;
  
  uint8_t class_code;
  
  uint8_t subclass_code;
  
  uint8_t protocol_code;
  
  base::Optional<base::string16> interface_name;
  
  std::vector<UsbEndpointInfoPtr> endpoints;
  
  std::vector<uint8_t> extra_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UsbAlternateInterfaceInfo);
};





class  UsbInterfaceInfo {
 public:
  using DataView = UsbInterfaceInfoDataView;
  using Data_ = internal::UsbInterfaceInfo_Data;

  template <typename... Args>
  static UsbInterfaceInfoPtr New(Args&&... args) {
    return UsbInterfaceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbInterfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<UsbInterfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbInterfaceInfo>::Convert(*this);
  }


  UsbInterfaceInfo();

  UsbInterfaceInfo(
      uint8_t interface_number,
      std::vector<UsbAlternateInterfaceInfoPtr> alternates);

  ~UsbInterfaceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbInterfaceInfoPtr>
  UsbInterfaceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbInterfaceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbInterfaceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbInterfaceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbInterfaceInfo_UnserializedMessageContext<
            UserType, UsbInterfaceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbInterfaceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbInterfaceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbInterfaceInfo_UnserializedMessageContext<
            UserType, UsbInterfaceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbInterfaceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t interface_number;
  
  std::vector<UsbAlternateInterfaceInfoPtr> alternates;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UsbInterfaceInfo);
};





class  UsbConfigurationInfo {
 public:
  using DataView = UsbConfigurationInfoDataView;
  using Data_ = internal::UsbConfigurationInfo_Data;

  template <typename... Args>
  static UsbConfigurationInfoPtr New(Args&&... args) {
    return UsbConfigurationInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbConfigurationInfoPtr From(const U& u) {
    return mojo::TypeConverter<UsbConfigurationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbConfigurationInfo>::Convert(*this);
  }


  UsbConfigurationInfo();

  UsbConfigurationInfo(
      uint8_t configuration_value,
      const base::Optional<base::string16>& configuration_name,
      bool self_powered,
      bool remote_wakeup,
      uint8_t maximum_power,
      std::vector<UsbInterfaceInfoPtr> interfaces,
      const std::vector<uint8_t>& extra_data);

  ~UsbConfigurationInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbConfigurationInfoPtr>
  UsbConfigurationInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbConfigurationInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbConfigurationInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbConfigurationInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbConfigurationInfo_UnserializedMessageContext<
            UserType, UsbConfigurationInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbConfigurationInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbConfigurationInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbConfigurationInfo_UnserializedMessageContext<
            UserType, UsbConfigurationInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbConfigurationInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t configuration_value;
  
  base::Optional<base::string16> configuration_name;
  
  bool self_powered;
  
  bool remote_wakeup;
  
  uint8_t maximum_power;
  
  std::vector<UsbInterfaceInfoPtr> interfaces;
  
  std::vector<uint8_t> extra_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UsbConfigurationInfo);
};





class  UsbDeviceInfo {
 public:
  using DataView = UsbDeviceInfoDataView;
  using Data_ = internal::UsbDeviceInfo_Data;

  template <typename... Args>
  static UsbDeviceInfoPtr New(Args&&... args) {
    return UsbDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<UsbDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbDeviceInfo>::Convert(*this);
  }


  UsbDeviceInfo();

  UsbDeviceInfo(
      const std::string& guid,
      uint8_t usb_version_major,
      uint8_t usb_version_minor,
      uint8_t usb_version_subminor,
      uint8_t class_code,
      uint8_t subclass_code,
      uint8_t protocol_code,
      uint32_t bus_number,
      uint32_t port_number,
      uint16_t vendor_id,
      uint16_t product_id,
      uint8_t device_version_major,
      uint8_t device_version_minor,
      uint8_t device_version_subminor,
      const base::Optional<base::string16>& manufacturer_name,
      const base::Optional<base::string16>& product_name,
      const base::Optional<base::string16>& serial_number,
      const base::Optional<GURL>& webusb_landing_page,
      uint8_t active_configuration,
      std::vector<UsbConfigurationInfoPtr> configurations);

  ~UsbDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbDeviceInfoPtr>
  UsbDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbDeviceInfo_UnserializedMessageContext<
            UserType, UsbDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbDeviceInfo_UnserializedMessageContext<
            UserType, UsbDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string guid;
  
  uint8_t usb_version_major;
  
  uint8_t usb_version_minor;
  
  uint8_t usb_version_subminor;
  
  uint8_t class_code;
  
  uint8_t subclass_code;
  
  uint8_t protocol_code;
  
  uint32_t bus_number;
  
  uint32_t port_number;
  
  uint16_t vendor_id;
  
  uint16_t product_id;
  
  uint8_t device_version_major;
  
  uint8_t device_version_minor;
  
  uint8_t device_version_subminor;
  
  base::Optional<base::string16> manufacturer_name;
  
  base::Optional<base::string16> product_name;
  
  base::Optional<base::string16> serial_number;
  
  base::Optional<GURL> webusb_landing_page;
  
  uint8_t active_configuration;
  
  std::vector<UsbConfigurationInfoPtr> configurations;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UsbDeviceInfo);
};





class  UsbControlTransferParams {
 public:
  using DataView = UsbControlTransferParamsDataView;
  using Data_ = internal::UsbControlTransferParams_Data;

  template <typename... Args>
  static UsbControlTransferParamsPtr New(Args&&... args) {
    return UsbControlTransferParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsbControlTransferParamsPtr From(const U& u) {
    return mojo::TypeConverter<UsbControlTransferParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsbControlTransferParams>::Convert(*this);
  }


  UsbControlTransferParams();

  UsbControlTransferParams(
      UsbControlTransferType type,
      UsbControlTransferRecipient recipient,
      uint8_t request,
      uint16_t value,
      uint16_t index);

  ~UsbControlTransferParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsbControlTransferParamsPtr>
  UsbControlTransferParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UsbControlTransferParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsbControlTransferParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsbControlTransferParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsbControlTransferParams_UnserializedMessageContext<
            UserType, UsbControlTransferParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UsbControlTransferParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsbControlTransferParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsbControlTransferParams_UnserializedMessageContext<
            UserType, UsbControlTransferParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsbControlTransferParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  UsbControlTransferType type;
  
  UsbControlTransferRecipient recipient;
  
  uint8_t request;
  
  uint16_t value;
  
  uint16_t index;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
UsbEndpointInfoPtr UsbEndpointInfo::Clone() const {
  return New(
      mojo::Clone(endpoint_number),
      mojo::Clone(direction),
      mojo::Clone(type),
      mojo::Clone(packet_size),
      mojo::Clone(synchronization_type),
      mojo::Clone(usage_type),
      mojo::Clone(polling_interval),
      mojo::Clone(extra_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbEndpointInfo>::value>::type*>
bool UsbEndpointInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->endpoint_number, other_struct.endpoint_number))
    return false;
  if (!mojo::Equals(this->direction, other_struct.direction))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->packet_size, other_struct.packet_size))
    return false;
  if (!mojo::Equals(this->synchronization_type, other_struct.synchronization_type))
    return false;
  if (!mojo::Equals(this->usage_type, other_struct.usage_type))
    return false;
  if (!mojo::Equals(this->polling_interval, other_struct.polling_interval))
    return false;
  if (!mojo::Equals(this->extra_data, other_struct.extra_data))
    return false;
  return true;
}
template <typename StructPtrType>
UsbAlternateInterfaceInfoPtr UsbAlternateInterfaceInfo::Clone() const {
  return New(
      mojo::Clone(alternate_setting),
      mojo::Clone(class_code),
      mojo::Clone(subclass_code),
      mojo::Clone(protocol_code),
      mojo::Clone(interface_name),
      mojo::Clone(endpoints),
      mojo::Clone(extra_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbAlternateInterfaceInfo>::value>::type*>
bool UsbAlternateInterfaceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->alternate_setting, other_struct.alternate_setting))
    return false;
  if (!mojo::Equals(this->class_code, other_struct.class_code))
    return false;
  if (!mojo::Equals(this->subclass_code, other_struct.subclass_code))
    return false;
  if (!mojo::Equals(this->protocol_code, other_struct.protocol_code))
    return false;
  if (!mojo::Equals(this->interface_name, other_struct.interface_name))
    return false;
  if (!mojo::Equals(this->endpoints, other_struct.endpoints))
    return false;
  if (!mojo::Equals(this->extra_data, other_struct.extra_data))
    return false;
  return true;
}
template <typename StructPtrType>
UsbInterfaceInfoPtr UsbInterfaceInfo::Clone() const {
  return New(
      mojo::Clone(interface_number),
      mojo::Clone(alternates)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbInterfaceInfo>::value>::type*>
bool UsbInterfaceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->interface_number, other_struct.interface_number))
    return false;
  if (!mojo::Equals(this->alternates, other_struct.alternates))
    return false;
  return true;
}
template <typename StructPtrType>
UsbConfigurationInfoPtr UsbConfigurationInfo::Clone() const {
  return New(
      mojo::Clone(configuration_value),
      mojo::Clone(configuration_name),
      mojo::Clone(self_powered),
      mojo::Clone(remote_wakeup),
      mojo::Clone(maximum_power),
      mojo::Clone(interfaces),
      mojo::Clone(extra_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbConfigurationInfo>::value>::type*>
bool UsbConfigurationInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->configuration_value, other_struct.configuration_value))
    return false;
  if (!mojo::Equals(this->configuration_name, other_struct.configuration_name))
    return false;
  if (!mojo::Equals(this->self_powered, other_struct.self_powered))
    return false;
  if (!mojo::Equals(this->remote_wakeup, other_struct.remote_wakeup))
    return false;
  if (!mojo::Equals(this->maximum_power, other_struct.maximum_power))
    return false;
  if (!mojo::Equals(this->interfaces, other_struct.interfaces))
    return false;
  if (!mojo::Equals(this->extra_data, other_struct.extra_data))
    return false;
  return true;
}
template <typename StructPtrType>
UsbDeviceInfoPtr UsbDeviceInfo::Clone() const {
  return New(
      mojo::Clone(guid),
      mojo::Clone(usb_version_major),
      mojo::Clone(usb_version_minor),
      mojo::Clone(usb_version_subminor),
      mojo::Clone(class_code),
      mojo::Clone(subclass_code),
      mojo::Clone(protocol_code),
      mojo::Clone(bus_number),
      mojo::Clone(port_number),
      mojo::Clone(vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(device_version_major),
      mojo::Clone(device_version_minor),
      mojo::Clone(device_version_subminor),
      mojo::Clone(manufacturer_name),
      mojo::Clone(product_name),
      mojo::Clone(serial_number),
      mojo::Clone(webusb_landing_page),
      mojo::Clone(active_configuration),
      mojo::Clone(configurations)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbDeviceInfo>::value>::type*>
bool UsbDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->guid, other_struct.guid))
    return false;
  if (!mojo::Equals(this->usb_version_major, other_struct.usb_version_major))
    return false;
  if (!mojo::Equals(this->usb_version_minor, other_struct.usb_version_minor))
    return false;
  if (!mojo::Equals(this->usb_version_subminor, other_struct.usb_version_subminor))
    return false;
  if (!mojo::Equals(this->class_code, other_struct.class_code))
    return false;
  if (!mojo::Equals(this->subclass_code, other_struct.subclass_code))
    return false;
  if (!mojo::Equals(this->protocol_code, other_struct.protocol_code))
    return false;
  if (!mojo::Equals(this->bus_number, other_struct.bus_number))
    return false;
  if (!mojo::Equals(this->port_number, other_struct.port_number))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->device_version_major, other_struct.device_version_major))
    return false;
  if (!mojo::Equals(this->device_version_minor, other_struct.device_version_minor))
    return false;
  if (!mojo::Equals(this->device_version_subminor, other_struct.device_version_subminor))
    return false;
  if (!mojo::Equals(this->manufacturer_name, other_struct.manufacturer_name))
    return false;
  if (!mojo::Equals(this->product_name, other_struct.product_name))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  if (!mojo::Equals(this->webusb_landing_page, other_struct.webusb_landing_page))
    return false;
  if (!mojo::Equals(this->active_configuration, other_struct.active_configuration))
    return false;
  if (!mojo::Equals(this->configurations, other_struct.configurations))
    return false;
  return true;
}
template <typename StructPtrType>
UsbControlTransferParamsPtr UsbControlTransferParams::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(recipient),
      mojo::Clone(request),
      mojo::Clone(value),
      mojo::Clone(index)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbControlTransferParams>::value>::type*>
bool UsbControlTransferParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->recipient, other_struct.recipient))
    return false;
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->index, other_struct.index))
    return false;
  return true;
}
template <typename StructPtrType>
UsbIsochronousPacketPtr UsbIsochronousPacket::Clone() const {
  return New(
      mojo::Clone(length),
      mojo::Clone(transferred_length),
      mojo::Clone(status)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UsbIsochronousPacket>::value>::type*>
bool UsbIsochronousPacket::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->transferred_length, other_struct.transferred_length))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::UsbEndpointInfo::DataView,
                                         ::device::mojom::UsbEndpointInfoPtr> {
  static bool IsNull(const ::device::mojom::UsbEndpointInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbEndpointInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbEndpointInfo::endpoint_number) endpoint_number(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->endpoint_number;
  }

  static decltype(::device::mojom::UsbEndpointInfo::direction) direction(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->direction;
  }

  static decltype(::device::mojom::UsbEndpointInfo::type) type(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->type;
  }

  static decltype(::device::mojom::UsbEndpointInfo::packet_size) packet_size(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->packet_size;
  }

  static decltype(::device::mojom::UsbEndpointInfo::synchronization_type) synchronization_type(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->synchronization_type;
  }

  static decltype(::device::mojom::UsbEndpointInfo::usage_type) usage_type(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->usage_type;
  }

  static decltype(::device::mojom::UsbEndpointInfo::polling_interval) polling_interval(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->polling_interval;
  }

  static const decltype(::device::mojom::UsbEndpointInfo::extra_data)& extra_data(
      const ::device::mojom::UsbEndpointInfoPtr& input) {
    return input->extra_data;
  }

  static bool Read(::device::mojom::UsbEndpointInfo::DataView input, ::device::mojom::UsbEndpointInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbAlternateInterfaceInfo::DataView,
                                         ::device::mojom::UsbAlternateInterfaceInfoPtr> {
  static bool IsNull(const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbAlternateInterfaceInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbAlternateInterfaceInfo::alternate_setting) alternate_setting(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->alternate_setting;
  }

  static decltype(::device::mojom::UsbAlternateInterfaceInfo::class_code) class_code(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->class_code;
  }

  static decltype(::device::mojom::UsbAlternateInterfaceInfo::subclass_code) subclass_code(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->subclass_code;
  }

  static decltype(::device::mojom::UsbAlternateInterfaceInfo::protocol_code) protocol_code(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->protocol_code;
  }

  static const decltype(::device::mojom::UsbAlternateInterfaceInfo::interface_name)& interface_name(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->interface_name;
  }

  static const decltype(::device::mojom::UsbAlternateInterfaceInfo::endpoints)& endpoints(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->endpoints;
  }

  static const decltype(::device::mojom::UsbAlternateInterfaceInfo::extra_data)& extra_data(
      const ::device::mojom::UsbAlternateInterfaceInfoPtr& input) {
    return input->extra_data;
  }

  static bool Read(::device::mojom::UsbAlternateInterfaceInfo::DataView input, ::device::mojom::UsbAlternateInterfaceInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbInterfaceInfo::DataView,
                                         ::device::mojom::UsbInterfaceInfoPtr> {
  static bool IsNull(const ::device::mojom::UsbInterfaceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbInterfaceInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbInterfaceInfo::interface_number) interface_number(
      const ::device::mojom::UsbInterfaceInfoPtr& input) {
    return input->interface_number;
  }

  static const decltype(::device::mojom::UsbInterfaceInfo::alternates)& alternates(
      const ::device::mojom::UsbInterfaceInfoPtr& input) {
    return input->alternates;
  }

  static bool Read(::device::mojom::UsbInterfaceInfo::DataView input, ::device::mojom::UsbInterfaceInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbConfigurationInfo::DataView,
                                         ::device::mojom::UsbConfigurationInfoPtr> {
  static bool IsNull(const ::device::mojom::UsbConfigurationInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbConfigurationInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbConfigurationInfo::configuration_value) configuration_value(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->configuration_value;
  }

  static const decltype(::device::mojom::UsbConfigurationInfo::configuration_name)& configuration_name(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->configuration_name;
  }

  static decltype(::device::mojom::UsbConfigurationInfo::self_powered) self_powered(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->self_powered;
  }

  static decltype(::device::mojom::UsbConfigurationInfo::remote_wakeup) remote_wakeup(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->remote_wakeup;
  }

  static decltype(::device::mojom::UsbConfigurationInfo::maximum_power) maximum_power(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->maximum_power;
  }

  static const decltype(::device::mojom::UsbConfigurationInfo::interfaces)& interfaces(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->interfaces;
  }

  static const decltype(::device::mojom::UsbConfigurationInfo::extra_data)& extra_data(
      const ::device::mojom::UsbConfigurationInfoPtr& input) {
    return input->extra_data;
  }

  static bool Read(::device::mojom::UsbConfigurationInfo::DataView input, ::device::mojom::UsbConfigurationInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbDeviceInfo::DataView,
                                         ::device::mojom::UsbDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::UsbDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::UsbDeviceInfo::guid)& guid(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->guid;
  }

  static decltype(::device::mojom::UsbDeviceInfo::usb_version_major) usb_version_major(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->usb_version_major;
  }

  static decltype(::device::mojom::UsbDeviceInfo::usb_version_minor) usb_version_minor(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->usb_version_minor;
  }

  static decltype(::device::mojom::UsbDeviceInfo::usb_version_subminor) usb_version_subminor(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->usb_version_subminor;
  }

  static decltype(::device::mojom::UsbDeviceInfo::class_code) class_code(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->class_code;
  }

  static decltype(::device::mojom::UsbDeviceInfo::subclass_code) subclass_code(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->subclass_code;
  }

  static decltype(::device::mojom::UsbDeviceInfo::protocol_code) protocol_code(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->protocol_code;
  }

  static decltype(::device::mojom::UsbDeviceInfo::bus_number) bus_number(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->bus_number;
  }

  static decltype(::device::mojom::UsbDeviceInfo::port_number) port_number(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->port_number;
  }

  static decltype(::device::mojom::UsbDeviceInfo::vendor_id) vendor_id(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::UsbDeviceInfo::product_id) product_id(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->product_id;
  }

  static decltype(::device::mojom::UsbDeviceInfo::device_version_major) device_version_major(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->device_version_major;
  }

  static decltype(::device::mojom::UsbDeviceInfo::device_version_minor) device_version_minor(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->device_version_minor;
  }

  static decltype(::device::mojom::UsbDeviceInfo::device_version_subminor) device_version_subminor(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->device_version_subminor;
  }

  static const decltype(::device::mojom::UsbDeviceInfo::manufacturer_name)& manufacturer_name(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->manufacturer_name;
  }

  static const decltype(::device::mojom::UsbDeviceInfo::product_name)& product_name(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->product_name;
  }

  static const decltype(::device::mojom::UsbDeviceInfo::serial_number)& serial_number(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->serial_number;
  }

  static const decltype(::device::mojom::UsbDeviceInfo::webusb_landing_page)& webusb_landing_page(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->webusb_landing_page;
  }

  static decltype(::device::mojom::UsbDeviceInfo::active_configuration) active_configuration(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->active_configuration;
  }

  static const decltype(::device::mojom::UsbDeviceInfo::configurations)& configurations(
      const ::device::mojom::UsbDeviceInfoPtr& input) {
    return input->configurations;
  }

  static bool Read(::device::mojom::UsbDeviceInfo::DataView input, ::device::mojom::UsbDeviceInfoPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbControlTransferParams::DataView,
                                         ::device::mojom::UsbControlTransferParamsPtr> {
  static bool IsNull(const ::device::mojom::UsbControlTransferParamsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbControlTransferParamsPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbControlTransferParams::type) type(
      const ::device::mojom::UsbControlTransferParamsPtr& input) {
    return input->type;
  }

  static decltype(::device::mojom::UsbControlTransferParams::recipient) recipient(
      const ::device::mojom::UsbControlTransferParamsPtr& input) {
    return input->recipient;
  }

  static decltype(::device::mojom::UsbControlTransferParams::request) request(
      const ::device::mojom::UsbControlTransferParamsPtr& input) {
    return input->request;
  }

  static decltype(::device::mojom::UsbControlTransferParams::value) value(
      const ::device::mojom::UsbControlTransferParamsPtr& input) {
    return input->value;
  }

  static decltype(::device::mojom::UsbControlTransferParams::index) index(
      const ::device::mojom::UsbControlTransferParamsPtr& input) {
    return input->index;
  }

  static bool Read(::device::mojom::UsbControlTransferParams::DataView input, ::device::mojom::UsbControlTransferParamsPtr* output);
};


template <>
struct  StructTraits<::device::mojom::UsbIsochronousPacket::DataView,
                                         ::device::mojom::UsbIsochronousPacketPtr> {
  static bool IsNull(const ::device::mojom::UsbIsochronousPacketPtr& input) { return !input; }
  static void SetToNull(::device::mojom::UsbIsochronousPacketPtr* output) { output->reset(); }

  static decltype(::device::mojom::UsbIsochronousPacket::length) length(
      const ::device::mojom::UsbIsochronousPacketPtr& input) {
    return input->length;
  }

  static decltype(::device::mojom::UsbIsochronousPacket::transferred_length) transferred_length(
      const ::device::mojom::UsbIsochronousPacketPtr& input) {
    return input->transferred_length;
  }

  static decltype(::device::mojom::UsbIsochronousPacket::status) status(
      const ::device::mojom::UsbIsochronousPacketPtr& input) {
    return input->status;
  }

  static bool Read(::device::mojom::UsbIsochronousPacket::DataView input, ::device::mojom::UsbIsochronousPacketPtr* output);
};

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_H_