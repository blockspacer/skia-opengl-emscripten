// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class PushSubscriptionOptionsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::PushSubscriptionOptionsDataView> {
  using Data = ::blink::mojom::internal::PushSubscriptionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class PushErrorType : int32_t {
  
  ABORT = 0,
  
  NETWORK = 1,
  
  NONE = 2,
  
  NOT_ALLOWED = 3,
  
  NOT_FOUND = 4,
  
  NOT_SUPPORTED = 5,
  
  INVALID_STATE = 6,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PushErrorType value);
inline bool IsKnownEnumValue(PushErrorType value) {
  return internal::PushErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PushMessagingInterfaceBase {};

using PushMessagingPtrDataView =
    mojo::InterfacePtrDataView<PushMessagingInterfaceBase>;
using PushMessagingRequestDataView =
    mojo::InterfaceRequestDataView<PushMessagingInterfaceBase>;
using PushMessagingAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PushMessagingInterfaceBase>;
using PushMessagingAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PushMessagingInterfaceBase>;
class PushSubscriptionOptionsDataView {
 public:
  PushSubscriptionOptionsDataView() {}

  PushSubscriptionOptionsDataView(
      internal::PushSubscriptionOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool user_visible_only() const {
    return data_->user_visible_only;
  }
  inline void GetApplicationServerKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadApplicationServerKey(UserType* output) {
    auto* pointer = data_->application_server_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PushSubscriptionOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PushErrorType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PushErrorType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PushErrorType, ::blink::mojom::PushErrorType> {
  static ::blink::mojom::PushErrorType ToMojom(::blink::mojom::PushErrorType input) { return input; }
  static bool FromMojom(::blink::mojom::PushErrorType input, ::blink::mojom::PushErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PushErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PushErrorType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PushSubscriptionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PushSubscriptionOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PushSubscriptionOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->user_visible_only = Traits::user_visible_only(input);
    decltype(Traits::application_server_key(input)) in_application_server_key = Traits::application_server_key(input);
    typename decltype((*output)->application_server_key)::BaseType::BufferWriter
        application_server_key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_application_server_key, buffer, &application_server_key_writer, context);
    (*output)->application_server_key.Set(
        application_server_key_writer.is_null() ? nullptr : application_server_key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->application_server_key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null application_server_key in PushSubscriptionOptions struct");
  }

  static bool Deserialize(::blink::mojom::internal::PushSubscriptionOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PushSubscriptionOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void PushSubscriptionOptionsDataView::GetApplicationServerKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->application_server_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_SHARED_H_