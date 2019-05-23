// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_H_
#define IPC_IPC_MOJOM_H_

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
#include "ipc/ipc.mojom-shared.h"
#include "ipc/ipc.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom.h"
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
#include "ipc/message_view.h"
#include "base/component_export.h"




namespace IPC {
namespace mojom {

class GenericInterfaceProxy;

template <typename ImplRefTraits>
class GenericInterfaceStub;

class GenericInterfaceRequestValidator;


class COMPONENT_EXPORT(IPC_MOJOM) GenericInterface
    : public GenericInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GenericInterfaceInterfaceBase;
  using Proxy_ = GenericInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = GenericInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = GenericInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~GenericInterface() {}
};

class ChannelProxy;

template <typename ImplRefTraits>
class ChannelStub;

class ChannelRequestValidator;


class COMPONENT_EXPORT(IPC_MOJOM) Channel
    : public ChannelInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ChannelInterfaceBase;
  using Proxy_ = ChannelProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChannelStub<ImplRefTraits>;

  using RequestValidator_ = ChannelRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetPeerPidMinVersion = 0,
    kReceiveMinVersion = 0,
    kGetAssociatedInterfaceMinVersion = 0,
  };
  virtual ~Channel() {}

  
  virtual void SetPeerPid(int32_t pid) = 0;

  
  virtual void Receive(IPC::MessageView message) = 0;

  
  virtual void GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) = 0;
};

class ChannelBootstrapProxy;

template <typename ImplRefTraits>
class ChannelBootstrapStub;

class ChannelBootstrapRequestValidator;


class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrap
    : public ChannelBootstrapInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ChannelBootstrapInterfaceBase;
  using Proxy_ = ChannelBootstrapProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChannelBootstrapStub<ImplRefTraits>;

  using RequestValidator_ = ChannelBootstrapRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~ChannelBootstrap() {}
};

class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceProxy
    : public GenericInterface {
 public:
  using InterfaceType = GenericInterface;

  explicit GenericInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(IPC_MOJOM) ChannelProxy
    : public Channel {
 public:
  using InterfaceType = Channel;

  explicit ChannelProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPeerPid(int32_t pid) final;
  void Receive(IPC::MessageView message) final;
  void GetAssociatedInterface(const std::string& name, GenericInterfaceAssociatedRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapProxy
    : public ChannelBootstrap {
 public:
  using InterfaceType = ChannelBootstrap;

  explicit ChannelBootstrapProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceStubDispatch {
 public:
  static bool Accept(GenericInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GenericInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GenericInterface>>
class GenericInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GenericInterfaceStub() {}
  ~GenericInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GenericInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GenericInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelStubDispatch {
 public:
  static bool Accept(Channel* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Channel* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Channel>>
class ChannelStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChannelStub() {}
  ~ChannelStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapStubDispatch {
 public:
  static bool Accept(ChannelBootstrap* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChannelBootstrap* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChannelBootstrap>>
class ChannelBootstrapStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChannelBootstrapStub() {}
  ~ChannelBootstrapStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelBootstrapStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChannelBootstrapStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(IPC_MOJOM) GenericInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class COMPONENT_EXPORT(IPC_MOJOM) ChannelBootstrapRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class COMPONENT_EXPORT(IPC_MOJOM) Message {
 public:
  using DataView = MessageDataView;
  using Data_ = internal::Message_Data;

  template <typename... Args>
  static MessagePtr New(Args&&... args) {
    return MessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MessagePtr From(const U& u) {
    return mojo::TypeConverter<MessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Message>::Convert(*this);
  }


  Message();

  Message(
      mojo_base::BigBuffer buffer,
      base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> handles);

  ~Message();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MessagePtr>
  MessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Message>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Message::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Message::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Message_UnserializedMessageContext<
            UserType, Message::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Message::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Message::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Message_UnserializedMessageContext<
            UserType, Message::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Message::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo_base::BigBuffer buffer;
  
  base::Optional<std::vector<::mojo::native::SerializedHandlePtr>> handles;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Message);
};

template <typename StructPtrType>
MessagePtr Message::Clone() const {
  return New(
      mojo::Clone(buffer),
      mojo::Clone(handles)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Message>::value>::type*>
bool Message::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer, other_struct.buffer))
    return false;
  if (!mojo::Equals(this->handles, other_struct.handles))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace IPC

namespace mojo {


template <>
struct COMPONENT_EXPORT(IPC_MOJOM) StructTraits<::IPC::mojom::Message::DataView,
                                         ::IPC::mojom::MessagePtr> {
  static bool IsNull(const ::IPC::mojom::MessagePtr& input) { return !input; }
  static void SetToNull(::IPC::mojom::MessagePtr* output) { output->reset(); }

  static  decltype(::IPC::mojom::Message::buffer)& buffer(
       ::IPC::mojom::MessagePtr& input) {
    return input->buffer;
  }

  static  decltype(::IPC::mojom::Message::handles)& handles(
       ::IPC::mojom::MessagePtr& input) {
    return input->handles;
  }

  static bool Read(::IPC::mojom::Message::DataView input, ::IPC::mojom::MessagePtr* output);
};

}  // namespace mojo

#endif  // IPC_IPC_MOJOM_H_