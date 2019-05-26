// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_

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
#include "services/device/public/mojom/serial.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class SerialPortInfoDataView;

class SerialConnectionOptionsDataView;

class SerialConnectionInfoDataView;

class SerialHostControlSignalsDataView;

class SerialPortControlSignalsDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::SerialPortInfoDataView> {
  using Data = ::device::mojom::internal::SerialPortInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialConnectionOptionsDataView> {
  using Data = ::device::mojom::internal::SerialConnectionOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialConnectionInfoDataView> {
  using Data = ::device::mojom::internal::SerialConnectionInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialHostControlSignalsDataView> {
  using Data = ::device::mojom::internal::SerialHostControlSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::device::mojom::SerialPortControlSignalsDataView> {
  using Data = ::device::mojom::internal::SerialPortControlSignals_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {


enum class SerialSendError : int32_t {
  
  NONE,
  
  DISCONNECTED,
  
  PENDING,
  
  TIMEOUT,
  
  SYSTEM_ERROR,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, SerialSendError value);
inline bool IsKnownEnumValue(SerialSendError value) {
  return internal::SerialSendError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialReceiveError : int32_t {
  
  NONE,
  
  DISCONNECTED,
  
  TIMEOUT,
  
  DEVICE_LOST,
  
  BREAK,
  
  FRAME_ERROR,
  
  OVERRUN,
  
  BUFFER_OVERFLOW,
  
  PARITY_ERROR,
  
  SYSTEM_ERROR,
  kMinValue = 0,
  kMaxValue = 9,
};

 std::ostream& operator<<(std::ostream& os, SerialReceiveError value);
inline bool IsKnownEnumValue(SerialReceiveError value) {
  return internal::SerialReceiveError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialDataBits : int32_t {
  
  NONE,
  
  SEVEN,
  
  EIGHT,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SerialDataBits value);
inline bool IsKnownEnumValue(SerialDataBits value) {
  return internal::SerialDataBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialParityBit : int32_t {
  
  NONE,
  
  NO_PARITY,
  
  ODD,
  
  EVEN,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, SerialParityBit value);
inline bool IsKnownEnumValue(SerialParityBit value) {
  return internal::SerialParityBit_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SerialStopBits : int32_t {
  
  NONE,
  
  ONE,
  
  TWO,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, SerialStopBits value);
inline bool IsKnownEnumValue(SerialStopBits value) {
  return internal::SerialStopBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class SerialPortManagerInterfaceBase {};

using SerialPortManagerPtrDataView =
    mojo::InterfacePtrDataView<SerialPortManagerInterfaceBase>;
using SerialPortManagerRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortManagerInterfaceBase>;
using SerialPortManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortManagerInterfaceBase>;
using SerialPortManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortManagerInterfaceBase>;
class SerialPortInterfaceBase {};

using SerialPortPtrDataView =
    mojo::InterfacePtrDataView<SerialPortInterfaceBase>;
using SerialPortRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortInterfaceBase>;
using SerialPortAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortInterfaceBase>;
using SerialPortAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortInterfaceBase>;
class SerialPortClientInterfaceBase {};

using SerialPortClientPtrDataView =
    mojo::InterfacePtrDataView<SerialPortClientInterfaceBase>;
using SerialPortClientRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortClientInterfaceBase>;
using SerialPortClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortClientInterfaceBase>;
using SerialPortClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortClientInterfaceBase>;
class SerialPortConnectionWatcherInterfaceBase {};

using SerialPortConnectionWatcherPtrDataView =
    mojo::InterfacePtrDataView<SerialPortConnectionWatcherInterfaceBase>;
using SerialPortConnectionWatcherRequestDataView =
    mojo::InterfaceRequestDataView<SerialPortConnectionWatcherInterfaceBase>;
using SerialPortConnectionWatcherAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SerialPortConnectionWatcherInterfaceBase>;
using SerialPortConnectionWatcherAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SerialPortConnectionWatcherInterfaceBase>;
class SerialPortInfoDataView {
 public:
  SerialPortInfoDataView() {}

  SerialPortInfoDataView(
      internal::SerialPortInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialPortInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialConnectionOptionsDataView {
 public:
  SerialConnectionOptionsDataView() {}

  SerialConnectionOptionsDataView(
      internal::SerialConnectionOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataBits(UserType* output) const {
    auto data_value = data_->data_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialDataBits>(
        data_value, output);
  }

  SerialDataBits data_bits() const {
    return static_cast<SerialDataBits>(data_->data_bits);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParityBit(UserType* output) const {
    auto data_value = data_->parity_bit;
    return mojo::internal::Deserialize<::device::mojom::SerialParityBit>(
        data_value, output);
  }

  SerialParityBit parity_bit() const {
    return static_cast<SerialParityBit>(data_->parity_bit);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStopBits(UserType* output) const {
    auto data_value = data_->stop_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialStopBits>(
        data_value, output);
  }

  SerialStopBits stop_bits() const {
    return static_cast<SerialStopBits>(data_->stop_bits);
  }
  bool cts_flow_control() const {
    return data_->cts_flow_control;
  }
  bool has_cts_flow_control() const {
    return data_->has_cts_flow_control;
  }
 private:
  internal::SerialConnectionOptions_Data* data_ = nullptr;
};

class SerialConnectionInfoDataView {
 public:
  SerialConnectionInfoDataView() {}

  SerialConnectionInfoDataView(
      internal::SerialConnectionInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t bitrate() const {
    return data_->bitrate;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDataBits(UserType* output) const {
    auto data_value = data_->data_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialDataBits>(
        data_value, output);
  }

  SerialDataBits data_bits() const {
    return static_cast<SerialDataBits>(data_->data_bits);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParityBit(UserType* output) const {
    auto data_value = data_->parity_bit;
    return mojo::internal::Deserialize<::device::mojom::SerialParityBit>(
        data_value, output);
  }

  SerialParityBit parity_bit() const {
    return static_cast<SerialParityBit>(data_->parity_bit);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStopBits(UserType* output) const {
    auto data_value = data_->stop_bits;
    return mojo::internal::Deserialize<::device::mojom::SerialStopBits>(
        data_value, output);
  }

  SerialStopBits stop_bits() const {
    return static_cast<SerialStopBits>(data_->stop_bits);
  }
  bool cts_flow_control() const {
    return data_->cts_flow_control;
  }
 private:
  internal::SerialConnectionInfo_Data* data_ = nullptr;
};

class SerialHostControlSignalsDataView {
 public:
  SerialHostControlSignalsDataView() {}

  SerialHostControlSignalsDataView(
      internal::SerialHostControlSignals_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool dtr() const {
    return data_->dtr;
  }
  bool has_dtr() const {
    return data_->has_dtr;
  }
  bool rts() const {
    return data_->rts;
  }
  bool has_rts() const {
    return data_->has_rts;
  }
 private:
  internal::SerialHostControlSignals_Data* data_ = nullptr;
};

class SerialPortControlSignalsDataView {
 public:
  SerialPortControlSignalsDataView() {}

  SerialPortControlSignalsDataView(
      internal::SerialPortControlSignals_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool dcd() const {
    return data_->dcd;
  }
  bool cts() const {
    return data_->cts;
  }
  bool ri() const {
    return data_->ri;
  }
  bool dsr() const {
    return data_->dsr;
  }
 private:
  internal::SerialPortControlSignals_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::SerialSendError>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialSendError> {};

template <>
struct hash<::device::mojom::SerialReceiveError>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialReceiveError> {};

template <>
struct hash<::device::mojom::SerialDataBits>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialDataBits> {};

template <>
struct hash<::device::mojom::SerialParityBit>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialParityBit> {};

template <>
struct hash<::device::mojom::SerialStopBits>
    : public mojo::internal::EnumHashImpl<::device::mojom::SerialStopBits> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::SerialSendError, ::device::mojom::SerialSendError> {
  static ::device::mojom::SerialSendError ToMojom(::device::mojom::SerialSendError input) { return input; }
  static bool FromMojom(::device::mojom::SerialSendError input, ::device::mojom::SerialSendError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialSendError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialSendError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialSendError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialReceiveError, ::device::mojom::SerialReceiveError> {
  static ::device::mojom::SerialReceiveError ToMojom(::device::mojom::SerialReceiveError input) { return input; }
  static bool FromMojom(::device::mojom::SerialReceiveError input, ::device::mojom::SerialReceiveError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialReceiveError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialReceiveError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialReceiveError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialDataBits, ::device::mojom::SerialDataBits> {
  static ::device::mojom::SerialDataBits ToMojom(::device::mojom::SerialDataBits input) { return input; }
  static bool FromMojom(::device::mojom::SerialDataBits input, ::device::mojom::SerialDataBits* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialDataBits, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialDataBits, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialDataBits>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialParityBit, ::device::mojom::SerialParityBit> {
  static ::device::mojom::SerialParityBit ToMojom(::device::mojom::SerialParityBit input) { return input; }
  static bool FromMojom(::device::mojom::SerialParityBit input, ::device::mojom::SerialParityBit* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialParityBit, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialParityBit, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialParityBit>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::mojom::SerialStopBits, ::device::mojom::SerialStopBits> {
  static ::device::mojom::SerialStopBits ToMojom(::device::mojom::SerialStopBits input) { return input; }
  static bool FromMojom(::device::mojom::SerialStopBits input, ::device::mojom::SerialStopBits* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialStopBits, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::SerialStopBits, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::SerialStopBits>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialPortInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialPortInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialPortInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::token(input)) in_token = Traits::token(input);
    typename decltype((*output)->token)::BaseType::BufferWriter
        token_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_token, buffer, &token_writer, context);
    (*output)->token.Set(
        token_writer.is_null() ? nullptr : token_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null token in SerialPortInfo struct");
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in SerialPortInfo struct");
    (*output)->vendor_id = Traits::vendor_id(input);
    (*output)->has_vendor_id = Traits::has_vendor_id(input);
    (*output)->product_id = Traits::product_id(input);
    (*output)->has_product_id = Traits::has_product_id(input);
    decltype(Traits::display_name(input)) in_display_name = Traits::display_name(input);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
  }

  static bool Deserialize(::device::mojom::internal::SerialPortInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialPortInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialConnectionOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialConnectionOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialConnectionOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->bitrate = Traits::bitrate(input);
    mojo::internal::Serialize<::device::mojom::SerialDataBits>(
        Traits::data_bits(input), &(*output)->data_bits);
    mojo::internal::Serialize<::device::mojom::SerialParityBit>(
        Traits::parity_bit(input), &(*output)->parity_bit);
    mojo::internal::Serialize<::device::mojom::SerialStopBits>(
        Traits::stop_bits(input), &(*output)->stop_bits);
    (*output)->cts_flow_control = Traits::cts_flow_control(input);
    (*output)->has_cts_flow_control = Traits::has_cts_flow_control(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialConnectionOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialConnectionOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialConnectionInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialConnectionInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialConnectionInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->bitrate = Traits::bitrate(input);
    mojo::internal::Serialize<::device::mojom::SerialDataBits>(
        Traits::data_bits(input), &(*output)->data_bits);
    mojo::internal::Serialize<::device::mojom::SerialParityBit>(
        Traits::parity_bit(input), &(*output)->parity_bit);
    mojo::internal::Serialize<::device::mojom::SerialStopBits>(
        Traits::stop_bits(input), &(*output)->stop_bits);
    (*output)->cts_flow_control = Traits::cts_flow_control(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialConnectionInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialConnectionInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialHostControlSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialHostControlSignalsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialHostControlSignals_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->dtr = Traits::dtr(input);
    (*output)->has_dtr = Traits::has_dtr(input);
    (*output)->rts = Traits::rts(input);
    (*output)->has_rts = Traits::has_rts(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialHostControlSignals_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialHostControlSignalsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::SerialPortControlSignalsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::SerialPortControlSignalsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::SerialPortControlSignals_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->dcd = Traits::dcd(input);
    (*output)->cts = Traits::cts(input);
    (*output)->ri = Traits::ri(input);
    (*output)->dsr = Traits::dsr(input);
  }

  static bool Deserialize(::device::mojom::internal::SerialPortControlSignals_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::SerialPortControlSignalsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {

inline void SerialPortInfoDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void SerialPortInfoDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void SerialPortInfoDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}











}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_H_