// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_H_

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
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared.h"
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-forward.h"
#include "url/mojom/origin.mojom.h"
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
#include "third_party/blink/public/common/feature_policy/feature_policy.h"
#include "third_party/blink/public/common/feature_policy/policy_value.h"
#include "third_party/blink/public/common/frame/sandbox_flags.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {







class BLINK_COMMON_EXPORT PolicyValueData {
 public:
  using DataView = PolicyValueDataDataView;
  using Data_ = internal::PolicyValueData_Data;
  using Tag = Data_::PolicyValueData_Tag;

  static PolicyValueDataPtr New() {
    return PolicyValueDataPtr(base::in_place);
  }
  // Construct an instance holding |null_value|.
  static PolicyValueDataPtr
  NewNullValue(
      bool null_value) {
    auto result = PolicyValueDataPtr(base::in_place);
    result->set_null_value(std::move(null_value));
    return result;
  }
  // Construct an instance holding |bool_value|.
  static PolicyValueDataPtr
  NewBoolValue(
      bool bool_value) {
    auto result = PolicyValueDataPtr(base::in_place);
    result->set_bool_value(std::move(bool_value));
    return result;
  }
  // Construct an instance holding |dec_double_value|.
  static PolicyValueDataPtr
  NewDecDoubleValue(
      double dec_double_value) {
    auto result = PolicyValueDataPtr(base::in_place);
    result->set_dec_double_value(std::move(dec_double_value));
    return result;
  }

  template <typename U>
  static PolicyValueDataPtr From(const U& u) {
    return mojo::TypeConverter<PolicyValueDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PolicyValueData>::Convert(*this);
  }

  PolicyValueData();
  ~PolicyValueData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = PolicyValueDataPtr>
  PolicyValueDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PolicyValueData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_null_value() const { return tag_ == Tag::NULL_VALUE; }

  
  bool get_null_value() const {
    DCHECK(tag_ == Tag::NULL_VALUE);
    return data_.null_value;
  }

  
  void set_null_value(
      bool null_value);
  
  bool is_bool_value() const { return tag_ == Tag::BOOL_VALUE; }

  
  bool get_bool_value() const {
    DCHECK(tag_ == Tag::BOOL_VALUE);
    return data_.bool_value;
  }

  
  void set_bool_value(
      bool bool_value);
  
  bool is_dec_double_value() const { return tag_ == Tag::DEC_DOUBLE_VALUE; }

  
  double get_dec_double_value() const {
    DCHECK(tag_ == Tag::DEC_DOUBLE_VALUE);
    return data_.dec_double_value;
  }

  
  void set_dec_double_value(
      double dec_double_value);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PolicyValueData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<PolicyValueData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    bool null_value;
    bool bool_value;
    double dec_double_value;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class BLINK_COMMON_EXPORT PolicyValue {
 public:
  using DataView = PolicyValueDataView;
  using Data_ = internal::PolicyValue_Data;

  template <typename... Args>
  static PolicyValuePtr New(Args&&... args) {
    return PolicyValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PolicyValuePtr From(const U& u) {
    return mojo::TypeConverter<PolicyValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PolicyValue>::Convert(*this);
  }


  PolicyValue();

  explicit PolicyValue(
      PolicyValueDataPtr data);

  ~PolicyValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PolicyValuePtr>
  PolicyValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PolicyValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PolicyValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PolicyValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PolicyValue_UnserializedMessageContext<
            UserType, PolicyValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PolicyValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PolicyValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PolicyValue_UnserializedMessageContext<
            UserType, PolicyValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PolicyValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PolicyValueDataPtr data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PolicyValue);
};





class BLINK_COMMON_EXPORT ParsedFeaturePolicyDeclaration {
 public:
  using DataView = ParsedFeaturePolicyDeclarationDataView;
  using Data_ = internal::ParsedFeaturePolicyDeclaration_Data;

  template <typename... Args>
  static ParsedFeaturePolicyDeclarationPtr New(Args&&... args) {
    return ParsedFeaturePolicyDeclarationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ParsedFeaturePolicyDeclarationPtr From(const U& u) {
    return mojo::TypeConverter<ParsedFeaturePolicyDeclarationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ParsedFeaturePolicyDeclaration>::Convert(*this);
  }


  ParsedFeaturePolicyDeclaration();

  ParsedFeaturePolicyDeclaration(
      FeaturePolicyFeature feature,
      base::flat_map<url::Origin, PolicyValuePtr> values,
      PolicyValuePtr fallback_value,
      PolicyValuePtr opaque_value);

  ~ParsedFeaturePolicyDeclaration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ParsedFeaturePolicyDeclarationPtr>
  ParsedFeaturePolicyDeclarationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ParsedFeaturePolicyDeclaration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ParsedFeaturePolicyDeclaration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ParsedFeaturePolicyDeclaration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ParsedFeaturePolicyDeclaration_UnserializedMessageContext<
            UserType, ParsedFeaturePolicyDeclaration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ParsedFeaturePolicyDeclaration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ParsedFeaturePolicyDeclaration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ParsedFeaturePolicyDeclaration_UnserializedMessageContext<
            UserType, ParsedFeaturePolicyDeclaration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ParsedFeaturePolicyDeclaration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  FeaturePolicyFeature feature;
  
  base::flat_map<url::Origin, PolicyValuePtr> values;
  
  PolicyValuePtr fallback_value;
  
  PolicyValuePtr opaque_value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ParsedFeaturePolicyDeclaration);
};

template <typename UnionPtrType>
PolicyValueDataPtr PolicyValueData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::NULL_VALUE:
      rv->set_null_value(mojo::Clone(data_.null_value));
      break;
    case Tag::BOOL_VALUE:
      rv->set_bool_value(mojo::Clone(data_.bool_value));
      break;
    case Tag::DEC_DOUBLE_VALUE:
      rv->set_dec_double_value(mojo::Clone(data_.dec_double_value));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PolicyValueData>::value>::type*>
bool PolicyValueData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::NULL_VALUE:
      return mojo::Equals(data_.null_value, other.data_.null_value);
    case Tag::BOOL_VALUE:
      return mojo::Equals(data_.bool_value, other.data_.bool_value);
    case Tag::DEC_DOUBLE_VALUE:
      return mojo::Equals(data_.dec_double_value, other.data_.dec_double_value);
  }

  return false;
}
template <typename StructPtrType>
PolicyValuePtr PolicyValue::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PolicyValue>::value>::type*>
bool PolicyValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
ParsedFeaturePolicyDeclarationPtr ParsedFeaturePolicyDeclaration::Clone() const {
  return New(
      mojo::Clone(feature),
      mojo::Clone(values),
      mojo::Clone(fallback_value),
      mojo::Clone(opaque_value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ParsedFeaturePolicyDeclaration>::value>::type*>
bool ParsedFeaturePolicyDeclaration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->feature, other_struct.feature))
    return false;
  if (!mojo::Equals(this->values, other_struct.values))
    return false;
  if (!mojo::Equals(this->fallback_value, other_struct.fallback_value))
    return false;
  if (!mojo::Equals(this->opaque_value, other_struct.opaque_value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::PolicyValue::DataView,
                                         ::blink::mojom::PolicyValuePtr> {
  static bool IsNull(const ::blink::mojom::PolicyValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::PolicyValuePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::PolicyValue::data)& data(
      const ::blink::mojom::PolicyValuePtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::PolicyValue::DataView input, ::blink::mojom::PolicyValuePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ParsedFeaturePolicyDeclaration::DataView,
                                         ::blink::mojom::ParsedFeaturePolicyDeclarationPtr> {
  static bool IsNull(const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ParsedFeaturePolicyDeclarationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::feature) feature(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->feature;
  }

  static const decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::values)& values(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->values;
  }

  static const decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::fallback_value)& fallback_value(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->fallback_value;
  }

  static const decltype(::blink::mojom::ParsedFeaturePolicyDeclaration::opaque_value)& opaque_value(
      const ::blink::mojom::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->opaque_value;
  }

  static bool Read(::blink::mojom::ParsedFeaturePolicyDeclaration::DataView input, ::blink::mojom::ParsedFeaturePolicyDeclarationPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::PolicyValueData::DataView,
                                        ::blink::mojom::PolicyValueDataPtr> {
  static bool IsNull(const ::blink::mojom::PolicyValueDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::PolicyValueDataPtr* output) { output->reset(); }

  static ::blink::mojom::PolicyValueData::Tag GetTag(const ::blink::mojom::PolicyValueDataPtr& input) {
    return input->which();
  }

  static  bool null_value(const ::blink::mojom::PolicyValueDataPtr& input) {
    return input->get_null_value();
  }

  static  bool bool_value(const ::blink::mojom::PolicyValueDataPtr& input) {
    return input->get_bool_value();
  }

  static  double dec_double_value(const ::blink::mojom::PolicyValueDataPtr& input) {
    return input->get_dec_double_value();
  }

  static bool Read(::blink::mojom::PolicyValueData::DataView input, ::blink::mojom::PolicyValueDataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_H_