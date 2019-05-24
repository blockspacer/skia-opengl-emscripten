// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-shared.h"
#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
struct blink_mojom_internal_FileChooserParams_Mode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FileChooserParams_Mode& value) {
    using utype = std::underlying_type<::blink::mojom::FileChooserParams_Mode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FileChooserParams_Mode& left, const ::blink::mojom::FileChooserParams_Mode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FileChooserParams_Mode>
    : public GenericHashTraits<::blink::mojom::FileChooserParams_Mode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FileChooserParams_Mode& value) {
    return value == static_cast<::blink::mojom::FileChooserParams_Mode>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FileChooserParams_Mode& slot, bool) {
    slot = static_cast<::blink::mojom::FileChooserParams_Mode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FileChooserParams_Mode& value) {
    return value == static_cast<::blink::mojom::FileChooserParams_Mode>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class FileChooserProxy;

template <typename ImplRefTraits>
class FileChooserStub;

class FileChooserRequestValidator;
class FileChooserResponseValidator;


class PLATFORM_EXPORT FileChooser
    : public FileChooserInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FileChooserInterfaceBase;
  using Proxy_ = FileChooserProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileChooserStub<ImplRefTraits>;

  using RequestValidator_ = FileChooserRequestValidator;
  using ResponseValidator_ = FileChooserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenFileChooserMinVersion = 0,
    kEnumerateChosenDirectoryMinVersion = 0,
  };
  virtual ~FileChooser() {}


  using OpenFileChooserCallback = base::OnceCallback<void(FileChooserResultPtr)>;
  
  virtual void OpenFileChooser(FileChooserParamsPtr params, OpenFileChooserCallback callback) = 0;


  using EnumerateChosenDirectoryCallback = base::OnceCallback<void(FileChooserResultPtr)>;
  
  virtual void EnumerateChosenDirectory(const base::FilePath& directory_path, EnumerateChosenDirectoryCallback callback) = 0;
};

class PLATFORM_EXPORT FileChooserProxy
    : public FileChooser {
 public:
  using InterfaceType = FileChooser;

  explicit FileChooserProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenFileChooser(FileChooserParamsPtr params, OpenFileChooserCallback callback) final;
  void EnumerateChosenDirectory(const base::FilePath& directory_path, EnumerateChosenDirectoryCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT FileChooserStubDispatch {
 public:
  static bool Accept(FileChooser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileChooser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileChooser>>
class FileChooserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileChooserStub() {}
  ~FileChooserStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileChooserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileChooserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FileChooserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FileChooserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class PLATFORM_EXPORT FileChooserFileInfo {
 public:
  using DataView = FileChooserFileInfoDataView;
  using Data_ = internal::FileChooserFileInfo_Data;
  using Tag = Data_::FileChooserFileInfo_Tag;

  static FileChooserFileInfoPtr New() {
    return FileChooserFileInfoPtr(base::in_place);
  }
  // Construct an instance holding |native_file|.
  static FileChooserFileInfoPtr
  NewNativeFile(
      NativeFileInfoPtr native_file) {
    auto result = FileChooserFileInfoPtr(base::in_place);
    result->set_native_file(std::move(native_file));
    return result;
  }
  // Construct an instance holding |file_system|.
  static FileChooserFileInfoPtr
  NewFileSystem(
      FileSystemFileInfoPtr file_system) {
    auto result = FileChooserFileInfoPtr(base::in_place);
    result->set_file_system(std::move(file_system));
    return result;
  }

  template <typename U>
  static FileChooserFileInfoPtr From(const U& u) {
    return mojo::TypeConverter<FileChooserFileInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileChooserFileInfo>::Convert(*this);
  }

  FileChooserFileInfo();
  ~FileChooserFileInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = FileChooserFileInfoPtr>
  FileChooserFileInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileChooserFileInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_native_file() const { return tag_ == Tag::NATIVE_FILE; }

  
  NativeFileInfoPtr& get_native_file() const {
    DCHECK(tag_ == Tag::NATIVE_FILE);
    return *(data_.native_file);
  }

  
  void set_native_file(
      NativeFileInfoPtr native_file);
  
  bool is_file_system() const { return tag_ == Tag::FILE_SYSTEM; }

  
  FileSystemFileInfoPtr& get_file_system() const {
    DCHECK(tag_ == Tag::FILE_SYSTEM);
    return *(data_.file_system);
  }

  
  void set_file_system(
      FileSystemFileInfoPtr file_system);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileChooserFileInfo::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<FileChooserFileInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    NativeFileInfoPtr* native_file;
    FileSystemFileInfoPtr* file_system;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class PLATFORM_EXPORT FileChooserParams {
 public:
  using DataView = FileChooserParamsDataView;
  using Data_ = internal::FileChooserParams_Data;
  using Mode = FileChooserParams_Mode;

  template <typename... Args>
  static FileChooserParamsPtr New(Args&&... args) {
    return FileChooserParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileChooserParamsPtr From(const U& u) {
    return mojo::TypeConverter<FileChooserParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileChooserParams>::Convert(*this);
  }


  FileChooserParams();

  FileChooserParams(
      FileChooserParams::Mode mode,
      const WTF::String& title,
      const base::FilePath& default_file_name,
      const WTF::Vector<base::FilePath>& selected_files,
      const WTF::Vector<WTF::String>& accept_types,
      bool need_local_path,
      bool use_media_capture,
      const ::blink::KURL& requestor);

  ~FileChooserParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileChooserParamsPtr>
  FileChooserParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileChooserParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileChooserParams::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileChooserParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileChooserParams_UnserializedMessageContext<
            UserType, FileChooserParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileChooserParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileChooserParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileChooserParams_UnserializedMessageContext<
            UserType, FileChooserParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileChooserParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  FileChooserParams::Mode mode;
  
  WTF::String title;
  
  base::FilePath default_file_name;
  
  WTF::Vector<base::FilePath> selected_files;
  
  WTF::Vector<WTF::String> accept_types;
  
  bool need_local_path;
  
  bool use_media_capture;
  
  ::blink::KURL requestor;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT NativeFileInfo {
 public:
  using DataView = NativeFileInfoDataView;
  using Data_ = internal::NativeFileInfo_Data;

  template <typename... Args>
  static NativeFileInfoPtr New(Args&&... args) {
    return NativeFileInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativeFileInfoPtr From(const U& u) {
    return mojo::TypeConverter<NativeFileInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativeFileInfo>::Convert(*this);
  }


  NativeFileInfo();

  NativeFileInfo(
      const base::FilePath& file_path,
      const WTF::String& display_name);

  ~NativeFileInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativeFileInfoPtr>
  NativeFileInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativeFileInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativeFileInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativeFileInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativeFileInfo_UnserializedMessageContext<
            UserType, NativeFileInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativeFileInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return NativeFileInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativeFileInfo_UnserializedMessageContext<
            UserType, NativeFileInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativeFileInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::FilePath file_path;
  
  WTF::String display_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT FileSystemFileInfo {
 public:
  using DataView = FileSystemFileInfoDataView;
  using Data_ = internal::FileSystemFileInfo_Data;

  template <typename... Args>
  static FileSystemFileInfoPtr New(Args&&... args) {
    return FileSystemFileInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileSystemFileInfoPtr From(const U& u) {
    return mojo::TypeConverter<FileSystemFileInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileSystemFileInfo>::Convert(*this);
  }


  FileSystemFileInfo();

  FileSystemFileInfo(
      const ::blink::KURL& url,
      base::Time modification_time,
      int64_t length);

  ~FileSystemFileInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileSystemFileInfoPtr>
  FileSystemFileInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileSystemFileInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileSystemFileInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileSystemFileInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileSystemFileInfo_UnserializedMessageContext<
            UserType, FileSystemFileInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileSystemFileInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileSystemFileInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileSystemFileInfo_UnserializedMessageContext<
            UserType, FileSystemFileInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileSystemFileInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL url;
  
  base::Time modification_time;
  
  int64_t length;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT FileChooserResult {
 public:
  using DataView = FileChooserResultDataView;
  using Data_ = internal::FileChooserResult_Data;

  template <typename... Args>
  static FileChooserResultPtr New(Args&&... args) {
    return FileChooserResultPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FileChooserResultPtr From(const U& u) {
    return mojo::TypeConverter<FileChooserResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FileChooserResult>::Convert(*this);
  }


  FileChooserResult();

  FileChooserResult(
      WTF::Vector<FileChooserFileInfoPtr> files,
      const base::FilePath& base_directory);

  ~FileChooserResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FileChooserResultPtr>
  FileChooserResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FileChooserResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FileChooserResult::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FileChooserResult::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FileChooserResult_UnserializedMessageContext<
            UserType, FileChooserResult::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FileChooserResult::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FileChooserResult::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FileChooserResult_UnserializedMessageContext<
            UserType, FileChooserResult::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FileChooserResult::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<FileChooserFileInfoPtr> files;
  
  base::FilePath base_directory;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FileChooserResult);
};

template <typename UnionPtrType>
FileChooserFileInfoPtr FileChooserFileInfo::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::NATIVE_FILE:
      rv->set_native_file(mojo::Clone(*data_.native_file));
      break;
    case Tag::FILE_SYSTEM:
      rv->set_file_system(mojo::Clone(*data_.file_system));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileChooserFileInfo>::value>::type*>
bool FileChooserFileInfo::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::NATIVE_FILE:
      return mojo::Equals(*(data_.native_file), *(other.data_.native_file));
    case Tag::FILE_SYSTEM:
      return mojo::Equals(*(data_.file_system), *(other.data_.file_system));
  }

  return false;
}
template <typename StructPtrType>
FileChooserParamsPtr FileChooserParams::Clone() const {
  return New(
      mojo::Clone(mode),
      mojo::Clone(title),
      mojo::Clone(default_file_name),
      mojo::Clone(selected_files),
      mojo::Clone(accept_types),
      mojo::Clone(need_local_path),
      mojo::Clone(use_media_capture),
      mojo::Clone(requestor)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileChooserParams>::value>::type*>
bool FileChooserParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->default_file_name, other_struct.default_file_name))
    return false;
  if (!mojo::Equals(this->selected_files, other_struct.selected_files))
    return false;
  if (!mojo::Equals(this->accept_types, other_struct.accept_types))
    return false;
  if (!mojo::Equals(this->need_local_path, other_struct.need_local_path))
    return false;
  if (!mojo::Equals(this->use_media_capture, other_struct.use_media_capture))
    return false;
  if (!mojo::Equals(this->requestor, other_struct.requestor))
    return false;
  return true;
}
template <typename StructPtrType>
NativeFileInfoPtr NativeFileInfo::Clone() const {
  return New(
      mojo::Clone(file_path),
      mojo::Clone(display_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativeFileInfo>::value>::type*>
bool NativeFileInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->file_path, other_struct.file_path))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  return true;
}
template <typename StructPtrType>
FileSystemFileInfoPtr FileSystemFileInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(modification_time),
      mojo::Clone(length)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileSystemFileInfo>::value>::type*>
bool FileSystemFileInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->modification_time, other_struct.modification_time))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  return true;
}
template <typename StructPtrType>
FileChooserResultPtr FileChooserResult::Clone() const {
  return New(
      mojo::Clone(files),
      mojo::Clone(base_directory)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FileChooserResult>::value>::type*>
bool FileChooserResult::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->files, other_struct.files))
    return false;
  if (!mojo::Equals(this->base_directory, other_struct.base_directory))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FileChooserParams::DataView,
                                         ::blink::mojom::blink::FileChooserParamsPtr> {
  static bool IsNull(const ::blink::mojom::blink::FileChooserParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FileChooserParamsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::FileChooserParams::mode) mode(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->mode;
  }

  static const decltype(::blink::mojom::blink::FileChooserParams::title)& title(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::blink::FileChooserParams::default_file_name)& default_file_name(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->default_file_name;
  }

  static const decltype(::blink::mojom::blink::FileChooserParams::selected_files)& selected_files(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->selected_files;
  }

  static const decltype(::blink::mojom::blink::FileChooserParams::accept_types)& accept_types(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->accept_types;
  }

  static decltype(::blink::mojom::blink::FileChooserParams::need_local_path) need_local_path(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->need_local_path;
  }

  static decltype(::blink::mojom::blink::FileChooserParams::use_media_capture) use_media_capture(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->use_media_capture;
  }

  static const decltype(::blink::mojom::blink::FileChooserParams::requestor)& requestor(
      const ::blink::mojom::blink::FileChooserParamsPtr& input) {
    return input->requestor;
  }

  static bool Read(::blink::mojom::blink::FileChooserParams::DataView input, ::blink::mojom::blink::FileChooserParamsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::NativeFileInfo::DataView,
                                         ::blink::mojom::blink::NativeFileInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::NativeFileInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::NativeFileInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::NativeFileInfo::file_path)& file_path(
      const ::blink::mojom::blink::NativeFileInfoPtr& input) {
    return input->file_path;
  }

  static const decltype(::blink::mojom::blink::NativeFileInfo::display_name)& display_name(
      const ::blink::mojom::blink::NativeFileInfoPtr& input) {
    return input->display_name;
  }

  static bool Read(::blink::mojom::blink::NativeFileInfo::DataView input, ::blink::mojom::blink::NativeFileInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FileSystemFileInfo::DataView,
                                         ::blink::mojom::blink::FileSystemFileInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::FileSystemFileInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FileSystemFileInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::FileSystemFileInfo::url)& url(
      const ::blink::mojom::blink::FileSystemFileInfoPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::FileSystemFileInfo::modification_time)& modification_time(
      const ::blink::mojom::blink::FileSystemFileInfoPtr& input) {
    return input->modification_time;
  }

  static decltype(::blink::mojom::blink::FileSystemFileInfo::length) length(
      const ::blink::mojom::blink::FileSystemFileInfoPtr& input) {
    return input->length;
  }

  static bool Read(::blink::mojom::blink::FileSystemFileInfo::DataView input, ::blink::mojom::blink::FileSystemFileInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FileChooserResult::DataView,
                                         ::blink::mojom::blink::FileChooserResultPtr> {
  static bool IsNull(const ::blink::mojom::blink::FileChooserResultPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FileChooserResultPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::FileChooserResult::files)& files(
      const ::blink::mojom::blink::FileChooserResultPtr& input) {
    return input->files;
  }

  static const decltype(::blink::mojom::blink::FileChooserResult::base_directory)& base_directory(
      const ::blink::mojom::blink::FileChooserResultPtr& input) {
    return input->base_directory;
  }

  static bool Read(::blink::mojom::blink::FileChooserResult::DataView input, ::blink::mojom::blink::FileChooserResultPtr* output);
};


template <>
struct PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::FileChooserFileInfo::DataView,
                                        ::blink::mojom::blink::FileChooserFileInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::FileChooserFileInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FileChooserFileInfoPtr* output) { output->reset(); }

  static ::blink::mojom::blink::FileChooserFileInfo::Tag GetTag(const ::blink::mojom::blink::FileChooserFileInfoPtr& input) {
    return input->which();
  }

  static const ::blink::mojom::blink::NativeFileInfoPtr& native_file(const ::blink::mojom::blink::FileChooserFileInfoPtr& input) {
    return input->get_native_file();
  }

  static const ::blink::mojom::blink::FileSystemFileInfoPtr& file_system(const ::blink::mojom::blink::FileChooserFileInfoPtr& input) {
    return input->get_file_system();
  }

  static bool Read(::blink::mojom::blink::FileChooserFileInfo::DataView input, ::blink::mojom::blink::FileChooserFileInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_H_