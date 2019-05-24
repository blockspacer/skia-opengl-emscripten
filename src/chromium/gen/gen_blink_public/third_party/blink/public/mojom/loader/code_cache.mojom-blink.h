// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/loader/code_cache.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/code_cache.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink-forward.h"

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
struct blink_mojom_internal_CodeCacheType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::CodeCacheType& value) {
    using utype = std::underlying_type<::blink::mojom::CodeCacheType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::CodeCacheType& left, const ::blink::mojom::CodeCacheType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::CodeCacheType>
    : public GenericHashTraits<::blink::mojom::CodeCacheType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::CodeCacheType& value) {
    return value == static_cast<::blink::mojom::CodeCacheType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::CodeCacheType& slot, bool) {
    slot = static_cast<::blink::mojom::CodeCacheType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::CodeCacheType& value) {
    return value == static_cast<::blink::mojom::CodeCacheType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class CodeCacheHostProxy;

template <typename ImplRefTraits>
class CodeCacheHostStub;

class CodeCacheHostRequestValidator;
class CodeCacheHostResponseValidator;


class PLATFORM_EXPORT CodeCacheHost
    : public CodeCacheHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CodeCacheHostInterfaceBase;
  using Proxy_ = CodeCacheHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = CodeCacheHostStub<ImplRefTraits>;

  using RequestValidator_ = CodeCacheHostRequestValidator;
  using ResponseValidator_ = CodeCacheHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDidGenerateCacheableMetadataMinVersion = 0,
    kFetchCachedCodeMinVersion = 0,
    kClearCodeCacheEntryMinVersion = 0,
    kDidGenerateCacheableMetadataInCacheStorageMinVersion = 0,
  };
  virtual ~CodeCacheHost() {}

  
  virtual void DidGenerateCacheableMetadata(CodeCacheType cache_type, const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data) = 0;


  using FetchCachedCodeCallback = base::OnceCallback<void(base::Time, mojo_base::BigBuffer)>;
  
  virtual void FetchCachedCode(CodeCacheType cache_type, const ::blink::KURL& url, FetchCachedCodeCallback callback) = 0;

  
  virtual void ClearCodeCacheEntry(CodeCacheType cache_type, const ::blink::KURL& url) = 0;

  
  virtual void DidGenerateCacheableMetadataInCacheStorage(const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data, const scoped_refptr<const ::blink::SecurityOrigin>& cache_storage_origin, const WTF::String& cache_storage_cache_name) = 0;
};

class PLATFORM_EXPORT CodeCacheHostProxy
    : public CodeCacheHost {
 public:
  using InterfaceType = CodeCacheHost;

  explicit CodeCacheHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidGenerateCacheableMetadata(CodeCacheType cache_type, const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data) final;
  void FetchCachedCode(CodeCacheType cache_type, const ::blink::KURL& url, FetchCachedCodeCallback callback) final;
  void ClearCodeCacheEntry(CodeCacheType cache_type, const ::blink::KURL& url) final;
  void DidGenerateCacheableMetadataInCacheStorage(const ::blink::KURL& url, base::Time expected_response_time, mojo_base::BigBuffer data, const scoped_refptr<const ::blink::SecurityOrigin>& cache_storage_origin, const WTF::String& cache_storage_cache_name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT CodeCacheHostStubDispatch {
 public:
  static bool Accept(CodeCacheHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CodeCacheHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CodeCacheHost>>
class CodeCacheHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CodeCacheHostStub() {}
  ~CodeCacheHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CodeCacheHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CodeCacheHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT CodeCacheHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT CodeCacheHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_BLINK_H_