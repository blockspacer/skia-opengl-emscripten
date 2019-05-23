// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_H_

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
#include "third_party/blink/public/mojom/locks/lock_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/locks/lock_manager.mojom-forward.h"
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

class LockHandleProxy;

template <typename ImplRefTraits>
class LockHandleStub;

class LockHandleRequestValidator;


class BLINK_COMMON_EXPORT LockHandle
    : public LockHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = LockHandleInterfaceBase;
  using Proxy_ = LockHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = LockHandleStub<ImplRefTraits>;

  using RequestValidator_ = LockHandleRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~LockHandle() {}
};

class LockRequestProxy;

template <typename ImplRefTraits>
class LockRequestStub;

class LockRequestRequestValidator;


class BLINK_COMMON_EXPORT LockRequest
    : public LockRequestInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = LockRequestInterfaceBase;
  using Proxy_ = LockRequestProxy;

  template <typename ImplRefTraits>
  using Stub_ = LockRequestStub<ImplRefTraits>;

  using RequestValidator_ = LockRequestRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGrantedMinVersion = 0,
    kFailedMinVersion = 0,
    kAbortMinVersion = 0,
  };
  virtual ~LockRequest() {}

  
  virtual void Granted(LockHandleAssociatedPtrInfo lock_handle) = 0;

  
  virtual void Failed() = 0;

  
  virtual void Abort(const std::string& reason) = 0;
};

class LockManagerProxy;

template <typename ImplRefTraits>
class LockManagerStub;

class LockManagerRequestValidator;
class LockManagerResponseValidator;


class BLINK_COMMON_EXPORT LockManager
    : public LockManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = LockManagerInterfaceBase;
  using Proxy_ = LockManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = LockManagerStub<ImplRefTraits>;

  using RequestValidator_ = LockManagerRequestValidator;
  using ResponseValidator_ = LockManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestLockMinVersion = 0,
    kQueryStateMinVersion = 0,
  };
  
  using WaitMode = LockManager_WaitMode;
  virtual ~LockManager() {}

  
  virtual void RequestLock(const std::string& name, LockMode mode, LockManager::WaitMode wait, LockRequestAssociatedPtrInfo request) = 0;


  using QueryStateCallback = base::OnceCallback<void(std::vector<LockInfoPtr>, std::vector<LockInfoPtr>)>;
  
  virtual void QueryState(QueryStateCallback callback) = 0;
};

class BLINK_COMMON_EXPORT LockHandleProxy
    : public LockHandle {
 public:
  using InterfaceType = LockHandle;

  explicit LockHandleProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT LockRequestProxy
    : public LockRequest {
 public:
  using InterfaceType = LockRequest;

  explicit LockRequestProxy(mojo::MessageReceiverWithResponder* receiver);
  void Granted(LockHandleAssociatedPtrInfo lock_handle) final;
  void Failed() final;
  void Abort(const std::string& reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT LockManagerProxy
    : public LockManager {
 public:
  using InterfaceType = LockManager;

  explicit LockManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestLock(const std::string& name, LockMode mode, LockManager::WaitMode wait, LockRequestAssociatedPtrInfo request) final;
  void QueryState(QueryStateCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT LockHandleStubDispatch {
 public:
  static bool Accept(LockHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LockHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LockHandle>>
class LockHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LockHandleStub() {}
  ~LockHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT LockRequestStubDispatch {
 public:
  static bool Accept(LockRequest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LockRequest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LockRequest>>
class LockRequestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LockRequestStub() {}
  ~LockRequestStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockRequestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockRequestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT LockManagerStubDispatch {
 public:
  static bool Accept(LockManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LockManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LockManager>>
class LockManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LockManagerStub() {}
  ~LockManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LockManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT LockHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT LockRequestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT LockManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT LockManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_COMMON_EXPORT LockInfo {
 public:
  using DataView = LockInfoDataView;
  using Data_ = internal::LockInfo_Data;

  template <typename... Args>
  static LockInfoPtr New(Args&&... args) {
    return LockInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LockInfoPtr From(const U& u) {
    return mojo::TypeConverter<LockInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LockInfo>::Convert(*this);
  }


  LockInfo();

  LockInfo(
      const std::string& name,
      LockMode mode,
      const std::string& client_id);

  ~LockInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LockInfoPtr>
  LockInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LockInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LockInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LockInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LockInfo_UnserializedMessageContext<
            UserType, LockInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<LockInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LockInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LockInfo_UnserializedMessageContext<
            UserType, LockInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LockInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  LockMode mode;
  
  std::string client_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
LockInfoPtr LockInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(mode),
      mojo::Clone(client_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LockInfo>::value>::type*>
bool LockInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::LockInfo::DataView,
                                         ::blink::mojom::LockInfoPtr> {
  static bool IsNull(const ::blink::mojom::LockInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::LockInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::LockInfo::name)& name(
      const ::blink::mojom::LockInfoPtr& input) {
    return input->name;
  }

  static decltype(::blink::mojom::LockInfo::mode) mode(
      const ::blink::mojom::LockInfoPtr& input) {
    return input->mode;
  }

  static const decltype(::blink::mojom::LockInfo::client_id)& client_id(
      const ::blink::mojom::LockInfoPtr& input) {
    return input->client_id;
  }

  static bool Read(::blink::mojom::LockInfo::DataView input, ::blink::mojom::LockInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_H_