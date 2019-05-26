// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_FORWARD_H_

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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class PresentationInfoDataView;

class PresentationErrorDataView;

class PresentationConnectionResultDataView;

class PresentationConnectionMessageDataView;

enum class ScreenAvailability : int32_t;

enum class PresentationConnectionState : int32_t;

enum class PresentationConnectionCloseReason : int32_t;

enum class PresentationErrorType : int32_t;
class PresentationInfo;
using PresentationInfoPtr = mojo::StructPtr<PresentationInfo>;

class PresentationError;
using PresentationErrorPtr = mojo::InlinedStructPtr<PresentationError>;

class PresentationConnectionResult;
using PresentationConnectionResultPtr = mojo::StructPtr<PresentationConnectionResult>;

class PresentationConnectionMessage;

typedef mojo::StructPtr<PresentationConnectionMessage> PresentationConnectionMessagePtr;

class PresentationConnection;
using PresentationConnectionPtr = mojo::InterfacePtr<PresentationConnection>;
using PresentationConnectionPtrInfo = mojo::InterfacePtrInfo<PresentationConnection>;
using ThreadSafePresentationConnectionPtr =
    mojo::ThreadSafeInterfacePtr<PresentationConnection>;
using PresentationConnectionRequest = mojo::InterfaceRequest<PresentationConnection>;
using PresentationConnectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationConnection>;
using ThreadSafePresentationConnectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationConnection>;
using PresentationConnectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationConnection>;
using PresentationConnectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationConnection>;

class PresentationService;
using PresentationServicePtr = mojo::InterfacePtr<PresentationService>;
using PresentationServicePtrInfo = mojo::InterfacePtrInfo<PresentationService>;
using ThreadSafePresentationServicePtr =
    mojo::ThreadSafeInterfacePtr<PresentationService>;
using PresentationServiceRequest = mojo::InterfaceRequest<PresentationService>;
using PresentationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationService>;
using ThreadSafePresentationServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationService>;
using PresentationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationService>;
using PresentationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationService>;

class PresentationController;
using PresentationControllerPtr = mojo::InterfacePtr<PresentationController>;
using PresentationControllerPtrInfo = mojo::InterfacePtrInfo<PresentationController>;
using ThreadSafePresentationControllerPtr =
    mojo::ThreadSafeInterfacePtr<PresentationController>;
using PresentationControllerRequest = mojo::InterfaceRequest<PresentationController>;
using PresentationControllerAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationController>;
using ThreadSafePresentationControllerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationController>;
using PresentationControllerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationController>;
using PresentationControllerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationController>;

class PresentationReceiver;
using PresentationReceiverPtr = mojo::InterfacePtr<PresentationReceiver>;
using PresentationReceiverPtrInfo = mojo::InterfacePtrInfo<PresentationReceiver>;
using ThreadSafePresentationReceiverPtr =
    mojo::ThreadSafeInterfacePtr<PresentationReceiver>;
using PresentationReceiverRequest = mojo::InterfaceRequest<PresentationReceiver>;
using PresentationReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationReceiver>;
using ThreadSafePresentationReceiverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PresentationReceiver>;
using PresentationReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationReceiver>;
using PresentationReceiverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PresentationReceiver>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_FORWARD_H_