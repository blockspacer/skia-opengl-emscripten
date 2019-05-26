// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_unions.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_unions.mojom-forward.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"
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




namespace mojo {
namespace test {

class SmallCacheProxy;

template <typename ImplRefTraits>
class SmallCacheStub;

class SmallCacheRequestValidator;
class SmallCacheResponseValidator;


class  SmallCache
    : public SmallCacheInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SmallCacheInterfaceBase;
  using Proxy_ = SmallCacheProxy;

  template <typename ImplRefTraits>
  using Stub_ = SmallCacheStub<ImplRefTraits>;

  using RequestValidator_ = SmallCacheRequestValidator;
  using ResponseValidator_ = SmallCacheResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetIntValueMinVersion = 0,
    kGetIntValueMinVersion = 0,
  };
  virtual ~SmallCache() {}

  
  virtual void SetIntValue(int64_t int_value) = 0;


  using GetIntValueCallback = base::OnceCallback<void(int64_t)>;
  
  virtual void GetIntValue(GetIntValueCallback callback) = 0;
};

class UnionInterfaceProxy;

template <typename ImplRefTraits>
class UnionInterfaceStub;

class UnionInterfaceRequestValidator;
class UnionInterfaceResponseValidator;


class  UnionInterface
    : public UnionInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = UnionInterfaceInterfaceBase;
  using Proxy_ = UnionInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = UnionInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = UnionInterfaceRequestValidator;
  using ResponseValidator_ = UnionInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEchoMinVersion = 0,
  };
  virtual ~UnionInterface() {}


  using EchoCallback = base::OnceCallback<void(PodUnionPtr)>;
  
  virtual void Echo(PodUnionPtr in_val, EchoCallback callback) = 0;
};

class  SmallCacheProxy
    : public SmallCache {
 public:
  using InterfaceType = SmallCache;

  explicit SmallCacheProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetIntValue(int64_t int_value) final;
  void GetIntValue(GetIntValueCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  UnionInterfaceProxy
    : public UnionInterface {
 public:
  using InterfaceType = UnionInterface;

  explicit UnionInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Echo(PodUnionPtr in_val, EchoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  SmallCacheStubDispatch {
 public:
  static bool Accept(SmallCache* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SmallCache* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SmallCache>>
class SmallCacheStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SmallCacheStub() {}
  ~SmallCacheStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SmallCacheStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SmallCacheStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UnionInterfaceStubDispatch {
 public:
  static bool Accept(UnionInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UnionInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UnionInterface>>
class UnionInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UnionInterfaceStub() {}
  ~UnionInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnionInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UnionInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  SmallCacheRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UnionInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  SmallCacheResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UnionInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  DummyStruct {
 public:
  using DataView = DummyStructDataView;
  using Data_ = internal::DummyStruct_Data;

  template <typename... Args>
  static DummyStructPtr New(Args&&... args) {
    return DummyStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DummyStructPtr From(const U& u) {
    return mojo::TypeConverter<DummyStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DummyStruct>::Convert(*this);
  }


  DummyStruct();

  explicit DummyStruct(
      int8_t f_int8);

  ~DummyStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DummyStructPtr>
  DummyStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DummyStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DummyStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DummyStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DummyStruct_UnserializedMessageContext<
            UserType, DummyStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DummyStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DummyStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DummyStruct_UnserializedMessageContext<
            UserType, DummyStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DummyStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int8_t f_int8;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class  PodUnion {
 public:
  using DataView = PodUnionDataView;
  using Data_ = internal::PodUnion_Data;
  using Tag = Data_::PodUnion_Tag;

  static PodUnionPtr New() {
    return PodUnionPtr(base::in_place);
  }
  // Construct an instance holding |f_int8|.
  static PodUnionPtr
  NewFInt8(
      int8_t f_int8) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_int8(std::move(f_int8));
    return result;
  }
  // Construct an instance holding |f_int8_other|.
  static PodUnionPtr
  NewFInt8Other(
      int8_t f_int8_other) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_int8_other(std::move(f_int8_other));
    return result;
  }
  // Construct an instance holding |f_uint8|.
  static PodUnionPtr
  NewFUint8(
      uint8_t f_uint8) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_uint8(std::move(f_uint8));
    return result;
  }
  // Construct an instance holding |f_int16|.
  static PodUnionPtr
  NewFInt16(
      int16_t f_int16) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_int16(std::move(f_int16));
    return result;
  }
  // Construct an instance holding |f_uint16|.
  static PodUnionPtr
  NewFUint16(
      uint16_t f_uint16) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_uint16(std::move(f_uint16));
    return result;
  }
  // Construct an instance holding |f_int32|.
  static PodUnionPtr
  NewFInt32(
      int32_t f_int32) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_int32(std::move(f_int32));
    return result;
  }
  // Construct an instance holding |f_uint32|.
  static PodUnionPtr
  NewFUint32(
      uint32_t f_uint32) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_uint32(std::move(f_uint32));
    return result;
  }
  // Construct an instance holding |f_int64|.
  static PodUnionPtr
  NewFInt64(
      int64_t f_int64) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_int64(std::move(f_int64));
    return result;
  }
  // Construct an instance holding |f_uint64|.
  static PodUnionPtr
  NewFUint64(
      uint64_t f_uint64) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_uint64(std::move(f_uint64));
    return result;
  }
  // Construct an instance holding |f_float|.
  static PodUnionPtr
  NewFFloat(
      float f_float) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_float(std::move(f_float));
    return result;
  }
  // Construct an instance holding |f_double|.
  static PodUnionPtr
  NewFDouble(
      double f_double) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_double(std::move(f_double));
    return result;
  }
  // Construct an instance holding |f_bool|.
  static PodUnionPtr
  NewFBool(
      bool f_bool) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_bool(std::move(f_bool));
    return result;
  }
  // Construct an instance holding |f_enum|.
  static PodUnionPtr
  NewFEnum(
      AnEnum f_enum) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_enum(std::move(f_enum));
    return result;
  }
  // Construct an instance holding |f_extensible_enum|.
  static PodUnionPtr
  NewFExtensibleEnum(
      AnExtensibleEnum f_extensible_enum) {
    auto result = PodUnionPtr(base::in_place);
    result->set_f_extensible_enum(std::move(f_extensible_enum));
    return result;
  }

  template <typename U>
  static PodUnionPtr From(const U& u) {
    return mojo::TypeConverter<PodUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PodUnion>::Convert(*this);
  }

  PodUnion();
  ~PodUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = PodUnionPtr>
  PodUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PodUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_f_int8() const { return tag_ == Tag::F_INT8; }

  
  int8_t get_f_int8() const {
    DCHECK(tag_ == Tag::F_INT8);
    return data_.f_int8;
  }

  
  void set_f_int8(
      int8_t f_int8);
  
  bool is_f_int8_other() const { return tag_ == Tag::F_INT8_OTHER; }

  
  int8_t get_f_int8_other() const {
    DCHECK(tag_ == Tag::F_INT8_OTHER);
    return data_.f_int8_other;
  }

  
  void set_f_int8_other(
      int8_t f_int8_other);
  
  bool is_f_uint8() const { return tag_ == Tag::F_UINT8; }

  
  uint8_t get_f_uint8() const {
    DCHECK(tag_ == Tag::F_UINT8);
    return data_.f_uint8;
  }

  
  void set_f_uint8(
      uint8_t f_uint8);
  
  bool is_f_int16() const { return tag_ == Tag::F_INT16; }

  
  int16_t get_f_int16() const {
    DCHECK(tag_ == Tag::F_INT16);
    return data_.f_int16;
  }

  
  void set_f_int16(
      int16_t f_int16);
  
  bool is_f_uint16() const { return tag_ == Tag::F_UINT16; }

  
  uint16_t get_f_uint16() const {
    DCHECK(tag_ == Tag::F_UINT16);
    return data_.f_uint16;
  }

  
  void set_f_uint16(
      uint16_t f_uint16);
  
  bool is_f_int32() const { return tag_ == Tag::F_INT32; }

  
  int32_t get_f_int32() const {
    DCHECK(tag_ == Tag::F_INT32);
    return data_.f_int32;
  }

  
  void set_f_int32(
      int32_t f_int32);
  
  bool is_f_uint32() const { return tag_ == Tag::F_UINT32; }

  
  uint32_t get_f_uint32() const {
    DCHECK(tag_ == Tag::F_UINT32);
    return data_.f_uint32;
  }

  
  void set_f_uint32(
      uint32_t f_uint32);
  
  bool is_f_int64() const { return tag_ == Tag::F_INT64; }

  
  int64_t get_f_int64() const {
    DCHECK(tag_ == Tag::F_INT64);
    return data_.f_int64;
  }

  
  void set_f_int64(
      int64_t f_int64);
  
  bool is_f_uint64() const { return tag_ == Tag::F_UINT64; }

  
  uint64_t get_f_uint64() const {
    DCHECK(tag_ == Tag::F_UINT64);
    return data_.f_uint64;
  }

  
  void set_f_uint64(
      uint64_t f_uint64);
  
  bool is_f_float() const { return tag_ == Tag::F_FLOAT; }

  
  float get_f_float() const {
    DCHECK(tag_ == Tag::F_FLOAT);
    return data_.f_float;
  }

  
  void set_f_float(
      float f_float);
  
  bool is_f_double() const { return tag_ == Tag::F_DOUBLE; }

  
  double get_f_double() const {
    DCHECK(tag_ == Tag::F_DOUBLE);
    return data_.f_double;
  }

  
  void set_f_double(
      double f_double);
  
  bool is_f_bool() const { return tag_ == Tag::F_BOOL; }

  
  bool get_f_bool() const {
    DCHECK(tag_ == Tag::F_BOOL);
    return data_.f_bool;
  }

  
  void set_f_bool(
      bool f_bool);
  
  bool is_f_enum() const { return tag_ == Tag::F_ENUM; }

  
  AnEnum get_f_enum() const {
    DCHECK(tag_ == Tag::F_ENUM);
    return data_.f_enum;
  }

  
  void set_f_enum(
      AnEnum f_enum);
  
  bool is_f_extensible_enum() const { return tag_ == Tag::F_EXTENSIBLE_ENUM; }

  
  AnExtensibleEnum get_f_extensible_enum() const {
    DCHECK(tag_ == Tag::F_EXTENSIBLE_ENUM);
    return data_.f_extensible_enum;
  }

  
  void set_f_extensible_enum(
      AnExtensibleEnum f_extensible_enum);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PodUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<PodUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    int8_t f_int8;
    int8_t f_int8_other;
    uint8_t f_uint8;
    int16_t f_int16;
    uint16_t f_uint16;
    int32_t f_int32;
    uint32_t f_uint32;
    int64_t f_int64;
    uint64_t f_uint64;
    float f_float;
    double f_double;
    bool f_bool;
    AnEnum f_enum;
    AnExtensibleEnum f_extensible_enum;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class  ObjectUnion {
 public:
  using DataView = ObjectUnionDataView;
  using Data_ = internal::ObjectUnion_Data;
  using Tag = Data_::ObjectUnion_Tag;

  static ObjectUnionPtr New() {
    return ObjectUnionPtr(base::in_place);
  }
  // Construct an instance holding |f_int8|.
  static ObjectUnionPtr
  NewFInt8(
      int8_t f_int8) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_int8(std::move(f_int8));
    return result;
  }
  // Construct an instance holding |f_string|.
  static ObjectUnionPtr
  NewFString(
      const std::string& f_string) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_string(std::move(f_string));
    return result;
  }
  // Construct an instance holding |f_dummy|.
  static ObjectUnionPtr
  NewFDummy(
      DummyStructPtr f_dummy) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_dummy(std::move(f_dummy));
    return result;
  }
  // Construct an instance holding |f_nullable|.
  static ObjectUnionPtr
  NewFNullable(
      DummyStructPtr f_nullable) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_nullable(std::move(f_nullable));
    return result;
  }
  // Construct an instance holding |f_array_int8|.
  static ObjectUnionPtr
  NewFArrayInt8(
      const std::vector<int8_t>& f_array_int8) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_array_int8(std::move(f_array_int8));
    return result;
  }
  // Construct an instance holding |f_map_int8|.
  static ObjectUnionPtr
  NewFMapInt8(
      const base::flat_map<std::string, int8_t>& f_map_int8) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_map_int8(std::move(f_map_int8));
    return result;
  }
  // Construct an instance holding |f_pod_union|.
  static ObjectUnionPtr
  NewFPodUnion(
      PodUnionPtr f_pod_union) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_pod_union(std::move(f_pod_union));
    return result;
  }
  // Construct an instance holding |f_small_structs|.
  static ObjectUnionPtr
  NewFSmallStructs(
      std::vector<SmallStructPtr> f_small_structs) {
    auto result = ObjectUnionPtr(base::in_place);
    result->set_f_small_structs(std::move(f_small_structs));
    return result;
  }

  template <typename U>
  static ObjectUnionPtr From(const U& u) {
    return mojo::TypeConverter<ObjectUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ObjectUnion>::Convert(*this);
  }

  ObjectUnion();
  ~ObjectUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = ObjectUnionPtr>
  ObjectUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ObjectUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_f_int8() const { return tag_ == Tag::F_INT8; }

  
  int8_t get_f_int8() const {
    DCHECK(tag_ == Tag::F_INT8);
    return data_.f_int8;
  }

  
  void set_f_int8(
      int8_t f_int8);
  
  bool is_f_string() const { return tag_ == Tag::F_STRING; }

  
  std::string& get_f_string() const {
    DCHECK(tag_ == Tag::F_STRING);
    return *(data_.f_string);
  }

  
  void set_f_string(
      const std::string& f_string);
  
  bool is_f_dummy() const { return tag_ == Tag::F_DUMMY; }

  
  DummyStructPtr& get_f_dummy() const {
    DCHECK(tag_ == Tag::F_DUMMY);
    return *(data_.f_dummy);
  }

  
  void set_f_dummy(
      DummyStructPtr f_dummy);
  
  bool is_f_nullable() const { return tag_ == Tag::F_NULLABLE; }

  
  DummyStructPtr& get_f_nullable() const {
    DCHECK(tag_ == Tag::F_NULLABLE);
    return *(data_.f_nullable);
  }

  
  void set_f_nullable(
      DummyStructPtr f_nullable);
  
  bool is_f_array_int8() const { return tag_ == Tag::F_ARRAY_INT8; }

  
  std::vector<int8_t>& get_f_array_int8() const {
    DCHECK(tag_ == Tag::F_ARRAY_INT8);
    return *(data_.f_array_int8);
  }

  
  void set_f_array_int8(
      const std::vector<int8_t>& f_array_int8);
  
  bool is_f_map_int8() const { return tag_ == Tag::F_MAP_INT8; }

  
  base::flat_map<std::string, int8_t>& get_f_map_int8() const {
    DCHECK(tag_ == Tag::F_MAP_INT8);
    return *(data_.f_map_int8);
  }

  
  void set_f_map_int8(
      const base::flat_map<std::string, int8_t>& f_map_int8);
  
  bool is_f_pod_union() const { return tag_ == Tag::F_POD_UNION; }

  
  PodUnionPtr& get_f_pod_union() const {
    DCHECK(tag_ == Tag::F_POD_UNION);
    return *(data_.f_pod_union);
  }

  
  void set_f_pod_union(
      PodUnionPtr f_pod_union);
  
  bool is_f_small_structs() const { return tag_ == Tag::F_SMALL_STRUCTS; }

  
  std::vector<SmallStructPtr>& get_f_small_structs() const {
    DCHECK(tag_ == Tag::F_SMALL_STRUCTS);
    return *(data_.f_small_structs);
  }

  
  void set_f_small_structs(
      std::vector<SmallStructPtr> f_small_structs);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ObjectUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<ObjectUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    int8_t f_int8;
    std::string* f_string;
    DummyStructPtr* f_dummy;
    DummyStructPtr* f_nullable;
    std::vector<int8_t>* f_array_int8;
    base::flat_map<std::string, int8_t>* f_map_int8;
    PodUnionPtr* f_pod_union;
    std::vector<SmallStructPtr>* f_small_structs;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class  HandleUnion {
 public:
  using DataView = HandleUnionDataView;
  using Data_ = internal::HandleUnion_Data;
  using Tag = Data_::HandleUnion_Tag;

  static HandleUnionPtr New() {
    return HandleUnionPtr(base::in_place);
  }
  // Construct an instance holding |f_handle|.
  static HandleUnionPtr
  NewFHandle(
      mojo::ScopedHandle f_handle) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_handle(std::move(f_handle));
    return result;
  }
  // Construct an instance holding |f_message_pipe|.
  static HandleUnionPtr
  NewFMessagePipe(
      mojo::ScopedMessagePipeHandle f_message_pipe) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_message_pipe(std::move(f_message_pipe));
    return result;
  }
  // Construct an instance holding |f_data_pipe_consumer|.
  static HandleUnionPtr
  NewFDataPipeConsumer(
      mojo::ScopedDataPipeConsumerHandle f_data_pipe_consumer) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_data_pipe_consumer(std::move(f_data_pipe_consumer));
    return result;
  }
  // Construct an instance holding |f_data_pipe_producer|.
  static HandleUnionPtr
  NewFDataPipeProducer(
      mojo::ScopedDataPipeProducerHandle f_data_pipe_producer) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_data_pipe_producer(std::move(f_data_pipe_producer));
    return result;
  }
  // Construct an instance holding |f_shared_buffer|.
  static HandleUnionPtr
  NewFSharedBuffer(
      mojo::ScopedSharedBufferHandle f_shared_buffer) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_shared_buffer(std::move(f_shared_buffer));
    return result;
  }
  // Construct an instance holding |f_small_cache|.
  static HandleUnionPtr
  NewFSmallCache(
      mojo::PendingRemote<SmallCache> f_small_cache) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_small_cache(std::move(f_small_cache));
    return result;
  }
  // Construct an instance holding |f_small_cache_receiver|.
  static HandleUnionPtr
  NewFSmallCacheReceiver(
      mojo::PendingReceiver<SmallCache> f_small_cache_receiver) {
    auto result = HandleUnionPtr(base::in_place);
    result->set_f_small_cache_receiver(std::move(f_small_cache_receiver));
    return result;
  }

  template <typename U>
  static HandleUnionPtr From(const U& u) {
    return mojo::TypeConverter<HandleUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HandleUnion>::Convert(*this);
  }

  HandleUnion();
  ~HandleUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = HandleUnionPtr>
  HandleUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HandleUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_f_handle() const { return tag_ == Tag::F_HANDLE; }

  
  mojo::ScopedHandle& get_f_handle() const {
    DCHECK(tag_ == Tag::F_HANDLE);
    return *(data_.f_handle);
  }

  
  void set_f_handle(
      mojo::ScopedHandle f_handle);
  
  bool is_f_message_pipe() const { return tag_ == Tag::F_MESSAGE_PIPE; }

  
  mojo::ScopedMessagePipeHandle& get_f_message_pipe() const {
    DCHECK(tag_ == Tag::F_MESSAGE_PIPE);
    return *(data_.f_message_pipe);
  }

  
  void set_f_message_pipe(
      mojo::ScopedMessagePipeHandle f_message_pipe);
  
  bool is_f_data_pipe_consumer() const { return tag_ == Tag::F_DATA_PIPE_CONSUMER; }

  
  mojo::ScopedDataPipeConsumerHandle& get_f_data_pipe_consumer() const {
    DCHECK(tag_ == Tag::F_DATA_PIPE_CONSUMER);
    return *(data_.f_data_pipe_consumer);
  }

  
  void set_f_data_pipe_consumer(
      mojo::ScopedDataPipeConsumerHandle f_data_pipe_consumer);
  
  bool is_f_data_pipe_producer() const { return tag_ == Tag::F_DATA_PIPE_PRODUCER; }

  
  mojo::ScopedDataPipeProducerHandle& get_f_data_pipe_producer() const {
    DCHECK(tag_ == Tag::F_DATA_PIPE_PRODUCER);
    return *(data_.f_data_pipe_producer);
  }

  
  void set_f_data_pipe_producer(
      mojo::ScopedDataPipeProducerHandle f_data_pipe_producer);
  
  bool is_f_shared_buffer() const { return tag_ == Tag::F_SHARED_BUFFER; }

  
  mojo::ScopedSharedBufferHandle& get_f_shared_buffer() const {
    DCHECK(tag_ == Tag::F_SHARED_BUFFER);
    return *(data_.f_shared_buffer);
  }

  
  void set_f_shared_buffer(
      mojo::ScopedSharedBufferHandle f_shared_buffer);
  
  bool is_f_small_cache() const { return tag_ == Tag::F_SMALL_CACHE; }

  
  mojo::PendingRemote<SmallCache>& get_f_small_cache() const {
    DCHECK(tag_ == Tag::F_SMALL_CACHE);
    return *(data_.f_small_cache);
  }

  
  void set_f_small_cache(
      mojo::PendingRemote<SmallCache> f_small_cache);
  
  bool is_f_small_cache_receiver() const { return tag_ == Tag::F_SMALL_CACHE_RECEIVER; }

  
  mojo::PendingReceiver<SmallCache>& get_f_small_cache_receiver() const {
    DCHECK(tag_ == Tag::F_SMALL_CACHE_RECEIVER);
    return *(data_.f_small_cache_receiver);
  }

  
  void set_f_small_cache_receiver(
      mojo::PendingReceiver<SmallCache> f_small_cache_receiver);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HandleUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<HandleUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    mojo::ScopedHandle* f_handle;
    mojo::ScopedMessagePipeHandle* f_message_pipe;
    mojo::ScopedDataPipeConsumerHandle* f_data_pipe_consumer;
    mojo::ScopedDataPipeProducerHandle* f_data_pipe_producer;
    mojo::ScopedSharedBufferHandle* f_shared_buffer;
    mojo::PendingRemote<SmallCache>* f_small_cache;
    mojo::PendingReceiver<SmallCache>* f_small_cache_receiver;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class  OldUnion {
 public:
  using DataView = OldUnionDataView;
  using Data_ = internal::OldUnion_Data;
  using Tag = Data_::OldUnion_Tag;

  static OldUnionPtr New() {
    return OldUnionPtr(base::in_place);
  }
  // Construct an instance holding |f_int8|.
  static OldUnionPtr
  NewFInt8(
      int8_t f_int8) {
    auto result = OldUnionPtr(base::in_place);
    result->set_f_int8(std::move(f_int8));
    return result;
  }

  template <typename U>
  static OldUnionPtr From(const U& u) {
    return mojo::TypeConverter<OldUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OldUnion>::Convert(*this);
  }

  OldUnion();
  ~OldUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = OldUnionPtr>
  OldUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OldUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_f_int8() const { return tag_ == Tag::F_INT8; }

  
  int8_t get_f_int8() const {
    DCHECK(tag_ == Tag::F_INT8);
    return data_.f_int8;
  }

  
  void set_f_int8(
      int8_t f_int8);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OldUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<OldUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    int8_t f_int8;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class  NewUnion {
 public:
  using DataView = NewUnionDataView;
  using Data_ = internal::NewUnion_Data;
  using Tag = Data_::NewUnion_Tag;

  static NewUnionPtr New() {
    return NewUnionPtr(base::in_place);
  }
  // Construct an instance holding |f_int8|.
  static NewUnionPtr
  NewFInt8(
      int8_t f_int8) {
    auto result = NewUnionPtr(base::in_place);
    result->set_f_int8(std::move(f_int8));
    return result;
  }
  // Construct an instance holding |f_int16|.
  static NewUnionPtr
  NewFInt16(
      int16_t f_int16) {
    auto result = NewUnionPtr(base::in_place);
    result->set_f_int16(std::move(f_int16));
    return result;
  }

  template <typename U>
  static NewUnionPtr From(const U& u) {
    return mojo::TypeConverter<NewUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NewUnion>::Convert(*this);
  }

  NewUnion();
  ~NewUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = NewUnionPtr>
  NewUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NewUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_f_int8() const { return tag_ == Tag::F_INT8; }

  
  int8_t get_f_int8() const {
    DCHECK(tag_ == Tag::F_INT8);
    return data_.f_int8;
  }

  
  void set_f_int8(
      int8_t f_int8);
  
  bool is_f_int16() const { return tag_ == Tag::F_INT16; }

  
  int16_t get_f_int16() const {
    DCHECK(tag_ == Tag::F_INT16);
    return data_.f_int16;
  }

  
  void set_f_int16(
      int16_t f_int16);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NewUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<NewUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    int8_t f_int8;
    int16_t f_int16;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class  ImportedUnionUnion {
 public:
  using DataView = ImportedUnionUnionDataView;
  using Data_ = internal::ImportedUnionUnion_Data;
  using Tag = Data_::ImportedUnionUnion_Tag;

  static ImportedUnionUnionPtr New() {
    return ImportedUnionUnionPtr(base::in_place);
  }
  // Construct an instance holding |point_or_shape|.
  static ImportedUnionUnionPtr
  NewPointOrShape(
      ::imported::PointOrShapePtr point_or_shape) {
    auto result = ImportedUnionUnionPtr(base::in_place);
    result->set_point_or_shape(std::move(point_or_shape));
    return result;
  }

  template <typename U>
  static ImportedUnionUnionPtr From(const U& u) {
    return mojo::TypeConverter<ImportedUnionUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImportedUnionUnion>::Convert(*this);
  }

  ImportedUnionUnion();
  ~ImportedUnionUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = ImportedUnionUnionPtr>
  ImportedUnionUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImportedUnionUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_point_or_shape() const { return tag_ == Tag::POINT_OR_SHAPE; }

  
  ::imported::PointOrShapePtr& get_point_or_shape() const {
    DCHECK(tag_ == Tag::POINT_OR_SHAPE);
    return *(data_.point_or_shape);
  }

  
  void set_point_or_shape(
      ::imported::PointOrShapePtr point_or_shape);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImportedUnionUnion::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<ImportedUnionUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    ::imported::PointOrShapePtr* point_or_shape;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class  WrapperStruct {
 public:
  using DataView = WrapperStructDataView;
  using Data_ = internal::WrapperStruct_Data;

  template <typename... Args>
  static WrapperStructPtr New(Args&&... args) {
    return WrapperStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WrapperStructPtr From(const U& u) {
    return mojo::TypeConverter<WrapperStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WrapperStruct>::Convert(*this);
  }


  WrapperStruct();

  WrapperStruct(
      ObjectUnionPtr object_union,
      PodUnionPtr pod_union,
      HandleUnionPtr handle_union);

  ~WrapperStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WrapperStructPtr>
  WrapperStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WrapperStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WrapperStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WrapperStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WrapperStruct_UnserializedMessageContext<
            UserType, WrapperStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WrapperStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return WrapperStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WrapperStruct_UnserializedMessageContext<
            UserType, WrapperStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WrapperStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ObjectUnionPtr object_union;
  
  PodUnionPtr pod_union;
  
  HandleUnionPtr handle_union;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WrapperStruct);
};






class  SmallStruct {
 public:
  using DataView = SmallStructDataView;
  using Data_ = internal::SmallStruct_Data;

  template <typename... Args>
  static SmallStructPtr New(Args&&... args) {
    return SmallStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SmallStructPtr From(const U& u) {
    return mojo::TypeConverter<SmallStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SmallStruct>::Convert(*this);
  }


  SmallStruct();

  SmallStruct(
      DummyStructPtr dummy_struct,
      PodUnionPtr pod_union,
      base::Optional<std::vector<PodUnionPtr>> pod_union_array,
      base::Optional<std::vector<PodUnionPtr>> nullable_pod_union_array,
      base::Optional<std::vector<DummyStructPtr>> s_array,
      base::Optional<base::flat_map<std::string, PodUnionPtr>> pod_union_map,
      base::Optional<base::flat_map<std::string, PodUnionPtr>> nullable_pod_union_map);

  ~SmallStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SmallStructPtr>
  SmallStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SmallStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SmallStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SmallStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SmallStruct_UnserializedMessageContext<
            UserType, SmallStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SmallStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SmallStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SmallStruct_UnserializedMessageContext<
            UserType, SmallStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SmallStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  DummyStructPtr dummy_struct;
  
  PodUnionPtr pod_union;
  
  base::Optional<std::vector<PodUnionPtr>> pod_union_array;
  
  base::Optional<std::vector<PodUnionPtr>> nullable_pod_union_array;
  
  base::Optional<std::vector<DummyStructPtr>> s_array;
  
  base::Optional<base::flat_map<std::string, PodUnionPtr>> pod_union_map;
  
  base::Optional<base::flat_map<std::string, PodUnionPtr>> nullable_pod_union_map;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SmallStruct);
};





class  SmallStructNonNullableUnion {
 public:
  using DataView = SmallStructNonNullableUnionDataView;
  using Data_ = internal::SmallStructNonNullableUnion_Data;

  template <typename... Args>
  static SmallStructNonNullableUnionPtr New(Args&&... args) {
    return SmallStructNonNullableUnionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SmallStructNonNullableUnionPtr From(const U& u) {
    return mojo::TypeConverter<SmallStructNonNullableUnionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SmallStructNonNullableUnion>::Convert(*this);
  }


  SmallStructNonNullableUnion();

  explicit SmallStructNonNullableUnion(
      PodUnionPtr pod_union);

  ~SmallStructNonNullableUnion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SmallStructNonNullableUnionPtr>
  SmallStructNonNullableUnionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SmallStructNonNullableUnion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SmallStructNonNullableUnion::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SmallStructNonNullableUnion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SmallStructNonNullableUnion_UnserializedMessageContext<
            UserType, SmallStructNonNullableUnion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SmallStructNonNullableUnion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SmallStructNonNullableUnion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SmallStructNonNullableUnion_UnserializedMessageContext<
            UserType, SmallStructNonNullableUnion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SmallStructNonNullableUnion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PodUnionPtr pod_union;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SmallStructNonNullableUnion);
};





class  SmallObjStruct {
 public:
  using DataView = SmallObjStructDataView;
  using Data_ = internal::SmallObjStruct_Data;

  template <typename... Args>
  static SmallObjStructPtr New(Args&&... args) {
    return SmallObjStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SmallObjStructPtr From(const U& u) {
    return mojo::TypeConverter<SmallObjStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SmallObjStruct>::Convert(*this);
  }


  SmallObjStruct();

  SmallObjStruct(
      ObjectUnionPtr obj_union,
      int8_t f_int8);

  ~SmallObjStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SmallObjStructPtr>
  SmallObjStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SmallObjStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SmallObjStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SmallObjStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SmallObjStruct_UnserializedMessageContext<
            UserType, SmallObjStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SmallObjStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SmallObjStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SmallObjStruct_UnserializedMessageContext<
            UserType, SmallObjStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SmallObjStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ObjectUnionPtr obj_union;
  
  int8_t f_int8;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SmallObjStruct);
};





class  TryNonNullStruct {
 public:
  using DataView = TryNonNullStructDataView;
  using Data_ = internal::TryNonNullStruct_Data;

  template <typename... Args>
  static TryNonNullStructPtr New(Args&&... args) {
    return TryNonNullStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TryNonNullStructPtr From(const U& u) {
    return mojo::TypeConverter<TryNonNullStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TryNonNullStruct>::Convert(*this);
  }


  TryNonNullStruct();

  TryNonNullStruct(
      DummyStructPtr nullable,
      DummyStructPtr non_nullable);

  ~TryNonNullStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TryNonNullStructPtr>
  TryNonNullStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TryNonNullStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TryNonNullStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TryNonNullStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TryNonNullStruct_UnserializedMessageContext<
            UserType, TryNonNullStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TryNonNullStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TryNonNullStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TryNonNullStruct_UnserializedMessageContext<
            UserType, TryNonNullStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TryNonNullStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  DummyStructPtr nullable;
  
  DummyStructPtr non_nullable;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(TryNonNullStruct);
};





class  ImportedUnionStruct {
 public:
  using DataView = ImportedUnionStructDataView;
  using Data_ = internal::ImportedUnionStruct_Data;

  template <typename... Args>
  static ImportedUnionStructPtr New(Args&&... args) {
    return ImportedUnionStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ImportedUnionStructPtr From(const U& u) {
    return mojo::TypeConverter<ImportedUnionStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ImportedUnionStruct>::Convert(*this);
  }


  ImportedUnionStruct();

  explicit ImportedUnionStruct(
      ::imported::PointOrShapePtr point_or_shape);

  ~ImportedUnionStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ImportedUnionStructPtr>
  ImportedUnionStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ImportedUnionStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ImportedUnionStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ImportedUnionStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ImportedUnionStruct_UnserializedMessageContext<
            UserType, ImportedUnionStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ImportedUnionStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ImportedUnionStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ImportedUnionStruct_UnserializedMessageContext<
            UserType, ImportedUnionStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ImportedUnionStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::imported::PointOrShapePtr point_or_shape;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ImportedUnionStruct);
};

template <typename UnionPtrType>
PodUnionPtr PodUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::F_INT8:
      rv->set_f_int8(mojo::Clone(data_.f_int8));
      break;
    case Tag::F_INT8_OTHER:
      rv->set_f_int8_other(mojo::Clone(data_.f_int8_other));
      break;
    case Tag::F_UINT8:
      rv->set_f_uint8(mojo::Clone(data_.f_uint8));
      break;
    case Tag::F_INT16:
      rv->set_f_int16(mojo::Clone(data_.f_int16));
      break;
    case Tag::F_UINT16:
      rv->set_f_uint16(mojo::Clone(data_.f_uint16));
      break;
    case Tag::F_INT32:
      rv->set_f_int32(mojo::Clone(data_.f_int32));
      break;
    case Tag::F_UINT32:
      rv->set_f_uint32(mojo::Clone(data_.f_uint32));
      break;
    case Tag::F_INT64:
      rv->set_f_int64(mojo::Clone(data_.f_int64));
      break;
    case Tag::F_UINT64:
      rv->set_f_uint64(mojo::Clone(data_.f_uint64));
      break;
    case Tag::F_FLOAT:
      rv->set_f_float(mojo::Clone(data_.f_float));
      break;
    case Tag::F_DOUBLE:
      rv->set_f_double(mojo::Clone(data_.f_double));
      break;
    case Tag::F_BOOL:
      rv->set_f_bool(mojo::Clone(data_.f_bool));
      break;
    case Tag::F_ENUM:
      rv->set_f_enum(mojo::Clone(data_.f_enum));
      break;
    case Tag::F_EXTENSIBLE_ENUM:
      rv->set_f_extensible_enum(mojo::Clone(data_.f_extensible_enum));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PodUnion>::value>::type*>
bool PodUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::F_INT8:
      return mojo::Equals(data_.f_int8, other.data_.f_int8);
    case Tag::F_INT8_OTHER:
      return mojo::Equals(data_.f_int8_other, other.data_.f_int8_other);
    case Tag::F_UINT8:
      return mojo::Equals(data_.f_uint8, other.data_.f_uint8);
    case Tag::F_INT16:
      return mojo::Equals(data_.f_int16, other.data_.f_int16);
    case Tag::F_UINT16:
      return mojo::Equals(data_.f_uint16, other.data_.f_uint16);
    case Tag::F_INT32:
      return mojo::Equals(data_.f_int32, other.data_.f_int32);
    case Tag::F_UINT32:
      return mojo::Equals(data_.f_uint32, other.data_.f_uint32);
    case Tag::F_INT64:
      return mojo::Equals(data_.f_int64, other.data_.f_int64);
    case Tag::F_UINT64:
      return mojo::Equals(data_.f_uint64, other.data_.f_uint64);
    case Tag::F_FLOAT:
      return mojo::Equals(data_.f_float, other.data_.f_float);
    case Tag::F_DOUBLE:
      return mojo::Equals(data_.f_double, other.data_.f_double);
    case Tag::F_BOOL:
      return mojo::Equals(data_.f_bool, other.data_.f_bool);
    case Tag::F_ENUM:
      return mojo::Equals(data_.f_enum, other.data_.f_enum);
    case Tag::F_EXTENSIBLE_ENUM:
      return mojo::Equals(data_.f_extensible_enum, other.data_.f_extensible_enum);
  }

  return false;
}
template <typename UnionPtrType>
ObjectUnionPtr ObjectUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::F_INT8:
      rv->set_f_int8(mojo::Clone(data_.f_int8));
      break;
    case Tag::F_STRING:
      rv->set_f_string(mojo::Clone(*data_.f_string));
      break;
    case Tag::F_DUMMY:
      rv->set_f_dummy(mojo::Clone(*data_.f_dummy));
      break;
    case Tag::F_NULLABLE:
      rv->set_f_nullable(mojo::Clone(*data_.f_nullable));
      break;
    case Tag::F_ARRAY_INT8:
      rv->set_f_array_int8(mojo::Clone(*data_.f_array_int8));
      break;
    case Tag::F_MAP_INT8:
      rv->set_f_map_int8(mojo::Clone(*data_.f_map_int8));
      break;
    case Tag::F_POD_UNION:
      rv->set_f_pod_union(mojo::Clone(*data_.f_pod_union));
      break;
    case Tag::F_SMALL_STRUCTS:
      rv->set_f_small_structs(mojo::Clone(*data_.f_small_structs));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ObjectUnion>::value>::type*>
bool ObjectUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::F_INT8:
      return mojo::Equals(data_.f_int8, other.data_.f_int8);
    case Tag::F_STRING:
      return mojo::Equals(*(data_.f_string), *(other.data_.f_string));
    case Tag::F_DUMMY:
      return mojo::Equals(*(data_.f_dummy), *(other.data_.f_dummy));
    case Tag::F_NULLABLE:
      return mojo::Equals(*(data_.f_nullable), *(other.data_.f_nullable));
    case Tag::F_ARRAY_INT8:
      return mojo::Equals(*(data_.f_array_int8), *(other.data_.f_array_int8));
    case Tag::F_MAP_INT8:
      return mojo::Equals(*(data_.f_map_int8), *(other.data_.f_map_int8));
    case Tag::F_POD_UNION:
      return mojo::Equals(*(data_.f_pod_union), *(other.data_.f_pod_union));
    case Tag::F_SMALL_STRUCTS:
      return mojo::Equals(*(data_.f_small_structs), *(other.data_.f_small_structs));
  }

  return false;
}
template <typename UnionPtrType>
HandleUnionPtr HandleUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::F_HANDLE:
      rv->set_f_handle(mojo::Clone(*data_.f_handle));
      break;
    case Tag::F_MESSAGE_PIPE:
      rv->set_f_message_pipe(mojo::Clone(*data_.f_message_pipe));
      break;
    case Tag::F_DATA_PIPE_CONSUMER:
      rv->set_f_data_pipe_consumer(mojo::Clone(*data_.f_data_pipe_consumer));
      break;
    case Tag::F_DATA_PIPE_PRODUCER:
      rv->set_f_data_pipe_producer(mojo::Clone(*data_.f_data_pipe_producer));
      break;
    case Tag::F_SHARED_BUFFER:
      rv->set_f_shared_buffer(mojo::Clone(*data_.f_shared_buffer));
      break;
    case Tag::F_SMALL_CACHE:
      rv->set_f_small_cache(mojo::Clone(*data_.f_small_cache));
      break;
    case Tag::F_SMALL_CACHE_RECEIVER:
      rv->set_f_small_cache_receiver(mojo::Clone(*data_.f_small_cache_receiver));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HandleUnion>::value>::type*>
bool HandleUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::F_HANDLE:
      return mojo::Equals(*(data_.f_handle), *(other.data_.f_handle));
    case Tag::F_MESSAGE_PIPE:
      return mojo::Equals(*(data_.f_message_pipe), *(other.data_.f_message_pipe));
    case Tag::F_DATA_PIPE_CONSUMER:
      return mojo::Equals(*(data_.f_data_pipe_consumer), *(other.data_.f_data_pipe_consumer));
    case Tag::F_DATA_PIPE_PRODUCER:
      return mojo::Equals(*(data_.f_data_pipe_producer), *(other.data_.f_data_pipe_producer));
    case Tag::F_SHARED_BUFFER:
      return mojo::Equals(*(data_.f_shared_buffer), *(other.data_.f_shared_buffer));
    case Tag::F_SMALL_CACHE:
      return mojo::Equals(*(data_.f_small_cache), *(other.data_.f_small_cache));
    case Tag::F_SMALL_CACHE_RECEIVER:
      return mojo::Equals(*(data_.f_small_cache_receiver), *(other.data_.f_small_cache_receiver));
  }

  return false;
}
template <typename UnionPtrType>
OldUnionPtr OldUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::F_INT8:
      rv->set_f_int8(mojo::Clone(data_.f_int8));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OldUnion>::value>::type*>
bool OldUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::F_INT8:
      return mojo::Equals(data_.f_int8, other.data_.f_int8);
  }

  return false;
}
template <typename UnionPtrType>
NewUnionPtr NewUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::F_INT8:
      rv->set_f_int8(mojo::Clone(data_.f_int8));
      break;
    case Tag::F_INT16:
      rv->set_f_int16(mojo::Clone(data_.f_int16));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NewUnion>::value>::type*>
bool NewUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::F_INT8:
      return mojo::Equals(data_.f_int8, other.data_.f_int8);
    case Tag::F_INT16:
      return mojo::Equals(data_.f_int16, other.data_.f_int16);
  }

  return false;
}
template <typename UnionPtrType>
ImportedUnionUnionPtr ImportedUnionUnion::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::POINT_OR_SHAPE:
      rv->set_point_or_shape(mojo::Clone(*data_.point_or_shape));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImportedUnionUnion>::value>::type*>
bool ImportedUnionUnion::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::POINT_OR_SHAPE:
      return mojo::Equals(*(data_.point_or_shape), *(other.data_.point_or_shape));
  }

  return false;
}
template <typename StructPtrType>
WrapperStructPtr WrapperStruct::Clone() const {
  return New(
      mojo::Clone(object_union),
      mojo::Clone(pod_union),
      mojo::Clone(handle_union)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WrapperStruct>::value>::type*>
bool WrapperStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->object_union, other_struct.object_union))
    return false;
  if (!mojo::Equals(this->pod_union, other_struct.pod_union))
    return false;
  if (!mojo::Equals(this->handle_union, other_struct.handle_union))
    return false;
  return true;
}
template <typename StructPtrType>
DummyStructPtr DummyStruct::Clone() const {
  return New(
      mojo::Clone(f_int8)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DummyStruct>::value>::type*>
bool DummyStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->f_int8, other_struct.f_int8))
    return false;
  return true;
}
template <typename StructPtrType>
SmallStructPtr SmallStruct::Clone() const {
  return New(
      mojo::Clone(dummy_struct),
      mojo::Clone(pod_union),
      mojo::Clone(pod_union_array),
      mojo::Clone(nullable_pod_union_array),
      mojo::Clone(s_array),
      mojo::Clone(pod_union_map),
      mojo::Clone(nullable_pod_union_map)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SmallStruct>::value>::type*>
bool SmallStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dummy_struct, other_struct.dummy_struct))
    return false;
  if (!mojo::Equals(this->pod_union, other_struct.pod_union))
    return false;
  if (!mojo::Equals(this->pod_union_array, other_struct.pod_union_array))
    return false;
  if (!mojo::Equals(this->nullable_pod_union_array, other_struct.nullable_pod_union_array))
    return false;
  if (!mojo::Equals(this->s_array, other_struct.s_array))
    return false;
  if (!mojo::Equals(this->pod_union_map, other_struct.pod_union_map))
    return false;
  if (!mojo::Equals(this->nullable_pod_union_map, other_struct.nullable_pod_union_map))
    return false;
  return true;
}
template <typename StructPtrType>
SmallStructNonNullableUnionPtr SmallStructNonNullableUnion::Clone() const {
  return New(
      mojo::Clone(pod_union)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SmallStructNonNullableUnion>::value>::type*>
bool SmallStructNonNullableUnion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->pod_union, other_struct.pod_union))
    return false;
  return true;
}
template <typename StructPtrType>
SmallObjStructPtr SmallObjStruct::Clone() const {
  return New(
      mojo::Clone(obj_union),
      mojo::Clone(f_int8)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SmallObjStruct>::value>::type*>
bool SmallObjStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->obj_union, other_struct.obj_union))
    return false;
  if (!mojo::Equals(this->f_int8, other_struct.f_int8))
    return false;
  return true;
}
template <typename StructPtrType>
TryNonNullStructPtr TryNonNullStruct::Clone() const {
  return New(
      mojo::Clone(nullable),
      mojo::Clone(non_nullable)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TryNonNullStruct>::value>::type*>
bool TryNonNullStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->nullable, other_struct.nullable))
    return false;
  if (!mojo::Equals(this->non_nullable, other_struct.non_nullable))
    return false;
  return true;
}
template <typename StructPtrType>
ImportedUnionStructPtr ImportedUnionStruct::Clone() const {
  return New(
      mojo::Clone(point_or_shape)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ImportedUnionStruct>::value>::type*>
bool ImportedUnionStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->point_or_shape, other_struct.point_or_shape))
    return false;
  return true;
}


}  // namespace test
}  // namespace mojo

namespace mojo {


template <>
struct  StructTraits<::mojo::test::WrapperStruct::DataView,
                                         ::mojo::test::WrapperStructPtr> {
  static bool IsNull(const ::mojo::test::WrapperStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::WrapperStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::WrapperStruct::object_union)& object_union(
      const ::mojo::test::WrapperStructPtr& input) {
    return input->object_union;
  }

  static const decltype(::mojo::test::WrapperStruct::pod_union)& pod_union(
      const ::mojo::test::WrapperStructPtr& input) {
    return input->pod_union;
  }

  static  decltype(::mojo::test::WrapperStruct::handle_union)& handle_union(
       ::mojo::test::WrapperStructPtr& input) {
    return input->handle_union;
  }

  static bool Read(::mojo::test::WrapperStruct::DataView input, ::mojo::test::WrapperStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::DummyStruct::DataView,
                                         ::mojo::test::DummyStructPtr> {
  static bool IsNull(const ::mojo::test::DummyStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::DummyStructPtr* output) { output->reset(); }

  static decltype(::mojo::test::DummyStruct::f_int8) f_int8(
      const ::mojo::test::DummyStructPtr& input) {
    return input->f_int8;
  }

  static bool Read(::mojo::test::DummyStruct::DataView input, ::mojo::test::DummyStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::SmallStruct::DataView,
                                         ::mojo::test::SmallStructPtr> {
  static bool IsNull(const ::mojo::test::SmallStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::SmallStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::SmallStruct::dummy_struct)& dummy_struct(
      const ::mojo::test::SmallStructPtr& input) {
    return input->dummy_struct;
  }

  static const decltype(::mojo::test::SmallStruct::pod_union)& pod_union(
      const ::mojo::test::SmallStructPtr& input) {
    return input->pod_union;
  }

  static const decltype(::mojo::test::SmallStruct::pod_union_array)& pod_union_array(
      const ::mojo::test::SmallStructPtr& input) {
    return input->pod_union_array;
  }

  static const decltype(::mojo::test::SmallStruct::nullable_pod_union_array)& nullable_pod_union_array(
      const ::mojo::test::SmallStructPtr& input) {
    return input->nullable_pod_union_array;
  }

  static const decltype(::mojo::test::SmallStruct::s_array)& s_array(
      const ::mojo::test::SmallStructPtr& input) {
    return input->s_array;
  }

  static const decltype(::mojo::test::SmallStruct::pod_union_map)& pod_union_map(
      const ::mojo::test::SmallStructPtr& input) {
    return input->pod_union_map;
  }

  static const decltype(::mojo::test::SmallStruct::nullable_pod_union_map)& nullable_pod_union_map(
      const ::mojo::test::SmallStructPtr& input) {
    return input->nullable_pod_union_map;
  }

  static bool Read(::mojo::test::SmallStruct::DataView input, ::mojo::test::SmallStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::SmallStructNonNullableUnion::DataView,
                                         ::mojo::test::SmallStructNonNullableUnionPtr> {
  static bool IsNull(const ::mojo::test::SmallStructNonNullableUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::SmallStructNonNullableUnionPtr* output) { output->reset(); }

  static const decltype(::mojo::test::SmallStructNonNullableUnion::pod_union)& pod_union(
      const ::mojo::test::SmallStructNonNullableUnionPtr& input) {
    return input->pod_union;
  }

  static bool Read(::mojo::test::SmallStructNonNullableUnion::DataView input, ::mojo::test::SmallStructNonNullableUnionPtr* output);
};


template <>
struct  StructTraits<::mojo::test::SmallObjStruct::DataView,
                                         ::mojo::test::SmallObjStructPtr> {
  static bool IsNull(const ::mojo::test::SmallObjStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::SmallObjStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::SmallObjStruct::obj_union)& obj_union(
      const ::mojo::test::SmallObjStructPtr& input) {
    return input->obj_union;
  }

  static decltype(::mojo::test::SmallObjStruct::f_int8) f_int8(
      const ::mojo::test::SmallObjStructPtr& input) {
    return input->f_int8;
  }

  static bool Read(::mojo::test::SmallObjStruct::DataView input, ::mojo::test::SmallObjStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::TryNonNullStruct::DataView,
                                         ::mojo::test::TryNonNullStructPtr> {
  static bool IsNull(const ::mojo::test::TryNonNullStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::TryNonNullStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::TryNonNullStruct::nullable)& nullable(
      const ::mojo::test::TryNonNullStructPtr& input) {
    return input->nullable;
  }

  static const decltype(::mojo::test::TryNonNullStruct::non_nullable)& non_nullable(
      const ::mojo::test::TryNonNullStructPtr& input) {
    return input->non_nullable;
  }

  static bool Read(::mojo::test::TryNonNullStruct::DataView input, ::mojo::test::TryNonNullStructPtr* output);
};


template <>
struct  StructTraits<::mojo::test::ImportedUnionStruct::DataView,
                                         ::mojo::test::ImportedUnionStructPtr> {
  static bool IsNull(const ::mojo::test::ImportedUnionStructPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ImportedUnionStructPtr* output) { output->reset(); }

  static const decltype(::mojo::test::ImportedUnionStruct::point_or_shape)& point_or_shape(
      const ::mojo::test::ImportedUnionStructPtr& input) {
    return input->point_or_shape;
  }

  static bool Read(::mojo::test::ImportedUnionStruct::DataView input, ::mojo::test::ImportedUnionStructPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::PodUnion::DataView,
                                        ::mojo::test::PodUnionPtr> {
  static bool IsNull(const ::mojo::test::PodUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::PodUnionPtr* output) { output->reset(); }

  static ::mojo::test::PodUnion::Tag GetTag(const ::mojo::test::PodUnionPtr& input) {
    return input->which();
  }

  static  int8_t f_int8(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_int8();
  }

  static  int8_t f_int8_other(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_int8_other();
  }

  static  uint8_t f_uint8(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_uint8();
  }

  static  int16_t f_int16(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_int16();
  }

  static  uint16_t f_uint16(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_uint16();
  }

  static  int32_t f_int32(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_int32();
  }

  static  uint32_t f_uint32(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_uint32();
  }

  static  int64_t f_int64(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_int64();
  }

  static  uint64_t f_uint64(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_uint64();
  }

  static  float f_float(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_float();
  }

  static  double f_double(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_double();
  }

  static  bool f_bool(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_bool();
  }

  static  ::mojo::test::AnEnum f_enum(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_enum();
  }

  static  ::mojo::test::AnExtensibleEnum f_extensible_enum(const ::mojo::test::PodUnionPtr& input) {
    return input->get_f_extensible_enum();
  }

  static bool Read(::mojo::test::PodUnion::DataView input, ::mojo::test::PodUnionPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::ObjectUnion::DataView,
                                        ::mojo::test::ObjectUnionPtr> {
  static bool IsNull(const ::mojo::test::ObjectUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ObjectUnionPtr* output) { output->reset(); }

  static ::mojo::test::ObjectUnion::Tag GetTag(const ::mojo::test::ObjectUnionPtr& input) {
    return input->which();
  }

  static  int8_t f_int8(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_int8();
  }

  static const std::string& f_string(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_string();
  }

  static const ::mojo::test::DummyStructPtr& f_dummy(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_dummy();
  }

  static const ::mojo::test::DummyStructPtr& f_nullable(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_nullable();
  }

  static const std::vector<int8_t>& f_array_int8(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_array_int8();
  }

  static const base::flat_map<std::string, int8_t>& f_map_int8(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_map_int8();
  }

  static const ::mojo::test::PodUnionPtr& f_pod_union(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_pod_union();
  }

  static const std::vector<::mojo::test::SmallStructPtr>& f_small_structs(const ::mojo::test::ObjectUnionPtr& input) {
    return input->get_f_small_structs();
  }

  static bool Read(::mojo::test::ObjectUnion::DataView input, ::mojo::test::ObjectUnionPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::HandleUnion::DataView,
                                        ::mojo::test::HandleUnionPtr> {
  static bool IsNull(const ::mojo::test::HandleUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::HandleUnionPtr* output) { output->reset(); }

  static ::mojo::test::HandleUnion::Tag GetTag(const ::mojo::test::HandleUnionPtr& input) {
    return input->which();
  }

  static  mojo::ScopedHandle& f_handle( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_handle();
  }

  static  mojo::ScopedMessagePipeHandle& f_message_pipe( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_message_pipe();
  }

  static  mojo::ScopedDataPipeConsumerHandle& f_data_pipe_consumer( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_data_pipe_consumer();
  }

  static  mojo::ScopedDataPipeProducerHandle& f_data_pipe_producer( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_data_pipe_producer();
  }

  static  mojo::ScopedSharedBufferHandle& f_shared_buffer( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_shared_buffer();
  }

  static  mojo::PendingRemote<::mojo::test::SmallCache>& f_small_cache( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_small_cache();
  }

  static  mojo::PendingReceiver<::mojo::test::SmallCache>& f_small_cache_receiver( ::mojo::test::HandleUnionPtr& input) {
    return input->get_f_small_cache_receiver();
  }

  static bool Read(::mojo::test::HandleUnion::DataView input, ::mojo::test::HandleUnionPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::OldUnion::DataView,
                                        ::mojo::test::OldUnionPtr> {
  static bool IsNull(const ::mojo::test::OldUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::OldUnionPtr* output) { output->reset(); }

  static ::mojo::test::OldUnion::Tag GetTag(const ::mojo::test::OldUnionPtr& input) {
    return input->which();
  }

  static  int8_t f_int8(const ::mojo::test::OldUnionPtr& input) {
    return input->get_f_int8();
  }

  static bool Read(::mojo::test::OldUnion::DataView input, ::mojo::test::OldUnionPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::NewUnion::DataView,
                                        ::mojo::test::NewUnionPtr> {
  static bool IsNull(const ::mojo::test::NewUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::NewUnionPtr* output) { output->reset(); }

  static ::mojo::test::NewUnion::Tag GetTag(const ::mojo::test::NewUnionPtr& input) {
    return input->which();
  }

  static  int8_t f_int8(const ::mojo::test::NewUnionPtr& input) {
    return input->get_f_int8();
  }

  static  int16_t f_int16(const ::mojo::test::NewUnionPtr& input) {
    return input->get_f_int16();
  }

  static bool Read(::mojo::test::NewUnion::DataView input, ::mojo::test::NewUnionPtr* output);
};


template <>
struct  UnionTraits<::mojo::test::ImportedUnionUnion::DataView,
                                        ::mojo::test::ImportedUnionUnionPtr> {
  static bool IsNull(const ::mojo::test::ImportedUnionUnionPtr& input) { return !input; }
  static void SetToNull(::mojo::test::ImportedUnionUnionPtr* output) { output->reset(); }

  static ::mojo::test::ImportedUnionUnion::Tag GetTag(const ::mojo::test::ImportedUnionUnionPtr& input) {
    return input->which();
  }

  static const ::imported::PointOrShapePtr& point_or_shape(const ::mojo::test::ImportedUnionUnionPtr& input) {
    return input->get_point_or_shape();
  }

  static bool Read(::mojo::test::ImportedUnionUnion::DataView input, ::mojo::test::ImportedUnionUnionPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_UNIONS_MOJOM_H_