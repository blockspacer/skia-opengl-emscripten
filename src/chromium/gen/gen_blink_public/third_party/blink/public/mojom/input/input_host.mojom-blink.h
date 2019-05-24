// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/input/input_host.mojom-shared.h"
#include "third_party/blink/public/mojom/input/input_host.mojom-blink-forward.h"

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

class TextSuggestionHostProxy;

template <typename ImplRefTraits>
class TextSuggestionHostStub;

class TextSuggestionHostRequestValidator;


class PLATFORM_EXPORT TextSuggestionHost
    : public TextSuggestionHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = TextSuggestionHostInterfaceBase;
  using Proxy_ = TextSuggestionHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextSuggestionHostStub<ImplRefTraits>;

  using RequestValidator_ = TextSuggestionHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartSuggestionMenuTimerMinVersion = 0,
    kShowSpellCheckSuggestionMenuMinVersion = 0,
    kShowTextSuggestionMenuMinVersion = 0,
  };
  virtual ~TextSuggestionHost() {}

  
  virtual void StartSuggestionMenuTimer() = 0;

  
  virtual void ShowSpellCheckSuggestionMenu(double caret_x, double caret_y, const WTF::String& marked_text, WTF::Vector<SpellCheckSuggestionPtr> suggestions) = 0;

  
  virtual void ShowTextSuggestionMenu(double caret_x, double caret_y, const WTF::String& marked_text, WTF::Vector<TextSuggestionPtr> suggestions) = 0;
};

class PLATFORM_EXPORT TextSuggestionHostProxy
    : public TextSuggestionHost {
 public:
  using InterfaceType = TextSuggestionHost;

  explicit TextSuggestionHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSuggestionMenuTimer() final;
  void ShowSpellCheckSuggestionMenu(double caret_x, double caret_y, const WTF::String& marked_text, WTF::Vector<SpellCheckSuggestionPtr> suggestions) final;
  void ShowTextSuggestionMenu(double caret_x, double caret_y, const WTF::String& marked_text, WTF::Vector<TextSuggestionPtr> suggestions) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT TextSuggestionHostStubDispatch {
 public:
  static bool Accept(TextSuggestionHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextSuggestionHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextSuggestionHost>>
class TextSuggestionHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextSuggestionHostStub() {}
  ~TextSuggestionHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextSuggestionHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextSuggestionHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT TextSuggestionHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT SpellCheckSuggestion {
 public:
  using DataView = SpellCheckSuggestionDataView;
  using Data_ = internal::SpellCheckSuggestion_Data;

  template <typename... Args>
  static SpellCheckSuggestionPtr New(Args&&... args) {
    return SpellCheckSuggestionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpellCheckSuggestionPtr From(const U& u) {
    return mojo::TypeConverter<SpellCheckSuggestionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpellCheckSuggestion>::Convert(*this);
  }


  SpellCheckSuggestion();

  explicit SpellCheckSuggestion(
      const WTF::String& suggestion);

  ~SpellCheckSuggestion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpellCheckSuggestionPtr>
  SpellCheckSuggestionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpellCheckSuggestion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpellCheckSuggestion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpellCheckSuggestion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpellCheckSuggestion_UnserializedMessageContext<
            UserType, SpellCheckSuggestion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpellCheckSuggestion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SpellCheckSuggestion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpellCheckSuggestion_UnserializedMessageContext<
            UserType, SpellCheckSuggestion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpellCheckSuggestion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String suggestion;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class PLATFORM_EXPORT TextSuggestion {
 public:
  using DataView = TextSuggestionDataView;
  using Data_ = internal::TextSuggestion_Data;

  template <typename... Args>
  static TextSuggestionPtr New(Args&&... args) {
    return TextSuggestionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextSuggestionPtr From(const U& u) {
    return mojo::TypeConverter<TextSuggestionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextSuggestion>::Convert(*this);
  }


  TextSuggestion();

  TextSuggestion(
      int32_t marker_tag,
      int32_t suggestion_index,
      const WTF::String& prefix,
      const WTF::String& suggestion,
      const WTF::String& suffix);

  ~TextSuggestion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextSuggestionPtr>
  TextSuggestionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextSuggestion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextSuggestion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextSuggestion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextSuggestion_UnserializedMessageContext<
            UserType, TextSuggestion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TextSuggestion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TextSuggestion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextSuggestion_UnserializedMessageContext<
            UserType, TextSuggestion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextSuggestion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t marker_tag;
  
  int32_t suggestion_index;
  
  WTF::String prefix;
  
  WTF::String suggestion;
  
  WTF::String suffix;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SpellCheckSuggestionPtr SpellCheckSuggestion::Clone() const {
  return New(
      mojo::Clone(suggestion)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpellCheckSuggestion>::value>::type*>
bool SpellCheckSuggestion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->suggestion, other_struct.suggestion))
    return false;
  return true;
}
template <typename StructPtrType>
TextSuggestionPtr TextSuggestion::Clone() const {
  return New(
      mojo::Clone(marker_tag),
      mojo::Clone(suggestion_index),
      mojo::Clone(prefix),
      mojo::Clone(suggestion),
      mojo::Clone(suffix)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextSuggestion>::value>::type*>
bool TextSuggestion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->marker_tag, other_struct.marker_tag))
    return false;
  if (!mojo::Equals(this->suggestion_index, other_struct.suggestion_index))
    return false;
  if (!mojo::Equals(this->prefix, other_struct.prefix))
    return false;
  if (!mojo::Equals(this->suggestion, other_struct.suggestion))
    return false;
  if (!mojo::Equals(this->suffix, other_struct.suffix))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SpellCheckSuggestion::DataView,
                                         ::blink::mojom::blink::SpellCheckSuggestionPtr> {
  static bool IsNull(const ::blink::mojom::blink::SpellCheckSuggestionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SpellCheckSuggestionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SpellCheckSuggestion::suggestion)& suggestion(
      const ::blink::mojom::blink::SpellCheckSuggestionPtr& input) {
    return input->suggestion;
  }

  static bool Read(::blink::mojom::blink::SpellCheckSuggestion::DataView input, ::blink::mojom::blink::SpellCheckSuggestionPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::TextSuggestion::DataView,
                                         ::blink::mojom::blink::TextSuggestionPtr> {
  static bool IsNull(const ::blink::mojom::blink::TextSuggestionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::TextSuggestionPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::TextSuggestion::marker_tag) marker_tag(
      const ::blink::mojom::blink::TextSuggestionPtr& input) {
    return input->marker_tag;
  }

  static decltype(::blink::mojom::blink::TextSuggestion::suggestion_index) suggestion_index(
      const ::blink::mojom::blink::TextSuggestionPtr& input) {
    return input->suggestion_index;
  }

  static const decltype(::blink::mojom::blink::TextSuggestion::prefix)& prefix(
      const ::blink::mojom::blink::TextSuggestionPtr& input) {
    return input->prefix;
  }

  static const decltype(::blink::mojom::blink::TextSuggestion::suggestion)& suggestion(
      const ::blink::mojom::blink::TextSuggestionPtr& input) {
    return input->suggestion;
  }

  static const decltype(::blink::mojom::blink::TextSuggestion::suffix)& suffix(
      const ::blink::mojom::blink::TextSuggestionPtr& input) {
    return input->suffix;
  }

  static bool Read(::blink::mojom::blink::TextSuggestion::DataView input, ::blink::mojom::blink::TextSuggestionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_H_