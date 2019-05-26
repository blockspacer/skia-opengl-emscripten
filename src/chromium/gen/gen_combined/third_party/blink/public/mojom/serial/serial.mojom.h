// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_H_

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
#include "third_party/blink/public/mojom/serial/serial.mojom-shared.h"
#include "third_party/blink/public/mojom/serial/serial.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/device/public/mojom/serial.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class SerialServiceProxy;

template <typename ImplRefTraits>
class SerialServiceStub;

class SerialServiceRequestValidator;
class SerialServiceResponseValidator;


class BLINK_COMMON_EXPORT SerialService
    : public SerialServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SerialServiceInterfaceBase;
  using Proxy_ = SerialServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = SerialServiceStub<ImplRefTraits>;

  using RequestValidator_ = SerialServiceRequestValidator;
  using ResponseValidator_ = SerialServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPortsMinVersion = 0,
    kRequestPortMinVersion = 0,
    kGetPortMinVersion = 0,
  };
  virtual ~SerialService() {}


  using GetPortsCallback = base::OnceCallback<void(std::vector<SerialPortInfoPtr>)>;
  
  virtual void GetPorts(GetPortsCallback callback) = 0;


  using RequestPortCallback = base::OnceCallback<void(SerialPortInfoPtr)>;
  
  virtual void RequestPort(std::vector<SerialPortFilterPtr> filters, RequestPortCallback callback) = 0;

  
  virtual void GetPort(const base::UnguessableToken& token, ::device::mojom::SerialPortRequest port_request) = 0;
};

class BLINK_COMMON_EXPORT SerialServiceProxy
    : public SerialService {
 public:
  using InterfaceType = SerialService;

  explicit SerialServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPorts(GetPortsCallback callback) final;
  void RequestPort(std::vector<SerialPortFilterPtr> filters, RequestPortCallback callback) final;
  void GetPort(const base::UnguessableToken& token, ::device::mojom::SerialPortRequest port_request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT SerialServiceStubDispatch {
 public:
  static bool Accept(SerialService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SerialService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SerialService>>
class SerialServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SerialServiceStub() {}
  ~SerialServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SerialServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT SerialServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT SerialServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_COMMON_EXPORT SerialPortFilter {
 public:
  using DataView = SerialPortFilterDataView;
  using Data_ = internal::SerialPortFilter_Data;

  template <typename... Args>
  static SerialPortFilterPtr New(Args&&... args) {
    return SerialPortFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerialPortFilterPtr From(const U& u) {
    return mojo::TypeConverter<SerialPortFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerialPortFilter>::Convert(*this);
  }


  SerialPortFilter();

  SerialPortFilter(
      uint32_t vendor_id,
      bool has_vendor_id,
      uint16_t product_id,
      bool has_product_id);

  ~SerialPortFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerialPortFilterPtr>
  SerialPortFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerialPortFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialPortFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerialPortFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerialPortFilter_UnserializedMessageContext<
            UserType, SerialPortFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerialPortFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerialPortFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerialPortFilter_UnserializedMessageContext<
            UserType, SerialPortFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerialPortFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t vendor_id;
  
  bool has_vendor_id;
  
  uint16_t product_id;
  
  bool has_product_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class BLINK_COMMON_EXPORT SerialPortInfo {
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
      uint32_t vendor_id,
      bool has_vendor_id,
      uint16_t product_id,
      bool has_product_id);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerialPortInfo::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  uint32_t vendor_id;
  
  bool has_vendor_id;
  
  uint16_t product_id;
  
  bool has_product_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
SerialPortInfoPtr SerialPortInfo::Clone() const {
  return New(
      mojo::Clone(token),
      mojo::Clone(vendor_id),
      mojo::Clone(has_vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(has_product_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialPortInfo>::value>::type*>
bool SerialPortInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->token, other_struct.token))
    return false;
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->has_vendor_id, other_struct.has_vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->has_product_id, other_struct.has_product_id))
    return false;
  return true;
}
template <typename StructPtrType>
SerialPortFilterPtr SerialPortFilter::Clone() const {
  return New(
      mojo::Clone(vendor_id),
      mojo::Clone(has_vendor_id),
      mojo::Clone(product_id),
      mojo::Clone(has_product_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerialPortFilter>::value>::type*>
bool SerialPortFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->has_vendor_id, other_struct.has_vendor_id))
    return false;
  if (!mojo::Equals(this->product_id, other_struct.product_id))
    return false;
  if (!mojo::Equals(this->has_product_id, other_struct.has_product_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SerialPortInfo::DataView,
                                         ::blink::mojom::SerialPortInfoPtr> {
  static bool IsNull(const ::blink::mojom::SerialPortInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SerialPortInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::SerialPortInfo::token)& token(
      const ::blink::mojom::SerialPortInfoPtr& input) {
    return input->token;
  }

  static decltype(::blink::mojom::SerialPortInfo::vendor_id) vendor_id(
      const ::blink::mojom::SerialPortInfoPtr& input) {
    return input->vendor_id;
  }

  static decltype(::blink::mojom::SerialPortInfo::has_vendor_id) has_vendor_id(
      const ::blink::mojom::SerialPortInfoPtr& input) {
    return input->has_vendor_id;
  }

  static decltype(::blink::mojom::SerialPortInfo::product_id) product_id(
      const ::blink::mojom::SerialPortInfoPtr& input) {
    return input->product_id;
  }

  static decltype(::blink::mojom::SerialPortInfo::has_product_id) has_product_id(
      const ::blink::mojom::SerialPortInfoPtr& input) {
    return input->has_product_id;
  }

  static bool Read(::blink::mojom::SerialPortInfo::DataView input, ::blink::mojom::SerialPortInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SerialPortFilter::DataView,
                                         ::blink::mojom::SerialPortFilterPtr> {
  static bool IsNull(const ::blink::mojom::SerialPortFilterPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SerialPortFilterPtr* output) { output->reset(); }

  static decltype(::blink::mojom::SerialPortFilter::vendor_id) vendor_id(
      const ::blink::mojom::SerialPortFilterPtr& input) {
    return input->vendor_id;
  }

  static decltype(::blink::mojom::SerialPortFilter::has_vendor_id) has_vendor_id(
      const ::blink::mojom::SerialPortFilterPtr& input) {
    return input->has_vendor_id;
  }

  static decltype(::blink::mojom::SerialPortFilter::product_id) product_id(
      const ::blink::mojom::SerialPortFilterPtr& input) {
    return input->product_id;
  }

  static decltype(::blink::mojom::SerialPortFilter::has_product_id) has_product_id(
      const ::blink::mojom::SerialPortFilterPtr& input) {
    return input->has_product_id;
  }

  static bool Read(::blink::mojom::SerialPortFilter::DataView input, ::blink::mojom::SerialPortFilterPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERIAL_SERIAL_MOJOM_H_