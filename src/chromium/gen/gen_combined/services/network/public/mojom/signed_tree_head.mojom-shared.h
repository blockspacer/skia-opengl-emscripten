// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/signed_tree_head.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/digitally_signed.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class SignedTreeHeadDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::SignedTreeHeadDataView> {
  using Data = ::network::mojom::internal::SignedTreeHead_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class SignedTreeHeadVersion : int32_t {
  
  V1 = 0,
  kMinValue = 0,
  kMaxValue = 0,
};

 std::ostream& operator<<(std::ostream& os, SignedTreeHeadVersion value);
inline bool IsKnownEnumValue(SignedTreeHeadVersion value) {
  return internal::SignedTreeHeadVersion_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SignedTreeHeadDataView {
 public:
  SignedTreeHeadDataView() {}

  SignedTreeHeadDataView(
      internal::SignedTreeHead_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersion(UserType* output) const {
    auto data_value = data_->version;
    return mojo::internal::Deserialize<::network::mojom::SignedTreeHeadVersion>(
        data_value, output);
  }

  SignedTreeHeadVersion version() const {
    return static_cast<SignedTreeHeadVersion>(data_->version);
  }
  inline void GetTimestampDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimestamp(UserType* output) {
    auto* pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  uint64_t tree_size() const {
    return data_->tree_size;
  }
  inline void GetSha256RootHashDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSha256RootHash(UserType* output) {
    auto* pointer = data_->sha256_root_hash.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSignatureDataView(
      ::network::mojom::DigitallySignedDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignature(UserType* output) {
    auto* pointer = data_->signature.Get();
    return mojo::internal::Deserialize<::network::mojom::DigitallySignedDataView>(
        pointer, output, context_);
  }
  inline void GetLogIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLogId(UserType* output) {
    auto* pointer = data_->log_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SignedTreeHead_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::SignedTreeHeadVersion>
    : public mojo::internal::EnumHashImpl<::network::mojom::SignedTreeHeadVersion> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::SignedTreeHeadVersion, ::network::mojom::SignedTreeHeadVersion> {
  static ::network::mojom::SignedTreeHeadVersion ToMojom(::network::mojom::SignedTreeHeadVersion input) { return input; }
  static bool FromMojom(::network::mojom::SignedTreeHeadVersion input, ::network::mojom::SignedTreeHeadVersion* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SignedTreeHeadVersion, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::SignedTreeHeadVersion, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::SignedTreeHeadVersion>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::SignedTreeHeadDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::SignedTreeHeadDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::SignedTreeHead_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::SignedTreeHeadVersion>(
        Traits::version(input), &(*output)->version);
    decltype(Traits::timestamp(input)) in_timestamp = Traits::timestamp(input);
    typename decltype((*output)->timestamp)::BaseType::BufferWriter
        timestamp_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_timestamp, buffer, &timestamp_writer, context);
    (*output)->timestamp.Set(
        timestamp_writer.is_null() ? nullptr : timestamp_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->timestamp.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null timestamp in SignedTreeHead struct");
    (*output)->tree_size = Traits::tree_size(input);
    decltype(Traits::sha256_root_hash(input)) in_sha256_root_hash = Traits::sha256_root_hash(input);
    typename decltype((*output)->sha256_root_hash)::BaseType::BufferWriter
        sha256_root_hash_writer;
    const mojo::internal::ContainerValidateParams sha256_root_hash_validate_params(
        32, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_sha256_root_hash, buffer, &sha256_root_hash_writer, &sha256_root_hash_validate_params,
        context);
    (*output)->sha256_root_hash.Set(
        sha256_root_hash_writer.is_null() ? nullptr : sha256_root_hash_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sha256_root_hash.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sha256_root_hash in SignedTreeHead struct");
    decltype(Traits::signature(input)) in_signature = Traits::signature(input);
    typename decltype((*output)->signature)::BaseType::BufferWriter
        signature_writer;
    mojo::internal::Serialize<::network::mojom::DigitallySignedDataView>(
        in_signature, buffer, &signature_writer, context);
    (*output)->signature.Set(
        signature_writer.is_null() ? nullptr : signature_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->signature.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null signature in SignedTreeHead struct");
    decltype(Traits::log_id(input)) in_log_id = Traits::log_id(input);
    typename decltype((*output)->log_id)::BaseType::BufferWriter
        log_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_log_id, buffer, &log_id_writer, context);
    (*output)->log_id.Set(
        log_id_writer.is_null() ? nullptr : log_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->log_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null log_id in SignedTreeHead struct");
  }

  static bool Deserialize(::network::mojom::internal::SignedTreeHead_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::SignedTreeHeadDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void SignedTreeHeadDataView::GetTimestampDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void SignedTreeHeadDataView::GetSha256RootHashDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->sha256_root_hash.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void SignedTreeHeadDataView::GetSignatureDataView(
    ::network::mojom::DigitallySignedDataView* output) {
  auto pointer = data_->signature.Get();
  *output = ::network::mojom::DigitallySignedDataView(pointer, context_);
}
inline void SignedTreeHeadDataView::GetLogIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->log_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SIGNED_TREE_HEAD_MOJOM_SHARED_H_