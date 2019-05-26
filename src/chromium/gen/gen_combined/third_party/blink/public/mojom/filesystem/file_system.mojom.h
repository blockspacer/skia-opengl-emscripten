// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_H_

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
#include "third_party/blink/public/mojom/filesystem/file_system.mojom-forward.h"
#include "components/services/filesystem/public/interfaces/types.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include "mojo/public/mojom/base/file_error.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/file_info.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
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

class FileSystemCancellableOperationProxy;

template <typename ImplRefTraits>
class FileSystemCancellableOperationStub;

class FileSystemCancellableOperationRequestValidator;
class FileSystemCancellableOperationResponseValidator;


class BLINK_COMMON_EXPORT FileSystemCancellableOperation
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


class BLINK_COMMON_EXPORT FileSystemOperationListener
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

  
  virtual void ResultsRetrieved(std::vector<::filesystem::mojom::DirectoryEntryPtr> entries, bool has_more) = 0;

  
  virtual void DidWrite(int64_t byte_count, bool complete) = 0;

  
  virtual void ErrorOccurred(::base::File::Error error_code) = 0;
};

class ReceivedSnapshotListenerProxy;

template <typename ImplRefTraits>
class ReceivedSnapshotListenerStub;

class ReceivedSnapshotListenerRequestValidator;


class BLINK_COMMON_EXPORT ReceivedSnapshotListener
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


class BLINK_COMMON_EXPORT FileSystemManager
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
  
  virtual bool Open(const url::Origin& origin, FileSystemType file_system_type, std::string* out_name, GURL* out_root_url, ::base::File::Error* out_error_code);

  using OpenCallback = base::OnceCallback<void(const std::string&, const GURL&, ::base::File::Error)>;
  
  virtual void Open(const url::Origin& origin, FileSystemType file_system_type, OpenCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ResolveURL(const GURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code);

  using ResolveURLCallback = base::OnceCallback<void(FileSystemInfoPtr, const base::FilePath&, bool, ::base::File::Error)>;
  
  virtual void ResolveURL(const GURL& filesystem_url, ResolveURLCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Move(const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code);

  using MoveCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Move(const GURL& src_path, const GURL& dest_path, MoveCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Copy(const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code);

  using CopyCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Copy(const GURL& src_path, const GURL& dest_path, CopyCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Remove(const GURL& path, bool recursive, ::base::File::Error* out_error_code);

  using RemoveCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Remove(const GURL& path, bool recursive, RemoveCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadMetadata(const GURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code);

  using ReadMetadataCallback = base::OnceCallback<void(const base::File::Info&, ::base::File::Error)>;
  
  virtual void ReadMetadata(const GURL& path, ReadMetadataCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code);

  using CreateCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, CreateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Exists(const GURL& path, bool is_directory, ::base::File::Error* out_error_code);

  using ExistsCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Exists(const GURL& path, bool is_directory, ExistsCallback callback) = 0;

  
  virtual void ReadDirectory(const GURL& path, FileSystemOperationListenerPtr listener) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadDirectorySync(const GURL& path, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code);

  using ReadDirectorySyncCallback = base::OnceCallback<void(std::vector<::filesystem::mojom::DirectoryEntryPtr>, ::base::File::Error)>;
  
  virtual void ReadDirectorySync(const GURL& path, ReadDirectorySyncCallback callback) = 0;

  
  virtual void Write(const GURL& file_path, const std::string& blob_uuid, int64_t position, FileSystemCancellableOperationRequest op_request, FileSystemOperationListenerPtr listener) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code);

  using WriteSyncCallback = base::OnceCallback<void(int64_t, ::base::File::Error)>;
  
  virtual void WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, WriteSyncCallback callback) = 0;


  using TruncateCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Truncate(const GURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, TruncateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool TruncateSync(const GURL& file_path, int64_t length, ::base::File::Error* out_error_code);

  using TruncateSyncCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void TruncateSync(const GURL& file_path, int64_t length, TruncateSyncCallback callback) = 0;


  using TouchFileCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void TouchFile(const GURL& path, base::Time last_access_time, base::Time last_modified_time, TouchFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool CreateSnapshotFile(const GURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener);

  using CreateSnapshotFileCallback = base::OnceCallback<void(const base::File::Info&, const base::FilePath&, ::base::File::Error, ReceivedSnapshotListenerPtr)>;
  
  virtual void CreateSnapshotFile(const GURL& file_path, CreateSnapshotFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetPlatformPath(const GURL& file_path, base::FilePath* out_platform_path);

  using GetPlatformPathCallback = base::OnceCallback<void(const base::FilePath&)>;
  
  virtual void GetPlatformPath(const GURL& file_path, GetPlatformPathCallback callback) = 0;
};

class BLINK_COMMON_EXPORT FileSystemCancellableOperationProxy
    : public FileSystemCancellableOperation {
 public:
  using InterfaceType = FileSystemCancellableOperation;

  explicit FileSystemCancellableOperationProxy(mojo::MessageReceiverWithResponder* receiver);
  void Cancel(CancelCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT FileSystemOperationListenerProxy
    : public FileSystemOperationListener {
 public:
  using InterfaceType = FileSystemOperationListener;

  explicit FileSystemOperationListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void ResultsRetrieved(std::vector<::filesystem::mojom::DirectoryEntryPtr> entries, bool has_more) final;
  void DidWrite(int64_t byte_count, bool complete) final;
  void ErrorOccurred(::base::File::Error error_code) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT ReceivedSnapshotListenerProxy
    : public ReceivedSnapshotListener {
 public:
  using InterfaceType = ReceivedSnapshotListener;

  explicit ReceivedSnapshotListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidReceiveSnapshotFile() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT FileSystemManagerProxy
    : public FileSystemManager {
 public:
  using InterfaceType = FileSystemManager;

  explicit FileSystemManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Open(const url::Origin& origin, FileSystemType file_system_type, std::string* out_name, GURL* out_root_url, ::base::File::Error* out_error_code) final;
  void Open(const url::Origin& origin, FileSystemType file_system_type, OpenCallback callback) final;
  bool ResolveURL(const GURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code) final;
  void ResolveURL(const GURL& filesystem_url, ResolveURLCallback callback) final;
  bool Move(const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code) final;
  void Move(const GURL& src_path, const GURL& dest_path, MoveCallback callback) final;
  bool Copy(const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code) final;
  void Copy(const GURL& src_path, const GURL& dest_path, CopyCallback callback) final;
  bool Remove(const GURL& path, bool recursive, ::base::File::Error* out_error_code) final;
  void Remove(const GURL& path, bool recursive, RemoveCallback callback) final;
  bool ReadMetadata(const GURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code) final;
  void ReadMetadata(const GURL& path, ReadMetadataCallback callback) final;
  bool Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code) final;
  void Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, CreateCallback callback) final;
  bool Exists(const GURL& path, bool is_directory, ::base::File::Error* out_error_code) final;
  void Exists(const GURL& path, bool is_directory, ExistsCallback callback) final;
  void ReadDirectory(const GURL& path, FileSystemOperationListenerPtr listener) final;
  bool ReadDirectorySync(const GURL& path, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code) final;
  void ReadDirectorySync(const GURL& path, ReadDirectorySyncCallback callback) final;
  void Write(const GURL& file_path, const std::string& blob_uuid, int64_t position, FileSystemCancellableOperationRequest op_request, FileSystemOperationListenerPtr listener) final;
  bool WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code) final;
  void WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, WriteSyncCallback callback) final;
  void Truncate(const GURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, TruncateCallback callback) final;
  bool TruncateSync(const GURL& file_path, int64_t length, ::base::File::Error* out_error_code) final;
  void TruncateSync(const GURL& file_path, int64_t length, TruncateSyncCallback callback) final;
  void TouchFile(const GURL& path, base::Time last_access_time, base::Time last_modified_time, TouchFileCallback callback) final;
  bool CreateSnapshotFile(const GURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener) final;
  void CreateSnapshotFile(const GURL& file_path, CreateSnapshotFileCallback callback) final;
  bool GetPlatformPath(const GURL& file_path, base::FilePath* out_platform_path) final;
  void GetPlatformPath(const GURL& file_path, GetPlatformPathCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT FileSystemCancellableOperationStubDispatch {
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
class BLINK_COMMON_EXPORT FileSystemOperationListenerStubDispatch {
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
class BLINK_COMMON_EXPORT ReceivedSnapshotListenerStubDispatch {
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
class BLINK_COMMON_EXPORT FileSystemManagerStubDispatch {
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
class BLINK_COMMON_EXPORT FileSystemCancellableOperationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FileSystemOperationListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ReceivedSnapshotListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FileSystemManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FileSystemCancellableOperationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FileSystemManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT FileSystemInfo {
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
      const std::string& name,
      const GURL& root_url,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileSystemInfo::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string name;
  
  GURL root_url;
  
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::FileSystemInfo::DataView,
                                         ::blink::mojom::FileSystemInfoPtr> {
  static bool IsNull(const ::blink::mojom::FileSystemInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::FileSystemInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::FileSystemInfo::name)& name(
      const ::blink::mojom::FileSystemInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::FileSystemInfo::root_url)& root_url(
      const ::blink::mojom::FileSystemInfoPtr& input) {
    return input->root_url;
  }

  static decltype(::blink::mojom::FileSystemInfo::mount_type) mount_type(
      const ::blink::mojom::FileSystemInfoPtr& input) {
    return input->mount_type;
  }

  static bool Read(::blink::mojom::FileSystemInfo::DataView input, ::blink::mojom::FileSystemInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_H_