// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_H_

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
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-forward.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom.h"
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

class NativeFileSystemDirectoryHandleProxy;

template <typename ImplRefTraits>
class NativeFileSystemDirectoryHandleStub;

class NativeFileSystemDirectoryHandleRequestValidator;
class NativeFileSystemDirectoryHandleResponseValidator;


class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandle
    : public NativeFileSystemDirectoryHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NativeFileSystemDirectoryHandleInterfaceBase;
  using Proxy_ = NativeFileSystemDirectoryHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = NativeFileSystemDirectoryHandleStub<ImplRefTraits>;

  using RequestValidator_ = NativeFileSystemDirectoryHandleRequestValidator;
  using ResponseValidator_ = NativeFileSystemDirectoryHandleResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetFileMinVersion = 0,
    kGetDirectoryMinVersion = 0,
    kGetEntriesMinVersion = 0,
    kMoveFromMinVersion = 0,
    kCopyFromMinVersion = 0,
    kRemoveMinVersion = 0,
    kTransferMinVersion = 0,
  };
  virtual ~NativeFileSystemDirectoryHandle() {}


  using GetFileCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, ::blink::mojom::NativeFileSystemFileHandlePtr)>;
  
  virtual void GetFile(const std::string& name, bool create, GetFileCallback callback) = 0;


  using GetDirectoryCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, NativeFileSystemDirectoryHandlePtr)>;
  
  virtual void GetDirectory(const std::string& name, bool create, GetDirectoryCallback callback) = 0;


  using GetEntriesCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, std::vector<NativeFileSystemEntryPtr>)>;
  
  virtual void GetEntries(GetEntriesCallback callback) = 0;


  using MoveFromCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, NativeFileSystemEntryPtr)>;
  
  virtual void MoveFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, MoveFromCallback callback) = 0;


  using CopyFromCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, NativeFileSystemEntryPtr)>;
  
  virtual void CopyFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, CopyFromCallback callback) = 0;


  using RemoveCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr)>;
  
  virtual void Remove(bool recurse, RemoveCallback callback) = 0;

  
  virtual void Transfer(::blink::mojom::NativeFileSystemTransferTokenRequest token) = 0;
};

class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandleProxy
    : public NativeFileSystemDirectoryHandle {
 public:
  using InterfaceType = NativeFileSystemDirectoryHandle;

  explicit NativeFileSystemDirectoryHandleProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetFile(const std::string& name, bool create, GetFileCallback callback) final;
  void GetDirectory(const std::string& name, bool create, GetDirectoryCallback callback) final;
  void GetEntries(GetEntriesCallback callback) final;
  void MoveFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, MoveFromCallback callback) final;
  void CopyFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, CopyFromCallback callback) final;
  void Remove(bool recurse, RemoveCallback callback) final;
  void Transfer(::blink::mojom::NativeFileSystemTransferTokenRequest token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandleStubDispatch {
 public:
  static bool Accept(NativeFileSystemDirectoryHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NativeFileSystemDirectoryHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NativeFileSystemDirectoryHandle>>
class NativeFileSystemDirectoryHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NativeFileSystemDirectoryHandleStub() {}
  ~NativeFileSystemDirectoryHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeFileSystemDirectoryHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeFileSystemDirectoryHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandleResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_COMMON_EXPORT NativeFileSystemHandle {
 public:
  using DataView = NativeFileSystemHandleDataView;
  using Data_ = internal::NativeFileSystemHandle_Data;
  using Tag = Data_::NativeFileSystemHandle_Tag;

  static NativeFileSystemHandlePtr New() {
    return NativeFileSystemHandlePtr(base::in_place);
  }
  // Construct an instance holding |file|.
  static NativeFileSystemHandlePtr
  NewFile(
      ::blink::mojom::NativeFileSystemFileHandlePtrInfo file) {
    auto result = NativeFileSystemHandlePtr(base::in_place);
    result->set_file(std::move(file));
    return result;
  }
  // Construct an instance holding |directory|.
  static NativeFileSystemHandlePtr
  NewDirectory(
      NativeFileSystemDirectoryHandlePtrInfo directory) {
    auto result = NativeFileSystemHandlePtr(base::in_place);
    result->set_directory(std::move(directory));
    return result;
  }

  template <typename U>
  static NativeFileSystemHandlePtr From(const U& u) {
    return mojo::TypeConverter<NativeFileSystemHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativeFileSystemHandle>::Convert(*this);
  }

  NativeFileSystemHandle();
  ~NativeFileSystemHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = NativeFileSystemHandlePtr>
  NativeFileSystemHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativeFileSystemHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_file() const { return tag_ == Tag::FILE; }

  
  ::blink::mojom::NativeFileSystemFileHandlePtrInfo& get_file() const {
    DCHECK(tag_ == Tag::FILE);
    return *(data_.file);
  }

  
  void set_file(
      ::blink::mojom::NativeFileSystemFileHandlePtrInfo file);
  
  bool is_directory() const { return tag_ == Tag::DIRECTORY; }

  
  NativeFileSystemDirectoryHandlePtrInfo& get_directory() const {
    DCHECK(tag_ == Tag::DIRECTORY);
    return *(data_.directory);
  }

  
  void set_directory(
      NativeFileSystemDirectoryHandlePtrInfo directory);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativeFileSystemHandle::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<NativeFileSystemHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    ::blink::mojom::NativeFileSystemFileHandlePtrInfo* file;
    NativeFileSystemDirectoryHandlePtrInfo* directory;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class BLINK_COMMON_EXPORT NativeFileSystemEntry {
 public:
  using DataView = NativeFileSystemEntryDataView;
  using Data_ = internal::NativeFileSystemEntry_Data;

  template <typename... Args>
  static NativeFileSystemEntryPtr New(Args&&... args) {
    return NativeFileSystemEntryPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativeFileSystemEntryPtr From(const U& u) {
    return mojo::TypeConverter<NativeFileSystemEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativeFileSystemEntry>::Convert(*this);
  }


  NativeFileSystemEntry();

  NativeFileSystemEntry(
      NativeFileSystemHandlePtr entry_handle,
      const std::string& name);

  ~NativeFileSystemEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativeFileSystemEntryPtr>
  NativeFileSystemEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativeFileSystemEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativeFileSystemEntry::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativeFileSystemEntry::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativeFileSystemEntry_UnserializedMessageContext<
            UserType, NativeFileSystemEntry::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativeFileSystemEntry::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NativeFileSystemEntry::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativeFileSystemEntry_UnserializedMessageContext<
            UserType, NativeFileSystemEntry::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativeFileSystemEntry::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  NativeFileSystemHandlePtr entry_handle;
  
  std::string name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemEntry);
};

template <typename UnionPtrType>
NativeFileSystemHandlePtr NativeFileSystemHandle::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::FILE:
      rv->set_file(mojo::Clone(*data_.file));
      break;
    case Tag::DIRECTORY:
      rv->set_directory(mojo::Clone(*data_.directory));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativeFileSystemHandle>::value>::type*>
bool NativeFileSystemHandle::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::FILE:
      return mojo::Equals(*(data_.file), *(other.data_.file));
    case Tag::DIRECTORY:
      return mojo::Equals(*(data_.directory), *(other.data_.directory));
  }

  return false;
}
template <typename StructPtrType>
NativeFileSystemEntryPtr NativeFileSystemEntry::Clone() const {
  return New(
      mojo::Clone(entry_handle),
      mojo::Clone(name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativeFileSystemEntry>::value>::type*>
bool NativeFileSystemEntry::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->entry_handle, other_struct.entry_handle))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::NativeFileSystemEntry::DataView,
                                         ::blink::mojom::NativeFileSystemEntryPtr> {
  static bool IsNull(const ::blink::mojom::NativeFileSystemEntryPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::NativeFileSystemEntryPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::NativeFileSystemEntry::entry_handle)& entry_handle(
       ::blink::mojom::NativeFileSystemEntryPtr& input) {
    return input->entry_handle;
  }

  static const decltype(::blink::mojom::NativeFileSystemEntry::name)& name(
      const ::blink::mojom::NativeFileSystemEntryPtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::NativeFileSystemEntry::DataView input, ::blink::mojom::NativeFileSystemEntryPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::NativeFileSystemHandle::DataView,
                                        ::blink::mojom::NativeFileSystemHandlePtr> {
  static bool IsNull(const ::blink::mojom::NativeFileSystemHandlePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::NativeFileSystemHandlePtr* output) { output->reset(); }

  static ::blink::mojom::NativeFileSystemHandle::Tag GetTag(const ::blink::mojom::NativeFileSystemHandlePtr& input) {
    return input->which();
  }

  static  ::blink::mojom::NativeFileSystemFileHandlePtrInfo& file( ::blink::mojom::NativeFileSystemHandlePtr& input) {
    return input->get_file();
  }

  static  ::blink::mojom::NativeFileSystemDirectoryHandlePtrInfo& directory( ::blink::mojom::NativeFileSystemHandlePtr& input) {
    return input->get_directory();
  }

  static bool Read(::blink::mojom::NativeFileSystemHandle::DataView input, ::blink::mojom::NativeFileSystemHandlePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_H_