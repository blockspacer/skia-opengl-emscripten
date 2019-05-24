// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_factory.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/sample_factory.mojom-forward.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"
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




namespace sample {

class NamedObjectProxy;

template <typename ImplRefTraits>
class NamedObjectStub;

class NamedObjectRequestValidator;
class NamedObjectResponseValidator;


class  NamedObject
    : public NamedObjectInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NamedObjectInterfaceBase;
  using Proxy_ = NamedObjectProxy;

  template <typename ImplRefTraits>
  using Stub_ = NamedObjectStub<ImplRefTraits>;

  using RequestValidator_ = NamedObjectRequestValidator;
  using ResponseValidator_ = NamedObjectResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetNameMinVersion = 0,
    kGetNameMinVersion = 0,
  };
  virtual ~NamedObject() {}

  
  virtual void SetName(const std::string& name) = 0;


  using GetNameCallback = base::OnceCallback<void(const std::string&)>;
  
  virtual void GetName(GetNameCallback callback) = 0;
};

class FactoryProxy;

template <typename ImplRefTraits>
class FactoryStub;

class FactoryRequestValidator;
class FactoryResponseValidator;


class  Factory
    : public FactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FactoryInterfaceBase;
  using Proxy_ = FactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = FactoryStub<ImplRefTraits>;

  using RequestValidator_ = FactoryRequestValidator;
  using ResponseValidator_ = FactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDoStuffMinVersion = 0,
    kDoStuff2MinVersion = 0,
    kCreateNamedObjectMinVersion = 0,
    kRequestImportedInterfaceMinVersion = 0,
    kTakeImportedInterfaceMinVersion = 0,
  };
  virtual ~Factory() {}


  using DoStuffCallback = base::OnceCallback<void(ResponsePtr, const std::string&)>;
  
  virtual void DoStuff(RequestPtr request, mojo::ScopedMessagePipeHandle pipe, DoStuffCallback callback) = 0;


  using DoStuff2Callback = base::OnceCallback<void(const std::string&)>;
  
  virtual void DoStuff2(mojo::ScopedDataPipeConsumerHandle pipe, DoStuff2Callback callback) = 0;

  
  virtual void CreateNamedObject(mojo::PendingReceiver<NamedObject> obj) = 0;


  using RequestImportedInterfaceCallback = base::OnceCallback<void(mojo::PendingReceiver<::imported::ImportedInterface>)>;
  
  virtual void RequestImportedInterface(mojo::PendingReceiver<::imported::ImportedInterface> obj, RequestImportedInterfaceCallback callback) = 0;


  using TakeImportedInterfaceCallback = base::OnceCallback<void(mojo::PendingRemote<::imported::ImportedInterface>)>;
  
  virtual void TakeImportedInterface(mojo::PendingRemote<::imported::ImportedInterface> obj, TakeImportedInterfaceCallback callback) = 0;
};

class  NamedObjectProxy
    : public NamedObject {
 public:
  using InterfaceType = NamedObject;

  explicit NamedObjectProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetName(const std::string& name) final;
  void GetName(GetNameCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  FactoryProxy
    : public Factory {
 public:
  using InterfaceType = Factory;

  explicit FactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void DoStuff(RequestPtr request, mojo::ScopedMessagePipeHandle pipe, DoStuffCallback callback) final;
  void DoStuff2(mojo::ScopedDataPipeConsumerHandle pipe, DoStuff2Callback callback) final;
  void CreateNamedObject(mojo::PendingReceiver<NamedObject> obj) final;
  void RequestImportedInterface(mojo::PendingReceiver<::imported::ImportedInterface> obj, RequestImportedInterfaceCallback callback) final;
  void TakeImportedInterface(mojo::PendingRemote<::imported::ImportedInterface> obj, TakeImportedInterfaceCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  NamedObjectStubDispatch {
 public:
  static bool Accept(NamedObject* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NamedObject* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NamedObject>>
class NamedObjectStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NamedObjectStub() {}
  ~NamedObjectStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NamedObjectStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NamedObjectStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FactoryStubDispatch {
 public:
  static bool Accept(Factory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Factory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Factory>>
class FactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FactoryStub() {}
  ~FactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  NamedObjectRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  NamedObjectResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  Request {
 public:
  using DataView = RequestDataView;
  using Data_ = internal::Request_Data;

  template <typename... Args>
  static RequestPtr New(Args&&... args) {
    return RequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RequestPtr From(const U& u) {
    return mojo::TypeConverter<RequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Request>::Convert(*this);
  }


  Request();

  Request(
      int32_t x,
      mojo::ScopedMessagePipeHandle pipe,
      base::Optional<std::vector<mojo::ScopedMessagePipeHandle>> more_pipes,
      mojo::PendingRemote<::imported::ImportedInterface> obj);

  ~Request();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RequestPtr>
  RequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Request>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Request::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Request::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Request_UnserializedMessageContext<
            UserType, Request::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Request::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Request::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Request_UnserializedMessageContext<
            UserType, Request::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Request::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  mojo::ScopedMessagePipeHandle pipe;
  
  base::Optional<std::vector<mojo::ScopedMessagePipeHandle>> more_pipes;
  
  mojo::PendingRemote<::imported::ImportedInterface> obj;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Request);
};





class  Response {
 public:
  using DataView = ResponseDataView;
  using Data_ = internal::Response_Data;

  template <typename... Args>
  static ResponsePtr New(Args&&... args) {
    return ResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResponsePtr From(const U& u) {
    return mojo::TypeConverter<ResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Response>::Convert(*this);
  }


  Response();

  Response(
      int32_t x,
      mojo::ScopedMessagePipeHandle pipe);

  ~Response();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResponsePtr>
  ResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Response>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Response::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Response::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Response_UnserializedMessageContext<
            UserType, Response::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Response::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Response::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Response_UnserializedMessageContext<
            UserType, Response::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Response::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t x;
  
  mojo::ScopedMessagePipeHandle pipe;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Response);
};

template <typename StructPtrType>
RequestPtr Request::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(pipe),
      mojo::Clone(more_pipes),
      mojo::Clone(obj)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Request>::value>::type*>
bool Request::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->pipe, other_struct.pipe))
    return false;
  if (!mojo::Equals(this->more_pipes, other_struct.more_pipes))
    return false;
  if (!mojo::Equals(this->obj, other_struct.obj))
    return false;
  return true;
}
template <typename StructPtrType>
ResponsePtr Response::Clone() const {
  return New(
      mojo::Clone(x),
      mojo::Clone(pipe)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Response>::value>::type*>
bool Response::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->pipe, other_struct.pipe))
    return false;
  return true;
}


}  // namespace sample

namespace mojo {


template <>
struct  StructTraits<::sample::Request::DataView,
                                         ::sample::RequestPtr> {
  static bool IsNull(const ::sample::RequestPtr& input) { return !input; }
  static void SetToNull(::sample::RequestPtr* output) { output->reset(); }

  static decltype(::sample::Request::x) x(
      const ::sample::RequestPtr& input) {
    return input->x;
  }

  static  decltype(::sample::Request::pipe)& pipe(
       ::sample::RequestPtr& input) {
    return input->pipe;
  }

  static  decltype(::sample::Request::more_pipes)& more_pipes(
       ::sample::RequestPtr& input) {
    return input->more_pipes;
  }

  static  decltype(::sample::Request::obj)& obj(
       ::sample::RequestPtr& input) {
    return input->obj;
  }

  static bool Read(::sample::Request::DataView input, ::sample::RequestPtr* output);
};


template <>
struct  StructTraits<::sample::Response::DataView,
                                         ::sample::ResponsePtr> {
  static bool IsNull(const ::sample::ResponsePtr& input) { return !input; }
  static void SetToNull(::sample::ResponsePtr* output) { output->reset(); }

  static decltype(::sample::Response::x) x(
      const ::sample::ResponsePtr& input) {
    return input->x;
  }

  static  decltype(::sample::Response::pipe)& pipe(
       ::sample::ResponsePtr& input) {
    return input->pipe;
  }

  static bool Read(::sample::Response::DataView input, ::sample::ResponsePtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_H_