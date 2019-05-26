// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_FORWARD_H_

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


namespace midi {
namespace mojom {

enum class Result : int32_t;

enum class PortState : int32_t;
}  // namespace midi
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct midi_mojom_internal_Result_DataHashFn;

template <>
struct DefaultHash<::midi::mojom::Result> {
  using Hash = midi_mojom_internal_Result_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct midi_mojom_internal_PortState_DataHashFn;

template <>
struct DefaultHash<::midi::mojom::PortState> {
  using Hash = midi_mojom_internal_PortState_DataHashFn;
};
}  // namespace WTF


namespace midi {
namespace mojom {
namespace blink {
using Result = Result;  // Alias for definition in the parent namespace.
using PortState = PortState;  // Alias for definition in the parent namespace.
class PortInfo;
using PortInfoPtr = mojo::StructPtr<PortInfo>;

class MidiSessionClient;
using MidiSessionClientPtr = mojo::InterfacePtr<MidiSessionClient>;
using MidiSessionClientPtrInfo = mojo::InterfacePtrInfo<MidiSessionClient>;
using ThreadSafeMidiSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<MidiSessionClient>;
using MidiSessionClientRequest = mojo::InterfaceRequest<MidiSessionClient>;
using MidiSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<MidiSessionClient>;
using ThreadSafeMidiSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MidiSessionClient>;
using MidiSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MidiSessionClient>;
using MidiSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MidiSessionClient>;

class MidiSessionProvider;
using MidiSessionProviderPtr = mojo::InterfacePtr<MidiSessionProvider>;
using MidiSessionProviderPtrInfo = mojo::InterfacePtrInfo<MidiSessionProvider>;
using ThreadSafeMidiSessionProviderPtr =
    mojo::ThreadSafeInterfacePtr<MidiSessionProvider>;
using MidiSessionProviderRequest = mojo::InterfaceRequest<MidiSessionProvider>;
using MidiSessionProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MidiSessionProvider>;
using ThreadSafeMidiSessionProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MidiSessionProvider>;
using MidiSessionProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MidiSessionProvider>;
using MidiSessionProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MidiSessionProvider>;

class MidiSession;
using MidiSessionPtr = mojo::InterfacePtr<MidiSession>;
using MidiSessionPtrInfo = mojo::InterfacePtrInfo<MidiSession>;
using ThreadSafeMidiSessionPtr =
    mojo::ThreadSafeInterfacePtr<MidiSession>;
using MidiSessionRequest = mojo::InterfaceRequest<MidiSession>;
using MidiSessionAssociatedPtr =
    mojo::AssociatedInterfacePtr<MidiSession>;
using ThreadSafeMidiSessionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MidiSession>;
using MidiSessionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MidiSession>;
using MidiSessionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MidiSession>;




}  // namespace blink
}  // namespace mojom
}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_BLINK_FORWARD_H_