// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_H_

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
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "services/network/public/mojom/cookie_manager.mojom-forward.h"
#include "components/content_settings/core/common/content_settings.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
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
#if defined(ENABLE_GIPC)
#include "ipc/ipc_message_utils.h"
#endif // ENABLE_GIPC
#include "net/cookies/canonical_cookie.h"
#include "net/cookies/cookie_constants.h"
#include "net/cookies/cookie_options.h"




namespace network {
namespace mojom {

class CookieChangeListenerProxy;

template <typename ImplRefTraits>
class CookieChangeListenerStub;

class CookieChangeListenerRequestValidator;


class  CookieChangeListener
    : public CookieChangeListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CookieChangeListenerInterfaceBase;
  using Proxy_ = CookieChangeListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = CookieChangeListenerStub<ImplRefTraits>;

  using RequestValidator_ = CookieChangeListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCookieChangeMinVersion = 0,
  };
  virtual ~CookieChangeListener() {}

  
  virtual void OnCookieChange(const net::CanonicalCookie& cookie, CookieChangeCause cause) = 0;
};

class CookieManagerProxy;

template <typename ImplRefTraits>
class CookieManagerStub;

class CookieManagerRequestValidator;
class CookieManagerResponseValidator;


class  CookieManager
    : public CookieManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CookieManagerInterfaceBase;
  using Proxy_ = CookieManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = CookieManagerStub<ImplRefTraits>;

  using RequestValidator_ = CookieManagerRequestValidator;
  using ResponseValidator_ = CookieManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetAllCookiesMinVersion = 0,
    kGetCookieListMinVersion = 0,
    kSetCanonicalCookieMinVersion = 0,
    kDeleteCanonicalCookieMinVersion = 0,
    kDeleteCookiesMinVersion = 0,
    kAddCookieChangeListenerMinVersion = 0,
    kAddGlobalChangeListenerMinVersion = 0,
    kCloneInterfaceMinVersion = 0,
    kFlushCookieStoreMinVersion = 0,
    kAllowFileSchemeCookiesMinVersion = 0,
    kSetContentSettingsMinVersion = 0,
    kSetForceKeepSessionStateMinVersion = 0,
    kBlockThirdPartyCookiesMinVersion = 0,
  };
  virtual ~CookieManager() {}


  using GetAllCookiesCallback = base::OnceCallback<void(const std::vector<net::CanonicalCookie>&)>;
  
  virtual void GetAllCookies(GetAllCookiesCallback callback) = 0;


  using GetCookieListCallback = base::OnceCallback<void(const std::vector<net::CanonicalCookie>&, const std::vector<net::CookieWithStatus>&)>;
  
  virtual void GetCookieList(const GURL& url, const net::CookieOptions& cookie_options, GetCookieListCallback callback) = 0;


  using SetCanonicalCookieCallback = base::OnceCallback<void(net::CanonicalCookie::CookieInclusionStatus)>;
  
  virtual void SetCanonicalCookie(const net::CanonicalCookie& cookie, const std::string& source_scheme, const net::CookieOptions& cookie_options, SetCanonicalCookieCallback callback) = 0;


  using DeleteCanonicalCookieCallback = base::OnceCallback<void(bool)>;
  
  virtual void DeleteCanonicalCookie(const net::CanonicalCookie& cookie, DeleteCanonicalCookieCallback callback) = 0;


  using DeleteCookiesCallback = base::OnceCallback<void(uint32_t)>;
  
  virtual void DeleteCookies(CookieDeletionFilterPtr filter, DeleteCookiesCallback callback) = 0;

  
  virtual void AddCookieChangeListener(const GURL& url, const std::string& name, CookieChangeListenerPtr listener) = 0;

  
  virtual void AddGlobalChangeListener(CookieChangeListenerPtr notification_pointer) = 0;

  
  virtual void CloneInterface(CookieManagerRequest new_interface) = 0;


  using FlushCookieStoreCallback = base::OnceCallback<void()>;
  
  virtual void FlushCookieStore(FlushCookieStoreCallback callback) = 0;


  using AllowFileSchemeCookiesCallback = base::OnceCallback<void(bool)>;
  
  virtual void AllowFileSchemeCookies(bool allow, AllowFileSchemeCookiesCallback callback) = 0;

  
  virtual void SetContentSettings(const std::vector<::ContentSettingPatternSource>& settings) = 0;

  
  virtual void SetForceKeepSessionState() = 0;

  
  virtual void BlockThirdPartyCookies(bool block) = 0;
};

class  CookieChangeListenerProxy
    : public CookieChangeListener {
 public:
  using InterfaceType = CookieChangeListener;

  explicit CookieChangeListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCookieChange(const net::CanonicalCookie& cookie, CookieChangeCause cause) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  CookieManagerProxy
    : public CookieManager {
 public:
  using InterfaceType = CookieManager;

  explicit CookieManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAllCookies(GetAllCookiesCallback callback) final;
  void GetCookieList(const GURL& url, const net::CookieOptions& cookie_options, GetCookieListCallback callback) final;
  void SetCanonicalCookie(const net::CanonicalCookie& cookie, const std::string& source_scheme, const net::CookieOptions& cookie_options, SetCanonicalCookieCallback callback) final;
  void DeleteCanonicalCookie(const net::CanonicalCookie& cookie, DeleteCanonicalCookieCallback callback) final;
  void DeleteCookies(CookieDeletionFilterPtr filter, DeleteCookiesCallback callback) final;
  void AddCookieChangeListener(const GURL& url, const std::string& name, CookieChangeListenerPtr listener) final;
  void AddGlobalChangeListener(CookieChangeListenerPtr notification_pointer) final;
  void CloneInterface(CookieManagerRequest new_interface) final;
  void FlushCookieStore(FlushCookieStoreCallback callback) final;
  void AllowFileSchemeCookies(bool allow, AllowFileSchemeCookiesCallback callback) final;
  void SetContentSettings(const std::vector<::ContentSettingPatternSource>& settings) final;
  void SetForceKeepSessionState() final;
  void BlockThirdPartyCookies(bool block) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CookieChangeListenerStubDispatch {
 public:
  static bool Accept(CookieChangeListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CookieChangeListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CookieChangeListener>>
class CookieChangeListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CookieChangeListenerStub() {}
  ~CookieChangeListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieChangeListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieChangeListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CookieManagerStubDispatch {
 public:
  static bool Accept(CookieManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CookieManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CookieManager>>
class CookieManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CookieManagerStub() {}
  ~CookieManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CookieChangeListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CookieManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CookieManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};












class  CookieManagerParams {
 public:
  using DataView = CookieManagerParamsDataView;
  using Data_ = internal::CookieManagerParams_Data;

  template <typename... Args>
  static CookieManagerParamsPtr New(Args&&... args) {
    return CookieManagerParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieManagerParamsPtr From(const U& u) {
    return mojo::TypeConverter<CookieManagerParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieManagerParams>::Convert(*this);
  }


  CookieManagerParams();

  CookieManagerParams(
      bool block_third_party_cookies,
      const std::vector<::ContentSettingPatternSource>& settings,
      const std::vector<std::string>& secure_origin_cookies_allowed_schemes,
      const std::vector<std::string>& matching_scheme_cookies_allowed_schemes,
      const std::vector<std::string>& third_party_cookies_allowed_schemes,
      bool allow_file_scheme_cookies);

  ~CookieManagerParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieManagerParamsPtr>
  CookieManagerParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CookieManagerParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieManagerParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieManagerParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieManagerParams_UnserializedMessageContext<
            UserType, CookieManagerParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CookieManagerParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CookieManagerParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieManagerParams_UnserializedMessageContext<
            UserType, CookieManagerParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieManagerParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool block_third_party_cookies;
  
  std::vector<::ContentSettingPatternSource> settings;
  
  std::vector<std::string> secure_origin_cookies_allowed_schemes;
  
  std::vector<std::string> matching_scheme_cookies_allowed_schemes;
  
  std::vector<std::string> third_party_cookies_allowed_schemes;
  
  bool allow_file_scheme_cookies;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CookieOptions {
 public:
  using DataView = CookieOptionsDataView;
  using Data_ = internal::CookieOptions_Data;

  template <typename... Args>
  static CookieOptionsPtr New(Args&&... args) {
    return CookieOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieOptionsPtr From(const U& u) {
    return mojo::TypeConverter<CookieOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieOptions>::Convert(*this);
  }


  CookieOptions();

  CookieOptions(
      bool exclude_httponly,
      net::CookieOptions::SameSiteCookieContext same_site_cookie_context,
      bool update_access_time,
      base::Optional<base::Time> server_time,
      bool return_excluded_cookies);

  ~CookieOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieOptionsPtr>
  CookieOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CookieOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieOptions_UnserializedMessageContext<
            UserType, CookieOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CookieOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CookieOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieOptions_UnserializedMessageContext<
            UserType, CookieOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool exclude_httponly;
  
  net::CookieOptions::SameSiteCookieContext same_site_cookie_context;
  
  bool update_access_time;
  
  base::Optional<base::Time> server_time;
  
  bool return_excluded_cookies;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CanonicalCookie {
 public:
  using DataView = CanonicalCookieDataView;
  using Data_ = internal::CanonicalCookie_Data;

  template <typename... Args>
  static CanonicalCookiePtr New(Args&&... args) {
    return CanonicalCookiePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CanonicalCookiePtr From(const U& u) {
    return mojo::TypeConverter<CanonicalCookiePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CanonicalCookie>::Convert(*this);
  }


  CanonicalCookie();

  CanonicalCookie(
      const std::string& name,
      const std::string& value,
      const std::string& domain,
      const std::string& path,
      base::Time creation,
      base::Time expiry,
      base::Time last_access,
      bool secure,
      bool httponly,
      net::CookieSameSite site_restrictions,
      net::CookiePriority priority);

  ~CanonicalCookie();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CanonicalCookiePtr>
  CanonicalCookiePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CanonicalCookie>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CanonicalCookie::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CanonicalCookie::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CanonicalCookie_UnserializedMessageContext<
            UserType, CanonicalCookie::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CanonicalCookie::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CanonicalCookie::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CanonicalCookie_UnserializedMessageContext<
            UserType, CanonicalCookie::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CanonicalCookie::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  std::string value;
  
  std::string domain;
  
  std::string path;
  
  base::Time creation;
  
  base::Time expiry;
  
  base::Time last_access;
  
  bool secure;
  
  bool httponly;
  
  net::CookieSameSite site_restrictions;
  
  net::CookiePriority priority;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CookieWithStatus {
 public:
  using DataView = CookieWithStatusDataView;
  using Data_ = internal::CookieWithStatus_Data;

  template <typename... Args>
  static CookieWithStatusPtr New(Args&&... args) {
    return CookieWithStatusPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieWithStatusPtr From(const U& u) {
    return mojo::TypeConverter<CookieWithStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieWithStatus>::Convert(*this);
  }


  CookieWithStatus();

  CookieWithStatus(
      const net::CanonicalCookie& cookie,
      net::CanonicalCookie::CookieInclusionStatus status);

  ~CookieWithStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieWithStatusPtr>
  CookieWithStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CookieWithStatus>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieWithStatus::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieWithStatus::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieWithStatus_UnserializedMessageContext<
            UserType, CookieWithStatus::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CookieWithStatus::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CookieWithStatus::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieWithStatus_UnserializedMessageContext<
            UserType, CookieWithStatus::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieWithStatus::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::CanonicalCookie cookie;
  
  net::CanonicalCookie::CookieInclusionStatus status;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  CookieDeletionFilter {
 public:
  using DataView = CookieDeletionFilterDataView;
  using Data_ = internal::CookieDeletionFilter_Data;

  template <typename... Args>
  static CookieDeletionFilterPtr New(Args&&... args) {
    return CookieDeletionFilterPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieDeletionFilterPtr From(const U& u) {
    return mojo::TypeConverter<CookieDeletionFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieDeletionFilter>::Convert(*this);
  }


  CookieDeletionFilter();

  CookieDeletionFilter(
      base::Optional<base::Time> created_after_time,
      base::Optional<base::Time> created_before_time,
      const base::Optional<std::vector<std::string>>& excluding_domains,
      const base::Optional<std::vector<std::string>>& including_domains,
      const base::Optional<std::string>& cookie_name,
      const base::Optional<std::string>& host_name,
      const base::Optional<GURL>& url,
      CookieDeletionSessionControl session_control);

  ~CookieDeletionFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieDeletionFilterPtr>
  CookieDeletionFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CookieDeletionFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieDeletionFilter::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieDeletionFilter::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieDeletionFilter_UnserializedMessageContext<
            UserType, CookieDeletionFilter::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CookieDeletionFilter::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CookieDeletionFilter::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieDeletionFilter_UnserializedMessageContext<
            UserType, CookieDeletionFilter::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieDeletionFilter::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<base::Time> created_after_time;
  
  base::Optional<base::Time> created_before_time;
  
  base::Optional<std::vector<std::string>> excluding_domains;
  
  base::Optional<std::vector<std::string>> including_domains;
  
  base::Optional<std::string> cookie_name;
  
  base::Optional<std::string> host_name;
  
  base::Optional<GURL> url;
  
  CookieDeletionSessionControl session_control;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CookieManagerParamsPtr CookieManagerParams::Clone() const {
  return New(
      mojo::Clone(block_third_party_cookies),
      mojo::Clone(settings),
      mojo::Clone(secure_origin_cookies_allowed_schemes),
      mojo::Clone(matching_scheme_cookies_allowed_schemes),
      mojo::Clone(third_party_cookies_allowed_schemes),
      mojo::Clone(allow_file_scheme_cookies)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CookieManagerParams>::value>::type*>
bool CookieManagerParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->block_third_party_cookies, other_struct.block_third_party_cookies))
    return false;
  if (!mojo::Equals(this->settings, other_struct.settings))
    return false;
  if (!mojo::Equals(this->secure_origin_cookies_allowed_schemes, other_struct.secure_origin_cookies_allowed_schemes))
    return false;
  if (!mojo::Equals(this->matching_scheme_cookies_allowed_schemes, other_struct.matching_scheme_cookies_allowed_schemes))
    return false;
  if (!mojo::Equals(this->third_party_cookies_allowed_schemes, other_struct.third_party_cookies_allowed_schemes))
    return false;
  if (!mojo::Equals(this->allow_file_scheme_cookies, other_struct.allow_file_scheme_cookies))
    return false;
  return true;
}
template <typename StructPtrType>
CookieOptionsPtr CookieOptions::Clone() const {
  return New(
      mojo::Clone(exclude_httponly),
      mojo::Clone(same_site_cookie_context),
      mojo::Clone(update_access_time),
      mojo::Clone(server_time),
      mojo::Clone(return_excluded_cookies)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CookieOptions>::value>::type*>
bool CookieOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->exclude_httponly, other_struct.exclude_httponly))
    return false;
  if (!mojo::Equals(this->same_site_cookie_context, other_struct.same_site_cookie_context))
    return false;
  if (!mojo::Equals(this->update_access_time, other_struct.update_access_time))
    return false;
  if (!mojo::Equals(this->server_time, other_struct.server_time))
    return false;
  if (!mojo::Equals(this->return_excluded_cookies, other_struct.return_excluded_cookies))
    return false;
  return true;
}
template <typename StructPtrType>
CanonicalCookiePtr CanonicalCookie::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(value),
      mojo::Clone(domain),
      mojo::Clone(path),
      mojo::Clone(creation),
      mojo::Clone(expiry),
      mojo::Clone(last_access),
      mojo::Clone(secure),
      mojo::Clone(httponly),
      mojo::Clone(site_restrictions),
      mojo::Clone(priority)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CanonicalCookie>::value>::type*>
bool CanonicalCookie::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->domain, other_struct.domain))
    return false;
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->creation, other_struct.creation))
    return false;
  if (!mojo::Equals(this->expiry, other_struct.expiry))
    return false;
  if (!mojo::Equals(this->last_access, other_struct.last_access))
    return false;
  if (!mojo::Equals(this->secure, other_struct.secure))
    return false;
  if (!mojo::Equals(this->httponly, other_struct.httponly))
    return false;
  if (!mojo::Equals(this->site_restrictions, other_struct.site_restrictions))
    return false;
  if (!mojo::Equals(this->priority, other_struct.priority))
    return false;
  return true;
}
template <typename StructPtrType>
CookieWithStatusPtr CookieWithStatus::Clone() const {
  return New(
      mojo::Clone(cookie),
      mojo::Clone(status)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CookieWithStatus>::value>::type*>
bool CookieWithStatus::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->cookie, other_struct.cookie))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  return true;
}
template <typename StructPtrType>
CookieDeletionFilterPtr CookieDeletionFilter::Clone() const {
  return New(
      mojo::Clone(created_after_time),
      mojo::Clone(created_before_time),
      mojo::Clone(excluding_domains),
      mojo::Clone(including_domains),
      mojo::Clone(cookie_name),
      mojo::Clone(host_name),
      mojo::Clone(url),
      mojo::Clone(session_control)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CookieDeletionFilter>::value>::type*>
bool CookieDeletionFilter::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->created_after_time, other_struct.created_after_time))
    return false;
  if (!mojo::Equals(this->created_before_time, other_struct.created_before_time))
    return false;
  if (!mojo::Equals(this->excluding_domains, other_struct.excluding_domains))
    return false;
  if (!mojo::Equals(this->including_domains, other_struct.including_domains))
    return false;
  if (!mojo::Equals(this->cookie_name, other_struct.cookie_name))
    return false;
  if (!mojo::Equals(this->host_name, other_struct.host_name))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->session_control, other_struct.session_control))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::CookieManagerParams::DataView,
                                         ::network::mojom::CookieManagerParamsPtr> {
  static bool IsNull(const ::network::mojom::CookieManagerParamsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::CookieManagerParamsPtr* output) { output->reset(); }

  static decltype(::network::mojom::CookieManagerParams::block_third_party_cookies) block_third_party_cookies(
      const ::network::mojom::CookieManagerParamsPtr& input) {
    return input->block_third_party_cookies;
  }

  static const decltype(::network::mojom::CookieManagerParams::settings)& settings(
      const ::network::mojom::CookieManagerParamsPtr& input) {
    return input->settings;
  }

  static const decltype(::network::mojom::CookieManagerParams::secure_origin_cookies_allowed_schemes)& secure_origin_cookies_allowed_schemes(
      const ::network::mojom::CookieManagerParamsPtr& input) {
    return input->secure_origin_cookies_allowed_schemes;
  }

  static const decltype(::network::mojom::CookieManagerParams::matching_scheme_cookies_allowed_schemes)& matching_scheme_cookies_allowed_schemes(
      const ::network::mojom::CookieManagerParamsPtr& input) {
    return input->matching_scheme_cookies_allowed_schemes;
  }

  static const decltype(::network::mojom::CookieManagerParams::third_party_cookies_allowed_schemes)& third_party_cookies_allowed_schemes(
      const ::network::mojom::CookieManagerParamsPtr& input) {
    return input->third_party_cookies_allowed_schemes;
  }

  static decltype(::network::mojom::CookieManagerParams::allow_file_scheme_cookies) allow_file_scheme_cookies(
      const ::network::mojom::CookieManagerParamsPtr& input) {
    return input->allow_file_scheme_cookies;
  }

  static bool Read(::network::mojom::CookieManagerParams::DataView input, ::network::mojom::CookieManagerParamsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::CookieOptions::DataView,
                                         ::network::mojom::CookieOptionsPtr> {
  static bool IsNull(const ::network::mojom::CookieOptionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::CookieOptionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::CookieOptions::exclude_httponly) exclude_httponly(
      const ::network::mojom::CookieOptionsPtr& input) {
    return input->exclude_httponly;
  }

  static decltype(::network::mojom::CookieOptions::same_site_cookie_context) same_site_cookie_context(
      const ::network::mojom::CookieOptionsPtr& input) {
    return input->same_site_cookie_context;
  }

  static decltype(::network::mojom::CookieOptions::update_access_time) update_access_time(
      const ::network::mojom::CookieOptionsPtr& input) {
    return input->update_access_time;
  }

  static const decltype(::network::mojom::CookieOptions::server_time)& server_time(
      const ::network::mojom::CookieOptionsPtr& input) {
    return input->server_time;
  }

  static decltype(::network::mojom::CookieOptions::return_excluded_cookies) return_excluded_cookies(
      const ::network::mojom::CookieOptionsPtr& input) {
    return input->return_excluded_cookies;
  }

  static bool Read(::network::mojom::CookieOptions::DataView input, ::network::mojom::CookieOptionsPtr* output);
};


template <>
struct  StructTraits<::network::mojom::CanonicalCookie::DataView,
                                         ::network::mojom::CanonicalCookiePtr> {
  static bool IsNull(const ::network::mojom::CanonicalCookiePtr& input) { return !input; }
  static void SetToNull(::network::mojom::CanonicalCookiePtr* output) { output->reset(); }

  static const decltype(::network::mojom::CanonicalCookie::name)& name(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->name;
  }

  static const decltype(::network::mojom::CanonicalCookie::value)& value(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->value;
  }

  static const decltype(::network::mojom::CanonicalCookie::domain)& domain(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->domain;
  }

  static const decltype(::network::mojom::CanonicalCookie::path)& path(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->path;
  }

  static const decltype(::network::mojom::CanonicalCookie::creation)& creation(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->creation;
  }

  static const decltype(::network::mojom::CanonicalCookie::expiry)& expiry(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->expiry;
  }

  static const decltype(::network::mojom::CanonicalCookie::last_access)& last_access(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->last_access;
  }

  static decltype(::network::mojom::CanonicalCookie::secure) secure(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->secure;
  }

  static decltype(::network::mojom::CanonicalCookie::httponly) httponly(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->httponly;
  }

  static decltype(::network::mojom::CanonicalCookie::site_restrictions) site_restrictions(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->site_restrictions;
  }

  static decltype(::network::mojom::CanonicalCookie::priority) priority(
      const ::network::mojom::CanonicalCookiePtr& input) {
    return input->priority;
  }

  static bool Read(::network::mojom::CanonicalCookie::DataView input, ::network::mojom::CanonicalCookiePtr* output);
};


template <>
struct  StructTraits<::network::mojom::CookieWithStatus::DataView,
                                         ::network::mojom::CookieWithStatusPtr> {
  static bool IsNull(const ::network::mojom::CookieWithStatusPtr& input) { return !input; }
  static void SetToNull(::network::mojom::CookieWithStatusPtr* output) { output->reset(); }

  static const decltype(::network::mojom::CookieWithStatus::cookie)& cookie(
      const ::network::mojom::CookieWithStatusPtr& input) {
    return input->cookie;
  }

  static decltype(::network::mojom::CookieWithStatus::status) status(
      const ::network::mojom::CookieWithStatusPtr& input) {
    return input->status;
  }

  static bool Read(::network::mojom::CookieWithStatus::DataView input, ::network::mojom::CookieWithStatusPtr* output);
};


template <>
struct  StructTraits<::network::mojom::CookieDeletionFilter::DataView,
                                         ::network::mojom::CookieDeletionFilterPtr> {
  static bool IsNull(const ::network::mojom::CookieDeletionFilterPtr& input) { return !input; }
  static void SetToNull(::network::mojom::CookieDeletionFilterPtr* output) { output->reset(); }

  static const decltype(::network::mojom::CookieDeletionFilter::created_after_time)& created_after_time(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->created_after_time;
  }

  static const decltype(::network::mojom::CookieDeletionFilter::created_before_time)& created_before_time(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->created_before_time;
  }

  static const decltype(::network::mojom::CookieDeletionFilter::excluding_domains)& excluding_domains(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->excluding_domains;
  }

  static const decltype(::network::mojom::CookieDeletionFilter::including_domains)& including_domains(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->including_domains;
  }

  static const decltype(::network::mojom::CookieDeletionFilter::cookie_name)& cookie_name(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->cookie_name;
  }

  static const decltype(::network::mojom::CookieDeletionFilter::host_name)& host_name(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->host_name;
  }

  static const decltype(::network::mojom::CookieDeletionFilter::url)& url(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->url;
  }

  static decltype(::network::mojom::CookieDeletionFilter::session_control) session_control(
      const ::network::mojom::CookieDeletionFilterPtr& input) {
    return input->session_control;
  }

  static bool Read(::network::mojom::CookieDeletionFilter::DataView input, ::network::mojom::CookieDeletionFilterPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_H_
