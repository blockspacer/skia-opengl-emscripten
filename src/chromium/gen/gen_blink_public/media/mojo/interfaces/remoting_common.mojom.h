// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_H_

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
#include "media/mojo/interfaces/remoting_common.mojom-shared.h"
#include "media/mojo/interfaces/remoting_common.mojom-forward.h"
#include <string>
#include <vector>

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




namespace media {
namespace mojom {








class  RemotingSinkMetadata {
 public:
  using DataView = RemotingSinkMetadataDataView;
  using Data_ = internal::RemotingSinkMetadata_Data;

  template <typename... Args>
  static RemotingSinkMetadataPtr New(Args&&... args) {
    return RemotingSinkMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RemotingSinkMetadataPtr From(const U& u) {
    return mojo::TypeConverter<RemotingSinkMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RemotingSinkMetadata>::Convert(*this);
  }


  RemotingSinkMetadata();

  RemotingSinkMetadata(
      const std::vector<RemotingSinkFeature>& features,
      const std::vector<RemotingSinkAudioCapability>& audio_capabilities,
      const std::vector<RemotingSinkVideoCapability>& video_capabilities,
      const std::string& friendly_name);

  ~RemotingSinkMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RemotingSinkMetadataPtr>
  RemotingSinkMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RemotingSinkMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RemotingSinkMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RemotingSinkMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RemotingSinkMetadata_UnserializedMessageContext<
            UserType, RemotingSinkMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RemotingSinkMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RemotingSinkMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RemotingSinkMetadata_UnserializedMessageContext<
            UserType, RemotingSinkMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RemotingSinkMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<RemotingSinkFeature> features;
  
  std::vector<RemotingSinkAudioCapability> audio_capabilities;
  
  std::vector<RemotingSinkVideoCapability> video_capabilities;
  
  std::string friendly_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
RemotingSinkMetadataPtr RemotingSinkMetadata::Clone() const {
  return New(
      mojo::Clone(features),
      mojo::Clone(audio_capabilities),
      mojo::Clone(video_capabilities),
      mojo::Clone(friendly_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RemotingSinkMetadata>::value>::type*>
bool RemotingSinkMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->features, other_struct.features))
    return false;
  if (!mojo::Equals(this->audio_capabilities, other_struct.audio_capabilities))
    return false;
  if (!mojo::Equals(this->video_capabilities, other_struct.video_capabilities))
    return false;
  if (!mojo::Equals(this->friendly_name, other_struct.friendly_name))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::RemotingSinkMetadata::DataView,
                                         ::media::mojom::RemotingSinkMetadataPtr> {
  static bool IsNull(const ::media::mojom::RemotingSinkMetadataPtr& input) { return !input; }
  static void SetToNull(::media::mojom::RemotingSinkMetadataPtr* output) { output->reset(); }

  static const decltype(::media::mojom::RemotingSinkMetadata::features)& features(
      const ::media::mojom::RemotingSinkMetadataPtr& input) {
    return input->features;
  }

  static const decltype(::media::mojom::RemotingSinkMetadata::audio_capabilities)& audio_capabilities(
      const ::media::mojom::RemotingSinkMetadataPtr& input) {
    return input->audio_capabilities;
  }

  static const decltype(::media::mojom::RemotingSinkMetadata::video_capabilities)& video_capabilities(
      const ::media::mojom::RemotingSinkMetadataPtr& input) {
    return input->video_capabilities;
  }

  static const decltype(::media::mojom::RemotingSinkMetadata::friendly_name)& friendly_name(
      const ::media::mojom::RemotingSinkMetadataPtr& input) {
    return input->friendly_name;
  }

  static bool Read(::media::mojom::RemotingSinkMetadata::DataView input, ::media::mojom::RemotingSinkMetadataPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_COMMON_MOJOM_H_