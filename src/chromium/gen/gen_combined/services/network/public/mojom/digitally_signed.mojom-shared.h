// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/digitally_signed.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class DigitallySignedDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::DigitallySignedDataView> {
  using Data = ::network::mojom::internal::DigitallySigned_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class HashAlgorithm : int32_t {
  
  HASH_ALGO_NONE = 0,
  
  HASH_ALGO_MD5 = 1,
  
  HASH_ALGO_SHA1 = 2,
  
  HASH_ALGO_SHA224 = 3,
  
  HASH_ALGO_SHA256 = 4,
  
  HASH_ALGO_SHA384 = 5,
  
  HASH_ALGO_SHA512 = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, HashAlgorithm value);
inline bool IsKnownEnumValue(HashAlgorithm value) {
  return internal::HashAlgorithm_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SignatureAlgorithm : int32_t {
  
  SIG_ALGO_ANONYMOUS = 0,
  
  SIG_ALGO_RSA = 1,
  
  SIG_ALGO_DSA = 2,
  
  SIG_ALGO_ECDSA = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, SignatureAlgorithm value);
inline bool IsKnownEnumValue(SignatureAlgorithm value) {
  return internal::SignatureAlgorithm_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class DigitallySignedDataView {
 public:
  DigitallySignedDataView() {}

  DigitallySignedDataView(
      internal::DigitallySigned_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHashAlgorithm(UserType* output) const {
    auto data_value = data_->hash_algorithm;
    return mojo::internal::Deserialize<::network::mojom::HashAlgorithm>(
        data_value, output);
  }

  HashAlgorithm hash_algorithm() const {
    return static_cast<HashAlgorithm>(data_->hash_algorithm);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignatureAlgorithm(UserType* output) const {
    auto data_value = data_->signature_algorithm;
    return mojo::internal::Deserialize<::network::mojom::SignatureAlgorithm>(
        data_value, output);
  }

  SignatureAlgorithm signature_algorithm() const {
    return static_cast<SignatureAlgorithm>(data_->signature_algorithm);
  }
  inline void GetSignatureDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::DigitallySigned_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::HashAlgorithm>
    : public mojo::internal::EnumHashImpl<::network::mojom::HashAlgorithm> {};

template <>
struct hash<::network::mojom::SignatureAlgorithm>
    : public mojo::internal::EnumHashImpl<::network::mojom::SignatureAlgorithm> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::HashAlgorithm, ::network::mojom::HashAlgorithm> {
  static ::network::mojom::HashAlgorithm ToMojom(::network::mojom::HashAlgorithm input) { return input; }
  static bool FromMojom(::network::mojom::HashAlgorithm input, ::network::mojom::HashAlgorithm* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HashAlgorithm, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::HashAlgorithm, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::HashAlgorithm>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::SignatureAlgorithm, ::network::mojom::SignatureAlgorithm> {
  static ::network::mojom::SignatureAlgorithm ToMojom(::network::mojom::SignatureAlgorithm input) { return input; }
  static bool FromMojom(::network::mojom::SignatureAlgorithm input, ::network::mojom::SignatureAlgorithm* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SignatureAlgorithm, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::SignatureAlgorithm, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::SignatureAlgorithm>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DigitallySignedDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::DigitallySignedDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::DigitallySigned_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::HashAlgorithm>(
        Traits::hash_algorithm(input), &(*output)->hash_algorithm);
    mojo::internal::Serialize<::network::mojom::SignatureAlgorithm>(
        Traits::signature_algorithm(input), &(*output)->signature_algorithm);
    decltype(Traits::signature(input)) in_signature = Traits::signature(input);
    typename decltype((*output)->signature)::BaseType::BufferWriter
        signature_writer;
    const mojo::internal::ContainerValidateParams signature_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_signature, buffer, &signature_writer, &signature_validate_params,
        context);
    (*output)->signature.Set(
        signature_writer.is_null() ? nullptr : signature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signature in DigitallySigned struct");
  }

  static bool Deserialize(::network::mojom::internal::DigitallySigned_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::DigitallySignedDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void DigitallySignedDataView::GetSignatureDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->signature.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DIGITALLY_SIGNED_MOJOM_SHARED_H_