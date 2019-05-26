// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_H_
#define MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_H_

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
#include "mojo/public/cpp/test/module.test-mojom-shared.h"
#include "mojo/public/cpp/test/module.test-mojom-forward.h"
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




namespace test_module {

class InterfaceProxy;

template <typename ImplRefTraits>
class InterfaceStub;

class InterfaceRequestValidator;
class InterfaceResponseValidator;


class  Interface
    : public InterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InterfaceInterfaceBase;
  using Proxy_ = InterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterfaceStub<ImplRefTraits>;

  using RequestValidator_ = InterfaceRequestValidator;
  using ResponseValidator_ = InterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDoSomethingMinVersion = 0,
    kDoSomethingElseMinVersion = 0,
  };
  
  using InterfaceEnum = Interface_InterfaceEnum;
  
  static constexpr bool InterfaceConst = false;
  virtual ~Interface() {}

  
  virtual void DoSomething() = 0;


  using DoSomethingElseCallback = base::OnceCallback<void(GlobalEnum)>;
  
  virtual void DoSomethingElse(StructPtr s, DoSomethingElseCallback callback) = 0;
};

class  InterfaceProxy
    : public Interface {
 public:
  using InterfaceType = Interface;

  explicit InterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void DoSomething() final;
  void DoSomethingElse(StructPtr s, DoSomethingElseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InterfaceStubDispatch {
 public:
  static bool Accept(Interface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Interface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Interface>>
class InterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterfaceStub() {}
  ~InterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  InterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  Struct {
 public:
  using DataView = StructDataView;
  using Data_ = internal::Struct_Data;
  using StructEnum = Struct_StructEnum;
  
  static const char StructConst[];

  template <typename... Args>
  static StructPtr New(Args&&... args) {
    return StructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructPtr From(const U& u) {
    return mojo::TypeConverter<StructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct>::Convert(*this);
  }


  Struct();

  explicit Struct(
      bool c);

  ~Struct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructPtr>
  StructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct_UnserializedMessageContext<
            UserType, Struct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Struct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct_UnserializedMessageContext<
            UserType, Struct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool c;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  Union {
 public:
  using DataView = UnionDataView;
  using Data_ = internal::Union_Data;
  using Tag = Data_::Union_Tag;

  static UnionPtr New() {
    return UnionPtr(base::in_place);
  }
  // Construct an instance holding |a|.
  static UnionPtr
  NewA(
      bool a) {
    auto result = UnionPtr(base::in_place);
    result->set_a(std::move(a));
    return result;
  }
  // Construct an instance holding |b|.
  static UnionPtr
  NewB(
      int64_t b) {
    auto result = UnionPtr(base::in_place);
    result->set_b(std::move(b));
    return result;
  }

  template <typename U>
  static UnionPtr From(const U& u) {
    return mojo::TypeConverter<UnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Union>::Convert(*this);
  }

  Union();
  ~Union();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = UnionPtr>
  UnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Union>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_a() const { return tag_ == Tag::A; }

  
  bool get_a() const {
    DCHECK(tag_ == Tag::A);
    return data_.a;
  }

  
  void set_a(
      bool a);
  
  bool is_b() const { return tag_ == Tag::B; }

  
  int64_t get_b() const {
    DCHECK(tag_ == Tag::B);
    return data_.b;
  }

  
  void set_b(
      int64_t b);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Union::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<Union::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    bool a;
    int64_t b;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};


template <typename UnionPtrType>
UnionPtr Union::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::A:
      rv->set_a(mojo::Clone(data_.a));
      break;
    case Tag::B:
      rv->set_b(mojo::Clone(data_.b));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Union>::value>::type*>
bool Union::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::A:
      return mojo::Equals(data_.a, other.data_.a);
    case Tag::B:
      return mojo::Equals(data_.b, other.data_.b);
  }

  return false;
}
template <typename StructPtrType>
StructPtr Struct::Clone() const {
  return New(
      mojo::Clone(c)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct>::value>::type*>
bool Struct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->c, other_struct.c))
    return false;
  return true;
}


}  // namespace test_module

namespace mojo {


template <>
struct  StructTraits<::test_module::Struct::DataView,
                                         ::test_module::StructPtr> {
  static bool IsNull(const ::test_module::StructPtr& input) { return !input; }
  static void SetToNull(::test_module::StructPtr* output) { output->reset(); }

  static decltype(::test_module::Struct::c) c(
      const ::test_module::StructPtr& input) {
    return input->c;
  }

  static bool Read(::test_module::Struct::DataView input, ::test_module::StructPtr* output);
};


template <>
struct  UnionTraits<::test_module::Union::DataView,
                                        ::test_module::UnionPtr> {
  static bool IsNull(const ::test_module::UnionPtr& input) { return !input; }
  static void SetToNull(::test_module::UnionPtr* output) { output->reset(); }

  static ::test_module::Union::Tag GetTag(const ::test_module::UnionPtr& input) {
    return input->which();
  }

  static  bool a(const ::test_module::UnionPtr& input) {
    return input->get_a();
  }

  static  int64_t b(const ::test_module::UnionPtr& input) {
    return input->get_b();
  }

  static bool Read(::test_module::Union::DataView input, ::test_module::UnionPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_CPP_TEST_MODULE_TEST_MOJOM_H_