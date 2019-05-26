// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_FORWARD_H_



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

enum class CodeCacheType : int32_t;
class CodeCacheHost;
using CodeCacheHostPtr = mojo::InterfacePtr<CodeCacheHost>;
using CodeCacheHostPtrInfo = mojo::InterfacePtrInfo<CodeCacheHost>;
using ThreadSafeCodeCacheHostPtr =
    mojo::ThreadSafeInterfacePtr<CodeCacheHost>;
using CodeCacheHostRequest = mojo::InterfaceRequest<CodeCacheHost>;
using CodeCacheHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<CodeCacheHost>;
using ThreadSafeCodeCacheHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<CodeCacheHost>;
using CodeCacheHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<CodeCacheHost>;
using CodeCacheHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<CodeCacheHost>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_FORWARD_H_