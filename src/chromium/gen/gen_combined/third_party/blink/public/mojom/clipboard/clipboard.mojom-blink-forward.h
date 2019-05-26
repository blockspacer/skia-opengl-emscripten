// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_FORWARD_H_



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


#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class ClipboardFormat : int32_t;

enum class ClipboardBuffer : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_ClipboardFormat_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ClipboardFormat> {
  using Hash = blink_mojom_internal_ClipboardFormat_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_ClipboardBuffer_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ClipboardBuffer> {
  using Hash = blink_mojom_internal_ClipboardBuffer_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
using ClipboardFormat = ClipboardFormat;  // Alias for definition in the parent namespace.
using ClipboardBuffer = ClipboardBuffer;  // Alias for definition in the parent namespace.
class ClipboardHost;
using ClipboardHostPtr = mojo::InterfacePtr<ClipboardHost>;
using ClipboardHostPtrInfo = mojo::InterfacePtrInfo<ClipboardHost>;
using ThreadSafeClipboardHostPtr =
    mojo::ThreadSafeInterfacePtr<ClipboardHost>;
using ClipboardHostRequest = mojo::InterfaceRequest<ClipboardHost>;
using ClipboardHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClipboardHost>;
using ThreadSafeClipboardHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ClipboardHost>;
using ClipboardHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClipboardHost>;
using ClipboardHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ClipboardHost>;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_FORWARD_H_