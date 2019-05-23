// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/frame/navigation_initiator.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SourceLocationDataView;

class CSPViolationParamsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SourceLocationDataView> {
  using Data = ::blink::mojom::internal::SourceLocation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::CSPViolationParamsDataView> {
  using Data = ::blink::mojom::internal::CSPViolationParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class WebContentSecurityPolicyType : int32_t {
  
  WebContentSecurityPolicyTypeReport,
  
  WebContentSecurityPolicyTypeEnforce,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, WebContentSecurityPolicyType value);
inline bool IsKnownEnumValue(WebContentSecurityPolicyType value) {
  return internal::WebContentSecurityPolicyType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NavigationInitiatorInterfaceBase {};

using NavigationInitiatorPtrDataView =
    mojo::InterfacePtrDataView<NavigationInitiatorInterfaceBase>;
using NavigationInitiatorRequestDataView =
    mojo::InterfaceRequestDataView<NavigationInitiatorInterfaceBase>;
using NavigationInitiatorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NavigationInitiatorInterfaceBase>;
using NavigationInitiatorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NavigationInitiatorInterfaceBase>;
class SourceLocationDataView {
 public:
  SourceLocationDataView() {}

  SourceLocationDataView(
      internal::SourceLocation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t line_number() const {
    return data_->line_number;
  }
  uint32_t column_number() const {
    return data_->column_number;
  }
 private:
  internal::SourceLocation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CSPViolationParamsDataView {
 public:
  CSPViolationParamsDataView() {}

  CSPViolationParamsDataView(
      internal::CSPViolationParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDirectiveDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirective(UserType* output) {
    auto* pointer = data_->directive.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetEffectiveDirectiveDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEffectiveDirective(UserType* output) {
    auto* pointer = data_->effective_directive.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetConsoleMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConsoleMessage(UserType* output) {
    auto* pointer = data_->console_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetBlockedUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlockedUrl(UserType* output) {
    auto* pointer = data_->blocked_url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetReportEndpointsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReportEndpoints(UserType* output) {
    auto* pointer = data_->report_endpoints.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  bool use_reporting_api() const {
    return data_->use_reporting_api;
  }
  inline void GetHeaderDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeader(UserType* output) {
    auto* pointer = data_->header.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisposition(UserType* output) const {
    auto data_value = data_->disposition;
    return mojo::internal::Deserialize<::blink::mojom::WebContentSecurityPolicyType>(
        data_value, output);
  }

  WebContentSecurityPolicyType disposition() const {
    return static_cast<WebContentSecurityPolicyType>(data_->disposition);
  }
  bool after_redirect() const {
    return data_->after_redirect;
  }
  inline void GetSourceLocationDataView(
      SourceLocationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceLocation(UserType* output) {
    auto* pointer = data_->source_location.Get();
    return mojo::internal::Deserialize<::blink::mojom::SourceLocationDataView>(
        pointer, output, context_);
  }
 private:
  internal::CSPViolationParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebContentSecurityPolicyType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebContentSecurityPolicyType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebContentSecurityPolicyType, ::blink::mojom::WebContentSecurityPolicyType> {
  static ::blink::mojom::WebContentSecurityPolicyType ToMojom(::blink::mojom::WebContentSecurityPolicyType input) { return input; }
  static bool FromMojom(::blink::mojom::WebContentSecurityPolicyType input, ::blink::mojom::WebContentSecurityPolicyType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebContentSecurityPolicyType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebContentSecurityPolicyType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebContentSecurityPolicyType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SourceLocationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SourceLocationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SourceLocation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in SourceLocation struct");
    (*output)->line_number = Traits::line_number(input);
    (*output)->column_number = Traits::column_number(input);
  }

  static bool Deserialize(::blink::mojom::internal::SourceLocation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SourceLocationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::CSPViolationParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::CSPViolationParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::CSPViolationParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::directive(input)) in_directive = Traits::directive(input);
    typename decltype((*output)->directive)::BaseType::BufferWriter
        directive_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_directive, buffer, &directive_writer, context);
    (*output)->directive.Set(
        directive_writer.is_null() ? nullptr : directive_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->directive.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null directive in CSPViolationParams struct");
    decltype(Traits::effective_directive(input)) in_effective_directive = Traits::effective_directive(input);
    typename decltype((*output)->effective_directive)::BaseType::BufferWriter
        effective_directive_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_effective_directive, buffer, &effective_directive_writer, context);
    (*output)->effective_directive.Set(
        effective_directive_writer.is_null() ? nullptr : effective_directive_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->effective_directive.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null effective_directive in CSPViolationParams struct");
    decltype(Traits::console_message(input)) in_console_message = Traits::console_message(input);
    typename decltype((*output)->console_message)::BaseType::BufferWriter
        console_message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_console_message, buffer, &console_message_writer, context);
    (*output)->console_message.Set(
        console_message_writer.is_null() ? nullptr : console_message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->console_message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null console_message in CSPViolationParams struct");
    decltype(Traits::blocked_url(input)) in_blocked_url = Traits::blocked_url(input);
    typename decltype((*output)->blocked_url)::BaseType::BufferWriter
        blocked_url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_blocked_url, buffer, &blocked_url_writer, context);
    (*output)->blocked_url.Set(
        blocked_url_writer.is_null() ? nullptr : blocked_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->blocked_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null blocked_url in CSPViolationParams struct");
    decltype(Traits::report_endpoints(input)) in_report_endpoints = Traits::report_endpoints(input);
    typename decltype((*output)->report_endpoints)::BaseType::BufferWriter
        report_endpoints_writer;
    const mojo::internal::ContainerValidateParams report_endpoints_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_report_endpoints, buffer, &report_endpoints_writer, &report_endpoints_validate_params,
        context);
    (*output)->report_endpoints.Set(
        report_endpoints_writer.is_null() ? nullptr : report_endpoints_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->report_endpoints.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null report_endpoints in CSPViolationParams struct");
    (*output)->use_reporting_api = Traits::use_reporting_api(input);
    decltype(Traits::header(input)) in_header = Traits::header(input);
    typename decltype((*output)->header)::BaseType::BufferWriter
        header_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_header, buffer, &header_writer, context);
    (*output)->header.Set(
        header_writer.is_null() ? nullptr : header_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->header.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null header in CSPViolationParams struct");
    mojo::internal::Serialize<::blink::mojom::WebContentSecurityPolicyType>(
        Traits::disposition(input), &(*output)->disposition);
    (*output)->after_redirect = Traits::after_redirect(input);
    decltype(Traits::source_location(input)) in_source_location = Traits::source_location(input);
    typename decltype((*output)->source_location)::BaseType::BufferWriter
        source_location_writer;
    mojo::internal::Serialize<::blink::mojom::SourceLocationDataView>(
        in_source_location, buffer, &source_location_writer, context);
    (*output)->source_location.Set(
        source_location_writer.is_null() ? nullptr : source_location_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source_location.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source_location in CSPViolationParams struct");
  }

  static bool Deserialize(::blink::mojom::internal::CSPViolationParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::CSPViolationParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SourceLocationDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CSPViolationParamsDataView::GetDirectiveDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->directive.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CSPViolationParamsDataView::GetEffectiveDirectiveDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->effective_directive.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CSPViolationParamsDataView::GetConsoleMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->console_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CSPViolationParamsDataView::GetBlockedUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->blocked_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CSPViolationParamsDataView::GetReportEndpointsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->report_endpoints.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void CSPViolationParamsDataView::GetHeaderDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CSPViolationParamsDataView::GetSourceLocationDataView(
    SourceLocationDataView* output) {
  auto pointer = data_->source_location.Get();
  *output = SourceLocationDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_NAVIGATION_INITIATOR_MOJOM_SHARED_H_