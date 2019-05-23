// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-forward.h"
#include "gpu/ipc/common/mailbox.mojom.h"
#include "gpu/ipc/common/sync_token.mojom.h"
#include "services/viz/public/interfaces/compositing/copy_output_result.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "components/viz/common/frame_sinks/copy_output_request.h"




namespace viz {
namespace mojom {

class CopyOutputResultSenderProxy;

template <typename ImplRefTraits>
class CopyOutputResultSenderStub;

class CopyOutputResultSenderRequestValidator;


class  CopyOutputResultSender
    : public CopyOutputResultSenderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CopyOutputResultSenderInterfaceBase;
  using Proxy_ = CopyOutputResultSenderProxy;

  template <typename ImplRefTraits>
  using Stub_ = CopyOutputResultSenderStub<ImplRefTraits>;

  using RequestValidator_ = CopyOutputResultSenderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSendResultMinVersion = 0,
  };
  virtual ~CopyOutputResultSender() {}

  
  virtual void SendResult(std::unique_ptr<viz::CopyOutputResult> result) = 0;
};

class  CopyOutputResultSenderProxy
    : public CopyOutputResultSender {
 public:
  using InterfaceType = CopyOutputResultSender;

  explicit CopyOutputResultSenderProxy(mojo::MessageReceiverWithResponder* receiver);
  void SendResult(std::unique_ptr<viz::CopyOutputResult> result) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CopyOutputResultSenderStubDispatch {
 public:
  static bool Accept(CopyOutputResultSender* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CopyOutputResultSender* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CopyOutputResultSender>>
class CopyOutputResultSenderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CopyOutputResultSenderStub() {}
  ~CopyOutputResultSenderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CopyOutputResultSenderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CopyOutputResultSenderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CopyOutputResultSenderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  CopyOutputRequest {
 public:
  using DataView = CopyOutputRequestDataView;
  using Data_ = internal::CopyOutputRequest_Data;

  template <typename... Args>
  static CopyOutputRequestPtr New(Args&&... args) {
    return CopyOutputRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CopyOutputRequestPtr From(const U& u) {
    return mojo::TypeConverter<CopyOutputRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CopyOutputRequest>::Convert(*this);
  }


  CopyOutputRequest();

  CopyOutputRequest(
      ::viz::mojom::CopyOutputResultFormat result_format,
      const gfx::Vector2d& scale_from,
      const gfx::Vector2d& scale_to,
      const base::Optional<base::UnguessableToken>& source,
      const base::Optional<gfx::Rect>& area,
      const base::Optional<gfx::Rect>& result_selection,
      CopyOutputResultSenderPtrInfo result_sender);

  ~CopyOutputRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CopyOutputRequestPtr>
  CopyOutputRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CopyOutputRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CopyOutputRequest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CopyOutputRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CopyOutputRequest_UnserializedMessageContext<
            UserType, CopyOutputRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CopyOutputRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CopyOutputRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CopyOutputRequest_UnserializedMessageContext<
            UserType, CopyOutputRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CopyOutputRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::viz::mojom::CopyOutputResultFormat result_format;
  
  gfx::Vector2d scale_from;
  
  gfx::Vector2d scale_to;
  
  base::Optional<base::UnguessableToken> source;
  
  base::Optional<gfx::Rect> area;
  
  base::Optional<gfx::Rect> result_selection;
  
  CopyOutputResultSenderPtrInfo result_sender;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CopyOutputRequest);
};

template <typename StructPtrType>
CopyOutputRequestPtr CopyOutputRequest::Clone() const {
  return New(
      mojo::Clone(result_format),
      mojo::Clone(scale_from),
      mojo::Clone(scale_to),
      mojo::Clone(source),
      mojo::Clone(area),
      mojo::Clone(result_selection),
      mojo::Clone(result_sender)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CopyOutputRequest>::value>::type*>
bool CopyOutputRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->result_format, other_struct.result_format))
    return false;
  if (!mojo::Equals(this->scale_from, other_struct.scale_from))
    return false;
  if (!mojo::Equals(this->scale_to, other_struct.scale_to))
    return false;
  if (!mojo::Equals(this->source, other_struct.source))
    return false;
  if (!mojo::Equals(this->area, other_struct.area))
    return false;
  if (!mojo::Equals(this->result_selection, other_struct.result_selection))
    return false;
  if (!mojo::Equals(this->result_sender, other_struct.result_sender))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::CopyOutputRequest::DataView,
                                         ::viz::mojom::CopyOutputRequestPtr> {
  static bool IsNull(const ::viz::mojom::CopyOutputRequestPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::CopyOutputRequestPtr* output) { output->reset(); }

  static decltype(::viz::mojom::CopyOutputRequest::result_format) result_format(
      const ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->result_format;
  }

  static const decltype(::viz::mojom::CopyOutputRequest::scale_from)& scale_from(
      const ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->scale_from;
  }

  static const decltype(::viz::mojom::CopyOutputRequest::scale_to)& scale_to(
      const ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->scale_to;
  }

  static const decltype(::viz::mojom::CopyOutputRequest::source)& source(
      const ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->source;
  }

  static const decltype(::viz::mojom::CopyOutputRequest::area)& area(
      const ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->area;
  }

  static const decltype(::viz::mojom::CopyOutputRequest::result_selection)& result_selection(
      const ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->result_selection;
  }

  static  decltype(::viz::mojom::CopyOutputRequest::result_sender)& result_sender(
       ::viz::mojom::CopyOutputRequestPtr& input) {
    return input->result_sender;
  }

  static bool Read(::viz::mojom::CopyOutputRequest::DataView input, ::viz::mojom::CopyOutputRequestPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COPY_OUTPUT_REQUEST_MOJOM_H_