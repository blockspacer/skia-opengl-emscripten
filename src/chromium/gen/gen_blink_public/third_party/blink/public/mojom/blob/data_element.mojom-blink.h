// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/blob/data_element.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/data_element.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
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




namespace blink {
namespace mojom {
namespace blink {

class BytesProviderProxy;

template <typename ImplRefTraits>
class BytesProviderStub;

class BytesProviderRequestValidator;
class BytesProviderResponseValidator;


class PLATFORM_EXPORT BytesProvider
    : public BytesProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BytesProviderInterfaceBase;
  using Proxy_ = BytesProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = BytesProviderStub<ImplRefTraits>;

  using RequestValidator_ = BytesProviderRequestValidator;
  using ResponseValidator_ = BytesProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRequestAsReplyMinVersion = 0,
    kRequestAsStreamMinVersion = 0,
    kRequestAsFileMinVersion = 0,
  };
  virtual ~BytesProvider() {}


  using RequestAsReplyCallback = base::OnceCallback<void(const WTF::Vector<uint8_t>&)>;
  
  virtual void RequestAsReply(RequestAsReplyCallback callback) = 0;

  
  virtual void RequestAsStream(mojo::ScopedDataPipeProducerHandle pipe) = 0;


  using RequestAsFileCallback = base::OnceCallback<void(base::Optional<base::Time>)>;
  
  virtual void RequestAsFile(uint64_t source_offset, uint64_t source_size, base::File file, uint64_t file_offset, RequestAsFileCallback callback) = 0;
};

class PLATFORM_EXPORT BytesProviderProxy
    : public BytesProvider {
 public:
  using InterfaceType = BytesProvider;

  explicit BytesProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestAsReply(RequestAsReplyCallback callback) final;
  void RequestAsStream(mojo::ScopedDataPipeProducerHandle pipe) final;
  void RequestAsFile(uint64_t source_offset, uint64_t source_size, base::File file, uint64_t file_offset, RequestAsFileCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT BytesProviderStubDispatch {
 public:
  static bool Accept(BytesProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BytesProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BytesProvider>>
class BytesProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BytesProviderStub() {}
  ~BytesProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BytesProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BytesProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT BytesProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BytesProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class PLATFORM_EXPORT DataElement {
 public:
  using DataView = DataElementDataView;
  using Data_ = internal::DataElement_Data;
  using Tag = Data_::DataElement_Tag;

  static DataElementPtr New() {
    return DataElementPtr(base::in_place);
  }
  // Construct an instance holding |bytes|.
  static DataElementPtr
  NewBytes(
      DataElementBytesPtr bytes) {
    auto result = DataElementPtr(base::in_place);
    result->set_bytes(std::move(bytes));
    return result;
  }
  // Construct an instance holding |file|.
  static DataElementPtr
  NewFile(
      DataElementFilePtr file) {
    auto result = DataElementPtr(base::in_place);
    result->set_file(std::move(file));
    return result;
  }
  // Construct an instance holding |file_filesystem|.
  static DataElementPtr
  NewFileFilesystem(
      DataElementFilesystemURLPtr file_filesystem) {
    auto result = DataElementPtr(base::in_place);
    result->set_file_filesystem(std::move(file_filesystem));
    return result;
  }
  // Construct an instance holding |blob|.
  static DataElementPtr
  NewBlob(
      DataElementBlobPtr blob) {
    auto result = DataElementPtr(base::in_place);
    result->set_blob(std::move(blob));
    return result;
  }

  template <typename U>
  static DataElementPtr From(const U& u) {
    return mojo::TypeConverter<DataElementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataElement>::Convert(*this);
  }

  DataElement();
  ~DataElement();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = DataElementPtr>
  DataElementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataElement>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_bytes() const { return tag_ == Tag::BYTES; }

  
  DataElementBytesPtr& get_bytes() const {
    DCHECK(tag_ == Tag::BYTES);
    return *(data_.bytes);
  }

  
  void set_bytes(
      DataElementBytesPtr bytes);
  
  bool is_file() const { return tag_ == Tag::FILE; }

  
  DataElementFilePtr& get_file() const {
    DCHECK(tag_ == Tag::FILE);
    return *(data_.file);
  }

  
  void set_file(
      DataElementFilePtr file);
  
  bool is_file_filesystem() const { return tag_ == Tag::FILE_FILESYSTEM; }

  
  DataElementFilesystemURLPtr& get_file_filesystem() const {
    DCHECK(tag_ == Tag::FILE_FILESYSTEM);
    return *(data_.file_filesystem);
  }

  
  void set_file_filesystem(
      DataElementFilesystemURLPtr file_filesystem);
  
  bool is_blob() const { return tag_ == Tag::BLOB; }

  
  DataElementBlobPtr& get_blob() const {
    DCHECK(tag_ == Tag::BLOB);
    return *(data_.blob);
  }

  
  void set_blob(
      DataElementBlobPtr blob);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataElement::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<DataElement::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    DataElementBytesPtr* bytes;
    DataElementFilePtr* file;
    DataElementFilesystemURLPtr* file_filesystem;
    DataElementBlobPtr* blob;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class PLATFORM_EXPORT DataElementBytes {
 public:
  using DataView = DataElementBytesDataView;
  using Data_ = internal::DataElementBytes_Data;
  
  static constexpr uint64_t kMaximumEmbeddedDataSize = 256000ULL;

  template <typename... Args>
  static DataElementBytesPtr New(Args&&... args) {
    return DataElementBytesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataElementBytesPtr From(const U& u) {
    return mojo::TypeConverter<DataElementBytesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataElementBytes>::Convert(*this);
  }


  DataElementBytes();

  DataElementBytes(
      uint64_t length,
      const base::Optional<WTF::Vector<uint8_t>>& embedded_data,
      BytesProviderPtrInfo data);

  ~DataElementBytes();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataElementBytesPtr>
  DataElementBytesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataElementBytes>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataElementBytes::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataElementBytes::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataElementBytes_UnserializedMessageContext<
            UserType, DataElementBytes::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataElementBytes::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DataElementBytes::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataElementBytes_UnserializedMessageContext<
            UserType, DataElementBytes::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataElementBytes::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t length;
  
  base::Optional<WTF::Vector<uint8_t>> embedded_data;
  
  BytesProviderPtrInfo data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DataElementBytes);
};





class PLATFORM_EXPORT DataElementFile {
 public:
  using DataView = DataElementFileDataView;
  using Data_ = internal::DataElementFile_Data;

  template <typename... Args>
  static DataElementFilePtr New(Args&&... args) {
    return DataElementFilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataElementFilePtr From(const U& u) {
    return mojo::TypeConverter<DataElementFilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataElementFile>::Convert(*this);
  }


  DataElementFile();

  DataElementFile(
      const base::FilePath& path,
      uint64_t offset,
      uint64_t length,
      base::Optional<base::Time> expected_modification_time);

  ~DataElementFile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataElementFilePtr>
  DataElementFilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataElementFile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataElementFile::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataElementFile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataElementFile_UnserializedMessageContext<
            UserType, DataElementFile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataElementFile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DataElementFile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataElementFile_UnserializedMessageContext<
            UserType, DataElementFile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataElementFile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::FilePath path;
  
  uint64_t offset;
  
  uint64_t length;
  
  base::Optional<base::Time> expected_modification_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT DataElementFilesystemURL {
 public:
  using DataView = DataElementFilesystemURLDataView;
  using Data_ = internal::DataElementFilesystemURL_Data;

  template <typename... Args>
  static DataElementFilesystemURLPtr New(Args&&... args) {
    return DataElementFilesystemURLPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataElementFilesystemURLPtr From(const U& u) {
    return mojo::TypeConverter<DataElementFilesystemURLPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataElementFilesystemURL>::Convert(*this);
  }


  DataElementFilesystemURL();

  DataElementFilesystemURL(
      const ::blink::KURL& url,
      uint64_t offset,
      uint64_t length,
      base::Optional<base::Time> expected_modification_time);

  ~DataElementFilesystemURL();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataElementFilesystemURLPtr>
  DataElementFilesystemURLPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataElementFilesystemURL>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataElementFilesystemURL::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataElementFilesystemURL::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataElementFilesystemURL_UnserializedMessageContext<
            UserType, DataElementFilesystemURL::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataElementFilesystemURL::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DataElementFilesystemURL::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataElementFilesystemURL_UnserializedMessageContext<
            UserType, DataElementFilesystemURL::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataElementFilesystemURL::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL url;
  
  uint64_t offset;
  
  uint64_t length;
  
  base::Optional<base::Time> expected_modification_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT DataElementBlob {
 public:
  using DataView = DataElementBlobDataView;
  using Data_ = internal::DataElementBlob_Data;

  template <typename... Args>
  static DataElementBlobPtr New(Args&&... args) {
    return DataElementBlobPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataElementBlobPtr From(const U& u) {
    return mojo::TypeConverter<DataElementBlobPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataElementBlob>::Convert(*this);
  }


  DataElementBlob();

  DataElementBlob(
      ::blink::mojom::blink::BlobPtrInfo blob,
      uint64_t offset,
      uint64_t length);

  ~DataElementBlob();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataElementBlobPtr>
  DataElementBlobPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataElementBlob>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataElementBlob::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataElementBlob::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataElementBlob_UnserializedMessageContext<
            UserType, DataElementBlob::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataElementBlob::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DataElementBlob::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataElementBlob_UnserializedMessageContext<
            UserType, DataElementBlob::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataElementBlob::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::mojom::blink::BlobPtrInfo blob;
  
  uint64_t offset;
  
  uint64_t length;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DataElementBlob);
};

template <typename UnionPtrType>
DataElementPtr DataElement::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::BYTES:
      rv->set_bytes(mojo::Clone(*data_.bytes));
      break;
    case Tag::FILE:
      rv->set_file(mojo::Clone(*data_.file));
      break;
    case Tag::FILE_FILESYSTEM:
      rv->set_file_filesystem(mojo::Clone(*data_.file_filesystem));
      break;
    case Tag::BLOB:
      rv->set_blob(mojo::Clone(*data_.blob));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataElement>::value>::type*>
bool DataElement::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::BYTES:
      return mojo::Equals(*(data_.bytes), *(other.data_.bytes));
    case Tag::FILE:
      return mojo::Equals(*(data_.file), *(other.data_.file));
    case Tag::FILE_FILESYSTEM:
      return mojo::Equals(*(data_.file_filesystem), *(other.data_.file_filesystem));
    case Tag::BLOB:
      return mojo::Equals(*(data_.blob), *(other.data_.blob));
  }

  return false;
}
template <typename StructPtrType>
DataElementBytesPtr DataElementBytes::Clone() const {
  return New(
      mojo::Clone(length),
      mojo::Clone(embedded_data),
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataElementBytes>::value>::type*>
bool DataElementBytes::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->embedded_data, other_struct.embedded_data))
    return false;
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
DataElementFilePtr DataElementFile::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(offset),
      mojo::Clone(length),
      mojo::Clone(expected_modification_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataElementFile>::value>::type*>
bool DataElementFile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->expected_modification_time, other_struct.expected_modification_time))
    return false;
  return true;
}
template <typename StructPtrType>
DataElementFilesystemURLPtr DataElementFilesystemURL::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(offset),
      mojo::Clone(length),
      mojo::Clone(expected_modification_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataElementFilesystemURL>::value>::type*>
bool DataElementFilesystemURL::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->expected_modification_time, other_struct.expected_modification_time))
    return false;
  return true;
}
template <typename StructPtrType>
DataElementBlobPtr DataElementBlob::Clone() const {
  return New(
      mojo::Clone(blob),
      mojo::Clone(offset),
      mojo::Clone(length)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataElementBlob>::value>::type*>
bool DataElementBlob::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DataElementBytes::DataView,
                                         ::blink::mojom::blink::DataElementBytesPtr> {
  static bool IsNull(const ::blink::mojom::blink::DataElementBytesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DataElementBytesPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::DataElementBytes::length) length(
      const ::blink::mojom::blink::DataElementBytesPtr& input) {
    return input->length;
  }

  static const decltype(::blink::mojom::blink::DataElementBytes::embedded_data)& embedded_data(
      const ::blink::mojom::blink::DataElementBytesPtr& input) {
    return input->embedded_data;
  }

  static  decltype(::blink::mojom::blink::DataElementBytes::data)& data(
       ::blink::mojom::blink::DataElementBytesPtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::blink::DataElementBytes::DataView input, ::blink::mojom::blink::DataElementBytesPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DataElementFile::DataView,
                                         ::blink::mojom::blink::DataElementFilePtr> {
  static bool IsNull(const ::blink::mojom::blink::DataElementFilePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DataElementFilePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::DataElementFile::path)& path(
      const ::blink::mojom::blink::DataElementFilePtr& input) {
    return input->path;
  }

  static decltype(::blink::mojom::blink::DataElementFile::offset) offset(
      const ::blink::mojom::blink::DataElementFilePtr& input) {
    return input->offset;
  }

  static decltype(::blink::mojom::blink::DataElementFile::length) length(
      const ::blink::mojom::blink::DataElementFilePtr& input) {
    return input->length;
  }

  static const decltype(::blink::mojom::blink::DataElementFile::expected_modification_time)& expected_modification_time(
      const ::blink::mojom::blink::DataElementFilePtr& input) {
    return input->expected_modification_time;
  }

  static bool Read(::blink::mojom::blink::DataElementFile::DataView input, ::blink::mojom::blink::DataElementFilePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DataElementFilesystemURL::DataView,
                                         ::blink::mojom::blink::DataElementFilesystemURLPtr> {
  static bool IsNull(const ::blink::mojom::blink::DataElementFilesystemURLPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DataElementFilesystemURLPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::DataElementFilesystemURL::url)& url(
      const ::blink::mojom::blink::DataElementFilesystemURLPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::DataElementFilesystemURL::offset) offset(
      const ::blink::mojom::blink::DataElementFilesystemURLPtr& input) {
    return input->offset;
  }

  static decltype(::blink::mojom::blink::DataElementFilesystemURL::length) length(
      const ::blink::mojom::blink::DataElementFilesystemURLPtr& input) {
    return input->length;
  }

  static const decltype(::blink::mojom::blink::DataElementFilesystemURL::expected_modification_time)& expected_modification_time(
      const ::blink::mojom::blink::DataElementFilesystemURLPtr& input) {
    return input->expected_modification_time;
  }

  static bool Read(::blink::mojom::blink::DataElementFilesystemURL::DataView input, ::blink::mojom::blink::DataElementFilesystemURLPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::DataElementBlob::DataView,
                                         ::blink::mojom::blink::DataElementBlobPtr> {
  static bool IsNull(const ::blink::mojom::blink::DataElementBlobPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DataElementBlobPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::DataElementBlob::blob)& blob(
       ::blink::mojom::blink::DataElementBlobPtr& input) {
    return input->blob;
  }

  static decltype(::blink::mojom::blink::DataElementBlob::offset) offset(
      const ::blink::mojom::blink::DataElementBlobPtr& input) {
    return input->offset;
  }

  static decltype(::blink::mojom::blink::DataElementBlob::length) length(
      const ::blink::mojom::blink::DataElementBlobPtr& input) {
    return input->length;
  }

  static bool Read(::blink::mojom::blink::DataElementBlob::DataView input, ::blink::mojom::blink::DataElementBlobPtr* output);
};


template <>
struct PLATFORM_EXPORT UnionTraits<::blink::mojom::blink::DataElement::DataView,
                                        ::blink::mojom::blink::DataElementPtr> {
  static bool IsNull(const ::blink::mojom::blink::DataElementPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::DataElementPtr* output) { output->reset(); }

  static ::blink::mojom::blink::DataElement::Tag GetTag(const ::blink::mojom::blink::DataElementPtr& input) {
    return input->which();
  }

  static  ::blink::mojom::blink::DataElementBytesPtr& bytes( ::blink::mojom::blink::DataElementPtr& input) {
    return input->get_bytes();
  }

  static const ::blink::mojom::blink::DataElementFilePtr& file(const ::blink::mojom::blink::DataElementPtr& input) {
    return input->get_file();
  }

  static const ::blink::mojom::blink::DataElementFilesystemURLPtr& file_filesystem(const ::blink::mojom::blink::DataElementPtr& input) {
    return input->get_file_filesystem();
  }

  static  ::blink::mojom::blink::DataElementBlobPtr& blob( ::blink::mojom::blink::DataElementPtr& input) {
    return input->get_blob();
  }

  static bool Read(::blink::mojom::blink::DataElement::DataView input, ::blink::mojom::blink::DataElementPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_BLINK_H_