// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-shared.h"
#include "third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom-blink-forward.h"

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




namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT UserAgentMetadata {
 public:
  using DataView = UserAgentMetadataDataView;
  using Data_ = internal::UserAgentMetadata_Data;

  template <typename... Args>
  static UserAgentMetadataPtr New(Args&&... args) {
    return UserAgentMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UserAgentMetadataPtr From(const U& u) {
    return mojo::TypeConverter<UserAgentMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UserAgentMetadata>::Convert(*this);
  }


  UserAgentMetadata();

  UserAgentMetadata(
      const WTF::String& brand,
      const WTF::String& full_version,
      const WTF::String& major_version,
      const WTF::String& platform,
      const WTF::String& architecture,
      const WTF::String& model);

  ~UserAgentMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UserAgentMetadataPtr>
  UserAgentMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UserAgentMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UserAgentMetadata::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UserAgentMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UserAgentMetadata_UnserializedMessageContext<
            UserType, UserAgentMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UserAgentMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return UserAgentMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UserAgentMetadata_UnserializedMessageContext<
            UserType, UserAgentMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UserAgentMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String brand;
  
  WTF::String full_version;
  
  WTF::String major_version;
  
  WTF::String platform;
  
  WTF::String architecture;
  
  WTF::String model;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
UserAgentMetadataPtr UserAgentMetadata::Clone() const {
  return New(
      mojo::Clone(brand),
      mojo::Clone(full_version),
      mojo::Clone(major_version),
      mojo::Clone(platform),
      mojo::Clone(architecture),
      mojo::Clone(model)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UserAgentMetadata>::value>::type*>
bool UserAgentMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->brand, other_struct.brand))
    return false;
  if (!mojo::Equals(this->full_version, other_struct.full_version))
    return false;
  if (!mojo::Equals(this->major_version, other_struct.major_version))
    return false;
  if (!mojo::Equals(this->platform, other_struct.platform))
    return false;
  if (!mojo::Equals(this->architecture, other_struct.architecture))
    return false;
  if (!mojo::Equals(this->model, other_struct.model))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::UserAgentMetadata::DataView,
                                         ::blink::mojom::blink::UserAgentMetadataPtr> {
  static bool IsNull(const ::blink::mojom::blink::UserAgentMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::UserAgentMetadataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::UserAgentMetadata::brand)& brand(
      const ::blink::mojom::blink::UserAgentMetadataPtr& input) {
    return input->brand;
  }

  static const decltype(::blink::mojom::blink::UserAgentMetadata::full_version)& full_version(
      const ::blink::mojom::blink::UserAgentMetadataPtr& input) {
    return input->full_version;
  }

  static const decltype(::blink::mojom::blink::UserAgentMetadata::major_version)& major_version(
      const ::blink::mojom::blink::UserAgentMetadataPtr& input) {
    return input->major_version;
  }

  static const decltype(::blink::mojom::blink::UserAgentMetadata::platform)& platform(
      const ::blink::mojom::blink::UserAgentMetadataPtr& input) {
    return input->platform;
  }

  static const decltype(::blink::mojom::blink::UserAgentMetadata::architecture)& architecture(
      const ::blink::mojom::blink::UserAgentMetadataPtr& input) {
    return input->architecture;
  }

  static const decltype(::blink::mojom::blink::UserAgentMetadata::model)& model(
      const ::blink::mojom::blink::UserAgentMetadataPtr& input) {
    return input->model;
  }

  static bool Read(::blink::mojom::blink::UserAgentMetadata::DataView input, ::blink::mojom::blink::UserAgentMetadataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USER_AGENT_USER_AGENT_METADATA_MOJOM_BLINK_H_