// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_FORWARD_H_
#define SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_FORWARD_H_

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




namespace ws {
namespace mojom {
class CandidateWindowPropertiesDataView;

class CandidateWindowEntryDataView;

class TextInputStateDataView;

class TextInputClientDataDataView;

class SessionDetailsDataView;


enum class CandidateWindowPosition : int32_t;
class CandidateWindowProperties;
using CandidateWindowPropertiesPtr = mojo::StructPtr<CandidateWindowProperties>;

class CandidateWindowEntry;
using CandidateWindowEntryPtr = mojo::StructPtr<CandidateWindowEntry>;

class TextInputState;
using TextInputStatePtr = mojo::InlinedStructPtr<TextInputState>;

class TextInputClientData;
using TextInputClientDataPtr = mojo::StructPtr<TextInputClientData>;

class SessionDetails;
using SessionDetailsPtr = mojo::StructPtr<SessionDetails>;

class IMEDriver;
using IMEDriverPtr = mojo::InterfacePtr<IMEDriver>;
using IMEDriverPtrInfo = mojo::InterfacePtrInfo<IMEDriver>;
using ThreadSafeIMEDriverPtr =
    mojo::ThreadSafeInterfacePtr<IMEDriver>;
using IMEDriverRequest = mojo::InterfaceRequest<IMEDriver>;
using IMEDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMEDriver>;
using ThreadSafeIMEDriverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IMEDriver>;
using IMEDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMEDriver>;
using IMEDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMEDriver>;

class IMERegistrar;
using IMERegistrarPtr = mojo::InterfacePtr<IMERegistrar>;
using IMERegistrarPtrInfo = mojo::InterfacePtrInfo<IMERegistrar>;
using ThreadSafeIMERegistrarPtr =
    mojo::ThreadSafeInterfacePtr<IMERegistrar>;
using IMERegistrarRequest = mojo::InterfaceRequest<IMERegistrar>;
using IMERegistrarAssociatedPtr =
    mojo::AssociatedInterfacePtr<IMERegistrar>;
using ThreadSafeIMERegistrarAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<IMERegistrar>;
using IMERegistrarAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<IMERegistrar>;
using IMERegistrarAssociatedRequest =
    mojo::AssociatedInterfaceRequest<IMERegistrar>;

class InputMethod;
using InputMethodPtr = mojo::InterfacePtr<InputMethod>;
using InputMethodPtrInfo = mojo::InterfacePtrInfo<InputMethod>;
using ThreadSafeInputMethodPtr =
    mojo::ThreadSafeInterfacePtr<InputMethod>;
using InputMethodRequest = mojo::InterfaceRequest<InputMethod>;
using InputMethodAssociatedPtr =
    mojo::AssociatedInterfacePtr<InputMethod>;
using ThreadSafeInputMethodAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<InputMethod>;
using InputMethodAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<InputMethod>;
using InputMethodAssociatedRequest =
    mojo::AssociatedInterfaceRequest<InputMethod>;

class TextInputClient;
using TextInputClientPtr = mojo::InterfacePtr<TextInputClient>;
using TextInputClientPtrInfo = mojo::InterfacePtrInfo<TextInputClient>;
using ThreadSafeTextInputClientPtr =
    mojo::ThreadSafeInterfacePtr<TextInputClient>;
using TextInputClientRequest = mojo::InterfaceRequest<TextInputClient>;
using TextInputClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TextInputClient>;
using ThreadSafeTextInputClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TextInputClient>;
using TextInputClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TextInputClient>;
using TextInputClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TextInputClient>;




}  // namespace mojom
}  // namespace ws
#include "ui/base/ime/candidate_window.h"

#endif  // SERVICES_WS_PUBLIC_MOJOM_IME_IME_MOJOM_FORWARD_H_