// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_BLINK_FORWARD_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"




namespace math {
}  // namespace math


namespace math {
namespace blink {
class Calculator;
using CalculatorPtr = mojo::InterfacePtr<Calculator>;
using CalculatorPtrInfo = mojo::InterfacePtrInfo<Calculator>;
using ThreadSafeCalculatorPtr =
    mojo::ThreadSafeInterfacePtr<Calculator>;
using CalculatorRequest = mojo::InterfaceRequest<Calculator>;
using CalculatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Calculator>;
using ThreadSafeCalculatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Calculator>;
using CalculatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Calculator>;
using CalculatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Calculator>;




}  // namespace blink
}  // namespace math

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_MATH_CALCULATOR_MOJOM_BLINK_FORWARD_H_