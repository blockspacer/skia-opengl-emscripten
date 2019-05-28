// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/test_export.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_export.mojom-blink-forward.h"

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
#include "mojo/public/cpp/bindings/tests/mojo_test_blink_export.h"




namespace mojo {
namespace test {
namespace test_export {
namespace blink {

class ExportedInterfaceProxy;

template <typename ImplRefTraits>
class ExportedInterfaceStub;

class ExportedInterfaceRequestValidator;


class MOJO_TEST_BLINK_EXPORT ExportedInterface
    : public ExportedInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ExportedInterfaceInterfaceBase;
  using Proxy_ = ExportedInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ExportedInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = ExportedInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~ExportedInterface() {}
};

class MOJO_TEST_BLINK_EXPORT ExportedInterfaceProxy
    : public ExportedInterface {
 public:
  using InterfaceType = ExportedInterface;

  explicit ExportedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class MOJO_TEST_BLINK_EXPORT ExportedInterfaceStubDispatch {
 public:
  static bool Accept(ExportedInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ExportedInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ExportedInterface>>
class ExportedInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ExportedInterfaceStub() {}
  ~ExportedInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ExportedInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ExportedInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class MOJO_TEST_BLINK_EXPORT ExportedInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class MOJO_TEST_BLINK_EXPORT StringPair {
 public:
  using DataView = StringPairDataView;
  using Data_ = internal::StringPair_Data;

  template <typename... Args>
  static StringPairPtr New(Args&&... args) {
    return StringPairPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StringPairPtr From(const U& u) {
    return mojo::TypeConverter<StringPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StringPair>::Convert(*this);
  }


  StringPair();

  StringPair(
      const WTF::String& s1,
      const WTF::String& s2);

  ~StringPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StringPairPtr>
  StringPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StringPair>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StringPair::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StringPair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StringPair_UnserializedMessageContext<
            UserType, StringPair::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StringPair::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return StringPair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StringPair_UnserializedMessageContext<
            UserType, StringPair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StringPair::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String s1;
  
  WTF::String s2;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class MOJO_TEST_BLINK_EXPORT StringPairContainer {
 public:
  using DataView = StringPairContainerDataView;
  using Data_ = internal::StringPairContainer_Data;

  template <typename... Args>
  static StringPairContainerPtr New(Args&&... args) {
    return StringPairContainerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StringPairContainerPtr From(const U& u) {
    return mojo::TypeConverter<StringPairContainerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StringPairContainer>::Convert(*this);
  }


  StringPairContainer();

  explicit StringPairContainer(
      WTF::Vector<StringPairPtr> pairs);

  ~StringPairContainer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StringPairContainerPtr>
  StringPairContainerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StringPairContainer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StringPairContainer::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StringPairContainer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StringPairContainer_UnserializedMessageContext<
            UserType, StringPairContainer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StringPairContainer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return StringPairContainer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StringPairContainer_UnserializedMessageContext<
            UserType, StringPairContainer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StringPairContainer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<StringPairPtr> pairs;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StringPairContainer);
};

template <typename StructPtrType>
StringPairPtr StringPair::Clone() const {
  return New(
      mojo::Clone(s1),
      mojo::Clone(s2)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StringPair>::value>::type*>
bool StringPair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->s1, other_struct.s1))
    return false;
  if (!mojo::Equals(this->s2, other_struct.s2))
    return false;
  return true;
}
template <typename StructPtrType>
StringPairContainerPtr StringPairContainer::Clone() const {
  return New(
      mojo::Clone(pairs)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StringPairContainer>::value>::type*>
bool StringPairContainer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pairs, other_struct.pairs))
    return false;
  return true;
}


}  // namespace blink
}  // namespace test_export
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct MOJO_TEST_BLINK_EXPORT StructTraits<::mojo::test::test_export::blink::StringPair::DataView,
                                         ::mojo::test::test_export::blink::StringPairPtr> {
  static bool IsNull(const ::mojo::test::test_export::blink::StringPairPtr& input) { return !input; }
  static void SetToNull(::mojo::test::test_export::blink::StringPairPtr* output) { output->reset(); }

  static const decltype(::mojo::test::test_export::blink::StringPair::s1)& s1(
      const ::mojo::test::test_export::blink::StringPairPtr& input) {
    return input->s1;
  }

  static const decltype(::mojo::test::test_export::blink::StringPair::s2)& s2(
      const ::mojo::test::test_export::blink::StringPairPtr& input) {
    return input->s2;
  }

  static bool Read(::mojo::test::test_export::blink::StringPair::DataView input, ::mojo::test::test_export::blink::StringPairPtr* output);
};


template <>
struct MOJO_TEST_BLINK_EXPORT StructTraits<::mojo::test::test_export::blink::StringPairContainer::DataView,
                                         ::mojo::test::test_export::blink::StringPairContainerPtr> {
  static bool IsNull(const ::mojo::test::test_export::blink::StringPairContainerPtr& input) { return !input; }
  static void SetToNull(::mojo::test::test_export::blink::StringPairContainerPtr* output) { output->reset(); }

  static const decltype(::mojo::test::test_export::blink::StringPairContainer::pairs)& pairs(
      const ::mojo::test::test_export::blink::StringPairContainerPtr& input) {
    return input->pairs;
  }

  static bool Read(::mojo::test::test_export::blink::StringPairContainer::DataView input, ::mojo::test::test_export::blink::StringPairContainerPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_EXPORT_MOJOM_BLINK_H_