// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_constants.mojom-blink-forward.h"

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




namespace mojo {
namespace test {
namespace blink {

class InterfaceWithConstantsProxy;

template <typename ImplRefTraits>
class InterfaceWithConstantsStub;

class InterfaceWithConstantsRequestValidator;


class  InterfaceWithConstants
    : public InterfaceWithConstantsInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = InterfaceWithConstantsInterfaceBase;
  using Proxy_ = InterfaceWithConstantsProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterfaceWithConstantsStub<ImplRefTraits>;

  using RequestValidator_ = InterfaceWithConstantsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  
  static constexpr uint32_t kUint32Value = 20100722U;
  
  static constexpr double kDoubleValue = 12.34567;
  
  static const char kStringValue[];
  virtual ~InterfaceWithConstants() {}
};

class  InterfaceWithConstantsProxy
    : public InterfaceWithConstants {
 public:
  using InterfaceType = InterfaceWithConstants;

  explicit InterfaceWithConstantsProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InterfaceWithConstantsStubDispatch {
 public:
  static bool Accept(InterfaceWithConstants* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterfaceWithConstants* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterfaceWithConstants>>
class InterfaceWithConstantsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterfaceWithConstantsStub() {}
  ~InterfaceWithConstantsStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceWithConstantsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterfaceWithConstantsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterfaceWithConstantsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  StructWithConstants {
 public:
  using DataView = StructWithConstantsDataView;
  using Data_ = internal::StructWithConstants_Data;
  
  static constexpr int8_t kInt8Value = 5;
  
  static constexpr float kFloatValue = 765.432f;
  
  static const char kStringValue[];

  template <typename... Args>
  static StructWithConstantsPtr New(Args&&... args) {
    return StructWithConstantsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructWithConstantsPtr From(const U& u) {
    return mojo::TypeConverter<StructWithConstantsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructWithConstants>::Convert(*this);
  }


  StructWithConstants();

  ~StructWithConstants();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructWithConstantsPtr>
  StructWithConstantsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructWithConstants>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructWithConstants::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructWithConstants::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructWithConstants_UnserializedMessageContext<
            UserType, StructWithConstants::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructWithConstants::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return StructWithConstants::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructWithConstants_UnserializedMessageContext<
            UserType, StructWithConstants::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructWithConstants::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }


 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
StructWithConstantsPtr StructWithConstants::Clone() const {
  return New(
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructWithConstants>::value>::type*>
bool StructWithConstants::Equals(const T& other_struct) const {
  return true;
}


}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::blink::StructWithConstants::DataView,
                                         ::mojo::test::blink::StructWithConstantsPtr> {
  static bool IsNull(const ::mojo::test::blink::StructWithConstantsPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructWithConstantsPtr* output) { output->reset(); }

  static bool Read(::mojo::test::blink::StructWithConstants::DataView input, ::mojo::test::blink::StructWithConstantsPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_CONSTANTS_MOJOM_BLINK_H_