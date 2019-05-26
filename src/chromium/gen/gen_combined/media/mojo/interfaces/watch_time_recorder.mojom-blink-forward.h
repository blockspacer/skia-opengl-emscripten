// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_FORWARD_H_

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
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
}  // namespace media
}  // namespace mojom


namespace media {
namespace mojom {
namespace blink {
class PlaybackProperties;
using PlaybackPropertiesPtr = mojo::StructPtr<PlaybackProperties>;

class SecondaryPlaybackProperties;
using SecondaryPlaybackPropertiesPtr = mojo::StructPtr<SecondaryPlaybackProperties>;

class WatchTimeRecorder;
using WatchTimeRecorderPtr = mojo::InterfacePtr<WatchTimeRecorder>;
using WatchTimeRecorderPtrInfo = mojo::InterfacePtrInfo<WatchTimeRecorder>;
using ThreadSafeWatchTimeRecorderPtr =
    mojo::ThreadSafeInterfacePtr<WatchTimeRecorder>;
using WatchTimeRecorderRequest = mojo::InterfaceRequest<WatchTimeRecorder>;
using WatchTimeRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<WatchTimeRecorder>;
using ThreadSafeWatchTimeRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<WatchTimeRecorder>;
using WatchTimeRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WatchTimeRecorder>;
using WatchTimeRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WatchTimeRecorder>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_BLINK_FORWARD_H_