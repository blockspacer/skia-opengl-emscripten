// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_FORWARD_H_



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

enum class OutputProtection_ProtectionType : int32_t;

enum class OutputProtection_LinkType : int32_t;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_OutputProtection_ProtectionType_DataHashFn;

template <>
struct DefaultHash<::media::mojom::OutputProtection_ProtectionType> {
  using Hash = media_mojom_internal_OutputProtection_ProtectionType_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_OutputProtection_LinkType_DataHashFn;

template <>
struct DefaultHash<::media::mojom::OutputProtection_LinkType> {
  using Hash = media_mojom_internal_OutputProtection_LinkType_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
class OutputProtection;
using OutputProtectionPtr = mojo::InterfacePtr<OutputProtection>;
using OutputProtectionPtrInfo = mojo::InterfacePtrInfo<OutputProtection>;
using ThreadSafeOutputProtectionPtr =
    mojo::ThreadSafeInterfacePtr<OutputProtection>;
using OutputProtectionRequest = mojo::InterfaceRequest<OutputProtection>;
using OutputProtectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<OutputProtection>;
using ThreadSafeOutputProtectionAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<OutputProtection>;
using OutputProtectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OutputProtection>;
using OutputProtectionAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OutputProtection>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_FORWARD_H_