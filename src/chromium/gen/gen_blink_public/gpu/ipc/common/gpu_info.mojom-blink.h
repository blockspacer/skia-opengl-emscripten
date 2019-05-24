// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/gpu_info.mojom-shared.h"
#include "gpu/ipc/common/gpu_info.mojom-blink-forward.h"
#include "gpu/ipc/common/dx_diag_node.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

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
struct gpu_mojom_internal_VideoCodecProfile_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::VideoCodecProfile& value) {
    using utype = std::underlying_type<::gpu::mojom::VideoCodecProfile>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::VideoCodecProfile& left, const ::gpu::mojom::VideoCodecProfile& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::VideoCodecProfile>
    : public GenericHashTraits<::gpu::mojom::VideoCodecProfile> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::VideoCodecProfile& value) {
    return value == static_cast<::gpu::mojom::VideoCodecProfile>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::VideoCodecProfile& slot, bool) {
    slot = static_cast<::gpu::mojom::VideoCodecProfile>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::VideoCodecProfile& value) {
    return value == static_cast<::gpu::mojom::VideoCodecProfile>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gpu_mojom_internal_ImageDecodeAcceleratorType_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::ImageDecodeAcceleratorType& value) {
    using utype = std::underlying_type<::gpu::mojom::ImageDecodeAcceleratorType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::ImageDecodeAcceleratorType& left, const ::gpu::mojom::ImageDecodeAcceleratorType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::ImageDecodeAcceleratorType>
    : public GenericHashTraits<::gpu::mojom::ImageDecodeAcceleratorType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::ImageDecodeAcceleratorType& value) {
    return value == static_cast<::gpu::mojom::ImageDecodeAcceleratorType>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::ImageDecodeAcceleratorType& slot, bool) {
    slot = static_cast<::gpu::mojom::ImageDecodeAcceleratorType>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::ImageDecodeAcceleratorType& value) {
    return value == static_cast<::gpu::mojom::ImageDecodeAcceleratorType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gpu_mojom_internal_ImageDecodeAcceleratorSubsampling_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::ImageDecodeAcceleratorSubsampling& value) {
    using utype = std::underlying_type<::gpu::mojom::ImageDecodeAcceleratorSubsampling>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::ImageDecodeAcceleratorSubsampling& left, const ::gpu::mojom::ImageDecodeAcceleratorSubsampling& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::ImageDecodeAcceleratorSubsampling>
    : public GenericHashTraits<::gpu::mojom::ImageDecodeAcceleratorSubsampling> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::gpu::mojom::ImageDecodeAcceleratorSubsampling& value) {
    return value == static_cast<::gpu::mojom::ImageDecodeAcceleratorSubsampling>(-1000000);
  }
  static void ConstructDeletedValue(::gpu::mojom::ImageDecodeAcceleratorSubsampling& slot, bool) {
    slot = static_cast<::gpu::mojom::ImageDecodeAcceleratorSubsampling>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::ImageDecodeAcceleratorSubsampling& value) {
    return value == static_cast<::gpu::mojom::ImageDecodeAcceleratorSubsampling>(-1000001);
  }
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {













class  GpuDevice {
 public:
  using DataView = GpuDeviceDataView;
  using Data_ = internal::GpuDevice_Data;

  template <typename... Args>
  static GpuDevicePtr New(Args&&... args) {
    return GpuDevicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuDevicePtr From(const U& u) {
    return mojo::TypeConverter<GpuDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuDevice>::Convert(*this);
  }


  GpuDevice();

  GpuDevice(
      uint32_t vendor_id,
      uint32_t device_id,
      bool active,
      const WTF::String& vendor_string,
      const WTF::String& device_string,
      const WTF::String& driver_vendor,
      const WTF::String& driver_version,
      const WTF::String& driver_date,
      int32_t cuda_compute_capability_major);

  ~GpuDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuDevicePtr>
  GpuDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuDevice::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuDevice::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuDevice_UnserializedMessageContext<
            UserType, GpuDevice::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuDevice::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GpuDevice::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuDevice_UnserializedMessageContext<
            UserType, GpuDevice::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuDevice::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t vendor_id;
  
  uint32_t device_id;
  
  bool active;
  
  WTF::String vendor_string;
  
  WTF::String device_string;
  
  WTF::String driver_vendor;
  
  WTF::String driver_version;
  
  WTF::String driver_date;
  
  int32_t cuda_compute_capability_major;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoDecodeAcceleratorSupportedProfile {
 public:
  using DataView = VideoDecodeAcceleratorSupportedProfileDataView;
  using Data_ = internal::VideoDecodeAcceleratorSupportedProfile_Data;

  template <typename... Args>
  static VideoDecodeAcceleratorSupportedProfilePtr New(Args&&... args) {
    return VideoDecodeAcceleratorSupportedProfilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoDecodeAcceleratorSupportedProfilePtr From(const U& u) {
    return mojo::TypeConverter<VideoDecodeAcceleratorSupportedProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecodeAcceleratorSupportedProfile>::Convert(*this);
  }


  VideoDecodeAcceleratorSupportedProfile();

  VideoDecodeAcceleratorSupportedProfile(
      VideoCodecProfile profile,
      const ::blink::WebSize& max_resolution,
      const ::blink::WebSize& min_resolution,
      bool encrypted_only);

  ~VideoDecodeAcceleratorSupportedProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecodeAcceleratorSupportedProfilePtr>
  VideoDecodeAcceleratorSupportedProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecodeAcceleratorSupportedProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoDecodeAcceleratorSupportedProfile::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoDecodeAcceleratorSupportedProfile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoDecodeAcceleratorSupportedProfile_UnserializedMessageContext<
            UserType, VideoDecodeAcceleratorSupportedProfile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoDecodeAcceleratorSupportedProfile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoDecodeAcceleratorSupportedProfile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoDecodeAcceleratorSupportedProfile_UnserializedMessageContext<
            UserType, VideoDecodeAcceleratorSupportedProfile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoDecodeAcceleratorSupportedProfile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoCodecProfile profile;
  
  ::blink::WebSize max_resolution;
  
  ::blink::WebSize min_resolution;
  
  bool encrypted_only;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoDecodeAcceleratorCapabilities {
 public:
  using DataView = VideoDecodeAcceleratorCapabilitiesDataView;
  using Data_ = internal::VideoDecodeAcceleratorCapabilities_Data;

  template <typename... Args>
  static VideoDecodeAcceleratorCapabilitiesPtr New(Args&&... args) {
    return VideoDecodeAcceleratorCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoDecodeAcceleratorCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VideoDecodeAcceleratorCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecodeAcceleratorCapabilities>::Convert(*this);
  }


  VideoDecodeAcceleratorCapabilities();

  VideoDecodeAcceleratorCapabilities(
      WTF::Vector<VideoDecodeAcceleratorSupportedProfilePtr> supported_profiles,
      uint32_t flags);

  ~VideoDecodeAcceleratorCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecodeAcceleratorCapabilitiesPtr>
  VideoDecodeAcceleratorCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecodeAcceleratorCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoDecodeAcceleratorCapabilities::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoDecodeAcceleratorCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoDecodeAcceleratorCapabilities_UnserializedMessageContext<
            UserType, VideoDecodeAcceleratorCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoDecodeAcceleratorCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoDecodeAcceleratorCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoDecodeAcceleratorCapabilities_UnserializedMessageContext<
            UserType, VideoDecodeAcceleratorCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoDecodeAcceleratorCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<VideoDecodeAcceleratorSupportedProfilePtr> supported_profiles;
  
  uint32_t flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoDecodeAcceleratorCapabilities);
};





class  VideoEncodeAcceleratorSupportedProfile {
 public:
  using DataView = VideoEncodeAcceleratorSupportedProfileDataView;
  using Data_ = internal::VideoEncodeAcceleratorSupportedProfile_Data;

  template <typename... Args>
  static VideoEncodeAcceleratorSupportedProfilePtr New(Args&&... args) {
    return VideoEncodeAcceleratorSupportedProfilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoEncodeAcceleratorSupportedProfilePtr From(const U& u) {
    return mojo::TypeConverter<VideoEncodeAcceleratorSupportedProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoEncodeAcceleratorSupportedProfile>::Convert(*this);
  }


  VideoEncodeAcceleratorSupportedProfile();

  VideoEncodeAcceleratorSupportedProfile(
      VideoCodecProfile profile,
      const ::blink::WebSize& max_resolution,
      uint32_t max_framerate_numerator,
      uint32_t max_framerate_denominator);

  ~VideoEncodeAcceleratorSupportedProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoEncodeAcceleratorSupportedProfilePtr>
  VideoEncodeAcceleratorSupportedProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoEncodeAcceleratorSupportedProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoEncodeAcceleratorSupportedProfile::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoEncodeAcceleratorSupportedProfile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoEncodeAcceleratorSupportedProfile_UnserializedMessageContext<
            UserType, VideoEncodeAcceleratorSupportedProfile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoEncodeAcceleratorSupportedProfile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoEncodeAcceleratorSupportedProfile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoEncodeAcceleratorSupportedProfile_UnserializedMessageContext<
            UserType, VideoEncodeAcceleratorSupportedProfile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoEncodeAcceleratorSupportedProfile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  VideoCodecProfile profile;
  
  ::blink::WebSize max_resolution;
  
  uint32_t max_framerate_numerator;
  
  uint32_t max_framerate_denominator;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  ImageDecodeAcceleratorSupportedProfile {
 public:
  using DataView = ImageDecodeAcceleratorSupportedProfileDataView;
  using Data_ = internal::ImageDecodeAcceleratorSupportedProfile_Data;

  template <typename... Args>
  static ImageDecodeAcceleratorSupportedProfilePtr New(Args&&... args) {
    return ImageDecodeAcceleratorSupportedProfilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImageDecodeAcceleratorSupportedProfilePtr From(const U& u) {
    return mojo::TypeConverter<ImageDecodeAcceleratorSupportedProfilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImageDecodeAcceleratorSupportedProfile>::Convert(*this);
  }


  ImageDecodeAcceleratorSupportedProfile();

  ImageDecodeAcceleratorSupportedProfile(
      ImageDecodeAcceleratorType image_type,
      const ::blink::WebSize& min_encoded_dimensions,
      const ::blink::WebSize& max_encoded_dimensions,
      const WTF::Vector<ImageDecodeAcceleratorSubsampling>& subsamplings);

  ~ImageDecodeAcceleratorSupportedProfile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImageDecodeAcceleratorSupportedProfilePtr>
  ImageDecodeAcceleratorSupportedProfilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImageDecodeAcceleratorSupportedProfile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImageDecodeAcceleratorSupportedProfile::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImageDecodeAcceleratorSupportedProfile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImageDecodeAcceleratorSupportedProfile_UnserializedMessageContext<
            UserType, ImageDecodeAcceleratorSupportedProfile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImageDecodeAcceleratorSupportedProfile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ImageDecodeAcceleratorSupportedProfile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImageDecodeAcceleratorSupportedProfile_UnserializedMessageContext<
            UserType, ImageDecodeAcceleratorSupportedProfile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImageDecodeAcceleratorSupportedProfile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ImageDecodeAcceleratorType image_type;
  
  ::blink::WebSize min_encoded_dimensions;
  
  ::blink::WebSize max_encoded_dimensions;
  
  WTF::Vector<ImageDecodeAcceleratorSubsampling> subsamplings;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  GpuInfo {
 public:
  using DataView = GpuInfoDataView;
  using Data_ = internal::GpuInfo_Data;

  template <typename... Args>
  static GpuInfoPtr New(Args&&... args) {
    return GpuInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuInfoPtr From(const U& u) {
    return mojo::TypeConverter<GpuInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuInfo>::Convert(*this);
  }


  GpuInfo();

  GpuInfo(
      base::TimeDelta initialization_time,
      bool optimus,
      bool amd_switchable,
      GpuDevicePtr gpu,
      WTF::Vector<GpuDevicePtr> secondary_gpus,
      const WTF::String& pixel_shader_version,
      const WTF::String& vertex_shader_version,
      const WTF::String& max_msaa_samples,
      const WTF::String& machine_model_name,
      const WTF::String& machine_model_version,
      const WTF::String& gl_version,
      const WTF::String& gl_vendor,
      const WTF::String& gl_renderer,
      const WTF::String& gl_extensions,
      const WTF::String& gl_ws_vendor,
      const WTF::String& gl_ws_version,
      const WTF::String& gl_ws_extensions,
      uint32_t gl_reset_notification_strategy,
      bool software_rendering,
      const WTF::String& direct_rendering_version,
      bool sandboxed,
      bool in_process_gpu,
      bool passthrough_cmd_decoder,
      bool can_support_threaded_texture_mailbox,
      VideoDecodeAcceleratorCapabilitiesPtr video_decode_accelerator_capabilities,
      WTF::Vector<VideoEncodeAcceleratorSupportedProfilePtr> video_encode_accelerator_supported_profiles,
      bool jpeg_decode_accelerator_supported,
      WTF::Vector<ImageDecodeAcceleratorSupportedProfilePtr> image_decode_accelerator_supported_profiles,
      uint64_t system_visual,
      uint64_t rgba_visual,
      bool oop_rasterization_supported);

  ~GpuInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuInfoPtr>
  GpuInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuInfo_UnserializedMessageContext<
            UserType, GpuInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GpuInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuInfo_UnserializedMessageContext<
            UserType, GpuInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeDelta initialization_time;
  
  bool optimus;
  
  bool amd_switchable;
  
  GpuDevicePtr gpu;
  
  WTF::Vector<GpuDevicePtr> secondary_gpus;
  
  WTF::String pixel_shader_version;
  
  WTF::String vertex_shader_version;
  
  WTF::String max_msaa_samples;
  
  WTF::String machine_model_name;
  
  WTF::String machine_model_version;
  
  WTF::String gl_version;
  
  WTF::String gl_vendor;
  
  WTF::String gl_renderer;
  
  WTF::String gl_extensions;
  
  WTF::String gl_ws_vendor;
  
  WTF::String gl_ws_version;
  
  WTF::String gl_ws_extensions;
  
  uint32_t gl_reset_notification_strategy;
  
  bool software_rendering;
  
  WTF::String direct_rendering_version;
  
  bool sandboxed;
  
  bool in_process_gpu;
  
  bool passthrough_cmd_decoder;
  
  bool can_support_threaded_texture_mailbox;
  
  VideoDecodeAcceleratorCapabilitiesPtr video_decode_accelerator_capabilities;
  
  WTF::Vector<VideoEncodeAcceleratorSupportedProfilePtr> video_encode_accelerator_supported_profiles;
  
  bool jpeg_decode_accelerator_supported;
  
  WTF::Vector<ImageDecodeAcceleratorSupportedProfilePtr> image_decode_accelerator_supported_profiles;
  
  uint64_t system_visual;
  
  uint64_t rgba_visual;
  
  bool oop_rasterization_supported;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GpuInfo);
};

template <typename StructPtrType>
GpuDevicePtr GpuDevice::Clone() const {
  return New(
      mojo::Clone(vendor_id),
      mojo::Clone(device_id),
      mojo::Clone(active),
      mojo::Clone(vendor_string),
      mojo::Clone(device_string),
      mojo::Clone(driver_vendor),
      mojo::Clone(driver_version),
      mojo::Clone(driver_date),
      mojo::Clone(cuda_compute_capability_major)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuDevice>::value>::type*>
bool GpuDevice::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->vendor_id, other_struct.vendor_id))
    return false;
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->active, other_struct.active))
    return false;
  if (!mojo::Equals(this->vendor_string, other_struct.vendor_string))
    return false;
  if (!mojo::Equals(this->device_string, other_struct.device_string))
    return false;
  if (!mojo::Equals(this->driver_vendor, other_struct.driver_vendor))
    return false;
  if (!mojo::Equals(this->driver_version, other_struct.driver_version))
    return false;
  if (!mojo::Equals(this->driver_date, other_struct.driver_date))
    return false;
  if (!mojo::Equals(this->cuda_compute_capability_major, other_struct.cuda_compute_capability_major))
    return false;
  return true;
}
template <typename StructPtrType>
VideoDecodeAcceleratorSupportedProfilePtr VideoDecodeAcceleratorSupportedProfile::Clone() const {
  return New(
      mojo::Clone(profile),
      mojo::Clone(max_resolution),
      mojo::Clone(min_resolution),
      mojo::Clone(encrypted_only)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecodeAcceleratorSupportedProfile>::value>::type*>
bool VideoDecodeAcceleratorSupportedProfile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->profile, other_struct.profile))
    return false;
  if (!mojo::Equals(this->max_resolution, other_struct.max_resolution))
    return false;
  if (!mojo::Equals(this->min_resolution, other_struct.min_resolution))
    return false;
  if (!mojo::Equals(this->encrypted_only, other_struct.encrypted_only))
    return false;
  return true;
}
template <typename StructPtrType>
VideoDecodeAcceleratorCapabilitiesPtr VideoDecodeAcceleratorCapabilities::Clone() const {
  return New(
      mojo::Clone(supported_profiles),
      mojo::Clone(flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecodeAcceleratorCapabilities>::value>::type*>
bool VideoDecodeAcceleratorCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->supported_profiles, other_struct.supported_profiles))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  return true;
}
template <typename StructPtrType>
VideoEncodeAcceleratorSupportedProfilePtr VideoEncodeAcceleratorSupportedProfile::Clone() const {
  return New(
      mojo::Clone(profile),
      mojo::Clone(max_resolution),
      mojo::Clone(max_framerate_numerator),
      mojo::Clone(max_framerate_denominator)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoEncodeAcceleratorSupportedProfile>::value>::type*>
bool VideoEncodeAcceleratorSupportedProfile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->profile, other_struct.profile))
    return false;
  if (!mojo::Equals(this->max_resolution, other_struct.max_resolution))
    return false;
  if (!mojo::Equals(this->max_framerate_numerator, other_struct.max_framerate_numerator))
    return false;
  if (!mojo::Equals(this->max_framerate_denominator, other_struct.max_framerate_denominator))
    return false;
  return true;
}
template <typename StructPtrType>
ImageDecodeAcceleratorSupportedProfilePtr ImageDecodeAcceleratorSupportedProfile::Clone() const {
  return New(
      mojo::Clone(image_type),
      mojo::Clone(min_encoded_dimensions),
      mojo::Clone(max_encoded_dimensions),
      mojo::Clone(subsamplings)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImageDecodeAcceleratorSupportedProfile>::value>::type*>
bool ImageDecodeAcceleratorSupportedProfile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image_type, other_struct.image_type))
    return false;
  if (!mojo::Equals(this->min_encoded_dimensions, other_struct.min_encoded_dimensions))
    return false;
  if (!mojo::Equals(this->max_encoded_dimensions, other_struct.max_encoded_dimensions))
    return false;
  if (!mojo::Equals(this->subsamplings, other_struct.subsamplings))
    return false;
  return true;
}
template <typename StructPtrType>
GpuInfoPtr GpuInfo::Clone() const {
  return New(
      mojo::Clone(initialization_time),
      mojo::Clone(optimus),
      mojo::Clone(amd_switchable),
      mojo::Clone(gpu),
      mojo::Clone(secondary_gpus),
      mojo::Clone(pixel_shader_version),
      mojo::Clone(vertex_shader_version),
      mojo::Clone(max_msaa_samples),
      mojo::Clone(machine_model_name),
      mojo::Clone(machine_model_version),
      mojo::Clone(gl_version),
      mojo::Clone(gl_vendor),
      mojo::Clone(gl_renderer),
      mojo::Clone(gl_extensions),
      mojo::Clone(gl_ws_vendor),
      mojo::Clone(gl_ws_version),
      mojo::Clone(gl_ws_extensions),
      mojo::Clone(gl_reset_notification_strategy),
      mojo::Clone(software_rendering),
      mojo::Clone(direct_rendering_version),
      mojo::Clone(sandboxed),
      mojo::Clone(in_process_gpu),
      mojo::Clone(passthrough_cmd_decoder),
      mojo::Clone(can_support_threaded_texture_mailbox),
      mojo::Clone(video_decode_accelerator_capabilities),
      mojo::Clone(video_encode_accelerator_supported_profiles),
      mojo::Clone(jpeg_decode_accelerator_supported),
      mojo::Clone(image_decode_accelerator_supported_profiles),
      mojo::Clone(system_visual),
      mojo::Clone(rgba_visual),
      mojo::Clone(oop_rasterization_supported)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuInfo>::value>::type*>
bool GpuInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->initialization_time, other_struct.initialization_time))
    return false;
  if (!mojo::Equals(this->optimus, other_struct.optimus))
    return false;
  if (!mojo::Equals(this->amd_switchable, other_struct.amd_switchable))
    return false;
  if (!mojo::Equals(this->gpu, other_struct.gpu))
    return false;
  if (!mojo::Equals(this->secondary_gpus, other_struct.secondary_gpus))
    return false;
  if (!mojo::Equals(this->pixel_shader_version, other_struct.pixel_shader_version))
    return false;
  if (!mojo::Equals(this->vertex_shader_version, other_struct.vertex_shader_version))
    return false;
  if (!mojo::Equals(this->max_msaa_samples, other_struct.max_msaa_samples))
    return false;
  if (!mojo::Equals(this->machine_model_name, other_struct.machine_model_name))
    return false;
  if (!mojo::Equals(this->machine_model_version, other_struct.machine_model_version))
    return false;
  if (!mojo::Equals(this->gl_version, other_struct.gl_version))
    return false;
  if (!mojo::Equals(this->gl_vendor, other_struct.gl_vendor))
    return false;
  if (!mojo::Equals(this->gl_renderer, other_struct.gl_renderer))
    return false;
  if (!mojo::Equals(this->gl_extensions, other_struct.gl_extensions))
    return false;
  if (!mojo::Equals(this->gl_ws_vendor, other_struct.gl_ws_vendor))
    return false;
  if (!mojo::Equals(this->gl_ws_version, other_struct.gl_ws_version))
    return false;
  if (!mojo::Equals(this->gl_ws_extensions, other_struct.gl_ws_extensions))
    return false;
  if (!mojo::Equals(this->gl_reset_notification_strategy, other_struct.gl_reset_notification_strategy))
    return false;
  if (!mojo::Equals(this->software_rendering, other_struct.software_rendering))
    return false;
  if (!mojo::Equals(this->direct_rendering_version, other_struct.direct_rendering_version))
    return false;
  if (!mojo::Equals(this->sandboxed, other_struct.sandboxed))
    return false;
  if (!mojo::Equals(this->in_process_gpu, other_struct.in_process_gpu))
    return false;
  if (!mojo::Equals(this->passthrough_cmd_decoder, other_struct.passthrough_cmd_decoder))
    return false;
  if (!mojo::Equals(this->can_support_threaded_texture_mailbox, other_struct.can_support_threaded_texture_mailbox))
    return false;
  if (!mojo::Equals(this->video_decode_accelerator_capabilities, other_struct.video_decode_accelerator_capabilities))
    return false;
  if (!mojo::Equals(this->video_encode_accelerator_supported_profiles, other_struct.video_encode_accelerator_supported_profiles))
    return false;
  if (!mojo::Equals(this->jpeg_decode_accelerator_supported, other_struct.jpeg_decode_accelerator_supported))
    return false;
  if (!mojo::Equals(this->image_decode_accelerator_supported_profiles, other_struct.image_decode_accelerator_supported_profiles))
    return false;
  if (!mojo::Equals(this->system_visual, other_struct.system_visual))
    return false;
  if (!mojo::Equals(this->rgba_visual, other_struct.rgba_visual))
    return false;
  if (!mojo::Equals(this->oop_rasterization_supported, other_struct.oop_rasterization_supported))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::GpuDevice::DataView,
                                         ::gpu::mojom::blink::GpuDevicePtr> {
  static bool IsNull(const ::gpu::mojom::blink::GpuDevicePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::GpuDevicePtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::GpuDevice::vendor_id) vendor_id(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->vendor_id;
  }

  static decltype(::gpu::mojom::blink::GpuDevice::device_id) device_id(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->device_id;
  }

  static decltype(::gpu::mojom::blink::GpuDevice::active) active(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->active;
  }

  static const decltype(::gpu::mojom::blink::GpuDevice::vendor_string)& vendor_string(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->vendor_string;
  }

  static const decltype(::gpu::mojom::blink::GpuDevice::device_string)& device_string(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->device_string;
  }

  static const decltype(::gpu::mojom::blink::GpuDevice::driver_vendor)& driver_vendor(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->driver_vendor;
  }

  static const decltype(::gpu::mojom::blink::GpuDevice::driver_version)& driver_version(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->driver_version;
  }

  static const decltype(::gpu::mojom::blink::GpuDevice::driver_date)& driver_date(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->driver_date;
  }

  static decltype(::gpu::mojom::blink::GpuDevice::cuda_compute_capability_major) cuda_compute_capability_major(
      const ::gpu::mojom::blink::GpuDevicePtr& input) {
    return input->cuda_compute_capability_major;
  }

  static bool Read(::gpu::mojom::blink::GpuDevice::DataView input, ::gpu::mojom::blink::GpuDevicePtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfile::DataView,
                                         ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr> {
  static bool IsNull(const ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfile::profile) profile(
      const ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->profile;
  }

  static const decltype(::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfile::max_resolution)& max_resolution(
      const ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->max_resolution;
  }

  static const decltype(::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfile::min_resolution)& min_resolution(
      const ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->min_resolution;
  }

  static decltype(::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfile::encrypted_only) encrypted_only(
      const ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr& input) {
    return input->encrypted_only;
  }

  static bool Read(::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfile::DataView input, ::gpu::mojom::blink::VideoDecodeAcceleratorSupportedProfilePtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::VideoDecodeAcceleratorCapabilities::DataView,
                                         ::gpu::mojom::blink::VideoDecodeAcceleratorCapabilitiesPtr> {
  static bool IsNull(const ::gpu::mojom::blink::VideoDecodeAcceleratorCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::VideoDecodeAcceleratorCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::blink::VideoDecodeAcceleratorCapabilities::supported_profiles)& supported_profiles(
      const ::gpu::mojom::blink::VideoDecodeAcceleratorCapabilitiesPtr& input) {
    return input->supported_profiles;
  }

  static decltype(::gpu::mojom::blink::VideoDecodeAcceleratorCapabilities::flags) flags(
      const ::gpu::mojom::blink::VideoDecodeAcceleratorCapabilitiesPtr& input) {
    return input->flags;
  }

  static bool Read(::gpu::mojom::blink::VideoDecodeAcceleratorCapabilities::DataView input, ::gpu::mojom::blink::VideoDecodeAcceleratorCapabilitiesPtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfile::DataView,
                                         ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr> {
  static bool IsNull(const ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfile::profile) profile(
      const ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->profile;
  }

  static const decltype(::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfile::max_resolution)& max_resolution(
      const ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->max_resolution;
  }

  static decltype(::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfile::max_framerate_numerator) max_framerate_numerator(
      const ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->max_framerate_numerator;
  }

  static decltype(::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfile::max_framerate_denominator) max_framerate_denominator(
      const ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr& input) {
    return input->max_framerate_denominator;
  }

  static bool Read(::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfile::DataView input, ::gpu::mojom::blink::VideoEncodeAcceleratorSupportedProfilePtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfile::DataView,
                                         ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr> {
  static bool IsNull(const ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfile::image_type) image_type(
      const ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr& input) {
    return input->image_type;
  }

  static const decltype(::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfile::min_encoded_dimensions)& min_encoded_dimensions(
      const ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr& input) {
    return input->min_encoded_dimensions;
  }

  static const decltype(::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfile::max_encoded_dimensions)& max_encoded_dimensions(
      const ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr& input) {
    return input->max_encoded_dimensions;
  }

  static const decltype(::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfile::subsamplings)& subsamplings(
      const ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr& input) {
    return input->subsamplings;
  }

  static bool Read(::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfile::DataView input, ::gpu::mojom::blink::ImageDecodeAcceleratorSupportedProfilePtr* output);
};


template <>
struct  StructTraits<::gpu::mojom::blink::GpuInfo::DataView,
                                         ::gpu::mojom::blink::GpuInfoPtr> {
  static bool IsNull(const ::gpu::mojom::blink::GpuInfoPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::GpuInfoPtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::blink::GpuInfo::initialization_time)& initialization_time(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->initialization_time;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::optimus) optimus(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->optimus;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::amd_switchable) amd_switchable(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->amd_switchable;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gpu)& gpu(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gpu;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::secondary_gpus)& secondary_gpus(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->secondary_gpus;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::pixel_shader_version)& pixel_shader_version(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->pixel_shader_version;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::vertex_shader_version)& vertex_shader_version(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->vertex_shader_version;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::max_msaa_samples)& max_msaa_samples(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->max_msaa_samples;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::machine_model_name)& machine_model_name(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->machine_model_name;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::machine_model_version)& machine_model_version(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->machine_model_version;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_version)& gl_version(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_version;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_vendor)& gl_vendor(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_vendor;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_renderer)& gl_renderer(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_renderer;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_extensions)& gl_extensions(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_extensions;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_ws_vendor)& gl_ws_vendor(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_ws_vendor;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_ws_version)& gl_ws_version(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_ws_version;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::gl_ws_extensions)& gl_ws_extensions(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_ws_extensions;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::gl_reset_notification_strategy) gl_reset_notification_strategy(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->gl_reset_notification_strategy;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::software_rendering) software_rendering(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->software_rendering;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::direct_rendering_version)& direct_rendering_version(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->direct_rendering_version;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::sandboxed) sandboxed(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->sandboxed;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::in_process_gpu) in_process_gpu(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->in_process_gpu;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::passthrough_cmd_decoder) passthrough_cmd_decoder(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->passthrough_cmd_decoder;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::can_support_threaded_texture_mailbox) can_support_threaded_texture_mailbox(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->can_support_threaded_texture_mailbox;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::video_decode_accelerator_capabilities)& video_decode_accelerator_capabilities(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->video_decode_accelerator_capabilities;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::video_encode_accelerator_supported_profiles)& video_encode_accelerator_supported_profiles(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->video_encode_accelerator_supported_profiles;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::jpeg_decode_accelerator_supported) jpeg_decode_accelerator_supported(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->jpeg_decode_accelerator_supported;
  }

  static const decltype(::gpu::mojom::blink::GpuInfo::image_decode_accelerator_supported_profiles)& image_decode_accelerator_supported_profiles(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->image_decode_accelerator_supported_profiles;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::system_visual) system_visual(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->system_visual;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::rgba_visual) rgba_visual(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->rgba_visual;
  }

  static decltype(::gpu::mojom::blink::GpuInfo::oop_rasterization_supported) oop_rasterization_supported(
      const ::gpu::mojom::blink::GpuInfoPtr& input) {
    return input->oop_rasterization_supported;
  }

  static bool Read(::gpu::mojom::blink::GpuInfo::DataView input, ::gpu::mojom::blink::GpuInfoPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_BLINK_H_