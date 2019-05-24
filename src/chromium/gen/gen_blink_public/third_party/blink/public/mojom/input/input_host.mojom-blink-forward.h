// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

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


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
class SpellCheckSuggestion;
using SpellCheckSuggestionPtr = mojo::InlinedStructPtr<SpellCheckSuggestion>;

class TextSuggestion;
using TextSuggestionPtr = mojo::StructPtr<TextSuggestion>;

class TextSuggestionHost;
using TextSuggestionHostPtr = mojo::InterfacePtr<TextSuggestionHost>;
using TextSuggestionHostPtrInfo = mojo::InterfacePtrInfo<TextSuggestionHost>;
using ThreadSafeTextSuggestionHostPtr =
    mojo::ThreadSafeInterfacePtr<TextSuggestionHost>;
using TextSuggestionHostRequest = mojo::InterfaceRequest<TextSuggestionHost>;
using TextSuggestionHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<TextSuggestionHost>;
using ThreadSafeTextSuggestionHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TextSuggestionHost>;
using TextSuggestionHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TextSuggestionHost>;
using TextSuggestionHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TextSuggestionHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_FORWARD_H_