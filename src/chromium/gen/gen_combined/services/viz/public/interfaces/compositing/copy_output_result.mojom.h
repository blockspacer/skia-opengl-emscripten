// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom-forward.h"
#include "gpu/ipc/common/mailbox.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "services/viz/public/interfaces/compositing/texture_releaser.mojom.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/color_space.mojom.h"
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
#include "components/viz/common/frame_sinks/copy_output_result.h"




namespace viz {
namespace mojom {








class  CopyOutputResult {
 public:
  using DataView = CopyOutputResultDataView;
  using Data_ = internal::CopyOutputResult_Data;

  template <typename... Args>
  static CopyOutputResultPtr New(Args&&... args) {
    return CopyOutputResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CopyOutputResultPtr From(const U& u) {
    return mojo::TypeConverter<CopyOutputResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CopyOutputResult>::Convert(*this);
  }


  CopyOutputResult();

  CopyOutputResult(
      CopyOutputResultFormat format,
      const gfx::Rect& rect,
      const SkBitmap& bitmap,
      const base::Optional<gpu::Mailbox>& mailbox,
      const base::Optional<::gpu::SyncToken>& sync_token,
      const base::Optional<gfx::ColorSpace>& color_space,
      ::viz::mojom::TextureReleaserPtrInfo releaser);

  ~CopyOutputResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CopyOutputResultPtr>
  CopyOutputResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CopyOutputResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CopyOutputResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CopyOutputResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CopyOutputResult_UnserializedMessageContext<
            UserType, CopyOutputResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CopyOutputResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CopyOutputResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CopyOutputResult_UnserializedMessageContext<
            UserType, CopyOutputResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CopyOutputResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  CopyOutputResultFormat format;
  
  gfx::Rect rect;
  
  SkBitmap bitmap;
  
  base::Optional<gpu::Mailbox> mailbox;
  
  base::Optional<::gpu::SyncToken> sync_token;
  
  base::Optional<gfx::ColorSpace> color_space;
  
  ::viz::mojom::TextureReleaserPtrInfo releaser;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CopyOutputResult);
};

template <typename StructPtrType>
CopyOutputResultPtr CopyOutputResult::Clone() const {
  return New(
      mojo::Clone(format),
      mojo::Clone(rect),
      mojo::Clone(bitmap),
      mojo::Clone(mailbox),
      mojo::Clone(sync_token),
      mojo::Clone(color_space),
      mojo::Clone(releaser)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CopyOutputResult>::value>::type*>
bool CopyOutputResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  if (!mojo::Equals(this->bitmap, other_struct.bitmap))
    return false;
  if (!mojo::Equals(this->mailbox, other_struct.mailbox))
    return false;
  if (!mojo::Equals(this->sync_token, other_struct.sync_token))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  if (!mojo::Equals(this->releaser, other_struct.releaser))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::CopyOutputResult::DataView,
                                         ::viz::mojom::CopyOutputResultPtr> {
  static bool IsNull(const ::viz::mojom::CopyOutputResultPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::CopyOutputResultPtr* output) { output->reset(); }

  static decltype(::viz::mojom::CopyOutputResult::format) format(
      const ::viz::mojom::CopyOutputResultPtr& input) {
    return input->format;
  }

  static const decltype(::viz::mojom::CopyOutputResult::rect)& rect(
      const ::viz::mojom::CopyOutputResultPtr& input) {
    return input->rect;
  }

  static  decltype(::viz::mojom::CopyOutputResult::bitmap)& bitmap(
       ::viz::mojom::CopyOutputResultPtr& input) {
    return input->bitmap;
  }

  static const decltype(::viz::mojom::CopyOutputResult::mailbox)& mailbox(
      const ::viz::mojom::CopyOutputResultPtr& input) {
    return input->mailbox;
  }

  static const decltype(::viz::mojom::CopyOutputResult::sync_token)& sync_token(
      const ::viz::mojom::CopyOutputResultPtr& input) {
    return input->sync_token;
  }

  static const decltype(::viz::mojom::CopyOutputResult::color_space)& color_space(
      const ::viz::mojom::CopyOutputResultPtr& input) {
    return input->color_space;
  }

  static  decltype(::viz::mojom::CopyOutputResult::releaser)& releaser(
       ::viz::mojom::CopyOutputResultPtr& input) {
    return input->releaser;
  }

  static bool Read(::viz::mojom::CopyOutputResult::DataView input, ::viz::mojom::CopyOutputResultPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_RESULT_MOJOM_H_