// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/cors_origin_pattern.mojom-shared.h"
#include "services/network/public/mojom/cors_origin_pattern.mojom-blink-forward.h"

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
struct network_mojom_internal_CorsOriginAccessMatchMode_DataHashFn {
  static unsigned GetHash(const ::network::mojom::CorsOriginAccessMatchMode& value) {
    using utype = std::underlying_type<::network::mojom::CorsOriginAccessMatchMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::CorsOriginAccessMatchMode& left, const ::network::mojom::CorsOriginAccessMatchMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::CorsOriginAccessMatchMode>
    : public GenericHashTraits<::network::mojom::CorsOriginAccessMatchMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::CorsOriginAccessMatchMode& value) {
    return value == static_cast<::network::mojom::CorsOriginAccessMatchMode>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::CorsOriginAccessMatchMode& slot, bool) {
    slot = static_cast<::network::mojom::CorsOriginAccessMatchMode>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::CorsOriginAccessMatchMode& value) {
    return value == static_cast<::network::mojom::CorsOriginAccessMatchMode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct network_mojom_internal_CorsOriginAccessMatchPriority_DataHashFn {
  static unsigned GetHash(const ::network::mojom::CorsOriginAccessMatchPriority& value) {
    using utype = std::underlying_type<::network::mojom::CorsOriginAccessMatchPriority>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::CorsOriginAccessMatchPriority& left, const ::network::mojom::CorsOriginAccessMatchPriority& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::CorsOriginAccessMatchPriority>
    : public GenericHashTraits<::network::mojom::CorsOriginAccessMatchPriority> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::CorsOriginAccessMatchPriority& value) {
    return value == static_cast<::network::mojom::CorsOriginAccessMatchPriority>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::CorsOriginAccessMatchPriority& slot, bool) {
    slot = static_cast<::network::mojom::CorsOriginAccessMatchPriority>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::CorsOriginAccessMatchPriority& value) {
    return value == static_cast<::network::mojom::CorsOriginAccessMatchPriority>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT CorsOriginPattern {
 public:
  using DataView = CorsOriginPatternDataView;
  using Data_ = internal::CorsOriginPattern_Data;

  template <typename... Args>
  static CorsOriginPatternPtr New(Args&&... args) {
    return CorsOriginPatternPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CorsOriginPatternPtr From(const U& u) {
    return mojo::TypeConverter<CorsOriginPatternPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CorsOriginPattern>::Convert(*this);
  }


  CorsOriginPattern();

  CorsOriginPattern(
      const WTF::String& protocol,
      const WTF::String& domain,
      CorsOriginAccessMatchMode mode,
      CorsOriginAccessMatchPriority priority);

  ~CorsOriginPattern();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CorsOriginPatternPtr>
  CorsOriginPatternPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CorsOriginPattern>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CorsOriginPattern::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CorsOriginPattern::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CorsOriginPattern_UnserializedMessageContext<
            UserType, CorsOriginPattern::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CorsOriginPattern::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CorsOriginPattern::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CorsOriginPattern_UnserializedMessageContext<
            UserType, CorsOriginPattern::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CorsOriginPattern::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String protocol;
  
  WTF::String domain;
  
  CorsOriginAccessMatchMode mode;
  
  CorsOriginAccessMatchPriority priority;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class BLINK_PLATFORM_EXPORT CorsOriginAccessPatterns {
 public:
  using DataView = CorsOriginAccessPatternsDataView;
  using Data_ = internal::CorsOriginAccessPatterns_Data;

  template <typename... Args>
  static CorsOriginAccessPatternsPtr New(Args&&... args) {
    return CorsOriginAccessPatternsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CorsOriginAccessPatternsPtr From(const U& u) {
    return mojo::TypeConverter<CorsOriginAccessPatternsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CorsOriginAccessPatterns>::Convert(*this);
  }


  CorsOriginAccessPatterns();

  CorsOriginAccessPatterns(
      const WTF::String& source_origin,
      WTF::Vector<CorsOriginPatternPtr> allow_patterns,
      WTF::Vector<CorsOriginPatternPtr> block_patterns);

  ~CorsOriginAccessPatterns();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CorsOriginAccessPatternsPtr>
  CorsOriginAccessPatternsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CorsOriginAccessPatterns>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CorsOriginAccessPatterns::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CorsOriginAccessPatterns::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CorsOriginAccessPatterns_UnserializedMessageContext<
            UserType, CorsOriginAccessPatterns::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CorsOriginAccessPatterns::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CorsOriginAccessPatterns::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CorsOriginAccessPatterns_UnserializedMessageContext<
            UserType, CorsOriginAccessPatterns::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CorsOriginAccessPatterns::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String source_origin;
  
  WTF::Vector<CorsOriginPatternPtr> allow_patterns;
  
  WTF::Vector<CorsOriginPatternPtr> block_patterns;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CorsOriginAccessPatterns);
};

template <typename StructPtrType>
CorsOriginPatternPtr CorsOriginPattern::Clone() const {
  return New(
      mojo::Clone(protocol),
      mojo::Clone(domain),
      mojo::Clone(mode),
      mojo::Clone(priority)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CorsOriginPattern>::value>::type*>
bool CorsOriginPattern::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->protocol, other_struct.protocol))
    return false;
  if (!mojo::Equals(this->domain, other_struct.domain))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->priority, other_struct.priority))
    return false;
  return true;
}
template <typename StructPtrType>
CorsOriginAccessPatternsPtr CorsOriginAccessPatterns::Clone() const {
  return New(
      mojo::Clone(source_origin),
      mojo::Clone(allow_patterns),
      mojo::Clone(block_patterns)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CorsOriginAccessPatterns>::value>::type*>
bool CorsOriginAccessPatterns::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->source_origin, other_struct.source_origin))
    return false;
  if (!mojo::Equals(this->allow_patterns, other_struct.allow_patterns))
    return false;
  if (!mojo::Equals(this->block_patterns, other_struct.block_patterns))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::CorsOriginPattern::DataView,
                                         ::network::mojom::blink::CorsOriginPatternPtr> {
  static bool IsNull(const ::network::mojom::blink::CorsOriginPatternPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::CorsOriginPatternPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::CorsOriginPattern::protocol)& protocol(
      const ::network::mojom::blink::CorsOriginPatternPtr& input) {
    return input->protocol;
  }

  static const decltype(::network::mojom::blink::CorsOriginPattern::domain)& domain(
      const ::network::mojom::blink::CorsOriginPatternPtr& input) {
    return input->domain;
  }

  static decltype(::network::mojom::blink::CorsOriginPattern::mode) mode(
      const ::network::mojom::blink::CorsOriginPatternPtr& input) {
    return input->mode;
  }

  static decltype(::network::mojom::blink::CorsOriginPattern::priority) priority(
      const ::network::mojom::blink::CorsOriginPatternPtr& input) {
    return input->priority;
  }

  static bool Read(::network::mojom::blink::CorsOriginPattern::DataView input, ::network::mojom::blink::CorsOriginPatternPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::CorsOriginAccessPatterns::DataView,
                                         ::network::mojom::blink::CorsOriginAccessPatternsPtr> {
  static bool IsNull(const ::network::mojom::blink::CorsOriginAccessPatternsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::CorsOriginAccessPatternsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::CorsOriginAccessPatterns::source_origin)& source_origin(
      const ::network::mojom::blink::CorsOriginAccessPatternsPtr& input) {
    return input->source_origin;
  }

  static const decltype(::network::mojom::blink::CorsOriginAccessPatterns::allow_patterns)& allow_patterns(
      const ::network::mojom::blink::CorsOriginAccessPatternsPtr& input) {
    return input->allow_patterns;
  }

  static const decltype(::network::mojom::blink::CorsOriginAccessPatterns::block_patterns)& block_patterns(
      const ::network::mojom::blink::CorsOriginAccessPatternsPtr& input) {
    return input->block_patterns;
  }

  static bool Read(::network::mojom::blink::CorsOriginAccessPatterns::DataView input, ::network::mojom::blink::CorsOriginAccessPatternsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CORS_ORIGIN_PATTERN_MOJOM_BLINK_H_