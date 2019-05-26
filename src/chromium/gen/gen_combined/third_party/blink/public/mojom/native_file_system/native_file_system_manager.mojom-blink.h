// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-blink.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-blink.h"

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
struct blink_mojom_internal_ChooseFileSystemEntryType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ChooseFileSystemEntryType& value) {
    using utype = std::underlying_type<::blink::mojom::ChooseFileSystemEntryType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ChooseFileSystemEntryType& left, const ::blink::mojom::ChooseFileSystemEntryType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ChooseFileSystemEntryType>
    : public GenericHashTraits<::blink::mojom::ChooseFileSystemEntryType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ChooseFileSystemEntryType& value) {
    return value == static_cast<::blink::mojom::ChooseFileSystemEntryType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ChooseFileSystemEntryType& slot, bool) {
    slot = static_cast<::blink::mojom::ChooseFileSystemEntryType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ChooseFileSystemEntryType& value) {
    return value == static_cast<::blink::mojom::ChooseFileSystemEntryType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class NativeFileSystemManagerProxy;

template <typename ImplRefTraits>
class NativeFileSystemManagerStub;

class NativeFileSystemManagerRequestValidator;
class NativeFileSystemManagerResponseValidator;


class PLATFORM_EXPORT NativeFileSystemManager
    : public NativeFileSystemManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NativeFileSystemManagerInterfaceBase;
  using Proxy_ = NativeFileSystemManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = NativeFileSystemManagerStub<ImplRefTraits>;

  using RequestValidator_ = NativeFileSystemManagerRequestValidator;
  using ResponseValidator_ = NativeFileSystemManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSandboxedFileSystemMinVersion = 0,
    kChooseEntriesMinVersion = 0,
  };
  virtual ~NativeFileSystemManager() {}


  using GetSandboxedFileSystemCallback = base::OnceCallback<void(::blink::mojom::blink::NativeFileSystemErrorPtr, ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr)>;
  
  virtual void GetSandboxedFileSystem(GetSandboxedFileSystemCallback callback) = 0;


  using ChooseEntriesCallback = base::OnceCallback<void(::blink::mojom::blink::NativeFileSystemErrorPtr, WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr>)>;
  
  virtual void ChooseEntries(ChooseFileSystemEntryType type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> accepts, bool include_accepts_all, ChooseEntriesCallback callback) = 0;
};

class PLATFORM_EXPORT NativeFileSystemManagerProxy
    : public NativeFileSystemManager {
 public:
  using InterfaceType = NativeFileSystemManager;

  explicit NativeFileSystemManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetSandboxedFileSystem(GetSandboxedFileSystemCallback callback) final;
  void ChooseEntries(ChooseFileSystemEntryType type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> accepts, bool include_accepts_all, ChooseEntriesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT NativeFileSystemManagerStubDispatch {
 public:
  static bool Accept(NativeFileSystemManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NativeFileSystemManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NativeFileSystemManager>>
class NativeFileSystemManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NativeFileSystemManagerStub() {}
  ~NativeFileSystemManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeFileSystemManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeFileSystemManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT NativeFileSystemManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT NativeFileSystemManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT ChooseFileSystemEntryAcceptsOption {
 public:
  using DataView = ChooseFileSystemEntryAcceptsOptionDataView;
  using Data_ = internal::ChooseFileSystemEntryAcceptsOption_Data;

  template <typename... Args>
  static ChooseFileSystemEntryAcceptsOptionPtr New(Args&&... args) {
    return ChooseFileSystemEntryAcceptsOptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChooseFileSystemEntryAcceptsOptionPtr From(const U& u) {
    return mojo::TypeConverter<ChooseFileSystemEntryAcceptsOptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChooseFileSystemEntryAcceptsOption>::Convert(*this);
  }


  ChooseFileSystemEntryAcceptsOption();

  ChooseFileSystemEntryAcceptsOption(
      const WTF::String& description,
      const WTF::Vector<WTF::String>& mime_types,
      const WTF::Vector<WTF::String>& extensions);

  ~ChooseFileSystemEntryAcceptsOption();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChooseFileSystemEntryAcceptsOptionPtr>
  ChooseFileSystemEntryAcceptsOptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChooseFileSystemEntryAcceptsOption>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChooseFileSystemEntryAcceptsOption::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChooseFileSystemEntryAcceptsOption::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChooseFileSystemEntryAcceptsOption_UnserializedMessageContext<
            UserType, ChooseFileSystemEntryAcceptsOption::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChooseFileSystemEntryAcceptsOption::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ChooseFileSystemEntryAcceptsOption::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChooseFileSystemEntryAcceptsOption_UnserializedMessageContext<
            UserType, ChooseFileSystemEntryAcceptsOption::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChooseFileSystemEntryAcceptsOption::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String description;
  
  WTF::Vector<WTF::String> mime_types;
  
  WTF::Vector<WTF::String> extensions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ChooseFileSystemEntryAcceptsOptionPtr ChooseFileSystemEntryAcceptsOption::Clone() const {
  return New(
      mojo::Clone(description),
      mojo::Clone(mime_types),
      mojo::Clone(extensions)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChooseFileSystemEntryAcceptsOption>::value>::type*>
bool ChooseFileSystemEntryAcceptsOption::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->mime_types, other_struct.mime_types))
    return false;
  if (!mojo::Equals(this->extensions, other_struct.extensions))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::DataView,
                                         ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr> {
  static bool IsNull(const ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::description)& description(
      const ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr& input) {
    return input->description;
  }

  static const decltype(::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::mime_types)& mime_types(
      const ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr& input) {
    return input->mime_types;
  }

  static const decltype(::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::extensions)& extensions(
      const ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr& input) {
    return input->extensions;
  }

  static bool Read(::blink::mojom::blink::ChooseFileSystemEntryAcceptsOption::DataView input, ::blink::mojom::blink::ChooseFileSystemEntryAcceptsOptionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_H_