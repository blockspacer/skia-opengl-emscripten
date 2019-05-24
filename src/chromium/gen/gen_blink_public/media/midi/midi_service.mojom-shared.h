// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_H_

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
#include "media/midi/midi_service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace midi {
namespace mojom {
class PortInfoDataView;



}  // namespace mojom
}  // namespace midi

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::midi::mojom::PortInfoDataView> {
  using Data = ::midi::mojom::internal::PortInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace midi {
namespace mojom {


enum class Result : int32_t {
  
  NOT_INITIALIZED,
  
  OK,
  
  NOT_SUPPORTED,
  
  INITIALIZATION_ERROR,
  
  MAX = Result::INITIALIZATION_ERROR,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, Result value);
inline bool IsKnownEnumValue(Result value) {
  return internal::Result_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PortState : int32_t {
  
  DISCONNECTED,
  
  CONNECTED,
  
  OPENED,
  
  LAST = PortState::OPENED,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, PortState value);
inline bool IsKnownEnumValue(PortState value) {
  return internal::PortState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class MidiSessionClientInterfaceBase {};

using MidiSessionClientPtrDataView =
    mojo::InterfacePtrDataView<MidiSessionClientInterfaceBase>;
using MidiSessionClientRequestDataView =
    mojo::InterfaceRequestDataView<MidiSessionClientInterfaceBase>;
using MidiSessionClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MidiSessionClientInterfaceBase>;
using MidiSessionClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MidiSessionClientInterfaceBase>;
class MidiSessionProviderInterfaceBase {};

using MidiSessionProviderPtrDataView =
    mojo::InterfacePtrDataView<MidiSessionProviderInterfaceBase>;
using MidiSessionProviderRequestDataView =
    mojo::InterfaceRequestDataView<MidiSessionProviderInterfaceBase>;
using MidiSessionProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MidiSessionProviderInterfaceBase>;
using MidiSessionProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MidiSessionProviderInterfaceBase>;
class MidiSessionInterfaceBase {};

using MidiSessionPtrDataView =
    mojo::InterfacePtrDataView<MidiSessionInterfaceBase>;
using MidiSessionRequestDataView =
    mojo::InterfaceRequestDataView<MidiSessionInterfaceBase>;
using MidiSessionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MidiSessionInterfaceBase>;
using MidiSessionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MidiSessionInterfaceBase>;
class PortInfoDataView {
 public:
  PortInfoDataView() {}

  PortInfoDataView(
      internal::PortInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetManufacturerDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadManufacturer(UserType* output) {
    auto* pointer = data_->manufacturer.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetVersionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersion(UserType* output) {
    auto* pointer = data_->version.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::midi::mojom::PortState>(
        data_value, output);
  }

  PortState state() const {
    return static_cast<PortState>(data_->state);
  }
 private:
  internal::PortInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace midi

namespace std {

template <>
struct hash<::midi::mojom::Result>
    : public mojo::internal::EnumHashImpl<::midi::mojom::Result> {};

template <>
struct hash<::midi::mojom::PortState>
    : public mojo::internal::EnumHashImpl<::midi::mojom::PortState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::midi::mojom::Result, ::midi::mojom::Result> {
  static ::midi::mojom::Result ToMojom(::midi::mojom::Result input) { return input; }
  static bool FromMojom(::midi::mojom::Result input, ::midi::mojom::Result* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::midi::mojom::Result, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::midi::mojom::Result, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::midi::mojom::Result>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::midi::mojom::PortState, ::midi::mojom::PortState> {
  static ::midi::mojom::PortState ToMojom(::midi::mojom::PortState input) { return input; }
  static bool FromMojom(::midi::mojom::PortState input, ::midi::mojom::PortState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::midi::mojom::PortState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::midi::mojom::PortState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::midi::mojom::PortState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::midi::mojom::PortInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::midi::mojom::PortInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::midi::mojom::internal::PortInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null id in PortInfo struct");
    decltype(Traits::manufacturer(input)) in_manufacturer = Traits::manufacturer(input);
    typename decltype((*output)->manufacturer)::BaseType::BufferWriter
        manufacturer_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_manufacturer, buffer, &manufacturer_writer, context);
    (*output)->manufacturer.Set(
        manufacturer_writer.is_null() ? nullptr : manufacturer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->manufacturer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null manufacturer in PortInfo struct");
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PortInfo struct");
    decltype(Traits::version(input)) in_version = Traits::version(input);
    typename decltype((*output)->version)::BaseType::BufferWriter
        version_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_version, buffer, &version_writer, context);
    (*output)->version.Set(
        version_writer.is_null() ? nullptr : version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null version in PortInfo struct");
    mojo::internal::Serialize<::midi::mojom::PortState>(
        Traits::state(input), &(*output)->state);
  }

  static bool Deserialize(::midi::mojom::internal::PortInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::midi::mojom::PortInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace midi {
namespace mojom {

inline void PortInfoDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PortInfoDataView::GetManufacturerDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->manufacturer.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PortInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PortInfoDataView::GetVersionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->version.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_H_