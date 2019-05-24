// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/mojo/interfaces/display_media_information.mojom-shared.h"
#include "media/mojo/interfaces/display_media_information.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct media_mojom_internal_DisplayCaptureSurfaceType_DataHashFn {
  static unsigned GetHash(const ::media::mojom::DisplayCaptureSurfaceType& value) {
    using utype = std::underlying_type<::media::mojom::DisplayCaptureSurfaceType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::DisplayCaptureSurfaceType& left, const ::media::mojom::DisplayCaptureSurfaceType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::DisplayCaptureSurfaceType>
    : public GenericHashTraits<::media::mojom::DisplayCaptureSurfaceType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::DisplayCaptureSurfaceType& value) {
    return value == static_cast<::media::mojom::DisplayCaptureSurfaceType>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::DisplayCaptureSurfaceType& slot, bool) {
    slot = static_cast<::media::mojom::DisplayCaptureSurfaceType>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::DisplayCaptureSurfaceType& value) {
    return value == static_cast<::media::mojom::DisplayCaptureSurfaceType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_mojom_internal_CursorCaptureType_DataHashFn {
  static unsigned GetHash(const ::media::mojom::CursorCaptureType& value) {
    using utype = std::underlying_type<::media::mojom::CursorCaptureType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::CursorCaptureType& left, const ::media::mojom::CursorCaptureType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::CursorCaptureType>
    : public GenericHashTraits<::media::mojom::CursorCaptureType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::CursorCaptureType& value) {
    return value == static_cast<::media::mojom::CursorCaptureType>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::CursorCaptureType& slot, bool) {
    slot = static_cast<::media::mojom::CursorCaptureType>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::CursorCaptureType& value) {
    return value == static_cast<::media::mojom::CursorCaptureType>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT DisplayMediaInformation {
 public:
  using DataView = DisplayMediaInformationDataView;
  using Data_ = internal::DisplayMediaInformation_Data;

  template <typename... Args>
  static DisplayMediaInformationPtr New(Args&&... args) {
    return DisplayMediaInformationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayMediaInformationPtr From(const U& u) {
    return mojo::TypeConverter<DisplayMediaInformationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplayMediaInformation>::Convert(*this);
  }


  DisplayMediaInformation();

  DisplayMediaInformation(
      DisplayCaptureSurfaceType display_surface,
      bool logical_surface,
      CursorCaptureType cursor);

  ~DisplayMediaInformation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayMediaInformationPtr>
  DisplayMediaInformationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DisplayMediaInformation>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplayMediaInformation::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplayMediaInformation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplayMediaInformation_UnserializedMessageContext<
            UserType, DisplayMediaInformation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DisplayMediaInformation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplayMediaInformation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplayMediaInformation_UnserializedMessageContext<
            UserType, DisplayMediaInformation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplayMediaInformation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  DisplayCaptureSurfaceType display_surface;
  
  bool logical_surface;
  
  CursorCaptureType cursor;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
DisplayMediaInformationPtr DisplayMediaInformation::Clone() const {
  return New(
      mojo::Clone(display_surface),
      mojo::Clone(logical_surface),
      mojo::Clone(cursor)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DisplayMediaInformation>::value>::type*>
bool DisplayMediaInformation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_surface, other_struct.display_surface))
    return false;
  if (!mojo::Equals(this->logical_surface, other_struct.logical_surface))
    return false;
  if (!mojo::Equals(this->cursor, other_struct.cursor))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::DisplayMediaInformation::DataView,
                                         ::media::mojom::blink::DisplayMediaInformationPtr> {
  static bool IsNull(const ::media::mojom::blink::DisplayMediaInformationPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::DisplayMediaInformationPtr* output) { output->reset(); }

  static decltype(::media::mojom::blink::DisplayMediaInformation::display_surface) display_surface(
      const ::media::mojom::blink::DisplayMediaInformationPtr& input) {
    return input->display_surface;
  }

  static decltype(::media::mojom::blink::DisplayMediaInformation::logical_surface) logical_surface(
      const ::media::mojom::blink::DisplayMediaInformationPtr& input) {
    return input->logical_surface;
  }

  static decltype(::media::mojom::blink::DisplayMediaInformation::cursor) cursor(
      const ::media::mojom::blink::DisplayMediaInformationPtr& input) {
    return input->cursor;
  }

  static bool Read(::media::mojom::blink::DisplayMediaInformation::DataView input, ::media::mojom::blink::DisplayMediaInformationPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DISPLAY_MEDIA_INFORMATION_MOJOM_BLINK_H_