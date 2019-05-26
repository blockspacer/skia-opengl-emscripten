// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_H_

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
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-shared.h"
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-forward.h"
#include "skia/public/interfaces/bitmap.mojom.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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

class BackgroundFetchRegistrationObserverProxy;

template <typename ImplRefTraits>
class BackgroundFetchRegistrationObserverStub;

class BackgroundFetchRegistrationObserverRequestValidator;


class BLINK_COMMON_EXPORT BackgroundFetchRegistrationObserver
    : public BackgroundFetchRegistrationObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BackgroundFetchRegistrationObserverInterfaceBase;
  using Proxy_ = BackgroundFetchRegistrationObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundFetchRegistrationObserverStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundFetchRegistrationObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnProgressMinVersion = 0,
    kOnRecordsUnavailableMinVersion = 0,
    kOnRequestCompletedMinVersion = 0,
  };
  virtual ~BackgroundFetchRegistrationObserver() {}

  
  virtual void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded, BackgroundFetchResult result, BackgroundFetchFailureReason failure_reason) = 0;

  
  virtual void OnRecordsUnavailable() = 0;

  
  virtual void OnRequestCompleted(::blink::mojom::FetchAPIRequestPtr request, ::blink::mojom::FetchAPIResponsePtr response) = 0;
};

class BackgroundFetchServiceProxy;

template <typename ImplRefTraits>
class BackgroundFetchServiceStub;

class BackgroundFetchServiceRequestValidator;
class BackgroundFetchServiceResponseValidator;


class BLINK_COMMON_EXPORT BackgroundFetchService
    : public BackgroundFetchServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BackgroundFetchServiceInterfaceBase;
  using Proxy_ = BackgroundFetchServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundFetchServiceStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundFetchServiceRequestValidator;
  using ResponseValidator_ = BackgroundFetchServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kFetchMinVersion = 0,
    kGetRegistrationMinVersion = 0,
    kGetDeveloperIdsMinVersion = 0,
    kGetIconDisplaySizeMinVersion = 0,
  };
  virtual ~BackgroundFetchService() {}


  using FetchCallback = base::OnceCallback<void(BackgroundFetchError, BackgroundFetchRegistrationPtr)>;
  
  virtual void Fetch(int64_t service_worker_registration_id, const std::string& developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, FetchCallback callback) = 0;


  using GetRegistrationCallback = base::OnceCallback<void(BackgroundFetchError, BackgroundFetchRegistrationPtr)>;
  
  virtual void GetRegistration(int64_t service_worker_registration_id, const std::string& developer_id, GetRegistrationCallback callback) = 0;


  using GetDeveloperIdsCallback = base::OnceCallback<void(BackgroundFetchError, const std::vector<std::string>&)>;
  
  virtual void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) = 0;


  using GetIconDisplaySizeCallback = base::OnceCallback<void(const gfx::Size&)>;
  
  virtual void GetIconDisplaySize(GetIconDisplaySizeCallback callback) = 0;
};

class BackgroundFetchRegistrationServiceProxy;

template <typename ImplRefTraits>
class BackgroundFetchRegistrationServiceStub;

class BackgroundFetchRegistrationServiceRequestValidator;
class BackgroundFetchRegistrationServiceResponseValidator;


class BLINK_COMMON_EXPORT BackgroundFetchRegistrationService
    : public BackgroundFetchRegistrationServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BackgroundFetchRegistrationServiceInterfaceBase;
  using Proxy_ = BackgroundFetchRegistrationServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = BackgroundFetchRegistrationServiceStub<ImplRefTraits>;

  using RequestValidator_ = BackgroundFetchRegistrationServiceRequestValidator;
  using ResponseValidator_ = BackgroundFetchRegistrationServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kUpdateUIMinVersion = 0,
    kAbortMinVersion = 0,
    kMatchRequestsMinVersion = 0,
    kAddRegistrationObserverMinVersion = 0,
  };
  virtual ~BackgroundFetchRegistrationService() {}


  using UpdateUICallback = base::OnceCallback<void(BackgroundFetchError)>;
  
  virtual void UpdateUI(const base::Optional<std::string>& title, const SkBitmap& icon, UpdateUICallback callback) = 0;


  using AbortCallback = base::OnceCallback<void(BackgroundFetchError)>;
  
  virtual void Abort(AbortCallback callback) = 0;


  using MatchRequestsCallback = base::OnceCallback<void(std::vector<BackgroundFetchSettledFetchPtr>)>;
  
  virtual void MatchRequests(::blink::mojom::FetchAPIRequestPtr request_to_match, ::blink::mojom::CacheQueryOptionsPtr cache_query_options, bool match_all, MatchRequestsCallback callback) = 0;

  
  virtual void AddRegistrationObserver(BackgroundFetchRegistrationObserverPtr observer) = 0;
};

class BLINK_COMMON_EXPORT BackgroundFetchRegistrationObserverProxy
    : public BackgroundFetchRegistrationObserver {
 public:
  using InterfaceType = BackgroundFetchRegistrationObserver;

  explicit BackgroundFetchRegistrationObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnProgress(uint64_t upload_total, uint64_t uploaded, uint64_t download_total, uint64_t downloaded, BackgroundFetchResult result, BackgroundFetchFailureReason failure_reason) final;
  void OnRecordsUnavailable() final;
  void OnRequestCompleted(::blink::mojom::FetchAPIRequestPtr request, ::blink::mojom::FetchAPIResponsePtr response) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT BackgroundFetchServiceProxy
    : public BackgroundFetchService {
 public:
  using InterfaceType = BackgroundFetchService;

  explicit BackgroundFetchServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Fetch(int64_t service_worker_registration_id, const std::string& developer_id, std::vector<::blink::mojom::FetchAPIRequestPtr> requests, BackgroundFetchOptionsPtr options, const SkBitmap& icon, BackgroundFetchUkmDataPtr ukm_data, FetchCallback callback) final;
  void GetRegistration(int64_t service_worker_registration_id, const std::string& developer_id, GetRegistrationCallback callback) final;
  void GetDeveloperIds(int64_t service_worker_registration_id, GetDeveloperIdsCallback callback) final;
  void GetIconDisplaySize(GetIconDisplaySizeCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT BackgroundFetchRegistrationServiceProxy
    : public BackgroundFetchRegistrationService {
 public:
  using InterfaceType = BackgroundFetchRegistrationService;

  explicit BackgroundFetchRegistrationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpdateUI(const base::Optional<std::string>& title, const SkBitmap& icon, UpdateUICallback callback) final;
  void Abort(AbortCallback callback) final;
  void MatchRequests(::blink::mojom::FetchAPIRequestPtr request_to_match, ::blink::mojom::CacheQueryOptionsPtr cache_query_options, bool match_all, MatchRequestsCallback callback) final;
  void AddRegistrationObserver(BackgroundFetchRegistrationObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationObserverStubDispatch {
 public:
  static bool Accept(BackgroundFetchRegistrationObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundFetchRegistrationObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundFetchRegistrationObserver>>
class BackgroundFetchRegistrationObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundFetchRegistrationObserverStub() {}
  ~BackgroundFetchRegistrationObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchRegistrationObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchRegistrationObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT BackgroundFetchServiceStubDispatch {
 public:
  static bool Accept(BackgroundFetchService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundFetchService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundFetchService>>
class BackgroundFetchServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundFetchServiceStub() {}
  ~BackgroundFetchServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationServiceStubDispatch {
 public:
  static bool Accept(BackgroundFetchRegistrationService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BackgroundFetchRegistrationService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BackgroundFetchRegistrationService>>
class BackgroundFetchRegistrationServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BackgroundFetchRegistrationServiceStub() {}
  ~BackgroundFetchRegistrationServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchRegistrationServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BackgroundFetchRegistrationServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BackgroundFetchRegistrationServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_COMMON_EXPORT BackgroundFetchUkmData {
 public:
  using DataView = BackgroundFetchUkmDataDataView;
  using Data_ = internal::BackgroundFetchUkmData_Data;

  template <typename... Args>
  static BackgroundFetchUkmDataPtr New(Args&&... args) {
    return BackgroundFetchUkmDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchUkmDataPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchUkmDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchUkmData>::Convert(*this);
  }


  BackgroundFetchUkmData();

  explicit BackgroundFetchUkmData(
      int64_t ideal_to_chosen_icon_size);

  ~BackgroundFetchUkmData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchUkmDataPtr>
  BackgroundFetchUkmDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchUkmData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchUkmData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchUkmData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchUkmData_UnserializedMessageContext<
            UserType, BackgroundFetchUkmData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchUkmData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchUkmData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchUkmData_UnserializedMessageContext<
            UserType, BackgroundFetchUkmData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchUkmData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t ideal_to_chosen_icon_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class BLINK_COMMON_EXPORT BackgroundFetchSettledFetch {
 public:
  using DataView = BackgroundFetchSettledFetchDataView;
  using Data_ = internal::BackgroundFetchSettledFetch_Data;

  template <typename... Args>
  static BackgroundFetchSettledFetchPtr New(Args&&... args) {
    return BackgroundFetchSettledFetchPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchSettledFetchPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchSettledFetchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchSettledFetch>::Convert(*this);
  }


  BackgroundFetchSettledFetch();

  BackgroundFetchSettledFetch(
      ::blink::mojom::FetchAPIRequestPtr request,
      ::blink::mojom::FetchAPIResponsePtr response);

  ~BackgroundFetchSettledFetch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchSettledFetchPtr>
  BackgroundFetchSettledFetchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchSettledFetch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchSettledFetch::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchSettledFetch::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchSettledFetch_UnserializedMessageContext<
            UserType, BackgroundFetchSettledFetch::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchSettledFetch::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchSettledFetch::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchSettledFetch_UnserializedMessageContext<
            UserType, BackgroundFetchSettledFetch::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchSettledFetch::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::mojom::FetchAPIRequestPtr request;
  
  ::blink::mojom::FetchAPIResponsePtr response;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchSettledFetch);
};





class BLINK_COMMON_EXPORT BackgroundFetchOptions {
 public:
  using DataView = BackgroundFetchOptionsDataView;
  using Data_ = internal::BackgroundFetchOptions_Data;

  template <typename... Args>
  static BackgroundFetchOptionsPtr New(Args&&... args) {
    return BackgroundFetchOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchOptionsPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchOptions>::Convert(*this);
  }


  BackgroundFetchOptions();

  BackgroundFetchOptions(
      const std::vector<::blink::Manifest::ImageResource>& icons,
      uint64_t download_total,
      const std::string& title);

  ~BackgroundFetchOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchOptionsPtr>
  BackgroundFetchOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchOptions_UnserializedMessageContext<
            UserType, BackgroundFetchOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchOptions_UnserializedMessageContext<
            UserType, BackgroundFetchOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<::blink::Manifest::ImageResource> icons;
  
  uint64_t download_total;
  
  std::string title;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT BackgroundFetchRegistrationData {
 public:
  using DataView = BackgroundFetchRegistrationDataDataView;
  using Data_ = internal::BackgroundFetchRegistrationData_Data;

  template <typename... Args>
  static BackgroundFetchRegistrationDataPtr New(Args&&... args) {
    return BackgroundFetchRegistrationDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchRegistrationDataPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchRegistrationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchRegistrationData>::Convert(*this);
  }


  BackgroundFetchRegistrationData();

  BackgroundFetchRegistrationData(
      const std::string& developer_id,
      uint64_t upload_total,
      uint64_t uploaded,
      uint64_t download_total,
      uint64_t downloaded,
      BackgroundFetchResult result,
      BackgroundFetchFailureReason failure_reason);

  ~BackgroundFetchRegistrationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchRegistrationDataPtr>
  BackgroundFetchRegistrationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchRegistrationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchRegistrationData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchRegistrationData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchRegistrationData_UnserializedMessageContext<
            UserType, BackgroundFetchRegistrationData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchRegistrationData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchRegistrationData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchRegistrationData_UnserializedMessageContext<
            UserType, BackgroundFetchRegistrationData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchRegistrationData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string developer_id;
  
  uint64_t upload_total;
  
  uint64_t uploaded;
  
  uint64_t download_total;
  
  uint64_t downloaded;
  
  BackgroundFetchResult result;
  
  BackgroundFetchFailureReason failure_reason;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT BackgroundFetchRegistration {
 public:
  using DataView = BackgroundFetchRegistrationDataView;
  using Data_ = internal::BackgroundFetchRegistration_Data;

  template <typename... Args>
  static BackgroundFetchRegistrationPtr New(Args&&... args) {
    return BackgroundFetchRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BackgroundFetchRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<BackgroundFetchRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BackgroundFetchRegistration>::Convert(*this);
  }


  BackgroundFetchRegistration();

  BackgroundFetchRegistration(
      BackgroundFetchRegistrationDataPtr registration_data,
      BackgroundFetchRegistrationServicePtrInfo registration_interface);

  ~BackgroundFetchRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BackgroundFetchRegistrationPtr>
  BackgroundFetchRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BackgroundFetchRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BackgroundFetchRegistration::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BackgroundFetchRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BackgroundFetchRegistration_UnserializedMessageContext<
            UserType, BackgroundFetchRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BackgroundFetchRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BackgroundFetchRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BackgroundFetchRegistration_UnserializedMessageContext<
            UserType, BackgroundFetchRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BackgroundFetchRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  BackgroundFetchRegistrationDataPtr registration_data;
  
  BackgroundFetchRegistrationServicePtrInfo registration_interface;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchRegistration);
};


template <typename StructPtrType>
BackgroundFetchSettledFetchPtr BackgroundFetchSettledFetch::Clone() const {
  return New(
      mojo::Clone(request),
      mojo::Clone(response)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchSettledFetch>::value>::type*>
bool BackgroundFetchSettledFetch::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->response, other_struct.response))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundFetchOptionsPtr BackgroundFetchOptions::Clone() const {
  return New(
      mojo::Clone(icons),
      mojo::Clone(download_total),
      mojo::Clone(title)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchOptions>::value>::type*>
bool BackgroundFetchOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->icons, other_struct.icons))
    return false;
  if (!mojo::Equals(this->download_total, other_struct.download_total))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundFetchRegistrationDataPtr BackgroundFetchRegistrationData::Clone() const {
  return New(
      mojo::Clone(developer_id),
      mojo::Clone(upload_total),
      mojo::Clone(uploaded),
      mojo::Clone(download_total),
      mojo::Clone(downloaded),
      mojo::Clone(result),
      mojo::Clone(failure_reason)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchRegistrationData>::value>::type*>
bool BackgroundFetchRegistrationData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->developer_id, other_struct.developer_id))
    return false;
  if (!mojo::Equals(this->upload_total, other_struct.upload_total))
    return false;
  if (!mojo::Equals(this->uploaded, other_struct.uploaded))
    return false;
  if (!mojo::Equals(this->download_total, other_struct.download_total))
    return false;
  if (!mojo::Equals(this->downloaded, other_struct.downloaded))
    return false;
  if (!mojo::Equals(this->result, other_struct.result))
    return false;
  if (!mojo::Equals(this->failure_reason, other_struct.failure_reason))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundFetchRegistrationPtr BackgroundFetchRegistration::Clone() const {
  return New(
      mojo::Clone(registration_data),
      mojo::Clone(registration_interface)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchRegistration>::value>::type*>
bool BackgroundFetchRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->registration_data, other_struct.registration_data))
    return false;
  if (!mojo::Equals(this->registration_interface, other_struct.registration_interface))
    return false;
  return true;
}
template <typename StructPtrType>
BackgroundFetchUkmDataPtr BackgroundFetchUkmData::Clone() const {
  return New(
      mojo::Clone(ideal_to_chosen_icon_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BackgroundFetchUkmData>::value>::type*>
bool BackgroundFetchUkmData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ideal_to_chosen_icon_size, other_struct.ideal_to_chosen_icon_size))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::BackgroundFetchSettledFetch::DataView,
                                         ::blink::mojom::BackgroundFetchSettledFetchPtr> {
  static bool IsNull(const ::blink::mojom::BackgroundFetchSettledFetchPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::BackgroundFetchSettledFetchPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::BackgroundFetchSettledFetch::request)& request(
       ::blink::mojom::BackgroundFetchSettledFetchPtr& input) {
    return input->request;
  }

  static  decltype(::blink::mojom::BackgroundFetchSettledFetch::response)& response(
       ::blink::mojom::BackgroundFetchSettledFetchPtr& input) {
    return input->response;
  }

  static bool Read(::blink::mojom::BackgroundFetchSettledFetch::DataView input, ::blink::mojom::BackgroundFetchSettledFetchPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::BackgroundFetchOptions::DataView,
                                         ::blink::mojom::BackgroundFetchOptionsPtr> {
  static bool IsNull(const ::blink::mojom::BackgroundFetchOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::BackgroundFetchOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::BackgroundFetchOptions::icons)& icons(
      const ::blink::mojom::BackgroundFetchOptionsPtr& input) {
    return input->icons;
  }

  static decltype(::blink::mojom::BackgroundFetchOptions::download_total) download_total(
      const ::blink::mojom::BackgroundFetchOptionsPtr& input) {
    return input->download_total;
  }

  static const decltype(::blink::mojom::BackgroundFetchOptions::title)& title(
      const ::blink::mojom::BackgroundFetchOptionsPtr& input) {
    return input->title;
  }

  static bool Read(::blink::mojom::BackgroundFetchOptions::DataView input, ::blink::mojom::BackgroundFetchOptionsPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::BackgroundFetchRegistrationData::DataView,
                                         ::blink::mojom::BackgroundFetchRegistrationDataPtr> {
  static bool IsNull(const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::BackgroundFetchRegistrationDataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::BackgroundFetchRegistrationData::developer_id)& developer_id(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->developer_id;
  }

  static decltype(::blink::mojom::BackgroundFetchRegistrationData::upload_total) upload_total(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->upload_total;
  }

  static decltype(::blink::mojom::BackgroundFetchRegistrationData::uploaded) uploaded(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->uploaded;
  }

  static decltype(::blink::mojom::BackgroundFetchRegistrationData::download_total) download_total(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->download_total;
  }

  static decltype(::blink::mojom::BackgroundFetchRegistrationData::downloaded) downloaded(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->downloaded;
  }

  static decltype(::blink::mojom::BackgroundFetchRegistrationData::result) result(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->result;
  }

  static decltype(::blink::mojom::BackgroundFetchRegistrationData::failure_reason) failure_reason(
      const ::blink::mojom::BackgroundFetchRegistrationDataPtr& input) {
    return input->failure_reason;
  }

  static bool Read(::blink::mojom::BackgroundFetchRegistrationData::DataView input, ::blink::mojom::BackgroundFetchRegistrationDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::BackgroundFetchRegistration::DataView,
                                         ::blink::mojom::BackgroundFetchRegistrationPtr> {
  static bool IsNull(const ::blink::mojom::BackgroundFetchRegistrationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::BackgroundFetchRegistrationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::BackgroundFetchRegistration::registration_data)& registration_data(
      const ::blink::mojom::BackgroundFetchRegistrationPtr& input) {
    return input->registration_data;
  }

  static  decltype(::blink::mojom::BackgroundFetchRegistration::registration_interface)& registration_interface(
       ::blink::mojom::BackgroundFetchRegistrationPtr& input) {
    return input->registration_interface;
  }

  static bool Read(::blink::mojom::BackgroundFetchRegistration::DataView input, ::blink::mojom::BackgroundFetchRegistrationPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::BackgroundFetchUkmData::DataView,
                                         ::blink::mojom::BackgroundFetchUkmDataPtr> {
  static bool IsNull(const ::blink::mojom::BackgroundFetchUkmDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::BackgroundFetchUkmDataPtr* output) { output->reset(); }

  static decltype(::blink::mojom::BackgroundFetchUkmData::ideal_to_chosen_icon_size) ideal_to_chosen_icon_size(
      const ::blink::mojom::BackgroundFetchUkmDataPtr& input) {
    return input->ideal_to_chosen_icon_size;
  }

  static bool Read(::blink::mojom::BackgroundFetchUkmData::DataView input, ::blink::mojom::BackgroundFetchUkmDataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_H_