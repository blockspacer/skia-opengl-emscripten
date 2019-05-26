// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_H_

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
#include "third_party/blink/public/mojom/webshare/webshare.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"
#include "url/mojom/url.mojom.h"
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

class ShareServiceProxy;

template <typename ImplRefTraits>
class ShareServiceStub;

class ShareServiceRequestValidator;
class ShareServiceResponseValidator;


class BLINK_COMMON_EXPORT ShareService
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
  
  virtual void Share(const std::string& title, const std::string& text, const GURL& url, std::vector<SharedFilePtr> files, ShareCallback callback) = 0;
};

class BLINK_COMMON_EXPORT ShareServiceProxy
    : public ShareService {
 public:
  using InterfaceType = ShareService;

  explicit ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Share(const std::string& title, const std::string& text, const GURL& url, std::vector<SharedFilePtr> files, ShareCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ShareServiceStubDispatch {
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
class BLINK_COMMON_EXPORT ShareServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ShareServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT SharedFile {
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
      const std::string& name,
      ::blink::mojom::SerializedBlobPtr blob);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedFile::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string name;
  
  ::blink::mojom::SerializedBlobPtr blob;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SharedFile);
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SharedFile::DataView,
                                         ::blink::mojom::SharedFilePtr> {
  static bool IsNull(const ::blink::mojom::SharedFilePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SharedFilePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::SharedFile::name)& name(
      const ::blink::mojom::SharedFilePtr& input) {
    return input->name;
  }

  static  decltype(::blink::mojom::SharedFile::blob)& blob(
       ::blink::mojom::SharedFilePtr& input) {
    return input->blob;
  }

  static bool Read(::blink::mojom::SharedFile::DataView input, ::blink::mojom::SharedFilePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_H_