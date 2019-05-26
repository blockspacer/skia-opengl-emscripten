// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-blink-forward.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "third_party/blink/public/mojom/manifest/display_mode.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_ManifestImageResource_Purpose_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ManifestImageResource_Purpose& value) {
    using utype = std::underlying_type<::blink::mojom::ManifestImageResource_Purpose>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ManifestImageResource_Purpose& left, const ::blink::mojom::ManifestImageResource_Purpose& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ManifestImageResource_Purpose>
    : public GenericHashTraits<::blink::mojom::ManifestImageResource_Purpose> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ManifestImageResource_Purpose& value) {
    return value == static_cast<::blink::mojom::ManifestImageResource_Purpose>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ManifestImageResource_Purpose& slot, bool) {
    slot = static_cast<::blink::mojom::ManifestImageResource_Purpose>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ManifestImageResource_Purpose& value) {
    return value == static_cast<::blink::mojom::ManifestImageResource_Purpose>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_ManifestShareTarget_Method_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ManifestShareTarget_Method& value) {
    using utype = std::underlying_type<::blink::mojom::ManifestShareTarget_Method>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ManifestShareTarget_Method& left, const ::blink::mojom::ManifestShareTarget_Method& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ManifestShareTarget_Method>
    : public GenericHashTraits<::blink::mojom::ManifestShareTarget_Method> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ManifestShareTarget_Method& value) {
    return value == static_cast<::blink::mojom::ManifestShareTarget_Method>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ManifestShareTarget_Method& slot, bool) {
    slot = static_cast<::blink::mojom::ManifestShareTarget_Method>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ManifestShareTarget_Method& value) {
    return value == static_cast<::blink::mojom::ManifestShareTarget_Method>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_ManifestShareTarget_Enctype_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ManifestShareTarget_Enctype& value) {
    using utype = std::underlying_type<::blink::mojom::ManifestShareTarget_Enctype>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ManifestShareTarget_Enctype& left, const ::blink::mojom::ManifestShareTarget_Enctype& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ManifestShareTarget_Enctype>
    : public GenericHashTraits<::blink::mojom::ManifestShareTarget_Enctype> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ManifestShareTarget_Enctype& value) {
    return value == static_cast<::blink::mojom::ManifestShareTarget_Enctype>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ManifestShareTarget_Enctype& slot, bool) {
    slot = static_cast<::blink::mojom::ManifestShareTarget_Enctype>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ManifestShareTarget_Enctype& value) {
    return value == static_cast<::blink::mojom::ManifestShareTarget_Enctype>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {













class PLATFORM_EXPORT ManifestError {
 public:
  using DataView = ManifestErrorDataView;
  using Data_ = internal::ManifestError_Data;

  template <typename... Args>
  static ManifestErrorPtr New(Args&&... args) {
    return ManifestErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestErrorPtr From(const U& u) {
    return mojo::TypeConverter<ManifestErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestError>::Convert(*this);
  }


  ManifestError();

  ManifestError(
      const WTF::String& message,
      bool critical,
      uint32_t line,
      uint32_t column);

  ~ManifestError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestErrorPtr>
  ManifestErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestError>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestError::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestError_UnserializedMessageContext<
            UserType, ManifestError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestError_UnserializedMessageContext<
            UserType, ManifestError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String message;
  
  bool critical;
  
  uint32_t line;
  
  uint32_t column;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class PLATFORM_EXPORT Manifest {
 public:
  using DataView = ManifestDataView;
  using Data_ = internal::Manifest_Data;

  template <typename... Args>
  static ManifestPtr New(Args&&... args) {
    return ManifestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestPtr From(const U& u) {
    return mojo::TypeConverter<ManifestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Manifest>::Convert(*this);
  }


  Manifest();

  Manifest(
      const WTF::String& name,
      const WTF::String& short_name,
      const base::Optional<::blink::KURL>& start_url,
      ::blink::WebDisplayMode display,
      ::blink::WebScreenOrientationLockType orientation,
      base::Optional<WTF::Vector<ManifestImageResourcePtr>> icons,
      ManifestShareTargetPtr share_target,
      ManifestFileHandlerPtr file_handler,
      base::Optional<WTF::Vector<ManifestRelatedApplicationPtr>> related_applications,
      bool prefer_related_applications,
      bool has_theme_color,
      uint32_t theme_color,
      bool has_background_color,
      uint32_t background_color,
      const base::Optional<::blink::KURL>& splash_screen_url,
      const WTF::String& gcm_sender_id,
      const base::Optional<::blink::KURL>& scope);

  ~Manifest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestPtr>
  ManifestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Manifest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Manifest::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Manifest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Manifest_UnserializedMessageContext<
            UserType, Manifest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Manifest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Manifest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Manifest_UnserializedMessageContext<
            UserType, Manifest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Manifest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  WTF::String short_name;
  
  base::Optional<::blink::KURL> start_url;
  
  ::blink::WebDisplayMode display;
  
  ::blink::WebScreenOrientationLockType orientation;
  
  base::Optional<WTF::Vector<ManifestImageResourcePtr>> icons;
  
  ManifestShareTargetPtr share_target;
  
  ManifestFileHandlerPtr file_handler;
  
  base::Optional<WTF::Vector<ManifestRelatedApplicationPtr>> related_applications;
  
  bool prefer_related_applications;
  
  bool has_theme_color;
  
  uint32_t theme_color;
  
  bool has_background_color;
  
  uint32_t background_color;
  
  base::Optional<::blink::KURL> splash_screen_url;
  
  WTF::String gcm_sender_id;
  
  base::Optional<::blink::KURL> scope;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Manifest);
};





class PLATFORM_EXPORT ManifestImageResource {
 public:
  using DataView = ManifestImageResourceDataView;
  using Data_ = internal::ManifestImageResource_Data;
  using Purpose = ManifestImageResource_Purpose;

  template <typename... Args>
  static ManifestImageResourcePtr New(Args&&... args) {
    return ManifestImageResourcePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestImageResourcePtr From(const U& u) {
    return mojo::TypeConverter<ManifestImageResourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestImageResource>::Convert(*this);
  }


  ManifestImageResource();

  ManifestImageResource(
      const ::blink::KURL& src,
      const WTF::String& type,
      const WTF::Vector<::blink::WebSize>& sizes,
      const WTF::Vector<ManifestImageResource::Purpose>& purpose);

  ~ManifestImageResource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestImageResourcePtr>
  ManifestImageResourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestImageResource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestImageResource::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestImageResource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestImageResource_UnserializedMessageContext<
            UserType, ManifestImageResource::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestImageResource::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestImageResource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestImageResource_UnserializedMessageContext<
            UserType, ManifestImageResource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestImageResource::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL src;
  
  WTF::String type;
  
  WTF::Vector<::blink::WebSize> sizes;
  
  WTF::Vector<ManifestImageResource::Purpose> purpose;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT ManifestFileFilter {
 public:
  using DataView = ManifestFileFilterDataView;
  using Data_ = internal::ManifestFileFilter_Data;

  template <typename... Args>
  static ManifestFileFilterPtr New(Args&&... args) {
    return ManifestFileFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestFileFilterPtr From(const U& u) {
    return mojo::TypeConverter<ManifestFileFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestFileFilter>::Convert(*this);
  }


  ManifestFileFilter();

  ManifestFileFilter(
      const WTF::String& name,
      const WTF::Vector<WTF::String>& accept);

  ~ManifestFileFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestFileFilterPtr>
  ManifestFileFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestFileFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestFileFilter::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestFileFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestFileFilter_UnserializedMessageContext<
            UserType, ManifestFileFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestFileFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestFileFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestFileFilter_UnserializedMessageContext<
            UserType, ManifestFileFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestFileFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  WTF::Vector<WTF::String> accept;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT ManifestRelatedApplication {
 public:
  using DataView = ManifestRelatedApplicationDataView;
  using Data_ = internal::ManifestRelatedApplication_Data;

  template <typename... Args>
  static ManifestRelatedApplicationPtr New(Args&&... args) {
    return ManifestRelatedApplicationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestRelatedApplicationPtr From(const U& u) {
    return mojo::TypeConverter<ManifestRelatedApplicationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestRelatedApplication>::Convert(*this);
  }


  ManifestRelatedApplication();

  ManifestRelatedApplication(
      const WTF::String& platform,
      const base::Optional<::blink::KURL>& url,
      const WTF::String& id);

  ~ManifestRelatedApplication();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestRelatedApplicationPtr>
  ManifestRelatedApplicationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestRelatedApplication>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestRelatedApplication::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestRelatedApplication::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestRelatedApplication_UnserializedMessageContext<
            UserType, ManifestRelatedApplication::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestRelatedApplication::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestRelatedApplication::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestRelatedApplication_UnserializedMessageContext<
            UserType, ManifestRelatedApplication::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestRelatedApplication::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String platform;
  
  base::Optional<::blink::KURL> url;
  
  WTF::String id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT ManifestShareTargetParams {
 public:
  using DataView = ManifestShareTargetParamsDataView;
  using Data_ = internal::ManifestShareTargetParams_Data;

  template <typename... Args>
  static ManifestShareTargetParamsPtr New(Args&&... args) {
    return ManifestShareTargetParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestShareTargetParamsPtr From(const U& u) {
    return mojo::TypeConverter<ManifestShareTargetParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestShareTargetParams>::Convert(*this);
  }


  ManifestShareTargetParams();

  ManifestShareTargetParams(
      const WTF::String& title,
      const WTF::String& text,
      const WTF::String& url,
      base::Optional<WTF::Vector<ManifestFileFilterPtr>> files);

  ~ManifestShareTargetParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestShareTargetParamsPtr>
  ManifestShareTargetParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestShareTargetParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestShareTargetParams::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestShareTargetParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestShareTargetParams_UnserializedMessageContext<
            UserType, ManifestShareTargetParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestShareTargetParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestShareTargetParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestShareTargetParams_UnserializedMessageContext<
            UserType, ManifestShareTargetParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestShareTargetParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String title;
  
  WTF::String text;
  
  WTF::String url;
  
  base::Optional<WTF::Vector<ManifestFileFilterPtr>> files;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ManifestShareTargetParams);
};





class PLATFORM_EXPORT ManifestShareTarget {
 public:
  using DataView = ManifestShareTargetDataView;
  using Data_ = internal::ManifestShareTarget_Data;
  using Method = ManifestShareTarget_Method;
  using Enctype = ManifestShareTarget_Enctype;

  template <typename... Args>
  static ManifestShareTargetPtr New(Args&&... args) {
    return ManifestShareTargetPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestShareTargetPtr From(const U& u) {
    return mojo::TypeConverter<ManifestShareTargetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestShareTarget>::Convert(*this);
  }


  ManifestShareTarget();

  ManifestShareTarget(
      const ::blink::KURL& action,
      ManifestShareTarget::Method method,
      ManifestShareTarget::Enctype enctype,
      ManifestShareTargetParamsPtr params);

  ~ManifestShareTarget();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestShareTargetPtr>
  ManifestShareTargetPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestShareTarget>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestShareTarget::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestShareTarget::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestShareTarget_UnserializedMessageContext<
            UserType, ManifestShareTarget::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestShareTarget::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestShareTarget::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestShareTarget_UnserializedMessageContext<
            UserType, ManifestShareTarget::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestShareTarget::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL action;
  
  ManifestShareTarget::Method method;
  
  ManifestShareTarget::Enctype enctype;
  
  ManifestShareTargetParamsPtr params;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ManifestShareTarget);
};





class PLATFORM_EXPORT ManifestFileHandler {
 public:
  using DataView = ManifestFileHandlerDataView;
  using Data_ = internal::ManifestFileHandler_Data;

  template <typename... Args>
  static ManifestFileHandlerPtr New(Args&&... args) {
    return ManifestFileHandlerPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestFileHandlerPtr From(const U& u) {
    return mojo::TypeConverter<ManifestFileHandlerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestFileHandler>::Convert(*this);
  }


  ManifestFileHandler();

  ManifestFileHandler(
      const ::blink::KURL& action,
      WTF::Vector<ManifestFileFilterPtr> files);

  ~ManifestFileHandler();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestFileHandlerPtr>
  ManifestFileHandlerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestFileHandler>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestFileHandler::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestFileHandler::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestFileHandler_UnserializedMessageContext<
            UserType, ManifestFileHandler::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestFileHandler::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestFileHandler::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestFileHandler_UnserializedMessageContext<
            UserType, ManifestFileHandler::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestFileHandler::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL action;
  
  WTF::Vector<ManifestFileFilterPtr> files;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ManifestFileHandler);
};





class PLATFORM_EXPORT ManifestDebugInfo {
 public:
  using DataView = ManifestDebugInfoDataView;
  using Data_ = internal::ManifestDebugInfo_Data;

  template <typename... Args>
  static ManifestDebugInfoPtr New(Args&&... args) {
    return ManifestDebugInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestDebugInfoPtr From(const U& u) {
    return mojo::TypeConverter<ManifestDebugInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestDebugInfo>::Convert(*this);
  }


  ManifestDebugInfo();

  ManifestDebugInfo(
      WTF::Vector<ManifestErrorPtr> errors,
      const WTF::String& raw_manifest);

  ~ManifestDebugInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestDebugInfoPtr>
  ManifestDebugInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ManifestDebugInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestDebugInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestDebugInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestDebugInfo_UnserializedMessageContext<
            UserType, ManifestDebugInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ManifestDebugInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestDebugInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestDebugInfo_UnserializedMessageContext<
            UserType, ManifestDebugInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestDebugInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<ManifestErrorPtr> errors;
  
  WTF::String raw_manifest;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ManifestDebugInfo);
};


template <typename StructPtrType>
ManifestPtr Manifest::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(short_name),
      mojo::Clone(start_url),
      mojo::Clone(display),
      mojo::Clone(orientation),
      mojo::Clone(icons),
      mojo::Clone(share_target),
      mojo::Clone(file_handler),
      mojo::Clone(related_applications),
      mojo::Clone(prefer_related_applications),
      mojo::Clone(has_theme_color),
      mojo::Clone(theme_color),
      mojo::Clone(has_background_color),
      mojo::Clone(background_color),
      mojo::Clone(splash_screen_url),
      mojo::Clone(gcm_sender_id),
      mojo::Clone(scope)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Manifest>::value>::type*>
bool Manifest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->short_name, other_struct.short_name))
    return false;
  if (!mojo::Equals(this->start_url, other_struct.start_url))
    return false;
  if (!mojo::Equals(this->display, other_struct.display))
    return false;
  if (!mojo::Equals(this->orientation, other_struct.orientation))
    return false;
  if (!mojo::Equals(this->icons, other_struct.icons))
    return false;
  if (!mojo::Equals(this->share_target, other_struct.share_target))
    return false;
  if (!mojo::Equals(this->file_handler, other_struct.file_handler))
    return false;
  if (!mojo::Equals(this->related_applications, other_struct.related_applications))
    return false;
  if (!mojo::Equals(this->prefer_related_applications, other_struct.prefer_related_applications))
    return false;
  if (!mojo::Equals(this->has_theme_color, other_struct.has_theme_color))
    return false;
  if (!mojo::Equals(this->theme_color, other_struct.theme_color))
    return false;
  if (!mojo::Equals(this->has_background_color, other_struct.has_background_color))
    return false;
  if (!mojo::Equals(this->background_color, other_struct.background_color))
    return false;
  if (!mojo::Equals(this->splash_screen_url, other_struct.splash_screen_url))
    return false;
  if (!mojo::Equals(this->gcm_sender_id, other_struct.gcm_sender_id))
    return false;
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestImageResourcePtr ManifestImageResource::Clone() const {
  return New(
      mojo::Clone(src),
      mojo::Clone(type),
      mojo::Clone(sizes),
      mojo::Clone(purpose)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestImageResource>::value>::type*>
bool ManifestImageResource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->src, other_struct.src))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->sizes, other_struct.sizes))
    return false;
  if (!mojo::Equals(this->purpose, other_struct.purpose))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestFileFilterPtr ManifestFileFilter::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(accept)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestFileFilter>::value>::type*>
bool ManifestFileFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->accept, other_struct.accept))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestRelatedApplicationPtr ManifestRelatedApplication::Clone() const {
  return New(
      mojo::Clone(platform),
      mojo::Clone(url),
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestRelatedApplication>::value>::type*>
bool ManifestRelatedApplication::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->platform, other_struct.platform))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestShareTargetParamsPtr ManifestShareTargetParams::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(text),
      mojo::Clone(url),
      mojo::Clone(files)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestShareTargetParams>::value>::type*>
bool ManifestShareTargetParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->text, other_struct.text))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->files, other_struct.files))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestShareTargetPtr ManifestShareTarget::Clone() const {
  return New(
      mojo::Clone(action),
      mojo::Clone(method),
      mojo::Clone(enctype),
      mojo::Clone(params)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestShareTarget>::value>::type*>
bool ManifestShareTarget::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->enctype, other_struct.enctype))
    return false;
  if (!mojo::Equals(this->params, other_struct.params))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestFileHandlerPtr ManifestFileHandler::Clone() const {
  return New(
      mojo::Clone(action),
      mojo::Clone(files)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestFileHandler>::value>::type*>
bool ManifestFileHandler::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->files, other_struct.files))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestDebugInfoPtr ManifestDebugInfo::Clone() const {
  return New(
      mojo::Clone(errors),
      mojo::Clone(raw_manifest)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestDebugInfo>::value>::type*>
bool ManifestDebugInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->errors, other_struct.errors))
    return false;
  if (!mojo::Equals(this->raw_manifest, other_struct.raw_manifest))
    return false;
  return true;
}
template <typename StructPtrType>
ManifestErrorPtr ManifestError::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(critical),
      mojo::Clone(line),
      mojo::Clone(column)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ManifestError>::value>::type*>
bool ManifestError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->critical, other_struct.critical))
    return false;
  if (!mojo::Equals(this->line, other_struct.line))
    return false;
  if (!mojo::Equals(this->column, other_struct.column))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::Manifest::DataView,
                                         ::blink::mojom::blink::ManifestPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::Manifest::name)& name(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::Manifest::short_name)& short_name(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->short_name;
  }

  static const decltype(::blink::mojom::blink::Manifest::start_url)& start_url(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->start_url;
  }

  static decltype(::blink::mojom::blink::Manifest::display) display(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->display;
  }

  static decltype(::blink::mojom::blink::Manifest::orientation) orientation(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->orientation;
  }

  static const decltype(::blink::mojom::blink::Manifest::icons)& icons(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->icons;
  }

  static const decltype(::blink::mojom::blink::Manifest::share_target)& share_target(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->share_target;
  }

  static const decltype(::blink::mojom::blink::Manifest::file_handler)& file_handler(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->file_handler;
  }

  static const decltype(::blink::mojom::blink::Manifest::related_applications)& related_applications(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->related_applications;
  }

  static decltype(::blink::mojom::blink::Manifest::prefer_related_applications) prefer_related_applications(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->prefer_related_applications;
  }

  static decltype(::blink::mojom::blink::Manifest::has_theme_color) has_theme_color(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->has_theme_color;
  }

  static decltype(::blink::mojom::blink::Manifest::theme_color) theme_color(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->theme_color;
  }

  static decltype(::blink::mojom::blink::Manifest::has_background_color) has_background_color(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->has_background_color;
  }

  static decltype(::blink::mojom::blink::Manifest::background_color) background_color(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->background_color;
  }

  static const decltype(::blink::mojom::blink::Manifest::splash_screen_url)& splash_screen_url(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->splash_screen_url;
  }

  static const decltype(::blink::mojom::blink::Manifest::gcm_sender_id)& gcm_sender_id(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->gcm_sender_id;
  }

  static const decltype(::blink::mojom::blink::Manifest::scope)& scope(
      const ::blink::mojom::blink::ManifestPtr& input) {
    return input->scope;
  }

  static bool Read(::blink::mojom::blink::Manifest::DataView input, ::blink::mojom::blink::ManifestPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestImageResource::DataView,
                                         ::blink::mojom::blink::ManifestImageResourcePtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestImageResourcePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestImageResourcePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestImageResource::src)& src(
      const ::blink::mojom::blink::ManifestImageResourcePtr& input) {
    return input->src;
  }

  static const decltype(::blink::mojom::blink::ManifestImageResource::type)& type(
      const ::blink::mojom::blink::ManifestImageResourcePtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::blink::ManifestImageResource::sizes)& sizes(
      const ::blink::mojom::blink::ManifestImageResourcePtr& input) {
    return input->sizes;
  }

  static const decltype(::blink::mojom::blink::ManifestImageResource::purpose)& purpose(
      const ::blink::mojom::blink::ManifestImageResourcePtr& input) {
    return input->purpose;
  }

  static bool Read(::blink::mojom::blink::ManifestImageResource::DataView input, ::blink::mojom::blink::ManifestImageResourcePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestFileFilter::DataView,
                                         ::blink::mojom::blink::ManifestFileFilterPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestFileFilterPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestFileFilterPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestFileFilter::name)& name(
      const ::blink::mojom::blink::ManifestFileFilterPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::ManifestFileFilter::accept)& accept(
      const ::blink::mojom::blink::ManifestFileFilterPtr& input) {
    return input->accept;
  }

  static bool Read(::blink::mojom::blink::ManifestFileFilter::DataView input, ::blink::mojom::blink::ManifestFileFilterPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestRelatedApplication::DataView,
                                         ::blink::mojom::blink::ManifestRelatedApplicationPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestRelatedApplicationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestRelatedApplicationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestRelatedApplication::platform)& platform(
      const ::blink::mojom::blink::ManifestRelatedApplicationPtr& input) {
    return input->platform;
  }

  static const decltype(::blink::mojom::blink::ManifestRelatedApplication::url)& url(
      const ::blink::mojom::blink::ManifestRelatedApplicationPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::ManifestRelatedApplication::id)& id(
      const ::blink::mojom::blink::ManifestRelatedApplicationPtr& input) {
    return input->id;
  }

  static bool Read(::blink::mojom::blink::ManifestRelatedApplication::DataView input, ::blink::mojom::blink::ManifestRelatedApplicationPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestShareTargetParams::DataView,
                                         ::blink::mojom::blink::ManifestShareTargetParamsPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestShareTargetParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestShareTargetParamsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestShareTargetParams::title)& title(
      const ::blink::mojom::blink::ManifestShareTargetParamsPtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::blink::ManifestShareTargetParams::text)& text(
      const ::blink::mojom::blink::ManifestShareTargetParamsPtr& input) {
    return input->text;
  }

  static const decltype(::blink::mojom::blink::ManifestShareTargetParams::url)& url(
      const ::blink::mojom::blink::ManifestShareTargetParamsPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::ManifestShareTargetParams::files)& files(
      const ::blink::mojom::blink::ManifestShareTargetParamsPtr& input) {
    return input->files;
  }

  static bool Read(::blink::mojom::blink::ManifestShareTargetParams::DataView input, ::blink::mojom::blink::ManifestShareTargetParamsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestShareTarget::DataView,
                                         ::blink::mojom::blink::ManifestShareTargetPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestShareTargetPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestShareTargetPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestShareTarget::action)& action(
      const ::blink::mojom::blink::ManifestShareTargetPtr& input) {
    return input->action;
  }

  static decltype(::blink::mojom::blink::ManifestShareTarget::method) method(
      const ::blink::mojom::blink::ManifestShareTargetPtr& input) {
    return input->method;
  }

  static decltype(::blink::mojom::blink::ManifestShareTarget::enctype) enctype(
      const ::blink::mojom::blink::ManifestShareTargetPtr& input) {
    return input->enctype;
  }

  static const decltype(::blink::mojom::blink::ManifestShareTarget::params)& params(
      const ::blink::mojom::blink::ManifestShareTargetPtr& input) {
    return input->params;
  }

  static bool Read(::blink::mojom::blink::ManifestShareTarget::DataView input, ::blink::mojom::blink::ManifestShareTargetPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestFileHandler::DataView,
                                         ::blink::mojom::blink::ManifestFileHandlerPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestFileHandlerPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestFileHandlerPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestFileHandler::action)& action(
      const ::blink::mojom::blink::ManifestFileHandlerPtr& input) {
    return input->action;
  }

  static const decltype(::blink::mojom::blink::ManifestFileHandler::files)& files(
      const ::blink::mojom::blink::ManifestFileHandlerPtr& input) {
    return input->files;
  }

  static bool Read(::blink::mojom::blink::ManifestFileHandler::DataView input, ::blink::mojom::blink::ManifestFileHandlerPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestDebugInfo::DataView,
                                         ::blink::mojom::blink::ManifestDebugInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestDebugInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestDebugInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestDebugInfo::errors)& errors(
      const ::blink::mojom::blink::ManifestDebugInfoPtr& input) {
    return input->errors;
  }

  static const decltype(::blink::mojom::blink::ManifestDebugInfo::raw_manifest)& raw_manifest(
      const ::blink::mojom::blink::ManifestDebugInfoPtr& input) {
    return input->raw_manifest;
  }

  static bool Read(::blink::mojom::blink::ManifestDebugInfo::DataView input, ::blink::mojom::blink::ManifestDebugInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestError::DataView,
                                         ::blink::mojom::blink::ManifestErrorPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestErrorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestErrorPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ManifestError::message)& message(
      const ::blink::mojom::blink::ManifestErrorPtr& input) {
    return input->message;
  }

  static decltype(::blink::mojom::blink::ManifestError::critical) critical(
      const ::blink::mojom::blink::ManifestErrorPtr& input) {
    return input->critical;
  }

  static decltype(::blink::mojom::blink::ManifestError::line) line(
      const ::blink::mojom::blink::ManifestErrorPtr& input) {
    return input->line;
  }

  static decltype(::blink::mojom::blink::ManifestError::column) column(
      const ::blink::mojom::blink::ManifestErrorPtr& input) {
    return input->column;
  }

  static bool Read(::blink::mojom::blink::ManifestError::DataView input, ::blink::mojom::blink::ManifestErrorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_BLINK_H_