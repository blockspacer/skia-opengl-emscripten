// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_FORWARD_H_

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
class StartSpeechRecognitionRequestParams;
using StartSpeechRecognitionRequestParamsPtr = mojo::StructPtr<StartSpeechRecognitionRequestParams>;

class SpeechRecognizer;
using SpeechRecognizerPtr = mojo::InterfacePtr<SpeechRecognizer>;
using SpeechRecognizerPtrInfo = mojo::InterfacePtrInfo<SpeechRecognizer>;
using ThreadSafeSpeechRecognizerPtr =
    mojo::ThreadSafeInterfacePtr<SpeechRecognizer>;
using SpeechRecognizerRequest = mojo::InterfaceRequest<SpeechRecognizer>;
using SpeechRecognizerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpeechRecognizer>;
using ThreadSafeSpeechRecognizerAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpeechRecognizer>;
using SpeechRecognizerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpeechRecognizer>;
using SpeechRecognizerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpeechRecognizer>;

class SpeechRecognitionSession;
using SpeechRecognitionSessionPtr = mojo::InterfacePtr<SpeechRecognitionSession>;
using SpeechRecognitionSessionPtrInfo = mojo::InterfacePtrInfo<SpeechRecognitionSession>;
using ThreadSafeSpeechRecognitionSessionPtr =
    mojo::ThreadSafeInterfacePtr<SpeechRecognitionSession>;
using SpeechRecognitionSessionRequest = mojo::InterfaceRequest<SpeechRecognitionSession>;
using SpeechRecognitionSessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpeechRecognitionSession>;
using ThreadSafeSpeechRecognitionSessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpeechRecognitionSession>;
using SpeechRecognitionSessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpeechRecognitionSession>;
using SpeechRecognitionSessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpeechRecognitionSession>;

class SpeechRecognitionSessionClient;
using SpeechRecognitionSessionClientPtr = mojo::InterfacePtr<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientPtrInfo = mojo::InterfacePtrInfo<SpeechRecognitionSessionClient>;
using ThreadSafeSpeechRecognitionSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientRequest = mojo::InterfaceRequest<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<SpeechRecognitionSessionClient>;
using ThreadSafeSpeechRecognitionSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SpeechRecognitionSessionClient>;
using SpeechRecognitionSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SpeechRecognitionSessionClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNIZER_MOJOM_BLINK_FORWARD_H_