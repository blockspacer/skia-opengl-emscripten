// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/presentation/presentation.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class PresentationInfoDataView;

class PresentationErrorDataView;

class PresentationConnectionResultDataView;

class PresentationConnectionMessageDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::PresentationInfoDataView> {
  using Data = ::blink::mojom::internal::PresentationInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PresentationErrorDataView> {
  using Data = ::blink::mojom::internal::PresentationError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PresentationConnectionResultDataView> {
  using Data = ::blink::mojom::internal::PresentationConnectionResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PresentationConnectionMessageDataView> {
  using Data = ::blink::mojom::internal::PresentationConnectionMessage_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ScreenAvailability : int32_t {
  
  UNKNOWN,
  
  UNAVAILABLE,
  
  SOURCE_NOT_SUPPORTED,
  
  DISABLED,
  
  AVAILABLE,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ScreenAvailability value);
inline bool IsKnownEnumValue(ScreenAvailability value) {
  return internal::ScreenAvailability_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PresentationConnectionState : int32_t {
  
  CONNECTING,
  
  CONNECTED,
  
  CLOSED,
  
  TERMINATED,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PresentationConnectionState value);
inline bool IsKnownEnumValue(PresentationConnectionState value) {
  return internal::PresentationConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PresentationConnectionCloseReason : int32_t {
  
  CONNECTION_ERROR,
  
  CLOSED,
  
  WENT_AWAY,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PresentationConnectionCloseReason value);
inline bool IsKnownEnumValue(PresentationConnectionCloseReason value) {
  return internal::PresentationConnectionCloseReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PresentationErrorType : int32_t {
  
  NO_AVAILABLE_SCREENS,
  
  PRESENTATION_REQUEST_CANCELLED,
  
  NO_PRESENTATION_FOUND,
  
  PREVIOUS_START_IN_PROGRESS,
  
  UNKNOWN,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PresentationErrorType value);
inline bool IsKnownEnumValue(PresentationErrorType value) {
  return internal::PresentationErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PresentationConnectionInterfaceBase {};

using PresentationConnectionPtrDataView =
    mojo::InterfacePtrDataView<PresentationConnectionInterfaceBase>;
using PresentationConnectionRequestDataView =
    mojo::InterfaceRequestDataView<PresentationConnectionInterfaceBase>;
using PresentationConnectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationConnectionInterfaceBase>;
using PresentationConnectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationConnectionInterfaceBase>;
class PresentationServiceInterfaceBase {};

using PresentationServicePtrDataView =
    mojo::InterfacePtrDataView<PresentationServiceInterfaceBase>;
using PresentationServiceRequestDataView =
    mojo::InterfaceRequestDataView<PresentationServiceInterfaceBase>;
using PresentationServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationServiceInterfaceBase>;
using PresentationServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationServiceInterfaceBase>;
class PresentationControllerInterfaceBase {};

using PresentationControllerPtrDataView =
    mojo::InterfacePtrDataView<PresentationControllerInterfaceBase>;
using PresentationControllerRequestDataView =
    mojo::InterfaceRequestDataView<PresentationControllerInterfaceBase>;
using PresentationControllerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationControllerInterfaceBase>;
using PresentationControllerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationControllerInterfaceBase>;
class PresentationReceiverInterfaceBase {};

using PresentationReceiverPtrDataView =
    mojo::InterfacePtrDataView<PresentationReceiverInterfaceBase>;
using PresentationReceiverRequestDataView =
    mojo::InterfaceRequestDataView<PresentationReceiverInterfaceBase>;
using PresentationReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PresentationReceiverInterfaceBase>;
using PresentationReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PresentationReceiverInterfaceBase>;
class PresentationInfoDataView {
 public:
  PresentationInfoDataView() {}

  PresentationInfoDataView(
      internal::PresentationInfo_Data* data,
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
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationErrorDataView {
 public:
  PresentationErrorDataView() {}

  PresentationErrorDataView(
      internal::PresentationError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::blink::mojom::PresentationErrorType>(
        data_value, output);
  }

  PresentationErrorType error_type() const {
    return static_cast<PresentationErrorType>(data_->error_type);
  }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PresentationError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationConnectionResultDataView {
 public:
  PresentationConnectionResultDataView() {}

  PresentationConnectionResultDataView(
      internal::PresentationConnectionResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPresentationInfoDataView(
      PresentationInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentationInfo(UserType* output) {
    auto* pointer = data_->presentation_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::PresentationInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeConnectionPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionPtrDataView>(
            &data_->connection_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeConnectionRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PresentationConnectionRequestDataView>(
            &data_->connection_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PresentationConnectionResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PresentationConnectionMessageDataView {
 public:
  using Tag = internal::PresentationConnectionMessage_Data::PresentationConnectionMessage_Tag;

  PresentationConnectionMessageDataView() {}

  PresentationConnectionMessageDataView(
      internal::PresentationConnectionMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_message() const { return data_->tag == Tag::MESSAGE; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    DCHECK(is_message());
    return mojo::internal::Deserialize<mojo::StringDataView>(
        data_->data.f_message.Get(), output, context_);
  }
  bool is_data() const { return data_->tag == Tag::DATA; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    DCHECK(is_data());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_data.Get(), output, context_);
  }

 private:
  internal::PresentationConnectionMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ScreenAvailability>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ScreenAvailability> {};

template <>
struct hash<::blink::mojom::PresentationConnectionState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationConnectionState> {};

template <>
struct hash<::blink::mojom::PresentationConnectionCloseReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationConnectionCloseReason> {};

template <>
struct hash<::blink::mojom::PresentationErrorType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationErrorType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ScreenAvailability, ::blink::mojom::ScreenAvailability> {
  static ::blink::mojom::ScreenAvailability ToMojom(::blink::mojom::ScreenAvailability input) { return input; }
  static bool FromMojom(::blink::mojom::ScreenAvailability input, ::blink::mojom::ScreenAvailability* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ScreenAvailability, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ScreenAvailability, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ScreenAvailability>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationConnectionState, ::blink::mojom::PresentationConnectionState> {
  static ::blink::mojom::PresentationConnectionState ToMojom(::blink::mojom::PresentationConnectionState input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationConnectionState input, ::blink::mojom::PresentationConnectionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationConnectionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationConnectionState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationConnectionCloseReason, ::blink::mojom::PresentationConnectionCloseReason> {
  static ::blink::mojom::PresentationConnectionCloseReason ToMojom(::blink::mojom::PresentationConnectionCloseReason input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationConnectionCloseReason input, ::blink::mojom::PresentationConnectionCloseReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionCloseReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationConnectionCloseReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationConnectionCloseReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationErrorType, ::blink::mojom::PresentationErrorType> {
  static ::blink::mojom::PresentationErrorType ToMojom(::blink::mojom::PresentationErrorType input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationErrorType input, ::blink::mojom::PresentationErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationErrorType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PresentationInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationInfo_Data::BufferWriter* output,
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
        "null url in PresentationInfo struct");
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PresentationInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::PresentationInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PresentationErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::PresentationErrorType>(
        Traits::error_type(input), &(*output)->error_type);
    decltype(Traits::message(input)) in_message = Traits::message(input);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in PresentationError struct");
  }

  static bool Deserialize(::blink::mojom::internal::PresentationError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PresentationConnectionResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationConnectionResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::presentation_info(input)) in_presentation_info = Traits::presentation_info(input);
    typename decltype((*output)->presentation_info)::BaseType::BufferWriter
        presentation_info_writer;
    mojo::internal::Serialize<::blink::mojom::PresentationInfoDataView>(
        in_presentation_info, buffer, &presentation_info_writer, context);
    (*output)->presentation_info.Set(
        presentation_info_writer.is_null() ? nullptr : presentation_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->presentation_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null presentation_info in PresentationConnectionResult struct");
    decltype(Traits::connection_ptr(input)) in_connection_ptr = Traits::connection_ptr(input);
    mojo::internal::Serialize<::blink::mojom::PresentationConnectionPtrDataView>(
        in_connection_ptr, &(*output)->connection_ptr, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->connection_ptr),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid connection_ptr in PresentationConnectionResult struct");
    decltype(Traits::connection_request(input)) in_connection_request = Traits::connection_request(input);
    mojo::internal::Serialize<::blink::mojom::PresentationConnectionRequestDataView>(
        in_connection_request, &(*output)->connection_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->connection_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid connection_request in PresentationConnectionResult struct");
  }

  static bool Deserialize(::blink::mojom::internal::PresentationConnectionResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationConnectionResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::PresentationConnectionMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PresentationConnectionMessage_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::PresentationConnectionMessage_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::PresentationConnectionMessageDataView::Tag::MESSAGE: {
        decltype(Traits::message(input))
            in_message = Traits::message(input);
        typename decltype(result->data.f_message)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<mojo::StringDataView>(
            in_message, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null message in PresentationConnectionMessage union");
        result->data.f_message.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::PresentationConnectionMessageDataView::Tag::DATA: {
        decltype(Traits::data(input))
            in_data = Traits::data(input);
        typename decltype(result->data.f_data)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams data_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_data, buffer, &value_writer, &data_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null data in PresentationConnectionMessage union");
        result->data.f_data.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::PresentationConnectionMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PresentationConnectionMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void PresentationInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PresentationInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PresentationConnectionResultDataView::GetPresentationInfoDataView(
    PresentationInfoDataView* output) {
  auto pointer = data_->presentation_info.Get();
  *output = PresentationInfoDataView(pointer, context_);
}


inline void PresentationConnectionMessageDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  DCHECK(is_message());
  *output = mojo::StringDataView(data_->data.f_message.Get(), context_);
}
inline void PresentationConnectionMessageDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_data());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_data.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_