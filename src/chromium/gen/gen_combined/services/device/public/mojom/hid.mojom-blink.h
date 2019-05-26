// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/hid.mojom-shared.h"
#include "services/device/public/mojom/hid.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct device_mojom_internal_HidBusType_DataHashFn {
  static unsigned GetHash(const ::device::mojom::HidBusType& value) {
    using utype = std::underlying_type<::device::mojom::HidBusType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::HidBusType& left, const ::device::mojom::HidBusType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::HidBusType>
    : public GenericHashTraits<::device::mojom::HidBusType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::HidBusType& value) {
    return value == static_cast<::device::mojom::HidBusType>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::HidBusType& slot, bool) {
    slot = static_cast<::device::mojom::HidBusType>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::HidBusType& value) {
    return value == static_cast<::device::mojom::HidBusType>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {

class HidManagerClientProxy;

template <typename ImplRefTraits>
class HidManagerClientStub;

class HidManagerClientRequestValidator;


class BLINK_PLATFORM_EXPORT HidManagerClient
    : public HidManagerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HidManagerClientInterfaceBase;
  using Proxy_ = HidManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = HidManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDeviceAddedMinVersion = 0,
    kDeviceRemovedMinVersion = 0,
  };
  virtual ~HidManagerClient() {}

  
  virtual void DeviceAdded(HidDeviceInfoPtr device_info) = 0;

  
  virtual void DeviceRemoved(HidDeviceInfoPtr device_info) = 0;
};

class HidManagerProxy;

template <typename ImplRefTraits>
class HidManagerStub;

class HidManagerRequestValidator;
class HidManagerResponseValidator;


class BLINK_PLATFORM_EXPORT HidManager
    : public HidManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HidManagerInterfaceBase;
  using Proxy_ = HidManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidManagerStub<ImplRefTraits>;

  using RequestValidator_ = HidManagerRequestValidator;
  using ResponseValidator_ = HidManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDevicesAndSetClientMinVersion = 0,
    kGetDevicesMinVersion = 0,
    kConnectMinVersion = 0,
  };
  virtual ~HidManager() {}


  using GetDevicesAndSetClientCallback = base::OnceCallback<void(WTF::Vector<HidDeviceInfoPtr>)>;
  
  virtual void GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) = 0;


  using GetDevicesCallback = base::OnceCallback<void(WTF::Vector<HidDeviceInfoPtr>)>;
  
  virtual void GetDevices(GetDevicesCallback callback) = 0;


  using ConnectCallback = base::OnceCallback<void(HidConnectionPtr)>;
  
  virtual void Connect(const WTF::String& device_guid, HidConnectionClientPtr connection_client, ConnectCallback callback) = 0;
};

class HidConnectionProxy;

template <typename ImplRefTraits>
class HidConnectionStub;

class HidConnectionRequestValidator;
class HidConnectionResponseValidator;


class BLINK_PLATFORM_EXPORT HidConnection
    : public HidConnectionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HidConnectionInterfaceBase;
  using Proxy_ = HidConnectionProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidConnectionStub<ImplRefTraits>;

  using RequestValidator_ = HidConnectionRequestValidator;
  using ResponseValidator_ = HidConnectionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
    kWriteMinVersion = 0,
    kGetFeatureReportMinVersion = 0,
    kSendFeatureReportMinVersion = 0,
  };
  virtual ~HidConnection() {}


  using ReadCallback = base::OnceCallback<void(bool, uint8_t, const base::Optional<WTF::Vector<uint8_t>>&)>;
  
  virtual void Read(ReadCallback callback) = 0;


  using WriteCallback = base::OnceCallback<void(bool)>;
  
  virtual void Write(uint8_t report_id, const WTF::Vector<uint8_t>& buffer, WriteCallback callback) = 0;


  using GetFeatureReportCallback = base::OnceCallback<void(bool, const base::Optional<WTF::Vector<uint8_t>>&)>;
  
  virtual void GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) = 0;


  using SendFeatureReportCallback = base::OnceCallback<void(bool)>;
  
  virtual void SendFeatureReport(uint8_t report_id, const WTF::Vector<uint8_t>& buffer, SendFeatureReportCallback callback) = 0;
};

class HidConnectionClientProxy;

template <typename ImplRefTraits>
class HidConnectionClientStub;

class HidConnectionClientRequestValidator;


class BLINK_PLATFORM_EXPORT HidConnectionClient
    : public HidConnectionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HidConnectionClientInterfaceBase;
  using Proxy_ = HidConnectionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = HidConnectionClientStub<ImplRefTraits>;

  using RequestValidator_ = HidConnectionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnInputReportMinVersion = 0,
  };
  virtual ~HidConnectionClient() {}

  
  virtual void OnInputReport(uint8_t report_id, const WTF::Vector<uint8_t>& buffer) = 0;
};

class BLINK_PLATFORM_EXPORT HidManagerClientProxy
    : public HidManagerClient {
 public:
  using InterfaceType = HidManagerClient;

  explicit HidManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DeviceAdded(HidDeviceInfoPtr device_info) final;
  void DeviceRemoved(HidDeviceInfoPtr device_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT HidManagerProxy
    : public HidManager {
 public:
  using InterfaceType = HidManager;

  explicit HidManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevicesAndSetClient(HidManagerClientAssociatedPtrInfo client, GetDevicesAndSetClientCallback callback) final;
  void GetDevices(GetDevicesCallback callback) final;
  void Connect(const WTF::String& device_guid, HidConnectionClientPtr connection_client, ConnectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT HidConnectionProxy
    : public HidConnection {
 public:
  using InterfaceType = HidConnection;

  explicit HidConnectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void Read(ReadCallback callback) final;
  void Write(uint8_t report_id, const WTF::Vector<uint8_t>& buffer, WriteCallback callback) final;
  void GetFeatureReport(uint8_t report_id, GetFeatureReportCallback callback) final;
  void SendFeatureReport(uint8_t report_id, const WTF::Vector<uint8_t>& buffer, SendFeatureReportCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT HidConnectionClientProxy
    : public HidConnectionClient {
 public:
  using InterfaceType = HidConnectionClient;

  explicit HidConnectionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnInputReport(uint8_t report_id, const WTF::Vector<uint8_t>& buffer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT HidManagerClientStubDispatch {
 public:
  static bool Accept(HidManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidManagerClient>>
class HidManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidManagerClientStub() {}
  ~HidManagerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT HidManagerStubDispatch {
 public:
  static bool Accept(HidManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidManager>>
class HidManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidManagerStub() {}
  ~HidManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT HidConnectionStubDispatch {
 public:
  static bool Accept(HidConnection* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidConnection* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidConnection>>
class HidConnectionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidConnectionStub() {}
  ~HidConnectionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidConnectionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidConnectionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT HidConnectionClientStubDispatch {
 public:
  static bool Accept(HidConnectionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HidConnectionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HidConnectionClient>>
class HidConnectionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HidConnectionClientStub() {}
  ~HidConnectionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidConnectionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HidConnectionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT HidManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HidManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HidConnectionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HidConnectionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HidManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HidConnectionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT HidUsageAndPage {
 public:
  using DataView = HidUsageAndPageDataView;
  using Data_ = internal::HidUsageAndPage_Data;

  template <typename... Args>
  static HidUsageAndPagePtr New(Args&&... args) {
    return HidUsageAndPagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidUsageAndPagePtr From(const U& u) {
    return mojo::TypeConverter<HidUsageAndPagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidUsageAndPage>::Convert(*this);
  }


  HidUsageAndPage();

  HidUsageAndPage(
      uint16_t usage,
      uint16_t usage_page);

  ~HidUsageAndPage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidUsageAndPagePtr>
  HidUsageAndPagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidUsageAndPage>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidUsageAndPage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidUsageAndPage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidUsageAndPage_UnserializedMessageContext<
            UserType, HidUsageAndPage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidUsageAndPage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HidUsageAndPage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidUsageAndPage_UnserializedMessageContext<
            UserType, HidUsageAndPage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidUsageAndPage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint16_t usage;
  
  uint16_t usage_page;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};












class BLINK_PLATFORM_EXPORT HidReportItem {
 public:
  using DataView = HidReportItemDataView;
  using Data_ = internal::HidReportItem_Data;

  template <typename... Args>
  static HidReportItemPtr New(Args&&... args) {
    return HidReportItemPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidReportItemPtr From(const U& u) {
    return mojo::TypeConverter<HidReportItemPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidReportItem>::Convert(*this);
  }


  HidReportItem();

  HidReportItem(
      bool is_range,
      bool is_constant,
      bool is_variable,
      bool is_relative,
      bool wrap,
      bool is_non_linear,
      bool no_preferred_state,
      bool has_null_position,
      bool is_volatile,
      bool is_buffered_bytes,
      WTF::Vector<HidUsageAndPagePtr> usages,
      HidUsageAndPagePtr usage_minimum,
      HidUsageAndPagePtr usage_maximum,
      uint32_t designator_minimum,
      uint32_t designator_maximum,
      uint32_t string_minimum,
      uint32_t string_maximum,
      int32_t logical_minimum,
      int32_t logical_maximum,
      int32_t physical_minimum,
      int32_t physical_maximum,
      uint32_t unit_exponent,
      uint32_t unit,
      uint32_t report_size,
      uint32_t report_count);

  ~HidReportItem();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidReportItemPtr>
  HidReportItemPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidReportItem>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidReportItem::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidReportItem::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidReportItem_UnserializedMessageContext<
            UserType, HidReportItem::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidReportItem::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HidReportItem::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidReportItem_UnserializedMessageContext<
            UserType, HidReportItem::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidReportItem::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool is_range;
  
  bool is_constant;
  
  bool is_variable;
  
  bool is_relative;
  
  bool wrap;
  
  bool is_non_linear;
  
  bool no_preferred_state;
  
  bool has_null_position;
  
  bool is_volatile;
  
  bool is_buffered_bytes;
  
  WTF::Vector<HidUsageAndPagePtr> usages;
  
  HidUsageAndPagePtr usage_minimum;
  
  HidUsageAndPagePtr usage_maximum;
  
  uint32_t designator_minimum;
  
  uint32_t designator_maximum;
  
  uint32_t string_minimum;
  
  uint32_t string_maximum;
  
  int32_t logical_minimum;
  
  int32_t logical_maximum;
  
  int32_t physical_minimum;
  
  int32_t physical_maximum;
  
  uint32_t unit_exponent;
  
  uint32_t unit;
  
  uint32_t report_size;
  
  uint32_t report_count;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HidReportItem);
};





class BLINK_PLATFORM_EXPORT HidReportDescription {
 public:
  using DataView = HidReportDescriptionDataView;
  using Data_ = internal::HidReportDescription_Data;

  template <typename... Args>
  static HidReportDescriptionPtr New(Args&&... args) {
    return HidReportDescriptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidReportDescriptionPtr From(const U& u) {
    return mojo::TypeConverter<HidReportDescriptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidReportDescription>::Convert(*this);
  }


  HidReportDescription();

  HidReportDescription(
      uint8_t report_id,
      WTF::Vector<HidReportItemPtr> items);

  ~HidReportDescription();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidReportDescriptionPtr>
  HidReportDescriptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidReportDescription>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidReportDescription::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidReportDescription::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidReportDescription_UnserializedMessageContext<
            UserType, HidReportDescription::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidReportDescription::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HidReportDescription::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidReportDescription_UnserializedMessageContext<
            UserType, HidReportDescription::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidReportDescription::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t report_id;
  
  WTF::Vector<HidReportItemPtr> items;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HidReportDescription);
};





class BLINK_PLATFORM_EXPORT HidCollectionInfo {
 public:
  using DataView = HidCollectionInfoDataView;
  using Data_ = internal::HidCollectionInfo_Data;

  template <typename... Args>
  static HidCollectionInfoPtr New(Args&&... args) {
    return HidCollectionInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidCollectionInfoPtr From(const U& u) {
    return mojo::TypeConverter<HidCollectionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidCollectionInfo>::Convert(*this);
  }


  HidCollectionInfo();

  HidCollectionInfo(
      HidUsageAndPagePtr usage,
      const WTF::Vector<uint8_t>& report_ids,
      uint32_t collection_type,
      WTF::Vector<HidReportDescriptionPtr> input_reports,
      WTF::Vector<HidReportDescriptionPtr> output_reports,
      WTF::Vector<HidReportDescriptionPtr> feature_reports,
      WTF::Vector<HidCollectionInfoPtr> children);

  ~HidCollectionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidCollectionInfoPtr>
  HidCollectionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidCollectionInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidCollectionInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidCollectionInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidCollectionInfo_UnserializedMessageContext<
            UserType, HidCollectionInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidCollectionInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HidCollectionInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidCollectionInfo_UnserializedMessageContext<
            UserType, HidCollectionInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidCollectionInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  HidUsageAndPagePtr usage;
  
  WTF::Vector<uint8_t> report_ids;
  
  uint32_t collection_type;
  
  WTF::Vector<HidReportDescriptionPtr> input_reports;
  
  WTF::Vector<HidReportDescriptionPtr> output_reports;
  
  WTF::Vector<HidReportDescriptionPtr> feature_reports;
  
  WTF::Vector<HidCollectionInfoPtr> children;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HidCollectionInfo);
};





class BLINK_PLATFORM_EXPORT HidDeviceInfo {
 public:
  using DataView = HidDeviceInfoDataView;
  using Data_ = internal::HidDeviceInfo_Data;

  template <typename... Args>
  static HidDeviceInfoPtr New(Args&&... args) {
    return HidDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HidDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<HidDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HidDeviceInfo>::Convert(*this);
  }


  HidDeviceInfo();

  HidDeviceInfo(
      const WTF::String& guid,
      uint16_t vendor_id,
      uint16_t product_id,
      const WTF::String& product_name,
      const WTF::String& serial_number,
      HidBusType bus_type,
      const WTF::Vector<uint8_t>& report_descriptor,
      WTF::Vector<HidCollectionInfoPtr> collections,
      bool has_report_id,
      uint64_t max_input_report_size,
      uint64_t max_output_report_size,
      uint64_t max_feature_report_size,
      const WTF::String& device_node);

  ~HidDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HidDeviceInfoPtr>
  HidDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HidDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HidDeviceInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HidDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HidDeviceInfo_UnserializedMessageContext<
            UserType, HidDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HidDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HidDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HidDeviceInfo_UnserializedMessageContext<
            UserType, HidDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HidDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String guid;
  
  uint16_t vendor_id;
  
  uint16_t product_id;
  
  WTF::String product_name;
  
  WTF::String serial_number;
  
  HidBusType bus_type;
  
  WTF::Vector<uint8_t> report_descriptor;
  
  WTF::Vector<HidCollectionInfoPtr> collections;
  
  bool has_report_id;
  
  uint64_t max_input_report_size;
  
  uint64_t max_output_report_size;
  
  uint64_t max_feature_report_size;
  
  WTF::String device_node;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HidDeviceInfo);
};

template <typename StructPtrType>
HidUsageAndPagePtr HidUsageAndPage::Clone() const {
  return New(
      mojo::Clone(usage),
      mojo::Clone(usage_page)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidUsageAndPage>::value>::type*>
bool HidUsageAndPage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->usage, other_struct.usage))
    return false;
  if (!mojo::Equals(this->usage_page, other_struct.usage_page))
    return false;
  return true;
}
template <typename StructPtrType>
HidReportItemPtr HidReportItem::Clone() const {
  return New(
      mojo::Clone(is_range),
      mojo::Clone(is_constant),
      mojo::Clone(is_variable),
      mojo::Clone(is_relative),
      mojo::Clone(wrap),
      mojo::Clone(is_non_linear),
      mojo::Clone(no_preferred_state),
      mojo::Clone(has_null_position),
      mojo::Clone(is_volatile),
      mojo::Clone(is_buffered_bytes),
      mojo::Clone(usages),
      mojo::Clone(usage_minimum),
      mojo::Clone(usage_maximum),
      mojo::Clone(designator_minimum),
      mojo::Clone(designator_maximum),
      mojo::Clone(string_minimum),
      mojo::Clone(string_maximum),
      mojo::Clone(logical_minimum),
      mojo::Clone(logical_maximum),
      mojo::Clone(physical_minimum),
      mojo::Clone(physical_maximum),
      mojo::Clone(unit_exponent),
      mojo::Clone(unit),
      mojo::Clone(report_size),
      mojo::Clone(report_count)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidReportItem>::value>::type*>
bool HidReportItem::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->is_range, other_struct.is_range))
    return false;
  if (!mojo::Equals(this->is_constant, other_struct.is_constant))
    return false;
  if (!mojo::Equals(this->is_variable, other_struct.is_variable))
    return false;
  if (!mojo::Equals(this->is_relative, other_struct.is_relative))
    return false;
  if (!mojo::Equals(this->wrap, other_struct.wrap))
    return false;
  if (!mojo::Equals(this->is_non_linear, other_struct.is_non_linear))
    return false;
  if (!mojo::Equals(this->no_preferred_state, other_struct.no_preferred_state))
    return false;
  if (!mojo::Equals(this->has_null_position, other_struct.has_null_position))
    return false;
  if (!mojo::Equals(this->is_volatile, other_struct.is_volatile))
    return false;
  if (!mojo::Equals(this->is_buffered_bytes, other_struct.is_buffered_bytes))
    return false;
  if (!mojo::Equals(this->usages, other_struct.usages))
    return false;
  if (!mojo::Equals(this->usage_minimum, other_struct.usage_minimum))
    return false;
  if (!mojo::Equals(this->usage_maximum, other_struct.usage_maximum))
    return false;
  if (!mojo::Equals(this->designator_minimum, other_struct.designator_minimum))
    return false;
  if (!mojo::Equals(this->designator_maximum, other_struct.designator_maximum))
    return false;
  if (!mojo::Equals(this->string_minimum, other_struct.string_minimum))
    return false;
  if (!mojo::Equals(this->string_maximum, other_struct.string_maximum))
    return false;
  if (!mojo::Equals(this->logical_minimum, other_struct.logical_minimum))
    return false;
  if (!mojo::Equals(this->logical_maximum, other_struct.logical_maximum))
    return false;
  if (!mojo::Equals(this->physical_minimum, other_struct.physical_minimum))
    return false;
  if (!mojo::Equals(this->physical_maximum, other_struct.physical_maximum))
    return false;
  if (!mojo::Equals(this->unit_exponent, other_struct.unit_exponent))
    return false;
  if (!mojo::Equals(this->unit, other_struct.unit))
    return false;
  if (!mojo::Equals(this->report_size, other_struct.report_size))
    return false;
  if (!mojo::Equals(this->report_count, other_struct.report_count))
    return false;
  return true;
}
template <typename StructPtrType>
HidReportDescriptionPtr HidReportDescription::Clone() const {
  return New(
      mojo::Clone(report_id),
      mojo::Clone(items)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidReportDescription>::value>::type*>
bool HidReportDescription::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->report_id, other_struct.report_id))
    return false;
  if (!mojo::Equals(this->items, other_struct.items))
    return false;
  return true;
}
template <typename StructPtrType>
HidCollectionInfoPtr HidCollectionInfo::Clone() const {
  return New(
      mojo::Clone(usage),
      mojo::Clone(report_ids),
      mojo::Clone(collection_type),
      mojo::Clone(input_reports),
      mojo::Clone(output_reports),
      mojo::Clone(feature_reports),
      mojo::Clone(children)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidCollectionInfo>::value>::type*>
bool HidCollectionInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->usage, other_struct.usage))
    return false;
  if (!mojo::Equals(this->report_ids, other_struct.report_ids))
    return false;
  if (!mojo::Equals(this->collection_type, other_struct.collection_type))
    return false;
  if (!mojo::Equals(this->input_reports, other_struct.input_reports))
    return false;
  if (!mojo::Equals(this->output_reports, other_struct.output_reports))
    return false;
  if (!mojo::Equals(this->feature_reports, other_struct.feature_reports))
    return false;
  if (!mojo::Equals(this->children, other_struct.children))
    return false;
  return true;
}
template <typename StructPtrType>
HidDeviceInfoPtr HidDeviceInfo::Clone() const {
  return New(
      mojo::Clone(guid),
      mojo::Clone(vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(product_name),
      mojo::Clone(serial_number),
      mojo::Clone(bus_type),
      mojo::Clone(report_descriptor),
      mojo::Clone(collections),
      mojo::Clone(has_report_id),
      mojo::Clone(max_input_report_size),
      mojo::Clone(max_output_report_size),
      mojo::Clone(max_feature_report_size),
      mojo::Clone(device_node)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HidDeviceInfo>::value>::type*>
bool HidDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->guid, other_struct.guid))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->product_name, other_struct.product_name))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  if (!mojo::Equals(this->bus_type, other_struct.bus_type))
    return false;
  if (!mojo::Equals(this->report_descriptor, other_struct.report_descriptor))
    return false;
  if (!mojo::Equals(this->collections, other_struct.collections))
    return false;
  if (!mojo::Equals(this->has_report_id, other_struct.has_report_id))
    return false;
  if (!mojo::Equals(this->max_input_report_size, other_struct.max_input_report_size))
    return false;
  if (!mojo::Equals(this->max_output_report_size, other_struct.max_output_report_size))
    return false;
  if (!mojo::Equals(this->max_feature_report_size, other_struct.max_feature_report_size))
    return false;
  if (!mojo::Equals(this->device_node, other_struct.device_node))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::HidUsageAndPage::DataView,
                                         ::device::mojom::blink::HidUsageAndPagePtr> {
  static bool IsNull(const ::device::mojom::blink::HidUsageAndPagePtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::HidUsageAndPagePtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::HidUsageAndPage::usage) usage(
      const ::device::mojom::blink::HidUsageAndPagePtr& input) {
    return input->usage;
  }

  static decltype(::device::mojom::blink::HidUsageAndPage::usage_page) usage_page(
      const ::device::mojom::blink::HidUsageAndPagePtr& input) {
    return input->usage_page;
  }

  static bool Read(::device::mojom::blink::HidUsageAndPage::DataView input, ::device::mojom::blink::HidUsageAndPagePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::HidReportItem::DataView,
                                         ::device::mojom::blink::HidReportItemPtr> {
  static bool IsNull(const ::device::mojom::blink::HidReportItemPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::HidReportItemPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::HidReportItem::is_range) is_range(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_range;
  }

  static decltype(::device::mojom::blink::HidReportItem::is_constant) is_constant(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_constant;
  }

  static decltype(::device::mojom::blink::HidReportItem::is_variable) is_variable(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_variable;
  }

  static decltype(::device::mojom::blink::HidReportItem::is_relative) is_relative(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_relative;
  }

  static decltype(::device::mojom::blink::HidReportItem::wrap) wrap(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->wrap;
  }

  static decltype(::device::mojom::blink::HidReportItem::is_non_linear) is_non_linear(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_non_linear;
  }

  static decltype(::device::mojom::blink::HidReportItem::no_preferred_state) no_preferred_state(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->no_preferred_state;
  }

  static decltype(::device::mojom::blink::HidReportItem::has_null_position) has_null_position(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->has_null_position;
  }

  static decltype(::device::mojom::blink::HidReportItem::is_volatile) is_volatile(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_volatile;
  }

  static decltype(::device::mojom::blink::HidReportItem::is_buffered_bytes) is_buffered_bytes(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->is_buffered_bytes;
  }

  static const decltype(::device::mojom::blink::HidReportItem::usages)& usages(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->usages;
  }

  static const decltype(::device::mojom::blink::HidReportItem::usage_minimum)& usage_minimum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->usage_minimum;
  }

  static const decltype(::device::mojom::blink::HidReportItem::usage_maximum)& usage_maximum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->usage_maximum;
  }

  static decltype(::device::mojom::blink::HidReportItem::designator_minimum) designator_minimum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->designator_minimum;
  }

  static decltype(::device::mojom::blink::HidReportItem::designator_maximum) designator_maximum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->designator_maximum;
  }

  static decltype(::device::mojom::blink::HidReportItem::string_minimum) string_minimum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->string_minimum;
  }

  static decltype(::device::mojom::blink::HidReportItem::string_maximum) string_maximum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->string_maximum;
  }

  static decltype(::device::mojom::blink::HidReportItem::logical_minimum) logical_minimum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->logical_minimum;
  }

  static decltype(::device::mojom::blink::HidReportItem::logical_maximum) logical_maximum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->logical_maximum;
  }

  static decltype(::device::mojom::blink::HidReportItem::physical_minimum) physical_minimum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->physical_minimum;
  }

  static decltype(::device::mojom::blink::HidReportItem::physical_maximum) physical_maximum(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->physical_maximum;
  }

  static decltype(::device::mojom::blink::HidReportItem::unit_exponent) unit_exponent(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->unit_exponent;
  }

  static decltype(::device::mojom::blink::HidReportItem::unit) unit(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->unit;
  }

  static decltype(::device::mojom::blink::HidReportItem::report_size) report_size(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->report_size;
  }

  static decltype(::device::mojom::blink::HidReportItem::report_count) report_count(
      const ::device::mojom::blink::HidReportItemPtr& input) {
    return input->report_count;
  }

  static bool Read(::device::mojom::blink::HidReportItem::DataView input, ::device::mojom::blink::HidReportItemPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::HidReportDescription::DataView,
                                         ::device::mojom::blink::HidReportDescriptionPtr> {
  static bool IsNull(const ::device::mojom::blink::HidReportDescriptionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::HidReportDescriptionPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::HidReportDescription::report_id) report_id(
      const ::device::mojom::blink::HidReportDescriptionPtr& input) {
    return input->report_id;
  }

  static const decltype(::device::mojom::blink::HidReportDescription::items)& items(
      const ::device::mojom::blink::HidReportDescriptionPtr& input) {
    return input->items;
  }

  static bool Read(::device::mojom::blink::HidReportDescription::DataView input, ::device::mojom::blink::HidReportDescriptionPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::HidCollectionInfo::DataView,
                                         ::device::mojom::blink::HidCollectionInfoPtr> {
  static bool IsNull(const ::device::mojom::blink::HidCollectionInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::HidCollectionInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::HidCollectionInfo::usage)& usage(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->usage;
  }

  static const decltype(::device::mojom::blink::HidCollectionInfo::report_ids)& report_ids(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->report_ids;
  }

  static decltype(::device::mojom::blink::HidCollectionInfo::collection_type) collection_type(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->collection_type;
  }

  static const decltype(::device::mojom::blink::HidCollectionInfo::input_reports)& input_reports(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->input_reports;
  }

  static const decltype(::device::mojom::blink::HidCollectionInfo::output_reports)& output_reports(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->output_reports;
  }

  static const decltype(::device::mojom::blink::HidCollectionInfo::feature_reports)& feature_reports(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->feature_reports;
  }

  static const decltype(::device::mojom::blink::HidCollectionInfo::children)& children(
      const ::device::mojom::blink::HidCollectionInfoPtr& input) {
    return input->children;
  }

  static bool Read(::device::mojom::blink::HidCollectionInfo::DataView input, ::device::mojom::blink::HidCollectionInfoPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::HidDeviceInfo::DataView,
                                         ::device::mojom::blink::HidDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::blink::HidDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::HidDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::HidDeviceInfo::guid)& guid(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->guid;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::vendor_id) vendor_id(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::product_id) product_id(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->product_id;
  }

  static const decltype(::device::mojom::blink::HidDeviceInfo::product_name)& product_name(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->product_name;
  }

  static const decltype(::device::mojom::blink::HidDeviceInfo::serial_number)& serial_number(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->serial_number;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::bus_type) bus_type(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->bus_type;
  }

  static const decltype(::device::mojom::blink::HidDeviceInfo::report_descriptor)& report_descriptor(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->report_descriptor;
  }

  static const decltype(::device::mojom::blink::HidDeviceInfo::collections)& collections(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->collections;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::has_report_id) has_report_id(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->has_report_id;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::max_input_report_size) max_input_report_size(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->max_input_report_size;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::max_output_report_size) max_output_report_size(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->max_output_report_size;
  }

  static decltype(::device::mojom::blink::HidDeviceInfo::max_feature_report_size) max_feature_report_size(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->max_feature_report_size;
  }

  static const decltype(::device::mojom::blink::HidDeviceInfo::device_node)& device_node(
      const ::device::mojom::blink::HidDeviceInfoPtr& input) {
    return input->device_node;
  }

  static bool Read(::device::mojom::blink::HidDeviceInfo::DataView input, ::device::mojom::blink::HidDeviceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_BLINK_H_