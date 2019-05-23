// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_FORWARD_H_



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


namespace network {
namespace mojom {

enum class NetLogCaptureMode : int32_t;
}  // namespace network
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct network_mojom_internal_NetLogCaptureMode_DataHashFn;

template <>
struct DefaultHash<::network::mojom::NetLogCaptureMode> {
  using Hash = network_mojom_internal_NetLogCaptureMode_DataHashFn;
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {
using NetLogCaptureMode = NetLogCaptureMode;  // Alias for definition in the parent namespace.
class NetLogExporter;
using NetLogExporterPtr = mojo::InterfacePtr<NetLogExporter>;
using NetLogExporterPtrInfo = mojo::InterfacePtrInfo<NetLogExporter>;
using ThreadSafeNetLogExporterPtr =
    mojo::ThreadSafeInterfacePtr<NetLogExporter>;
using NetLogExporterRequest = mojo::InterfaceRequest<NetLogExporter>;
using NetLogExporterAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetLogExporter>;
using ThreadSafeNetLogExporterAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<NetLogExporter>;
using NetLogExporterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetLogExporter>;
using NetLogExporterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<NetLogExporter>;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NET_LOG_MOJOM_BLINK_FORWARD_H_