// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-shared.h"
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
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
struct blink_mojom_internal_AppCacheStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AppCacheStatus& value) {
    using utype = std::underlying_type<::blink::mojom::AppCacheStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AppCacheStatus& left, const ::blink::mojom::AppCacheStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AppCacheStatus>
    : public GenericHashTraits<::blink::mojom::AppCacheStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AppCacheStatus& value) {
    return value == static_cast<::blink::mojom::AppCacheStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AppCacheStatus& slot, bool) {
    slot = static_cast<::blink::mojom::AppCacheStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AppCacheStatus& value) {
    return value == static_cast<::blink::mojom::AppCacheStatus>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT AppCacheInfo {
 public:
  using DataView = AppCacheInfoDataView;
  using Data_ = internal::AppCacheInfo_Data;

  template <typename... Args>
  static AppCacheInfoPtr New(Args&&... args) {
    return AppCacheInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppCacheInfoPtr From(const U& u) {
    return mojo::TypeConverter<AppCacheInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppCacheInfo>::Convert(*this);
  }


  AppCacheInfo();

  AppCacheInfo(
      const ::blink::KURL& manifest_url,
      base::Time creation_time,
      base::Time last_update_time,
      base::Time last_access_time,
      int64_t cache_id,
      int64_t group_id,
      AppCacheStatus status,
      int64_t response_sizes,
      int64_t padding_sizes,
      bool is_complete);

  ~AppCacheInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppCacheInfoPtr>
  AppCacheInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AppCacheInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppCacheInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppCacheInfo_UnserializedMessageContext<
            UserType, AppCacheInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AppCacheInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AppCacheInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppCacheInfo_UnserializedMessageContext<
            UserType, AppCacheInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppCacheInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL manifest_url;
  
  base::Time creation_time;
  
  base::Time last_update_time;
  
  base::Time last_access_time;
  
  int64_t cache_id;
  
  int64_t group_id;
  
  AppCacheStatus status;
  
  int64_t response_sizes;
  
  int64_t padding_sizes;
  
  bool is_complete;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AppCacheInfoPtr AppCacheInfo::Clone() const {
  return New(
      mojo::Clone(manifest_url),
      mojo::Clone(creation_time),
      mojo::Clone(last_update_time),
      mojo::Clone(last_access_time),
      mojo::Clone(cache_id),
      mojo::Clone(group_id),
      mojo::Clone(status),
      mojo::Clone(response_sizes),
      mojo::Clone(padding_sizes),
      mojo::Clone(is_complete)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AppCacheInfo>::value>::type*>
bool AppCacheInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->manifest_url, other_struct.manifest_url))
    return false;
  if (!mojo::Equals(this->creation_time, other_struct.creation_time))
    return false;
  if (!mojo::Equals(this->last_update_time, other_struct.last_update_time))
    return false;
  if (!mojo::Equals(this->last_access_time, other_struct.last_access_time))
    return false;
  if (!mojo::Equals(this->cache_id, other_struct.cache_id))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->response_sizes, other_struct.response_sizes))
    return false;
  if (!mojo::Equals(this->padding_sizes, other_struct.padding_sizes))
    return false;
  if (!mojo::Equals(this->is_complete, other_struct.is_complete))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::AppCacheInfo::DataView,
                                         ::blink::mojom::blink::AppCacheInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::AppCacheInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::AppCacheInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::AppCacheInfo::manifest_url)& manifest_url(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->manifest_url;
  }

  static const decltype(::blink::mojom::blink::AppCacheInfo::creation_time)& creation_time(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->creation_time;
  }

  static const decltype(::blink::mojom::blink::AppCacheInfo::last_update_time)& last_update_time(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->last_update_time;
  }

  static const decltype(::blink::mojom::blink::AppCacheInfo::last_access_time)& last_access_time(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->last_access_time;
  }

  static decltype(::blink::mojom::blink::AppCacheInfo::cache_id) cache_id(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->cache_id;
  }

  static decltype(::blink::mojom::blink::AppCacheInfo::group_id) group_id(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->group_id;
  }

  static decltype(::blink::mojom::blink::AppCacheInfo::status) status(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->status;
  }

  static decltype(::blink::mojom::blink::AppCacheInfo::response_sizes) response_sizes(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->response_sizes;
  }

  static decltype(::blink::mojom::blink::AppCacheInfo::padding_sizes) padding_sizes(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->padding_sizes;
  }

  static decltype(::blink::mojom::blink::AppCacheInfo::is_complete) is_complete(
      const ::blink::mojom::blink::AppCacheInfoPtr& input) {
    return input->is_complete;
  }

  static bool Read(::blink::mojom::blink::AppCacheInfo::DataView input, ::blink::mojom::blink::AppCacheInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_INFO_MOJOM_BLINK_H_