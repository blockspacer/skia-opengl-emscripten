// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-shared.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {

class DevToolsAgentProxy;

template <typename ImplRefTraits>
class DevToolsAgentStub;

class DevToolsAgentRequestValidator;
class DevToolsAgentResponseValidator;


class PLATFORM_EXPORT DevToolsAgent
    : public DevToolsAgentInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DevToolsAgentInterfaceBase;
  using Proxy_ = DevToolsAgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsAgentStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsAgentRequestValidator;
  using ResponseValidator_ = DevToolsAgentResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAttachDevToolsSessionMinVersion = 0,
    kInspectElementMinVersion = 0,
    kReportChildWorkersMinVersion = 0,
  };
  virtual ~DevToolsAgent() {}

  
  virtual void AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, DevToolsSessionStatePtr reattach_session_state) = 0;

  
  virtual void InspectElement(const ::blink::WebPoint& point) = 0;


  using ReportChildWorkersCallback = base::OnceCallback<void()>;
  
  virtual void ReportChildWorkers(bool report, bool wait_for_debugger, ReportChildWorkersCallback callback) = 0;
};

class DevToolsAgentHostProxy;

template <typename ImplRefTraits>
class DevToolsAgentHostStub;

class DevToolsAgentHostRequestValidator;


class PLATFORM_EXPORT DevToolsAgentHost
    : public DevToolsAgentHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DevToolsAgentHostInterfaceBase;
  using Proxy_ = DevToolsAgentHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsAgentHostStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsAgentHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kChildWorkerCreatedMinVersion = 0,
  };
  virtual ~DevToolsAgentHost() {}

  
  virtual void ChildWorkerCreated(DevToolsAgentPtr worker_devtools_agent, DevToolsAgentHostRequest worker_devtools_agent_host, const ::blink::KURL& url, const WTF::String& name, const base::UnguessableToken& devtools_worker_token, bool waiting_for_debugger) = 0;
};

class DevToolsSessionProxy;

template <typename ImplRefTraits>
class DevToolsSessionStub;

class DevToolsSessionRequestValidator;


class PLATFORM_EXPORT DevToolsSession
    : public DevToolsSessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DevToolsSessionInterfaceBase;
  using Proxy_ = DevToolsSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsSessionStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsSessionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDispatchProtocolCommandMinVersion = 0,
  };
  virtual ~DevToolsSession() {}

  
  virtual void DispatchProtocolCommand(int32_t call_id, const WTF::String& method, DevToolsMessagePtr message) = 0;
};

class DevToolsSessionHostProxy;

template <typename ImplRefTraits>
class DevToolsSessionHostStub;

class DevToolsSessionHostRequestValidator;


class PLATFORM_EXPORT DevToolsSessionHost
    : public DevToolsSessionHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DevToolsSessionHostInterfaceBase;
  using Proxy_ = DevToolsSessionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = DevToolsSessionHostStub<ImplRefTraits>;

  using RequestValidator_ = DevToolsSessionHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDispatchProtocolResponseMinVersion = 0,
    kDispatchProtocolNotificationMinVersion = 0,
  };
  virtual ~DevToolsSessionHost() {}

  
  virtual void DispatchProtocolResponse(DevToolsMessagePtr message, int32_t call_id, DevToolsSessionStatePtr updates) = 0;

  
  virtual void DispatchProtocolNotification(DevToolsMessagePtr message, DevToolsSessionStatePtr updates) = 0;
};

class PLATFORM_EXPORT DevToolsAgentProxy
    : public DevToolsAgent {
 public:
  using InterfaceType = DevToolsAgent;

  explicit DevToolsAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  void AttachDevToolsSession(DevToolsSessionHostAssociatedPtrInfo host, DevToolsSessionAssociatedRequest session, DevToolsSessionRequest io_session, DevToolsSessionStatePtr reattach_session_state) final;
  void InspectElement(const ::blink::WebPoint& point) final;
  void ReportChildWorkers(bool report, bool wait_for_debugger, ReportChildWorkersCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT DevToolsAgentHostProxy
    : public DevToolsAgentHost {
 public:
  using InterfaceType = DevToolsAgentHost;

  explicit DevToolsAgentHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void ChildWorkerCreated(DevToolsAgentPtr worker_devtools_agent, DevToolsAgentHostRequest worker_devtools_agent_host, const ::blink::KURL& url, const WTF::String& name, const base::UnguessableToken& devtools_worker_token, bool waiting_for_debugger) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT DevToolsSessionProxy
    : public DevToolsSession {
 public:
  using InterfaceType = DevToolsSession;

  explicit DevToolsSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchProtocolCommand(int32_t call_id, const WTF::String& method, DevToolsMessagePtr message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT DevToolsSessionHostProxy
    : public DevToolsSessionHost {
 public:
  using InterfaceType = DevToolsSessionHost;

  explicit DevToolsSessionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchProtocolResponse(DevToolsMessagePtr message, int32_t call_id, DevToolsSessionStatePtr updates) final;
  void DispatchProtocolNotification(DevToolsMessagePtr message, DevToolsSessionStatePtr updates) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT DevToolsAgentStubDispatch {
 public:
  static bool Accept(DevToolsAgent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsAgent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsAgent>>
class DevToolsAgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsAgentStub() {}
  ~DevToolsAgentStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsAgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsAgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DevToolsAgentHostStubDispatch {
 public:
  static bool Accept(DevToolsAgentHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsAgentHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsAgentHost>>
class DevToolsAgentHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsAgentHostStub() {}
  ~DevToolsAgentHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsAgentHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsAgentHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DevToolsSessionStubDispatch {
 public:
  static bool Accept(DevToolsSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsSession>>
class DevToolsSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsSessionStub() {}
  ~DevToolsSessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DevToolsSessionHostStubDispatch {
 public:
  static bool Accept(DevToolsSessionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DevToolsSessionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DevToolsSessionHost>>
class DevToolsSessionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DevToolsSessionHostStub() {}
  ~DevToolsSessionHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DevToolsSessionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DevToolsAgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT DevToolsAgentHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT DevToolsSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT DevToolsSessionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT DevToolsAgentResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class PLATFORM_EXPORT DevToolsMessage {
 public:
  using DataView = DevToolsMessageDataView;
  using Data_ = internal::DevToolsMessage_Data;

  template <typename... Args>
  static DevToolsMessagePtr New(Args&&... args) {
    return DevToolsMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DevToolsMessagePtr From(const U& u) {
    return mojo::TypeConverter<DevToolsMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DevToolsMessage>::Convert(*this);
  }


  DevToolsMessage();

  explicit DevToolsMessage(
      mojo_base::BigBuffer data);

  ~DevToolsMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DevToolsMessagePtr>
  DevToolsMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DevToolsMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DevToolsMessage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DevToolsMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DevToolsMessage_UnserializedMessageContext<
            UserType, DevToolsMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DevToolsMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DevToolsMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DevToolsMessage_UnserializedMessageContext<
            UserType, DevToolsMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DevToolsMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo_base::BigBuffer data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DevToolsMessage);
};





class PLATFORM_EXPORT DevToolsSessionState {
 public:
  using DataView = DevToolsSessionStateDataView;
  using Data_ = internal::DevToolsSessionState_Data;

  template <typename... Args>
  static DevToolsSessionStatePtr New(Args&&... args) {
    return DevToolsSessionStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DevToolsSessionStatePtr From(const U& u) {
    return mojo::TypeConverter<DevToolsSessionStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DevToolsSessionState>::Convert(*this);
  }


  DevToolsSessionState();

  explicit DevToolsSessionState(
      const WTF::HashMap<WTF::String, base::Optional<WTF::Vector<uint8_t>>>& entries);

  ~DevToolsSessionState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DevToolsSessionStatePtr>
  DevToolsSessionStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DevToolsSessionState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DevToolsSessionState::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DevToolsSessionState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DevToolsSessionState_UnserializedMessageContext<
            UserType, DevToolsSessionState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DevToolsSessionState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DevToolsSessionState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DevToolsSessionState_UnserializedMessageContext<
            UserType, DevToolsSessionState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DevToolsSessionState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::HashMap<WTF::String, base::Optional<WTF::Vector<uint8_t>>> entries;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
DevToolsMessagePtr DevToolsMessage::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DevToolsMessage>::value>::type*>
bool DevToolsMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
DevToolsSessionStatePtr DevToolsSessionState::Clone() const {
  return New(
      mojo::Clone(entries)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DevToolsSessionState>::value>::type*>
bool DevToolsSessionState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->entries, other_struct.entries))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DevToolsMessage::DataView,
                                         ::blink::mojom::blink::DevToolsMessagePtr> {
  static bool IsNull(const ::blink::mojom::blink::DevToolsMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DevToolsMessagePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::DevToolsMessage::data)& data(
       ::blink::mojom::blink::DevToolsMessagePtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::blink::DevToolsMessage::DataView input, ::blink::mojom::blink::DevToolsMessagePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DevToolsSessionState::DataView,
                                         ::blink::mojom::blink::DevToolsSessionStatePtr> {
  static bool IsNull(const ::blink::mojom::blink::DevToolsSessionStatePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DevToolsSessionStatePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::DevToolsSessionState::entries)& entries(
      const ::blink::mojom::blink::DevToolsSessionStatePtr& input) {
    return input->entries;
  }

  static bool Read(::blink::mojom::blink::DevToolsSessionState::DataView input, ::blink::mojom::blink::DevToolsSessionStatePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_AGENT_MOJOM_BLINK_H_