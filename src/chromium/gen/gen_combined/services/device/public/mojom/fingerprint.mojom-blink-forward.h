// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_FORWARD_H_



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


namespace device {
namespace mojom {

enum class ScanResult : int32_t;

enum class BiometricType : int32_t;
}  // namespace device
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct device_mojom_internal_ScanResult_DataHashFn;

template <>
struct DefaultHash<::device::mojom::ScanResult> {
  using Hash = device_mojom_internal_ScanResult_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct device_mojom_internal_BiometricType_DataHashFn;

template <>
struct DefaultHash<::device::mojom::BiometricType> {
  using Hash = device_mojom_internal_BiometricType_DataHashFn;
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {
using ScanResult = ScanResult;  // Alias for definition in the parent namespace.
using BiometricType = BiometricType;  // Alias for definition in the parent namespace.
class FingerprintObserver;
using FingerprintObserverPtr = mojo::InterfacePtr<FingerprintObserver>;
using FingerprintObserverPtrInfo = mojo::InterfacePtrInfo<FingerprintObserver>;
using ThreadSafeFingerprintObserverPtr =
    mojo::ThreadSafeInterfacePtr<FingerprintObserver>;
using FingerprintObserverRequest = mojo::InterfaceRequest<FingerprintObserver>;
using FingerprintObserverAssociatedPtr =
    mojo::AssociatedInterfacePtr<FingerprintObserver>;
using ThreadSafeFingerprintObserverAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<FingerprintObserver>;
using FingerprintObserverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FingerprintObserver>;
using FingerprintObserverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FingerprintObserver>;

class Fingerprint;
using FingerprintPtr = mojo::InterfacePtr<Fingerprint>;
using FingerprintPtrInfo = mojo::InterfacePtrInfo<Fingerprint>;
using ThreadSafeFingerprintPtr =
    mojo::ThreadSafeInterfacePtr<Fingerprint>;
using FingerprintRequest = mojo::InterfaceRequest<Fingerprint>;
using FingerprintAssociatedPtr =
    mojo::AssociatedInterfacePtr<Fingerprint>;
using ThreadSafeFingerprintAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Fingerprint>;
using FingerprintAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Fingerprint>;
using FingerprintAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Fingerprint>;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_FINGERPRINT_MOJOM_BLINK_FORWARD_H_