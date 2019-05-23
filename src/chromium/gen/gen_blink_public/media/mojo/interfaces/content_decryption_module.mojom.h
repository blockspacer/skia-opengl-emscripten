// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_H_

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
#include "media/mojo/interfaces/content_decryption_module.mojom-shared.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-forward.h"
#include "media/mojo/interfaces/decryptor.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "media/base/cdm_config.h"
#include "media/base/cdm_key_information.h"
#include "media/base/cdm_promise.h"
#include "media/base/content_decryption_module.h"
#include "media/base/eme_constants.h"




namespace media {
namespace mojom {

class ContentDecryptionModuleProxy;

template <typename ImplRefTraits>
class ContentDecryptionModuleStub;

class ContentDecryptionModuleRequestValidator;
class ContentDecryptionModuleResponseValidator;


class  ContentDecryptionModule
    : public ContentDecryptionModuleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ContentDecryptionModuleInterfaceBase;
  using Proxy_ = ContentDecryptionModuleProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContentDecryptionModuleStub<ImplRefTraits>;

  using RequestValidator_ = ContentDecryptionModuleRequestValidator;
  using ResponseValidator_ = ContentDecryptionModuleResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kInitializeMinVersion = 0,
    kSetServerCertificateMinVersion = 0,
    kGetStatusForPolicyMinVersion = 0,
    kCreateSessionAndGenerateRequestMinVersion = 0,
    kLoadSessionMinVersion = 0,
    kUpdateSessionMinVersion = 0,
    kCloseSessionMinVersion = 0,
    kRemoveSessionMinVersion = 0,
  };
  virtual ~ContentDecryptionModule() {}

  
  virtual void SetClient(ContentDecryptionModuleClientAssociatedPtrInfo client) = 0;


  using InitializeCallback = base::OnceCallback<void(CdmPromiseResultPtr, int32_t, ::media::mojom::DecryptorPtr)>;
  
  virtual void Initialize(const std::string& key_system, const url::Origin& security_origin, const media::CdmConfig& cdm_config, InitializeCallback callback) = 0;


  using SetServerCertificateCallback = base::OnceCallback<void(CdmPromiseResultPtr)>;
  
  virtual void SetServerCertificate(const std::vector<uint8_t>& certificate_data, SetServerCertificateCallback callback) = 0;


  using GetStatusForPolicyCallback = base::OnceCallback<void(CdmPromiseResultPtr, media::CdmKeyInformation::KeyStatus)>;
  
  virtual void GetStatusForPolicy(media::HdcpVersion min_hdcp_version, GetStatusForPolicyCallback callback) = 0;


  using CreateSessionAndGenerateRequestCallback = base::OnceCallback<void(CdmPromiseResultPtr, const std::string&)>;
  
  virtual void CreateSessionAndGenerateRequest(media::CdmSessionType session_type, media::EmeInitDataType init_data_type, const std::vector<uint8_t>& init_data, CreateSessionAndGenerateRequestCallback callback) = 0;


  using LoadSessionCallback = base::OnceCallback<void(CdmPromiseResultPtr, const std::string&)>;
  
  virtual void LoadSession(media::CdmSessionType session_type, const std::string& session_id, LoadSessionCallback callback) = 0;


  using UpdateSessionCallback = base::OnceCallback<void(CdmPromiseResultPtr)>;
  
  virtual void UpdateSession(const std::string& session_id, const std::vector<uint8_t>& response, UpdateSessionCallback callback) = 0;


  using CloseSessionCallback = base::OnceCallback<void(CdmPromiseResultPtr)>;
  
  virtual void CloseSession(const std::string& session_id, CloseSessionCallback callback) = 0;


  using RemoveSessionCallback = base::OnceCallback<void(CdmPromiseResultPtr)>;
  
  virtual void RemoveSession(const std::string& session_id, RemoveSessionCallback callback) = 0;
};

class ContentDecryptionModuleClientProxy;

template <typename ImplRefTraits>
class ContentDecryptionModuleClientStub;

class ContentDecryptionModuleClientRequestValidator;


class  ContentDecryptionModuleClient
    : public ContentDecryptionModuleClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ContentDecryptionModuleClientInterfaceBase;
  using Proxy_ = ContentDecryptionModuleClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContentDecryptionModuleClientStub<ImplRefTraits>;

  using RequestValidator_ = ContentDecryptionModuleClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSessionMessageMinVersion = 0,
    kOnSessionClosedMinVersion = 0,
    kOnSessionKeysChangeMinVersion = 0,
    kOnSessionExpirationUpdateMinVersion = 0,
  };
  virtual ~ContentDecryptionModuleClient() {}

  
  virtual void OnSessionMessage(const std::string& session_id, media::CdmMessageType message_type, const std::vector<uint8_t>& message) = 0;

  
  virtual void OnSessionClosed(const std::string& session_id) = 0;

  
  virtual void OnSessionKeysChange(const std::string& session_id, bool has_additional_usable_key, std::vector<std::unique_ptr<media::CdmKeyInformation>> keys_info) = 0;

  
  virtual void OnSessionExpirationUpdate(const std::string& session_id, double new_expiry_time_sec) = 0;
};

class CdmFactoryProxy;

template <typename ImplRefTraits>
class CdmFactoryStub;

class CdmFactoryRequestValidator;


class  CdmFactory
    : public CdmFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CdmFactoryInterfaceBase;
  using Proxy_ = CdmFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmFactoryStub<ImplRefTraits>;

  using RequestValidator_ = CdmFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateCdmMinVersion = 0,
  };
  virtual ~CdmFactory() {}

  
  virtual void CreateCdm(const std::string& key_system, ContentDecryptionModuleRequest cdm) = 0;
};

class  ContentDecryptionModuleProxy
    : public ContentDecryptionModule {
 public:
  using InterfaceType = ContentDecryptionModule;

  explicit ContentDecryptionModuleProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(ContentDecryptionModuleClientAssociatedPtrInfo client) final;
  void Initialize(const std::string& key_system, const url::Origin& security_origin, const media::CdmConfig& cdm_config, InitializeCallback callback) final;
  void SetServerCertificate(const std::vector<uint8_t>& certificate_data, SetServerCertificateCallback callback) final;
  void GetStatusForPolicy(media::HdcpVersion min_hdcp_version, GetStatusForPolicyCallback callback) final;
  void CreateSessionAndGenerateRequest(media::CdmSessionType session_type, media::EmeInitDataType init_data_type, const std::vector<uint8_t>& init_data, CreateSessionAndGenerateRequestCallback callback) final;
  void LoadSession(media::CdmSessionType session_type, const std::string& session_id, LoadSessionCallback callback) final;
  void UpdateSession(const std::string& session_id, const std::vector<uint8_t>& response, UpdateSessionCallback callback) final;
  void CloseSession(const std::string& session_id, CloseSessionCallback callback) final;
  void RemoveSession(const std::string& session_id, RemoveSessionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ContentDecryptionModuleClientProxy
    : public ContentDecryptionModuleClient {
 public:
  using InterfaceType = ContentDecryptionModuleClient;

  explicit ContentDecryptionModuleClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSessionMessage(const std::string& session_id, media::CdmMessageType message_type, const std::vector<uint8_t>& message) final;
  void OnSessionClosed(const std::string& session_id) final;
  void OnSessionKeysChange(const std::string& session_id, bool has_additional_usable_key, std::vector<std::unique_ptr<media::CdmKeyInformation>> keys_info) final;
  void OnSessionExpirationUpdate(const std::string& session_id, double new_expiry_time_sec) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CdmFactoryProxy
    : public CdmFactory {
 public:
  using InterfaceType = CdmFactory;

  explicit CdmFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateCdm(const std::string& key_system, ContentDecryptionModuleRequest cdm) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ContentDecryptionModuleStubDispatch {
 public:
  static bool Accept(ContentDecryptionModule* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContentDecryptionModule* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContentDecryptionModule>>
class ContentDecryptionModuleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContentDecryptionModuleStub() {}
  ~ContentDecryptionModuleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentDecryptionModuleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentDecryptionModuleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ContentDecryptionModuleClientStubDispatch {
 public:
  static bool Accept(ContentDecryptionModuleClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContentDecryptionModuleClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContentDecryptionModuleClient>>
class ContentDecryptionModuleClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContentDecryptionModuleClientStub() {}
  ~ContentDecryptionModuleClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentDecryptionModuleClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContentDecryptionModuleClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmFactoryStubDispatch {
 public:
  static bool Accept(CdmFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmFactory>>
class CdmFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmFactoryStub() {}
  ~CdmFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ContentDecryptionModuleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ContentDecryptionModuleClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ContentDecryptionModuleResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class  CdmPromiseResult {
 public:
  using DataView = CdmPromiseResultDataView;
  using Data_ = internal::CdmPromiseResult_Data;
  using Exception = CdmPromiseResult_Exception;

  template <typename... Args>
  static CdmPromiseResultPtr New(Args&&... args) {
    return CdmPromiseResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CdmPromiseResultPtr From(const U& u) {
    return mojo::TypeConverter<CdmPromiseResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CdmPromiseResult>::Convert(*this);
  }


  CdmPromiseResult();

  CdmPromiseResult(
      bool success,
      media::CdmPromise::Exception exception,
      uint32_t system_code,
      const std::string& error_message);

  ~CdmPromiseResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CdmPromiseResultPtr>
  CdmPromiseResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CdmPromiseResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CdmPromiseResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CdmPromiseResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CdmPromiseResult_UnserializedMessageContext<
            UserType, CdmPromiseResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CdmPromiseResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CdmPromiseResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CdmPromiseResult_UnserializedMessageContext<
            UserType, CdmPromiseResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CdmPromiseResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool success;
  
  media::CdmPromise::Exception exception;
  
  uint32_t system_code;
  
  std::string error_message;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class  CdmKeyInformation {
 public:
  using DataView = CdmKeyInformationDataView;
  using Data_ = internal::CdmKeyInformation_Data;

  template <typename... Args>
  static CdmKeyInformationPtr New(Args&&... args) {
    return CdmKeyInformationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CdmKeyInformationPtr From(const U& u) {
    return mojo::TypeConverter<CdmKeyInformationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CdmKeyInformation>::Convert(*this);
  }


  CdmKeyInformation();

  CdmKeyInformation(
      const std::vector<uint8_t>& key_id,
      media::CdmKeyInformation::KeyStatus status,
      uint32_t system_code);

  ~CdmKeyInformation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CdmKeyInformationPtr>
  CdmKeyInformationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CdmKeyInformation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CdmKeyInformation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CdmKeyInformation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CdmKeyInformation_UnserializedMessageContext<
            UserType, CdmKeyInformation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CdmKeyInformation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CdmKeyInformation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CdmKeyInformation_UnserializedMessageContext<
            UserType, CdmKeyInformation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CdmKeyInformation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> key_id;
  
  media::CdmKeyInformation::KeyStatus status;
  
  uint32_t system_code;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CdmPromiseResultPtr CdmPromiseResult::Clone() const {
  return New(
      mojo::Clone(success),
      mojo::Clone(exception),
      mojo::Clone(system_code),
      mojo::Clone(error_message)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CdmPromiseResult>::value>::type*>
bool CdmPromiseResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->success, other_struct.success))
    return false;
  if (!mojo::Equals(this->exception, other_struct.exception))
    return false;
  if (!mojo::Equals(this->system_code, other_struct.system_code))
    return false;
  if (!mojo::Equals(this->error_message, other_struct.error_message))
    return false;
  return true;
}
template <typename StructPtrType>
CdmKeyInformationPtr CdmKeyInformation::Clone() const {
  return New(
      mojo::Clone(key_id),
      mojo::Clone(status),
      mojo::Clone(system_code)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CdmKeyInformation>::value>::type*>
bool CdmKeyInformation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key_id, other_struct.key_id))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->system_code, other_struct.system_code))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::CdmPromiseResult::DataView,
                                         ::media::mojom::CdmPromiseResultPtr> {
  static bool IsNull(const ::media::mojom::CdmPromiseResultPtr& input) { return !input; }
  static void SetToNull(::media::mojom::CdmPromiseResultPtr* output) { output->reset(); }

  static decltype(::media::mojom::CdmPromiseResult::success) success(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->success;
  }

  static decltype(::media::mojom::CdmPromiseResult::exception) exception(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->exception;
  }

  static decltype(::media::mojom::CdmPromiseResult::system_code) system_code(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->system_code;
  }

  static const decltype(::media::mojom::CdmPromiseResult::error_message)& error_message(
      const ::media::mojom::CdmPromiseResultPtr& input) {
    return input->error_message;
  }

  static bool Read(::media::mojom::CdmPromiseResult::DataView input, ::media::mojom::CdmPromiseResultPtr* output);
};


template <>
struct  StructTraits<::media::mojom::CdmKeyInformation::DataView,
                                         ::media::mojom::CdmKeyInformationPtr> {
  static bool IsNull(const ::media::mojom::CdmKeyInformationPtr& input) { return !input; }
  static void SetToNull(::media::mojom::CdmKeyInformationPtr* output) { output->reset(); }

  static const decltype(::media::mojom::CdmKeyInformation::key_id)& key_id(
      const ::media::mojom::CdmKeyInformationPtr& input) {
    return input->key_id;
  }

  static decltype(::media::mojom::CdmKeyInformation::status) status(
      const ::media::mojom::CdmKeyInformationPtr& input) {
    return input->status;
  }

  static decltype(::media::mojom::CdmKeyInformation::system_code) system_code(
      const ::media::mojom::CdmKeyInformationPtr& input) {
    return input->system_code;
  }

  static bool Read(::media::mojom::CdmKeyInformation::DataView input, ::media::mojom::CdmKeyInformationPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_H_