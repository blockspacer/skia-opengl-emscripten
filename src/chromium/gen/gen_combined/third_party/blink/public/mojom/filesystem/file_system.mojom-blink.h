// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/filesystem/file_system.mojom-shared.h"
#include "third_party/blink/public/mojom/filesystem/file_system.mojom-blink-forward.h"
#include "components/services/filesystem/public/interfaces/types.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"
#include "mojo/public/mojom/base/file_error.mojom-blink.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/file_info.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"

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
struct blink_mojom_internal_FileSystemType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FileSystemType& value) {
    using utype = std::underlying_type<::blink::mojom::FileSystemType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FileSystemType& left, const ::blink::mojom::FileSystemType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FileSystemType>
    : public GenericHashTraits<::blink::mojom::FileSystemType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FileSystemType& value) {
    return value == static_cast<::blink::mojom::FileSystemType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FileSystemType& slot, bool) {
    slot = static_cast<::blink::mojom::FileSystemType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FileSystemType& value) {
    return value == static_cast<::blink::mojom::FileSystemType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class FileSystemCancellableOperationProxy;

template <typename ImplRefTraits>
class FileSystemCancellableOperationStub;

class FileSystemCancellableOperationRequestValidator;
class FileSystemCancellableOperationResponseValidator;


class PLATFORM_EXPORT FileSystemCancellableOperation
    : public FileSystemCancellableOperationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FileSystemCancellableOperationInterfaceBase;
  using Proxy_ = FileSystemCancellableOperationProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileSystemCancellableOperationStub<ImplRefTraits>;

  using RequestValidator_ = FileSystemCancellableOperationRequestValidator;
  using ResponseValidator_ = FileSystemCancellableOperationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCancelMinVersion = 0,
  };
  virtual ~FileSystemCancellableOperation() {}


  using CancelCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Cancel(CancelCallback callback) = 0;
};

class FileSystemOperationListenerProxy;

template <typename ImplRefTraits>
class FileSystemOperationListenerStub;

class FileSystemOperationListenerRequestValidator;


class PLATFORM_EXPORT FileSystemOperationListener
    : public FileSystemOperationListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FileSystemOperationListenerInterfaceBase;
  using Proxy_ = FileSystemOperationListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileSystemOperationListenerStub<ImplRefTraits>;

  using RequestValidator_ = FileSystemOperationListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kResultsRetrievedMinVersion = 0,
    kDidWriteMinVersion = 0,
    kErrorOccurredMinVersion = 0,
  };
  virtual ~FileSystemOperationListener() {}

  
  virtual void ResultsRetrieved(WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr> entries, bool has_more) = 0;

  
  virtual void DidWrite(int64_t byte_count, bool complete) = 0;

  
  virtual void ErrorOccurred(::base::File::Error error_code) = 0;
};

class ReceivedSnapshotListenerProxy;

template <typename ImplRefTraits>
class ReceivedSnapshotListenerStub;

class ReceivedSnapshotListenerRequestValidator;


class PLATFORM_EXPORT ReceivedSnapshotListener
    : public ReceivedSnapshotListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ReceivedSnapshotListenerInterfaceBase;
  using Proxy_ = ReceivedSnapshotListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ReceivedSnapshotListenerStub<ImplRefTraits>;

  using RequestValidator_ = ReceivedSnapshotListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidReceiveSnapshotFileMinVersion = 0,
  };
  virtual ~ReceivedSnapshotListener() {}

  
  virtual void DidReceiveSnapshotFile() = 0;
};

class FileSystemManagerProxy;

template <typename ImplRefTraits>
class FileSystemManagerStub;

class FileSystemManagerRequestValidator;
class FileSystemManagerResponseValidator;


class PLATFORM_EXPORT FileSystemManager
    : public FileSystemManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = FileSystemManagerInterfaceBase;
  using Proxy_ = FileSystemManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileSystemManagerStub<ImplRefTraits>;

  using RequestValidator_ = FileSystemManagerRequestValidator;
  using ResponseValidator_ = FileSystemManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
    kResolveURLMinVersion = 0,
    kMoveMinVersion = 0,
    kCopyMinVersion = 0,
    kRemoveMinVersion = 0,
    kReadMetadataMinVersion = 0,
    kCreateMinVersion = 0,
    kExistsMinVersion = 0,
    kReadDirectoryMinVersion = 0,
    kReadDirectorySyncMinVersion = 0,
    kWriteMinVersion = 0,
    kWriteSyncMinVersion = 0,
    kTruncateMinVersion = 0,
    kTruncateSyncMinVersion = 0,
    kTouchFileMinVersion = 0,
    kCreateSnapshotFileMinVersion = 0,
    kGetPlatformPathMinVersion = 0,
  };
  virtual ~FileSystemManager() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Open(const scoped_refptr<const ::blink::SecurityOrigin>& origin, FileSystemType file_system_type, WTF::String* out_name, ::blink::KURL* out_root_url, ::base::File::Error* out_error_code);

  using OpenCallback = base::OnceCallback<void(const WTF::String&, const ::blink::KURL&, ::base::File::Error)>;
  
  virtual void Open(const scoped_refptr<const ::blink::SecurityOrigin>& origin, FileSystemType file_system_type, OpenCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ResolveURL(const ::blink::KURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code);

  using ResolveURLCallback = base::OnceCallback<void(FileSystemInfoPtr, const base::FilePath&, bool, ::base::File::Error)>;
  
  virtual void ResolveURL(const ::blink::KURL& filesystem_url, ResolveURLCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Move(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, ::base::File::Error* out_error_code);

  using MoveCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Move(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, MoveCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Copy(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, ::base::File::Error* out_error_code);

  using CopyCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Copy(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, CopyCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Remove(const ::blink::KURL& path, bool recursive, ::base::File::Error* out_error_code);

  using RemoveCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Remove(const ::blink::KURL& path, bool recursive, RemoveCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadMetadata(const ::blink::KURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code);

  using ReadMetadataCallback = base::OnceCallback<void(const base::File::Info&, ::base::File::Error)>;
  
  virtual void ReadMetadata(const ::blink::KURL& path, ReadMetadataCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Create(const ::blink::KURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code);

  using CreateCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Create(const ::blink::KURL& path, bool exclusive, bool is_directory, bool recursive, CreateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Exists(const ::blink::KURL& path, bool is_directory, ::base::File::Error* out_error_code);

  using ExistsCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Exists(const ::blink::KURL& path, bool is_directory, ExistsCallback callback) = 0;

  
  virtual void ReadDirectory(const ::blink::KURL& path, FileSystemOperationListenerPtr listener) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadDirectorySync(const ::blink::KURL& path, WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code);

  using ReadDirectorySyncCallback = base::OnceCallback<void(WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>, ::base::File::Error)>;
  
  virtual void ReadDirectorySync(const ::blink::KURL& path, ReadDirectorySyncCallback callback) = 0;

  
  virtual void Write(const ::blink::KURL& file_path, const WTF::String& blob_uuid, int64_t position, FileSystemCancellableOperationRequest op_request, FileSystemOperationListenerPtr listener) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool WriteSync(const ::blink::KURL& file_path, const WTF::String& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code);

  using WriteSyncCallback = base::OnceCallback<void(int64_t, ::base::File::Error)>;
  
  virtual void WriteSync(const ::blink::KURL& file_path, const WTF::String& blob_uuid, int64_t position, WriteSyncCallback callback) = 0;


  using TruncateCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Truncate(const ::blink::KURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, TruncateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool TruncateSync(const ::blink::KURL& file_path, int64_t length, ::base::File::Error* out_error_code);

  using TruncateSyncCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void TruncateSync(const ::blink::KURL& file_path, int64_t length, TruncateSyncCallback callback) = 0;


  using TouchFileCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void TouchFile(const ::blink::KURL& path, base::Time last_access_time, base::Time last_modified_time, TouchFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool CreateSnapshotFile(const ::blink::KURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener);

  using CreateSnapshotFileCallback = base::OnceCallback<void(const base::File::Info&, const base::FilePath&, ::base::File::Error, ReceivedSnapshotListenerPtr)>;
  
  virtual void CreateSnapshotFile(const ::blink::KURL& file_path, CreateSnapshotFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetPlatformPath(const ::blink::KURL& file_path, base::FilePath* out_platform_path);

  using GetPlatformPathCallback = base::OnceCallback<void(const base::FilePath&)>;
  
  virtual void GetPlatformPath(const ::blink::KURL& file_path, GetPlatformPathCallback callback) = 0;
};

class PLATFORM_EXPORT FileSystemCancellableOperationProxy
    : public FileSystemCancellableOperation {
 public:
  using InterfaceType = FileSystemCancellableOperation;

  explicit FileSystemCancellableOperationProxy(mojo::MessageReceiverWithResponder* receiver);
  void Cancel(CancelCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT FileSystemOperationListenerProxy
    : public FileSystemOperationListener {
 public:
  using InterfaceType = FileSystemOperationListener;

  explicit FileSystemOperationListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResultsRetrieved(WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr> entries, bool has_more) final;
  void DidWrite(int64_t byte_count, bool complete) final;
  void ErrorOccurred(::base::File::Error error_code) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT ReceivedSnapshotListenerProxy
    : public ReceivedSnapshotListener {
 public:
  using InterfaceType = ReceivedSnapshotListener;

  explicit ReceivedSnapshotListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidReceiveSnapshotFile() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT FileSystemManagerProxy
    : public FileSystemManager {
 public:
  using InterfaceType = FileSystemManager;

  explicit FileSystemManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Open(const scoped_refptr<const ::blink::SecurityOrigin>& origin, FileSystemType file_system_type, WTF::String* out_name, ::blink::KURL* out_root_url, ::base::File::Error* out_error_code) final;
  void Open(const scoped_refptr<const ::blink::SecurityOrigin>& origin, FileSystemType file_system_type, OpenCallback callback) final;
  bool ResolveURL(const ::blink::KURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code) final;
  void ResolveURL(const ::blink::KURL& filesystem_url, ResolveURLCallback callback) final;
  bool Move(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, ::base::File::Error* out_error_code) final;
  void Move(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, MoveCallback callback) final;
  bool Copy(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, ::base::File::Error* out_error_code) final;
  void Copy(const ::blink::KURL& src_path, const ::blink::KURL& dest_path, CopyCallback callback) final;
  bool Remove(const ::blink::KURL& path, bool recursive, ::base::File::Error* out_error_code) final;
  void Remove(const ::blink::KURL& path, bool recursive, RemoveCallback callback) final;
  bool ReadMetadata(const ::blink::KURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code) final;
  void ReadMetadata(const ::blink::KURL& path, ReadMetadataCallback callback) final;
  bool Create(const ::blink::KURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code) final;
  void Create(const ::blink::KURL& path, bool exclusive, bool is_directory, bool recursive, CreateCallback callback) final;
  bool Exists(const ::blink::KURL& path, bool is_directory, ::base::File::Error* out_error_code) final;
  void Exists(const ::blink::KURL& path, bool is_directory, ExistsCallback callback) final;
  void ReadDirectory(const ::blink::KURL& path, FileSystemOperationListenerPtr listener) final;
  bool ReadDirectorySync(const ::blink::KURL& path, WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code) final;
  void ReadDirectorySync(const ::blink::KURL& path, ReadDirectorySyncCallback callback) final;
  void Write(const ::blink::KURL& file_path, const WTF::String& blob_uuid, int64_t position, FileSystemCancellableOperationRequest op_request, FileSystemOperationListenerPtr listener) final;
  bool WriteSync(const ::blink::KURL& file_path, const WTF::String& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code) final;
  void WriteSync(const ::blink::KURL& file_path, const WTF::String& blob_uuid, int64_t position, WriteSyncCallback callback) final;
  void Truncate(const ::blink::KURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, TruncateCallback callback) final;
  bool TruncateSync(const ::blink::KURL& file_path, int64_t length, ::base::File::Error* out_error_code) final;
  void TruncateSync(const ::blink::KURL& file_path, int64_t length, TruncateSyncCallback callback) final;
  void TouchFile(const ::blink::KURL& path, base::Time last_access_time, base::Time last_modified_time, TouchFileCallback callback) final;
  bool CreateSnapshotFile(const ::blink::KURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener) final;
  void CreateSnapshotFile(const ::blink::KURL& file_path, CreateSnapshotFileCallback callback) final;
  bool GetPlatformPath(const ::blink::KURL& file_path, base::FilePath* out_platform_path) final;
  void GetPlatformPath(const ::blink::KURL& file_path, GetPlatformPathCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT FileSystemCancellableOperationStubDispatch {
 public:
  static bool Accept(FileSystemCancellableOperation* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileSystemCancellableOperation* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileSystemCancellableOperation>>
class FileSystemCancellableOperationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileSystemCancellableOperationStub() {}
  ~FileSystemCancellableOperationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemCancellableOperationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemCancellableOperationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FileSystemOperationListenerStubDispatch {
 public:
  static bool Accept(FileSystemOperationListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileSystemOperationListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileSystemOperationListener>>
class FileSystemOperationListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileSystemOperationListenerStub() {}
  ~FileSystemOperationListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemOperationListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemOperationListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ReceivedSnapshotListenerStubDispatch {
 public:
  static bool Accept(ReceivedSnapshotListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ReceivedSnapshotListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ReceivedSnapshotListener>>
class ReceivedSnapshotListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ReceivedSnapshotListenerStub() {}
  ~ReceivedSnapshotListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReceivedSnapshotListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReceivedSnapshotListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FileSystemManagerStubDispatch {
 public:
  static bool Accept(FileSystemManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileSystemManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileSystemManager>>
class FileSystemManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileSystemManagerStub() {}
  ~FileSystemManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FileSystemCancellableOperationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FileSystemOperationListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ReceivedSnapshotListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FileSystemManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FileSystemCancellableOperationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FileSystemManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT FileSystemInfo {
 public:
  using DataView = FileSystemInfoDataView;
  using Data_ = internal::FileSystemInfo_Data;

  template <typename... Args>
  static FileSystemInfoPtr New(Args&&... args) {
    return FileSystemInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileSystemInfoPtr From(const U& u) {
    return mojo::TypeConverter<FileSystemInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileSystemInfo>::Convert(*this);
  }


  FileSystemInfo();

  FileSystemInfo(
      const WTF::String& name,
      const ::blink::KURL& root_url,
      FileSystemType mount_type);

  ~FileSystemInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileSystemInfoPtr>
  FileSystemInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileSystemInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileSystemInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileSystemInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileSystemInfo_UnserializedMessageContext<
            UserType, FileSystemInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileSystemInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileSystemInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileSystemInfo_UnserializedMessageContext<
            UserType, FileSystemInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileSystemInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  ::blink::KURL root_url;
  
  FileSystemType mount_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FileSystemInfoPtr FileSystemInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(root_url),
      mojo::Clone(mount_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileSystemInfo>::value>::type*>
bool FileSystemInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->root_url, other_struct.root_url))
    return false;
  if (!mojo::Equals(this->mount_type, other_struct.mount_type))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FileSystemInfo::DataView,
                                         ::blink::mojom::blink::FileSystemInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::FileSystemInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FileSystemInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::FileSystemInfo::name)& name(
      const ::blink::mojom::blink::FileSystemInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::FileSystemInfo::root_url)& root_url(
      const ::blink::mojom::blink::FileSystemInfoPtr& input) {
    return input->root_url;
  }

  static decltype(::blink::mojom::blink::FileSystemInfo::mount_type) mount_type(
      const ::blink::mojom::blink::FileSystemInfoPtr& input) {
    return input->mount_type;
  }

  static bool Read(::blink::mojom::blink::FileSystemInfo::DataView input, ::blink::mojom::blink::FileSystemInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_BLINK_H_