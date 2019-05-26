// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {

enum class AudioLogComponent : int32_t;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_AudioLogComponent_DataHashFn;

template <>
struct DefaultHash<::media::mojom::AudioLogComponent> {
  using Hash = media_mojom_internal_AudioLogComponent_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using AudioLogComponent = AudioLogComponent;  // Alias for definition in the parent namespace.
class AudioLog;
using AudioLogPtr = mojo::InterfacePtr<AudioLog>;
using AudioLogPtrInfo = mojo::InterfacePtrInfo<AudioLog>;
using ThreadSafeAudioLogPtr =
    mojo::ThreadSafeInterfacePtr<AudioLog>;
using AudioLogRequest = mojo::InterfaceRequest<AudioLog>;
using AudioLogAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioLog>;
using ThreadSafeAudioLogAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioLog>;
using AudioLogAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioLog>;
using AudioLogAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioLog>;

class AudioLogFactory;
using AudioLogFactoryPtr = mojo::InterfacePtr<AudioLogFactory>;
using AudioLogFactoryPtrInfo = mojo::InterfacePtrInfo<AudioLogFactory>;
using ThreadSafeAudioLogFactoryPtr =
    mojo::ThreadSafeInterfacePtr<AudioLogFactory>;
using AudioLogFactoryRequest = mojo::InterfaceRequest<AudioLogFactory>;
using AudioLogFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioLogFactory>;
using ThreadSafeAudioLogFactoryAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AudioLogFactory>;
using AudioLogFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioLogFactory>;
using AudioLogFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioLogFactory>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_LOGGING_MOJOM_BLINK_FORWARD_H_