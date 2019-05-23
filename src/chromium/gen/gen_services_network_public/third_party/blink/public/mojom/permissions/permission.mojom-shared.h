// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/permissions/permission.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/permissions/permission_status.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class MidiPermissionDescriptorDataView;

class ClipboardPermissionDescriptorDataView;

class PermissionDescriptorDataView;

class PermissionDescriptorExtensionDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::MidiPermissionDescriptorDataView> {
  using Data = ::blink::mojom::internal::MidiPermissionDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ClipboardPermissionDescriptorDataView> {
  using Data = ::blink::mojom::internal::ClipboardPermissionDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PermissionDescriptorDataView> {
  using Data = ::blink::mojom::internal::PermissionDescriptor_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PermissionDescriptorExtensionDataView> {
  using Data = ::blink::mojom::internal::PermissionDescriptorExtension_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class PermissionName : int32_t {
  
  GEOLOCATION,
  
  NOTIFICATIONS,
  
  MIDI,
  
  PROTECTED_MEDIA_IDENTIFIER,
  
  DURABLE_STORAGE,
  
  AUDIO_CAPTURE,
  
  VIDEO_CAPTURE,
  
  BACKGROUND_SYNC,
  
  SENSORS,
  
  ACCESSIBILITY_EVENTS,
  
  CLIPBOARD_READ,
  
  CLIPBOARD_WRITE,
  
  PAYMENT_HANDLER,
  
  BACKGROUND_FETCH,
  
  IDLE_DETECTION,
  
  PERIODIC_BACKGROUND_SYNC,
  kMinValue = 0,
  kMaxValue = 15,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PermissionName value);
inline bool IsKnownEnumValue(PermissionName value) {
  return internal::PermissionName_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class PermissionObserverInterfaceBase {};

using PermissionObserverPtrDataView =
    mojo::InterfacePtrDataView<PermissionObserverInterfaceBase>;
using PermissionObserverRequestDataView =
    mojo::InterfaceRequestDataView<PermissionObserverInterfaceBase>;
using PermissionObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PermissionObserverInterfaceBase>;
using PermissionObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PermissionObserverInterfaceBase>;
class PermissionServiceInterfaceBase {};

using PermissionServicePtrDataView =
    mojo::InterfacePtrDataView<PermissionServiceInterfaceBase>;
using PermissionServiceRequestDataView =
    mojo::InterfaceRequestDataView<PermissionServiceInterfaceBase>;
using PermissionServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PermissionServiceInterfaceBase>;
using PermissionServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PermissionServiceInterfaceBase>;
class MidiPermissionDescriptorDataView {
 public:
  MidiPermissionDescriptorDataView() {}

  MidiPermissionDescriptorDataView(
      internal::MidiPermissionDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool sysex() const {
    return data_->sysex;
  }
 private:
  internal::MidiPermissionDescriptor_Data* data_ = nullptr;
};

class ClipboardPermissionDescriptorDataView {
 public:
  ClipboardPermissionDescriptorDataView() {}

  ClipboardPermissionDescriptorDataView(
      internal::ClipboardPermissionDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allowWithoutGesture() const {
    return data_->allowWithoutGesture;
  }
 private:
  internal::ClipboardPermissionDescriptor_Data* data_ = nullptr;
};

class PermissionDescriptorDataView {
 public:
  PermissionDescriptorDataView() {}

  PermissionDescriptorDataView(
      internal::PermissionDescriptor_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) const {
    auto data_value = data_->name;
    return mojo::internal::Deserialize<::blink::mojom::PermissionName>(
        data_value, output);
  }

  PermissionName name() const {
    return static_cast<PermissionName>(data_->name);
  }
  inline void GetExtensionDataView(
      PermissionDescriptorExtensionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtension(UserType* output) {
    auto* pointer = !data_->extension.is_null() ? &data_->extension : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::PermissionDescriptorExtensionDataView>(
        pointer, output, context_);
  }
 private:
  internal::PermissionDescriptor_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PermissionDescriptorExtensionDataView {
 public:
  using Tag = internal::PermissionDescriptorExtension_Data::PermissionDescriptorExtension_Tag;

  PermissionDescriptorExtensionDataView() {}

  PermissionDescriptorExtensionDataView(
      internal::PermissionDescriptorExtension_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_midi() const { return data_->tag == Tag::MIDI; }
  inline void GetMidiDataView(
      MidiPermissionDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMidi(UserType* output) {
    DCHECK(is_midi());
    return mojo::internal::Deserialize<::blink::mojom::MidiPermissionDescriptorDataView>(
        data_->data.f_midi.Get(), output, context_);
  }
  bool is_clipboard() const { return data_->tag == Tag::CLIPBOARD; }
  inline void GetClipboardDataView(
      ClipboardPermissionDescriptorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClipboard(UserType* output) {
    DCHECK(is_clipboard());
    return mojo::internal::Deserialize<::blink::mojom::ClipboardPermissionDescriptorDataView>(
        data_->data.f_clipboard.Get(), output, context_);
  }

 private:
  internal::PermissionDescriptorExtension_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PermissionName>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PermissionName> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PermissionName, ::blink::mojom::PermissionName> {
  static ::blink::mojom::PermissionName ToMojom(::blink::mojom::PermissionName input) { return input; }
  static bool FromMojom(::blink::mojom::PermissionName input, ::blink::mojom::PermissionName* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PermissionName, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PermissionName, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PermissionName>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::MidiPermissionDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::MidiPermissionDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::MidiPermissionDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->sysex = Traits::sysex(input);
  }

  static bool Deserialize(::blink::mojom::internal::MidiPermissionDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::MidiPermissionDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ClipboardPermissionDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ClipboardPermissionDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ClipboardPermissionDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->allowWithoutGesture = Traits::allowWithoutGesture(input);
  }

  static bool Deserialize(::blink::mojom::internal::ClipboardPermissionDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ClipboardPermissionDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PermissionDescriptorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PermissionDescriptorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PermissionDescriptor_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::PermissionName>(
        Traits::name(input), &(*output)->name);
    decltype(Traits::extension(input)) in_extension = Traits::extension(input);
    typename decltype((*output)->extension)::BufferWriter extension_writer;
    extension_writer.AllocateInline(buffer, &(*output)->extension);
    mojo::internal::Serialize<::blink::mojom::PermissionDescriptorExtensionDataView>(
        in_extension, buffer, &extension_writer, true, context);
  }

  static bool Deserialize(::blink::mojom::internal::PermissionDescriptor_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PermissionDescriptorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PermissionDescriptorExtensionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::PermissionDescriptorExtensionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PermissionDescriptorExtension_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::PermissionDescriptorExtension_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::PermissionDescriptorExtensionDataView::Tag::MIDI: {
        decltype(Traits::midi(input))
            in_midi = Traits::midi(input);
        typename decltype(result->data.f_midi)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::MidiPermissionDescriptorDataView>(
            in_midi, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null midi in PermissionDescriptorExtension union");
        result->data.f_midi.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::PermissionDescriptorExtensionDataView::Tag::CLIPBOARD: {
        decltype(Traits::clipboard(input))
            in_clipboard = Traits::clipboard(input);
        typename decltype(result->data.f_clipboard)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::ClipboardPermissionDescriptorDataView>(
            in_clipboard, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null clipboard in PermissionDescriptorExtension union");
        result->data.f_clipboard.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::PermissionDescriptorExtension_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PermissionDescriptorExtensionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {





inline void PermissionDescriptorDataView::GetExtensionDataView(
    PermissionDescriptorExtensionDataView* output) {
  auto pointer = &data_->extension;
  *output = PermissionDescriptorExtensionDataView(pointer, context_);
}


inline void PermissionDescriptorExtensionDataView::GetMidiDataView(
    MidiPermissionDescriptorDataView* output) {
  DCHECK(is_midi());
  *output = MidiPermissionDescriptorDataView(data_->data.f_midi.Get(), context_);
}
inline void PermissionDescriptorExtensionDataView::GetClipboardDataView(
    ClipboardPermissionDescriptorDataView* output) {
  DCHECK(is_clipboard());
  *output = ClipboardPermissionDescriptorDataView(data_->data.f_clipboard.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_PERMISSION_MOJOM_SHARED_H_