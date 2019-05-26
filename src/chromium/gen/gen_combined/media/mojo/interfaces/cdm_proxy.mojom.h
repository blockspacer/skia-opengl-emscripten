// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_H_

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
#include "media/mojo/interfaces/cdm_proxy.mojom-shared.h"
#include "media/mojo/interfaces/cdm_proxy.mojom-forward.h"
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
#include "media/cdm/cdm_proxy.h"




namespace media {
namespace mojom {

class CdmProxyProxy;

template <typename ImplRefTraits>
class CdmProxyStub;

class CdmProxyRequestValidator;
class CdmProxyResponseValidator;


class  CdmProxy
    : public CdmProxyInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CdmProxyInterfaceBase;
  using Proxy_ = CdmProxyProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmProxyStub<ImplRefTraits>;

  using RequestValidator_ = CdmProxyRequestValidator;
  using ResponseValidator_ = CdmProxyResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kProcessMinVersion = 0,
    kCreateMediaCryptoSessionMinVersion = 0,
    kSetKeyMinVersion = 0,
    kRemoveKeyMinVersion = 0,
  };
  
  using Status = CdmProxy_Status;
  
  using Protocol = CdmProxy_Protocol;
  
  using Function = CdmProxy_Function;
  
  using KeyType = CdmProxy_KeyType;
  virtual ~CdmProxy() {}


  using InitializeCallback = base::OnceCallback<void(media::CdmProxy::Status, media::CdmProxy::Protocol, uint32_t, int32_t)>;
  
  virtual void Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) = 0;


  using ProcessCallback = base::OnceCallback<void(media::CdmProxy::Status, const std::vector<uint8_t>&)>;
  
  virtual void Process(media::CdmProxy::Function function, uint32_t crypto_session_id, const std::vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) = 0;


  using CreateMediaCryptoSessionCallback = base::OnceCallback<void(media::CdmProxy::Status, uint32_t, uint64_t)>;
  
  virtual void CreateMediaCryptoSession(const std::vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) = 0;


  using SetKeyCallback = base::OnceCallback<void(media::CdmProxy::Status)>;
  
  virtual void SetKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, media::CdmProxy::KeyType key_type, const std::vector<uint8_t>& key_blob, SetKeyCallback callback) = 0;


  using RemoveKeyCallback = base::OnceCallback<void(media::CdmProxy::Status)>;
  
  virtual void RemoveKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, RemoveKeyCallback callback) = 0;
};

class CdmProxyClientProxy;

template <typename ImplRefTraits>
class CdmProxyClientStub;

class CdmProxyClientRequestValidator;


class  CdmProxyClient
    : public CdmProxyClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CdmProxyClientInterfaceBase;
  using Proxy_ = CdmProxyClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmProxyClientStub<ImplRefTraits>;

  using RequestValidator_ = CdmProxyClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kNotifyHardwareResetMinVersion = 0,
  };
  virtual ~CdmProxyClient() {}

  
  virtual void NotifyHardwareReset() = 0;
};

class  CdmProxyProxy
    : public CdmProxy {
 public:
  using InterfaceType = CdmProxy;

  explicit CdmProxyProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(CdmProxyClientAssociatedPtrInfo client, InitializeCallback callback) final;
  void Process(media::CdmProxy::Function function, uint32_t crypto_session_id, const std::vector<uint8_t>& input_data, uint32_t output_data_size, ProcessCallback callback) final;
  void CreateMediaCryptoSession(const std::vector<uint8_t>& input_data, CreateMediaCryptoSessionCallback callback) final;
  void SetKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, media::CdmProxy::KeyType key_type, const std::vector<uint8_t>& key_blob, SetKeyCallback callback) final;
  void RemoveKey(uint32_t crypto_session_id, const std::vector<uint8_t>& key_id, RemoveKeyCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CdmProxyClientProxy
    : public CdmProxyClient {
 public:
  using InterfaceType = CdmProxyClient;

  explicit CdmProxyClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void NotifyHardwareReset() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CdmProxyStubDispatch {
 public:
  static bool Accept(CdmProxy* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmProxy* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmProxy>>
class CdmProxyStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmProxyStub() {}
  ~CdmProxyStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmProxyClientStubDispatch {
 public:
  static bool Accept(CdmProxyClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmProxyClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmProxyClient>>
class CdmProxyClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmProxyClientStub() {}
  ~CdmProxyClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmProxyClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmProxyRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmProxyClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CdmProxyResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CDM_PROXY_MOJOM_H_