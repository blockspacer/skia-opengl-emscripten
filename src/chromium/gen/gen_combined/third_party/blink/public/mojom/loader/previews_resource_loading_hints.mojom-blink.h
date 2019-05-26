// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/previews_resource_loading_hints.mojom-blink-forward.h"

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

class PreviewsResourceLoadingHintsReceiverProxy;

template <typename ImplRefTraits>
class PreviewsResourceLoadingHintsReceiverStub;

class PreviewsResourceLoadingHintsReceiverRequestValidator;


class PLATFORM_EXPORT PreviewsResourceLoadingHintsReceiver
    : public PreviewsResourceLoadingHintsReceiverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PreviewsResourceLoadingHintsReceiverInterfaceBase;
  using Proxy_ = PreviewsResourceLoadingHintsReceiverProxy;

  template <typename ImplRefTraits>
  using Stub_ = PreviewsResourceLoadingHintsReceiverStub<ImplRefTraits>;

  using RequestValidator_ = PreviewsResourceLoadingHintsReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetResourceLoadingHintsMinVersion = 0,
  };
  virtual ~PreviewsResourceLoadingHintsReceiver() {}

  
  virtual void SetResourceLoadingHints(PreviewsResourceLoadingHintsPtr previews_resource_loading_hints) = 0;
};

class PLATFORM_EXPORT PreviewsResourceLoadingHintsReceiverProxy
    : public PreviewsResourceLoadingHintsReceiver {
 public:
  using InterfaceType = PreviewsResourceLoadingHintsReceiver;

  explicit PreviewsResourceLoadingHintsReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetResourceLoadingHints(PreviewsResourceLoadingHintsPtr previews_resource_loading_hints) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT PreviewsResourceLoadingHintsReceiverStubDispatch {
 public:
  static bool Accept(PreviewsResourceLoadingHintsReceiver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PreviewsResourceLoadingHintsReceiver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PreviewsResourceLoadingHintsReceiver>>
class PreviewsResourceLoadingHintsReceiverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PreviewsResourceLoadingHintsReceiverStub() {}
  ~PreviewsResourceLoadingHintsReceiverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PreviewsResourceLoadingHintsReceiverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PreviewsResourceLoadingHintsReceiverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PreviewsResourceLoadingHintsReceiverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT PreviewsResourceLoadingHints {
 public:
  using DataView = PreviewsResourceLoadingHintsDataView;
  using Data_ = internal::PreviewsResourceLoadingHints_Data;

  template <typename... Args>
  static PreviewsResourceLoadingHintsPtr New(Args&&... args) {
    return PreviewsResourceLoadingHintsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PreviewsResourceLoadingHintsPtr From(const U& u) {
    return mojo::TypeConverter<PreviewsResourceLoadingHintsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PreviewsResourceLoadingHints>::Convert(*this);
  }


  PreviewsResourceLoadingHints();

  PreviewsResourceLoadingHints(
      int64_t ukm_source_id,
      const WTF::Vector<WTF::String>& subresources_to_block);

  ~PreviewsResourceLoadingHints();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PreviewsResourceLoadingHintsPtr>
  PreviewsResourceLoadingHintsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PreviewsResourceLoadingHints>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PreviewsResourceLoadingHints::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PreviewsResourceLoadingHints::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PreviewsResourceLoadingHints_UnserializedMessageContext<
            UserType, PreviewsResourceLoadingHints::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PreviewsResourceLoadingHints::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PreviewsResourceLoadingHints::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PreviewsResourceLoadingHints_UnserializedMessageContext<
            UserType, PreviewsResourceLoadingHints::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PreviewsResourceLoadingHints::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t ukm_source_id;
  
  WTF::Vector<WTF::String> subresources_to_block;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PreviewsResourceLoadingHintsPtr PreviewsResourceLoadingHints::Clone() const {
  return New(
      mojo::Clone(ukm_source_id),
      mojo::Clone(subresources_to_block)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PreviewsResourceLoadingHints>::value>::type*>
bool PreviewsResourceLoadingHints::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ukm_source_id, other_struct.ukm_source_id))
    return false;
  if (!mojo::Equals(this->subresources_to_block, other_struct.subresources_to_block))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PreviewsResourceLoadingHints::DataView,
                                         ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr> {
  static bool IsNull(const ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PreviewsResourceLoadingHintsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::PreviewsResourceLoadingHints::ukm_source_id) ukm_source_id(
      const ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr& input) {
    return input->ukm_source_id;
  }

  static const decltype(::blink::mojom::blink::PreviewsResourceLoadingHints::subresources_to_block)& subresources_to_block(
      const ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr& input) {
    return input->subresources_to_block;
  }

  static bool Read(::blink::mojom::blink::PreviewsResourceLoadingHints::DataView input, ::blink::mojom::blink::PreviewsResourceLoadingHintsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_PREVIEWS_RESOURCE_LOADING_HINTS_MOJOM_BLINK_H_