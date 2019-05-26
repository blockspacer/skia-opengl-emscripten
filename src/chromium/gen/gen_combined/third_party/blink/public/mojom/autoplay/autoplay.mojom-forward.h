// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_FORWARD_H_



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


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

constexpr int32_t kAutoplayFlagNone = 0x00000;

constexpr int32_t kAutoplayFlagHighMediaEngagement = 0x00001;

constexpr int32_t kAutoplayFlagForceAllow = 0x00002;

constexpr int32_t kAutoplayFlagUserException = 0x00004;
class AutoplayConfigurationClient;
using AutoplayConfigurationClientPtr = mojo::InterfacePtr<AutoplayConfigurationClient>;
using AutoplayConfigurationClientPtrInfo = mojo::InterfacePtrInfo<AutoplayConfigurationClient>;
using ThreadSafeAutoplayConfigurationClientPtr =
    mojo::ThreadSafeInterfacePtr<AutoplayConfigurationClient>;
using AutoplayConfigurationClientRequest = mojo::InterfaceRequest<AutoplayConfigurationClient>;
using AutoplayConfigurationClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AutoplayConfigurationClient>;
using ThreadSafeAutoplayConfigurationClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<AutoplayConfigurationClient>;
using AutoplayConfigurationClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AutoplayConfigurationClient>;
using AutoplayConfigurationClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AutoplayConfigurationClient>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_AUTOPLAY_AUTOPLAY_MOJOM_FORWARD_H_