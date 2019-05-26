// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {

enum class MediaURLScheme : int32_t;
class MediaMetricsProvider;
using MediaMetricsProviderPtr = mojo::InterfacePtr<MediaMetricsProvider>;
using MediaMetricsProviderPtrInfo = mojo::InterfacePtrInfo<MediaMetricsProvider>;
using ThreadSafeMediaMetricsProviderPtr =
    mojo::ThreadSafeInterfacePtr<MediaMetricsProvider>;
using MediaMetricsProviderRequest = mojo::InterfaceRequest<MediaMetricsProvider>;
using MediaMetricsProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaMetricsProvider>;
using ThreadSafeMediaMetricsProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<MediaMetricsProvider>;
using MediaMetricsProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaMetricsProvider>;
using MediaMetricsProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaMetricsProvider>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_METRICS_PROVIDER_MOJOM_FORWARD_H_