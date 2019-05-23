// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/net/ip_address_space.mojom-shared.h"
#include "third_party/blink/public/mojom/csp/content_security_policy.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SharedWorkerInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SharedWorkerInfoDataView> {
  using Data = ::blink::mojom::internal::SharedWorkerInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class SharedWorkerInfoDataView {
 public:
  SharedWorkerInfoDataView() {}

  SharedWorkerInfoDataView(
      internal::SharedWorkerInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentSecurityPolicyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentSecurityPolicy(UserType* output) {
    auto* pointer = data_->content_security_policy.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentSecurityPolicyType(UserType* output) const {
    auto data_value = data_->content_security_policy_type;
    return mojo::internal::Deserialize<::blink::mojom::ContentSecurityPolicyType>(
        data_value, output);
  }

  ::blink::mojom::ContentSecurityPolicyType content_security_policy_type() const {
    return static_cast<::blink::mojom::ContentSecurityPolicyType>(data_->content_security_policy_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationAddressSpace(UserType* output) const {
    auto data_value = data_->creation_address_space;
    return mojo::internal::Deserialize<::blink::mojom::IPAddressSpace>(
        data_value, output);
  }

  ::blink::mojom::IPAddressSpace creation_address_space() const {
    return static_cast<::blink::mojom::IPAddressSpace>(data_->creation_address_space);
  }
 private:
  internal::SharedWorkerInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SharedWorkerInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SharedWorkerInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SharedWorkerInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in SharedWorkerInfo struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in SharedWorkerInfo struct");
    decltype(Traits::content_security_policy(input)) in_content_security_policy = Traits::content_security_policy(input);
    typename decltype((*output)->content_security_policy)::BaseType::BufferWriter
        content_security_policy_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_content_security_policy, buffer, &content_security_policy_writer, context);
    (*output)->content_security_policy.Set(
        content_security_policy_writer.is_null() ? nullptr : content_security_policy_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->content_security_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null content_security_policy in SharedWorkerInfo struct");
    mojo::internal::Serialize<::blink::mojom::ContentSecurityPolicyType>(
        Traits::content_security_policy_type(input), &(*output)->content_security_policy_type);
    mojo::internal::Serialize<::blink::mojom::IPAddressSpace>(
        Traits::creation_address_space(input), &(*output)->creation_address_space);
  }

  static bool Deserialize(::blink::mojom::internal::SharedWorkerInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SharedWorkerInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SharedWorkerInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void SharedWorkerInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SharedWorkerInfoDataView::GetContentSecurityPolicyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_security_policy.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_SHARED_H_