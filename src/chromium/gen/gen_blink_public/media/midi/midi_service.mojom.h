// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_H_

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
#include "media/midi/midi_service.mojom-shared.h"
#include "media/midi/midi_service.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
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




namespace midi {
namespace mojom {

class MidiSessionClientProxy;

template <typename ImplRefTraits>
class MidiSessionClientStub;

class MidiSessionClientRequestValidator;


class  MidiSessionClient
    : public MidiSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MidiSessionClientInterfaceBase;
  using Proxy_ = MidiSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = MidiSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = MidiSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddInputPortMinVersion = 0,
    kAddOutputPortMinVersion = 0,
    kSetInputPortStateMinVersion = 0,
    kSetOutputPortStateMinVersion = 0,
    kSessionStartedMinVersion = 0,
    kAcknowledgeSentDataMinVersion = 0,
    kDataReceivedMinVersion = 0,
  };
  virtual ~MidiSessionClient() {}

  
  virtual void AddInputPort(PortInfoPtr info) = 0;

  
  virtual void AddOutputPort(PortInfoPtr info) = 0;

  
  virtual void SetInputPortState(uint32_t port, PortState state) = 0;

  
  virtual void SetOutputPortState(uint32_t port, PortState state) = 0;

  
  virtual void SessionStarted(Result result) = 0;

  
  virtual void AcknowledgeSentData(uint32_t bytes) = 0;

  
  virtual void DataReceived(uint32_t port, const std::vector<uint8_t>& data, base::TimeTicks timestamp) = 0;
};

class MidiSessionProviderProxy;

template <typename ImplRefTraits>
class MidiSessionProviderStub;

class MidiSessionProviderRequestValidator;


class  MidiSessionProvider
    : public MidiSessionProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MidiSessionProviderInterfaceBase;
  using Proxy_ = MidiSessionProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = MidiSessionProviderStub<ImplRefTraits>;

  using RequestValidator_ = MidiSessionProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartSessionMinVersion = 0,
  };
  virtual ~MidiSessionProvider() {}

  
  virtual void StartSession(MidiSessionRequest request, MidiSessionClientPtr client) = 0;
};

class MidiSessionProxy;

template <typename ImplRefTraits>
class MidiSessionStub;

class MidiSessionRequestValidator;


class  MidiSession
    : public MidiSessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MidiSessionInterfaceBase;
  using Proxy_ = MidiSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = MidiSessionStub<ImplRefTraits>;

  using RequestValidator_ = MidiSessionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSendDataMinVersion = 0,
  };
  virtual ~MidiSession() {}

  
  virtual void SendData(uint32_t port, const std::vector<uint8_t>& data, base::TimeTicks timestamp) = 0;
};

class  MidiSessionClientProxy
    : public MidiSessionClient {
 public:
  using InterfaceType = MidiSessionClient;

  explicit MidiSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddInputPort(PortInfoPtr info) final;
  void AddOutputPort(PortInfoPtr info) final;
  void SetInputPortState(uint32_t port, PortState state) final;
  void SetOutputPortState(uint32_t port, PortState state) final;
  void SessionStarted(Result result) final;
  void AcknowledgeSentData(uint32_t bytes) final;
  void DataReceived(uint32_t port, const std::vector<uint8_t>& data, base::TimeTicks timestamp) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MidiSessionProviderProxy
    : public MidiSessionProvider {
 public:
  using InterfaceType = MidiSessionProvider;

  explicit MidiSessionProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSession(MidiSessionRequest request, MidiSessionClientPtr client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MidiSessionProxy
    : public MidiSession {
 public:
  using InterfaceType = MidiSession;

  explicit MidiSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void SendData(uint32_t port, const std::vector<uint8_t>& data, base::TimeTicks timestamp) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MidiSessionClientStubDispatch {
 public:
  static bool Accept(MidiSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MidiSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MidiSessionClient>>
class MidiSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MidiSessionClientStub() {}
  ~MidiSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MidiSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MidiSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MidiSessionProviderStubDispatch {
 public:
  static bool Accept(MidiSessionProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MidiSessionProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MidiSessionProvider>>
class MidiSessionProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MidiSessionProviderStub() {}
  ~MidiSessionProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MidiSessionProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MidiSessionProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MidiSessionStubDispatch {
 public:
  static bool Accept(MidiSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MidiSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MidiSession>>
class MidiSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MidiSessionStub() {}
  ~MidiSessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MidiSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MidiSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MidiSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MidiSessionProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MidiSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  PortInfo {
 public:
  using DataView = PortInfoDataView;
  using Data_ = internal::PortInfo_Data;

  template <typename... Args>
  static PortInfoPtr New(Args&&... args) {
    return PortInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PortInfoPtr From(const U& u) {
    return mojo::TypeConverter<PortInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PortInfo>::Convert(*this);
  }


  PortInfo();

  PortInfo(
      const std::string& id,
      const std::string& manufacturer,
      const std::string& name,
      const std::string& version,
      PortState state);

  ~PortInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PortInfoPtr>
  PortInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PortInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PortInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PortInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PortInfo_UnserializedMessageContext<
            UserType, PortInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PortInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PortInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PortInfo_UnserializedMessageContext<
            UserType, PortInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PortInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string id;
  
  std::string manufacturer;
  
  std::string name;
  
  std::string version;
  
  PortState state;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PortInfoPtr PortInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(manufacturer),
      mojo::Clone(name),
      mojo::Clone(version),
      mojo::Clone(state)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PortInfo>::value>::type*>
bool PortInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->manufacturer, other_struct.manufacturer))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace midi

namespace mojo {


template <>
struct  StructTraits<::midi::mojom::PortInfo::DataView,
                                         ::midi::mojom::PortInfoPtr> {
  static bool IsNull(const ::midi::mojom::PortInfoPtr& input) { return !input; }
  static void SetToNull(::midi::mojom::PortInfoPtr* output) { output->reset(); }

  static const decltype(::midi::mojom::PortInfo::id)& id(
      const ::midi::mojom::PortInfoPtr& input) {
    return input->id;
  }

  static const decltype(::midi::mojom::PortInfo::manufacturer)& manufacturer(
      const ::midi::mojom::PortInfoPtr& input) {
    return input->manufacturer;
  }

  static const decltype(::midi::mojom::PortInfo::name)& name(
      const ::midi::mojom::PortInfoPtr& input) {
    return input->name;
  }

  static const decltype(::midi::mojom::PortInfo::version)& version(
      const ::midi::mojom::PortInfoPtr& input) {
    return input->version;
  }

  static decltype(::midi::mojom::PortInfo::state) state(
      const ::midi::mojom::PortInfoPtr& input) {
    return input->state;
  }

  static bool Read(::midi::mojom::PortInfo::DataView input, ::midi::mojom::PortInfoPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_H_