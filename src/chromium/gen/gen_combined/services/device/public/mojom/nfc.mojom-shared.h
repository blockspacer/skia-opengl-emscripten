// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/nfc.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class NFCErrorDataView;

class NDEFRecordDataView;

class NDEFMessageDataView;

class NFCPushOptionsDataView;

class NDEFRecordTypeFilterDataView;

class NFCWatchOptionsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::NFCErrorDataView> {
  using Data = ::device::mojom::internal::NFCError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::NDEFRecordDataView> {
  using Data = ::device::mojom::internal::NDEFRecord_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::NDEFMessageDataView> {
  using Data = ::device::mojom::internal::NDEFMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::NFCPushOptionsDataView> {
  using Data = ::device::mojom::internal::NFCPushOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::NDEFRecordTypeFilterDataView> {
  using Data = ::device::mojom::internal::NDEFRecordTypeFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::NFCWatchOptionsDataView> {
  using Data = ::device::mojom::internal::NFCWatchOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class NFCErrorType : int32_t {
  
  SECURITY,
  
  NOT_SUPPORTED,
  
  DEVICE_DISABLED,
  
  NOT_FOUND,
  
  INVALID_MESSAGE,
  
  OPERATION_CANCELLED,
  
  TIMER_EXPIRED,
  
  CANNOT_CANCEL,
  
  IO_ERROR,
  kMinValue = 0,
  kMaxValue = 8,
};

 std::ostream& operator<<(std::ostream& os, NFCErrorType value);
inline bool IsKnownEnumValue(NFCErrorType value) {
  return internal::NFCErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NDEFRecordType : int32_t {
  
  EMPTY,
  
  TEXT,
  
  URL,
  
  JSON,
  
  OPAQUE_RECORD,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, NDEFRecordType value);
inline bool IsKnownEnumValue(NDEFRecordType value) {
  return internal::NDEFRecordType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NFCPushTarget : int32_t {
  
  TAG,
  
  PEER,
  
  ANY,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, NFCPushTarget value);
inline bool IsKnownEnumValue(NFCPushTarget value) {
  return internal::NFCPushTarget_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NFCWatchMode : int32_t {
  
  WEBNFC_ONLY,
  
  ANY,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, NFCWatchMode value);
inline bool IsKnownEnumValue(NFCWatchMode value) {
  return internal::NFCWatchMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NFCInterfaceBase {};

using NFCPtrDataView =
    mojo::InterfacePtrDataView<NFCInterfaceBase>;
using NFCRequestDataView =
    mojo::InterfaceRequestDataView<NFCInterfaceBase>;
using NFCAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NFCInterfaceBase>;
using NFCAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NFCInterfaceBase>;
class NFCClientInterfaceBase {};

using NFCClientPtrDataView =
    mojo::InterfacePtrDataView<NFCClientInterfaceBase>;
using NFCClientRequestDataView =
    mojo::InterfaceRequestDataView<NFCClientInterfaceBase>;
using NFCClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NFCClientInterfaceBase>;
using NFCClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NFCClientInterfaceBase>;
class NFCErrorDataView {
 public:
  NFCErrorDataView() {}

  NFCErrorDataView(
      internal::NFCError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrorType(UserType* output) const {
    auto data_value = data_->error_type;
    return mojo::internal::Deserialize<::device::mojom::NFCErrorType>(
        data_value, output);
  }

  NFCErrorType error_type() const {
    return static_cast<NFCErrorType>(data_->error_type);
  }
 private:
  internal::NFCError_Data* data_ = nullptr;
};

class NDEFRecordDataView {
 public:
  NDEFRecordDataView() {}

  NDEFRecordDataView(
      internal::NDEFRecord_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordType(UserType* output) const {
    auto data_value = data_->record_type;
    return mojo::internal::Deserialize<::device::mojom::NDEFRecordType>(
        data_value, output);
  }

  NDEFRecordType record_type() const {
    return static_cast<NDEFRecordType>(data_->record_type);
  }
  inline void GetMediaTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaType(UserType* output) {
    auto* pointer = data_->media_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::NDEFRecord_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NDEFMessageDataView {
 public:
  NDEFMessageDataView() {}

  NDEFMessageDataView(
      internal::NDEFMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<NDEFRecordDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::NDEFRecordDataView>>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NDEFMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NFCPushOptionsDataView {
 public:
  NFCPushOptionsDataView() {}

  NFCPushOptionsDataView(
      internal::NFCPushOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTarget(UserType* output) const {
    auto data_value = data_->target;
    return mojo::internal::Deserialize<::device::mojom::NFCPushTarget>(
        data_value, output);
  }

  NFCPushTarget target() const {
    return static_cast<NFCPushTarget>(data_->target);
  }
  double timeout() const {
    return data_->timeout;
  }
  bool ignore_read() const {
    return data_->ignore_read;
  }
 private:
  internal::NFCPushOptions_Data* data_ = nullptr;
};

class NDEFRecordTypeFilterDataView {
 public:
  NDEFRecordTypeFilterDataView() {}

  NDEFRecordTypeFilterDataView(
      internal::NDEFRecordTypeFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordType(UserType* output) const {
    auto data_value = data_->record_type;
    return mojo::internal::Deserialize<::device::mojom::NDEFRecordType>(
        data_value, output);
  }

  NDEFRecordType record_type() const {
    return static_cast<NDEFRecordType>(data_->record_type);
  }
 private:
  internal::NDEFRecordTypeFilter_Data* data_ = nullptr;
};

class NFCWatchOptionsDataView {
 public:
  NFCWatchOptionsDataView() {}

  NFCWatchOptionsDataView(
      internal::NFCWatchOptions_Data* data,
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
  inline void GetRecordFilterDataView(
      NDEFRecordTypeFilterDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRecordFilter(UserType* output) {
    auto* pointer = data_->record_filter.Get();
    return mojo::internal::Deserialize<::device::mojom::NDEFRecordTypeFilterDataView>(
        pointer, output, context_);
  }
  inline void GetMediaTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaType(UserType* output) {
    auto* pointer = data_->media_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::device::mojom::NFCWatchMode>(
        data_value, output);
  }

  NFCWatchMode mode() const {
    return static_cast<NFCWatchMode>(data_->mode);
  }
 private:
  internal::NFCWatchOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::NFCErrorType>
    : public mojo::internal::EnumHashImpl<::device::mojom::NFCErrorType> {};

template <>
struct hash<::device::mojom::NDEFRecordType>
    : public mojo::internal::EnumHashImpl<::device::mojom::NDEFRecordType> {};

template <>
struct hash<::device::mojom::NFCPushTarget>
    : public mojo::internal::EnumHashImpl<::device::mojom::NFCPushTarget> {};

template <>
struct hash<::device::mojom::NFCWatchMode>
    : public mojo::internal::EnumHashImpl<::device::mojom::NFCWatchMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::NFCErrorType, ::device::mojom::NFCErrorType> {
  static ::device::mojom::NFCErrorType ToMojom(::device::mojom::NFCErrorType input) { return input; }
  static bool FromMojom(::device::mojom::NFCErrorType input, ::device::mojom::NFCErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NFCErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::NFCErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::NFCErrorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::NDEFRecordType, ::device::mojom::NDEFRecordType> {
  static ::device::mojom::NDEFRecordType ToMojom(::device::mojom::NDEFRecordType input) { return input; }
  static bool FromMojom(::device::mojom::NDEFRecordType input, ::device::mojom::NDEFRecordType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NDEFRecordType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::NDEFRecordType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::NDEFRecordType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::NFCPushTarget, ::device::mojom::NFCPushTarget> {
  static ::device::mojom::NFCPushTarget ToMojom(::device::mojom::NFCPushTarget input) { return input; }
  static bool FromMojom(::device::mojom::NFCPushTarget input, ::device::mojom::NFCPushTarget* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NFCPushTarget, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::NFCPushTarget, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::NFCPushTarget>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::NFCWatchMode, ::device::mojom::NFCWatchMode> {
  static ::device::mojom::NFCWatchMode ToMojom(::device::mojom::NFCWatchMode input) { return input; }
  static bool FromMojom(::device::mojom::NFCWatchMode input, ::device::mojom::NFCWatchMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NFCWatchMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::NFCWatchMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::NFCWatchMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NFCErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::NFCErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::NFCError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::NFCErrorType>(
        Traits::error_type(input), &(*output)->error_type);
  }

  static bool Deserialize(::device::mojom::internal::NFCError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::NFCErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NDEFRecordDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::NDEFRecordDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::NDEFRecord_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::NDEFRecordType>(
        Traits::record_type(input), &(*output)->record_type);
    decltype(Traits::media_type(input)) in_media_type = Traits::media_type(input);
    typename decltype((*output)->media_type)::BaseType::BufferWriter
        media_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_media_type, buffer, &media_type_writer, context);
    (*output)->media_type.Set(
        media_type_writer.is_null() ? nullptr : media_type_writer.data());
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in NDEFRecord struct");
  }

  static bool Deserialize(::device::mojom::internal::NDEFRecord_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::NDEFRecordDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NDEFMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::NDEFMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::NDEFMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::data(input)) in_data = Traits::data(input);
    typename decltype((*output)->data)::BaseType::BufferWriter
        data_writer;
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::device::mojom::NDEFRecordDataView>>(
        in_data, buffer, &data_writer, &data_validate_params,
        context);
    (*output)->data.Set(
        data_writer.is_null() ? nullptr : data_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in NDEFMessage struct");
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::NDEFMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::NDEFMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NFCPushOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::NFCPushOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::NFCPushOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::NFCPushTarget>(
        Traits::target(input), &(*output)->target);
    (*output)->timeout = Traits::timeout(input);
    (*output)->ignore_read = Traits::ignore_read(input);
  }

  static bool Deserialize(::device::mojom::internal::NFCPushOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::NFCPushOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NDEFRecordTypeFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::NDEFRecordTypeFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::NDEFRecordTypeFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::device::mojom::NDEFRecordType>(
        Traits::record_type(input), &(*output)->record_type);
  }

  static bool Deserialize(::device::mojom::internal::NDEFRecordTypeFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::NDEFRecordTypeFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::NFCWatchOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::NFCWatchOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::NFCWatchOptions_Data::BufferWriter* output,
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
    decltype(Traits::record_filter(input)) in_record_filter = Traits::record_filter(input);
    typename decltype((*output)->record_filter)::BaseType::BufferWriter
        record_filter_writer;
    mojo::internal::Serialize<::device::mojom::NDEFRecordTypeFilterDataView>(
        in_record_filter, buffer, &record_filter_writer, context);
    (*output)->record_filter.Set(
        record_filter_writer.is_null() ? nullptr : record_filter_writer.data());
    decltype(Traits::media_type(input)) in_media_type = Traits::media_type(input);
    typename decltype((*output)->media_type)::BaseType::BufferWriter
        media_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_media_type, buffer, &media_type_writer, context);
    (*output)->media_type.Set(
        media_type_writer.is_null() ? nullptr : media_type_writer.data());
    mojo::internal::Serialize<::device::mojom::NFCWatchMode>(
        Traits::mode(input), &(*output)->mode);
  }

  static bool Deserialize(::device::mojom::internal::NFCWatchOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::NFCWatchOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {



inline void NDEFRecordDataView::GetMediaTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NDEFRecordDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void NDEFMessageDataView::GetDataDataView(
    mojo::ArrayDataView<NDEFRecordDataView>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<NDEFRecordDataView>(pointer, context_);
}
inline void NDEFMessageDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void NFCWatchOptionsDataView::GetUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NFCWatchOptionsDataView::GetRecordFilterDataView(
    NDEFRecordTypeFilterDataView* output) {
  auto pointer = data_->record_filter.Get();
  *output = NDEFRecordTypeFilterDataView(pointer, context_);
}
inline void NFCWatchOptionsDataView::GetMediaTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->media_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_H_