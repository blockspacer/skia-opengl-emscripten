// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-blink-forward.h"

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




namespace mojo {
namespace test {
namespace blink {





class  Struct1 {
 public:
  using DataView = Struct1DataView;
  using Data_ = internal::Struct1_Data;

  template <typename... Args>
  static Struct1Ptr New(Args&&... args) {
    return Struct1Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Struct1Ptr From(const U& u) {
    return mojo::TypeConverter<Struct1Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct1>::Convert(*this);
  }


  Struct1();

  explicit Struct1(
      uint8_t i);

  ~Struct1();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Struct1Ptr>
  Struct1Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct1>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct1::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct1::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct1_UnserializedMessageContext<
            UserType, Struct1::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct1::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Struct1::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct1_UnserializedMessageContext<
            UserType, Struct1::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct1::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t i;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  Struct6 {
 public:
  using DataView = Struct6DataView;
  using Data_ = internal::Struct6_Data;

  template <typename... Args>
  static Struct6Ptr New(Args&&... args) {
    return Struct6Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Struct6Ptr From(const U& u) {
    return mojo::TypeConverter<Struct6Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct6>::Convert(*this);
  }


  Struct6();

  explicit Struct6(
      const WTF::String& str);

  ~Struct6();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Struct6Ptr>
  Struct6Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct6>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct6::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct6::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct6_UnserializedMessageContext<
            UserType, Struct6::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct6::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Struct6::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct6_UnserializedMessageContext<
            UserType, Struct6::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct6::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String str;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  Struct2 {
 public:
  using DataView = Struct2DataView;
  using Data_ = internal::Struct2_Data;

  template <typename... Args>
  static Struct2Ptr New(Args&&... args) {
    return Struct2Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Struct2Ptr From(const U& u) {
    return mojo::TypeConverter<Struct2Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct2>::Convert(*this);
  }


  Struct2();

  explicit Struct2(
      mojo::ScopedHandle hdl);

  ~Struct2();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Struct2Ptr>
  Struct2Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct2>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct2::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct2::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct2_UnserializedMessageContext<
            UserType, Struct2::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct2::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Struct2::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct2_UnserializedMessageContext<
            UserType, Struct2::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct2::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedHandle hdl;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Struct2);
};





class  Struct3 {
 public:
  using DataView = Struct3DataView;
  using Data_ = internal::Struct3_Data;

  template <typename... Args>
  static Struct3Ptr New(Args&&... args) {
    return Struct3Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Struct3Ptr From(const U& u) {
    return mojo::TypeConverter<Struct3Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct3>::Convert(*this);
  }


  Struct3();

  explicit Struct3(
      Struct1Ptr struct_1);

  ~Struct3();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Struct3Ptr>
  Struct3Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct3>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct3::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct3::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct3_UnserializedMessageContext<
            UserType, Struct3::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct3::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Struct3::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct3_UnserializedMessageContext<
            UserType, Struct3::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct3::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  Struct1Ptr struct_1;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Struct3);
};





class  Struct4 {
 public:
  using DataView = Struct4DataView;
  using Data_ = internal::Struct4_Data;

  template <typename... Args>
  static Struct4Ptr New(Args&&... args) {
    return Struct4Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Struct4Ptr From(const U& u) {
    return mojo::TypeConverter<Struct4Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct4>::Convert(*this);
  }


  Struct4();

  explicit Struct4(
      WTF::Vector<Struct1Ptr> data);

  ~Struct4();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Struct4Ptr>
  Struct4Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct4>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct4::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct4::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct4_UnserializedMessageContext<
            UserType, Struct4::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct4::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Struct4::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct4_UnserializedMessageContext<
            UserType, Struct4::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct4::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<Struct1Ptr> data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Struct4);
};





class  Struct5 {
 public:
  using DataView = Struct5DataView;
  using Data_ = internal::Struct5_Data;

  template <typename... Args>
  static Struct5Ptr New(Args&&... args) {
    return Struct5Ptr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static Struct5Ptr From(const U& u) {
    return mojo::TypeConverter<Struct5Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Struct5>::Convert(*this);
  }


  Struct5();

  explicit Struct5(
      WTF::Vector<Struct1Ptr> pair);

  ~Struct5();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = Struct5Ptr>
  Struct5Ptr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Struct5>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Struct5::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Struct5::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Struct5_UnserializedMessageContext<
            UserType, Struct5::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Struct5::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Struct5::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Struct5_UnserializedMessageContext<
            UserType, Struct5::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Struct5::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<Struct1Ptr> pair;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(Struct5);
};






class  StructOfNullables {
 public:
  using DataView = StructOfNullablesDataView;
  using Data_ = internal::StructOfNullables_Data;

  template <typename... Args>
  static StructOfNullablesPtr New(Args&&... args) {
    return StructOfNullablesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StructOfNullablesPtr From(const U& u) {
    return mojo::TypeConverter<StructOfNullablesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StructOfNullables>::Convert(*this);
  }


  StructOfNullables();

  StructOfNullables(
      mojo::ScopedHandle hdl,
      Struct1Ptr struct_1,
      const WTF::String& str);

  ~StructOfNullables();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StructOfNullablesPtr>
  StructOfNullablesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StructOfNullables>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StructOfNullables::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StructOfNullables::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StructOfNullables_UnserializedMessageContext<
            UserType, StructOfNullables::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StructOfNullables::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return StructOfNullables::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StructOfNullables_UnserializedMessageContext<
            UserType, StructOfNullables::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StructOfNullables::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedHandle hdl;
  
  Struct1Ptr struct_1;
  
  WTF::String str;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StructOfNullables);
};

template <typename StructPtrType>
Struct1Ptr Struct1::Clone() const {
  return New(
      mojo::Clone(i)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct1>::value>::type*>
bool Struct1::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->i, other_struct.i))
    return false;
  return true;
}
template <typename StructPtrType>
Struct2Ptr Struct2::Clone() const {
  return New(
      mojo::Clone(hdl)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct2>::value>::type*>
bool Struct2::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hdl, other_struct.hdl))
    return false;
  return true;
}
template <typename StructPtrType>
Struct3Ptr Struct3::Clone() const {
  return New(
      mojo::Clone(struct_1)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct3>::value>::type*>
bool Struct3::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->struct_1, other_struct.struct_1))
    return false;
  return true;
}
template <typename StructPtrType>
Struct4Ptr Struct4::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct4>::value>::type*>
bool Struct4::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
Struct5Ptr Struct5::Clone() const {
  return New(
      mojo::Clone(pair)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct5>::value>::type*>
bool Struct5::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pair, other_struct.pair))
    return false;
  return true;
}
template <typename StructPtrType>
Struct6Ptr Struct6::Clone() const {
  return New(
      mojo::Clone(str)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Struct6>::value>::type*>
bool Struct6::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->str, other_struct.str))
    return false;
  return true;
}
template <typename StructPtrType>
StructOfNullablesPtr StructOfNullables::Clone() const {
  return New(
      mojo::Clone(hdl),
      mojo::Clone(struct_1),
      mojo::Clone(str)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StructOfNullables>::value>::type*>
bool StructOfNullables::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->hdl, other_struct.hdl))
    return false;
  if (!mojo::Equals(this->struct_1, other_struct.struct_1))
    return false;
  if (!mojo::Equals(this->str, other_struct.str))
    return false;
  return true;
}


}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::blink::Struct1::DataView,
                                         ::mojo::test::blink::Struct1Ptr> {
  static bool IsNull(const ::mojo::test::blink::Struct1Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::Struct1Ptr* output) { output->reset(); }

  static decltype(::mojo::test::blink::Struct1::i) i(
      const ::mojo::test::blink::Struct1Ptr& input) {
    return input->i;
  }

  static bool Read(::mojo::test::blink::Struct1::DataView input, ::mojo::test::blink::Struct1Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::Struct2::DataView,
                                         ::mojo::test::blink::Struct2Ptr> {
  static bool IsNull(const ::mojo::test::blink::Struct2Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::Struct2Ptr* output) { output->reset(); }

  static  decltype(::mojo::test::blink::Struct2::hdl)& hdl(
       ::mojo::test::blink::Struct2Ptr& input) {
    return input->hdl;
  }

  static bool Read(::mojo::test::blink::Struct2::DataView input, ::mojo::test::blink::Struct2Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::Struct3::DataView,
                                         ::mojo::test::blink::Struct3Ptr> {
  static bool IsNull(const ::mojo::test::blink::Struct3Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::Struct3Ptr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::Struct3::struct_1)& struct_1(
      const ::mojo::test::blink::Struct3Ptr& input) {
    return input->struct_1;
  }

  static bool Read(::mojo::test::blink::Struct3::DataView input, ::mojo::test::blink::Struct3Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::Struct4::DataView,
                                         ::mojo::test::blink::Struct4Ptr> {
  static bool IsNull(const ::mojo::test::blink::Struct4Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::Struct4Ptr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::Struct4::data)& data(
      const ::mojo::test::blink::Struct4Ptr& input) {
    return input->data;
  }

  static bool Read(::mojo::test::blink::Struct4::DataView input, ::mojo::test::blink::Struct4Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::Struct5::DataView,
                                         ::mojo::test::blink::Struct5Ptr> {
  static bool IsNull(const ::mojo::test::blink::Struct5Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::Struct5Ptr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::Struct5::pair)& pair(
      const ::mojo::test::blink::Struct5Ptr& input) {
    return input->pair;
  }

  static bool Read(::mojo::test::blink::Struct5::DataView input, ::mojo::test::blink::Struct5Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::Struct6::DataView,
                                         ::mojo::test::blink::Struct6Ptr> {
  static bool IsNull(const ::mojo::test::blink::Struct6Ptr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::Struct6Ptr* output) { output->reset(); }

  static const decltype(::mojo::test::blink::Struct6::str)& str(
      const ::mojo::test::blink::Struct6Ptr& input) {
    return input->str;
  }

  static bool Read(::mojo::test::blink::Struct6::DataView input, ::mojo::test::blink::Struct6Ptr* output);
};


template <>
struct  StructTraits<::mojo::test::blink::StructOfNullables::DataView,
                                         ::mojo::test::blink::StructOfNullablesPtr> {
  static bool IsNull(const ::mojo::test::blink::StructOfNullablesPtr& input) { return !input; }
  static void SetToNull(::mojo::test::blink::StructOfNullablesPtr* output) { output->reset(); }

  static  decltype(::mojo::test::blink::StructOfNullables::hdl)& hdl(
       ::mojo::test::blink::StructOfNullablesPtr& input) {
    return input->hdl;
  }

  static const decltype(::mojo::test::blink::StructOfNullables::struct_1)& struct_1(
      const ::mojo::test::blink::StructOfNullablesPtr& input) {
    return input->struct_1;
  }

  static const decltype(::mojo::test::blink::StructOfNullables::str)& str(
      const ::mojo::test::blink::StructOfNullablesPtr& input) {
    return input->str;
  }

  static bool Read(::mojo::test::blink::StructOfNullables::DataView input, ::mojo::test::blink::StructOfNullablesPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SERIALIZATION_TEST_STRUCTS_MOJOM_BLINK_H_