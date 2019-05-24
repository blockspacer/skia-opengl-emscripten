// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/idle/idle_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/idle/idle_manager.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink-forward.h"

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
struct blink_mojom_internal_UserIdleState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::UserIdleState& value) {
    using utype = std::underlying_type<::blink::mojom::UserIdleState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::UserIdleState& left, const ::blink::mojom::UserIdleState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::UserIdleState>
    : public GenericHashTraits<::blink::mojom::UserIdleState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::UserIdleState& value) {
    return value == static_cast<::blink::mojom::UserIdleState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::UserIdleState& slot, bool) {
    slot = static_cast<::blink::mojom::UserIdleState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::UserIdleState& value) {
    return value == static_cast<::blink::mojom::UserIdleState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_ScreenIdleState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ScreenIdleState& value) {
    using utype = std::underlying_type<::blink::mojom::ScreenIdleState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ScreenIdleState& left, const ::blink::mojom::ScreenIdleState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ScreenIdleState>
    : public GenericHashTraits<::blink::mojom::ScreenIdleState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ScreenIdleState& value) {
    return value == static_cast<::blink::mojom::ScreenIdleState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ScreenIdleState& slot, bool) {
    slot = static_cast<::blink::mojom::ScreenIdleState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ScreenIdleState& value) {
    return value == static_cast<::blink::mojom::ScreenIdleState>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class IdleMonitorProxy;

template <typename ImplRefTraits>
class IdleMonitorStub;

class IdleMonitorRequestValidator;


class PLATFORM_EXPORT IdleMonitor
    : public IdleMonitorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IdleMonitorInterfaceBase;
  using Proxy_ = IdleMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = IdleMonitorStub<ImplRefTraits>;

  using RequestValidator_ = IdleMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateMinVersion = 0,
  };
  virtual ~IdleMonitor() {}

  
  virtual void Update(IdleStatePtr state) = 0;
};

class IdleManagerProxy;

template <typename ImplRefTraits>
class IdleManagerStub;

class IdleManagerRequestValidator;
class IdleManagerResponseValidator;


class PLATFORM_EXPORT IdleManager
    : public IdleManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IdleManagerInterfaceBase;
  using Proxy_ = IdleManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = IdleManagerStub<ImplRefTraits>;

  using RequestValidator_ = IdleManagerRequestValidator;
  using ResponseValidator_ = IdleManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddMonitorMinVersion = 0,
  };
  virtual ~IdleManager() {}


  using AddMonitorCallback = base::OnceCallback<void(IdleStatePtr)>;
  
  virtual void AddMonitor(base::TimeDelta threshold, IdleMonitorPtr monitor, AddMonitorCallback callback) = 0;
};

class PLATFORM_EXPORT IdleMonitorProxy
    : public IdleMonitor {
 public:
  using InterfaceType = IdleMonitor;

  explicit IdleMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Update(IdleStatePtr state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT IdleManagerProxy
    : public IdleManager {
 public:
  using InterfaceType = IdleManager;

  explicit IdleManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddMonitor(base::TimeDelta threshold, IdleMonitorPtr monitor, AddMonitorCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT IdleMonitorStubDispatch {
 public:
  static bool Accept(IdleMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IdleMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IdleMonitor>>
class IdleMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IdleMonitorStub() {}
  ~IdleMonitorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT IdleManagerStubDispatch {
 public:
  static bool Accept(IdleManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IdleManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IdleManager>>
class IdleManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IdleManagerStub() {}
  ~IdleManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IdleManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT IdleMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT IdleManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT IdleManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT IdleState {
 public:
  using DataView = IdleStateDataView;
  using Data_ = internal::IdleState_Data;

  template <typename... Args>
  static IdleStatePtr New(Args&&... args) {
    return IdleStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IdleStatePtr From(const U& u) {
    return mojo::TypeConverter<IdleStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IdleState>::Convert(*this);
  }


  IdleState();

  IdleState(
      UserIdleState user,
      ScreenIdleState screen);

  ~IdleState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IdleStatePtr>
  IdleStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IdleState>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IdleState::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IdleState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IdleState_UnserializedMessageContext<
            UserType, IdleState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IdleState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return IdleState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IdleState_UnserializedMessageContext<
            UserType, IdleState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IdleState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  UserIdleState user;
  
  ScreenIdleState screen;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
IdleStatePtr IdleState::Clone() const {
  return New(
      mojo::Clone(user),
      mojo::Clone(screen)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IdleState>::value>::type*>
bool IdleState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->user, other_struct.user))
    return false;
  if (!mojo::Equals(this->screen, other_struct.screen))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::IdleState::DataView,
                                         ::blink::mojom::blink::IdleStatePtr> {
  static bool IsNull(const ::blink::mojom::blink::IdleStatePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::IdleStatePtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::IdleState::user) user(
      const ::blink::mojom::blink::IdleStatePtr& input) {
    return input->user;
  }

  static decltype(::blink::mojom::blink::IdleState::screen) screen(
      const ::blink::mojom::blink::IdleStatePtr& input) {
    return input->screen;
  }

  static bool Read(::blink::mojom::blink::IdleState::DataView input, ::blink::mojom::blink::IdleStatePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_H_