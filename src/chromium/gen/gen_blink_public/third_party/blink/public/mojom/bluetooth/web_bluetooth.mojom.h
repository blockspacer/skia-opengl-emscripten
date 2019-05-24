// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_

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
#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-shared.h"
#include "third_party/blink/public/mojom/bluetooth/web_bluetooth.mojom-forward.h"
#include "device/bluetooth/public/mojom/uuid.mojom.h"
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
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "content/common/content_export.h"




namespace blink {
namespace mojom {

class WebBluetoothServiceProxy;

template <typename ImplRefTraits>
class WebBluetoothServiceStub;

class WebBluetoothServiceRequestValidator;
class WebBluetoothServiceResponseValidator;


class CONTENT_EXPORT WebBluetoothService
    : public WebBluetoothServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WebBluetoothServiceInterfaceBase;
  using Proxy_ = WebBluetoothServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothServiceStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothServiceRequestValidator;
  using ResponseValidator_ = WebBluetoothServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestDeviceMinVersion = 0,
    kRemoteServerConnectMinVersion = 0,
    kRemoteServerDisconnectMinVersion = 0,
    kRemoteServerGetPrimaryServicesMinVersion = 0,
    kRemoteServiceGetCharacteristicsMinVersion = 0,
    kRemoteCharacteristicReadValueMinVersion = 0,
    kRemoteCharacteristicWriteValueMinVersion = 0,
    kRemoteCharacteristicStartNotificationsMinVersion = 0,
    kRemoteCharacteristicStopNotificationsMinVersion = 0,
    kRemoteCharacteristicGetDescriptorsMinVersion = 0,
    kRemoteDescriptorReadValueMinVersion = 0,
    kRemoteDescriptorWriteValueMinVersion = 0,
    kRequestScanningStartMinVersion = 0,
  };
  virtual ~WebBluetoothService() {}


  using RequestDeviceCallback = base::OnceCallback<void(WebBluetoothResult, WebBluetoothDevicePtr)>;
  
  virtual void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) = 0;


  using RemoteServerConnectCallback = base::OnceCallback<void(WebBluetoothResult)>;
  
  virtual void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) = 0;

  
  virtual void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) = 0;


  using RemoteServerGetPrimaryServicesCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<std::vector<WebBluetoothRemoteGATTServicePtr>>)>;
  
  virtual void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, RemoteServerGetPrimaryServicesCallback callback) = 0;


  using RemoteServiceGetCharacteristicsCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<std::vector<WebBluetoothRemoteGATTCharacteristicPtr>>)>;
  
  virtual void RemoteServiceGetCharacteristics(const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) = 0;


  using RemoteCharacteristicReadValueCallback = base::OnceCallback<void(WebBluetoothResult, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void RemoteCharacteristicReadValue(const std::string& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) = 0;


  using RemoteCharacteristicWriteValueCallback = base::OnceCallback<void(WebBluetoothResult)>;
  
  virtual void RemoteCharacteristicWriteValue(const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) = 0;


  using RemoteCharacteristicStartNotificationsCallback = base::OnceCallback<void(WebBluetoothResult)>;
  
  virtual void RemoteCharacteristicStartNotifications(const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) = 0;


  using RemoteCharacteristicStopNotificationsCallback = base::OnceCallback<void()>;
  
  virtual void RemoteCharacteristicStopNotifications(const std::string& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) = 0;


  using RemoteCharacteristicGetDescriptorsCallback = base::OnceCallback<void(WebBluetoothResult, base::Optional<std::vector<WebBluetoothRemoteGATTDescriptorPtr>>)>;
  
  virtual void RemoteCharacteristicGetDescriptors(const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) = 0;


  using RemoteDescriptorReadValueCallback = base::OnceCallback<void(WebBluetoothResult, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void RemoteDescriptorReadValue(const std::string& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) = 0;


  using RemoteDescriptorWriteValueCallback = base::OnceCallback<void(WebBluetoothResult)>;
  
  virtual void RemoteDescriptorWriteValue(const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) = 0;


  using RequestScanningStartCallback = base::OnceCallback<void(RequestScanningStartResultPtr)>;
  
  virtual void RequestScanningStart(WebBluetoothScanClientAssociatedPtrInfo client, WebBluetoothRequestLEScanOptionsPtr options, RequestScanningStartCallback callback) = 0;
};

class WebBluetoothServerClientProxy;

template <typename ImplRefTraits>
class WebBluetoothServerClientStub;

class WebBluetoothServerClientRequestValidator;


class CONTENT_EXPORT WebBluetoothServerClient
    : public WebBluetoothServerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WebBluetoothServerClientInterfaceBase;
  using Proxy_ = WebBluetoothServerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothServerClientStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothServerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGATTServerDisconnectedMinVersion = 0,
  };
  virtual ~WebBluetoothServerClient() {}

  
  virtual void GATTServerDisconnected() = 0;
};

class WebBluetoothCharacteristicClientProxy;

template <typename ImplRefTraits>
class WebBluetoothCharacteristicClientStub;

class WebBluetoothCharacteristicClientRequestValidator;


class CONTENT_EXPORT WebBluetoothCharacteristicClient
    : public WebBluetoothCharacteristicClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WebBluetoothCharacteristicClientInterfaceBase;
  using Proxy_ = WebBluetoothCharacteristicClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothCharacteristicClientStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothCharacteristicClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRemoteCharacteristicValueChangedMinVersion = 0,
  };
  virtual ~WebBluetoothCharacteristicClient() {}

  
  virtual void RemoteCharacteristicValueChanged(const std::vector<uint8_t>& value) = 0;
};

class WebBluetoothScanClientProxy;

template <typename ImplRefTraits>
class WebBluetoothScanClientStub;

class WebBluetoothScanClientRequestValidator;


class CONTENT_EXPORT WebBluetoothScanClient
    : public WebBluetoothScanClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WebBluetoothScanClientInterfaceBase;
  using Proxy_ = WebBluetoothScanClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = WebBluetoothScanClientStub<ImplRefTraits>;

  using RequestValidator_ = WebBluetoothScanClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kScanEventMinVersion = 0,
  };
  virtual ~WebBluetoothScanClient() {}

  
  virtual void ScanEvent(WebBluetoothScanResultPtr result) = 0;
};

class CONTENT_EXPORT WebBluetoothServiceProxy
    : public WebBluetoothService {
 public:
  using InterfaceType = WebBluetoothService;

  explicit WebBluetoothServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, RequestDeviceCallback callback) final;
  void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, WebBluetoothServerClientAssociatedPtrInfo client, RemoteServerConnectCallback callback) final;
  void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) final;
  void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, RemoteServerGetPrimaryServicesCallback callback) final;
  void RemoteServiceGetCharacteristics(const std::string& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, RemoteServiceGetCharacteristicsCallback callback) final;
  void RemoteCharacteristicReadValue(const std::string& characteristic_instance_id, RemoteCharacteristicReadValueCallback callback) final;
  void RemoteCharacteristicWriteValue(const std::string& characteristic_instance_id, const std::vector<uint8_t>& value, RemoteCharacteristicWriteValueCallback callback) final;
  void RemoteCharacteristicStartNotifications(const std::string& characteristic_instance_id, WebBluetoothCharacteristicClientAssociatedPtrInfo client, RemoteCharacteristicStartNotificationsCallback callback) final;
  void RemoteCharacteristicStopNotifications(const std::string& characteristic_instance_id, RemoteCharacteristicStopNotificationsCallback callback) final;
  void RemoteCharacteristicGetDescriptors(const std::string& characteristics_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& descriptor_uuid, RemoteCharacteristicGetDescriptorsCallback callback) final;
  void RemoteDescriptorReadValue(const std::string& descriptor_instance_id, RemoteDescriptorReadValueCallback callback) final;
  void RemoteDescriptorWriteValue(const std::string& descriptor_instance_id, const std::vector<uint8_t>& value, RemoteDescriptorWriteValueCallback callback) final;
  void RequestScanningStart(WebBluetoothScanClientAssociatedPtrInfo client, WebBluetoothRequestLEScanOptionsPtr options, RequestScanningStartCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT WebBluetoothServerClientProxy
    : public WebBluetoothServerClient {
 public:
  using InterfaceType = WebBluetoothServerClient;

  explicit WebBluetoothServerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void GATTServerDisconnected() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT WebBluetoothCharacteristicClientProxy
    : public WebBluetoothCharacteristicClient {
 public:
  using InterfaceType = WebBluetoothCharacteristicClient;

  explicit WebBluetoothCharacteristicClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RemoteCharacteristicValueChanged(const std::vector<uint8_t>& value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT WebBluetoothScanClientProxy
    : public WebBluetoothScanClient {
 public:
  using InterfaceType = WebBluetoothScanClient;

  explicit WebBluetoothScanClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ScanEvent(WebBluetoothScanResultPtr result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT WebBluetoothServiceStubDispatch {
 public:
  static bool Accept(WebBluetoothService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothService>>
class WebBluetoothServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothServiceStub() {}
  ~WebBluetoothServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothServerClientStubDispatch {
 public:
  static bool Accept(WebBluetoothServerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothServerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothServerClient>>
class WebBluetoothServerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothServerClientStub() {}
  ~WebBluetoothServerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothServerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothCharacteristicClientStubDispatch {
 public:
  static bool Accept(WebBluetoothCharacteristicClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothCharacteristicClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothCharacteristicClient>>
class WebBluetoothCharacteristicClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothCharacteristicClientStub() {}
  ~WebBluetoothCharacteristicClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothCharacteristicClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothCharacteristicClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothScanClientStubDispatch {
 public:
  static bool Accept(WebBluetoothScanClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WebBluetoothScanClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WebBluetoothScanClient>>
class WebBluetoothScanClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WebBluetoothScanClientStub() {}
  ~WebBluetoothScanClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothScanClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WebBluetoothScanClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT WebBluetoothServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothServerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothCharacteristicClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothScanClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class CONTENT_EXPORT WebBluetoothDeviceId {
 public:
  using DataView = WebBluetoothDeviceIdDataView;
  using Data_ = internal::WebBluetoothDeviceId_Data;

  template <typename... Args>
  static WebBluetoothDeviceIdPtr New(Args&&... args) {
    return WebBluetoothDeviceIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothDeviceIdPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothDeviceIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothDeviceId>::Convert(*this);
  }


  WebBluetoothDeviceId();

  explicit WebBluetoothDeviceId(
      const std::string& device_id);

  ~WebBluetoothDeviceId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothDeviceIdPtr>
  WebBluetoothDeviceIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothDeviceId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothDeviceId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothDeviceId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothDeviceId_UnserializedMessageContext<
            UserType, WebBluetoothDeviceId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothDeviceId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothDeviceId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothDeviceId_UnserializedMessageContext<
            UserType, WebBluetoothDeviceId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothDeviceId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string device_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class CONTENT_EXPORT RequestScanningStartResult {
 public:
  using DataView = RequestScanningStartResultDataView;
  using Data_ = internal::RequestScanningStartResult_Data;
  using Tag = Data_::RequestScanningStartResult_Tag;

  static RequestScanningStartResultPtr New() {
    return RequestScanningStartResultPtr(base::in_place);
  }
  // Construct an instance holding |error_result|.
  static RequestScanningStartResultPtr
  NewErrorResult(
      WebBluetoothResult error_result) {
    auto result = RequestScanningStartResultPtr(base::in_place);
    result->set_error_result(std::move(error_result));
    return result;
  }
  // Construct an instance holding |options|.
  static RequestScanningStartResultPtr
  NewOptions(
      WebBluetoothRequestLEScanOptionsPtr options) {
    auto result = RequestScanningStartResultPtr(base::in_place);
    result->set_options(std::move(options));
    return result;
  }

  template <typename U>
  static RequestScanningStartResultPtr From(const U& u) {
    return mojo::TypeConverter<RequestScanningStartResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequestScanningStartResult>::Convert(*this);
  }

  RequestScanningStartResult();
  ~RequestScanningStartResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RequestScanningStartResultPtr>
  RequestScanningStartResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RequestScanningStartResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_error_result() const { return tag_ == Tag::ERROR_RESULT; }

  
  WebBluetoothResult get_error_result() const {
    DCHECK(tag_ == Tag::ERROR_RESULT);
    return data_.error_result;
  }

  
  void set_error_result(
      WebBluetoothResult error_result);
  
  bool is_options() const { return tag_ == Tag::OPTIONS; }

  
  WebBluetoothRequestLEScanOptionsPtr& get_options() const {
    DCHECK(tag_ == Tag::OPTIONS);
    return *(data_.options);
  }

  
  void set_options(
      WebBluetoothRequestLEScanOptionsPtr options);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RequestScanningStartResult::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RequestScanningStartResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    WebBluetoothResult error_result;
    WebBluetoothRequestLEScanOptionsPtr* options;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class CONTENT_EXPORT WebBluetoothLeScanFilter {
 public:
  using DataView = WebBluetoothLeScanFilterDataView;
  using Data_ = internal::WebBluetoothLeScanFilter_Data;

  template <typename... Args>
  static WebBluetoothLeScanFilterPtr New(Args&&... args) {
    return WebBluetoothLeScanFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothLeScanFilterPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothLeScanFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothLeScanFilter>::Convert(*this);
  }


  WebBluetoothLeScanFilter();

  WebBluetoothLeScanFilter(
      const base::Optional<std::vector<device::BluetoothUUID>>& services,
      const base::Optional<std::string>& name,
      const base::Optional<std::string>& name_prefix);

  ~WebBluetoothLeScanFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothLeScanFilterPtr>
  WebBluetoothLeScanFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothLeScanFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothLeScanFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothLeScanFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothLeScanFilter_UnserializedMessageContext<
            UserType, WebBluetoothLeScanFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothLeScanFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothLeScanFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothLeScanFilter_UnserializedMessageContext<
            UserType, WebBluetoothLeScanFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothLeScanFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<std::vector<device::BluetoothUUID>> services;
  
  base::Optional<std::string> name;
  
  base::Optional<std::string> name_prefix;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CONTENT_EXPORT WebBluetoothRequestDeviceOptions {
 public:
  using DataView = WebBluetoothRequestDeviceOptionsDataView;
  using Data_ = internal::WebBluetoothRequestDeviceOptions_Data;

  template <typename... Args>
  static WebBluetoothRequestDeviceOptionsPtr New(Args&&... args) {
    return WebBluetoothRequestDeviceOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRequestDeviceOptionsPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRequestDeviceOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRequestDeviceOptions>::Convert(*this);
  }


  WebBluetoothRequestDeviceOptions();

  WebBluetoothRequestDeviceOptions(
      base::Optional<std::vector<WebBluetoothLeScanFilterPtr>> filters,
      const std::vector<device::BluetoothUUID>& optional_services,
      bool accept_all_devices);

  ~WebBluetoothRequestDeviceOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRequestDeviceOptionsPtr>
  WebBluetoothRequestDeviceOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRequestDeviceOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRequestDeviceOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRequestDeviceOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRequestDeviceOptions_UnserializedMessageContext<
            UserType, WebBluetoothRequestDeviceOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRequestDeviceOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRequestDeviceOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRequestDeviceOptions_UnserializedMessageContext<
            UserType, WebBluetoothRequestDeviceOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRequestDeviceOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<std::vector<WebBluetoothLeScanFilterPtr>> filters;
  
  std::vector<device::BluetoothUUID> optional_services;
  
  bool accept_all_devices;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothRequestDeviceOptions);
};





class CONTENT_EXPORT WebBluetoothRequestLEScanOptions {
 public:
  using DataView = WebBluetoothRequestLEScanOptionsDataView;
  using Data_ = internal::WebBluetoothRequestLEScanOptions_Data;

  template <typename... Args>
  static WebBluetoothRequestLEScanOptionsPtr New(Args&&... args) {
    return WebBluetoothRequestLEScanOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRequestLEScanOptionsPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRequestLEScanOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRequestLEScanOptions>::Convert(*this);
  }


  WebBluetoothRequestLEScanOptions();

  WebBluetoothRequestLEScanOptions(
      base::Optional<std::vector<WebBluetoothLeScanFilterPtr>> filters,
      bool keep_repeated_devices,
      bool accept_all_advertisements);

  ~WebBluetoothRequestLEScanOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRequestLEScanOptionsPtr>
  WebBluetoothRequestLEScanOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRequestLEScanOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRequestLEScanOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRequestLEScanOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRequestLEScanOptions_UnserializedMessageContext<
            UserType, WebBluetoothRequestLEScanOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRequestLEScanOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRequestLEScanOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRequestLEScanOptions_UnserializedMessageContext<
            UserType, WebBluetoothRequestLEScanOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRequestLEScanOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<std::vector<WebBluetoothLeScanFilterPtr>> filters;
  
  bool keep_repeated_devices;
  
  bool accept_all_advertisements;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothRequestLEScanOptions);
};






class CONTENT_EXPORT WebBluetoothDevice {
 public:
  using DataView = WebBluetoothDeviceDataView;
  using Data_ = internal::WebBluetoothDevice_Data;

  template <typename... Args>
  static WebBluetoothDevicePtr New(Args&&... args) {
    return WebBluetoothDevicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothDevicePtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothDevice>::Convert(*this);
  }


  WebBluetoothDevice();

  WebBluetoothDevice(
      const content::WebBluetoothDeviceId& id,
      const base::Optional<std::string>& name);

  ~WebBluetoothDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothDevicePtr>
  WebBluetoothDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothDevice::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothDevice::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothDevice_UnserializedMessageContext<
            UserType, WebBluetoothDevice::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothDevice::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothDevice::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothDevice_UnserializedMessageContext<
            UserType, WebBluetoothDevice::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothDevice::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  content::WebBluetoothDeviceId id;
  
  base::Optional<std::string> name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CONTENT_EXPORT WebBluetoothRemoteGATTService {
 public:
  using DataView = WebBluetoothRemoteGATTServiceDataView;
  using Data_ = internal::WebBluetoothRemoteGATTService_Data;

  template <typename... Args>
  static WebBluetoothRemoteGATTServicePtr New(Args&&... args) {
    return WebBluetoothRemoteGATTServicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRemoteGATTServicePtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTServicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTService>::Convert(*this);
  }


  WebBluetoothRemoteGATTService();

  WebBluetoothRemoteGATTService(
      const std::string& instance_id,
      const device::BluetoothUUID& uuid);

  ~WebBluetoothRemoteGATTService();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTServicePtr>
  WebBluetoothRemoteGATTServicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTService>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTService::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRemoteGATTService::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRemoteGATTService_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTService::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTService::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRemoteGATTService::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRemoteGATTService_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTService::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTService::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string instance_id;
  
  device::BluetoothUUID uuid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CONTENT_EXPORT WebBluetoothRemoteGATTCharacteristic {
 public:
  using DataView = WebBluetoothRemoteGATTCharacteristicDataView;
  using Data_ = internal::WebBluetoothRemoteGATTCharacteristic_Data;

  template <typename... Args>
  static WebBluetoothRemoteGATTCharacteristicPtr New(Args&&... args) {
    return WebBluetoothRemoteGATTCharacteristicPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRemoteGATTCharacteristicPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTCharacteristicPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTCharacteristic>::Convert(*this);
  }


  WebBluetoothRemoteGATTCharacteristic();

  WebBluetoothRemoteGATTCharacteristic(
      const std::string& instance_id,
      const device::BluetoothUUID& uuid,
      uint32_t properties);

  ~WebBluetoothRemoteGATTCharacteristic();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTCharacteristicPtr>
  WebBluetoothRemoteGATTCharacteristicPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTCharacteristic>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTCharacteristic::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRemoteGATTCharacteristic::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTCharacteristic::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTCharacteristic::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRemoteGATTCharacteristic::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRemoteGATTCharacteristic_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTCharacteristic::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTCharacteristic::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string instance_id;
  
  device::BluetoothUUID uuid;
  
  uint32_t properties;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CONTENT_EXPORT WebBluetoothScanResult {
 public:
  using DataView = WebBluetoothScanResultDataView;
  using Data_ = internal::WebBluetoothScanResult_Data;

  template <typename... Args>
  static WebBluetoothScanResultPtr New(Args&&... args) {
    return WebBluetoothScanResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothScanResultPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothScanResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothScanResult>::Convert(*this);
  }


  WebBluetoothScanResult();

  WebBluetoothScanResult(
      WebBluetoothDevicePtr device,
      const base::Optional<std::string>& name,
      const std::vector<device::BluetoothUUID>& uuids,
      bool appearance_is_set,
      uint16_t appearance,
      bool tx_power_is_set,
      uint8_t tx_power,
      bool rssi_is_set,
      uint8_t rssi,
      const base::flat_map<uint16_t, std::vector<uint8_t>>& manufacturer_data,
      const base::flat_map<std::string, std::vector<uint8_t>>& service_data);

  ~WebBluetoothScanResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothScanResultPtr>
  WebBluetoothScanResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothScanResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothScanResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothScanResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothScanResult_UnserializedMessageContext<
            UserType, WebBluetoothScanResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothScanResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothScanResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothScanResult_UnserializedMessageContext<
            UserType, WebBluetoothScanResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothScanResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WebBluetoothDevicePtr device;
  
  base::Optional<std::string> name;
  
  std::vector<device::BluetoothUUID> uuids;
  
  bool appearance_is_set;
  
  uint16_t appearance;
  
  bool tx_power_is_set;
  
  uint8_t tx_power;
  
  bool rssi_is_set;
  
  uint8_t rssi;
  
  base::flat_map<uint16_t, std::vector<uint8_t>> manufacturer_data;
  
  base::flat_map<std::string, std::vector<uint8_t>> service_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothScanResult);
};





class CONTENT_EXPORT WebBluetoothRemoteGATTDescriptor {
 public:
  using DataView = WebBluetoothRemoteGATTDescriptorDataView;
  using Data_ = internal::WebBluetoothRemoteGATTDescriptor_Data;

  template <typename... Args>
  static WebBluetoothRemoteGATTDescriptorPtr New(Args&&... args) {
    return WebBluetoothRemoteGATTDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebBluetoothRemoteGATTDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTDescriptor>::Convert(*this);
  }


  WebBluetoothRemoteGATTDescriptor();

  WebBluetoothRemoteGATTDescriptor(
      const std::string& instance_id,
      const device::BluetoothUUID& uuid);

  ~WebBluetoothRemoteGATTDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTDescriptorPtr>
  WebBluetoothRemoteGATTDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebBluetoothRemoteGATTDescriptor::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebBluetoothRemoteGATTDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WebBluetoothRemoteGATTDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebBluetoothRemoteGATTDescriptor_UnserializedMessageContext<
            UserType, WebBluetoothRemoteGATTDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebBluetoothRemoteGATTDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string instance_id;
  
  device::BluetoothUUID uuid;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename UnionPtrType>
RequestScanningStartResultPtr RequestScanningStartResult::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::ERROR_RESULT:
      rv->set_error_result(mojo::Clone(data_.error_result));
      break;
    case Tag::OPTIONS:
      rv->set_options(mojo::Clone(*data_.options));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RequestScanningStartResult>::value>::type*>
bool RequestScanningStartResult::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::ERROR_RESULT:
      return mojo::Equals(data_.error_result, other.data_.error_result);
    case Tag::OPTIONS:
      return mojo::Equals(*(data_.options), *(other.data_.options));
  }

  return false;
}
template <typename StructPtrType>
WebBluetoothLeScanFilterPtr WebBluetoothLeScanFilter::Clone() const {
  return New(
      mojo::Clone(services),
      mojo::Clone(name),
      mojo::Clone(name_prefix)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothLeScanFilter>::value>::type*>
bool WebBluetoothLeScanFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->services, other_struct.services))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->name_prefix, other_struct.name_prefix))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRequestDeviceOptionsPtr WebBluetoothRequestDeviceOptions::Clone() const {
  return New(
      mojo::Clone(filters),
      mojo::Clone(optional_services),
      mojo::Clone(accept_all_devices)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRequestDeviceOptions>::value>::type*>
bool WebBluetoothRequestDeviceOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->filters, other_struct.filters))
    return false;
  if (!mojo::Equals(this->optional_services, other_struct.optional_services))
    return false;
  if (!mojo::Equals(this->accept_all_devices, other_struct.accept_all_devices))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRequestLEScanOptionsPtr WebBluetoothRequestLEScanOptions::Clone() const {
  return New(
      mojo::Clone(filters),
      mojo::Clone(keep_repeated_devices),
      mojo::Clone(accept_all_advertisements)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRequestLEScanOptions>::value>::type*>
bool WebBluetoothRequestLEScanOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->filters, other_struct.filters))
    return false;
  if (!mojo::Equals(this->keep_repeated_devices, other_struct.keep_repeated_devices))
    return false;
  if (!mojo::Equals(this->accept_all_advertisements, other_struct.accept_all_advertisements))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothDeviceIdPtr WebBluetoothDeviceId::Clone() const {
  return New(
      mojo::Clone(device_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothDeviceId>::value>::type*>
bool WebBluetoothDeviceId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothDevicePtr WebBluetoothDevice::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothDevice>::value>::type*>
bool WebBluetoothDevice::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRemoteGATTServicePtr WebBluetoothRemoteGATTService::Clone() const {
  return New(
      mojo::Clone(instance_id),
      mojo::Clone(uuid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTService>::value>::type*>
bool WebBluetoothRemoteGATTService::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRemoteGATTCharacteristicPtr WebBluetoothRemoteGATTCharacteristic::Clone() const {
  return New(
      mojo::Clone(instance_id),
      mojo::Clone(uuid),
      mojo::Clone(properties)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTCharacteristic>::value>::type*>
bool WebBluetoothRemoteGATTCharacteristic::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->properties, other_struct.properties))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothScanResultPtr WebBluetoothScanResult::Clone() const {
  return New(
      mojo::Clone(device),
      mojo::Clone(name),
      mojo::Clone(uuids),
      mojo::Clone(appearance_is_set),
      mojo::Clone(appearance),
      mojo::Clone(tx_power_is_set),
      mojo::Clone(tx_power),
      mojo::Clone(rssi_is_set),
      mojo::Clone(rssi),
      mojo::Clone(manufacturer_data),
      mojo::Clone(service_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothScanResult>::value>::type*>
bool WebBluetoothScanResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device, other_struct.device))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->uuids, other_struct.uuids))
    return false;
  if (!mojo::Equals(this->appearance_is_set, other_struct.appearance_is_set))
    return false;
  if (!mojo::Equals(this->appearance, other_struct.appearance))
    return false;
  if (!mojo::Equals(this->tx_power_is_set, other_struct.tx_power_is_set))
    return false;
  if (!mojo::Equals(this->tx_power, other_struct.tx_power))
    return false;
  if (!mojo::Equals(this->rssi_is_set, other_struct.rssi_is_set))
    return false;
  if (!mojo::Equals(this->rssi, other_struct.rssi))
    return false;
  if (!mojo::Equals(this->manufacturer_data, other_struct.manufacturer_data))
    return false;
  if (!mojo::Equals(this->service_data, other_struct.service_data))
    return false;
  return true;
}
template <typename StructPtrType>
WebBluetoothRemoteGATTDescriptorPtr WebBluetoothRemoteGATTDescriptor::Clone() const {
  return New(
      mojo::Clone(instance_id),
      mojo::Clone(uuid)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTDescriptor>::value>::type*>
bool WebBluetoothRemoteGATTDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->instance_id, other_struct.instance_id))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothLeScanFilter::DataView,
                                         ::blink::mojom::WebBluetoothLeScanFilterPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothLeScanFilterPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothLeScanFilter::services)& services(
      const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) {
    return input->services;
  }

  static const decltype(::blink::mojom::WebBluetoothLeScanFilter::name)& name(
      const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::WebBluetoothLeScanFilter::name_prefix)& name_prefix(
      const ::blink::mojom::WebBluetoothLeScanFilterPtr& input) {
    return input->name_prefix;
  }

  static bool Read(::blink::mojom::WebBluetoothLeScanFilter::DataView input, ::blink::mojom::WebBluetoothLeScanFilterPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRequestDeviceOptions::DataView,
                                         ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRequestDeviceOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::filters)& filters(
      const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->filters;
  }

  static const decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::optional_services)& optional_services(
      const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->optional_services;
  }

  static decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::accept_all_devices) accept_all_devices(
      const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->accept_all_devices;
  }

  static bool Read(::blink::mojom::WebBluetoothRequestDeviceOptions::DataView input, ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRequestLEScanOptions::DataView,
                                         ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRequestLEScanOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRequestLEScanOptions::filters)& filters(
      const ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr& input) {
    return input->filters;
  }

  static decltype(::blink::mojom::WebBluetoothRequestLEScanOptions::keep_repeated_devices) keep_repeated_devices(
      const ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr& input) {
    return input->keep_repeated_devices;
  }

  static decltype(::blink::mojom::WebBluetoothRequestLEScanOptions::accept_all_advertisements) accept_all_advertisements(
      const ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr& input) {
    return input->accept_all_advertisements;
  }

  static bool Read(::blink::mojom::WebBluetoothRequestLEScanOptions::DataView input, ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothDeviceId::DataView,
                                         ::blink::mojom::WebBluetoothDeviceIdPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothDeviceIdPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothDeviceIdPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothDeviceId::device_id)& device_id(
      const ::blink::mojom::WebBluetoothDeviceIdPtr& input) {
    return input->device_id;
  }

  static bool Read(::blink::mojom::WebBluetoothDeviceId::DataView input, ::blink::mojom::WebBluetoothDeviceIdPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothDevice::DataView,
                                         ::blink::mojom::WebBluetoothDevicePtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothDevicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothDevicePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothDevice::id)& id(
      const ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::WebBluetoothDevice::name)& name(
      const ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::WebBluetoothDevice::DataView input, ::blink::mojom::WebBluetoothDevicePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTService::DataView,
                                         ::blink::mojom::WebBluetoothRemoteGATTServicePtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTServicePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTService::instance_id)& instance_id(
      const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTService::uuid)& uuid(
      const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTService::DataView input, ::blink::mojom::WebBluetoothRemoteGATTServicePtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristic::DataView,
                                         ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::instance_id)& instance_id(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::uuid)& uuid(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->uuid;
  }

  static decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::properties) properties(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->properties;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::DataView input, ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothScanResult::DataView,
                                         ::blink::mojom::WebBluetoothScanResultPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothScanResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothScanResultPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothScanResult::device)& device(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->device;
  }

  static const decltype(::blink::mojom::WebBluetoothScanResult::name)& name(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::WebBluetoothScanResult::uuids)& uuids(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->uuids;
  }

  static decltype(::blink::mojom::WebBluetoothScanResult::appearance_is_set) appearance_is_set(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->appearance_is_set;
  }

  static decltype(::blink::mojom::WebBluetoothScanResult::appearance) appearance(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->appearance;
  }

  static decltype(::blink::mojom::WebBluetoothScanResult::tx_power_is_set) tx_power_is_set(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->tx_power_is_set;
  }

  static decltype(::blink::mojom::WebBluetoothScanResult::tx_power) tx_power(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->tx_power;
  }

  static decltype(::blink::mojom::WebBluetoothScanResult::rssi_is_set) rssi_is_set(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->rssi_is_set;
  }

  static decltype(::blink::mojom::WebBluetoothScanResult::rssi) rssi(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->rssi;
  }

  static const decltype(::blink::mojom::WebBluetoothScanResult::manufacturer_data)& manufacturer_data(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->manufacturer_data;
  }

  static const decltype(::blink::mojom::WebBluetoothScanResult::service_data)& service_data(
      const ::blink::mojom::WebBluetoothScanResultPtr& input) {
    return input->service_data;
  }

  static bool Read(::blink::mojom::WebBluetoothScanResult::DataView input, ::blink::mojom::WebBluetoothScanResultPtr* output);
};


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTDescriptor::DataView,
                                         ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTDescriptor::instance_id)& instance_id(
      const ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr& input) {
    return input->instance_id;
  }

  static const decltype(::blink::mojom::WebBluetoothRemoteGATTDescriptor::uuid)& uuid(
      const ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTDescriptor::DataView input, ::blink::mojom::WebBluetoothRemoteGATTDescriptorPtr* output);
};


template <>
struct CONTENT_EXPORT UnionTraits<::blink::mojom::RequestScanningStartResult::DataView,
                                        ::blink::mojom::RequestScanningStartResultPtr> {
  static bool IsNull(const ::blink::mojom::RequestScanningStartResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RequestScanningStartResultPtr* output) { output->reset(); }

  static ::blink::mojom::RequestScanningStartResult::Tag GetTag(const ::blink::mojom::RequestScanningStartResultPtr& input) {
    return input->which();
  }

  static  ::blink::mojom::WebBluetoothResult error_result(const ::blink::mojom::RequestScanningStartResultPtr& input) {
    return input->get_error_result();
  }

  static const ::blink::mojom::WebBluetoothRequestLEScanOptionsPtr& options(const ::blink::mojom::RequestScanningStartResultPtr& input) {
    return input->get_options();
  }

  static bool Read(::blink::mojom::RequestScanningStartResult::DataView input, ::blink::mojom::RequestScanningStartResultPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_