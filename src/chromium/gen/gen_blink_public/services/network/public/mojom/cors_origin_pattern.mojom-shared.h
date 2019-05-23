// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/cors_origin_pattern.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class CorsOriginPatternDataView;

class CorsOriginAccessPatternsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::CorsOriginPatternDataView> {
  using Data = ::network::mojom::internal::CorsOriginPattern_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::CorsOriginAccessPatternsDataView> {
  using Data = ::network::mojom::internal::CorsOriginAccessPatterns_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class CorsOriginAccessMatchMode : int32_t {
  
  kAllowSubdomains,
  
  kAllowRegistrableDomains,
  
  kDisallowSubdomains,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, CorsOriginAccessMatchMode value);
inline bool IsKnownEnumValue(CorsOriginAccessMatchMode value) {
  return internal::CorsOriginAccessMatchMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CorsOriginAccessMatchPriority : int32_t {
  
  kNoMatchingOrigin,
  
  kDefaultPriority,
  
  kLowPriority,
  
  kMediumPriority,
  
  kHighPriority,
  
  kMaxPriority,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, CorsOriginAccessMatchPriority value);
inline bool IsKnownEnumValue(CorsOriginAccessMatchPriority value) {
  return internal::CorsOriginAccessMatchPriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class CorsOriginPatternDataView {
 public:
  CorsOriginPatternDataView() {}

  CorsOriginPatternDataView(
      internal::CorsOriginPattern_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProtocolDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProtocol(UserType* output) {
    auto* pointer = data_->protocol.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDomainDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDomain(UserType* output) {
    auto* pointer = data_->domain.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::network::mojom::CorsOriginAccessMatchMode>(
        data_value, output);
  }

  CorsOriginAccessMatchMode mode() const {
    return static_cast<CorsOriginAccessMatchMode>(data_->mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::CorsOriginAccessMatchPriority>(
        data_value, output);
  }

  CorsOriginAccessMatchPriority priority() const {
    return static_cast<CorsOriginAccessMatchPriority>(data_->priority);
  }
 private:
  internal::CorsOriginPattern_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CorsOriginAccessPatternsDataView {
 public:
  CorsOriginAccessPatternsDataView() {}

  CorsOriginAccessPatternsDataView(
      internal::CorsOriginAccessPatterns_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceOriginDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceOrigin(UserType* output) {
    auto* pointer = data_->source_origin.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetAllowPatternsDataView(
      mojo::ArrayDataView<CorsOriginPatternDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAllowPatterns(UserType* output) {
    auto* pointer = data_->allow_patterns.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        pointer, output, context_);
  }
  inline void GetBlockPatternsDataView(
      mojo::ArrayDataView<CorsOriginPatternDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlockPatterns(UserType* output) {
    auto* pointer = data_->block_patterns.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CorsOriginAccessPatterns_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::CorsOriginAccessMatchMode>
    : public mojo::internal::EnumHashImpl<::network::mojom::CorsOriginAccessMatchMode> {};

template <>
struct hash<::network::mojom::CorsOriginAccessMatchPriority>
    : public mojo::internal::EnumHashImpl<::network::mojom::CorsOriginAccessMatchPriority> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::CorsOriginAccessMatchMode, ::network::mojom::CorsOriginAccessMatchMode> {
  static ::network::mojom::CorsOriginAccessMatchMode ToMojom(::network::mojom::CorsOriginAccessMatchMode input) { return input; }
  static bool FromMojom(::network::mojom::CorsOriginAccessMatchMode input, ::network::mojom::CorsOriginAccessMatchMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CorsOriginAccessMatchMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CorsOriginAccessMatchMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CorsOriginAccessMatchMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::CorsOriginAccessMatchPriority, ::network::mojom::CorsOriginAccessMatchPriority> {
  static ::network::mojom::CorsOriginAccessMatchPriority ToMojom(::network::mojom::CorsOriginAccessMatchPriority input) { return input; }
  static bool FromMojom(::network::mojom::CorsOriginAccessMatchPriority input, ::network::mojom::CorsOriginAccessMatchPriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CorsOriginAccessMatchPriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::CorsOriginAccessMatchPriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::CorsOriginAccessMatchPriority>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CorsOriginPatternDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CorsOriginPatternDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CorsOriginPattern_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::protocol(input)) in_protocol = Traits::protocol(input);
    typename decltype((*output)->protocol)::BaseType::BufferWriter
        protocol_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_protocol, buffer, &protocol_writer, context);
    (*output)->protocol.Set(
        protocol_writer.is_null() ? nullptr : protocol_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->protocol.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null protocol in CorsOriginPattern struct");
    decltype(Traits::domain(input)) in_domain = Traits::domain(input);
    typename decltype((*output)->domain)::BaseType::BufferWriter
        domain_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_domain, buffer, &domain_writer, context);
    (*output)->domain.Set(
        domain_writer.is_null() ? nullptr : domain_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->domain.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null domain in CorsOriginPattern struct");
    mojo::internal::Serialize<::network::mojom::CorsOriginAccessMatchMode>(
        Traits::mode(input), &(*output)->mode);
    mojo::internal::Serialize<::network::mojom::CorsOriginAccessMatchPriority>(
        Traits::priority(input), &(*output)->priority);
  }

  static bool Deserialize(::network::mojom::internal::CorsOriginPattern_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CorsOriginPatternDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::CorsOriginAccessPatternsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::CorsOriginAccessPatternsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::CorsOriginAccessPatterns_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::source_origin(input)) in_source_origin = Traits::source_origin(input);
    typename decltype((*output)->source_origin)::BaseType::BufferWriter
        source_origin_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_source_origin, buffer, &source_origin_writer, context);
    (*output)->source_origin.Set(
        source_origin_writer.is_null() ? nullptr : source_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source_origin in CorsOriginAccessPatterns struct");
    decltype(Traits::allow_patterns(input)) in_allow_patterns = Traits::allow_patterns(input);
    typename decltype((*output)->allow_patterns)::BaseType::BufferWriter
        allow_patterns_writer;
    const mojo::internal::ContainerValidateParams allow_patterns_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        in_allow_patterns, buffer, &allow_patterns_writer, &allow_patterns_validate_params,
        context);
    (*output)->allow_patterns.Set(
        allow_patterns_writer.is_null() ? nullptr : allow_patterns_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->allow_patterns.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null allow_patterns in CorsOriginAccessPatterns struct");
    decltype(Traits::block_patterns(input)) in_block_patterns = Traits::block_patterns(input);
    typename decltype((*output)->block_patterns)::BaseType::BufferWriter
        block_patterns_writer;
    const mojo::internal::ContainerValidateParams block_patterns_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::CorsOriginPatternDataView>>(
        in_block_patterns, buffer, &block_patterns_writer, &block_patterns_validate_params,
        context);
    (*output)->block_patterns.Set(
        block_patterns_writer.is_null() ? nullptr : block_patterns_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->block_patterns.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null block_patterns in CorsOriginAccessPatterns struct");
  }

  static bool Deserialize(::network::mojom::internal::CorsOriginAccessPatterns_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::CorsOriginAccessPatternsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void CorsOriginPatternDataView::GetProtocolDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->protocol.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CorsOriginPatternDataView::GetDomainDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->domain.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void CorsOriginAccessPatternsDataView::GetSourceOriginDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_origin.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void CorsOriginAccessPatternsDataView::GetAllowPatternsDataView(
    mojo::ArrayDataView<CorsOriginPatternDataView>* output) {
  auto pointer = data_->allow_patterns.Get();
  *output = mojo::ArrayDataView<CorsOriginPatternDataView>(pointer, context_);
}
inline void CorsOriginAccessPatternsDataView::GetBlockPatternsDataView(
    mojo::ArrayDataView<CorsOriginPatternDataView>* output) {
  auto pointer = data_->block_patterns.Get();
  *output = mojo::ArrayDataView<CorsOriginPatternDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_SHARED_H_