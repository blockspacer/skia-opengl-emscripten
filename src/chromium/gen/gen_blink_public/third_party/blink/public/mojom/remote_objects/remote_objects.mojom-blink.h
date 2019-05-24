// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/remote_objects/remote_objects.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"

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
struct blink_mojom_internal_SingletonJavaScriptValue_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::SingletonJavaScriptValue& value) {
    using utype = std::underlying_type<::blink::mojom::SingletonJavaScriptValue>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::SingletonJavaScriptValue& left, const ::blink::mojom::SingletonJavaScriptValue& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::SingletonJavaScriptValue>
    : public GenericHashTraits<::blink::mojom::SingletonJavaScriptValue> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::SingletonJavaScriptValue& value) {
    return value == static_cast<::blink::mojom::SingletonJavaScriptValue>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::SingletonJavaScriptValue& slot, bool) {
    slot = static_cast<::blink::mojom::SingletonJavaScriptValue>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::SingletonJavaScriptValue& value) {
    return value == static_cast<::blink::mojom::SingletonJavaScriptValue>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_RemoteInvocationError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::RemoteInvocationError& value) {
    using utype = std::underlying_type<::blink::mojom::RemoteInvocationError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::RemoteInvocationError& left, const ::blink::mojom::RemoteInvocationError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::RemoteInvocationError>
    : public GenericHashTraits<::blink::mojom::RemoteInvocationError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::RemoteInvocationError& value) {
    return value == static_cast<::blink::mojom::RemoteInvocationError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::RemoteInvocationError& slot, bool) {
    slot = static_cast<::blink::mojom::RemoteInvocationError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::RemoteInvocationError& value) {
    return value == static_cast<::blink::mojom::RemoteInvocationError>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class RemoteObjectHostProxy;

template <typename ImplRefTraits>
class RemoteObjectHostStub;

class RemoteObjectHostRequestValidator;


class PLATFORM_EXPORT RemoteObjectHost
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


class PLATFORM_EXPORT RemoteObject
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
  
  virtual bool HasMethod(const WTF::String& name, bool* out_method_exists);

  using HasMethodCallback = base::OnceCallback<void(bool)>;
  
  virtual void HasMethod(const WTF::String& name, HasMethodCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetMethods(WTF::Vector<WTF::String>* out_method_names);

  using GetMethodsCallback = base::OnceCallback<void(const WTF::Vector<WTF::String>&)>;
  
  virtual void GetMethods(GetMethodsCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool InvokeMethod(const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result);

  using InvokeMethodCallback = base::OnceCallback<void(RemoteInvocationResultPtr)>;
  
  virtual void InvokeMethod(const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) = 0;
};

class PLATFORM_EXPORT RemoteObjectHostProxy
    : public RemoteObjectHost {
 public:
  using InterfaceType = RemoteObjectHost;

  explicit RemoteObjectHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetObject(int32_t object_id, RemoteObjectRequest request) final;
  void ReleaseObject(int32_t object_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT RemoteObjectProxy
    : public RemoteObject {
 public:
  using InterfaceType = RemoteObject;

  explicit RemoteObjectProxy(mojo::MessageReceiverWithResponder* receiver);
  bool HasMethod(const WTF::String& name, bool* out_method_exists) final;
  void HasMethod(const WTF::String& name, HasMethodCallback callback) final;
  bool GetMethods(WTF::Vector<WTF::String>* out_method_names) final;
  void GetMethods(GetMethodsCallback callback) final;
  bool InvokeMethod(const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, RemoteInvocationResultPtr* out_result) final;
  void InvokeMethod(const WTF::String& name, WTF::Vector<RemoteInvocationArgumentPtr> arguments, InvokeMethodCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT RemoteObjectHostStubDispatch {
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
class PLATFORM_EXPORT RemoteObjectStubDispatch {
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
class PLATFORM_EXPORT RemoteObjectHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT RemoteObjectRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT RemoteObjectResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class PLATFORM_EXPORT RemoteInvocationArgument {
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
      const WTF::String& string_value) {
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
      WTF::Vector<RemoteInvocationArgumentPtr> array_value) {
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

  
  WTF::String& get_string_value() const {
    DCHECK(tag_ == Tag::STRING_VALUE);
    return *(data_.string_value);
  }

  
  void set_string_value(
      const WTF::String& string_value);
  
  bool is_singleton_value() const { return tag_ == Tag::SINGLETON_VALUE; }

  
  SingletonJavaScriptValue get_singleton_value() const {
    DCHECK(tag_ == Tag::SINGLETON_VALUE);
    return data_.singleton_value;
  }

  
  void set_singleton_value(
      SingletonJavaScriptValue singleton_value);
  
  bool is_array_value() const { return tag_ == Tag::ARRAY_VALUE; }

  
  WTF::Vector<RemoteInvocationArgumentPtr>& get_array_value() const {
    DCHECK(tag_ == Tag::ARRAY_VALUE);
    return *(data_.array_value);
  }

  
  void set_array_value(
      WTF::Vector<RemoteInvocationArgumentPtr> array_value);

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
    WTF::String* string_value;
    SingletonJavaScriptValue singleton_value;
    WTF::Vector<RemoteInvocationArgumentPtr>* array_value;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class PLATFORM_EXPORT RemoteInvocationResultValue {
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
      const WTF::String& string_value) {
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

  
  WTF::String& get_string_value() const {
    DCHECK(tag_ == Tag::STRING_VALUE);
    return *(data_.string_value);
  }

  
  void set_string_value(
      const WTF::String& string_value);
  
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
    WTF::String* string_value;
    SingletonJavaScriptValue singleton_value;
    int32_t object_id;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class PLATFORM_EXPORT RemoteInvocationResult {
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RemoteInvocationResult::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::RemoteInvocationResult::DataView,
                                         ::blink::mojom::blink::RemoteInvocationResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::RemoteInvocationResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::RemoteInvocationResultPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::RemoteInvocationResult::error) error(
      const ::blink::mojom::blink::RemoteInvocationResultPtr& input) {
    return input->error;
  }

  static const decltype(::blink::mojom::blink::RemoteInvocationResult::value)& value(
      const ::blink::mojom::blink::RemoteInvocationResultPtr& input) {
    return input->value;
  }

  static bool Read(::blink::mojom::blink::RemoteInvocationResult::DataView input, ::blink::mojom::blink::RemoteInvocationResultPtr* output);
};


template <>
struct PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::RemoteInvocationArgument::DataView,
                                        ::blink::mojom::blink::RemoteInvocationArgumentPtr> {
  static bool IsNull(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::RemoteInvocationArgumentPtr* output) { output->reset(); }

  static ::blink::mojom::blink::RemoteInvocationArgument::Tag GetTag(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) {
    return input->which();
  }

  static  double number_value(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) {
    return input->get_number_value();
  }

  static  bool boolean_value(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) {
    return input->get_boolean_value();
  }

  static const WTF::String& string_value(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) {
    return input->get_string_value();
  }

  static  ::blink::mojom::blink::SingletonJavaScriptValue singleton_value(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) {
    return input->get_singleton_value();
  }

  static const WTF::Vector<::blink::mojom::blink::RemoteInvocationArgumentPtr>& array_value(const ::blink::mojom::blink::RemoteInvocationArgumentPtr& input) {
    return input->get_array_value();
  }

  static bool Read(::blink::mojom::blink::RemoteInvocationArgument::DataView input, ::blink::mojom::blink::RemoteInvocationArgumentPtr* output);
};


template <>
struct PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::RemoteInvocationResultValue::DataView,
                                        ::blink::mojom::blink::RemoteInvocationResultValuePtr> {
  static bool IsNull(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::RemoteInvocationResultValuePtr* output) { output->reset(); }

  static ::blink::mojom::blink::RemoteInvocationResultValue::Tag GetTag(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) {
    return input->which();
  }

  static  double number_value(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) {
    return input->get_number_value();
  }

  static  bool boolean_value(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) {
    return input->get_boolean_value();
  }

  static const WTF::String& string_value(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) {
    return input->get_string_value();
  }

  static  ::blink::mojom::blink::SingletonJavaScriptValue singleton_value(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) {
    return input->get_singleton_value();
  }

  static  int32_t object_id(const ::blink::mojom::blink::RemoteInvocationResultValuePtr& input) {
    return input->get_object_id();
  }

  static bool Read(::blink::mojom::blink::RemoteInvocationResultValue::DataView input, ::blink::mojom::blink::RemoteInvocationResultValuePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_REMOTE_OBJECTS_REMOTE_OBJECTS_MOJOM_BLINK_H_