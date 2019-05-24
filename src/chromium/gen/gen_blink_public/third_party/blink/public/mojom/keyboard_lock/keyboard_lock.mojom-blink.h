// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-shared.h"
#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-blink-forward.h"

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
struct blink_mojom_internal_KeyboardLockRequestResult_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::KeyboardLockRequestResult& value) {
    using utype = std::underlying_type<::blink::mojom::KeyboardLockRequestResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::KeyboardLockRequestResult& left, const ::blink::mojom::KeyboardLockRequestResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::KeyboardLockRequestResult>
    : public GenericHashTraits<::blink::mojom::KeyboardLockRequestResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::KeyboardLockRequestResult& value) {
    return value == static_cast<::blink::mojom::KeyboardLockRequestResult>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::KeyboardLockRequestResult& slot, bool) {
    slot = static_cast<::blink::mojom::KeyboardLockRequestResult>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::KeyboardLockRequestResult& value) {
    return value == static_cast<::blink::mojom::KeyboardLockRequestResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_GetKeyboardLayoutMapStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::GetKeyboardLayoutMapStatus& value) {
    using utype = std::underlying_type<::blink::mojom::GetKeyboardLayoutMapStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::GetKeyboardLayoutMapStatus& left, const ::blink::mojom::GetKeyboardLayoutMapStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::GetKeyboardLayoutMapStatus>
    : public GenericHashTraits<::blink::mojom::GetKeyboardLayoutMapStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::GetKeyboardLayoutMapStatus& value) {
    return value == static_cast<::blink::mojom::GetKeyboardLayoutMapStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::GetKeyboardLayoutMapStatus& slot, bool) {
    slot = static_cast<::blink::mojom::GetKeyboardLayoutMapStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::GetKeyboardLayoutMapStatus& value) {
    return value == static_cast<::blink::mojom::GetKeyboardLayoutMapStatus>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class KeyboardLockServiceProxy;

template <typename ImplRefTraits>
class KeyboardLockServiceStub;

class KeyboardLockServiceRequestValidator;
class KeyboardLockServiceResponseValidator;


class PLATFORM_EXPORT KeyboardLockService
    : public KeyboardLockServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = KeyboardLockServiceInterfaceBase;
  using Proxy_ = KeyboardLockServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = KeyboardLockServiceStub<ImplRefTraits>;

  using RequestValidator_ = KeyboardLockServiceRequestValidator;
  using ResponseValidator_ = KeyboardLockServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestKeyboardLockMinVersion = 0,
    kCancelKeyboardLockMinVersion = 0,
    kGetKeyboardLayoutMapMinVersion = 0,
  };
  virtual ~KeyboardLockService() {}


  using RequestKeyboardLockCallback = base::OnceCallback<void(KeyboardLockRequestResult)>;
  
  virtual void RequestKeyboardLock(const WTF::Vector<WTF::String>& key_codes, RequestKeyboardLockCallback callback) = 0;

  
  virtual void CancelKeyboardLock() = 0;


  using GetKeyboardLayoutMapCallback = base::OnceCallback<void(GetKeyboardLayoutMapResultPtr)>;
  
  virtual void GetKeyboardLayoutMap(GetKeyboardLayoutMapCallback callback) = 0;
};

class PLATFORM_EXPORT KeyboardLockServiceProxy
    : public KeyboardLockService {
 public:
  using InterfaceType = KeyboardLockService;

  explicit KeyboardLockServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestKeyboardLock(const WTF::Vector<WTF::String>& key_codes, RequestKeyboardLockCallback callback) final;
  void CancelKeyboardLock() final;
  void GetKeyboardLayoutMap(GetKeyboardLayoutMapCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT KeyboardLockServiceStubDispatch {
 public:
  static bool Accept(KeyboardLockService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      KeyboardLockService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<KeyboardLockService>>
class KeyboardLockServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  KeyboardLockServiceStub() {}
  ~KeyboardLockServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeyboardLockServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeyboardLockServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT KeyboardLockServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT KeyboardLockServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT GetKeyboardLayoutMapResult {
 public:
  using DataView = GetKeyboardLayoutMapResultDataView;
  using Data_ = internal::GetKeyboardLayoutMapResult_Data;

  template <typename... Args>
  static GetKeyboardLayoutMapResultPtr New(Args&&... args) {
    return GetKeyboardLayoutMapResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GetKeyboardLayoutMapResultPtr From(const U& u) {
    return mojo::TypeConverter<GetKeyboardLayoutMapResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GetKeyboardLayoutMapResult>::Convert(*this);
  }


  GetKeyboardLayoutMapResult();

  GetKeyboardLayoutMapResult(
      GetKeyboardLayoutMapStatus status,
      const WTF::HashMap<WTF::String, WTF::String>& layout_map);

  ~GetKeyboardLayoutMapResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GetKeyboardLayoutMapResultPtr>
  GetKeyboardLayoutMapResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GetKeyboardLayoutMapResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GetKeyboardLayoutMapResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GetKeyboardLayoutMapResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GetKeyboardLayoutMapResult_UnserializedMessageContext<
            UserType, GetKeyboardLayoutMapResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GetKeyboardLayoutMapResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GetKeyboardLayoutMapResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GetKeyboardLayoutMapResult_UnserializedMessageContext<
            UserType, GetKeyboardLayoutMapResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GetKeyboardLayoutMapResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GetKeyboardLayoutMapStatus status;
  
  WTF::HashMap<WTF::String, WTF::String> layout_map;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
GetKeyboardLayoutMapResultPtr GetKeyboardLayoutMapResult::Clone() const {
  return New(
      mojo::Clone(status),
      mojo::Clone(layout_map)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GetKeyboardLayoutMapResult>::value>::type*>
bool GetKeyboardLayoutMapResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->layout_map, other_struct.layout_map))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::GetKeyboardLayoutMapResult::DataView,
                                         ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::GetKeyboardLayoutMapResultPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::GetKeyboardLayoutMapResult::status) status(
      const ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr& input) {
    return input->status;
  }

  static const decltype(::blink::mojom::blink::GetKeyboardLayoutMapResult::layout_map)& layout_map(
      const ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr& input) {
    return input->layout_map;
  }

  static bool Read(::blink::mojom::blink::GetKeyboardLayoutMapResult::DataView input, ::blink::mojom::blink::GetKeyboardLayoutMapResultPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_BLINK_H_