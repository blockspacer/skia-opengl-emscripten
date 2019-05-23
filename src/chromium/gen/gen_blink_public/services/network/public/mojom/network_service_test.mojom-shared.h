// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_service_test.mojom-shared-internal.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom-shared.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/network_types.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class RuleDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::RuleDataView> {
  using Data = ::network::mojom::internal::Rule_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class ResolverType : int32_t {
  
  kResolverTypeFail,
  
  kResolverTypeSystem,
  
  kResolverTypeIPLiteral,
  
  kResolverTypeDirectLookup,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ResolverType value);
inline bool IsKnownEnumValue(ResolverType value) {
  return internal::ResolverType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NetworkServiceTest_ShouldRequireCT : int32_t {
  
  RESET = 0,
  
  REQUIRE = 1,
  
  DONT_REQUIRE = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, NetworkServiceTest_ShouldRequireCT value);
inline bool IsKnownEnumValue(NetworkServiceTest_ShouldRequireCT value) {
  return internal::NetworkServiceTest_ShouldRequireCT_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NetworkServiceTestInterfaceBase {};

using NetworkServiceTestPtrDataView =
    mojo::InterfacePtrDataView<NetworkServiceTestInterfaceBase>;
using NetworkServiceTestRequestDataView =
    mojo::InterfaceRequestDataView<NetworkServiceTestInterfaceBase>;
using NetworkServiceTestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkServiceTestInterfaceBase>;
using NetworkServiceTestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkServiceTestInterfaceBase>;
class RuleDataView {
 public:
  RuleDataView() {}

  RuleDataView(
      internal::Rule_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResolverType(UserType* output) const {
    auto data_value = data_->resolver_type;
    return mojo::internal::Deserialize<::network::mojom::ResolverType>(
        data_value, output);
  }

  ResolverType resolver_type() const {
    return static_cast<ResolverType>(data_->resolver_type);
  }
  inline void GetHostPatternDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHostPattern(UserType* output) {
    auto* pointer = data_->host_pattern.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetReplacementDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReplacement(UserType* output) {
    auto* pointer = data_->replacement.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Rule_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::ResolverType>
    : public mojo::internal::EnumHashImpl<::network::mojom::ResolverType> {};

template <>
struct hash<::network::mojom::NetworkServiceTest_ShouldRequireCT>
    : public mojo::internal::EnumHashImpl<::network::mojom::NetworkServiceTest_ShouldRequireCT> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::ResolverType, ::network::mojom::ResolverType> {
  static ::network::mojom::ResolverType ToMojom(::network::mojom::ResolverType input) { return input; }
  static bool FromMojom(::network::mojom::ResolverType input, ::network::mojom::ResolverType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ResolverType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::ResolverType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::ResolverType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::NetworkServiceTest_ShouldRequireCT, ::network::mojom::NetworkServiceTest_ShouldRequireCT> {
  static ::network::mojom::NetworkServiceTest_ShouldRequireCT ToMojom(::network::mojom::NetworkServiceTest_ShouldRequireCT input) { return input; }
  static bool FromMojom(::network::mojom::NetworkServiceTest_ShouldRequireCT input, ::network::mojom::NetworkServiceTest_ShouldRequireCT* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkServiceTest_ShouldRequireCT, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::NetworkServiceTest_ShouldRequireCT, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::NetworkServiceTest_ShouldRequireCT>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::RuleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::RuleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::Rule_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::ResolverType>(
        Traits::resolver_type(input), &(*output)->resolver_type);
    decltype(Traits::host_pattern(input)) in_host_pattern = Traits::host_pattern(input);
    typename decltype((*output)->host_pattern)::BaseType::BufferWriter
        host_pattern_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_host_pattern, buffer, &host_pattern_writer, context);
    (*output)->host_pattern.Set(
        host_pattern_writer.is_null() ? nullptr : host_pattern_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->host_pattern.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host_pattern in Rule struct");
    decltype(Traits::replacement(input)) in_replacement = Traits::replacement(input);
    typename decltype((*output)->replacement)::BaseType::BufferWriter
        replacement_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_replacement, buffer, &replacement_writer, context);
    (*output)->replacement.Set(
        replacement_writer.is_null() ? nullptr : replacement_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->replacement.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null replacement in Rule struct");
  }

  static bool Deserialize(::network::mojom::internal::Rule_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::RuleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void RuleDataView::GetHostPatternDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host_pattern.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void RuleDataView::GetReplacementDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->replacement.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_TEST_MOJOM_SHARED_H_