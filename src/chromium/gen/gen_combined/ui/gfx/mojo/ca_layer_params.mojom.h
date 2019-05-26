// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_H_
#define UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_H_

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
#include "ui/gfx/mojo/ca_layer_params.mojom-shared.h"
#include "ui/gfx/mojo/ca_layer_params.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "ui/gfx/ca_layer_params.h"




namespace gfx {
namespace mojom {






class  CALayerContent {
 public:
  using DataView = CALayerContentDataView;
  using Data_ = internal::CALayerContent_Data;
  using Tag = Data_::CALayerContent_Tag;

  static CALayerContentPtr New() {
    return CALayerContentPtr(base::in_place);
  }
  // Construct an instance holding |ca_context_id|.
  static CALayerContentPtr
  NewCaContextId(
      uint32_t ca_context_id) {
    auto result = CALayerContentPtr(base::in_place);
    result->set_ca_context_id(std::move(ca_context_id));
    return result;
  }
  // Construct an instance holding |io_surface_mach_port|.
  static CALayerContentPtr
  NewIoSurfaceMachPort(
      mojo::ScopedHandle io_surface_mach_port) {
    auto result = CALayerContentPtr(base::in_place);
    result->set_io_surface_mach_port(std::move(io_surface_mach_port));
    return result;
  }

  template <typename U>
  static CALayerContentPtr From(const U& u) {
    return mojo::TypeConverter<CALayerContentPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CALayerContent>::Convert(*this);
  }

  CALayerContent();
  ~CALayerContent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = CALayerContentPtr>
  CALayerContentPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CALayerContent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_ca_context_id() const { return tag_ == Tag::CA_CONTEXT_ID; }

  
  uint32_t get_ca_context_id() const {
    DCHECK(tag_ == Tag::CA_CONTEXT_ID);
    return data_.ca_context_id;
  }

  
  void set_ca_context_id(
      uint32_t ca_context_id);
  
  bool is_io_surface_mach_port() const { return tag_ == Tag::IO_SURFACE_MACH_PORT; }

  
  mojo::ScopedHandle& get_io_surface_mach_port() const {
    DCHECK(tag_ == Tag::IO_SURFACE_MACH_PORT);
    return *(data_.io_surface_mach_port);
  }

  
  void set_io_surface_mach_port(
      mojo::ScopedHandle io_surface_mach_port);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CALayerContent::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<CALayerContent::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    uint32_t ca_context_id;
    mojo::ScopedHandle* io_surface_mach_port;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class  CALayerParams {
 public:
  using DataView = CALayerParamsDataView;
  using Data_ = internal::CALayerParams_Data;

  template <typename... Args>
  static CALayerParamsPtr New(Args&&... args) {
    return CALayerParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CALayerParamsPtr From(const U& u) {
    return mojo::TypeConverter<CALayerParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CALayerParams>::Convert(*this);
  }


  CALayerParams();

  CALayerParams(
      bool is_empty,
      CALayerContentPtr content,
      const gfx::Size& pixel_size,
      float scale_factor);

  ~CALayerParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CALayerParamsPtr>
  CALayerParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CALayerParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CALayerParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CALayerParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CALayerParams_UnserializedMessageContext<
            UserType, CALayerParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CALayerParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CALayerParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CALayerParams_UnserializedMessageContext<
            UserType, CALayerParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CALayerParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool is_empty;
  
  CALayerContentPtr content;
  
  gfx::Size pixel_size;
  
  float scale_factor;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CALayerParams);
};

template <typename UnionPtrType>
CALayerContentPtr CALayerContent::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::CA_CONTEXT_ID:
      rv->set_ca_context_id(mojo::Clone(data_.ca_context_id));
      break;
    case Tag::IO_SURFACE_MACH_PORT:
      rv->set_io_surface_mach_port(mojo::Clone(*data_.io_surface_mach_port));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CALayerContent>::value>::type*>
bool CALayerContent::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::CA_CONTEXT_ID:
      return mojo::Equals(data_.ca_context_id, other.data_.ca_context_id);
    case Tag::IO_SURFACE_MACH_PORT:
      return mojo::Equals(*(data_.io_surface_mach_port), *(other.data_.io_surface_mach_port));
  }

  return false;
}
template <typename StructPtrType>
CALayerParamsPtr CALayerParams::Clone() const {
  return New(
      mojo::Clone(is_empty),
      mojo::Clone(content),
      mojo::Clone(pixel_size),
      mojo::Clone(scale_factor)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CALayerParams>::value>::type*>
bool CALayerParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->is_empty, other_struct.is_empty))
    return false;
  if (!mojo::Equals(this->content, other_struct.content))
    return false;
  if (!mojo::Equals(this->pixel_size, other_struct.pixel_size))
    return false;
  if (!mojo::Equals(this->scale_factor, other_struct.scale_factor))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::CALayerParams::DataView,
                                         ::gfx::mojom::CALayerParamsPtr> {
  static bool IsNull(const ::gfx::mojom::CALayerParamsPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::CALayerParamsPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::CALayerParams::is_empty) is_empty(
      const ::gfx::mojom::CALayerParamsPtr& input) {
    return input->is_empty;
  }

  static  decltype(::gfx::mojom::CALayerParams::content)& content(
       ::gfx::mojom::CALayerParamsPtr& input) {
    return input->content;
  }

  static const decltype(::gfx::mojom::CALayerParams::pixel_size)& pixel_size(
      const ::gfx::mojom::CALayerParamsPtr& input) {
    return input->pixel_size;
  }

  static decltype(::gfx::mojom::CALayerParams::scale_factor) scale_factor(
      const ::gfx::mojom::CALayerParamsPtr& input) {
    return input->scale_factor;
  }

  static bool Read(::gfx::mojom::CALayerParams::DataView input, ::gfx::mojom::CALayerParamsPtr* output);
};


template <>
struct  UnionTraits<::gfx::mojom::CALayerContent::DataView,
                                        ::gfx::mojom::CALayerContentPtr> {
  static bool IsNull(const ::gfx::mojom::CALayerContentPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::CALayerContentPtr* output) { output->reset(); }

  static ::gfx::mojom::CALayerContent::Tag GetTag(const ::gfx::mojom::CALayerContentPtr& input) {
    return input->which();
  }

  static  uint32_t ca_context_id(const ::gfx::mojom::CALayerContentPtr& input) {
    return input->get_ca_context_id();
  }

  static  mojo::ScopedHandle& io_surface_mach_port( ::gfx::mojom::CALayerContentPtr& input) {
    return input->get_io_surface_mach_port();
  }

  static bool Read(::gfx::mojom::CALayerContent::DataView input, ::gfx::mojom::CALayerContentPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_H_