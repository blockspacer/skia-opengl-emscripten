// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_H_

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
#include "components/services/filesystem/public/interfaces/directory.mojom-shared.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-forward.h"
#include "components/services/filesystem/public/interfaces/file.mojom.h"
#include "components/services/filesystem/public/interfaces/types.mojom.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_error.mojom.h"
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




namespace filesystem {
namespace mojom {

class DirectoryProxy;

template <typename ImplRefTraits>
class DirectoryStub;

class DirectoryRequestValidator;
class DirectoryResponseValidator;


class  Directory
    : public DirectoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = DirectoryInterfaceBase;
  using Proxy_ = DirectoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = DirectoryStub<ImplRefTraits>;

  using RequestValidator_ = DirectoryRequestValidator;
  using ResponseValidator_ = DirectoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
    kOpenFileMinVersion = 0,
    kOpenFileHandleMinVersion = 0,
    kOpenFileHandlesMinVersion = 0,
    kOpenDirectoryMinVersion = 0,
    kRenameMinVersion = 0,
    kReplaceMinVersion = 0,
    kDeleteMinVersion = 0,
    kExistsMinVersion = 0,
    kIsWritableMinVersion = 0,
    kFlushMinVersion = 0,
    kStatFileMinVersion = 0,
    kCloneMinVersion = 0,
    kReadEntireFileMinVersion = 0,
    kWriteFileMinVersion = 0,
  };
  virtual ~Directory() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Read(::base::File::Error* out_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents);

  using ReadCallback = base::OnceCallback<void(::base::File::Error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>)>;
  
  virtual void Read(ReadCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::base::File::Error* out_error);

  using OpenFileCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, OpenFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenFileHandle(const std::string& path, uint32_t open_flags, ::base::File::Error* out_error, base::File* out_file_handle);

  using OpenFileHandleCallback = base::OnceCallback<void(::base::File::Error, base::File)>;
  
  virtual void OpenFileHandle(const std::string& path, uint32_t open_flags, OpenFileHandleCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenFileHandles(std::vector<FileOpenDetailsPtr> files, std::vector<FileOpenResultPtr>* out_results);

  using OpenFileHandlesCallback = base::OnceCallback<void(std::vector<FileOpenResultPtr>)>;
  
  virtual void OpenFileHandles(std::vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, ::base::File::Error* out_error);

  using OpenDirectoryCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, OpenDirectoryCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Rename(const std::string& path, const std::string& new_path, ::base::File::Error* out_error);

  using RenameCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Rename(const std::string& path, const std::string& new_path, RenameCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Replace(const std::string& path, const std::string& new_path, ::base::File::Error* out_error);

  using ReplaceCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Replace(const std::string& path, const std::string& new_path, ReplaceCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Delete(const std::string& path, uint32_t delete_flags, ::base::File::Error* out_error);

  using DeleteCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Delete(const std::string& path, uint32_t delete_flags, DeleteCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Exists(const std::string& path, ::base::File::Error* out_error, bool* out_exists);

  using ExistsCallback = base::OnceCallback<void(::base::File::Error, bool)>;
  
  virtual void Exists(const std::string& path, ExistsCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IsWritable(const std::string& path, ::base::File::Error* out_error, bool* out_is_writable);

  using IsWritableCallback = base::OnceCallback<void(::base::File::Error, bool)>;
  
  virtual void IsWritable(const std::string& path, IsWritableCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Flush(::base::File::Error* out_error);

  using FlushCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Flush(FlushCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool StatFile(const std::string& path, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information);

  using StatFileCallback = base::OnceCallback<void(::base::File::Error, ::filesystem::mojom::FileInformationPtr)>;
  
  virtual void StatFile(const std::string& path, StatFileCallback callback) = 0;

  
  virtual void Clone(DirectoryRequest directory) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadEntireFile(const std::string& path, ::base::File::Error* out_error, std::vector<uint8_t>* out_data);

  using ReadEntireFileCallback = base::OnceCallback<void(::base::File::Error, const std::vector<uint8_t>&)>;
  
  virtual void ReadEntireFile(const std::string& path, ReadEntireFileCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool WriteFile(const std::string& path, const std::vector<uint8_t>& data, ::base::File::Error* out_error);

  using WriteFileCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void WriteFile(const std::string& path, const std::vector<uint8_t>& data, WriteFileCallback callback) = 0;
};

class  DirectoryProxy
    : public Directory {
 public:
  using InterfaceType = Directory;

  explicit DirectoryProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Read(::base::File::Error* out_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents) final;
  void Read(ReadCallback callback) final;
  bool OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::base::File::Error* out_error) final;
  void OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, OpenFileCallback callback) final;
  bool OpenFileHandle(const std::string& path, uint32_t open_flags, ::base::File::Error* out_error, base::File* out_file_handle) final;
  void OpenFileHandle(const std::string& path, uint32_t open_flags, OpenFileHandleCallback callback) final;
  bool OpenFileHandles(std::vector<FileOpenDetailsPtr> files, std::vector<FileOpenResultPtr>* out_results) final;
  void OpenFileHandles(std::vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) final;
  bool OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, ::base::File::Error* out_error) final;
  void OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, OpenDirectoryCallback callback) final;
  bool Rename(const std::string& path, const std::string& new_path, ::base::File::Error* out_error) final;
  void Rename(const std::string& path, const std::string& new_path, RenameCallback callback) final;
  bool Replace(const std::string& path, const std::string& new_path, ::base::File::Error* out_error) final;
  void Replace(const std::string& path, const std::string& new_path, ReplaceCallback callback) final;
  bool Delete(const std::string& path, uint32_t delete_flags, ::base::File::Error* out_error) final;
  void Delete(const std::string& path, uint32_t delete_flags, DeleteCallback callback) final;
  bool Exists(const std::string& path, ::base::File::Error* out_error, bool* out_exists) final;
  void Exists(const std::string& path, ExistsCallback callback) final;
  bool IsWritable(const std::string& path, ::base::File::Error* out_error, bool* out_is_writable) final;
  void IsWritable(const std::string& path, IsWritableCallback callback) final;
  bool Flush(::base::File::Error* out_error) final;
  void Flush(FlushCallback callback) final;
  bool StatFile(const std::string& path, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information) final;
  void StatFile(const std::string& path, StatFileCallback callback) final;
  void Clone(DirectoryRequest directory) final;
  bool ReadEntireFile(const std::string& path, ::base::File::Error* out_error, std::vector<uint8_t>* out_data) final;
  void ReadEntireFile(const std::string& path, ReadEntireFileCallback callback) final;
  bool WriteFile(const std::string& path, const std::vector<uint8_t>& data, ::base::File::Error* out_error) final;
  void WriteFile(const std::string& path, const std::vector<uint8_t>& data, WriteFileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DirectoryStubDispatch {
 public:
  static bool Accept(Directory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Directory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Directory>>
class DirectoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DirectoryStub() {}
  ~DirectoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DirectoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DirectoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DirectoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  DirectoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  FileOpenDetails {
 public:
  using DataView = FileOpenDetailsDataView;
  using Data_ = internal::FileOpenDetails_Data;

  template <typename... Args>
  static FileOpenDetailsPtr New(Args&&... args) {
    return FileOpenDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileOpenDetailsPtr From(const U& u) {
    return mojo::TypeConverter<FileOpenDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileOpenDetails>::Convert(*this);
  }


  FileOpenDetails();

  FileOpenDetails(
      const std::string& path,
      uint32_t open_flags);

  ~FileOpenDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileOpenDetailsPtr>
  FileOpenDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileOpenDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileOpenDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileOpenDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileOpenDetails_UnserializedMessageContext<
            UserType, FileOpenDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileOpenDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FileOpenDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileOpenDetails_UnserializedMessageContext<
            UserType, FileOpenDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileOpenDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string path;
  
  uint32_t open_flags;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  FileOpenResult {
 public:
  using DataView = FileOpenResultDataView;
  using Data_ = internal::FileOpenResult_Data;

  template <typename... Args>
  static FileOpenResultPtr New(Args&&... args) {
    return FileOpenResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileOpenResultPtr From(const U& u) {
    return mojo::TypeConverter<FileOpenResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileOpenResult>::Convert(*this);
  }


  FileOpenResult();

  FileOpenResult(
      const std::string& path,
      ::base::File::Error error,
      base::File file_handle);

  ~FileOpenResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileOpenResultPtr>
  FileOpenResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileOpenResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileOpenResult::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileOpenResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileOpenResult_UnserializedMessageContext<
            UserType, FileOpenResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileOpenResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FileOpenResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileOpenResult_UnserializedMessageContext<
            UserType, FileOpenResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileOpenResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string path;
  
  ::base::File::Error error;
  
  base::File file_handle;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FileOpenResult);
};

template <typename StructPtrType>
FileOpenDetailsPtr FileOpenDetails::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(open_flags)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileOpenDetails>::value>::type*>
bool FileOpenDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->open_flags, other_struct.open_flags))
    return false;
  return true;
}
template <typename StructPtrType>
FileOpenResultPtr FileOpenResult::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(error),
      mojo::Clone(file_handle)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileOpenResult>::value>::type*>
bool FileOpenResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->file_handle, other_struct.file_handle))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace filesystem

namespace mojo {


template <>
struct  StructTraits<::filesystem::mojom::FileOpenDetails::DataView,
                                         ::filesystem::mojom::FileOpenDetailsPtr> {
  static bool IsNull(const ::filesystem::mojom::FileOpenDetailsPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::FileOpenDetailsPtr* output) { output->reset(); }

  static const decltype(::filesystem::mojom::FileOpenDetails::path)& path(
      const ::filesystem::mojom::FileOpenDetailsPtr& input) {
    return input->path;
  }

  static decltype(::filesystem::mojom::FileOpenDetails::open_flags) open_flags(
      const ::filesystem::mojom::FileOpenDetailsPtr& input) {
    return input->open_flags;
  }

  static bool Read(::filesystem::mojom::FileOpenDetails::DataView input, ::filesystem::mojom::FileOpenDetailsPtr* output);
};


template <>
struct  StructTraits<::filesystem::mojom::FileOpenResult::DataView,
                                         ::filesystem::mojom::FileOpenResultPtr> {
  static bool IsNull(const ::filesystem::mojom::FileOpenResultPtr& input) { return !input; }
  static void SetToNull(::filesystem::mojom::FileOpenResultPtr* output) { output->reset(); }

  static const decltype(::filesystem::mojom::FileOpenResult::path)& path(
      const ::filesystem::mojom::FileOpenResultPtr& input) {
    return input->path;
  }

  static decltype(::filesystem::mojom::FileOpenResult::error) error(
      const ::filesystem::mojom::FileOpenResultPtr& input) {
    return input->error;
  }

  static  decltype(::filesystem::mojom::FileOpenResult::file_handle)& file_handle(
       ::filesystem::mojom::FileOpenResultPtr& input) {
    return input->file_handle;
  }

  static bool Read(::filesystem::mojom::FileOpenResult::DataView input, ::filesystem::mojom::FileOpenResultPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_H_