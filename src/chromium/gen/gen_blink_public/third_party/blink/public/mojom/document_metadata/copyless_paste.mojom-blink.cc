// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-params-data.h"
#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/document_metadata/copyless_paste.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_COPYLESS_PASTE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace document_metadata {
namespace blink {
Property::Property()
    : name(),
      values() {}

Property::Property(
    const WTF::String& name_in,
    ValuesPtr values_in)
    : name(std::move(name_in)),
      values(std::move(values_in)) {}

Property::~Property() = default;

bool Property::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Entity::Entity()
    : type(),
      properties() {}

Entity::Entity(
    const WTF::String& type_in,
    WTF::Vector<PropertyPtr> properties_in)
    : type(std::move(type_in)),
      properties(std::move(properties_in)) {}

Entity::~Entity() = default;

bool Entity::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebPage::WebPage()
    : url(),
      title(),
      entities() {}

WebPage::WebPage(
    const ::blink::KURL& url_in,
    const WTF::String& title_in,
    WTF::Vector<EntityPtr> entities_in)
    : url(std::move(url_in)),
      title(std::move(title_in)),
      entities(std::move(entities_in)) {}

WebPage::~WebPage() = default;

bool WebPage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
Values::Values() : tag_(Tag::BOOL_VALUES) {
  data_.bool_values = new WTF::Vector<bool>;
}

Values::~Values() {
  DestroyActive();
}


void Values::set_bool_values(
    const WTF::Vector<bool>& bool_values) {
  if (tag_ == Tag::BOOL_VALUES) {
    *(data_.bool_values) = std::move(bool_values);
  } else {
    DestroyActive();
    tag_ = Tag::BOOL_VALUES;
    data_.bool_values = new WTF::Vector<bool>(
        std::move(bool_values));
  }
}
void Values::set_long_values(
    const WTF::Vector<int64_t>& long_values) {
  if (tag_ == Tag::LONG_VALUES) {
    *(data_.long_values) = std::move(long_values);
  } else {
    DestroyActive();
    tag_ = Tag::LONG_VALUES;
    data_.long_values = new WTF::Vector<int64_t>(
        std::move(long_values));
  }
}
void Values::set_string_values(
    const WTF::Vector<WTF::String>& string_values) {
  if (tag_ == Tag::STRING_VALUES) {
    *(data_.string_values) = std::move(string_values);
  } else {
    DestroyActive();
    tag_ = Tag::STRING_VALUES;
    data_.string_values = new WTF::Vector<WTF::String>(
        std::move(string_values));
  }
}
void Values::set_entity_values(
    WTF::Vector<EntityPtr> entity_values) {
  if (tag_ == Tag::ENTITY_VALUES) {
    *(data_.entity_values) = std::move(entity_values);
  } else {
    DestroyActive();
    tag_ = Tag::ENTITY_VALUES;
    data_.entity_values = new WTF::Vector<EntityPtr>(
        std::move(entity_values));
  }
}

void Values::DestroyActive() {
  switch (tag_) {

    case Tag::BOOL_VALUES:

      delete data_.bool_values;
      break;
    case Tag::LONG_VALUES:

      delete data_.long_values;
      break;
    case Tag::STRING_VALUES:

      delete data_.string_values;
      break;
    case Tag::ENTITY_VALUES:

      delete data_.entity_values;
      break;
  }
}

bool Values::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char CopylessPaste::Name_[] = "blink.mojom.document_metadata.CopylessPaste";

class CopylessPaste_GetEntities_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CopylessPaste_GetEntities_ForwardToCallback(
      CopylessPaste::GetEntitiesCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CopylessPaste::GetEntitiesCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(CopylessPaste_GetEntities_ForwardToCallback);
};

CopylessPasteProxy::CopylessPasteProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void CopylessPasteProxy::GetEntities(
    GetEntitiesCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::CopylessPaste::GetEntities");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCopylessPaste_GetEntities_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::document_metadata::internal::CopylessPaste_GetEntities_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CopylessPaste::Name_);
  message.set_method_name("GetEntities");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new CopylessPaste_GetEntities_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class CopylessPaste_GetEntities_ProxyToResponder {
 public:
  static CopylessPaste::GetEntitiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<CopylessPaste_GetEntities_ProxyToResponder> proxy(
        new CopylessPaste_GetEntities_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&CopylessPaste_GetEntities_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~CopylessPaste_GetEntities_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    responder_ = nullptr;
  }

 private:
  CopylessPaste_GetEntities_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "CopylessPaste::GetEntitiesCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      WebPagePtr in_page);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(CopylessPaste_GetEntities_ProxyToResponder);
};

bool CopylessPaste_GetEntities_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::CopylessPaste::GetEntitiesCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::CopylessPaste_GetEntities_ResponseParams_Data* params =
      reinterpret_cast<
          internal::CopylessPaste_GetEntities_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  WebPagePtr p_page{};
  CopylessPaste_GetEntities_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadPage(&p_page))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        CopylessPaste::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_page));
  return true;
}

void CopylessPaste_GetEntities_ProxyToResponder::Run(
    WebPagePtr in_page) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kCopylessPaste_GetEntities_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::document_metadata::internal::CopylessPaste_GetEntities_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->page)::BaseType::BufferWriter
      page_writer;
  mojo::internal::Serialize<::blink::mojom::document_metadata::WebPageDataView>(
      in_page, buffer, &page_writer, &serialization_context);
  params->page.Set(
      page_writer.is_null() ? nullptr : page_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::CopylessPaste::GetEntitiesCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(CopylessPaste::Name_);
  message.set_method_name("GetEntities");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool CopylessPasteStubDispatch::Accept(
    CopylessPaste* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kCopylessPaste_GetEntities_Name: {
      break;
    }
  }
  return false;
}

// static
bool CopylessPasteStubDispatch::AcceptWithResponder(
    CopylessPaste* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kCopylessPaste_GetEntities_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::CopylessPaste::GetEntities",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::CopylessPaste_GetEntities_Params_Data* params =
          reinterpret_cast<
              internal::CopylessPaste_GetEntities_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      CopylessPaste_GetEntities_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            CopylessPaste::Name_, 0, false);
        return false;
      }
      CopylessPaste::GetEntitiesCallback callback =
          CopylessPaste_GetEntities_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetEntities(std::move(callback));
      return true;
    }
  }
  return false;
}

bool CopylessPasteRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CopylessPaste RequestValidator");

  switch (message->header()->name) {
    case internal::kCopylessPaste_GetEntities_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::CopylessPaste_GetEntities_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

bool CopylessPasteResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "CopylessPaste ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kCopylessPaste_GetEntities_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CopylessPaste_GetEntities_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
}  // namespace blink
}  // namespace document_metadata
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::document_metadata::blink::Property::DataView, ::blink::mojom::document_metadata::blink::PropertyPtr>::Read(
    ::blink::mojom::document_metadata::blink::Property::DataView input,
    ::blink::mojom::document_metadata::blink::PropertyPtr* output) {
  bool success = true;
  ::blink::mojom::document_metadata::blink::PropertyPtr result(::blink::mojom::document_metadata::blink::Property::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadValues(&result->values))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::document_metadata::blink::Entity::DataView, ::blink::mojom::document_metadata::blink::EntityPtr>::Read(
    ::blink::mojom::document_metadata::blink::Entity::DataView input,
    ::blink::mojom::document_metadata::blink::EntityPtr* output) {
  bool success = true;
  ::blink::mojom::document_metadata::blink::EntityPtr result(::blink::mojom::document_metadata::blink::Entity::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadProperties(&result->properties))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::document_metadata::blink::WebPage::DataView, ::blink::mojom::document_metadata::blink::WebPagePtr>::Read(
    ::blink::mojom::document_metadata::blink::WebPage::DataView input,
    ::blink::mojom::document_metadata::blink::WebPagePtr* output) {
  bool success = true;
  ::blink::mojom::document_metadata::blink::WebPagePtr result(::blink::mojom::document_metadata::blink::WebPage::New());
  
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadEntities(&result->entities))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::document_metadata::blink::Values::DataView, ::blink::mojom::document_metadata::blink::ValuesPtr>::Read(
    ::blink::mojom::document_metadata::blink::Values::DataView input,
    ::blink::mojom::document_metadata::blink::ValuesPtr* output) {
  using UnionType = ::blink::mojom::document_metadata::blink::Values;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::BOOL_VALUES: {
      WTF::Vector<bool> result_bool_values;
      if (!input.ReadBoolValues(&result_bool_values))
        return false;

      *output = UnionType::NewBoolValues(
          std::move(result_bool_values));
      break;
    }
    case Tag::LONG_VALUES: {
      WTF::Vector<int64_t> result_long_values;
      if (!input.ReadLongValues(&result_long_values))
        return false;

      *output = UnionType::NewLongValues(
          std::move(result_long_values));
      break;
    }
    case Tag::STRING_VALUES: {
      WTF::Vector<WTF::String> result_string_values;
      if (!input.ReadStringValues(&result_string_values))
        return false;

      *output = UnionType::NewStringValues(
          std::move(result_string_values));
      break;
    }
    case Tag::ENTITY_VALUES: {
      WTF::Vector<::blink::mojom::document_metadata::blink::EntityPtr> result_entity_values;
      if (!input.ReadEntityValues(&result_entity_values))
        return false;

      *output = UnionType::NewEntityValues(
          std::move(result_entity_values));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif