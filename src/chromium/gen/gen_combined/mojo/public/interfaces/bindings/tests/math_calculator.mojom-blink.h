// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/math_calculator.mojom-blink-forward.h"

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




namespace math {
namespace blink {

class CalculatorProxy;

template <typename ImplRefTraits>
class CalculatorStub;

class CalculatorRequestValidator;
class CalculatorResponseValidator;


class  Calculator
    : public CalculatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CalculatorInterfaceBase;
  using Proxy_ = CalculatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = CalculatorStub<ImplRefTraits>;

  using RequestValidator_ = CalculatorRequestValidator;
  using ResponseValidator_ = CalculatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kClearMinVersion = 0,
    kAddMinVersion = 0,
    kMultiplyMinVersion = 0,
  };
  virtual ~Calculator() {}


  using ClearCallback = base::OnceCallback<void(double)>;
  
  virtual void Clear(ClearCallback callback) = 0;


  using AddCallback = base::OnceCallback<void(double)>;
  
  virtual void Add(double value, AddCallback callback) = 0;


  using MultiplyCallback = base::OnceCallback<void(double)>;
  
  virtual void Multiply(double value, MultiplyCallback callback) = 0;
};

class  CalculatorProxy
    : public Calculator {
 public:
  using InterfaceType = Calculator;

  explicit CalculatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Clear(ClearCallback callback) final;
  void Add(double value, AddCallback callback) final;
  void Multiply(double value, MultiplyCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CalculatorStubDispatch {
 public:
  static bool Accept(Calculator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Calculator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Calculator>>
class CalculatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CalculatorStub() {}
  ~CalculatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CalculatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CalculatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CalculatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CalculatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace math

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_BLINK_H_