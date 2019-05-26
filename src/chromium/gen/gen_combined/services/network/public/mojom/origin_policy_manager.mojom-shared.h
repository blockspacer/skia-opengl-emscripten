// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/origin_policy_manager.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class OriginPolicyContentsDataView;

class OriginPolicyDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::OriginPolicyContentsDataView> {
  using Data = ::network::mojom::internal::OriginPolicyContents_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::OriginPolicyDataView> {
  using Data = ::network::mojom::internal::OriginPolicy_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class OriginPolicyState : int32_t {
  
  kLoaded,
  
  kCannotLoadPolicy,
  
  kInvalidRedirect,
  
  kNoPolicyApplies,
  
  kOther,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, OriginPolicyState value);
inline bool IsKnownEnumValue(OriginPolicyState value) {
  return internal::OriginPolicyState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class OriginPolicyManagerInterfaceBase {};

using OriginPolicyManagerPtrDataView =
    mojo::InterfacePtrDataView<OriginPolicyManagerInterfaceBase>;
using OriginPolicyManagerRequestDataView =
    mojo::InterfaceRequestDataView<OriginPolicyManagerInterfaceBase>;
using OriginPolicyManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OriginPolicyManagerInterfaceBase>;
using OriginPolicyManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OriginPolicyManagerInterfaceBase>;
class OriginPolicyContentsDataView {
 public:
  OriginPolicyContentsDataView() {}

  OriginPolicyContentsDataView(
      internal::OriginPolicyContents_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatures(UserType* output) {
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetContentSecurityPoliciesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentSecurityPolicies(UserType* output) {
    auto* pointer = data_->content_security_policies.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetContentSecurityPoliciesReportOnlyDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentSecurityPoliciesReportOnly(UserType* output) {
    auto* pointer = data_->content_security_policies_report_only.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::OriginPolicyContents_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class OriginPolicyDataView {
 public:
  OriginPolicyDataView() {}

  OriginPolicyDataView(
      internal::OriginPolicy_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::network::mojom::OriginPolicyState>(
        data_value, output);
  }

  OriginPolicyState state() const {
    return static_cast<OriginPolicyState>(data_->state);
  }
  inline void GetPolicyUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPolicyUrl(UserType* output) {
    auto* pointer = data_->policy_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetContentsDataView(
      OriginPolicyContentsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContents(UserType* output) {
    auto* pointer = data_->contents.Get();
    return mojo::internal::Deserialize<::network::mojom::OriginPolicyContentsDataView>(
        pointer, output, context_);
  }
 private:
  internal::OriginPolicy_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::OriginPolicyState>
    : public mojo::internal::EnumHashImpl<::network::mojom::OriginPolicyState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::OriginPolicyState, ::network::mojom::OriginPolicyState> {
  static ::network::mojom::OriginPolicyState ToMojom(::network::mojom::OriginPolicyState input) { return input; }
  static bool FromMojom(::network::mojom::OriginPolicyState input, ::network::mojom::OriginPolicyState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::OriginPolicyState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::OriginPolicyState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::OriginPolicyState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::OriginPolicyContentsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::OriginPolicyContentsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::OriginPolicyContents_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::features(input)) in_features = Traits::features(input);
    typename decltype((*output)->features)::BaseType::BufferWriter
        features_writer;
    const mojo::internal::ContainerValidateParams features_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_features, buffer, &features_writer, &features_validate_params,
        context);
    (*output)->features.Set(
        features_writer.is_null() ? nullptr : features_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->features.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null features in OriginPolicyContents struct");
    decltype(Traits::content_security_policies(input)) in_content_security_policies = Traits::content_security_policies(input);
    typename decltype((*output)->content_security_policies)::BaseType::BufferWriter
        content_security_policies_writer;
    const mojo::internal::ContainerValidateParams content_security_policies_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_content_security_policies, buffer, &content_security_policies_writer, &content_security_policies_validate_params,
        context);
    (*output)->content_security_policies.Set(
        content_security_policies_writer.is_null() ? nullptr : content_security_policies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->content_security_policies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null content_security_policies in OriginPolicyContents struct");
    decltype(Traits::content_security_policies_report_only(input)) in_content_security_policies_report_only = Traits::content_security_policies_report_only(input);
    typename decltype((*output)->content_security_policies_report_only)::BaseType::BufferWriter
        content_security_policies_report_only_writer;
    const mojo::internal::ContainerValidateParams content_security_policies_report_only_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_content_security_policies_report_only, buffer, &content_security_policies_report_only_writer, &content_security_policies_report_only_validate_params,
        context);
    (*output)->content_security_policies_report_only.Set(
        content_security_policies_report_only_writer.is_null() ? nullptr : content_security_policies_report_only_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->content_security_policies_report_only.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null content_security_policies_report_only in OriginPolicyContents struct");
  }

  static bool Deserialize(::network::mojom::internal::OriginPolicyContents_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::OriginPolicyContentsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::OriginPolicyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::OriginPolicyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::OriginPolicy_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::OriginPolicyState>(
        Traits::state(input), &(*output)->state);
    decltype(Traits::policy_url(input)) in_policy_url = Traits::policy_url(input);
    typename decltype((*output)->policy_url)::BaseType::BufferWriter
        policy_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_policy_url, buffer, &policy_url_writer, context);
    (*output)->policy_url.Set(
        policy_url_writer.is_null() ? nullptr : policy_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->policy_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null policy_url in OriginPolicy struct");
    decltype(Traits::contents(input)) in_contents = Traits::contents(input);
    typename decltype((*output)->contents)::BaseType::BufferWriter
        contents_writer;
    mojo::internal::Serialize<::network::mojom::OriginPolicyContentsDataView>(
        in_contents, buffer, &contents_writer, context);
    (*output)->contents.Set(
        contents_writer.is_null() ? nullptr : contents_writer.data());
  }

  static bool Deserialize(::network::mojom::internal::OriginPolicy_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::OriginPolicyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void OriginPolicyContentsDataView::GetFeaturesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->features.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void OriginPolicyContentsDataView::GetContentSecurityPoliciesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->content_security_policies.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void OriginPolicyContentsDataView::GetContentSecurityPoliciesReportOnlyDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->content_security_policies_report_only.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void OriginPolicyDataView::GetPolicyUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->policy_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void OriginPolicyDataView::GetContentsDataView(
    OriginPolicyContentsDataView* output) {
  auto pointer = data_->contents.Get();
  *output = OriginPolicyContentsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_SHARED_H_