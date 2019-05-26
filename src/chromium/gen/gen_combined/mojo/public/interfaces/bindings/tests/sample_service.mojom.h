// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/sample_service.mojom-forward.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom.h"
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

class ServiceProxy;

template <typename ImplRefTraits>
class ServiceStub;

class ServiceRequestValidator;
class ServiceResponseValidator;


class  Service
    : public ServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceInterfaceBase;
  using Proxy_ = ServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceStub<ImplRefTraits>;

  using RequestValidator_ = ServiceRequestValidator;
  using ResponseValidator_ = ServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFrobinateMinVersion = 0,
    kGetPortMinVersion = 0,
  };
  
  using BazOptions = Service_BazOptions;
  
  static constexpr uint8_t kFavoriteBaz = 1U;
  virtual ~Service() {}


  using FrobinateCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Frobinate(FooPtr foo, Service::BazOptions baz, mojo::PendingRemote<Port> port, FrobinateCallback callback) = 0;

  
  virtual void GetPort(mojo::PendingReceiver<Port> receiver) = 0;
};

class PortProxy;

template <typename ImplRefTraits>
class PortStub;

class PortRequestValidator;


class  Port
    : public PortInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PortInterfaceBase;
  using Proxy_ = PortProxy;

  template <typename ImplRefTraits>
  using Stub_ = PortStub<ImplRefTraits>;

  using RequestValidator_ = PortRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPostMessageToPortMinVersion = 0,
  };
  virtual ~Port() {}

  
  virtual void PostMessageToPort(const std::string& message_text, mojo::PendingRemote<Port> port) = 0;
};

class  ServiceProxy
    : public Service {
 public:
  using InterfaceType = Service;

  explicit ServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Frobinate(FooPtr foo, Service::BazOptions baz, mojo::PendingRemote<Port> port, FrobinateCallback callback) final;
  void GetPort(mojo::PendingReceiver<Port> receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  PortProxy
    : public Port {
 public:
  using InterfaceType = Port;

  explicit PortProxy(mojo::MessageReceiverWithResponder* receiver);
  void PostMessageToPort(const std::string& message_text, mojo::PendingRemote<Port> port) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ServiceStubDispatch {
 public:
  static bool Accept(Service* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Service* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Service>>
class ServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceStub() {}
  ~ServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PortStubDispatch {
 public:
  static bool Accept(Port* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Port* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Port>>
class PortStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PortStub() {}
  ~PortStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PortStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PortRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  Bar {
 public:
  using DataView = BarDataView;
  using Data_ = internal::Bar_Data;
  using Type = Bar_Type;

  template <typename... Args>
  static BarPtr New(Args&&... args) {
    return BarPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BarPtr From(const U& u) {
    return mojo::TypeConverter<BarPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Bar>::Convert(*this);
  }


  Bar();

  Bar(
      uint8_t alpha,
      uint8_t beta,
      uint8_t gamma,
      Bar::Type type);

  ~Bar();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BarPtr>
  BarPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Bar>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Bar::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Bar::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Bar_UnserializedMessageContext<
            UserType, Bar::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Bar::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Bar::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Bar_UnserializedMessageContext<
            UserType, Bar::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Bar::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t alpha;
  
  uint8_t beta;
  
  uint8_t gamma;
  
  Bar::Type type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class  StructWithHoleV1 {
 public:
  using DataView = StructWithHoleV1DataView;
  using Data_ = internal::StructWithHoleV1_Data;

  template <typename... Args>
  static StructWithHoleV1Ptr New(Args&&... args) {
    return StructWithHoleV1Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructWithHoleV1Ptr From(const U& u) {
    return mojo::TypeConverter<StructWithHoleV1Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithHoleV1>::Convert(*this);
  }


  StructWithHoleV1();

  StructWithHoleV1(
      int32_t v1,
      int64_t v2);

  ~StructWithHoleV1();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructWithHoleV1Ptr>
  StructWithHoleV1Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructWithHoleV1>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructWithHoleV1::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructWithHoleV1::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructWithHoleV1_UnserializedMessageContext<
            UserType, StructWithHoleV1::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructWithHoleV1::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructWithHoleV1::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructWithHoleV1_UnserializedMessageContext<
            UserType, StructWithHoleV1::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructWithHoleV1::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t v1;
  
  int64_t v2;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  StructWithHoleV2 {
 public:
  using DataView = StructWithHoleV2DataView;
  using Data_ = internal::StructWithHoleV2_Data;

  template <typename... Args>
  static StructWithHoleV2Ptr New(Args&&... args) {
    return StructWithHoleV2Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructWithHoleV2Ptr From(const U& u) {
    return mojo::TypeConverter<StructWithHoleV2Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithHoleV2>::Convert(*this);
  }


  StructWithHoleV2();

  StructWithHoleV2(
      int32_t v1,
      int64_t v2,
      int32_t v3);

  ~StructWithHoleV2();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructWithHoleV2Ptr>
  StructWithHoleV2Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructWithHoleV2>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructWithHoleV2::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructWithHoleV2::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructWithHoleV2_UnserializedMessageContext<
            UserType, StructWithHoleV2::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructWithHoleV2::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StructWithHoleV2::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructWithHoleV2_UnserializedMessageContext<
            UserType, StructWithHoleV2::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructWithHoleV2::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t v1;
  
  int64_t v2;
  
  int32_t v3;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  Foo {
 public:
  using DataView = FooDataView;
  using Data_ = internal::Foo_Data;
  
  static const char kFooby[];

  template <typename... Args>
  static FooPtr New(Args&&... args) {
    return FooPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FooPtr From(const U& u) {
    return mojo::TypeConverter<FooPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Foo>::Convert(*this);
  }


  Foo();

  Foo(
      const std::string& name,
      int32_t x,
      int32_t y,
      bool a,
      bool b,
      bool c,
      BarPtr bar,
      base::Optional<std::vector<BarPtr>> extra_bars,
      const base::Optional<std::vector<uint8_t>>& data,
      mojo::ScopedMessagePipeHandle source,
      base::Optional<std::vector<mojo::ScopedDataPipeConsumerHandle>> input_streams,
      base::Optional<std::vector<mojo::ScopedDataPipeProducerHandle>> output_streams,
      const base::Optional<std::vector<std::vector<bool>>>& array_of_array_of_bools,
      const base::Optional<std::vector<std::vector<std::vector<std::string>>>>& multi_array_of_strings,
      const base::Optional<std::vector<bool>>& array_of_bools);

  ~Foo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FooPtr>
  FooPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Foo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Foo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Foo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Foo_UnserializedMessageContext<
            UserType, Foo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Foo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Foo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Foo_UnserializedMessageContext<
            UserType, Foo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Foo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  int32_t x;
  
  int32_t y;
  
  bool a;
  
  bool b;
  
  bool c;
  
  BarPtr bar;
  
  base::Optional<std::vector<BarPtr>> extra_bars;
  
  base::Optional<std::vector<uint8_t>> data;
  
  mojo::ScopedMessagePipeHandle source;
  
  base::Optional<std::vector<mojo::ScopedDataPipeConsumerHandle>> input_streams;
  
  base::Optional<std::vector<mojo::ScopedDataPipeProducerHandle>> output_streams;
  
  base::Optional<std::vector<std::vector<bool>>> array_of_array_of_bools;
  
  base::Optional<std::vector<std::vector<std::vector<std::string>>>> multi_array_of_strings;
  
  base::Optional<std::vector<bool>> array_of_bools;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Foo);
};





class  DefaultsTest {
 public:
  using DataView = DefaultsTestDataView;
  using Data_ = internal::DefaultsTest_Data;

  template <typename... Args>
  static DefaultsTestPtr New(Args&&... args) {
    return DefaultsTestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DefaultsTestPtr From(const U& u) {
    return mojo::TypeConverter<DefaultsTestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DefaultsTest>::Convert(*this);
  }


  DefaultsTest();

  DefaultsTest(
      int8_t a0,
      uint8_t a1,
      int16_t a2,
      uint16_t a3,
      int32_t a4,
      uint32_t a5,
      int64_t a6,
      uint64_t a7,
      int32_t a8,
      int32_t a9,
      int32_t a10,
      bool a11,
      bool a12,
      float a13,
      double a14,
      double a15,
      double a16,
      double a17,
      const std::vector<uint8_t>& a18,
      const std::string& a19,
      Bar::Type a20,
      ::imported::PointPtr a21,
      ::imported::ThingPtr a22,
      uint64_t a23,
      int64_t a24,
      int64_t a25,
      double a26,
      double a27,
      double a28,
      float a29,
      float a30,
      float a31);

  ~DefaultsTest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DefaultsTestPtr>
  DefaultsTestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DefaultsTest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DefaultsTest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DefaultsTest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DefaultsTest_UnserializedMessageContext<
            UserType, DefaultsTest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DefaultsTest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DefaultsTest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DefaultsTest_UnserializedMessageContext<
            UserType, DefaultsTest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DefaultsTest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int8_t a0;
  
  uint8_t a1;
  
  int16_t a2;
  
  uint16_t a3;
  
  int32_t a4;
  
  uint32_t a5;
  
  int64_t a6;
  
  uint64_t a7;
  
  int32_t a8;
  
  int32_t a9;
  
  int32_t a10;
  
  bool a11;
  
  bool a12;
  
  float a13;
  
  double a14;
  
  double a15;
  
  double a16;
  
  double a17;
  
  std::vector<uint8_t> a18;
  
  std::string a19;
  
  Bar::Type a20;
  
  ::imported::PointPtr a21;
  
  ::imported::ThingPtr a22;
  
  uint64_t a23;
  
  int64_t a24;
  
  int64_t a25;
  
  double a26;
  
  double a27;
  
  double a28;
  
  float a29;
  
  float a30;
  
  float a31;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DefaultsTest);
};



template <typename StructPtrType>
BarPtr Bar::Clone() const {
  return New(
      mojo::Clone(alpha),
      mojo::Clone(beta),
      mojo::Clone(gamma),
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Bar>::value>::type*>
bool Bar::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->alpha, other_struct.alpha))
    return false;
  if (!mojo::Equals(this->beta, other_struct.beta))
    return false;
  if (!mojo::Equals(this->gamma, other_struct.gamma))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
FooPtr Foo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(x),
      mojo::Clone(y),
      mojo::Clone(a),
      mojo::Clone(b),
      mojo::Clone(c),
      mojo::Clone(bar),
      mojo::Clone(extra_bars),
      mojo::Clone(data),
      mojo::Clone(source),
      mojo::Clone(input_streams),
      mojo::Clone(output_streams),
      mojo::Clone(array_of_array_of_bools),
      mojo::Clone(multi_array_of_strings),
      mojo::Clone(array_of_bools)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Foo>::value>::type*>
bool Foo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->x, other_struct.x))
    return false;
  if (!mojo::Equals(this->y, other_struct.y))
    return false;
  if (!mojo::Equals(this->a, other_struct.a))
    return false;
  if (!mojo::Equals(this->b, other_struct.b))
    return false;
  if (!mojo::Equals(this->c, other_struct.c))
    return false;
  if (!mojo::Equals(this->bar, other_struct.bar))
    return false;
  if (!mojo::Equals(this->extra_bars, other_struct.extra_bars))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->source, other_struct.source))
    return false;
  if (!mojo::Equals(this->input_streams, other_struct.input_streams))
    return false;
  if (!mojo::Equals(this->output_streams, other_struct.output_streams))
    return false;
  if (!mojo::Equals(this->array_of_array_of_bools, other_struct.array_of_array_of_bools))
    return false;
  if (!mojo::Equals(this->multi_array_of_strings, other_struct.multi_array_of_strings))
    return false;
  if (!mojo::Equals(this->array_of_bools, other_struct.array_of_bools))
    return false;
  return true;
}
template <typename StructPtrType>
DefaultsTestPtr DefaultsTest::Clone() const {
  return New(
      mojo::Clone(a0),
      mojo::Clone(a1),
      mojo::Clone(a2),
      mojo::Clone(a3),
      mojo::Clone(a4),
      mojo::Clone(a5),
      mojo::Clone(a6),
      mojo::Clone(a7),
      mojo::Clone(a8),
      mojo::Clone(a9),
      mojo::Clone(a10),
      mojo::Clone(a11),
      mojo::Clone(a12),
      mojo::Clone(a13),
      mojo::Clone(a14),
      mojo::Clone(a15),
      mojo::Clone(a16),
      mojo::Clone(a17),
      mojo::Clone(a18),
      mojo::Clone(a19),
      mojo::Clone(a20),
      mojo::Clone(a21),
      mojo::Clone(a22),
      mojo::Clone(a23),
      mojo::Clone(a24),
      mojo::Clone(a25),
      mojo::Clone(a26),
      mojo::Clone(a27),
      mojo::Clone(a28),
      mojo::Clone(a29),
      mojo::Clone(a30),
      mojo::Clone(a31)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DefaultsTest>::value>::type*>
bool DefaultsTest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->a0, other_struct.a0))
    return false;
  if (!mojo::Equals(this->a1, other_struct.a1))
    return false;
  if (!mojo::Equals(this->a2, other_struct.a2))
    return false;
  if (!mojo::Equals(this->a3, other_struct.a3))
    return false;
  if (!mojo::Equals(this->a4, other_struct.a4))
    return false;
  if (!mojo::Equals(this->a5, other_struct.a5))
    return false;
  if (!mojo::Equals(this->a6, other_struct.a6))
    return false;
  if (!mojo::Equals(this->a7, other_struct.a7))
    return false;
  if (!mojo::Equals(this->a8, other_struct.a8))
    return false;
  if (!mojo::Equals(this->a9, other_struct.a9))
    return false;
  if (!mojo::Equals(this->a10, other_struct.a10))
    return false;
  if (!mojo::Equals(this->a11, other_struct.a11))
    return false;
  if (!mojo::Equals(this->a12, other_struct.a12))
    return false;
  if (!mojo::Equals(this->a13, other_struct.a13))
    return false;
  if (!mojo::Equals(this->a14, other_struct.a14))
    return false;
  if (!mojo::Equals(this->a15, other_struct.a15))
    return false;
  if (!mojo::Equals(this->a16, other_struct.a16))
    return false;
  if (!mojo::Equals(this->a17, other_struct.a17))
    return false;
  if (!mojo::Equals(this->a18, other_struct.a18))
    return false;
  if (!mojo::Equals(this->a19, other_struct.a19))
    return false;
  if (!mojo::Equals(this->a20, other_struct.a20))
    return false;
  if (!mojo::Equals(this->a21, other_struct.a21))
    return false;
  if (!mojo::Equals(this->a22, other_struct.a22))
    return false;
  if (!mojo::Equals(this->a23, other_struct.a23))
    return false;
  if (!mojo::Equals(this->a24, other_struct.a24))
    return false;
  if (!mojo::Equals(this->a25, other_struct.a25))
    return false;
  if (!mojo::Equals(this->a26, other_struct.a26))
    return false;
  if (!mojo::Equals(this->a27, other_struct.a27))
    return false;
  if (!mojo::Equals(this->a28, other_struct.a28))
    return false;
  if (!mojo::Equals(this->a29, other_struct.a29))
    return false;
  if (!mojo::Equals(this->a30, other_struct.a30))
    return false;
  if (!mojo::Equals(this->a31, other_struct.a31))
    return false;
  return true;
}
template <typename StructPtrType>
StructWithHoleV1Ptr StructWithHoleV1::Clone() const {
  return New(
      mojo::Clone(v1),
      mojo::Clone(v2)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructWithHoleV1>::value>::type*>
bool StructWithHoleV1::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->v1, other_struct.v1))
    return false;
  if (!mojo::Equals(this->v2, other_struct.v2))
    return false;
  return true;
}
template <typename StructPtrType>
StructWithHoleV2Ptr StructWithHoleV2::Clone() const {
  return New(
      mojo::Clone(v1),
      mojo::Clone(v2),
      mojo::Clone(v3)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructWithHoleV2>::value>::type*>
bool StructWithHoleV2::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->v1, other_struct.v1))
    return false;
  if (!mojo::Equals(this->v2, other_struct.v2))
    return false;
  if (!mojo::Equals(this->v3, other_struct.v3))
    return false;
  return true;
}


}  // namespace sample

namespace mojo {


template <>
struct  StructTraits<::sample::Bar::DataView,
                                         ::sample::BarPtr> {
  static bool IsNull(const ::sample::BarPtr& input) { return !input; }
  static void SetToNull(::sample::BarPtr* output) { output->reset(); }

  static decltype(::sample::Bar::alpha) alpha(
      const ::sample::BarPtr& input) {
    return input->alpha;
  }

  static decltype(::sample::Bar::beta) beta(
      const ::sample::BarPtr& input) {
    return input->beta;
  }

  static decltype(::sample::Bar::gamma) gamma(
      const ::sample::BarPtr& input) {
    return input->gamma;
  }

  static decltype(::sample::Bar::type) type(
      const ::sample::BarPtr& input) {
    return input->type;
  }

  static bool Read(::sample::Bar::DataView input, ::sample::BarPtr* output);
};


template <>
struct  StructTraits<::sample::Foo::DataView,
                                         ::sample::FooPtr> {
  static bool IsNull(const ::sample::FooPtr& input) { return !input; }
  static void SetToNull(::sample::FooPtr* output) { output->reset(); }

  static const decltype(::sample::Foo::name)& name(
      const ::sample::FooPtr& input) {
    return input->name;
  }

  static decltype(::sample::Foo::x) x(
      const ::sample::FooPtr& input) {
    return input->x;
  }

  static decltype(::sample::Foo::y) y(
      const ::sample::FooPtr& input) {
    return input->y;
  }

  static decltype(::sample::Foo::a) a(
      const ::sample::FooPtr& input) {
    return input->a;
  }

  static decltype(::sample::Foo::b) b(
      const ::sample::FooPtr& input) {
    return input->b;
  }

  static decltype(::sample::Foo::c) c(
      const ::sample::FooPtr& input) {
    return input->c;
  }

  static const decltype(::sample::Foo::bar)& bar(
      const ::sample::FooPtr& input) {
    return input->bar;
  }

  static const decltype(::sample::Foo::extra_bars)& extra_bars(
      const ::sample::FooPtr& input) {
    return input->extra_bars;
  }

  static const decltype(::sample::Foo::data)& data(
      const ::sample::FooPtr& input) {
    return input->data;
  }

  static  decltype(::sample::Foo::source)& source(
       ::sample::FooPtr& input) {
    return input->source;
  }

  static  decltype(::sample::Foo::input_streams)& input_streams(
       ::sample::FooPtr& input) {
    return input->input_streams;
  }

  static  decltype(::sample::Foo::output_streams)& output_streams(
       ::sample::FooPtr& input) {
    return input->output_streams;
  }

  static const decltype(::sample::Foo::array_of_array_of_bools)& array_of_array_of_bools(
      const ::sample::FooPtr& input) {
    return input->array_of_array_of_bools;
  }

  static const decltype(::sample::Foo::multi_array_of_strings)& multi_array_of_strings(
      const ::sample::FooPtr& input) {
    return input->multi_array_of_strings;
  }

  static const decltype(::sample::Foo::array_of_bools)& array_of_bools(
      const ::sample::FooPtr& input) {
    return input->array_of_bools;
  }

  static bool Read(::sample::Foo::DataView input, ::sample::FooPtr* output);
};


template <>
struct  StructTraits<::sample::DefaultsTest::DataView,
                                         ::sample::DefaultsTestPtr> {
  static bool IsNull(const ::sample::DefaultsTestPtr& input) { return !input; }
  static void SetToNull(::sample::DefaultsTestPtr* output) { output->reset(); }

  static decltype(::sample::DefaultsTest::a0) a0(
      const ::sample::DefaultsTestPtr& input) {
    return input->a0;
  }

  static decltype(::sample::DefaultsTest::a1) a1(
      const ::sample::DefaultsTestPtr& input) {
    return input->a1;
  }

  static decltype(::sample::DefaultsTest::a2) a2(
      const ::sample::DefaultsTestPtr& input) {
    return input->a2;
  }

  static decltype(::sample::DefaultsTest::a3) a3(
      const ::sample::DefaultsTestPtr& input) {
    return input->a3;
  }

  static decltype(::sample::DefaultsTest::a4) a4(
      const ::sample::DefaultsTestPtr& input) {
    return input->a4;
  }

  static decltype(::sample::DefaultsTest::a5) a5(
      const ::sample::DefaultsTestPtr& input) {
    return input->a5;
  }

  static decltype(::sample::DefaultsTest::a6) a6(
      const ::sample::DefaultsTestPtr& input) {
    return input->a6;
  }

  static decltype(::sample::DefaultsTest::a7) a7(
      const ::sample::DefaultsTestPtr& input) {
    return input->a7;
  }

  static decltype(::sample::DefaultsTest::a8) a8(
      const ::sample::DefaultsTestPtr& input) {
    return input->a8;
  }

  static decltype(::sample::DefaultsTest::a9) a9(
      const ::sample::DefaultsTestPtr& input) {
    return input->a9;
  }

  static decltype(::sample::DefaultsTest::a10) a10(
      const ::sample::DefaultsTestPtr& input) {
    return input->a10;
  }

  static decltype(::sample::DefaultsTest::a11) a11(
      const ::sample::DefaultsTestPtr& input) {
    return input->a11;
  }

  static decltype(::sample::DefaultsTest::a12) a12(
      const ::sample::DefaultsTestPtr& input) {
    return input->a12;
  }

  static decltype(::sample::DefaultsTest::a13) a13(
      const ::sample::DefaultsTestPtr& input) {
    return input->a13;
  }

  static decltype(::sample::DefaultsTest::a14) a14(
      const ::sample::DefaultsTestPtr& input) {
    return input->a14;
  }

  static decltype(::sample::DefaultsTest::a15) a15(
      const ::sample::DefaultsTestPtr& input) {
    return input->a15;
  }

  static decltype(::sample::DefaultsTest::a16) a16(
      const ::sample::DefaultsTestPtr& input) {
    return input->a16;
  }

  static decltype(::sample::DefaultsTest::a17) a17(
      const ::sample::DefaultsTestPtr& input) {
    return input->a17;
  }

  static const decltype(::sample::DefaultsTest::a18)& a18(
      const ::sample::DefaultsTestPtr& input) {
    return input->a18;
  }

  static const decltype(::sample::DefaultsTest::a19)& a19(
      const ::sample::DefaultsTestPtr& input) {
    return input->a19;
  }

  static decltype(::sample::DefaultsTest::a20) a20(
      const ::sample::DefaultsTestPtr& input) {
    return input->a20;
  }

  static const decltype(::sample::DefaultsTest::a21)& a21(
      const ::sample::DefaultsTestPtr& input) {
    return input->a21;
  }

  static const decltype(::sample::DefaultsTest::a22)& a22(
      const ::sample::DefaultsTestPtr& input) {
    return input->a22;
  }

  static decltype(::sample::DefaultsTest::a23) a23(
      const ::sample::DefaultsTestPtr& input) {
    return input->a23;
  }

  static decltype(::sample::DefaultsTest::a24) a24(
      const ::sample::DefaultsTestPtr& input) {
    return input->a24;
  }

  static decltype(::sample::DefaultsTest::a25) a25(
      const ::sample::DefaultsTestPtr& input) {
    return input->a25;
  }

  static decltype(::sample::DefaultsTest::a26) a26(
      const ::sample::DefaultsTestPtr& input) {
    return input->a26;
  }

  static decltype(::sample::DefaultsTest::a27) a27(
      const ::sample::DefaultsTestPtr& input) {
    return input->a27;
  }

  static decltype(::sample::DefaultsTest::a28) a28(
      const ::sample::DefaultsTestPtr& input) {
    return input->a28;
  }

  static decltype(::sample::DefaultsTest::a29) a29(
      const ::sample::DefaultsTestPtr& input) {
    return input->a29;
  }

  static decltype(::sample::DefaultsTest::a30) a30(
      const ::sample::DefaultsTestPtr& input) {
    return input->a30;
  }

  static decltype(::sample::DefaultsTest::a31) a31(
      const ::sample::DefaultsTestPtr& input) {
    return input->a31;
  }

  static bool Read(::sample::DefaultsTest::DataView input, ::sample::DefaultsTestPtr* output);
};


template <>
struct  StructTraits<::sample::StructWithHoleV1::DataView,
                                         ::sample::StructWithHoleV1Ptr> {
  static bool IsNull(const ::sample::StructWithHoleV1Ptr& input) { return !input; }
  static void SetToNull(::sample::StructWithHoleV1Ptr* output) { output->reset(); }

  static decltype(::sample::StructWithHoleV1::v1) v1(
      const ::sample::StructWithHoleV1Ptr& input) {
    return input->v1;
  }

  static decltype(::sample::StructWithHoleV1::v2) v2(
      const ::sample::StructWithHoleV1Ptr& input) {
    return input->v2;
  }

  static bool Read(::sample::StructWithHoleV1::DataView input, ::sample::StructWithHoleV1Ptr* output);
};


template <>
struct  StructTraits<::sample::StructWithHoleV2::DataView,
                                         ::sample::StructWithHoleV2Ptr> {
  static bool IsNull(const ::sample::StructWithHoleV2Ptr& input) { return !input; }
  static void SetToNull(::sample::StructWithHoleV2Ptr* output) { output->reset(); }

  static decltype(::sample::StructWithHoleV2::v1) v1(
      const ::sample::StructWithHoleV2Ptr& input) {
    return input->v1;
  }

  static decltype(::sample::StructWithHoleV2::v2) v2(
      const ::sample::StructWithHoleV2Ptr& input) {
    return input->v2;
  }

  static decltype(::sample::StructWithHoleV2::v3) v3(
      const ::sample::StructWithHoleV2Ptr& input) {
    return input->v3;
  }

  static bool Read(::sample::StructWithHoleV2::DataView input, ::sample::StructWithHoleV2Ptr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_SERVICE_MOJOM_H_