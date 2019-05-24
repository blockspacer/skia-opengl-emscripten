// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink.h"

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




namespace WTF {
struct blink_mojom_internal_WebSandboxFlags_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::WebSandboxFlags& value) {
    using utype = std::underlying_type<::blink::mojom::WebSandboxFlags>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::WebSandboxFlags& left, const ::blink::mojom::WebSandboxFlags& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::WebSandboxFlags>
    : public GenericHashTraits<::blink::mojom::WebSandboxFlags> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::WebSandboxFlags& value) {
    return value == static_cast<::blink::mojom::WebSandboxFlags>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::WebSandboxFlags& slot, bool) {
    slot = static_cast<::blink::mojom::WebSandboxFlags>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::WebSandboxFlags& value) {
    return value == static_cast<::blink::mojom::WebSandboxFlags>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_FeaturePolicyFeature_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FeaturePolicyFeature& value) {
    using utype = std::underlying_type<::blink::mojom::FeaturePolicyFeature>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FeaturePolicyFeature& left, const ::blink::mojom::FeaturePolicyFeature& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FeaturePolicyFeature>
    : public GenericHashTraits<::blink::mojom::FeaturePolicyFeature> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FeaturePolicyFeature& value) {
    return value == static_cast<::blink::mojom::FeaturePolicyFeature>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FeaturePolicyFeature& slot, bool) {
    slot = static_cast<::blink::mojom::FeaturePolicyFeature>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FeaturePolicyFeature& value) {
    return value == static_cast<::blink::mojom::FeaturePolicyFeature>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_FeaturePolicyDisposition_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FeaturePolicyDisposition& value) {
    using utype = std::underlying_type<::blink::mojom::FeaturePolicyDisposition>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FeaturePolicyDisposition& left, const ::blink::mojom::FeaturePolicyDisposition& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FeaturePolicyDisposition>
    : public GenericHashTraits<::blink::mojom::FeaturePolicyDisposition> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FeaturePolicyDisposition& value) {
    return value == static_cast<::blink::mojom::FeaturePolicyDisposition>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FeaturePolicyDisposition& slot, bool) {
    slot = static_cast<::blink::mojom::FeaturePolicyDisposition>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FeaturePolicyDisposition& value) {
    return value == static_cast<::blink::mojom::FeaturePolicyDisposition>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PolicyValueType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PolicyValueType& value) {
    using utype = std::underlying_type<::blink::mojom::PolicyValueType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PolicyValueType& left, const ::blink::mojom::PolicyValueType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PolicyValueType>
    : public GenericHashTraits<::blink::mojom::PolicyValueType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PolicyValueType& value) {
    return value == static_cast<::blink::mojom::PolicyValueType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PolicyValueType& slot, bool) {
    slot = static_cast<::blink::mojom::PolicyValueType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PolicyValueType& value) {
    return value == static_cast<::blink::mojom::PolicyValueType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {







class PLATFORM_EXPORT PolicyValueData {
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





class PLATFORM_EXPORT PolicyValue {
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PolicyValue::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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





class PLATFORM_EXPORT ParsedFeaturePolicyDeclaration {
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
      WTF::HashMap<scoped_refptr<const ::blink::SecurityOrigin>, PolicyValuePtr> values,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ParsedFeaturePolicyDeclaration::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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
  
  WTF::HashMap<scoped_refptr<const ::blink::SecurityOrigin>, PolicyValuePtr> values;
  
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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PolicyValue::DataView,
                                         ::blink::mojom::blink::PolicyValuePtr> {
  static bool IsNull(const ::blink::mojom::blink::PolicyValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PolicyValuePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PolicyValue::data)& data(
      const ::blink::mojom::blink::PolicyValuePtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::blink::PolicyValue::DataView input, ::blink::mojom::blink::PolicyValuePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ParsedFeaturePolicyDeclaration::DataView,
                                         ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr> {
  static bool IsNull(const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::feature) feature(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->feature;
  }

  static const decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::values)& values(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->values;
  }

  static const decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::fallback_value)& fallback_value(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->fallback_value;
  }

  static const decltype(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::opaque_value)& opaque_value(
      const ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr& input) {
    return input->opaque_value;
  }

  static bool Read(::blink::mojom::blink::ParsedFeaturePolicyDeclaration::DataView input, ::blink::mojom::blink::ParsedFeaturePolicyDeclarationPtr* output);
};


template <>
struct PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::PolicyValueData::DataView,
                                        ::blink::mojom::blink::PolicyValueDataPtr> {
  static bool IsNull(const ::blink::mojom::blink::PolicyValueDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PolicyValueDataPtr* output) { output->reset(); }

  static ::blink::mojom::blink::PolicyValueData::Tag GetTag(const ::blink::mojom::blink::PolicyValueDataPtr& input) {
    return input->which();
  }

  static  bool null_value(const ::blink::mojom::blink::PolicyValueDataPtr& input) {
    return input->get_null_value();
  }

  static  bool bool_value(const ::blink::mojom::blink::PolicyValueDataPtr& input) {
    return input->get_bool_value();
  }

  static  double dec_double_value(const ::blink::mojom::blink::PolicyValueDataPtr& input) {
    return input->get_dec_double_value();
  }

  static bool Read(::blink::mojom::blink::PolicyValueData::DataView input, ::blink::mojom::blink::PolicyValueDataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FEATURE_POLICY_FEATURE_POLICY_MOJOM_BLINK_H_