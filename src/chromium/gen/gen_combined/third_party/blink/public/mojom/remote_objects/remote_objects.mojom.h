// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_H_

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
#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-shared.h"
#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class RemoteObjectHostProxy;

template <typename ImplRefTraits>
class RemoteObjectHostStub;

class RemoteObjectHostRequestValidator;


class BLINK_COMMON_EXPORT RemoteObjectHost
    : public RemoteObjectHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RemoteObjectHostInterfaceBase;
  using Proxy_ = RemoteObjectHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoteObjectHostStub<ImplRefTraits>;

  using RequestValidator_ = RemoteObjectHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetObjectMinVersion = 0,
    kReleaseObjectMinVersion = 0,
  };
  virtual ~RemoteObjectHost() {}

  
  virtual void GetObject(int32_t object_id, RemoteObjectRequest request) = 0;

  
  virtual void ReleaseObject(int32_t object_id) = 0;
};

class RemoteObjectProxy;

template <typename ImplRefTraits>
class RemoteObjectStub;

class RemoteObjectRequestValidator;
class RemoteObjectResponseValidator;


class BLINK_COMMON_EXPORT RemoteObject
    : public RemoteObjectInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = RemoteObjectInterfaceBase;
  using Proxy_ = RemoteObjectProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoteObjectStub<ImplRefTraits>;

  using RequestValidator_ = RemoteObjectRequestValidator;
  using ResponseValidator_ = RemoteObjectResponseValidator;
  enum MethodMinVersions : uint32_t {
    kHasMethodMinVersion = 0,
    kGetMethodsMinVersion = 0,
    kInvokeMethodMinVersion = 0,
  };
  virtual ~RemoteObject() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool HasMethod(const std::string& name, bool* out_method_exists);

  using HasMethodCallback = base::OnceCallback<void(bool)>;
  
  virtual void HasMethod(const std::string& name, HasMethodCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetMethods(std::vector<std::string>* out_method_names);

  using GetMethodsCallback = base::OnceCallback<void(const std::vector<std::string>&)>;
  
  virtual void GetMethods(GetMethodsCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result);

  using InvokeMethodCallback = base::OnceCallback<void(RemoteInvocationResultPtr)>;
  
  virtual void InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) = 0;
};

class BLINK_COMMON_EXPORT RemoteObjectHostProxy
    : public RemoteObjectHost {
 public:
  using InterfaceType = RemoteObjectHost;

  explicit RemoteObjectHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetObject(int32_t object_id, RemoteObjectRequest request) final;
  void ReleaseObject(int32_t object_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT RemoteObjectProxy
    : public RemoteObject {
 public:
  using InterfaceType = RemoteObject;

  explicit RemoteObjectProxy(mojo::MessageReceiverWithResponder* receiver);
  bool HasMethod(const std::string& name, bool* out_method_exists) final;
  void HasMethod(const std::string& name, HasMethodCallback callback) final;
  bool GetMethods(std::vector<std::string>* out_method_names) final;
  void GetMethods(GetMethodsCallback callback) final;
  bool InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result) final;
  void InvokeMethod(const std::string& name, std::vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT RemoteObjectHostStubDispatch {
 public:
  static bool Accept(RemoteObjectHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemoteObjectHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemoteObjectHost>>
class RemoteObjectHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoteObjectHostStub() {}
  ~RemoteObjectHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoteObjectHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoteObjectHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT RemoteObjectStubDispatch {
 public:
  static bool Accept(RemoteObject* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemoteObject* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemoteObject>>
class RemoteObjectStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoteObjectStub() {}
  ~RemoteObjectStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoteObjectStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoteObjectStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT RemoteObjectHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT RemoteObjectRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT RemoteObjectResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_COMMON_EXPORT RemoteInvocationArgument {
 public:
  using DataView = RemoteInvocationArgumentDataView;
  using Data_ = internal::RemoteInvocationArgument_Data;
  using Tag = Data_::RemoteInvocationArgument_Tag;

  static RemoteInvocationArgumentPtr New() {
    return RemoteInvocationArgumentPtr(base::in_place);
  }
  // Construct an instance holding |number_value|.
  static RemoteInvocationArgumentPtr
  NewNumberValue(
      double number_value) {
    auto result = RemoteInvocationArgumentPtr(base::in_place);
    result->set_number_value(std::move(number_value));
    return result;
  }
  // Construct an instance holding |boolean_value|.
  static RemoteInvocationArgumentPtr
  NewBooleanValue(
      bool boolean_value) {
    auto result = RemoteInvocationArgumentPtr(base::in_place);
    result->set_boolean_value(std::move(boolean_value));
    return result;
  }
  // Construct an instance holding |string_value|.
  static RemoteInvocationArgumentPtr
  NewStringValue(
      const base::string16& string_value) {
    auto result = RemoteInvocationArgumentPtr(base::in_place);
    result->set_string_value(std::move(string_value));
    return result;
  }
  // Construct an instance holding |singleton_value|.
  static RemoteInvocationArgumentPtr
  NewSingletonValue(
      SingletonJavaScriptValue singleton_value) {
    auto result = RemoteInvocationArgumentPtr(base::in_place);
    result->set_singleton_value(std::move(singleton_value));
    return result;
  }
  // Construct an instance holding |array_value|.
  static RemoteInvocationArgumentPtr
  NewArrayValue(
      std::vector<RemoteInvocationArgumentPtr> array_value) {
    auto result = RemoteInvocationArgumentPtr(base::in_place);
    result->set_array_value(std::move(array_value));
    return result;
  }

  template <typename U>
  static RemoteInvocationArgumentPtr From(const U& u) {
    return mojo::TypeConverter<RemoteInvocationArgumentPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RemoteInvocationArgument>::Convert(*this);
  }

  RemoteInvocationArgument();
  ~RemoteInvocationArgument();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RemoteInvocationArgumentPtr>
  RemoteInvocationArgumentPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RemoteInvocationArgument>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_number_value() const { return tag_ == Tag::NUMBER_VALUE; }

  
  double get_number_value() const {
    DCHECK(tag_ == Tag::NUMBER_VALUE);
    return data_.number_value;
  }

  
  void set_number_value(
      double number_value);
  
  bool is_boolean_value() const { return tag_ == Tag::BOOLEAN_VALUE; }

  
  bool get_boolean_value() const {
    DCHECK(tag_ == Tag::BOOLEAN_VALUE);
    return data_.boolean_value;
  }

  
  void set_boolean_value(
      bool boolean_value);
  
  bool is_string_value() const { return tag_ == Tag::STRING_VALUE; }

  
  base::string16& get_string_value() const {
    DCHECK(tag_ == Tag::STRING_VALUE);
    return *(data_.string_value);
  }

  
  void set_string_value(
      const base::string16& string_value);
  
  bool is_singleton_value() const { return tag_ == Tag::SINGLETON_VALUE; }

  
  SingletonJavaScriptValue get_singleton_value() const {
    DCHECK(tag_ == Tag::SINGLETON_VALUE);
    return data_.singleton_value;
  }

  
  void set_singleton_value(
      SingletonJavaScriptValue singleton_value);
  
  bool is_array_value() const { return tag_ == Tag::ARRAY_VALUE; }

  
  std::vector<RemoteInvocationArgumentPtr>& get_array_value() const {
    DCHECK(tag_ == Tag::ARRAY_VALUE);
    return *(data_.array_value);
  }

  
  void set_array_value(
      std::vector<RemoteInvocationArgumentPtr> array_value);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RemoteInvocationArgument::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RemoteInvocationArgument::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    double number_value;
    bool boolean_value;
    base::string16* string_value;
    SingletonJavaScriptValue singleton_value;
    std::vector<RemoteInvocationArgumentPtr>* array_value;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class BLINK_COMMON_EXPORT RemoteInvocationResultValue {
 public:
  using DataView = RemoteInvocationResultValueDataView;
  using Data_ = internal::RemoteInvocationResultValue_Data;
  using Tag = Data_::RemoteInvocationResultValue_Tag;

  static RemoteInvocationResultValuePtr New() {
    return RemoteInvocationResultValuePtr(base::in_place);
  }
  // Construct an instance holding |number_value|.
  static RemoteInvocationResultValuePtr
  NewNumberValue(
      double number_value) {
    auto result = RemoteInvocationResultValuePtr(base::in_place);
    result->set_number_value(std::move(number_value));
    return result;
  }
  // Construct an instance holding |boolean_value|.
  static RemoteInvocationResultValuePtr
  NewBooleanValue(
      bool boolean_value) {
    auto result = RemoteInvocationResultValuePtr(base::in_place);
    result->set_boolean_value(std::move(boolean_value));
    return result;
  }
  // Construct an instance holding |string_value|.
  static RemoteInvocationResultValuePtr
  NewStringValue(
      const base::string16& string_value) {
    auto result = RemoteInvocationResultValuePtr(base::in_place);
    result->set_string_value(std::move(string_value));
    return result;
  }
  // Construct an instance holding |singleton_value|.
  static RemoteInvocationResultValuePtr
  NewSingletonValue(
      SingletonJavaScriptValue singleton_value) {
    auto result = RemoteInvocationResultValuePtr(base::in_place);
    result->set_singleton_value(std::move(singleton_value));
    return result;
  }
  // Construct an instance holding |object_id|.
  static RemoteInvocationResultValuePtr
  NewObjectId(
      int32_t object_id) {
    auto result = RemoteInvocationResultValuePtr(base::in_place);
    result->set_object_id(std::move(object_id));
    return result;
  }

  template <typename U>
  static RemoteInvocationResultValuePtr From(const U& u) {
    return mojo::TypeConverter<RemoteInvocationResultValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RemoteInvocationResultValue>::Convert(*this);
  }

  RemoteInvocationResultValue();
  ~RemoteInvocationResultValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = RemoteInvocationResultValuePtr>
  RemoteInvocationResultValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RemoteInvocationResultValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_number_value() const { return tag_ == Tag::NUMBER_VALUE; }

  
  double get_number_value() const {
    DCHECK(tag_ == Tag::NUMBER_VALUE);
    return data_.number_value;
  }

  
  void set_number_value(
      double number_value);
  
  bool is_boolean_value() const { return tag_ == Tag::BOOLEAN_VALUE; }

  
  bool get_boolean_value() const {
    DCHECK(tag_ == Tag::BOOLEAN_VALUE);
    return data_.boolean_value;
  }

  
  void set_boolean_value(
      bool boolean_value);
  
  bool is_string_value() const { return tag_ == Tag::STRING_VALUE; }

  
  base::string16& get_string_value() const {
    DCHECK(tag_ == Tag::STRING_VALUE);
    return *(data_.string_value);
  }

  
  void set_string_value(
      const base::string16& string_value);
  
  bool is_singleton_value() const { return tag_ == Tag::SINGLETON_VALUE; }

  
  SingletonJavaScriptValue get_singleton_value() const {
    DCHECK(tag_ == Tag::SINGLETON_VALUE);
    return data_.singleton_value;
  }

  
  void set_singleton_value(
      SingletonJavaScriptValue singleton_value);
  
  bool is_object_id() const { return tag_ == Tag::OBJECT_ID; }

  
  int32_t get_object_id() const {
    DCHECK(tag_ == Tag::OBJECT_ID);
    return data_.object_id;
  }

  
  void set_object_id(
      int32_t object_id);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RemoteInvocationResultValue::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<RemoteInvocationResultValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    double number_value;
    bool boolean_value;
    base::string16* string_value;
    SingletonJavaScriptValue singleton_value;
    int32_t object_id;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class BLINK_COMMON_EXPORT RemoteInvocationResult {
 public:
  using DataView = RemoteInvocationResultDataView;
  using Data_ = internal::RemoteInvocationResult_Data;

  template <typename... Args>
  static RemoteInvocationResultPtr New(Args&&... args) {
    return RemoteInvocationResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RemoteInvocationResultPtr From(const U& u) {
    return mojo::TypeConverter<RemoteInvocationResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RemoteInvocationResult>::Convert(*this);
  }


  RemoteInvocationResult();

  RemoteInvocationResult(
      RemoteInvocationError error,
      RemoteInvocationResultValuePtr value);

  ~RemoteInvocationResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RemoteInvocationResultPtr>
  RemoteInvocationResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RemoteInvocationResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RemoteInvocationResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RemoteInvocationResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RemoteInvocationResult_UnserializedMessageContext<
            UserType, RemoteInvocationResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RemoteInvocationResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RemoteInvocationResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RemoteInvocationResult_UnserializedMessageContext<
            UserType, RemoteInvocationResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RemoteInvocationResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  RemoteInvocationError error;
  
  RemoteInvocationResultValuePtr value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RemoteInvocationResult);
};

template <typename UnionPtrType>
RemoteInvocationArgumentPtr RemoteInvocationArgument::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::NUMBER_VALUE:
      rv->set_number_value(mojo::Clone(data_.number_value));
      break;
    case Tag::BOOLEAN_VALUE:
      rv->set_boolean_value(mojo::Clone(data_.boolean_value));
      break;
    case Tag::STRING_VALUE:
      rv->set_string_value(mojo::Clone(*data_.string_value));
      break;
    case Tag::SINGLETON_VALUE:
      rv->set_singleton_value(mojo::Clone(data_.singleton_value));
      break;
    case Tag::ARRAY_VALUE:
      rv->set_array_value(mojo::Clone(*data_.array_value));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RemoteInvocationArgument>::value>::type*>
bool RemoteInvocationArgument::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::NUMBER_VALUE:
      return mojo::Equals(data_.number_value, other.data_.number_value);
    case Tag::BOOLEAN_VALUE:
      return mojo::Equals(data_.boolean_value, other.data_.boolean_value);
    case Tag::STRING_VALUE:
      return mojo::Equals(*(data_.string_value), *(other.data_.string_value));
    case Tag::SINGLETON_VALUE:
      return mojo::Equals(data_.singleton_value, other.data_.singleton_value);
    case Tag::ARRAY_VALUE:
      return mojo::Equals(*(data_.array_value), *(other.data_.array_value));
  }

  return false;
}
template <typename UnionPtrType>
RemoteInvocationResultValuePtr RemoteInvocationResultValue::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::NUMBER_VALUE:
      rv->set_number_value(mojo::Clone(data_.number_value));
      break;
    case Tag::BOOLEAN_VALUE:
      rv->set_boolean_value(mojo::Clone(data_.boolean_value));
      break;
    case Tag::STRING_VALUE:
      rv->set_string_value(mojo::Clone(*data_.string_value));
      break;
    case Tag::SINGLETON_VALUE:
      rv->set_singleton_value(mojo::Clone(data_.singleton_value));
      break;
    case Tag::OBJECT_ID:
      rv->set_object_id(mojo::Clone(data_.object_id));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RemoteInvocationResultValue>::value>::type*>
bool RemoteInvocationResultValue::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::NUMBER_VALUE:
      return mojo::Equals(data_.number_value, other.data_.number_value);
    case Tag::BOOLEAN_VALUE:
      return mojo::Equals(data_.boolean_value, other.data_.boolean_value);
    case Tag::STRING_VALUE:
      return mojo::Equals(*(data_.string_value), *(other.data_.string_value));
    case Tag::SINGLETON_VALUE:
      return mojo::Equals(data_.singleton_value, other.data_.singleton_value);
    case Tag::OBJECT_ID:
      return mojo::Equals(data_.object_id, other.data_.object_id);
  }

  return false;
}
template <typename StructPtrType>
RemoteInvocationResultPtr RemoteInvocationResult::Clone() const {
  return New(
      mojo::Clone(error),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RemoteInvocationResult>::value>::type*>
bool RemoteInvocationResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::RemoteInvocationResult::DataView,
                                         ::blink::mojom::RemoteInvocationResultPtr> {
  static bool IsNull(const ::blink::mojom::RemoteInvocationResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RemoteInvocationResultPtr* output) { output->reset(); }

  static decltype(::blink::mojom::RemoteInvocationResult::error) error(
      const ::blink::mojom::RemoteInvocationResultPtr& input) {
    return input->error;
  }

  static const decltype(::blink::mojom::RemoteInvocationResult::value)& value(
      const ::blink::mojom::RemoteInvocationResultPtr& input) {
    return input->value;
  }

  static bool Read(::blink::mojom::RemoteInvocationResult::DataView input, ::blink::mojom::RemoteInvocationResultPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::RemoteInvocationArgument::DataView,
                                        ::blink::mojom::RemoteInvocationArgumentPtr> {
  static bool IsNull(const ::blink::mojom::RemoteInvocationArgumentPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RemoteInvocationArgumentPtr* output) { output->reset(); }

  static ::blink::mojom::RemoteInvocationArgument::Tag GetTag(const ::blink::mojom::RemoteInvocationArgumentPtr& input) {
    return input->which();
  }

  static  double number_value(const ::blink::mojom::RemoteInvocationArgumentPtr& input) {
    return input->get_number_value();
  }

  static  bool boolean_value(const ::blink::mojom::RemoteInvocationArgumentPtr& input) {
    return input->get_boolean_value();
  }

  static const base::string16& string_value(const ::blink::mojom::RemoteInvocationArgumentPtr& input) {
    return input->get_string_value();
  }

  static  ::blink::mojom::SingletonJavaScriptValue singleton_value(const ::blink::mojom::RemoteInvocationArgumentPtr& input) {
    return input->get_singleton_value();
  }

  static const std::vector<::blink::mojom::RemoteInvocationArgumentPtr>& array_value(const ::blink::mojom::RemoteInvocationArgumentPtr& input) {
    return input->get_array_value();
  }

  static bool Read(::blink::mojom::RemoteInvocationArgument::DataView input, ::blink::mojom::RemoteInvocationArgumentPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::RemoteInvocationResultValue::DataView,
                                        ::blink::mojom::RemoteInvocationResultValuePtr> {
  static bool IsNull(const ::blink::mojom::RemoteInvocationResultValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RemoteInvocationResultValuePtr* output) { output->reset(); }

  static ::blink::mojom::RemoteInvocationResultValue::Tag GetTag(const ::blink::mojom::RemoteInvocationResultValuePtr& input) {
    return input->which();
  }

  static  double number_value(const ::blink::mojom::RemoteInvocationResultValuePtr& input) {
    return input->get_number_value();
  }

  static  bool boolean_value(const ::blink::mojom::RemoteInvocationResultValuePtr& input) {
    return input->get_boolean_value();
  }

  static const base::string16& string_value(const ::blink::mojom::RemoteInvocationResultValuePtr& input) {
    return input->get_string_value();
  }

  static  ::blink::mojom::SingletonJavaScriptValue singleton_value(const ::blink::mojom::RemoteInvocationResultValuePtr& input) {
    return input->get_singleton_value();
  }

  static  int32_t object_id(const ::blink::mojom::RemoteInvocationResultValuePtr& input) {
    return input->get_object_id();
  }

  static bool Read(::blink::mojom::RemoteInvocationResultValue::DataView input, ::blink::mojom::RemoteInvocationResultValuePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_H_