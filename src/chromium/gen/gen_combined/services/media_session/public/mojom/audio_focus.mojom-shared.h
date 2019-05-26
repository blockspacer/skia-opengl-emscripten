// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_H_

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
#include "services/media_session/public/mojom/audio_focus.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/media_session/public/mojom/media_session.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media_session {
namespace mojom {
class AudioFocusRequestStateDataView;



}  // namespace mojom
}  // namespace media_session

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::media_session::mojom::AudioFocusRequestStateDataView> {
  using Data = ::media_session::mojom::internal::AudioFocusRequestState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace media_session {
namespace mojom {


enum class EnforcementMode : int32_t {
  
  kDefault,
  
  kNone,
  
  kSingleGroup,
  
  kSingleSession,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, EnforcementMode value);
inline bool IsKnownEnumValue(EnforcementMode value) {
  return internal::EnforcementMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AudioFocusType : int32_t {
  
  kGain,
  
  kGainTransientMayDuck,
  
  kGainTransient,
  
  kAmbient,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, AudioFocusType value);
inline bool IsKnownEnumValue(AudioFocusType value) {
  return internal::AudioFocusType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AudioFocusObserverInterfaceBase {};

using AudioFocusObserverPtrDataView =
    mojo::InterfacePtrDataView<AudioFocusObserverInterfaceBase>;
using AudioFocusObserverRequestDataView =
    mojo::InterfaceRequestDataView<AudioFocusObserverInterfaceBase>;
using AudioFocusObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioFocusObserverInterfaceBase>;
using AudioFocusObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioFocusObserverInterfaceBase>;
class AudioFocusRequestClientInterfaceBase {};

using AudioFocusRequestClientPtrDataView =
    mojo::InterfacePtrDataView<AudioFocusRequestClientInterfaceBase>;
using AudioFocusRequestClientRequestDataView =
    mojo::InterfaceRequestDataView<AudioFocusRequestClientInterfaceBase>;
using AudioFocusRequestClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioFocusRequestClientInterfaceBase>;
using AudioFocusRequestClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioFocusRequestClientInterfaceBase>;
class AudioFocusManagerInterfaceBase {};

using AudioFocusManagerPtrDataView =
    mojo::InterfacePtrDataView<AudioFocusManagerInterfaceBase>;
using AudioFocusManagerRequestDataView =
    mojo::InterfaceRequestDataView<AudioFocusManagerInterfaceBase>;
using AudioFocusManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioFocusManagerInterfaceBase>;
using AudioFocusManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioFocusManagerInterfaceBase>;
class AudioFocusManagerDebugInterfaceBase {};

using AudioFocusManagerDebugPtrDataView =
    mojo::InterfacePtrDataView<AudioFocusManagerDebugInterfaceBase>;
using AudioFocusManagerDebugRequestDataView =
    mojo::InterfaceRequestDataView<AudioFocusManagerDebugInterfaceBase>;
using AudioFocusManagerDebugAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AudioFocusManagerDebugInterfaceBase>;
using AudioFocusManagerDebugAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AudioFocusManagerDebugInterfaceBase>;
class AudioFocusRequestStateDataView {
 public:
  AudioFocusRequestStateDataView() {}

  AudioFocusRequestStateDataView(
      internal::AudioFocusRequestState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionInfoDataView(
      ::media_session::mojom::MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionInfo(UserType* output) {
    auto* pointer = data_->session_info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAudioFocusType(UserType* output) const {
    auto data_value = data_->audio_focus_type;
    return mojo::internal::Deserialize<::media_session::mojom::AudioFocusType>(
        data_value, output);
  }

  AudioFocusType audio_focus_type() const {
    return static_cast<AudioFocusType>(data_->audio_focus_type);
  }
  inline void GetSourceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceName(UserType* output) {
    auto* pointer = data_->header_.version >= 2
                    ? data_->source_name.Get() : nullptr;
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRequestIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestId(UserType* output) {
    auto* pointer = data_->header_.version >= 3
                    ? data_->request_id.Get() : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusRequestState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media_session

namespace std {

template <>
struct hash<::media_session::mojom::EnforcementMode>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::EnforcementMode> {};

template <>
struct hash<::media_session::mojom::AudioFocusType>
    : public mojo::internal::EnumHashImpl<::media_session::mojom::AudioFocusType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media_session::mojom::EnforcementMode, ::media_session::mojom::EnforcementMode> {
  static ::media_session::mojom::EnforcementMode ToMojom(::media_session::mojom::EnforcementMode input) { return input; }
  static bool FromMojom(::media_session::mojom::EnforcementMode input, ::media_session::mojom::EnforcementMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::EnforcementMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::EnforcementMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::EnforcementMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media_session::mojom::AudioFocusType, ::media_session::mojom::AudioFocusType> {
  static ::media_session::mojom::AudioFocusType ToMojom(::media_session::mojom::AudioFocusType input) { return input; }
  static bool FromMojom(::media_session::mojom::AudioFocusType input, ::media_session::mojom::AudioFocusType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::AudioFocusType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media_session::mojom::AudioFocusType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media_session::mojom::AudioFocusType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media_session::mojom::AudioFocusRequestStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media_session::mojom::AudioFocusRequestStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media_session::mojom::internal::AudioFocusRequestState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::session_info(input)) in_session_info = Traits::session_info(input);
    typename decltype((*output)->session_info)::BaseType::BufferWriter
        session_info_writer;
    mojo::internal::Serialize<::media_session::mojom::MediaSessionInfoDataView>(
        in_session_info, buffer, &session_info_writer, context);
    (*output)->session_info.Set(
        session_info_writer.is_null() ? nullptr : session_info_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->session_info.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null session_info in AudioFocusRequestState struct");
    mojo::internal::Serialize<::media_session::mojom::AudioFocusType>(
        Traits::audio_focus_type(input), &(*output)->audio_focus_type);
    decltype(Traits::source_name(input)) in_source_name = Traits::source_name(input);
    typename decltype((*output)->source_name)::BaseType::BufferWriter
        source_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_source_name, buffer, &source_name_writer, context);
    (*output)->source_name.Set(
        source_name_writer.is_null() ? nullptr : source_name_writer.data());
    decltype(Traits::request_id(input)) in_request_id = Traits::request_id(input);
    typename decltype((*output)->request_id)::BaseType::BufferWriter
        request_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_request_id, buffer, &request_id_writer, context);
    (*output)->request_id.Set(
        request_id_writer.is_null() ? nullptr : request_id_writer.data());
  }

  static bool Deserialize(::media_session::mojom::internal::AudioFocusRequestState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media_session::mojom::AudioFocusRequestStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media_session {
namespace mojom {

inline void AudioFocusRequestStateDataView::GetSessionInfoDataView(
    ::media_session::mojom::MediaSessionInfoDataView* output) {
  auto pointer = data_->session_info.Get();
  *output = ::media_session::mojom::MediaSessionInfoDataView(pointer, context_);
}
inline void AudioFocusRequestStateDataView::GetSourceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->header_.version >= 2
                 ? data_->source_name.Get() : nullptr;
  *output = mojo::StringDataView(pointer, context_);
}
inline void AudioFocusRequestStateDataView::GetRequestIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->header_.version >= 3
                 ? data_->request_id.Get() : nullptr;
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_H_