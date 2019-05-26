// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-internal.h"
#include "services/device/public/mojom/screen_orientation_lock_types.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/display_mode.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ManifestDataView;

class ManifestImageResourceDataView;

class ManifestFileFilterDataView;

class ManifestRelatedApplicationDataView;

class ManifestShareTargetParamsDataView;

class ManifestShareTargetDataView;

class ManifestFileHandlerDataView;

class ManifestDebugInfoDataView;

class ManifestErrorDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ManifestDataView> {
  using Data = ::blink::mojom::internal::Manifest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestImageResourceDataView> {
  using Data = ::blink::mojom::internal::ManifestImageResource_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestFileFilterDataView> {
  using Data = ::blink::mojom::internal::ManifestFileFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestRelatedApplicationDataView> {
  using Data = ::blink::mojom::internal::ManifestRelatedApplication_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestShareTargetParamsDataView> {
  using Data = ::blink::mojom::internal::ManifestShareTargetParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestShareTargetDataView> {
  using Data = ::blink::mojom::internal::ManifestShareTarget_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestFileHandlerDataView> {
  using Data = ::blink::mojom::internal::ManifestFileHandler_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestDebugInfoDataView> {
  using Data = ::blink::mojom::internal::ManifestDebugInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ManifestErrorDataView> {
  using Data = ::blink::mojom::internal::ManifestError_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ManifestImageResource_Purpose : int32_t {
  
  ANY = 0,
  
  BADGE,
  
  MASKABLE,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ManifestImageResource_Purpose value);
inline bool IsKnownEnumValue(ManifestImageResource_Purpose value) {
  return internal::ManifestImageResource_Purpose_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ManifestShareTarget_Method : int32_t {
  
  kGet,
  
  kPost,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ManifestShareTarget_Method value);
inline bool IsKnownEnumValue(ManifestShareTarget_Method value) {
  return internal::ManifestShareTarget_Method_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ManifestShareTarget_Enctype : int32_t {
  
  kApplication,
  
  kMultipart,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ManifestShareTarget_Enctype value);
inline bool IsKnownEnumValue(ManifestShareTarget_Enctype value) {
  return internal::ManifestShareTarget_Enctype_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ManifestDataView {
 public:
  ManifestDataView() {}

  ManifestDataView(
      internal::Manifest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetShortNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShortName(UserType* output) {
    auto* pointer = data_->short_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetStartUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStartUrl(UserType* output) {
    auto* pointer = data_->start_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplay(UserType* output) const {
    auto data_value = data_->display;
    return mojo::internal::Deserialize<::blink::mojom::DisplayMode>(
        data_value, output);
  }

  ::blink::mojom::DisplayMode display() const {
    return static_cast<::blink::mojom::DisplayMode>(data_->display);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) const {
    auto data_value = data_->orientation;
    return mojo::internal::Deserialize<::device::mojom::ScreenOrientationLockType>(
        data_value, output);
  }

  ::device::mojom::ScreenOrientationLockType orientation() const {
    return static_cast<::device::mojom::ScreenOrientationLockType>(data_->orientation);
  }
  inline void GetIconsDataView(
      mojo::ArrayDataView<ManifestImageResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIcons(UserType* output) {
    auto* pointer = data_->icons.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>>(
        pointer, output, context_);
  }
  inline void GetShareTargetDataView(
      ManifestShareTargetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShareTarget(UserType* output) {
    auto* pointer = data_->share_target.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestShareTargetDataView>(
        pointer, output, context_);
  }
  inline void GetFileHandlerDataView(
      ManifestFileHandlerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileHandler(UserType* output) {
    auto* pointer = data_->file_handler.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestFileHandlerDataView>(
        pointer, output, context_);
  }
  inline void GetRelatedApplicationsDataView(
      mojo::ArrayDataView<ManifestRelatedApplicationDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRelatedApplications(UserType* output) {
    auto* pointer = data_->related_applications.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestRelatedApplicationDataView>>(
        pointer, output, context_);
  }
  bool prefer_related_applications() const {
    return data_->prefer_related_applications;
  }
  bool has_theme_color() const {
    return data_->has_theme_color;
  }
  uint32_t theme_color() const {
    return data_->theme_color;
  }
  bool has_background_color() const {
    return data_->has_background_color;
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  inline void GetSplashScreenUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSplashScreenUrl(UserType* output) {
    auto* pointer = data_->splash_screen_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetGcmSenderIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGcmSenderId(UserType* output) {
    auto* pointer = data_->gcm_sender_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::Manifest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestImageResourceDataView {
 public:
  ManifestImageResourceDataView() {}

  ManifestImageResourceDataView(
      internal::ManifestImageResource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSrcDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSrc(UserType* output) {
    auto* pointer = data_->src.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTypeDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) {
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetSizesDataView(
      mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSizes(UserType* output) {
    auto* pointer = data_->sizes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
        pointer, output, context_);
  }
  inline void GetPurposeDataView(
      mojo::ArrayDataView<ManifestImageResource_Purpose>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPurpose(UserType* output) {
    auto* pointer = data_->purpose.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResource_Purpose>>(
        pointer, output, context_);
  }
 private:
  internal::ManifestImageResource_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestFileFilterDataView {
 public:
  ManifestFileFilterDataView() {}

  ManifestFileFilterDataView(
      internal::ManifestFileFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetAcceptDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAccept(UserType* output) {
    auto* pointer = data_->accept.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
 private:
  internal::ManifestFileFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestRelatedApplicationDataView {
 public:
  ManifestRelatedApplicationDataView() {}

  ManifestRelatedApplicationDataView(
      internal::ManifestRelatedApplication_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPlatformDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatform(UserType* output) {
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetIdDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestRelatedApplication_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestShareTargetParamsDataView {
 public:
  ManifestShareTargetParamsDataView() {}

  ManifestShareTargetParamsDataView(
      internal::ManifestShareTargetParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetTextDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadText(UserType* output) {
    auto* pointer = data_->text.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFilesDataView(
      mojo::ArrayDataView<ManifestFileFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiles(UserType* output) {
    auto* pointer = data_->files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestFileFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ManifestShareTargetParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestShareTargetDataView {
 public:
  ManifestShareTargetDataView() {}

  ManifestShareTargetDataView(
      internal::ManifestShareTarget_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) const {
    auto data_value = data_->method;
    return mojo::internal::Deserialize<::blink::mojom::ManifestShareTarget_Method>(
        data_value, output);
  }

  ManifestShareTarget_Method method() const {
    return static_cast<ManifestShareTarget_Method>(data_->method);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnctype(UserType* output) const {
    auto data_value = data_->enctype;
    return mojo::internal::Deserialize<::blink::mojom::ManifestShareTarget_Enctype>(
        data_value, output);
  }

  ManifestShareTarget_Enctype enctype() const {
    return static_cast<ManifestShareTarget_Enctype>(data_->enctype);
  }
  inline void GetParamsDataView(
      ManifestShareTargetParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::ManifestShareTargetParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestShareTarget_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestFileHandlerDataView {
 public:
  ManifestFileHandlerDataView() {}

  ManifestFileHandlerDataView(
      internal::ManifestFileHandler_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetActionDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetFilesDataView(
      mojo::ArrayDataView<ManifestFileFilterDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiles(UserType* output) {
    auto* pointer = data_->files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestFileFilterDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ManifestFileHandler_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestDebugInfoDataView {
 public:
  ManifestDebugInfoDataView() {}

  ManifestDebugInfoDataView(
      internal::ManifestDebugInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorsDataView(
      mojo::ArrayDataView<ManifestErrorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrors(UserType* output) {
    auto* pointer = data_->errors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ManifestErrorDataView>>(
        pointer, output, context_);
  }
  inline void GetRawManifestDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRawManifest(UserType* output) {
    auto* pointer = data_->raw_manifest.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ManifestDebugInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ManifestErrorDataView {
 public:
  ManifestErrorDataView() {}

  ManifestErrorDataView(
      internal::ManifestError_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  bool critical() const {
    return data_->critical;
  }
  uint32_t line() const {
    return data_->line;
  }
  uint32_t column() const {
    return data_->column;
  }
 private:
  internal::ManifestError_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ManifestImageResource_Purpose>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ManifestImageResource_Purpose> {};

template <>
struct hash<::blink::mojom::ManifestShareTarget_Method>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ManifestShareTarget_Method> {};

template <>
struct hash<::blink::mojom::ManifestShareTarget_Enctype>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ManifestShareTarget_Enctype> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ManifestImageResource_Purpose, ::blink::mojom::ManifestImageResource_Purpose> {
  static ::blink::mojom::ManifestImageResource_Purpose ToMojom(::blink::mojom::ManifestImageResource_Purpose input) { return input; }
  static bool FromMojom(::blink::mojom::ManifestImageResource_Purpose input, ::blink::mojom::ManifestImageResource_Purpose* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestImageResource_Purpose, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ManifestImageResource_Purpose, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ManifestImageResource_Purpose>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ManifestShareTarget_Method, ::blink::mojom::ManifestShareTarget_Method> {
  static ::blink::mojom::ManifestShareTarget_Method ToMojom(::blink::mojom::ManifestShareTarget_Method input) { return input; }
  static bool FromMojom(::blink::mojom::ManifestShareTarget_Method input, ::blink::mojom::ManifestShareTarget_Method* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestShareTarget_Method, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ManifestShareTarget_Method, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ManifestShareTarget_Method>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ManifestShareTarget_Enctype, ::blink::mojom::ManifestShareTarget_Enctype> {
  static ::blink::mojom::ManifestShareTarget_Enctype ToMojom(::blink::mojom::ManifestShareTarget_Enctype input) { return input; }
  static bool FromMojom(::blink::mojom::ManifestShareTarget_Enctype input, ::blink::mojom::ManifestShareTarget_Enctype* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestShareTarget_Enctype, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ManifestShareTarget_Enctype, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ManifestShareTarget_Enctype>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::Manifest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::short_name(input)) in_short_name = Traits::short_name(input);
    typename decltype((*output)->short_name)::BaseType::BufferWriter
        short_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_short_name, buffer, &short_name_writer, context);
    (*output)->short_name.Set(
        short_name_writer.is_null() ? nullptr : short_name_writer.data());
    decltype(Traits::start_url(input)) in_start_url = Traits::start_url(input);
    typename decltype((*output)->start_url)::BaseType::BufferWriter
        start_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_start_url, buffer, &start_url_writer, context);
    (*output)->start_url.Set(
        start_url_writer.is_null() ? nullptr : start_url_writer.data());
    mojo::internal::Serialize<::blink::mojom::DisplayMode>(
        Traits::display(input), &(*output)->display);
    mojo::internal::Serialize<::device::mojom::ScreenOrientationLockType>(
        Traits::orientation(input), &(*output)->orientation);
    decltype(Traits::icons(input)) in_icons = Traits::icons(input);
    typename decltype((*output)->icons)::BaseType::BufferWriter
        icons_writer;
    const mojo::internal::ContainerValidateParams icons_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResourceDataView>>(
        in_icons, buffer, &icons_writer, &icons_validate_params,
        context);
    (*output)->icons.Set(
        icons_writer.is_null() ? nullptr : icons_writer.data());
    decltype(Traits::share_target(input)) in_share_target = Traits::share_target(input);
    typename decltype((*output)->share_target)::BaseType::BufferWriter
        share_target_writer;
    mojo::internal::Serialize<::blink::mojom::ManifestShareTargetDataView>(
        in_share_target, buffer, &share_target_writer, context);
    (*output)->share_target.Set(
        share_target_writer.is_null() ? nullptr : share_target_writer.data());
    decltype(Traits::file_handler(input)) in_file_handler = Traits::file_handler(input);
    typename decltype((*output)->file_handler)::BaseType::BufferWriter
        file_handler_writer;
    mojo::internal::Serialize<::blink::mojom::ManifestFileHandlerDataView>(
        in_file_handler, buffer, &file_handler_writer, context);
    (*output)->file_handler.Set(
        file_handler_writer.is_null() ? nullptr : file_handler_writer.data());
    decltype(Traits::related_applications(input)) in_related_applications = Traits::related_applications(input);
    typename decltype((*output)->related_applications)::BaseType::BufferWriter
        related_applications_writer;
    const mojo::internal::ContainerValidateParams related_applications_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestRelatedApplicationDataView>>(
        in_related_applications, buffer, &related_applications_writer, &related_applications_validate_params,
        context);
    (*output)->related_applications.Set(
        related_applications_writer.is_null() ? nullptr : related_applications_writer.data());
    (*output)->prefer_related_applications = Traits::prefer_related_applications(input);
    (*output)->has_theme_color = Traits::has_theme_color(input);
    (*output)->theme_color = Traits::theme_color(input);
    (*output)->has_background_color = Traits::has_background_color(input);
    (*output)->background_color = Traits::background_color(input);
    decltype(Traits::splash_screen_url(input)) in_splash_screen_url = Traits::splash_screen_url(input);
    typename decltype((*output)->splash_screen_url)::BaseType::BufferWriter
        splash_screen_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_splash_screen_url, buffer, &splash_screen_url_writer, context);
    (*output)->splash_screen_url.Set(
        splash_screen_url_writer.is_null() ? nullptr : splash_screen_url_writer.data());
    decltype(Traits::gcm_sender_id(input)) in_gcm_sender_id = Traits::gcm_sender_id(input);
    typename decltype((*output)->gcm_sender_id)::BaseType::BufferWriter
        gcm_sender_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_gcm_sender_id, buffer, &gcm_sender_id_writer, context);
    (*output)->gcm_sender_id.Set(
        gcm_sender_id_writer.is_null() ? nullptr : gcm_sender_id_writer.data());
    decltype(Traits::scope(input)) in_scope = Traits::scope(input);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::Manifest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestImageResourceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestImageResourceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestImageResource_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::src(input)) in_src = Traits::src(input);
    typename decltype((*output)->src)::BaseType::BufferWriter
        src_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_src, buffer, &src_writer, context);
    (*output)->src.Set(
        src_writer.is_null() ? nullptr : src_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->src.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null src in ManifestImageResource struct");
    decltype(Traits::type(input)) in_type = Traits::type(input);
    typename decltype((*output)->type)::BaseType::BufferWriter
        type_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_type, buffer, &type_writer, context);
    (*output)->type.Set(
        type_writer.is_null() ? nullptr : type_writer.data());
    decltype(Traits::sizes(input)) in_sizes = Traits::sizes(input);
    typename decltype((*output)->sizes)::BaseType::BufferWriter
        sizes_writer;
    const mojo::internal::ContainerValidateParams sizes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::SizeDataView>>(
        in_sizes, buffer, &sizes_writer, &sizes_validate_params,
        context);
    (*output)->sizes.Set(
        sizes_writer.is_null() ? nullptr : sizes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sizes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sizes in ManifestImageResource struct");
    decltype(Traits::purpose(input)) in_purpose = Traits::purpose(input);
    typename decltype((*output)->purpose)::BaseType::BufferWriter
        purpose_writer;
    const mojo::internal::ContainerValidateParams purpose_validate_params(
        0, ::blink::mojom::internal::ManifestImageResource_Purpose_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestImageResource_Purpose>>(
        in_purpose, buffer, &purpose_writer, &purpose_validate_params,
        context);
    (*output)->purpose.Set(
        purpose_writer.is_null() ? nullptr : purpose_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->purpose.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null purpose in ManifestImageResource struct");
  }

  static bool Deserialize(::blink::mojom::internal::ManifestImageResource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestImageResourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestFileFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestFileFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestFileFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    decltype(Traits::accept(input)) in_accept = Traits::accept(input);
    typename decltype((*output)->accept)::BaseType::BufferWriter
        accept_writer;
    const mojo::internal::ContainerValidateParams accept_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_accept, buffer, &accept_writer, &accept_validate_params,
        context);
    (*output)->accept.Set(
        accept_writer.is_null() ? nullptr : accept_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->accept.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null accept in ManifestFileFilter struct");
  }

  static bool Deserialize(::blink::mojom::internal::ManifestFileFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestFileFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestRelatedApplicationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestRelatedApplicationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestRelatedApplication_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::platform(input)) in_platform = Traits::platform(input);
    typename decltype((*output)->platform)::BaseType::BufferWriter
        platform_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_platform, buffer, &platform_writer, context);
    (*output)->platform.Set(
        platform_writer.is_null() ? nullptr : platform_writer.data());
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::ManifestRelatedApplication_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestRelatedApplicationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestShareTargetParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestShareTargetParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestShareTargetParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    decltype(Traits::text(input)) in_text = Traits::text(input);
    typename decltype((*output)->text)::BaseType::BufferWriter
        text_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_text, buffer, &text_writer, context);
    (*output)->text.Set(
        text_writer.is_null() ? nullptr : text_writer.data());
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    decltype(Traits::files(input)) in_files = Traits::files(input);
    typename decltype((*output)->files)::BaseType::BufferWriter
        files_writer;
    const mojo::internal::ContainerValidateParams files_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestFileFilterDataView>>(
        in_files, buffer, &files_writer, &files_validate_params,
        context);
    (*output)->files.Set(
        files_writer.is_null() ? nullptr : files_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::ManifestShareTargetParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestShareTargetParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestShareTargetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestShareTargetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestShareTarget_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::action(input)) in_action = Traits::action(input);
    typename decltype((*output)->action)::BaseType::BufferWriter
        action_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_action, buffer, &action_writer, context);
    (*output)->action.Set(
        action_writer.is_null() ? nullptr : action_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->action.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null action in ManifestShareTarget struct");
    mojo::internal::Serialize<::blink::mojom::ManifestShareTarget_Method>(
        Traits::method(input), &(*output)->method);
    mojo::internal::Serialize<::blink::mojom::ManifestShareTarget_Enctype>(
        Traits::enctype(input), &(*output)->enctype);
    decltype(Traits::params(input)) in_params = Traits::params(input);
    typename decltype((*output)->params)::BaseType::BufferWriter
        params_writer;
    mojo::internal::Serialize<::blink::mojom::ManifestShareTargetParamsDataView>(
        in_params, buffer, &params_writer, context);
    (*output)->params.Set(
        params_writer.is_null() ? nullptr : params_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->params.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null params in ManifestShareTarget struct");
  }

  static bool Deserialize(::blink::mojom::internal::ManifestShareTarget_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestShareTargetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestFileHandlerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestFileHandlerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestFileHandler_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::action(input)) in_action = Traits::action(input);
    typename decltype((*output)->action)::BaseType::BufferWriter
        action_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_action, buffer, &action_writer, context);
    (*output)->action.Set(
        action_writer.is_null() ? nullptr : action_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->action.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null action in ManifestFileHandler struct");
    decltype(Traits::files(input)) in_files = Traits::files(input);
    typename decltype((*output)->files)::BaseType::BufferWriter
        files_writer;
    const mojo::internal::ContainerValidateParams files_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestFileFilterDataView>>(
        in_files, buffer, &files_writer, &files_validate_params,
        context);
    (*output)->files.Set(
        files_writer.is_null() ? nullptr : files_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->files.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null files in ManifestFileHandler struct");
  }

  static bool Deserialize(::blink::mojom::internal::ManifestFileHandler_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestFileHandlerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestDebugInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestDebugInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestDebugInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::errors(input)) in_errors = Traits::errors(input);
    typename decltype((*output)->errors)::BaseType::BufferWriter
        errors_writer;
    const mojo::internal::ContainerValidateParams errors_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ManifestErrorDataView>>(
        in_errors, buffer, &errors_writer, &errors_validate_params,
        context);
    (*output)->errors.Set(
        errors_writer.is_null() ? nullptr : errors_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->errors.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null errors in ManifestDebugInfo struct");
    decltype(Traits::raw_manifest(input)) in_raw_manifest = Traits::raw_manifest(input);
    typename decltype((*output)->raw_manifest)::BaseType::BufferWriter
        raw_manifest_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_raw_manifest, buffer, &raw_manifest_writer, context);
    (*output)->raw_manifest.Set(
        raw_manifest_writer.is_null() ? nullptr : raw_manifest_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->raw_manifest.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_manifest in ManifestDebugInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::ManifestDebugInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestDebugInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ManifestErrorDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ManifestErrorDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ManifestError_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null message in ManifestError struct");
    (*output)->critical = Traits::critical(input);
    (*output)->line = Traits::line(input);
    (*output)->column = Traits::column(input);
  }

  static bool Deserialize(::blink::mojom::internal::ManifestError_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ManifestErrorDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ManifestDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestDataView::GetShortNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->short_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestDataView::GetStartUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->start_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestDataView::GetIconsDataView(
    mojo::ArrayDataView<ManifestImageResourceDataView>* output) {
  auto pointer = data_->icons.Get();
  *output = mojo::ArrayDataView<ManifestImageResourceDataView>(pointer, context_);
}
inline void ManifestDataView::GetShareTargetDataView(
    ManifestShareTargetDataView* output) {
  auto pointer = data_->share_target.Get();
  *output = ManifestShareTargetDataView(pointer, context_);
}
inline void ManifestDataView::GetFileHandlerDataView(
    ManifestFileHandlerDataView* output) {
  auto pointer = data_->file_handler.Get();
  *output = ManifestFileHandlerDataView(pointer, context_);
}
inline void ManifestDataView::GetRelatedApplicationsDataView(
    mojo::ArrayDataView<ManifestRelatedApplicationDataView>* output) {
  auto pointer = data_->related_applications.Get();
  *output = mojo::ArrayDataView<ManifestRelatedApplicationDataView>(pointer, context_);
}
inline void ManifestDataView::GetSplashScreenUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->splash_screen_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestDataView::GetGcmSenderIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->gcm_sender_id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ManifestImageResourceDataView::GetSrcDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->src.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestImageResourceDataView::GetTypeDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->type.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestImageResourceDataView::GetSizesDataView(
    mojo::ArrayDataView<::gfx::mojom::SizeDataView>* output) {
  auto pointer = data_->sizes.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::SizeDataView>(pointer, context_);
}
inline void ManifestImageResourceDataView::GetPurposeDataView(
    mojo::ArrayDataView<ManifestImageResource_Purpose>* output) {
  auto pointer = data_->purpose.Get();
  *output = mojo::ArrayDataView<ManifestImageResource_Purpose>(pointer, context_);
}


inline void ManifestFileFilterDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestFileFilterDataView::GetAcceptDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->accept.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}


inline void ManifestRelatedApplicationDataView::GetPlatformDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->platform.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestRelatedApplicationDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestRelatedApplicationDataView::GetIdDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->id.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void ManifestShareTargetParamsDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestShareTargetParamsDataView::GetTextDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->text.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestShareTargetParamsDataView::GetUrlDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->url.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ManifestShareTargetParamsDataView::GetFilesDataView(
    mojo::ArrayDataView<ManifestFileFilterDataView>* output) {
  auto pointer = data_->files.Get();
  *output = mojo::ArrayDataView<ManifestFileFilterDataView>(pointer, context_);
}


inline void ManifestShareTargetDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestShareTargetDataView::GetParamsDataView(
    ManifestShareTargetParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = ManifestShareTargetParamsDataView(pointer, context_);
}


inline void ManifestFileHandlerDataView::GetActionDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->action.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ManifestFileHandlerDataView::GetFilesDataView(
    mojo::ArrayDataView<ManifestFileFilterDataView>* output) {
  auto pointer = data_->files.Get();
  *output = mojo::ArrayDataView<ManifestFileFilterDataView>(pointer, context_);
}


inline void ManifestDebugInfoDataView::GetErrorsDataView(
    mojo::ArrayDataView<ManifestErrorDataView>* output) {
  auto pointer = data_->errors.Get();
  *output = mojo::ArrayDataView<ManifestErrorDataView>(pointer, context_);
}
inline void ManifestDebugInfoDataView::GetRawManifestDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->raw_manifest.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ManifestErrorDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_SHARED_H_