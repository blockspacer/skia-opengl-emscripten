// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-shared.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-blink-forward.h"

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

class StorageAreaObserverProxy;

template <typename ImplRefTraits>
class StorageAreaObserverStub;

class StorageAreaObserverRequestValidator;


class PLATFORM_EXPORT StorageAreaObserver
    : public StorageAreaObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = StorageAreaObserverInterfaceBase;
  using Proxy_ = StorageAreaObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = StorageAreaObserverStub<ImplRefTraits>;

  using RequestValidator_ = StorageAreaObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kKeyAddedMinVersion = 0,
    kKeyChangedMinVersion = 0,
    kKeyDeletedMinVersion = 0,
    kAllDeletedMinVersion = 0,
    kShouldSendOldValueOnMutationsMinVersion = 0,
  };
  virtual ~StorageAreaObserver() {}

  
  virtual void KeyAdded(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const WTF::String& source) = 0;

  
  virtual void KeyChanged(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& new_value, const WTF::Vector<uint8_t>& old_value, const WTF::String& source) = 0;

  
  virtual void KeyDeleted(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& old_value, const WTF::String& source) = 0;

  
  virtual void AllDeleted(const WTF::String& source) = 0;

  
  virtual void ShouldSendOldValueOnMutations(bool value) = 0;
};

class StorageAreaGetAllCallbackProxy;

template <typename ImplRefTraits>
class StorageAreaGetAllCallbackStub;

class StorageAreaGetAllCallbackRequestValidator;


class PLATFORM_EXPORT StorageAreaGetAllCallback
    : public StorageAreaGetAllCallbackInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = StorageAreaGetAllCallbackInterfaceBase;
  using Proxy_ = StorageAreaGetAllCallbackProxy;

  template <typename ImplRefTraits>
  using Stub_ = StorageAreaGetAllCallbackStub<ImplRefTraits>;

  using RequestValidator_ = StorageAreaGetAllCallbackRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCompleteMinVersion = 0,
  };
  virtual ~StorageAreaGetAllCallback() {}

  
  virtual void Complete(bool success) = 0;
};

class StorageAreaProxy;

template <typename ImplRefTraits>
class StorageAreaStub;

class StorageAreaRequestValidator;
class StorageAreaResponseValidator;


class PLATFORM_EXPORT StorageArea
    : public StorageAreaInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = StorageAreaInterfaceBase;
  using Proxy_ = StorageAreaProxy;

  template <typename ImplRefTraits>
  using Stub_ = StorageAreaStub<ImplRefTraits>;

  using RequestValidator_ = StorageAreaRequestValidator;
  using ResponseValidator_ = StorageAreaResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddObserverMinVersion = 0,
    kPutMinVersion = 0,
    kDeleteMinVersion = 0,
    kDeleteAllMinVersion = 0,
    kGetMinVersion = 0,
    kGetAllMinVersion = 0,
  };
  
  static constexpr uint32_t kPerStorageAreaQuota = 10485760U;
  
  static constexpr uint32_t kPerStorageAreaOverQuotaAllowance = 102400U;
  virtual ~StorageArea() {}

  
  virtual void AddObserver(StorageAreaObserverAssociatedPtrInfo observer) = 0;


  using PutCallback = base::OnceCallback<void(bool)>;
  
  virtual void Put(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, PutCallback callback) = 0;


  using DeleteCallback = base::OnceCallback<void(bool)>;
  
  virtual void Delete(const WTF::Vector<uint8_t>& key, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, DeleteCallback callback) = 0;


  using DeleteAllCallback = base::OnceCallback<void(bool)>;
  
  virtual void DeleteAll(const WTF::String& source, DeleteAllCallback callback) = 0;


  using GetCallback = base::OnceCallback<void(bool, const WTF::Vector<uint8_t>&)>;
  
  virtual void Get(const WTF::Vector<uint8_t>& key, GetCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, bool* out_success, WTF::Vector<KeyValuePtr>* out_data);

  using GetAllCallback = base::OnceCallback<void(bool, WTF::Vector<KeyValuePtr>)>;
  
  virtual void GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) = 0;
};

class PLATFORM_EXPORT StorageAreaObserverProxy
    : public StorageAreaObserver {
 public:
  using InterfaceType = StorageAreaObserver;

  explicit StorageAreaObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void KeyAdded(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const WTF::String& source) final;
  void KeyChanged(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& new_value, const WTF::Vector<uint8_t>& old_value, const WTF::String& source) final;
  void KeyDeleted(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& old_value, const WTF::String& source) final;
  void AllDeleted(const WTF::String& source) final;
  void ShouldSendOldValueOnMutations(bool value) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT StorageAreaGetAllCallbackProxy
    : public StorageAreaGetAllCallback {
 public:
  using InterfaceType = StorageAreaGetAllCallback;

  explicit StorageAreaGetAllCallbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void Complete(bool success) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT StorageAreaProxy
    : public StorageArea {
 public:
  using InterfaceType = StorageArea;

  explicit StorageAreaProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddObserver(StorageAreaObserverAssociatedPtrInfo observer) final;
  void Put(const WTF::Vector<uint8_t>& key, const WTF::Vector<uint8_t>& value, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, PutCallback callback) final;
  void Delete(const WTF::Vector<uint8_t>& key, const base::Optional<WTF::Vector<uint8_t>>& client_old_value, const WTF::String& source, DeleteCallback callback) final;
  void DeleteAll(const WTF::String& source, DeleteAllCallback callback) final;
  void Get(const WTF::Vector<uint8_t>& key, GetCallback callback) final;
  bool GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, bool* out_success, WTF::Vector<KeyValuePtr>* out_data) final;
  void GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, GetAllCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT StorageAreaObserverStubDispatch {
 public:
  static bool Accept(StorageAreaObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StorageAreaObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StorageAreaObserver>>
class StorageAreaObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StorageAreaObserverStub() {}
  ~StorageAreaObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StorageAreaObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StorageAreaObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT StorageAreaGetAllCallbackStubDispatch {
 public:
  static bool Accept(StorageAreaGetAllCallback* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StorageAreaGetAllCallback* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StorageAreaGetAllCallback>>
class StorageAreaGetAllCallbackStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StorageAreaGetAllCallbackStub() {}
  ~StorageAreaGetAllCallbackStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StorageAreaGetAllCallbackStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StorageAreaGetAllCallbackStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT StorageAreaStubDispatch {
 public:
  static bool Accept(StorageArea* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StorageArea* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StorageArea>>
class StorageAreaStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StorageAreaStub() {}
  ~StorageAreaStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StorageAreaStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StorageAreaStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT StorageAreaObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT StorageAreaGetAllCallbackRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT StorageAreaRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT StorageAreaResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT KeyValue {
 public:
  using DataView = KeyValueDataView;
  using Data_ = internal::KeyValue_Data;

  template <typename... Args>
  static KeyValuePtr New(Args&&... args) {
    return KeyValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyValuePtr From(const U& u) {
    return mojo::TypeConverter<KeyValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyValue>::Convert(*this);
  }


  KeyValue();

  KeyValue(
      const WTF::Vector<uint8_t>& key,
      const WTF::Vector<uint8_t>& value);

  ~KeyValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyValuePtr>
  KeyValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyValue::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyValue_UnserializedMessageContext<
            UserType, KeyValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return KeyValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyValue_UnserializedMessageContext<
            UserType, KeyValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<uint8_t> key;
  
  WTF::Vector<uint8_t> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
KeyValuePtr KeyValue::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyValue>::value>::type*>
bool KeyValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
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
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::KeyValue::DataView,
                                         ::blink::mojom::blink::KeyValuePtr> {
  static bool IsNull(const ::blink::mojom::blink::KeyValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::KeyValuePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::KeyValue::key)& key(
      const ::blink::mojom::blink::KeyValuePtr& input) {
    return input->key;
  }

  static const decltype(::blink::mojom::blink::KeyValue::value)& value(
      const ::blink::mojom::blink::KeyValuePtr& input) {
    return input->value;
  }

  static bool Read(::blink::mojom::blink::KeyValue::DataView input, ::blink::mojom::blink::KeyValuePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_H_