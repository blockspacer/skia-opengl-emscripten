// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/network/public/mojom/trial_comparison_cert_verifier.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class TrialComparisonCertVerifierParamsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::TrialComparisonCertVerifierParamsDataView> {
  using Data = ::network::mojom::internal::TrialComparisonCertVerifierParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TrialComparisonCertVerifierConfigClientInterfaceBase {};

using TrialComparisonCertVerifierConfigClientPtrDataView =
    mojo::InterfacePtrDataView<TrialComparisonCertVerifierConfigClientInterfaceBase>;
using TrialComparisonCertVerifierConfigClientRequestDataView =
    mojo::InterfaceRequestDataView<TrialComparisonCertVerifierConfigClientInterfaceBase>;
using TrialComparisonCertVerifierConfigClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TrialComparisonCertVerifierConfigClientInterfaceBase>;
using TrialComparisonCertVerifierConfigClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TrialComparisonCertVerifierConfigClientInterfaceBase>;
class TrialComparisonCertVerifierReportClientInterfaceBase {};

using TrialComparisonCertVerifierReportClientPtrDataView =
    mojo::InterfacePtrDataView<TrialComparisonCertVerifierReportClientInterfaceBase>;
using TrialComparisonCertVerifierReportClientRequestDataView =
    mojo::InterfaceRequestDataView<TrialComparisonCertVerifierReportClientInterfaceBase>;
using TrialComparisonCertVerifierReportClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TrialComparisonCertVerifierReportClientInterfaceBase>;
using TrialComparisonCertVerifierReportClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TrialComparisonCertVerifierReportClientInterfaceBase>;
class TrialComparisonCertVerifierParamsDataView {
 public:
  TrialComparisonCertVerifierParamsDataView() {}

  TrialComparisonCertVerifierParamsDataView(
      internal::TrialComparisonCertVerifierParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool initial_allowed() const {
    return data_->initial_allowed;
  }
  template <typename UserType>
  UserType TakeConfigClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TrialComparisonCertVerifierConfigClientRequestDataView>(
            &data_->config_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeReportClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::TrialComparisonCertVerifierReportClientPtrDataView>(
            &data_->report_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TrialComparisonCertVerifierParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::TrialComparisonCertVerifierParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::TrialComparisonCertVerifierParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::TrialComparisonCertVerifierParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->initial_allowed = Traits::initial_allowed(input);
    decltype(Traits::config_client_request(input)) in_config_client_request = Traits::config_client_request(input);
    mojo::internal::Serialize<::network::mojom::TrialComparisonCertVerifierConfigClientRequestDataView>(
        in_config_client_request, &(*output)->config_client_request, context);
    decltype(Traits::report_client(input)) in_report_client = Traits::report_client(input);
    mojo::internal::Serialize<::network::mojom::TrialComparisonCertVerifierReportClientPtrDataView>(
        in_report_client, &(*output)->report_client, context);
  }

  static bool Deserialize(::network::mojom::internal::TrialComparisonCertVerifierParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::TrialComparisonCertVerifierParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRIAL_COMPARISON_CERT_VERIFIER_MOJOM_SHARED_H_