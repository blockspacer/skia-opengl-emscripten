// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-shared.h"
#include "third_party/blink/public/mojom/page/spatial_navigation.mojom-blink-forward.h"

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

class SpatialNavigationHostProxy;

template <typename ImplRefTraits>
class SpatialNavigationHostStub;

class SpatialNavigationHostRequestValidator;


class PLATFORM_EXPORT SpatialNavigationHost
    : public SpatialNavigationHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SpatialNavigationHostInterfaceBase;
  using Proxy_ = SpatialNavigationHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = SpatialNavigationHostStub<ImplRefTraits>;

  using RequestValidator_ = SpatialNavigationHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSpatialNavigationStateChangedMinVersion = 0,
  };
  virtual ~SpatialNavigationHost() {}

  
  virtual void SpatialNavigationStateChanged(SpatialNavigationStatePtr state) = 0;
};

class PLATFORM_EXPORT SpatialNavigationHostProxy
    : public SpatialNavigationHost {
 public:
  using InterfaceType = SpatialNavigationHost;

  explicit SpatialNavigationHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SpatialNavigationStateChanged(SpatialNavigationStatePtr state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT SpatialNavigationHostStubDispatch {
 public:
  static bool Accept(SpatialNavigationHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SpatialNavigationHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SpatialNavigationHost>>
class SpatialNavigationHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SpatialNavigationHostStub() {}
  ~SpatialNavigationHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpatialNavigationHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SpatialNavigationHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT SpatialNavigationHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT SpatialNavigationState {
 public:
  using DataView = SpatialNavigationStateDataView;
  using Data_ = internal::SpatialNavigationState_Data;

  template <typename... Args>
  static SpatialNavigationStatePtr New(Args&&... args) {
    return SpatialNavigationStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpatialNavigationStatePtr From(const U& u) {
    return mojo::TypeConverter<SpatialNavigationStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpatialNavigationState>::Convert(*this);
  }


  SpatialNavigationState();

  SpatialNavigationState(
      bool can_exit_focus,
      bool can_select_element,
      bool has_next_form_element,
      bool has_default_video_controls);

  ~SpatialNavigationState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpatialNavigationStatePtr>
  SpatialNavigationStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpatialNavigationState>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpatialNavigationState::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpatialNavigationState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpatialNavigationState_UnserializedMessageContext<
            UserType, SpatialNavigationState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpatialNavigationState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SpatialNavigationState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpatialNavigationState_UnserializedMessageContext<
            UserType, SpatialNavigationState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpatialNavigationState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool can_exit_focus;
  
  bool can_select_element;
  
  bool has_next_form_element;
  
  bool has_default_video_controls;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SpatialNavigationStatePtr SpatialNavigationState::Clone() const {
  return New(
      mojo::Clone(can_exit_focus),
      mojo::Clone(can_select_element),
      mojo::Clone(has_next_form_element),
      mojo::Clone(has_default_video_controls)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpatialNavigationState>::value>::type*>
bool SpatialNavigationState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->can_exit_focus, other_struct.can_exit_focus))
    return false;
  if (!mojo::Equals(this->can_select_element, other_struct.can_select_element))
    return false;
  if (!mojo::Equals(this->has_next_form_element, other_struct.has_next_form_element))
    return false;
  if (!mojo::Equals(this->has_default_video_controls, other_struct.has_default_video_controls))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SpatialNavigationState::DataView,
                                         ::blink::mojom::blink::SpatialNavigationStatePtr> {
  static bool IsNull(const ::blink::mojom::blink::SpatialNavigationStatePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SpatialNavigationStatePtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::SpatialNavigationState::can_exit_focus) can_exit_focus(
      const ::blink::mojom::blink::SpatialNavigationStatePtr& input) {
    return input->can_exit_focus;
  }

  static decltype(::blink::mojom::blink::SpatialNavigationState::can_select_element) can_select_element(
      const ::blink::mojom::blink::SpatialNavigationStatePtr& input) {
    return input->can_select_element;
  }

  static decltype(::blink::mojom::blink::SpatialNavigationState::has_next_form_element) has_next_form_element(
      const ::blink::mojom::blink::SpatialNavigationStatePtr& input) {
    return input->has_next_form_element;
  }

  static decltype(::blink::mojom::blink::SpatialNavigationState::has_default_video_controls) has_default_video_controls(
      const ::blink::mojom::blink::SpatialNavigationStatePtr& input) {
    return input->has_default_video_controls;
  }

  static bool Read(::blink::mojom::blink::SpatialNavigationState::DataView input, ::blink::mojom::blink::SpatialNavigationStatePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_SPATIAL_NAVIGATION_MOJOM_BLINK_H_