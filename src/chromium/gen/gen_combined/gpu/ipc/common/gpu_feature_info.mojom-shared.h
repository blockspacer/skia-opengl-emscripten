// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_SHARED_H_

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
#include "gpu/ipc/common/gpu_feature_info.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gpu {
namespace mojom {
class WebglPreferencesDataView;

class GpuFeatureInfoDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::WebglPreferencesDataView> {
  using Data = ::gpu::mojom::internal::WebglPreferences_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gpu::mojom::GpuFeatureInfoDataView> {
  using Data = ::gpu::mojom::internal::GpuFeatureInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class GpuFeatureStatus : int32_t {
  
  Enabled,
  
  Blacklisted,
  
  Disabled,
  
  Software,
  
  Undefined,
  
  Max,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, GpuFeatureStatus value);
inline bool IsKnownEnumValue(GpuFeatureStatus value) {
  return internal::GpuFeatureStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AntialiasingMode : int32_t {
  
  kUnspecified,
  
  kNone,
  
  kMSAAImplicitResolve,
  
  kMSAAExplicitResolve,
  
  kScreenSpaceAntialiasing,
  kMinValue = 0,
  kMaxValue = 4,
};

 std::ostream& operator<<(std::ostream& os, AntialiasingMode value);
inline bool IsKnownEnumValue(AntialiasingMode value) {
  return internal::AntialiasingMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class WebglPreferencesDataView {
 public:
  WebglPreferencesDataView() {}

  WebglPreferencesDataView(
      internal::WebglPreferences_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAntiAliasingMode(UserType* output) const {
    auto data_value = data_->anti_aliasing_mode;
    return mojo::internal::Deserialize<::gpu::mojom::AntialiasingMode>(
        data_value, output);
  }

  AntialiasingMode anti_aliasing_mode() const {
    return static_cast<AntialiasingMode>(data_->anti_aliasing_mode);
  }
  uint32_t msaa_sample_count() const {
    return data_->msaa_sample_count;
  }
  uint32_t max_active_webgl_contexts() const {
    return data_->max_active_webgl_contexts;
  }
  uint32_t max_active_webgl_contexts_on_worker() const {
    return data_->max_active_webgl_contexts_on_worker;
  }
 private:
  internal::WebglPreferences_Data* data_ = nullptr;
};

class GpuFeatureInfoDataView {
 public:
  GpuFeatureInfoDataView() {}

  GpuFeatureInfoDataView(
      internal::GpuFeatureInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusValuesDataView(
      mojo::ArrayDataView<GpuFeatureStatus>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatusValues(UserType* output) {
    auto* pointer = data_->status_values.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gpu::mojom::GpuFeatureStatus>>(
        pointer, output, context_);
  }
  inline void GetEnabledGpuDriverBugWorkaroundsDataView(
      mojo::ArrayDataView<int32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEnabledGpuDriverBugWorkarounds(UserType* output) {
    auto* pointer = data_->enabled_gpu_driver_bug_workarounds.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<int32_t>>(
        pointer, output, context_);
  }
  inline void GetDisabledExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisabledExtensions(UserType* output) {
    auto* pointer = data_->disabled_extensions.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDisabledWebglExtensionsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisabledWebglExtensions(UserType* output) {
    auto* pointer = data_->disabled_webgl_extensions.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetWebglPreferencesDataView(
      WebglPreferencesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWebglPreferences(UserType* output) {
    auto* pointer = data_->webgl_preferences.Get();
    return mojo::internal::Deserialize<::gpu::mojom::WebglPreferencesDataView>(
        pointer, output, context_);
  }
  inline void GetAppliedGpuBlacklistEntriesDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAppliedGpuBlacklistEntries(UserType* output) {
    auto* pointer = data_->applied_gpu_blacklist_entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
  inline void GetAppliedGpuDriverBugListEntriesDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAppliedGpuDriverBugListEntries(UserType* output) {
    auto* pointer = data_->applied_gpu_driver_bug_list_entries.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
 private:
  internal::GpuFeatureInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::GpuFeatureStatus>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::GpuFeatureStatus> {};

template <>
struct hash<::gpu::mojom::AntialiasingMode>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::AntialiasingMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::GpuFeatureStatus, ::gpu::mojom::GpuFeatureStatus> {
  static ::gpu::mojom::GpuFeatureStatus ToMojom(::gpu::mojom::GpuFeatureStatus input) { return input; }
  static bool FromMojom(::gpu::mojom::GpuFeatureStatus input, ::gpu::mojom::GpuFeatureStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuFeatureStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::GpuFeatureStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::GpuFeatureStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gpu::mojom::AntialiasingMode, ::gpu::mojom::AntialiasingMode> {
  static ::gpu::mojom::AntialiasingMode ToMojom(::gpu::mojom::AntialiasingMode input) { return input; }
  static bool FromMojom(::gpu::mojom::AntialiasingMode input, ::gpu::mojom::AntialiasingMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::AntialiasingMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::AntialiasingMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::AntialiasingMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::WebglPreferencesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::WebglPreferencesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::WebglPreferences_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gpu::mojom::AntialiasingMode>(
        Traits::anti_aliasing_mode(input), &(*output)->anti_aliasing_mode);
    (*output)->msaa_sample_count = Traits::msaa_sample_count(input);
    (*output)->max_active_webgl_contexts = Traits::max_active_webgl_contexts(input);
    (*output)->max_active_webgl_contexts_on_worker = Traits::max_active_webgl_contexts_on_worker(input);
  }

  static bool Deserialize(::gpu::mojom::internal::WebglPreferences_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::WebglPreferencesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::GpuFeatureInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::GpuFeatureInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gpu::mojom::internal::GpuFeatureInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::status_values(input)) in_status_values = Traits::status_values(input);
    typename decltype((*output)->status_values)::BaseType::BufferWriter
        status_values_writer;
    const mojo::internal::ContainerValidateParams status_values_validate_params(
        0, ::gpu::mojom::internal::GpuFeatureStatus_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::gpu::mojom::GpuFeatureStatus>>(
        in_status_values, buffer, &status_values_writer, &status_values_validate_params,
        context);
    (*output)->status_values.Set(
        status_values_writer.is_null() ? nullptr : status_values_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->status_values.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null status_values in GpuFeatureInfo struct");
    decltype(Traits::enabled_gpu_driver_bug_workarounds(input)) in_enabled_gpu_driver_bug_workarounds = Traits::enabled_gpu_driver_bug_workarounds(input);
    typename decltype((*output)->enabled_gpu_driver_bug_workarounds)::BaseType::BufferWriter
        enabled_gpu_driver_bug_workarounds_writer;
    const mojo::internal::ContainerValidateParams enabled_gpu_driver_bug_workarounds_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<int32_t>>(
        in_enabled_gpu_driver_bug_workarounds, buffer, &enabled_gpu_driver_bug_workarounds_writer, &enabled_gpu_driver_bug_workarounds_validate_params,
        context);
    (*output)->enabled_gpu_driver_bug_workarounds.Set(
        enabled_gpu_driver_bug_workarounds_writer.is_null() ? nullptr : enabled_gpu_driver_bug_workarounds_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->enabled_gpu_driver_bug_workarounds.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null enabled_gpu_driver_bug_workarounds in GpuFeatureInfo struct");
    decltype(Traits::disabled_extensions(input)) in_disabled_extensions = Traits::disabled_extensions(input);
    typename decltype((*output)->disabled_extensions)::BaseType::BufferWriter
        disabled_extensions_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_disabled_extensions, buffer, &disabled_extensions_writer, context);
    (*output)->disabled_extensions.Set(
        disabled_extensions_writer.is_null() ? nullptr : disabled_extensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->disabled_extensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null disabled_extensions in GpuFeatureInfo struct");
    decltype(Traits::disabled_webgl_extensions(input)) in_disabled_webgl_extensions = Traits::disabled_webgl_extensions(input);
    typename decltype((*output)->disabled_webgl_extensions)::BaseType::BufferWriter
        disabled_webgl_extensions_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_disabled_webgl_extensions, buffer, &disabled_webgl_extensions_writer, context);
    (*output)->disabled_webgl_extensions.Set(
        disabled_webgl_extensions_writer.is_null() ? nullptr : disabled_webgl_extensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->disabled_webgl_extensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null disabled_webgl_extensions in GpuFeatureInfo struct");
    decltype(Traits::webgl_preferences(input)) in_webgl_preferences = Traits::webgl_preferences(input);
    typename decltype((*output)->webgl_preferences)::BaseType::BufferWriter
        webgl_preferences_writer;
    mojo::internal::Serialize<::gpu::mojom::WebglPreferencesDataView>(
        in_webgl_preferences, buffer, &webgl_preferences_writer, context);
    (*output)->webgl_preferences.Set(
        webgl_preferences_writer.is_null() ? nullptr : webgl_preferences_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->webgl_preferences.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null webgl_preferences in GpuFeatureInfo struct");
    decltype(Traits::applied_gpu_blacklist_entries(input)) in_applied_gpu_blacklist_entries = Traits::applied_gpu_blacklist_entries(input);
    typename decltype((*output)->applied_gpu_blacklist_entries)::BaseType::BufferWriter
        applied_gpu_blacklist_entries_writer;
    const mojo::internal::ContainerValidateParams applied_gpu_blacklist_entries_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
        in_applied_gpu_blacklist_entries, buffer, &applied_gpu_blacklist_entries_writer, &applied_gpu_blacklist_entries_validate_params,
        context);
    (*output)->applied_gpu_blacklist_entries.Set(
        applied_gpu_blacklist_entries_writer.is_null() ? nullptr : applied_gpu_blacklist_entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->applied_gpu_blacklist_entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null applied_gpu_blacklist_entries in GpuFeatureInfo struct");
    decltype(Traits::applied_gpu_driver_bug_list_entries(input)) in_applied_gpu_driver_bug_list_entries = Traits::applied_gpu_driver_bug_list_entries(input);
    typename decltype((*output)->applied_gpu_driver_bug_list_entries)::BaseType::BufferWriter
        applied_gpu_driver_bug_list_entries_writer;
    const mojo::internal::ContainerValidateParams applied_gpu_driver_bug_list_entries_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint32_t>>(
        in_applied_gpu_driver_bug_list_entries, buffer, &applied_gpu_driver_bug_list_entries_writer, &applied_gpu_driver_bug_list_entries_validate_params,
        context);
    (*output)->applied_gpu_driver_bug_list_entries.Set(
        applied_gpu_driver_bug_list_entries_writer.is_null() ? nullptr : applied_gpu_driver_bug_list_entries_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->applied_gpu_driver_bug_list_entries.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null applied_gpu_driver_bug_list_entries in GpuFeatureInfo struct");
  }

  static bool Deserialize(::gpu::mojom::internal::GpuFeatureInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::GpuFeatureInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {



inline void GpuFeatureInfoDataView::GetStatusValuesDataView(
    mojo::ArrayDataView<GpuFeatureStatus>* output) {
  auto pointer = data_->status_values.Get();
  *output = mojo::ArrayDataView<GpuFeatureStatus>(pointer, context_);
}
inline void GpuFeatureInfoDataView::GetEnabledGpuDriverBugWorkaroundsDataView(
    mojo::ArrayDataView<int32_t>* output) {
  auto pointer = data_->enabled_gpu_driver_bug_workarounds.Get();
  *output = mojo::ArrayDataView<int32_t>(pointer, context_);
}
inline void GpuFeatureInfoDataView::GetDisabledExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->disabled_extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuFeatureInfoDataView::GetDisabledWebglExtensionsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->disabled_webgl_extensions.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void GpuFeatureInfoDataView::GetWebglPreferencesDataView(
    WebglPreferencesDataView* output) {
  auto pointer = data_->webgl_preferences.Get();
  *output = WebglPreferencesDataView(pointer, context_);
}
inline void GpuFeatureInfoDataView::GetAppliedGpuBlacklistEntriesDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->applied_gpu_blacklist_entries.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}
inline void GpuFeatureInfoDataView::GetAppliedGpuDriverBugListEntriesDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->applied_gpu_driver_bug_list_entries.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_SHARED_H_