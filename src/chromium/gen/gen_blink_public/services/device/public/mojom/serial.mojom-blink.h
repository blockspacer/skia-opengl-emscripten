// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/serial.mojom-shared.h"
#include "services/device/public/mojom/serial.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"

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
struct device_mojom_internal_SerialSendError_DataHashFn {
  static unsigned GetHash(const ::device::mojom::SerialSendError& value) {
    using utype = std::underlying_type<::device::mojom::SerialSendError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::SerialSendError& left, const ::device::mojom::SerialSendError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::SerialSendError>
    : public GenericHashTraits<::device::mojom::SerialSendError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::SerialSendError& value) {
    return value == static_cast<::device::mojom::SerialSendError>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::SerialSendError& slot, bool) {
    slot = static_cast<::device::mojom::SerialSendError>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::SerialSendError& value) {
    return value == static_cast<::device::mojom::SerialSendError>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_SerialReceiveError_DataHashFn {
  static unsigned GetHash(const ::device::mojom::SerialReceiveError& value) {
    using utype = std::underlying_type<::device::mojom::SerialReceiveError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::SerialReceiveError& left, const ::device::mojom::SerialReceiveError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::SerialReceiveError>
    : public GenericHashTraits<::device::mojom::SerialReceiveError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::SerialReceiveError& value) {
    return value == static_cast<::device::mojom::SerialReceiveError>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::SerialReceiveError& slot, bool) {
    slot = static_cast<::device::mojom::SerialReceiveError>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::SerialReceiveError& value) {
    return value == static_cast<::device::mojom::SerialReceiveError>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_SerialDataBits_DataHashFn {
  static unsigned GetHash(const ::device::mojom::SerialDataBits& value) {
    using utype = std::underlying_type<::device::mojom::SerialDataBits>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::SerialDataBits& left, const ::device::mojom::SerialDataBits& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::SerialDataBits>
    : public GenericHashTraits<::device::mojom::SerialDataBits> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::SerialDataBits& value) {
    return value == static_cast<::device::mojom::SerialDataBits>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::SerialDataBits& slot, bool) {
    slot = static_cast<::device::mojom::SerialDataBits>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::SerialDataBits& value) {
    return value == static_cast<::device::mojom::SerialDataBits>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_SerialParityBit_DataHashFn {
  static unsigned GetHash(const ::device::mojom::SerialParityBit& value) {
    using utype = std::underlying_type<::device::mojom::SerialParityBit>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::SerialParityBit& left, const ::device::mojom::SerialParityBit& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::SerialParityBit>
    : public GenericHashTraits<::device::mojom::SerialParityBit> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::SerialParityBit& value) {
    return value == static_cast<::device::mojom::SerialParityBit>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::SerialParityBit& slot, bool) {
    slot = static_cast<::device::mojom::SerialParityBit>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::SerialParityBit& value) {
    return value == static_cast<::device::mojom::SerialParityBit>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct device_mojom_internal_SerialStopBits_DataHashFn {
  static unsigned GetHash(const ::device::mojom::SerialStopBits& value) {
    using utype = std::underlying_type<::device::mojom::SerialStopBits>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::SerialStopBits& left, const ::device::mojom::SerialStopBits& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::SerialStopBits>
    : public GenericHashTraits<::device::mojom::SerialStopBits> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::SerialStopBits& value) {
    return value == static_cast<::device::mojom::SerialStopBits>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::SerialStopBits& slot, bool) {
    slot = static_cast<::device::mojom::SerialStopBits>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::SerialStopBits& value) {
    return value == static_cast<::device::mojom::SerialStopBits>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {

class SerialPortManagerProxy;

template <typename ImplRefTraits>
class SerialPortManagerStub;

class SerialPortManagerRequestValidator;
class SerialPortManagerResponseValidator;


class BLINK_PLATFORM_EXPORT SerialPortManager
    : public SerialPortManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SerialPortManagerInterfaceBase;
  using Proxy_ = SerialPortManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialPortManagerStub<ImplRefTraits>;

  using RequestValidator_ = SerialPortManagerRequestValidator;
  using ResponseValidator_ = SerialPortManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDevicesMinVersion = 0,
    kGetPortMinVersion = 0,
  };
  virtual ~SerialPortManager() {}


  using GetDevicesCallback = base::OnceCallback<void(WTF::Vector<SerialPortInfoPtr>)>;
  
  virtual void GetDevices(GetDevicesCallback callback) = 0;

  
  virtual void GetPort(const base::UnguessableToken& token, SerialPortRequest port_request, SerialPortConnectionWatcherPtr watcher) = 0;
};

class SerialPortProxy;

template <typename ImplRefTraits>
class SerialPortStub;

class SerialPortRequestValidator;
class SerialPortResponseValidator;


class BLINK_PLATFORM_EXPORT SerialPort
    : public SerialPortInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SerialPortInterfaceBase;
  using Proxy_ = SerialPortProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialPortStub<ImplRefTraits>;

  using RequestValidator_ = SerialPortRequestValidator;
  using ResponseValidator_ = SerialPortResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
    kClearSendErrorMinVersion = 0,
    kClearReadErrorMinVersion = 0,
    kFlushMinVersion = 0,
    kGetControlSignalsMinVersion = 0,
    kSetControlSignalsMinVersion = 0,
    kConfigurePortMinVersion = 0,
    kGetPortInfoMinVersion = 0,
    kSetBreakMinVersion = 0,
    kClearBreakMinVersion = 0,
  };
  virtual ~SerialPort() {}


  using OpenCallback = base::OnceCallback<void(bool)>;
  
  virtual void Open(SerialConnectionOptionsPtr options, mojo::ScopedDataPipeConsumerHandle in_stream, mojo::ScopedDataPipeProducerHandle out_stream, SerialPortClientAssociatedPtrInfo client, OpenCallback callback) = 0;

  
  virtual void ClearSendError(mojo::ScopedDataPipeConsumerHandle consumer) = 0;

  
  virtual void ClearReadError(mojo::ScopedDataPipeProducerHandle producer) = 0;


  using FlushCallback = base::OnceCallback<void(bool)>;
  
  virtual void Flush(FlushCallback callback) = 0;


  using GetControlSignalsCallback = base::OnceCallback<void(SerialPortControlSignalsPtr)>;
  
  virtual void GetControlSignals(GetControlSignalsCallback callback) = 0;


  using SetControlSignalsCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) = 0;


  using ConfigurePortCallback = base::OnceCallback<void(bool)>;
  
  virtual void ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) = 0;


  using GetPortInfoCallback = base::OnceCallback<void(SerialConnectionInfoPtr)>;
  
  virtual void GetPortInfo(GetPortInfoCallback callback) = 0;


  using SetBreakCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetBreak(SetBreakCallback callback) = 0;


  using ClearBreakCallback = base::OnceCallback<void(bool)>;
  
  virtual void ClearBreak(ClearBreakCallback callback) = 0;
};

class SerialPortClientProxy;

template <typename ImplRefTraits>
class SerialPortClientStub;

class SerialPortClientRequestValidator;


class BLINK_PLATFORM_EXPORT SerialPortClient
    : public SerialPortClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SerialPortClientInterfaceBase;
  using Proxy_ = SerialPortClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialPortClientStub<ImplRefTraits>;

  using RequestValidator_ = SerialPortClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnReadErrorMinVersion = 0,
    kOnSendErrorMinVersion = 0,
  };
  virtual ~SerialPortClient() {}

  
  virtual void OnReadError(SerialReceiveError error) = 0;

  
  virtual void OnSendError(SerialSendError error) = 0;
};

class SerialPortConnectionWatcherProxy;

template <typename ImplRefTraits>
class SerialPortConnectionWatcherStub;

class SerialPortConnectionWatcherRequestValidator;


class BLINK_PLATFORM_EXPORT SerialPortConnectionWatcher
    : public SerialPortConnectionWatcherInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SerialPortConnectionWatcherInterfaceBase;
  using Proxy_ = SerialPortConnectionWatcherProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialPortConnectionWatcherStub<ImplRefTraits>;

  using RequestValidator_ = SerialPortConnectionWatcherRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~SerialPortConnectionWatcher() {}
};

class BLINK_PLATFORM_EXPORT SerialPortManagerProxy
    : public SerialPortManager {
 public:
  using InterfaceType = SerialPortManager;

  explicit SerialPortManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(GetDevicesCallback callback) final;
  void GetPort(const base::UnguessableToken& token, SerialPortRequest port_request, SerialPortConnectionWatcherPtr watcher) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT SerialPortProxy
    : public SerialPort {
 public:
  using InterfaceType = SerialPort;

  explicit SerialPortProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(SerialConnectionOptionsPtr options, mojo::ScopedDataPipeConsumerHandle in_stream, mojo::ScopedDataPipeProducerHandle out_stream, SerialPortClientAssociatedPtrInfo client, OpenCallback callback) final;
  void ClearSendError(mojo::ScopedDataPipeConsumerHandle consumer) final;
  void ClearReadError(mojo::ScopedDataPipeProducerHandle producer) final;
  void Flush(FlushCallback callback) final;
  void GetControlSignals(GetControlSignalsCallback callback) final;
  void SetControlSignals(SerialHostControlSignalsPtr signals, SetControlSignalsCallback callback) final;
  void ConfigurePort(SerialConnectionOptionsPtr options, ConfigurePortCallback callback) final;
  void GetPortInfo(GetPortInfoCallback callback) final;
  void SetBreak(SetBreakCallback callback) final;
  void ClearBreak(ClearBreakCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT SerialPortClientProxy
    : public SerialPortClient {
 public:
  using InterfaceType = SerialPortClient;

  explicit SerialPortClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReadError(SerialReceiveError error) final;
  void OnSendError(SerialSendError error) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT SerialPortConnectionWatcherProxy
    : public SerialPortConnectionWatcher {
 public:
  using InterfaceType = SerialPortConnectionWatcher;

  explicit SerialPortConnectionWatcherProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT SerialPortManagerStubDispatch {
 public:
  static bool Accept(SerialPortManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialPortManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialPortManager>>
class SerialPortManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialPortManagerStub() {}
  ~SerialPortManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SerialPortStubDispatch {
 public:
  static bool Accept(SerialPort* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialPort* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialPort>>
class SerialPortStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialPortStub() {}
  ~SerialPortStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SerialPortClientStubDispatch {
 public:
  static bool Accept(SerialPortClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialPortClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialPortClient>>
class SerialPortClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialPortClientStub() {}
  ~SerialPortClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SerialPortConnectionWatcherStubDispatch {
 public:
  static bool Accept(SerialPortConnectionWatcher* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialPortConnectionWatcher* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialPortConnectionWatcher>>
class SerialPortConnectionWatcherStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialPortConnectionWatcherStub() {}
  ~SerialPortConnectionWatcherStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortConnectionWatcherStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialPortConnectionWatcherStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT SerialPortManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SerialPortRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SerialPortClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SerialPortConnectionWatcherRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SerialPortManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT SerialPortResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_PLATFORM_EXPORT SerialHostControlSignals {
 public:
  using DataView = SerialHostControlSignalsDataView;
  using Data_ = internal::SerialHostControlSignals_Data;

  template <typename... Args>
  static SerialHostControlSignalsPtr New(Args&&... args) {
    return SerialHostControlSignalsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialHostControlSignalsPtr From(const U& u) {
    return mojo::TypeConverter<SerialHostControlSignalsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialHostControlSignals>::Convert(*this);
  }


  SerialHostControlSignals();

  SerialHostControlSignals(
      bool dtr,
      bool has_dtr,
      bool rts,
      bool has_rts);

  ~SerialHostControlSignals();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialHostControlSignalsPtr>
  SerialHostControlSignalsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialHostControlSignals>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialHostControlSignals::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialHostControlSignals::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialHostControlSignals_UnserializedMessageContext<
            UserType, SerialHostControlSignals::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialHostControlSignals::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerialHostControlSignals::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialHostControlSignals_UnserializedMessageContext<
            UserType, SerialHostControlSignals::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialHostControlSignals::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool dtr;
  
  bool has_dtr;
  
  bool rts;
  
  bool has_rts;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT SerialPortControlSignals {
 public:
  using DataView = SerialPortControlSignalsDataView;
  using Data_ = internal::SerialPortControlSignals_Data;

  template <typename... Args>
  static SerialPortControlSignalsPtr New(Args&&... args) {
    return SerialPortControlSignalsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialPortControlSignalsPtr From(const U& u) {
    return mojo::TypeConverter<SerialPortControlSignalsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialPortControlSignals>::Convert(*this);
  }


  SerialPortControlSignals();

  SerialPortControlSignals(
      bool dcd,
      bool cts,
      bool ri,
      bool dsr);

  ~SerialPortControlSignals();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialPortControlSignalsPtr>
  SerialPortControlSignalsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialPortControlSignals>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialPortControlSignals::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialPortControlSignals::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialPortControlSignals_UnserializedMessageContext<
            UserType, SerialPortControlSignals::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialPortControlSignals::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerialPortControlSignals::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialPortControlSignals_UnserializedMessageContext<
            UserType, SerialPortControlSignals::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialPortControlSignals::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool dcd;
  
  bool cts;
  
  bool ri;
  
  bool dsr;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class BLINK_PLATFORM_EXPORT SerialPortInfo {
 public:
  using DataView = SerialPortInfoDataView;
  using Data_ = internal::SerialPortInfo_Data;

  template <typename... Args>
  static SerialPortInfoPtr New(Args&&... args) {
    return SerialPortInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialPortInfoPtr From(const U& u) {
    return mojo::TypeConverter<SerialPortInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialPortInfo>::Convert(*this);
  }


  SerialPortInfo();

  SerialPortInfo(
      const base::UnguessableToken& token,
      const base::FilePath& path,
      uint16_t vendor_id,
      bool has_vendor_id,
      uint16_t product_id,
      bool has_product_id,
      const WTF::String& display_name);

  ~SerialPortInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialPortInfoPtr>
  SerialPortInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialPortInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialPortInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialPortInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialPortInfo_UnserializedMessageContext<
            UserType, SerialPortInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialPortInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerialPortInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialPortInfo_UnserializedMessageContext<
            UserType, SerialPortInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialPortInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::UnguessableToken token;
  
  base::FilePath path;
  
  uint16_t vendor_id;
  
  bool has_vendor_id;
  
  uint16_t product_id;
  
  bool has_product_id;
  
  WTF::String display_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT SerialConnectionOptions {
 public:
  using DataView = SerialConnectionOptionsDataView;
  using Data_ = internal::SerialConnectionOptions_Data;

  template <typename... Args>
  static SerialConnectionOptionsPtr New(Args&&... args) {
    return SerialConnectionOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialConnectionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<SerialConnectionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialConnectionOptions>::Convert(*this);
  }


  SerialConnectionOptions();

  SerialConnectionOptions(
      uint32_t bitrate,
      SerialDataBits data_bits,
      SerialParityBit parity_bit,
      SerialStopBits stop_bits,
      bool cts_flow_control,
      bool has_cts_flow_control);

  ~SerialConnectionOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialConnectionOptionsPtr>
  SerialConnectionOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialConnectionOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialConnectionOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialConnectionOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialConnectionOptions_UnserializedMessageContext<
            UserType, SerialConnectionOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialConnectionOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerialConnectionOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialConnectionOptions_UnserializedMessageContext<
            UserType, SerialConnectionOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialConnectionOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t bitrate;
  
  SerialDataBits data_bits;
  
  SerialParityBit parity_bit;
  
  SerialStopBits stop_bits;
  
  bool cts_flow_control;
  
  bool has_cts_flow_control;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT SerialConnectionInfo {
 public:
  using DataView = SerialConnectionInfoDataView;
  using Data_ = internal::SerialConnectionInfo_Data;

  template <typename... Args>
  static SerialConnectionInfoPtr New(Args&&... args) {
    return SerialConnectionInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialConnectionInfoPtr From(const U& u) {
    return mojo::TypeConverter<SerialConnectionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialConnectionInfo>::Convert(*this);
  }


  SerialConnectionInfo();

  SerialConnectionInfo(
      uint32_t bitrate,
      SerialDataBits data_bits,
      SerialParityBit parity_bit,
      SerialStopBits stop_bits,
      bool cts_flow_control);

  ~SerialConnectionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialConnectionInfoPtr>
  SerialConnectionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialConnectionInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialConnectionInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialConnectionInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialConnectionInfo_UnserializedMessageContext<
            UserType, SerialConnectionInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialConnectionInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SerialConnectionInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialConnectionInfo_UnserializedMessageContext<
            UserType, SerialConnectionInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialConnectionInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t bitrate;
  
  SerialDataBits data_bits;
  
  SerialParityBit parity_bit;
  
  SerialStopBits stop_bits;
  
  bool cts_flow_control;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};



template <typename StructPtrType>
SerialPortInfoPtr SerialPortInfo::Clone() const {
  return New(
      mojo::Clone(token),
      mojo::Clone(path),
      mojo::Clone(vendor_id),
      mojo::Clone(has_vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(has_product_id),
      mojo::Clone(display_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialPortInfo>::value>::type*>
bool SerialPortInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->token, other_struct.token))
    return false;
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->has_vendor_id, other_struct.has_vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->has_product_id, other_struct.has_product_id))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  return true;
}
template <typename StructPtrType>
SerialConnectionOptionsPtr SerialConnectionOptions::Clone() const {
  return New(
      mojo::Clone(bitrate),
      mojo::Clone(data_bits),
      mojo::Clone(parity_bit),
      mojo::Clone(stop_bits),
      mojo::Clone(cts_flow_control),
      mojo::Clone(has_cts_flow_control)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialConnectionOptions>::value>::type*>
bool SerialConnectionOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitrate, other_struct.bitrate))
    return false;
  if (!mojo::Equals(this->data_bits, other_struct.data_bits))
    return false;
  if (!mojo::Equals(this->parity_bit, other_struct.parity_bit))
    return false;
  if (!mojo::Equals(this->stop_bits, other_struct.stop_bits))
    return false;
  if (!mojo::Equals(this->cts_flow_control, other_struct.cts_flow_control))
    return false;
  if (!mojo::Equals(this->has_cts_flow_control, other_struct.has_cts_flow_control))
    return false;
  return true;
}
template <typename StructPtrType>
SerialConnectionInfoPtr SerialConnectionInfo::Clone() const {
  return New(
      mojo::Clone(bitrate),
      mojo::Clone(data_bits),
      mojo::Clone(parity_bit),
      mojo::Clone(stop_bits),
      mojo::Clone(cts_flow_control)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialConnectionInfo>::value>::type*>
bool SerialConnectionInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bitrate, other_struct.bitrate))
    return false;
  if (!mojo::Equals(this->data_bits, other_struct.data_bits))
    return false;
  if (!mojo::Equals(this->parity_bit, other_struct.parity_bit))
    return false;
  if (!mojo::Equals(this->stop_bits, other_struct.stop_bits))
    return false;
  if (!mojo::Equals(this->cts_flow_control, other_struct.cts_flow_control))
    return false;
  return true;
}
template <typename StructPtrType>
SerialHostControlSignalsPtr SerialHostControlSignals::Clone() const {
  return New(
      mojo::Clone(dtr),
      mojo::Clone(has_dtr),
      mojo::Clone(rts),
      mojo::Clone(has_rts)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialHostControlSignals>::value>::type*>
bool SerialHostControlSignals::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dtr, other_struct.dtr))
    return false;
  if (!mojo::Equals(this->has_dtr, other_struct.has_dtr))
    return false;
  if (!mojo::Equals(this->rts, other_struct.rts))
    return false;
  if (!mojo::Equals(this->has_rts, other_struct.has_rts))
    return false;
  return true;
}
template <typename StructPtrType>
SerialPortControlSignalsPtr SerialPortControlSignals::Clone() const {
  return New(
      mojo::Clone(dcd),
      mojo::Clone(cts),
      mojo::Clone(ri),
      mojo::Clone(dsr)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialPortControlSignals>::value>::type*>
bool SerialPortControlSignals::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dcd, other_struct.dcd))
    return false;
  if (!mojo::Equals(this->cts, other_struct.cts))
    return false;
  if (!mojo::Equals(this->ri, other_struct.ri))
    return false;
  if (!mojo::Equals(this->dsr, other_struct.dsr))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::SerialPortInfo::DataView,
                                         ::device::mojom::blink::SerialPortInfoPtr> {
  static bool IsNull(const ::device::mojom::blink::SerialPortInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::SerialPortInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::blink::SerialPortInfo::token)& token(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->token;
  }

  static const decltype(::device::mojom::blink::SerialPortInfo::path)& path(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->path;
  }

  static decltype(::device::mojom::blink::SerialPortInfo::vendor_id) vendor_id(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->vendor_id;
  }

  static decltype(::device::mojom::blink::SerialPortInfo::has_vendor_id) has_vendor_id(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->has_vendor_id;
  }

  static decltype(::device::mojom::blink::SerialPortInfo::product_id) product_id(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->product_id;
  }

  static decltype(::device::mojom::blink::SerialPortInfo::has_product_id) has_product_id(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->has_product_id;
  }

  static const decltype(::device::mojom::blink::SerialPortInfo::display_name)& display_name(
      const ::device::mojom::blink::SerialPortInfoPtr& input) {
    return input->display_name;
  }

  static bool Read(::device::mojom::blink::SerialPortInfo::DataView input, ::device::mojom::blink::SerialPortInfoPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::SerialConnectionOptions::DataView,
                                         ::device::mojom::blink::SerialConnectionOptionsPtr> {
  static bool IsNull(const ::device::mojom::blink::SerialConnectionOptionsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::SerialConnectionOptionsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::SerialConnectionOptions::bitrate) bitrate(
      const ::device::mojom::blink::SerialConnectionOptionsPtr& input) {
    return input->bitrate;
  }

  static decltype(::device::mojom::blink::SerialConnectionOptions::data_bits) data_bits(
      const ::device::mojom::blink::SerialConnectionOptionsPtr& input) {
    return input->data_bits;
  }

  static decltype(::device::mojom::blink::SerialConnectionOptions::parity_bit) parity_bit(
      const ::device::mojom::blink::SerialConnectionOptionsPtr& input) {
    return input->parity_bit;
  }

  static decltype(::device::mojom::blink::SerialConnectionOptions::stop_bits) stop_bits(
      const ::device::mojom::blink::SerialConnectionOptionsPtr& input) {
    return input->stop_bits;
  }

  static decltype(::device::mojom::blink::SerialConnectionOptions::cts_flow_control) cts_flow_control(
      const ::device::mojom::blink::SerialConnectionOptionsPtr& input) {
    return input->cts_flow_control;
  }

  static decltype(::device::mojom::blink::SerialConnectionOptions::has_cts_flow_control) has_cts_flow_control(
      const ::device::mojom::blink::SerialConnectionOptionsPtr& input) {
    return input->has_cts_flow_control;
  }

  static bool Read(::device::mojom::blink::SerialConnectionOptions::DataView input, ::device::mojom::blink::SerialConnectionOptionsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::SerialConnectionInfo::DataView,
                                         ::device::mojom::blink::SerialConnectionInfoPtr> {
  static bool IsNull(const ::device::mojom::blink::SerialConnectionInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::SerialConnectionInfoPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::SerialConnectionInfo::bitrate) bitrate(
      const ::device::mojom::blink::SerialConnectionInfoPtr& input) {
    return input->bitrate;
  }

  static decltype(::device::mojom::blink::SerialConnectionInfo::data_bits) data_bits(
      const ::device::mojom::blink::SerialConnectionInfoPtr& input) {
    return input->data_bits;
  }

  static decltype(::device::mojom::blink::SerialConnectionInfo::parity_bit) parity_bit(
      const ::device::mojom::blink::SerialConnectionInfoPtr& input) {
    return input->parity_bit;
  }

  static decltype(::device::mojom::blink::SerialConnectionInfo::stop_bits) stop_bits(
      const ::device::mojom::blink::SerialConnectionInfoPtr& input) {
    return input->stop_bits;
  }

  static decltype(::device::mojom::blink::SerialConnectionInfo::cts_flow_control) cts_flow_control(
      const ::device::mojom::blink::SerialConnectionInfoPtr& input) {
    return input->cts_flow_control;
  }

  static bool Read(::device::mojom::blink::SerialConnectionInfo::DataView input, ::device::mojom::blink::SerialConnectionInfoPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::SerialHostControlSignals::DataView,
                                         ::device::mojom::blink::SerialHostControlSignalsPtr> {
  static bool IsNull(const ::device::mojom::blink::SerialHostControlSignalsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::SerialHostControlSignalsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::SerialHostControlSignals::dtr) dtr(
      const ::device::mojom::blink::SerialHostControlSignalsPtr& input) {
    return input->dtr;
  }

  static decltype(::device::mojom::blink::SerialHostControlSignals::has_dtr) has_dtr(
      const ::device::mojom::blink::SerialHostControlSignalsPtr& input) {
    return input->has_dtr;
  }

  static decltype(::device::mojom::blink::SerialHostControlSignals::rts) rts(
      const ::device::mojom::blink::SerialHostControlSignalsPtr& input) {
    return input->rts;
  }

  static decltype(::device::mojom::blink::SerialHostControlSignals::has_rts) has_rts(
      const ::device::mojom::blink::SerialHostControlSignalsPtr& input) {
    return input->has_rts;
  }

  static bool Read(::device::mojom::blink::SerialHostControlSignals::DataView input, ::device::mojom::blink::SerialHostControlSignalsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::SerialPortControlSignals::DataView,
                                         ::device::mojom::blink::SerialPortControlSignalsPtr> {
  static bool IsNull(const ::device::mojom::blink::SerialPortControlSignalsPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::SerialPortControlSignalsPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::SerialPortControlSignals::dcd) dcd(
      const ::device::mojom::blink::SerialPortControlSignalsPtr& input) {
    return input->dcd;
  }

  static decltype(::device::mojom::blink::SerialPortControlSignals::cts) cts(
      const ::device::mojom::blink::SerialPortControlSignalsPtr& input) {
    return input->cts;
  }

  static decltype(::device::mojom::blink::SerialPortControlSignals::ri) ri(
      const ::device::mojom::blink::SerialPortControlSignalsPtr& input) {
    return input->ri;
  }

  static decltype(::device::mojom::blink::SerialPortControlSignals::dsr) dsr(
      const ::device::mojom::blink::SerialPortControlSignalsPtr& input) {
    return input->dsr;
  }

  static bool Read(::device::mojom::blink::SerialPortControlSignals::DataView input, ::device::mojom::blink::SerialPortControlSignalsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_BLINK_H_