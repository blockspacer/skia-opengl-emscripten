// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/cdm_storage.mojom-shared.h"
#include "media/mojo/interfaces/cdm_storage.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct media_mojom_internal_CdmStorage_Status_DataHashFn {
  static unsigned GetHash(const ::media::mojom::CdmStorage_Status& value) {
    using utype = std::underlying_type<::media::mojom::CdmStorage_Status>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media::mojom::CdmStorage_Status& left, const ::media::mojom::CdmStorage_Status& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media::mojom::CdmStorage_Status>
    : public GenericHashTraits<::media::mojom::CdmStorage_Status> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media::mojom::CdmStorage_Status& value) {
    return value == static_cast<::media::mojom::CdmStorage_Status>(-1000000);
  }
  static void ConstructDeletedValue(::media::mojom::CdmStorage_Status& slot, bool) {
    slot = static_cast<::media::mojom::CdmStorage_Status>(-1000001);
  }
  static bool IsDeletedValue(const ::media::mojom::CdmStorage_Status& value) {
    return value == static_cast<::media::mojom::CdmStorage_Status>(-1000001);
  }
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {

class CdmStorageProxy;

template <typename ImplRefTraits>
class CdmStorageStub;

class CdmStorageRequestValidator;
class CdmStorageResponseValidator;


class BLINK_PLATFORM_EXPORT CdmStorage
    : public CdmStorageInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CdmStorageInterfaceBase;
  using Proxy_ = CdmStorageProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmStorageStub<ImplRefTraits>;

  using RequestValidator_ = CdmStorageRequestValidator;
  using ResponseValidator_ = CdmStorageResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
  };
  
  using Status = CdmStorage_Status;
  virtual ~CdmStorage() {}


  using OpenCallback = base::OnceCallback<void(CdmStorage::Status, base::File, CdmFileAssociatedPtrInfo)>;
  
  virtual void Open(const WTF::String& file_name, OpenCallback callback) = 0;
};

class CdmFileProxy;

template <typename ImplRefTraits>
class CdmFileStub;

class CdmFileRequestValidator;
class CdmFileResponseValidator;


class BLINK_PLATFORM_EXPORT CdmFile
    : public CdmFileInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CdmFileInterfaceBase;
  using Proxy_ = CdmFileProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmFileStub<ImplRefTraits>;

  using RequestValidator_ = CdmFileRequestValidator;
  using ResponseValidator_ = CdmFileResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenFileForWritingMinVersion = 0,
    kCommitWriteMinVersion = 0,
  };
  virtual ~CdmFile() {}


  using OpenFileForWritingCallback = base::OnceCallback<void(base::File)>;
  
  virtual void OpenFileForWriting(OpenFileForWritingCallback callback) = 0;


  using CommitWriteCallback = base::OnceCallback<void(base::File)>;
  
  virtual void CommitWrite(CommitWriteCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT CdmStorageProxy
    : public CdmStorage {
 public:
  using InterfaceType = CdmStorage;

  explicit CdmStorageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(const WTF::String& file_name, OpenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT CdmFileProxy
    : public CdmFile {
 public:
  using InterfaceType = CdmFile;

  explicit CdmFileProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenFileForWriting(OpenFileForWritingCallback callback) final;
  void CommitWrite(CommitWriteCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT CdmStorageStubDispatch {
 public:
  static bool Accept(CdmStorage* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmStorage* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmStorage>>
class CdmStorageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmStorageStub() {}
  ~CdmStorageStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmStorageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmStorageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT CdmFileStubDispatch {
 public:
  static bool Accept(CdmFile* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmFile* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmFile>>
class CdmFileStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmFileStub() {}
  ~CdmFileStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFileStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmFileStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT CdmStorageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT CdmFileRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT CdmStorageResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT CdmFileResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_H_