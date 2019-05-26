// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_FORWARD_H_

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




namespace network {
namespace mojom {
class TrialComparisonCertVerifierParamsDataView;

class TrialComparisonCertVerifierParams;
using TrialComparisonCertVerifierParamsPtr = mojo::StructPtr<TrialComparisonCertVerifierParams>;

class TrialComparisonCertVerifierConfigClient;
using TrialComparisonCertVerifierConfigClientPtr = mojo::InterfacePtr<TrialComparisonCertVerifierConfigClient>;
using TrialComparisonCertVerifierConfigClientPtrInfo = mojo::InterfacePtrInfo<TrialComparisonCertVerifierConfigClient>;
using ThreadSafeTrialComparisonCertVerifierConfigClientPtr =
    mojo::ThreadSafeInterfacePtr<TrialComparisonCertVerifierConfigClient>;
using TrialComparisonCertVerifierConfigClientRequest = mojo::InterfaceRequest<TrialComparisonCertVerifierConfigClient>;
using TrialComparisonCertVerifierConfigClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TrialComparisonCertVerifierConfigClient>;
using ThreadSafeTrialComparisonCertVerifierConfigClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TrialComparisonCertVerifierConfigClient>;
using TrialComparisonCertVerifierConfigClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TrialComparisonCertVerifierConfigClient>;
using TrialComparisonCertVerifierConfigClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TrialComparisonCertVerifierConfigClient>;

class TrialComparisonCertVerifierReportClient;
using TrialComparisonCertVerifierReportClientPtr = mojo::InterfacePtr<TrialComparisonCertVerifierReportClient>;
using TrialComparisonCertVerifierReportClientPtrInfo = mojo::InterfacePtrInfo<TrialComparisonCertVerifierReportClient>;
using ThreadSafeTrialComparisonCertVerifierReportClientPtr =
    mojo::ThreadSafeInterfacePtr<TrialComparisonCertVerifierReportClient>;
using TrialComparisonCertVerifierReportClientRequest = mojo::InterfaceRequest<TrialComparisonCertVerifierReportClient>;
using TrialComparisonCertVerifierReportClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TrialComparisonCertVerifierReportClient>;
using ThreadSafeTrialComparisonCertVerifierReportClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TrialComparisonCertVerifierReportClient>;
using TrialComparisonCertVerifierReportClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TrialComparisonCertVerifierReportClient>;
using TrialComparisonCertVerifierReportClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TrialComparisonCertVerifierReportClient>;




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_FORWARD_H_