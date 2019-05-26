// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_H_
#define MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_H_

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
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-forward.h"
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
#include "base/values.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {







class COMPONENT_EXPORT(MOJO_BASE_MOJOM) Value {
 public:
  using DataView = ValueDataView;
  using Data_ = internal::Value_Data;
  using Tag = Data_::Value_Tag;

  static ValuePtr New() {
    return ValuePtr(base::in_place);
  }
  // Construct an instance holding |null_value|.
  static ValuePtr
  NewNullValue(
      uint8_t null_value) {
    auto result = ValuePtr(base::in_place);
    result->set_null_value(std::move(null_value));
    return result;
  }
  // Construct an instance holding |bool_value|.
  static ValuePtr
  NewBoolValue(
      bool bool_value) {
    auto result = ValuePtr(base::in_place);
    result->set_bool_value(std::move(bool_value));
    return result;
  }
  // Construct an instance holding |int_value|.
  static ValuePtr
  NewIntValue(
      int32_t int_value) {
    auto result = ValuePtr(base::in_place);
    result->set_int_value(std::move(int_value));
    return result;
  }
  // Construct an instance holding |double_value|.
  static ValuePtr
  NewDoubleValue(
      double double_value) {
    auto result = ValuePtr(base::in_place);
    result->set_double_value(std::move(double_value));
    return result;
  }
  // Construct an instance holding |string_value|.
  static ValuePtr
  NewStringValue(
      const std::string& string_value) {
    auto result = ValuePtr(base::in_place);
    result->set_string_value(std::move(string_value));
    return result;
  }
  // Construct an instance holding |binary_value|.
  static ValuePtr
  NewBinaryValue(
      const std::vector<uint8_t>& binary_value) {
    auto result = ValuePtr(base::in_place);
    result->set_binary_value(std::move(binary_value));
    return result;
  }
  // Construct an instance holding |dictionary_value|.
  static ValuePtr
  NewDictionaryValue(
      base::Value dictionary_value) {
    auto result = ValuePtr(base::in_place);
    result->set_dictionary_value(std::move(dictionary_value));
    return result;
  }
  // Construct an instance holding |list_value|.
  static ValuePtr
  NewListValue(
      base::Value list_value) {
    auto result = ValuePtr(base::in_place);
    result->set_list_value(std::move(list_value));
    return result;
  }

  template <typename U>
  static ValuePtr From(const U& u) {
    return mojo::TypeConverter<ValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Value>::Convert(*this);
  }

  Value();
  ~Value();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = ValuePtr>
  ValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Value>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_null_value() const { return tag_ == Tag::NULL_VALUE; }

  
  uint8_t get_null_value() const {
    DCHECK(tag_ == Tag::NULL_VALUE);
    return data_.null_value;
  }

  
  void set_null_value(
      uint8_t null_value);
  
  bool is_bool_value() const { return tag_ == Tag::BOOL_VALUE; }

  
  bool get_bool_value() const {
    DCHECK(tag_ == Tag::BOOL_VALUE);
    return data_.bool_value;
  }

  
  void set_bool_value(
      bool bool_value);
  
  bool is_int_value() const { return tag_ == Tag::INT_VALUE; }

  
  int32_t get_int_value() const {
    DCHECK(tag_ == Tag::INT_VALUE);
    return data_.int_value;
  }

  
  void set_int_value(
      int32_t int_value);
  
  bool is_double_value() const { return tag_ == Tag::DOUBLE_VALUE; }

  
  double get_double_value() const {
    DCHECK(tag_ == Tag::DOUBLE_VALUE);
    return data_.double_value;
  }

  
  void set_double_value(
      double double_value);
  
  bool is_string_value() const { return tag_ == Tag::STRING_VALUE; }

  
  std::string& get_string_value() const {
    DCHECK(tag_ == Tag::STRING_VALUE);
    return *(data_.string_value);
  }

  
  void set_string_value(
      const std::string& string_value);
  
  bool is_binary_value() const { return tag_ == Tag::BINARY_VALUE; }

  
  std::vector<uint8_t>& get_binary_value() const {
    DCHECK(tag_ == Tag::BINARY_VALUE);
    return *(data_.binary_value);
  }

  
  void set_binary_value(
      const std::vector<uint8_t>& binary_value);
  
  bool is_dictionary_value() const { return tag_ == Tag::DICTIONARY_VALUE; }

  
  base::Value& get_dictionary_value() const {
    DCHECK(tag_ == Tag::DICTIONARY_VALUE);
    return *(data_.dictionary_value);
  }

  
  void set_dictionary_value(
      base::Value dictionary_value);
  
  bool is_list_value() const { return tag_ == Tag::LIST_VALUE; }

  
  base::Value& get_list_value() const {
    DCHECK(tag_ == Tag::LIST_VALUE);
    return *(data_.list_value);
  }

  
  void set_list_value(
      base::Value list_value);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Value::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<Value::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    uint8_t null_value;
    bool bool_value;
    int32_t int_value;
    double double_value;
    std::string* string_value;
    std::vector<uint8_t>* binary_value;
    base::Value* dictionary_value;
    base::Value* list_value;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM) DictionaryValue {
 public:
  using DataView = DictionaryValueDataView;
  using Data_ = internal::DictionaryValue_Data;

  template <typename... Args>
  static DictionaryValuePtr New(Args&&... args) {
    return DictionaryValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DictionaryValuePtr From(const U& u) {
    return mojo::TypeConverter<DictionaryValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DictionaryValue>::Convert(*this);
  }


  DictionaryValue();

  explicit DictionaryValue(
      base::flat_map<std::string, base::Value> storage);

  ~DictionaryValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DictionaryValuePtr>
  DictionaryValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DictionaryValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DictionaryValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DictionaryValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DictionaryValue_UnserializedMessageContext<
            UserType, DictionaryValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DictionaryValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DictionaryValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DictionaryValue_UnserializedMessageContext<
            UserType, DictionaryValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DictionaryValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::flat_map<std::string, base::Value> storage;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DictionaryValue);
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM) ListValue {
 public:
  using DataView = ListValueDataView;
  using Data_ = internal::ListValue_Data;

  template <typename... Args>
  static ListValuePtr New(Args&&... args) {
    return ListValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ListValuePtr From(const U& u) {
    return mojo::TypeConverter<ListValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ListValue>::Convert(*this);
  }


  ListValue();

  explicit ListValue(
      std::vector<base::Value> storage);

  ~ListValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ListValuePtr>
  ListValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ListValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ListValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ListValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ListValue_UnserializedMessageContext<
            UserType, ListValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ListValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ListValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ListValue_UnserializedMessageContext<
            UserType, ListValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ListValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<base::Value> storage;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ListValue);
};

template <typename UnionPtrType>
ValuePtr Value::Clone() const {
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
    case Tag::INT_VALUE:
      rv->set_int_value(mojo::Clone(data_.int_value));
      break;
    case Tag::DOUBLE_VALUE:
      rv->set_double_value(mojo::Clone(data_.double_value));
      break;
    case Tag::STRING_VALUE:
      rv->set_string_value(mojo::Clone(*data_.string_value));
      break;
    case Tag::BINARY_VALUE:
      rv->set_binary_value(mojo::Clone(*data_.binary_value));
      break;
    case Tag::DICTIONARY_VALUE:
      rv->set_dictionary_value(mojo::Clone(*data_.dictionary_value));
      break;
    case Tag::LIST_VALUE:
      rv->set_list_value(mojo::Clone(*data_.list_value));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Value>::value>::type*>
bool Value::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::NULL_VALUE:
      return mojo::Equals(data_.null_value, other.data_.null_value);
    case Tag::BOOL_VALUE:
      return mojo::Equals(data_.bool_value, other.data_.bool_value);
    case Tag::INT_VALUE:
      return mojo::Equals(data_.int_value, other.data_.int_value);
    case Tag::DOUBLE_VALUE:
      return mojo::Equals(data_.double_value, other.data_.double_value);
    case Tag::STRING_VALUE:
      return mojo::Equals(*(data_.string_value), *(other.data_.string_value));
    case Tag::BINARY_VALUE:
      return mojo::Equals(*(data_.binary_value), *(other.data_.binary_value));
    case Tag::DICTIONARY_VALUE:
      return mojo::Equals(*(data_.dictionary_value), *(other.data_.dictionary_value));
    case Tag::LIST_VALUE:
      return mojo::Equals(*(data_.list_value), *(other.data_.list_value));
  }

  return false;
}
template <typename StructPtrType>
DictionaryValuePtr DictionaryValue::Clone() const {
  return New(
      mojo::Clone(storage)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DictionaryValue>::value>::type*>
bool DictionaryValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->storage, other_struct.storage))
    return false;
  return true;
}
template <typename StructPtrType>
ListValuePtr ListValue::Clone() const {
  return New(
      mojo::Clone(storage)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ListValue>::value>::type*>
bool ListValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->storage, other_struct.storage))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) StructTraits<::mojo_base::mojom::DictionaryValue::DataView,
                                         ::mojo_base::mojom::DictionaryValuePtr> {
  static bool IsNull(const ::mojo_base::mojom::DictionaryValuePtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::DictionaryValuePtr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::DictionaryValue::storage)& storage(
      const ::mojo_base::mojom::DictionaryValuePtr& input) {
    return input->storage;
  }

  static bool Read(::mojo_base::mojom::DictionaryValue::DataView input, ::mojo_base::mojom::DictionaryValuePtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) StructTraits<::mojo_base::mojom::ListValue::DataView,
                                         ::mojo_base::mojom::ListValuePtr> {
  static bool IsNull(const ::mojo_base::mojom::ListValuePtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::ListValuePtr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::ListValue::storage)& storage(
      const ::mojo_base::mojom::ListValuePtr& input) {
    return input->storage;
  }

  static bool Read(::mojo_base::mojom::ListValue::DataView input, ::mojo_base::mojom::ListValuePtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) UnionTraits<::mojo_base::mojom::Value::DataView,
                                        ::mojo_base::mojom::ValuePtr> {
  static bool IsNull(const ::mojo_base::mojom::ValuePtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::ValuePtr* output) { output->reset(); }

  static ::mojo_base::mojom::Value::Tag GetTag(const ::mojo_base::mojom::ValuePtr& input) {
    return input->which();
  }

  static  uint8_t null_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_null_value();
  }

  static  bool bool_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_bool_value();
  }

  static  int32_t int_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_int_value();
  }

  static  double double_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_double_value();
  }

  static const std::string& string_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_string_value();
  }

  static const std::vector<uint8_t>& binary_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_binary_value();
  }

  static const base::Value& dictionary_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_dictionary_value();
  }

  static const base::Value& list_value(const ::mojo_base::mojom::ValuePtr& input) {
    return input->get_list_value();
  }

  static bool Read(::mojo_base::mojom::Value::DataView input, ::mojo_base::mojom::ValuePtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_VALUES_MOJOM_H_