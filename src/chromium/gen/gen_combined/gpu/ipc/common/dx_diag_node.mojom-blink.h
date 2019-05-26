// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_H_

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
#include "gpu/ipc/common/dx_diag_node.mojom-shared.h"
#include "gpu/ipc/common/dx_diag_node.mojom-blink-forward.h"

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




namespace gpu {
namespace mojom {
namespace blink {








class  DxDiagNode {
 public:
  using DataView = DxDiagNodeDataView;
  using Data_ = internal::DxDiagNode_Data;

  template <typename... Args>
  static DxDiagNodePtr New(Args&&... args) {
    return DxDiagNodePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DxDiagNodePtr From(const U& u) {
    return mojo::TypeConverter<DxDiagNodePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DxDiagNode>::Convert(*this);
  }


  DxDiagNode();

  DxDiagNode(
      const WTF::HashMap<WTF::String, WTF::String>& values,
      WTF::HashMap<WTF::String, DxDiagNodePtr> children);

  ~DxDiagNode();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DxDiagNodePtr>
  DxDiagNodePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DxDiagNode>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DxDiagNode::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DxDiagNode::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DxDiagNode_UnserializedMessageContext<
            UserType, DxDiagNode::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DxDiagNode::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DxDiagNode::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DxDiagNode_UnserializedMessageContext<
            UserType, DxDiagNode::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DxDiagNode::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::HashMap<WTF::String, WTF::String> values;
  
  WTF::HashMap<WTF::String, DxDiagNodePtr> children;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DxDiagNode);
};

template <typename StructPtrType>
DxDiagNodePtr DxDiagNode::Clone() const {
  return New(
      mojo::Clone(values),
      mojo::Clone(children)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DxDiagNode>::value>::type*>
bool DxDiagNode::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->values, other_struct.values))
    return false;
  if (!mojo::Equals(this->children, other_struct.children))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct  StructTraits<::gpu::mojom::blink::DxDiagNode::DataView,
                                         ::gpu::mojom::blink::DxDiagNodePtr> {
  static bool IsNull(const ::gpu::mojom::blink::DxDiagNodePtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::DxDiagNodePtr* output) { output->reset(); }

  static const decltype(::gpu::mojom::blink::DxDiagNode::values)& values(
      const ::gpu::mojom::blink::DxDiagNodePtr& input) {
    return input->values;
  }

  static const decltype(::gpu::mojom::blink::DxDiagNode::children)& children(
      const ::gpu::mojom::blink::DxDiagNodePtr& input) {
    return input->children;
  }

  static bool Read(::gpu::mojom::blink::DxDiagNode::DataView input, ::gpu::mojom::blink::DxDiagNodePtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_DX_DIAG_NODE_MOJOM_BLINK_H_