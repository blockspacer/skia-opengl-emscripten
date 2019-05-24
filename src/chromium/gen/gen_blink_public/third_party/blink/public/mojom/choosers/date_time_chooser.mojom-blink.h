// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-shared.h"
#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "ui/base/ime/mojo/ime_types.mojom-blink.h"

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
#include "third_party/blink/renderer/core/core_export.h"




namespace blink {
namespace mojom {
namespace blink {

class DateTimeChooserProxy;

template <typename ImplRefTraits>
class DateTimeChooserStub;

class DateTimeChooserRequestValidator;
class DateTimeChooserResponseValidator;


class CORE_EXPORT DateTimeChooser
    : public DateTimeChooserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DateTimeChooserInterfaceBase;
  using Proxy_ = DateTimeChooserProxy;

  template <typename ImplRefTraits>
  using Stub_ = DateTimeChooserStub<ImplRefTraits>;

  using RequestValidator_ = DateTimeChooserRequestValidator;
  using ResponseValidator_ = DateTimeChooserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenDateTimeDialogMinVersion = 0,
  };
  virtual ~DateTimeChooser() {}


  using OpenDateTimeDialogCallback = base::OnceCallback<void(bool, double)>;
  
  virtual void OpenDateTimeDialog(DateTimeDialogValuePtr value, OpenDateTimeDialogCallback callback) = 0;
};

class CORE_EXPORT DateTimeChooserProxy
    : public DateTimeChooser {
 public:
  using InterfaceType = DateTimeChooser;

  explicit DateTimeChooserProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenDateTimeDialog(DateTimeDialogValuePtr value, OpenDateTimeDialogCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT DateTimeChooserStubDispatch {
 public:
  static bool Accept(DateTimeChooser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DateTimeChooser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DateTimeChooser>>
class DateTimeChooserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DateTimeChooserStub() {}
  ~DateTimeChooserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DateTimeChooserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DateTimeChooserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT DateTimeChooserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT DateTimeChooserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class CORE_EXPORT DateTimeSuggestion {
 public:
  using DataView = DateTimeSuggestionDataView;
  using Data_ = internal::DateTimeSuggestion_Data;

  template <typename... Args>
  static DateTimeSuggestionPtr New(Args&&... args) {
    return DateTimeSuggestionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DateTimeSuggestionPtr From(const U& u) {
    return mojo::TypeConverter<DateTimeSuggestionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DateTimeSuggestion>::Convert(*this);
  }


  DateTimeSuggestion();

  DateTimeSuggestion(
      double value,
      const WTF::String& localized_value,
      const WTF::String& label);

  ~DateTimeSuggestion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DateTimeSuggestionPtr>
  DateTimeSuggestionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DateTimeSuggestion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DateTimeSuggestion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DateTimeSuggestion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DateTimeSuggestion_UnserializedMessageContext<
            UserType, DateTimeSuggestion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DateTimeSuggestion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DateTimeSuggestion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DateTimeSuggestion_UnserializedMessageContext<
            UserType, DateTimeSuggestion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DateTimeSuggestion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  double value;
  
  WTF::String localized_value;
  
  WTF::String label;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CORE_EXPORT DateTimeDialogValue {
 public:
  using DataView = DateTimeDialogValueDataView;
  using Data_ = internal::DateTimeDialogValue_Data;

  template <typename... Args>
  static DateTimeDialogValuePtr New(Args&&... args) {
    return DateTimeDialogValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DateTimeDialogValuePtr From(const U& u) {
    return mojo::TypeConverter<DateTimeDialogValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DateTimeDialogValue>::Convert(*this);
  }


  DateTimeDialogValue();

  DateTimeDialogValue(
      ::ui::mojom::blink::TextInputType dialog_type,
      double dialog_value,
      double minimum,
      double maximum,
      double step,
      WTF::Vector<DateTimeSuggestionPtr> suggestions);

  ~DateTimeDialogValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DateTimeDialogValuePtr>
  DateTimeDialogValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DateTimeDialogValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DateTimeDialogValue::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DateTimeDialogValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DateTimeDialogValue_UnserializedMessageContext<
            UserType, DateTimeDialogValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DateTimeDialogValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DateTimeDialogValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DateTimeDialogValue_UnserializedMessageContext<
            UserType, DateTimeDialogValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DateTimeDialogValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::ui::mojom::blink::TextInputType dialog_type;
  
  double dialog_value;
  
  double minimum;
  
  double maximum;
  
  double step;
  
  WTF::Vector<DateTimeSuggestionPtr> suggestions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DateTimeDialogValue);
};

template <typename StructPtrType>
DateTimeSuggestionPtr DateTimeSuggestion::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(localized_value),
      mojo::Clone(label)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DateTimeSuggestion>::value>::type*>
bool DateTimeSuggestion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->localized_value, other_struct.localized_value))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  return true;
}
template <typename StructPtrType>
DateTimeDialogValuePtr DateTimeDialogValue::Clone() const {
  return New(
      mojo::Clone(dialog_type),
      mojo::Clone(dialog_value),
      mojo::Clone(minimum),
      mojo::Clone(maximum),
      mojo::Clone(step),
      mojo::Clone(suggestions)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DateTimeDialogValue>::value>::type*>
bool DateTimeDialogValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dialog_type, other_struct.dialog_type))
    return false;
  if (!mojo::Equals(this->dialog_value, other_struct.dialog_value))
    return false;
  if (!mojo::Equals(this->minimum, other_struct.minimum))
    return false;
  if (!mojo::Equals(this->maximum, other_struct.maximum))
    return false;
  if (!mojo::Equals(this->step, other_struct.step))
    return false;
  if (!mojo::Equals(this->suggestions, other_struct.suggestions))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::DateTimeSuggestion::DataView,
                                         ::blink::mojom::blink::DateTimeSuggestionPtr> {
  static bool IsNull(const ::blink::mojom::blink::DateTimeSuggestionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DateTimeSuggestionPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::DateTimeSuggestion::value) value(
      const ::blink::mojom::blink::DateTimeSuggestionPtr& input) {
    return input->value;
  }

  static const decltype(::blink::mojom::blink::DateTimeSuggestion::localized_value)& localized_value(
      const ::blink::mojom::blink::DateTimeSuggestionPtr& input) {
    return input->localized_value;
  }

  static const decltype(::blink::mojom::blink::DateTimeSuggestion::label)& label(
      const ::blink::mojom::blink::DateTimeSuggestionPtr& input) {
    return input->label;
  }

  static bool Read(::blink::mojom::blink::DateTimeSuggestion::DataView input, ::blink::mojom::blink::DateTimeSuggestionPtr* output);
};


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::DateTimeDialogValue::DataView,
                                         ::blink::mojom::blink::DateTimeDialogValuePtr> {
  static bool IsNull(const ::blink::mojom::blink::DateTimeDialogValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DateTimeDialogValuePtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::DateTimeDialogValue::dialog_type) dialog_type(
      const ::blink::mojom::blink::DateTimeDialogValuePtr& input) {
    return input->dialog_type;
  }

  static decltype(::blink::mojom::blink::DateTimeDialogValue::dialog_value) dialog_value(
      const ::blink::mojom::blink::DateTimeDialogValuePtr& input) {
    return input->dialog_value;
  }

  static decltype(::blink::mojom::blink::DateTimeDialogValue::minimum) minimum(
      const ::blink::mojom::blink::DateTimeDialogValuePtr& input) {
    return input->minimum;
  }

  static decltype(::blink::mojom::blink::DateTimeDialogValue::maximum) maximum(
      const ::blink::mojom::blink::DateTimeDialogValuePtr& input) {
    return input->maximum;
  }

  static decltype(::blink::mojom::blink::DateTimeDialogValue::step) step(
      const ::blink::mojom::blink::DateTimeDialogValuePtr& input) {
    return input->step;
  }

  static const decltype(::blink::mojom::blink::DateTimeDialogValue::suggestions)& suggestions(
      const ::blink::mojom::blink::DateTimeDialogValuePtr& input) {
    return input->suggestions;
  }

  static bool Read(::blink::mojom::blink::DateTimeDialogValue::DataView input, ::blink::mojom::blink::DateTimeDialogValuePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_H_