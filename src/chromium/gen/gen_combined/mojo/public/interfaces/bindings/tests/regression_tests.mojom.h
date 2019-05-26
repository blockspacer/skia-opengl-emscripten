// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/regression_tests.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/regression_tests.mojom-forward.h"
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




namespace regression_tests {

class CheckMethodWithEmptyResponseProxy;

template <typename ImplRefTraits>
class CheckMethodWithEmptyResponseStub;

class CheckMethodWithEmptyResponseRequestValidator;
class CheckMethodWithEmptyResponseResponseValidator;


class  CheckMethodWithEmptyResponse
    : public CheckMethodWithEmptyResponseInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CheckMethodWithEmptyResponseInterfaceBase;
  using Proxy_ = CheckMethodWithEmptyResponseProxy;

  template <typename ImplRefTraits>
  using Stub_ = CheckMethodWithEmptyResponseStub<ImplRefTraits>;

  using RequestValidator_ = CheckMethodWithEmptyResponseRequestValidator;
  using ResponseValidator_ = CheckMethodWithEmptyResponseResponseValidator;
  enum MethodMinVersions : uint32_t {
    kWithouParameterAndEmptyResponseMinVersion = 0,
    kWithParameterAndEmptyResponseMinVersion = 0,
  };
  virtual ~CheckMethodWithEmptyResponse() {}


  using WithouParameterAndEmptyResponseCallback = base::OnceCallback<void()>;
  
  virtual void WithouParameterAndEmptyResponse(WithouParameterAndEmptyResponseCallback callback) = 0;


  using WithParameterAndEmptyResponseCallback = base::OnceCallback<void()>;
  
  virtual void WithParameterAndEmptyResponse(bool b, WithParameterAndEmptyResponseCallback callback) = 0;
};

class CheckNameCollisionProxy;

template <typename ImplRefTraits>
class CheckNameCollisionStub;

class CheckNameCollisionRequestValidator;
class CheckNameCollisionResponseValidator;


class  CheckNameCollision
    : public CheckNameCollisionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CheckNameCollisionInterfaceBase;
  using Proxy_ = CheckNameCollisionProxy;

  template <typename ImplRefTraits>
  using Stub_ = CheckNameCollisionStub<ImplRefTraits>;

  using RequestValidator_ = CheckNameCollisionRequestValidator;
  using ResponseValidator_ = CheckNameCollisionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kWithNameCollisionMinVersion = 0,
  };
  virtual ~CheckNameCollision() {}


  using WithNameCollisionCallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void WithNameCollision(bool message, bool response, WithNameCollisionCallback callback) = 0;
};

class HandlesNameCollisionInterfaceProxy;

template <typename ImplRefTraits>
class HandlesNameCollisionInterfaceStub;

class HandlesNameCollisionInterfaceRequestValidator;
class HandlesNameCollisionInterfaceResponseValidator;


class  HandlesNameCollisionInterface
    : public HandlesNameCollisionInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = HandlesNameCollisionInterfaceInterfaceBase;
  using Proxy_ = HandlesNameCollisionInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = HandlesNameCollisionInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = HandlesNameCollisionInterfaceRequestValidator;
  using ResponseValidator_ = HandlesNameCollisionInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMethodMinVersion = 0,
  };
  virtual ~HandlesNameCollisionInterface() {}


  using MethodCallback = base::OnceCallback<void(mojo::ScopedHandle)>;
  
  virtual void Method(EmptyStructPtr handles, MethodCallback callback) = 0;
};

class  CheckMethodWithEmptyResponseProxy
    : public CheckMethodWithEmptyResponse {
 public:
  using InterfaceType = CheckMethodWithEmptyResponse;

  explicit CheckMethodWithEmptyResponseProxy(mojo::MessageReceiverWithResponder* receiver);
  void WithouParameterAndEmptyResponse(WithouParameterAndEmptyResponseCallback callback) final;
  void WithParameterAndEmptyResponse(bool b, WithParameterAndEmptyResponseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CheckNameCollisionProxy
    : public CheckNameCollision {
 public:
  using InterfaceType = CheckNameCollision;

  explicit CheckNameCollisionProxy(mojo::MessageReceiverWithResponder* receiver);
  void WithNameCollision(bool message, bool response, WithNameCollisionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  HandlesNameCollisionInterfaceProxy
    : public HandlesNameCollisionInterface {
 public:
  using InterfaceType = HandlesNameCollisionInterface;

  explicit HandlesNameCollisionInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Method(EmptyStructPtr handles, MethodCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CheckMethodWithEmptyResponseStubDispatch {
 public:
  static bool Accept(CheckMethodWithEmptyResponse* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CheckMethodWithEmptyResponse* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CheckMethodWithEmptyResponse>>
class CheckMethodWithEmptyResponseStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CheckMethodWithEmptyResponseStub() {}
  ~CheckMethodWithEmptyResponseStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CheckMethodWithEmptyResponseStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CheckMethodWithEmptyResponseStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CheckNameCollisionStubDispatch {
 public:
  static bool Accept(CheckNameCollision* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CheckNameCollision* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CheckNameCollision>>
class CheckNameCollisionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CheckNameCollisionStub() {}
  ~CheckNameCollisionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CheckNameCollisionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CheckNameCollisionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  HandlesNameCollisionInterfaceStubDispatch {
 public:
  static bool Accept(HandlesNameCollisionInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      HandlesNameCollisionInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<HandlesNameCollisionInterface>>
class HandlesNameCollisionInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  HandlesNameCollisionInterfaceStub() {}
  ~HandlesNameCollisionInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HandlesNameCollisionInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return HandlesNameCollisionInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CheckMethodWithEmptyResponseRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CheckNameCollisionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HandlesNameCollisionInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CheckMethodWithEmptyResponseResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CheckNameCollisionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  HandlesNameCollisionInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};







class  EmptyStruct {
 public:
  using DataView = EmptyStructDataView;
  using Data_ = internal::EmptyStruct_Data;

  template <typename... Args>
  static EmptyStructPtr New(Args&&... args) {
    return EmptyStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EmptyStructPtr From(const U& u) {
    return mojo::TypeConverter<EmptyStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EmptyStruct>::Convert(*this);
  }


  EmptyStruct();

  ~EmptyStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EmptyStructPtr>
  EmptyStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EmptyStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        EmptyStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        EmptyStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::EmptyStruct_UnserializedMessageContext<
            UserType, EmptyStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<EmptyStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return EmptyStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::EmptyStruct_UnserializedMessageContext<
            UserType, EmptyStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<EmptyStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class  HandlesNameCollisionUnion {
 public:
  using DataView = HandlesNameCollisionUnionDataView;
  using Data_ = internal::HandlesNameCollisionUnion_Data;
  using Tag = Data_::HandlesNameCollisionUnion_Tag;

  static HandlesNameCollisionUnionPtr New() {
    return HandlesNameCollisionUnionPtr(base::in_place);
  }
  // Construct an instance holding |handles|.
  static HandlesNameCollisionUnionPtr
  NewHandles(
      int32_t handles) {
    auto result = HandlesNameCollisionUnionPtr(base::in_place);
    result->set_handles(std::move(handles));
    return result;
  }

  template <typename U>
  static HandlesNameCollisionUnionPtr From(const U& u) {
    return mojo::TypeConverter<HandlesNameCollisionUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HandlesNameCollisionUnion>::Convert(*this);
  }

  HandlesNameCollisionUnion();
  ~HandlesNameCollisionUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = HandlesNameCollisionUnionPtr>
  HandlesNameCollisionUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HandlesNameCollisionUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_handles() const { return tag_ == Tag::HANDLES; }

  
  int32_t get_handles() const {
    DCHECK(tag_ == Tag::HANDLES);
    return data_.handles;
  }

  
  void set_handles(
      int32_t handles);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HandlesNameCollisionUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<HandlesNameCollisionUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    int32_t handles;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class  Edge {
 public:
  using DataView = EdgeDataView;
  using Data_ = internal::Edge_Data;

  template <typename... Args>
  static EdgePtr New(Args&&... args) {
    return EdgePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static EdgePtr From(const U& u) {
    return mojo::TypeConverter<EdgePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Edge>::Convert(*this);
  }


  Edge();

  explicit Edge(
      VertexPtr v);

  ~Edge();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EdgePtr>
  EdgePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Edge>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Edge::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Edge::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Edge_UnserializedMessageContext<
            UserType, Edge::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Edge::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Edge::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Edge_UnserializedMessageContext<
            UserType, Edge::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Edge::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VertexPtr v;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Edge);
};





class  Vertex {
 public:
  using DataView = VertexDataView;
  using Data_ = internal::Vertex_Data;

  template <typename... Args>
  static VertexPtr New(Args&&... args) {
    return VertexPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VertexPtr From(const U& u) {
    return mojo::TypeConverter<VertexPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Vertex>::Convert(*this);
  }


  Vertex();

  explicit Vertex(
      EmptyStructPtr e);

  ~Vertex();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VertexPtr>
  VertexPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Vertex>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Vertex::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Vertex::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Vertex_UnserializedMessageContext<
            UserType, Vertex::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Vertex::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Vertex::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Vertex_UnserializedMessageContext<
            UserType, Vertex::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Vertex::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  EmptyStructPtr e;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Vertex);
};






class  A {
 public:
  using DataView = ADataView;
  using Data_ = internal::A_Data;

  template <typename... Args>
  static APtr New(Args&&... args) {
    return APtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static APtr From(const U& u) {
    return mojo::TypeConverter<APtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, A>::Convert(*this);
  }


  A();

  explicit A(
      BPtr b);

  ~A();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = APtr>
  APtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, A>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        A::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        A::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::A_UnserializedMessageContext<
            UserType, A::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<A::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return A::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::A_UnserializedMessageContext<
            UserType, A::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<A::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  BPtr b;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(A);
};





class  B {
 public:
  using DataView = BDataView;
  using Data_ = internal::B_Data;

  template <typename... Args>
  static BPtr New(Args&&... args) {
    return BPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BPtr From(const U& u) {
    return mojo::TypeConverter<BPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, B>::Convert(*this);
  }


  B();

  explicit B(
      APtr a);

  ~B();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BPtr>
  BPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, B>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        B::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        B::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::B_UnserializedMessageContext<
            UserType, B::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<B::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return B::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::B_UnserializedMessageContext<
            UserType, B::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<B::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  APtr a;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(B);
};





class  HandlesNameCollisionStruct {
 public:
  using DataView = HandlesNameCollisionStructDataView;
  using Data_ = internal::HandlesNameCollisionStruct_Data;

  template <typename... Args>
  static HandlesNameCollisionStructPtr New(Args&&... args) {
    return HandlesNameCollisionStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HandlesNameCollisionStructPtr From(const U& u) {
    return mojo::TypeConverter<HandlesNameCollisionStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HandlesNameCollisionStruct>::Convert(*this);
  }


  HandlesNameCollisionStruct();

  explicit HandlesNameCollisionStruct(
      EmptyStructPtr handles);

  ~HandlesNameCollisionStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HandlesNameCollisionStructPtr>
  HandlesNameCollisionStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HandlesNameCollisionStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HandlesNameCollisionStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HandlesNameCollisionStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HandlesNameCollisionStruct_UnserializedMessageContext<
            UserType, HandlesNameCollisionStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HandlesNameCollisionStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HandlesNameCollisionStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HandlesNameCollisionStruct_UnserializedMessageContext<
            UserType, HandlesNameCollisionStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HandlesNameCollisionStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  EmptyStructPtr handles;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HandlesNameCollisionStruct);
};





class  HandlesHandleNameCollisionStruct {
 public:
  using DataView = HandlesHandleNameCollisionStructDataView;
  using Data_ = internal::HandlesHandleNameCollisionStruct_Data;

  template <typename... Args>
  static HandlesHandleNameCollisionStructPtr New(Args&&... args) {
    return HandlesHandleNameCollisionStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HandlesHandleNameCollisionStructPtr From(const U& u) {
    return mojo::TypeConverter<HandlesHandleNameCollisionStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HandlesHandleNameCollisionStruct>::Convert(*this);
  }


  HandlesHandleNameCollisionStruct();

  explicit HandlesHandleNameCollisionStruct(
      mojo::ScopedHandle handles);

  ~HandlesHandleNameCollisionStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HandlesHandleNameCollisionStructPtr>
  HandlesHandleNameCollisionStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HandlesHandleNameCollisionStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HandlesHandleNameCollisionStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HandlesHandleNameCollisionStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HandlesHandleNameCollisionStruct_UnserializedMessageContext<
            UserType, HandlesHandleNameCollisionStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HandlesHandleNameCollisionStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HandlesHandleNameCollisionStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HandlesHandleNameCollisionStruct_UnserializedMessageContext<
            UserType, HandlesHandleNameCollisionStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HandlesHandleNameCollisionStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedHandle handles;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HandlesHandleNameCollisionStruct);
};





class  HandlesUnionNameCollisionStruct {
 public:
  using DataView = HandlesUnionNameCollisionStructDataView;
  using Data_ = internal::HandlesUnionNameCollisionStruct_Data;

  template <typename... Args>
  static HandlesUnionNameCollisionStructPtr New(Args&&... args) {
    return HandlesUnionNameCollisionStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HandlesUnionNameCollisionStructPtr From(const U& u) {
    return mojo::TypeConverter<HandlesUnionNameCollisionStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HandlesUnionNameCollisionStruct>::Convert(*this);
  }


  HandlesUnionNameCollisionStruct();

  explicit HandlesUnionNameCollisionStruct(
      HandlesNameCollisionUnionPtr handles);

  ~HandlesUnionNameCollisionStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HandlesUnionNameCollisionStructPtr>
  HandlesUnionNameCollisionStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HandlesUnionNameCollisionStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HandlesUnionNameCollisionStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HandlesUnionNameCollisionStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HandlesUnionNameCollisionStruct_UnserializedMessageContext<
            UserType, HandlesUnionNameCollisionStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HandlesUnionNameCollisionStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HandlesUnionNameCollisionStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HandlesUnionNameCollisionStruct_UnserializedMessageContext<
            UserType, HandlesUnionNameCollisionStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HandlesUnionNameCollisionStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  HandlesNameCollisionUnionPtr handles;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HandlesUnionNameCollisionStruct);
};

template <typename UnionPtrType>
HandlesNameCollisionUnionPtr HandlesNameCollisionUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::HANDLES:
      rv->set_handles(mojo::Clone(data_.handles));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HandlesNameCollisionUnion>::value>::type*>
bool HandlesNameCollisionUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::HANDLES:
      return mojo::Equals(data_.handles, other.data_.handles);
  }

  return false;
}
template <typename StructPtrType>
EdgePtr Edge::Clone() const {
  return New(
      mojo::Clone(v)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Edge>::value>::type*>
bool Edge::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->v, other_struct.v))
    return false;
  return true;
}
template <typename StructPtrType>
VertexPtr Vertex::Clone() const {
  return New(
      mojo::Clone(e)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Vertex>::value>::type*>
bool Vertex::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->e, other_struct.e))
    return false;
  return true;
}
template <typename StructPtrType>
EmptyStructPtr EmptyStruct::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EmptyStruct>::value>::type*>
bool EmptyStruct::Equals(const T& other_struct) const {
  return true;
}
template <typename StructPtrType>
APtr A::Clone() const {
  return New(
      mojo::Clone(b)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, A>::value>::type*>
bool A::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->b, other_struct.b))
    return false;
  return true;
}
template <typename StructPtrType>
BPtr B::Clone() const {
  return New(
      mojo::Clone(a)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, B>::value>::type*>
bool B::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->a, other_struct.a))
    return false;
  return true;
}
template <typename StructPtrType>
HandlesNameCollisionStructPtr HandlesNameCollisionStruct::Clone() const {
  return New(
      mojo::Clone(handles)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HandlesNameCollisionStruct>::value>::type*>
bool HandlesNameCollisionStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->handles, other_struct.handles))
    return false;
  return true;
}
template <typename StructPtrType>
HandlesHandleNameCollisionStructPtr HandlesHandleNameCollisionStruct::Clone() const {
  return New(
      mojo::Clone(handles)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HandlesHandleNameCollisionStruct>::value>::type*>
bool HandlesHandleNameCollisionStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->handles, other_struct.handles))
    return false;
  return true;
}
template <typename StructPtrType>
HandlesUnionNameCollisionStructPtr HandlesUnionNameCollisionStruct::Clone() const {
  return New(
      mojo::Clone(handles)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HandlesUnionNameCollisionStruct>::value>::type*>
bool HandlesUnionNameCollisionStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->handles, other_struct.handles))
    return false;
  return true;
}


}  // namespace regression_tests

namespace mojo {


template <>
struct  StructTraits<::regression_tests::Edge::DataView,
                                         ::regression_tests::EdgePtr> {
  static bool IsNull(const ::regression_tests::EdgePtr& input) { return !input; }
  static void SetToNull(::regression_tests::EdgePtr* output) { output->reset(); }

  static const decltype(::regression_tests::Edge::v)& v(
      const ::regression_tests::EdgePtr& input) {
    return input->v;
  }

  static bool Read(::regression_tests::Edge::DataView input, ::regression_tests::EdgePtr* output);
};


template <>
struct  StructTraits<::regression_tests::Vertex::DataView,
                                         ::regression_tests::VertexPtr> {
  static bool IsNull(const ::regression_tests::VertexPtr& input) { return !input; }
  static void SetToNull(::regression_tests::VertexPtr* output) { output->reset(); }

  static const decltype(::regression_tests::Vertex::e)& e(
      const ::regression_tests::VertexPtr& input) {
    return input->e;
  }

  static bool Read(::regression_tests::Vertex::DataView input, ::regression_tests::VertexPtr* output);
};


template <>
struct  StructTraits<::regression_tests::EmptyStruct::DataView,
                                         ::regression_tests::EmptyStructPtr> {
  static bool IsNull(const ::regression_tests::EmptyStructPtr& input) { return !input; }
  static void SetToNull(::regression_tests::EmptyStructPtr* output) { output->reset(); }

  static bool Read(::regression_tests::EmptyStruct::DataView input, ::regression_tests::EmptyStructPtr* output);
};


template <>
struct  StructTraits<::regression_tests::A::DataView,
                                         ::regression_tests::APtr> {
  static bool IsNull(const ::regression_tests::APtr& input) { return !input; }
  static void SetToNull(::regression_tests::APtr* output) { output->reset(); }

  static const decltype(::regression_tests::A::b)& b(
      const ::regression_tests::APtr& input) {
    return input->b;
  }

  static bool Read(::regression_tests::A::DataView input, ::regression_tests::APtr* output);
};


template <>
struct  StructTraits<::regression_tests::B::DataView,
                                         ::regression_tests::BPtr> {
  static bool IsNull(const ::regression_tests::BPtr& input) { return !input; }
  static void SetToNull(::regression_tests::BPtr* output) { output->reset(); }

  static const decltype(::regression_tests::B::a)& a(
      const ::regression_tests::BPtr& input) {
    return input->a;
  }

  static bool Read(::regression_tests::B::DataView input, ::regression_tests::BPtr* output);
};


template <>
struct  StructTraits<::regression_tests::HandlesNameCollisionStruct::DataView,
                                         ::regression_tests::HandlesNameCollisionStructPtr> {
  static bool IsNull(const ::regression_tests::HandlesNameCollisionStructPtr& input) { return !input; }
  static void SetToNull(::regression_tests::HandlesNameCollisionStructPtr* output) { output->reset(); }

  static const decltype(::regression_tests::HandlesNameCollisionStruct::handles)& handles(
      const ::regression_tests::HandlesNameCollisionStructPtr& input) {
    return input->handles;
  }

  static bool Read(::regression_tests::HandlesNameCollisionStruct::DataView input, ::regression_tests::HandlesNameCollisionStructPtr* output);
};


template <>
struct  StructTraits<::regression_tests::HandlesHandleNameCollisionStruct::DataView,
                                         ::regression_tests::HandlesHandleNameCollisionStructPtr> {
  static bool IsNull(const ::regression_tests::HandlesHandleNameCollisionStructPtr& input) { return !input; }
  static void SetToNull(::regression_tests::HandlesHandleNameCollisionStructPtr* output) { output->reset(); }

  static  decltype(::regression_tests::HandlesHandleNameCollisionStruct::handles)& handles(
       ::regression_tests::HandlesHandleNameCollisionStructPtr& input) {
    return input->handles;
  }

  static bool Read(::regression_tests::HandlesHandleNameCollisionStruct::DataView input, ::regression_tests::HandlesHandleNameCollisionStructPtr* output);
};


template <>
struct  StructTraits<::regression_tests::HandlesUnionNameCollisionStruct::DataView,
                                         ::regression_tests::HandlesUnionNameCollisionStructPtr> {
  static bool IsNull(const ::regression_tests::HandlesUnionNameCollisionStructPtr& input) { return !input; }
  static void SetToNull(::regression_tests::HandlesUnionNameCollisionStructPtr* output) { output->reset(); }

  static const decltype(::regression_tests::HandlesUnionNameCollisionStruct::handles)& handles(
      const ::regression_tests::HandlesUnionNameCollisionStructPtr& input) {
    return input->handles;
  }

  static bool Read(::regression_tests::HandlesUnionNameCollisionStruct::DataView input, ::regression_tests::HandlesUnionNameCollisionStructPtr* output);
};


template <>
struct  UnionTraits<::regression_tests::HandlesNameCollisionUnion::DataView,
                                        ::regression_tests::HandlesNameCollisionUnionPtr> {
  static bool IsNull(const ::regression_tests::HandlesNameCollisionUnionPtr& input) { return !input; }
  static void SetToNull(::regression_tests::HandlesNameCollisionUnionPtr* output) { output->reset(); }

  static ::regression_tests::HandlesNameCollisionUnion::Tag GetTag(const ::regression_tests::HandlesNameCollisionUnionPtr& input) {
    return input->which();
  }

  static  int32_t handles(const ::regression_tests::HandlesNameCollisionUnionPtr& input) {
    return input->get_handles();
  }

  static bool Read(::regression_tests::HandlesNameCollisionUnion::DataView input, ::regression_tests::HandlesNameCollisionUnionPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_REGRESSION_TESTS_MOJOM_H_