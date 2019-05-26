// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/transferable_resource.mojom-blink-forward.h"
#include "gpu/ipc/common/mailbox_holder.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/color_space.mojom-blink.h"
#include "ui/gfx/mojo/buffer_types.mojom-blink.h"

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
struct viz_mojom_internal_ResourceFormat_DataHashFn {
  static unsigned GetHash(const ::viz::mojom::ResourceFormat& value) {
    using utype = std::underlying_type<::viz::mojom::ResourceFormat>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::viz::mojom::ResourceFormat& left, const ::viz::mojom::ResourceFormat& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::viz::mojom::ResourceFormat>
    : public GenericHashTraits<::viz::mojom::ResourceFormat> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::viz::mojom::ResourceFormat& value) {
    return value == static_cast<::viz::mojom::ResourceFormat>(-1000000);
  }
  static void ConstructDeletedValue(::viz::mojom::ResourceFormat& slot, bool) {
    slot = static_cast<::viz::mojom::ResourceFormat>(-1000001);
  }
  static bool IsDeletedValue(const ::viz::mojom::ResourceFormat& value) {
    return value == static_cast<::viz::mojom::ResourceFormat>(-1000001);
  }
};
}  // namespace WTF


namespace viz {
namespace mojom {
namespace blink {








class  TransferableResource {
 public:
  using DataView = TransferableResourceDataView;
  using Data_ = internal::TransferableResource_Data;

  template <typename... Args>
  static TransferableResourcePtr New(Args&&... args) {
    return TransferableResourcePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TransferableResourcePtr From(const U& u) {
    return mojo::TypeConverter<TransferableResourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TransferableResource>::Convert(*this);
  }


  TransferableResource();

  TransferableResource(
      uint32_t id,
      ResourceFormat format,
      uint32_t filter,
      const ::blink::WebSize& size,
      const ::gpu::MailboxHolder& mailbox_holder,
      bool read_lock_fences_enabled,
      bool is_software,
      bool is_overlay_candidate,
      bool is_backed_by_surface_texture,
      bool wants_promotion_hint,
      ::gfx::mojom::blink::ColorSpacePtr color_space);

  ~TransferableResource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TransferableResourcePtr>
  TransferableResourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TransferableResource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TransferableResource::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TransferableResource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TransferableResource_UnserializedMessageContext<
            UserType, TransferableResource::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TransferableResource::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TransferableResource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TransferableResource_UnserializedMessageContext<
            UserType, TransferableResource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TransferableResource::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t id;
  
  ResourceFormat format;
  
  uint32_t filter;
  
  ::blink::WebSize size;
  
  ::gpu::MailboxHolder mailbox_holder;
  
  bool read_lock_fences_enabled;
  
  bool is_software;
  
  bool is_overlay_candidate;
  
  bool is_backed_by_surface_texture;
  
  bool wants_promotion_hint;
  
  ::gfx::mojom::blink::ColorSpacePtr color_space;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TransferableResource);
};

template <typename StructPtrType>
TransferableResourcePtr TransferableResource::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(format),
      mojo::Clone(filter),
      mojo::Clone(size),
      mojo::Clone(mailbox_holder),
      mojo::Clone(read_lock_fences_enabled),
      mojo::Clone(is_software),
      mojo::Clone(is_overlay_candidate),
      mojo::Clone(is_backed_by_surface_texture),
      mojo::Clone(wants_promotion_hint),
      mojo::Clone(color_space)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TransferableResource>::value>::type*>
bool TransferableResource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  if (!mojo::Equals(this->filter, other_struct.filter))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->mailbox_holder, other_struct.mailbox_holder))
    return false;
  if (!mojo::Equals(this->read_lock_fences_enabled, other_struct.read_lock_fences_enabled))
    return false;
  if (!mojo::Equals(this->is_software, other_struct.is_software))
    return false;
  if (!mojo::Equals(this->is_overlay_candidate, other_struct.is_overlay_candidate))
    return false;
  if (!mojo::Equals(this->is_backed_by_surface_texture, other_struct.is_backed_by_surface_texture))
    return false;
  if (!mojo::Equals(this->wants_promotion_hint, other_struct.wants_promotion_hint))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::TransferableResource::DataView,
                                         ::viz::mojom::blink::TransferableResourcePtr> {
  static bool IsNull(const ::viz::mojom::blink::TransferableResourcePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::TransferableResourcePtr* output) { output->reset(); }

  static decltype(::viz::mojom::blink::TransferableResource::id) id(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->id;
  }

  static decltype(::viz::mojom::blink::TransferableResource::format) format(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->format;
  }

  static decltype(::viz::mojom::blink::TransferableResource::filter) filter(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->filter;
  }

  static const decltype(::viz::mojom::blink::TransferableResource::size)& size(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->size;
  }

  static const decltype(::viz::mojom::blink::TransferableResource::mailbox_holder)& mailbox_holder(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->mailbox_holder;
  }

  static decltype(::viz::mojom::blink::TransferableResource::read_lock_fences_enabled) read_lock_fences_enabled(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->read_lock_fences_enabled;
  }

  static decltype(::viz::mojom::blink::TransferableResource::is_software) is_software(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->is_software;
  }

  static decltype(::viz::mojom::blink::TransferableResource::is_overlay_candidate) is_overlay_candidate(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->is_overlay_candidate;
  }

  static decltype(::viz::mojom::blink::TransferableResource::is_backed_by_surface_texture) is_backed_by_surface_texture(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->is_backed_by_surface_texture;
  }

  static decltype(::viz::mojom::blink::TransferableResource::wants_promotion_hint) wants_promotion_hint(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->wants_promotion_hint;
  }

  static const decltype(::viz::mojom::blink::TransferableResource::color_space)& color_space(
      const ::viz::mojom::blink::TransferableResourcePtr& input) {
    return input->color_space;
  }

  static bool Read(::viz::mojom::blink::TransferableResource::DataView input, ::viz::mojom::blink::TransferableResourcePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_BLINK_H_