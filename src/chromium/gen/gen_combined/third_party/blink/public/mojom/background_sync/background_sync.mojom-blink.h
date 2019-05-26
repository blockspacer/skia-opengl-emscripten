// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-shared.h"
#include "third_party/blink/public/mojom/background_sync/background_sync.mojom-blink-forward.h"

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
struct blink_mojom_internal_BackgroundSyncError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncError& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncError& left, const ::blink::mojom::BackgroundSyncError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncError>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncError& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncError& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncError& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncError>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncState& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncState& left, const ::blink::mojom::BackgroundSyncState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncState>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncState>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncState& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncState& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncEventLastChance_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncEventLastChance>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncEventLastChance& left, const ::blink::mojom::BackgroundSyncEventLastChance& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncEventLastChance>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncEventLastChance> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncEventLastChance& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncEventLastChance& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncEventLastChance>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_BackgroundSyncType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::BackgroundSyncType& value) {
    using utype = std::underlying_type<::blink::mojom::BackgroundSyncType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::BackgroundSyncType& left, const ::blink::mojom::BackgroundSyncType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::BackgroundSyncType>
    : public GenericHashTraits<::blink::mojom::BackgroundSyncType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::BackgroundSyncType& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::BackgroundSyncType& slot, bool) {
    slot = static_cast<::blink::mojom::BackgroundSyncType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::BackgroundSyncType& value) {
    return value == static_cast<::blink::mojom::BackgroundSyncType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class BackgroundSyncServiceProxy;

template <typename ImplRefTraits>
class BackgroundSyncServiceStub;

class BackgroundSyncServiceRequestValidator;
class BackgroundSyncServiceResponseValidator;


class PLATFORM_EXPORT BackgroundSyncService
    : public BackgroundSyncServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BackgroundSyncServiceInterfaceBase;
  using Proxy_ = BackgroundSyncServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundSyncServiceStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundSyncServiceRequestValidator;
  using ResponseValidator_ = BackgroundSyncServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kDidResolveRegistrationMinVersion = 0,
    kGetRegistrationsMinVersion = 0,
  };
  virtual ~BackgroundSyncService() {}


  using RegisterCallback = base::OnceCallback<void(BackgroundSyncError, SyncRegistrationOptionsPtr)>;
  
  virtual void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) = 0;

  
  virtual void DidResolveRegistration(BackgroundSyncRegistrationInfoPtr registration_info) = 0;


  using GetRegistrationsCallback = base::OnceCallback<void(BackgroundSyncError, WTF::Vector<SyncRegistrationOptionsPtr>)>;
  
  virtual void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) = 0;
};

class PLATFORM_EXPORT BackgroundSyncServiceProxy
    : public BackgroundSyncService {
 public:
  using InterfaceType = BackgroundSyncService;

  explicit BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(SyncRegistrationOptionsPtr options, int64_t service_worker_registration_id, RegisterCallback callback) final;
  void DidResolveRegistration(BackgroundSyncRegistrationInfoPtr registration_info) final;
  void GetRegistrations(int64_t service_worker_registration_id, GetRegistrationsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT BackgroundSyncServiceStubDispatch {
 public:
  static bool Accept(BackgroundSyncService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundSyncService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundSyncService>>
class BackgroundSyncServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundSyncServiceStub() {}
  ~BackgroundSyncServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundSyncServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundSyncServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT BackgroundSyncServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BackgroundSyncServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT SyncRegistrationOptions {
 public:
  using DataView = SyncRegistrationOptionsDataView;
  using Data_ = internal::SyncRegistrationOptions_Data;

  template <typename... Args>
  static SyncRegistrationOptionsPtr New(Args&&... args) {
    return SyncRegistrationOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SyncRegistrationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<SyncRegistrationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SyncRegistrationOptions>::Convert(*this);
  }


  SyncRegistrationOptions();

  SyncRegistrationOptions(
      const WTF::String& tag,
      int64_t min_interval);

  ~SyncRegistrationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SyncRegistrationOptionsPtr>
  SyncRegistrationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SyncRegistrationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SyncRegistrationOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SyncRegistrationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SyncRegistrationOptions_UnserializedMessageContext<
            UserType, SyncRegistrationOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SyncRegistrationOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SyncRegistrationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SyncRegistrationOptions_UnserializedMessageContext<
            UserType, SyncRegistrationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SyncRegistrationOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String tag;
  
  int64_t min_interval;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT BackgroundSyncRegistrationInfo {
 public:
  using DataView = BackgroundSyncRegistrationInfoDataView;
  using Data_ = internal::BackgroundSyncRegistrationInfo_Data;

  template <typename... Args>
  static BackgroundSyncRegistrationInfoPtr New(Args&&... args) {
    return BackgroundSyncRegistrationInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundSyncRegistrationInfoPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundSyncRegistrationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundSyncRegistrationInfo>::Convert(*this);
  }


  BackgroundSyncRegistrationInfo();

  BackgroundSyncRegistrationInfo(
      int64_t service_worker_registration_id,
      const WTF::String& tag,
      BackgroundSyncType sync_type);

  ~BackgroundSyncRegistrationInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundSyncRegistrationInfoPtr>
  BackgroundSyncRegistrationInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundSyncRegistrationInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundSyncRegistrationInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundSyncRegistrationInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundSyncRegistrationInfo_UnserializedMessageContext<
            UserType, BackgroundSyncRegistrationInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundSyncRegistrationInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundSyncRegistrationInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundSyncRegistrationInfo_UnserializedMessageContext<
            UserType, BackgroundSyncRegistrationInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundSyncRegistrationInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t service_worker_registration_id;
  
  WTF::String tag;
  
  BackgroundSyncType sync_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





template <typename StructPtrType>
SyncRegistrationOptionsPtr SyncRegistrationOptions::Clone() const {
  return New(
      mojo::Clone(tag),
      mojo::Clone(min_interval)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SyncRegistrationOptions>::value>::type*>
bool SyncRegistrationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->tag, other_struct.tag))
    return false;
  if (!mojo::Equals(this->min_interval, other_struct.min_interval))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundSyncRegistrationInfoPtr BackgroundSyncRegistrationInfo::Clone() const {
  return New(
      mojo::Clone(service_worker_registration_id),
      mojo::Clone(tag),
      mojo::Clone(sync_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundSyncRegistrationInfo>::value>::type*>
bool BackgroundSyncRegistrationInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->service_worker_registration_id, other_struct.service_worker_registration_id))
    return false;
  if (!mojo::Equals(this->tag, other_struct.tag))
    return false;
  if (!mojo::Equals(this->sync_type, other_struct.sync_type))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SyncRegistrationOptions::DataView,
                                         ::blink::mojom::blink::SyncRegistrationOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::SyncRegistrationOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SyncRegistrationOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SyncRegistrationOptions::tag)& tag(
      const ::blink::mojom::blink::SyncRegistrationOptionsPtr& input) {
    return input->tag;
  }

  static decltype(::blink::mojom::blink::SyncRegistrationOptions::min_interval) min_interval(
      const ::blink::mojom::blink::SyncRegistrationOptionsPtr& input) {
    return input->min_interval;
  }

  static bool Read(::blink::mojom::blink::SyncRegistrationOptions::DataView input, ::blink::mojom::blink::SyncRegistrationOptionsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::BackgroundSyncRegistrationInfo::DataView,
                                         ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::BackgroundSyncRegistrationInfo::service_worker_registration_id) service_worker_registration_id(
      const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) {
    return input->service_worker_registration_id;
  }

  static const decltype(::blink::mojom::blink::BackgroundSyncRegistrationInfo::tag)& tag(
      const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) {
    return input->tag;
  }

  static decltype(::blink::mojom::blink::BackgroundSyncRegistrationInfo::sync_type) sync_type(
      const ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr& input) {
    return input->sync_type;
  }

  static bool Read(::blink::mojom::blink::BackgroundSyncRegistrationInfo::DataView input, ::blink::mojom::blink::BackgroundSyncRegistrationInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_SYNC_BACKGROUND_SYNC_MOJOM_BLINK_H_