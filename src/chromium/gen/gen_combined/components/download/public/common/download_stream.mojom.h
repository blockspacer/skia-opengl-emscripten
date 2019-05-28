// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_H_

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
#include "components/download/public/common/download_stream.mojom-shared.h"
#include "components/download/public/common/download_stream.mojom-forward.h"
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
#include "components/download/public/common/download_export.h"




namespace download {
namespace mojom {

class DownloadStreamClientProxy;

template <typename ImplRefTraits>
class DownloadStreamClientStub;

class DownloadStreamClientRequestValidator;


class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamClient
    : public DownloadStreamClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DownloadStreamClientInterfaceBase;
  using Proxy_ = DownloadStreamClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = DownloadStreamClientStub<ImplRefTraits>;

  using RequestValidator_ = DownloadStreamClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnStreamCompletedMinVersion = 0,
  };
  virtual ~DownloadStreamClient() {}

  
  virtual void OnStreamCompleted(NetworkRequestStatus status) = 0;
};

class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamClientProxy
    : public DownloadStreamClient {
 public:
  using InterfaceType = DownloadStreamClient;

  explicit DownloadStreamClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStreamCompleted(NetworkRequestStatus status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamClientStubDispatch {
 public:
  static bool Accept(DownloadStreamClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DownloadStreamClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DownloadStreamClient>>
class DownloadStreamClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DownloadStreamClientStub() {}
  ~DownloadStreamClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DownloadStreamClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DownloadStreamClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class COMPONENTS_DOWNLOAD_EXPORT DownloadStreamHandle {
 public:
  using DataView = DownloadStreamHandleDataView;
  using Data_ = internal::DownloadStreamHandle_Data;

  template <typename... Args>
  static DownloadStreamHandlePtr New(Args&&... args) {
    return DownloadStreamHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DownloadStreamHandlePtr From(const U& u) {
    return mojo::TypeConverter<DownloadStreamHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DownloadStreamHandle>::Convert(*this);
  }


  DownloadStreamHandle();

  DownloadStreamHandle(
      mojo::ScopedDataPipeConsumerHandle stream,
      DownloadStreamClientRequest client_request);

  ~DownloadStreamHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DownloadStreamHandlePtr>
  DownloadStreamHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DownloadStreamHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DownloadStreamHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DownloadStreamHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DownloadStreamHandle_UnserializedMessageContext<
            UserType, DownloadStreamHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DownloadStreamHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DownloadStreamHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DownloadStreamHandle_UnserializedMessageContext<
            UserType, DownloadStreamHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DownloadStreamHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedDataPipeConsumerHandle stream;
  
  DownloadStreamClientRequest client_request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DownloadStreamHandle);
};

template <typename StructPtrType>
DownloadStreamHandlePtr DownloadStreamHandle::Clone() const {
  return New(
      mojo::Clone(stream),
      mojo::Clone(client_request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DownloadStreamHandle>::value>::type*>
bool DownloadStreamHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->stream, other_struct.stream))
    return false;
  if (!mojo::Equals(this->client_request, other_struct.client_request))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace download

namespace mojo {


template <>
struct COMPONENTS_DOWNLOAD_EXPORT StructTraits<::download::mojom::DownloadStreamHandle::DataView,
                                         ::download::mojom::DownloadStreamHandlePtr> {
  static bool IsNull(const ::download::mojom::DownloadStreamHandlePtr& input) { return !input; }
  static void SetToNull(::download::mojom::DownloadStreamHandlePtr* output) { output->reset(); }

  static  decltype(::download::mojom::DownloadStreamHandle::stream)& stream(
       ::download::mojom::DownloadStreamHandlePtr& input) {
    return input->stream;
  }

  static  decltype(::download::mojom::DownloadStreamHandle::client_request)& client_request(
       ::download::mojom::DownloadStreamHandlePtr& input) {
    return input->client_request;
  }

  static bool Read(::download::mojom::DownloadStreamHandle::DataView input, ::download::mojom::DownloadStreamHandlePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_H_