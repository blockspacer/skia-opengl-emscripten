// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/gpu_feature_info.mojom-shared.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-blink-forward.h"

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




namespace WTF {
struct gpu_mojom_internal_GpuFeatureStatus_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::GpuFeatureStatus& value) {
    using utype = std::underlying_type<::gpu::mojom::GpuFeatureStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::GpuFeatureStatus& left, const ::gpu::mojom::GpuFeatureStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::GpuFeatureStatus>
    : public GenericHashTraits<::gpu::mojom::GpuFeatureStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::GpuFeatureStatus& value) {
    return value == static_cast<::gpu::mojom::GpuFeatureStatus>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::GpuFeatureStatus& slot, bool) {
    slot = static_cast<::gpu::mojom::GpuFeatureStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::GpuFeatureStatus& value) {
    return value == static_cast<::gpu::mojom::GpuFeatureStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gpu_mojom_internal_AntialiasingMode_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::AntialiasingMode& value) {
    using utype = std::underlying_type<::gpu::mojom::AntialiasingMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::AntialiasingMode& left, const ::gpu::mojom::AntialiasingMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::AntialiasingMode>
    : public GenericHashTraits<::gpu::mojom::AntialiasingMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::AntialiasingMode& value) {
    return value == static_cast<::gpu::mojom::AntialiasingMode>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::AntialiasingMode& slot, bool) {
    slot = static_cast<::gpu::mojom::AntialiasingMode>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::AntialiasingMode& value) {
    return value == static_cast<::gpu::mojom::AntialiasingMode>(-1000001);
  }
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {





class  WebglPreferences {
 public:
  using DataView = WebglPreferencesDataView;
  using Data_ = internal::WebglPreferences_Data;

  template <typename... Args>
  static WebglPreferencesPtr New(Args&&... args) {
    return WebglPreferencesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebglPreferencesPtr From(const U& u) {
    return mojo::TypeConverter<WebglPreferencesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebglPreferences>::Convert(*this);
  }


  WebglPreferences();

  WebglPreferences(
      AntialiasingMode anti_aliasing_mode,
      uint32_t msaa_sample_count,
      uint32_t max_active_webgl_contexts,
      uint32_t max_active_webgl_contexts_on_worker);

  ~WebglPreferences();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebglPreferencesPtr>
  WebglPreferencesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebglPreferences>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebglPreferences::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebglPreferences::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebglPreferences_UnserializedMessageContext<
            UserType, WebglPreferences::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WebglPreferences::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WebglPreferences::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebglPreferences_UnserializedMessageContext<
            UserType, WebglPreferences::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebglPreferences::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  AntialiasingMode anti_aliasing_mode;
  
  uint32_t msaa_sample_count;
  
  uint32_t max_active_webgl_contexts;
  
  uint32_t max_active_webgl_contexts_on_worker;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  GpuFeatureInfo {
 public:
  using DataView = GpuFeatureInfoDataView;
  using Data_ = internal::GpuFeatureInfo_Data;

  template <typename... Args>
  static GpuFeatureInfoPtr New(Args&&... args) {
    return GpuFeatureInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuFeatureInfoPtr From(const U& u) {
    return mojo::TypeConverter<GpuFeatureInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuFeatureInfo>::Convert(*this);
  }


  GpuFeatureInfo();

  GpuFeatureInfo(
      const WTF::Vector<GpuFeatureStatus>& status_values,
      const WTF::Vector<int32_t>& enabled_gpu_driver_bug_workarounds,
      const WTF::String& disabled_extensions,
      const WTF::String& disabled_webgl_extensions,
      WebglPreferencesPtr webgl_preferences,
      const WTF::Vector<uint32_t>& applied_gpu_blacklist_entries,
      const WTF::Vector<uint32_t>& applied_gpu_driver_bug_list_entries);

  ~GpuFeatureInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuFeatureInfoPtr>
  GpuFeatureInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuFeatureInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuFeatureInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuFeatureInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuFeatureInfo_UnserializedMessageContext<
            UserType, GpuFeatureInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuFeatureInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GpuFeatureInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuFeatureInfo_UnserializedMessageContext<
            UserType, GpuFeatureInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuFeatureInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<GpuFeatureStatus> status_values;
  
  WTF::Vector<int32_t> enabled_gpu_driver_bug_workarounds;
  
  WTF::String disabled_extensions;
  
  WTF::String disabled_webgl_extensions;
  
  WebglPreferencesPtr webgl_preferences;
  
  WTF::Vector<uint32_t> applied_gpu_blacklist_entries;
  
  WTF::Vector<uint32_t> applied_gpu_driver_bug_list_entries;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GpuFeatureInfo);
};

template <typename StructPtrType>
WebglPreferencesPtr WebglPreferences::Clone() const {
  return New(
      mojo::Clone(anti_aliasing_mode),
      mojo::Clone(msaa_sample_count),
      mojo::Clone(max_active_webgl_contexts),
      mojo::Clone(max_active_webgl_contexts_on_worker)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebglPreferences>::value>::type*>
bool WebglPreferences::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->anti_aliasing_mode, other_struct.anti_aliasing_mode))
    return false;
  if (!mojo::Equals(this->msaa_sample_count, other_struct.msaa_sample_count))
    return false;
  if (!mojo::Equals(this->max_active_webgl_contexts, other_struct.max_active_webgl_contexts))
    return false;
  if (!mojo::Equals(this->max_active_webgl_contexts_on_worker, other_struct.max_active_webgl_contexts_on_worker))
    return false;
  return true;
}
template <typename StructPtrType>
GpuFeatureInfoPtr GpuFeatureInfo::Clone() const {
  return New(
      mojo::Clone(status_values),
      mojo::Clone(enabled_gpu_driver_bug_workarounds),
      mojo::Clone(disabled_extensions),
      mojo::Clone(disabled_webgl_extensions),
      mojo::Clone(webgl_preferences),
      mojo::Clone(applied_gpu_blacklist_entries),
      mojo::Clone(applied_gpu_driver_bug_list_entries)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuFeatureInfo>::value>::type*>
bool GpuFeatureInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->status_values, other_struct.status_values))
    return false;
  if (!mojo::Equals(this->enabled_gpu_driver_bug_workarounds, other_struct.enabled_gpu_driver_bug_workarounds))
    return false;
  if (!mojo::Equals(this->disabled_extensions, other_struct.disabled_extensions))
    return false;
  if (!mojo::Equals(this->disabled_webgl_extensions, other_struct.disabled_webgl_extensions))
    return false;
  if (!mojo::Equals(this->webgl_preferences, other_struct.webgl_preferences))
    return false;
  if (!mojo::Equals(this->applied_gpu_blacklist_entries, other_struct.applied_gpu_blacklist_entries))
    return false;
  if (!mojo::Equals(this->applied_gpu_driver_bug_list_entries, other_struct.applied_gpu_driver_bug_list_entries))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::WebglPreferences::DataView,
                                         ::gpu::mojom::blink::WebglPreferencesPtr> {
  static bool IsNull(const ::gpu::mojom::blink::WebglPreferencesPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::WebglPreferencesPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::WebglPreferences::anti_aliasing_mode) anti_aliasing_mode(
      const ::gpu::mojom::blink::WebglPreferencesPtr& input) {
    return input->anti_aliasing_mode;
  }

  static decltype(::gpu::mojom::blink::WebglPreferences::msaa_sample_count) msaa_sample_count(
      const ::gpu::mojom::blink::WebglPreferencesPtr& input) {
    return input->msaa_sample_count;
  }

  static decltype(::gpu::mojom::blink::WebglPreferences::max_active_webgl_contexts) max_active_webgl_contexts(
      const ::gpu::mojom::blink::WebglPreferencesPtr& input) {
    return input->max_active_webgl_contexts;
  }

  static decltype(::gpu::mojom::blink::WebglPreferences::max_active_webgl_contexts_on_worker) max_active_webgl_contexts_on_worker(
      const ::gpu::mojom::blink::WebglPreferencesPtr& input) {
    return input->max_active_webgl_contexts_on_worker;
  }

  static bool Read(::gpu::mojom::blink::WebglPreferences::DataView input, ::gpu::mojom::blink::WebglPreferencesPtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::GpuFeatureInfo::DataView,
                                         ::gpu::mojom::blink::GpuFeatureInfoPtr> {
  static bool IsNull(const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::GpuFeatureInfoPtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::status_values)& status_values(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->status_values;
  }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::enabled_gpu_driver_bug_workarounds)& enabled_gpu_driver_bug_workarounds(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->enabled_gpu_driver_bug_workarounds;
  }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::disabled_extensions)& disabled_extensions(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->disabled_extensions;
  }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::disabled_webgl_extensions)& disabled_webgl_extensions(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->disabled_webgl_extensions;
  }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::webgl_preferences)& webgl_preferences(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->webgl_preferences;
  }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::applied_gpu_blacklist_entries)& applied_gpu_blacklist_entries(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->applied_gpu_blacklist_entries;
  }

  static const decltype(::gpu::mojom::blink::GpuFeatureInfo::applied_gpu_driver_bug_list_entries)& applied_gpu_driver_bug_list_entries(
      const ::gpu::mojom::blink::GpuFeatureInfoPtr& input) {
    return input->applied_gpu_driver_bug_list_entries;
  }

  static bool Read(::gpu::mojom::blink::GpuFeatureInfo::DataView input, ::gpu::mojom::blink::GpuFeatureInfoPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_BLINK_H_