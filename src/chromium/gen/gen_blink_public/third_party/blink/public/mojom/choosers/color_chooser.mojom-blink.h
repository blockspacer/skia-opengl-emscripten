// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-shared.h"
#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-blink-forward.h"

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

class ColorChooserFactoryProxy;

template <typename ImplRefTraits>
class ColorChooserFactoryStub;

class ColorChooserFactoryRequestValidator;


class PLATFORM_EXPORT ColorChooserFactory
    : public ColorChooserFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ColorChooserFactoryInterfaceBase;
  using Proxy_ = ColorChooserFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ColorChooserFactoryStub<ImplRefTraits>;

  using RequestValidator_ = ColorChooserFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOpenColorChooserMinVersion = 0,
  };
  virtual ~ColorChooserFactory() {}

  
  virtual void OpenColorChooser(ColorChooserRequest chooser, ColorChooserClientPtr client, uint32_t color, WTF::Vector<ColorSuggestionPtr> suggestions) = 0;
};

class ColorChooserProxy;

template <typename ImplRefTraits>
class ColorChooserStub;

class ColorChooserRequestValidator;


class PLATFORM_EXPORT ColorChooser
    : public ColorChooserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ColorChooserInterfaceBase;
  using Proxy_ = ColorChooserProxy;

  template <typename ImplRefTraits>
  using Stub_ = ColorChooserStub<ImplRefTraits>;

  using RequestValidator_ = ColorChooserRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetSelectedColorMinVersion = 0,
  };
  virtual ~ColorChooser() {}

  
  virtual void SetSelectedColor(uint32_t color) = 0;
};

class ColorChooserClientProxy;

template <typename ImplRefTraits>
class ColorChooserClientStub;

class ColorChooserClientRequestValidator;


class PLATFORM_EXPORT ColorChooserClient
    : public ColorChooserClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ColorChooserClientInterfaceBase;
  using Proxy_ = ColorChooserClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ColorChooserClientStub<ImplRefTraits>;

  using RequestValidator_ = ColorChooserClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidChooseColorMinVersion = 0,
  };
  virtual ~ColorChooserClient() {}

  
  virtual void DidChooseColor(uint32_t color) = 0;
};

class PLATFORM_EXPORT ColorChooserFactoryProxy
    : public ColorChooserFactory {
 public:
  using InterfaceType = ColorChooserFactory;

  explicit ColorChooserFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenColorChooser(ColorChooserRequest chooser, ColorChooserClientPtr client, uint32_t color, WTF::Vector<ColorSuggestionPtr> suggestions) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT ColorChooserProxy
    : public ColorChooser {
 public:
  using InterfaceType = ColorChooser;

  explicit ColorChooserProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSelectedColor(uint32_t color) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT ColorChooserClientProxy
    : public ColorChooserClient {
 public:
  using InterfaceType = ColorChooserClient;

  explicit ColorChooserClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidChooseColor(uint32_t color) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ColorChooserFactoryStubDispatch {
 public:
  static bool Accept(ColorChooserFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ColorChooserFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ColorChooserFactory>>
class ColorChooserFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ColorChooserFactoryStub() {}
  ~ColorChooserFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ColorChooserFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ColorChooserFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ColorChooserStubDispatch {
 public:
  static bool Accept(ColorChooser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ColorChooser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ColorChooser>>
class ColorChooserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ColorChooserStub() {}
  ~ColorChooserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ColorChooserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ColorChooserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ColorChooserClientStubDispatch {
 public:
  static bool Accept(ColorChooserClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ColorChooserClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ColorChooserClient>>
class ColorChooserClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ColorChooserClientStub() {}
  ~ColorChooserClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ColorChooserClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ColorChooserClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ColorChooserFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ColorChooserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ColorChooserClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT ColorSuggestion {
 public:
  using DataView = ColorSuggestionDataView;
  using Data_ = internal::ColorSuggestion_Data;

  template <typename... Args>
  static ColorSuggestionPtr New(Args&&... args) {
    return ColorSuggestionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ColorSuggestionPtr From(const U& u) {
    return mojo::TypeConverter<ColorSuggestionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ColorSuggestion>::Convert(*this);
  }


  ColorSuggestion();

  ColorSuggestion(
      uint32_t color,
      const WTF::String& label);

  ~ColorSuggestion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ColorSuggestionPtr>
  ColorSuggestionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ColorSuggestion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ColorSuggestion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ColorSuggestion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ColorSuggestion_UnserializedMessageContext<
            UserType, ColorSuggestion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ColorSuggestion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ColorSuggestion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ColorSuggestion_UnserializedMessageContext<
            UserType, ColorSuggestion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ColorSuggestion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t color;
  
  WTF::String label;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
ColorSuggestionPtr ColorSuggestion::Clone() const {
  return New(
      mojo::Clone(color),
      mojo::Clone(label)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ColorSuggestion>::value>::type*>
bool ColorSuggestion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->color, other_struct.color))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ColorSuggestion::DataView,
                                         ::blink::mojom::blink::ColorSuggestionPtr> {
  static bool IsNull(const ::blink::mojom::blink::ColorSuggestionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ColorSuggestionPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ColorSuggestion::color) color(
      const ::blink::mojom::blink::ColorSuggestionPtr& input) {
    return input->color;
  }

  static const decltype(::blink::mojom::blink::ColorSuggestion::label)& label(
      const ::blink::mojom::blink::ColorSuggestionPtr& input) {
    return input->label;
  }

  static bool Read(::blink::mojom::blink::ColorSuggestion::DataView input, ::blink::mojom::blink::ColorSuggestionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_H_