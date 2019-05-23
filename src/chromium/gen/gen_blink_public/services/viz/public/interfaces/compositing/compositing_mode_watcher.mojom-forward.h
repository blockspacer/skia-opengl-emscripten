// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_FORWARD_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_FORWARD_H_



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






namespace viz {
namespace mojom {
class CompositingModeWatcher;
using CompositingModeWatcherPtr = mojo::InterfacePtr<CompositingModeWatcher>;
using CompositingModeWatcherPtrInfo = mojo::InterfacePtrInfo<CompositingModeWatcher>;
using ThreadSafeCompositingModeWatcherPtr =
    mojo::ThreadSafeInterfacePtr<CompositingModeWatcher>;
using CompositingModeWatcherRequest = mojo::InterfaceRequest<CompositingModeWatcher>;
using CompositingModeWatcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<CompositingModeWatcher>;
using ThreadSafeCompositingModeWatcherAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CompositingModeWatcher>;
using CompositingModeWatcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CompositingModeWatcher>;
using CompositingModeWatcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CompositingModeWatcher>;

class CompositingModeReporter;
using CompositingModeReporterPtr = mojo::InterfacePtr<CompositingModeReporter>;
using CompositingModeReporterPtrInfo = mojo::InterfacePtrInfo<CompositingModeReporter>;
using ThreadSafeCompositingModeReporterPtr =
    mojo::ThreadSafeInterfacePtr<CompositingModeReporter>;
using CompositingModeReporterRequest = mojo::InterfaceRequest<CompositingModeReporter>;
using CompositingModeReporterAssociatedPtr =
    mojo::AssociatedInterfacePtr<CompositingModeReporter>;
using ThreadSafeCompositingModeReporterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CompositingModeReporter>;
using CompositingModeReporterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CompositingModeReporter>;
using CompositingModeReporterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CompositingModeReporter>;




}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITING_MODE_WATCHER_MOJOM_FORWARD_H_