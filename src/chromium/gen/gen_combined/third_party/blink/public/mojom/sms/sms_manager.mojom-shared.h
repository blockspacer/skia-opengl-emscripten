// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/sms/sms_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SmsMessageDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SmsMessageDataView> {
  using Data = ::blink::mojom::internal::SmsMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class SmsStatus : int32_t {
  
  kSuccess,
  
  kTimeout,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, SmsStatus value);
inline bool IsKnownEnumValue(SmsStatus value) {
  return internal::SmsStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SmsManagerInterfaceBase {};

using SmsManagerPtrDataView =
    mojo::InterfacePtrDataView<SmsManagerInterfaceBase>;
using SmsManagerRequestDataView =
    mojo::InterfaceRequestDataView<SmsManagerInterfaceBase>;
using SmsManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SmsManagerInterfaceBase>;
using SmsManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SmsManagerInterfaceBase>;
class SmsMessageDataView {
 public:
  SmsMessageDataView() {}

  SmsMessageDataView(
      internal::SmsMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::SmsStatus>(
        data_value, output);
  }

  SmsStatus status() const {
    return static_cast<SmsStatus>(data_->status);
  }
  inline void GetContentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContent(UserType* output) {
    auto* pointer = data_->content.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SmsMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::SmsStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::SmsStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::SmsStatus, ::blink::mojom::SmsStatus> {
  static ::blink::mojom::SmsStatus ToMojom(::blink::mojom::SmsStatus input) { return input; }
  static bool FromMojom(::blink::mojom::SmsStatus input, ::blink::mojom::SmsStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SmsStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::SmsStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::SmsStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SmsMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SmsMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SmsMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::SmsStatus>(
        Traits::status(input), &(*output)->status);
    decltype(Traits::content(input)) in_content = Traits::content(input);
    typename decltype((*output)->content)::BaseType::BufferWriter
        content_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_content, buffer, &content_writer, context);
    (*output)->content.Set(
        content_writer.is_null() ? nullptr : content_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::SmsMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SmsMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SmsMessageDataView::GetContentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_SHARED_H_