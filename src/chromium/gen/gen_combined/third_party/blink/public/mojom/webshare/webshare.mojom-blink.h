// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/webshare/webshare.mojom-shared.h"
#include "third_party/blink/public/mojom/webshare/webshare.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"
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
struct blink_mojom_internal_ShareError_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ShareError& value) {
    using utype = std::underlying_type<::blink::mojom::ShareError>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ShareError& left, const ::blink::mojom::ShareError& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ShareError>
    : public GenericHashTraits<::blink::mojom::ShareError> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ShareError& value) {
    return value == static_cast<::blink::mojom::ShareError>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ShareError& slot, bool) {
    slot = static_cast<::blink::mojom::ShareError>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ShareError& value) {
    return value == static_cast<::blink::mojom::ShareError>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class ShareServiceProxy;

template <typename ImplRefTraits>
class ShareServiceStub;

class ShareServiceRequestValidator;
class ShareServiceResponseValidator;


class PLATFORM_EXPORT ShareService
    : public ShareServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ShareServiceInterfaceBase;
  using Proxy_ = ShareServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ShareServiceStub<ImplRefTraits>;

  using RequestValidator_ = ShareServiceRequestValidator;
  using ResponseValidator_ = ShareServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kShareMinVersion = 0,
  };
  virtual ~ShareService() {}


  using ShareCallback = base::OnceCallback<void(ShareError)>;
  
  virtual void Share(const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, WTF::Vector<SharedFilePtr> files, ShareCallback callback) = 0;
};

class PLATFORM_EXPORT ShareServiceProxy
    : public ShareService {
 public:
  using InterfaceType = ShareService;

  explicit ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Share(const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, WTF::Vector<SharedFilePtr> files, ShareCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ShareServiceStubDispatch {
 public:
  static bool Accept(ShareService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ShareService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ShareService>>
class ShareServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ShareServiceStub() {}
  ~ShareServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ShareServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ShareServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ShareServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ShareServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT SharedFile {
 public:
  using DataView = SharedFileDataView;
  using Data_ = internal::SharedFile_Data;

  template <typename... Args>
  static SharedFilePtr New(Args&&... args) {
    return SharedFilePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedFilePtr From(const U& u) {
    return mojo::TypeConverter<SharedFilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedFile>::Convert(*this);
  }


  SharedFile();

  SharedFile(
      const WTF::String& name,
      const scoped_refptr<::blink::BlobDataHandle>& blob);

  ~SharedFile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedFilePtr>
  SharedFilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedFile>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedFile::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedFile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedFile_UnserializedMessageContext<
            UserType, SharedFile::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedFile::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SharedFile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedFile_UnserializedMessageContext<
            UserType, SharedFile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedFile::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  scoped_refptr<::blink::BlobDataHandle> blob;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SharedFilePtr SharedFile::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(blob)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedFile>::value>::type*>
bool SharedFile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::SharedFile::DataView,
                                         ::blink::mojom::blink::SharedFilePtr> {
  static bool IsNull(const ::blink::mojom::blink::SharedFilePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::SharedFilePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::SharedFile::name)& name(
      const ::blink::mojom::blink::SharedFilePtr& input) {
    return input->name;
  }

  static  decltype(::blink::mojom::blink::SharedFile::blob)& blob(
       ::blink::mojom::blink::SharedFilePtr& input) {
    return input->blob;
  }

  static bool Read(::blink::mojom::blink::SharedFile::DataView input, ::blink::mojom::blink::SharedFilePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_BLINK_H_