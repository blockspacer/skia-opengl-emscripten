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

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-blink.h"

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

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-params-data.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_AREA_MOJOM_BLINK_JUMBO_H_
#endif
namespace blink {
namespace mojom {
namespace blink {
KeyValue::KeyValue()
    : key(),
      value() {}

KeyValue::KeyValue(
    const WTF::Vector<uint8_t>& key_in,
    const WTF::Vector<uint8_t>& value_in)
    : key(std::move(key_in)),
      value(std::move(value_in)) {}

KeyValue::~KeyValue() = default;

bool KeyValue::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char StorageAreaObserver::Name_[] = "blink.mojom.StorageAreaObserver";

StorageAreaObserverProxy::StorageAreaObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StorageAreaObserverProxy::KeyAdded(
    const WTF::Vector<uint8_t>& in_key, const WTF::Vector<uint8_t>& in_value, const WTF::String& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageAreaObserver::KeyAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageAreaObserver_KeyAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageAreaObserver_KeyAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in StorageAreaObserver.KeyAdded request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in StorageAreaObserver.KeyAdded request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageAreaObserver.KeyAdded request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageAreaObserver::Name_);
  message.set_method_name("KeyAdded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StorageAreaObserverProxy::KeyChanged(
    const WTF::Vector<uint8_t>& in_key, const WTF::Vector<uint8_t>& in_new_value, const WTF::Vector<uint8_t>& in_old_value, const WTF::String& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageAreaObserver::KeyChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageAreaObserver_KeyChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageAreaObserver_KeyChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in StorageAreaObserver.KeyChanged request");
  typename decltype(params->new_value)::BaseType::BufferWriter
      new_value_writer;
  const mojo::internal::ContainerValidateParams new_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_new_value, buffer, &new_value_writer, &new_value_validate_params,
      &serialization_context);
  params->new_value.Set(
      new_value_writer.is_null() ? nullptr : new_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_value in StorageAreaObserver.KeyChanged request");
  typename decltype(params->old_value)::BaseType::BufferWriter
      old_value_writer;
  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_old_value, buffer, &old_value_writer, &old_value_validate_params,
      &serialization_context);
  params->old_value.Set(
      old_value_writer.is_null() ? nullptr : old_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_value in StorageAreaObserver.KeyChanged request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageAreaObserver.KeyChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageAreaObserver::Name_);
  message.set_method_name("KeyChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StorageAreaObserverProxy::KeyDeleted(
    const WTF::Vector<uint8_t>& in_key, const WTF::Vector<uint8_t>& in_old_value, const WTF::String& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageAreaObserver::KeyDeleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageAreaObserver_KeyDeleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageAreaObserver_KeyDeleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in StorageAreaObserver.KeyDeleted request");
  typename decltype(params->old_value)::BaseType::BufferWriter
      old_value_writer;
  const mojo::internal::ContainerValidateParams old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_old_value, buffer, &old_value_writer, &old_value_validate_params,
      &serialization_context);
  params->old_value.Set(
      old_value_writer.is_null() ? nullptr : old_value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->old_value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null old_value in StorageAreaObserver.KeyDeleted request");
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageAreaObserver.KeyDeleted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageAreaObserver::Name_);
  message.set_method_name("KeyDeleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StorageAreaObserverProxy::AllDeleted(
    const WTF::String& in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageAreaObserver::AllDeleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageAreaObserver_AllDeleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageAreaObserver_AllDeleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageAreaObserver.AllDeleted request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageAreaObserver::Name_);
  message.set_method_name("AllDeleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StorageAreaObserverProxy::ShouldSendOldValueOnMutations(
    bool in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageAreaObserver::ShouldSendOldValueOnMutations");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageAreaObserver_ShouldSendOldValueOnMutations_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->value = in_value;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageAreaObserver::Name_);
  message.set_method_name("ShouldSendOldValueOnMutations");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool StorageAreaObserverStubDispatch::Accept(
    StorageAreaObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStorageAreaObserver_KeyAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageAreaObserver::KeyAdded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageAreaObserver_KeyAdded_Params_Data* params =
          reinterpret_cast<internal::StorageAreaObserver_KeyAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_key{};
      WTF::Vector<uint8_t> p_value{};
      WTF::String p_source{};
      StorageAreaObserver_KeyAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageAreaObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->KeyAdded(
std::move(p_key), 
std::move(p_value), 
std::move(p_source));
      return true;
    }
    case internal::kStorageAreaObserver_KeyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageAreaObserver::KeyChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageAreaObserver_KeyChanged_Params_Data* params =
          reinterpret_cast<internal::StorageAreaObserver_KeyChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_key{};
      WTF::Vector<uint8_t> p_new_value{};
      WTF::Vector<uint8_t> p_old_value{};
      WTF::String p_source{};
      StorageAreaObserver_KeyChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadNewValue(&p_new_value))
        success = false;
      if (!input_data_view.ReadOldValue(&p_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageAreaObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->KeyChanged(
std::move(p_key), 
std::move(p_new_value), 
std::move(p_old_value), 
std::move(p_source));
      return true;
    }
    case internal::kStorageAreaObserver_KeyDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageAreaObserver::KeyDeleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageAreaObserver_KeyDeleted_Params_Data* params =
          reinterpret_cast<internal::StorageAreaObserver_KeyDeleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_key{};
      WTF::Vector<uint8_t> p_old_value{};
      WTF::String p_source{};
      StorageAreaObserver_KeyDeleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadOldValue(&p_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageAreaObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->KeyDeleted(
std::move(p_key), 
std::move(p_old_value), 
std::move(p_source));
      return true;
    }
    case internal::kStorageAreaObserver_AllDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageAreaObserver::AllDeleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageAreaObserver_AllDeleted_Params_Data* params =
          reinterpret_cast<internal::StorageAreaObserver_AllDeleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_source{};
      StorageAreaObserver_AllDeleted_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageAreaObserver::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AllDeleted(
std::move(p_source));
      return true;
    }
    case internal::kStorageAreaObserver_ShouldSendOldValueOnMutations_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageAreaObserver::ShouldSendOldValueOnMutations",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data* params =
          reinterpret_cast<internal::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_value{};
      StorageAreaObserver_ShouldSendOldValueOnMutations_ParamsDataView input_data_view(params, &serialization_context);
      
      p_value = input_data_view.value();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageAreaObserver::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ShouldSendOldValueOnMutations(
std::move(p_value));
      return true;
    }
  }
  return false;
}

// static
bool StorageAreaObserverStubDispatch::AcceptWithResponder(
    StorageAreaObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStorageAreaObserver_KeyAdded_Name: {
      break;
    }
    case internal::kStorageAreaObserver_KeyChanged_Name: {
      break;
    }
    case internal::kStorageAreaObserver_KeyDeleted_Name: {
      break;
    }
    case internal::kStorageAreaObserver_AllDeleted_Name: {
      break;
    }
    case internal::kStorageAreaObserver_ShouldSendOldValueOnMutations_Name: {
      break;
    }
  }
  return false;
}

bool StorageAreaObserverRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StorageAreaObserver RequestValidator");

  switch (message->header()->name) {
    case internal::kStorageAreaObserver_KeyAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageAreaObserver_KeyAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageAreaObserver_KeyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageAreaObserver_KeyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageAreaObserver_KeyDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageAreaObserver_KeyDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageAreaObserver_AllDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageAreaObserver_AllDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageAreaObserver_ShouldSendOldValueOnMutations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageAreaObserver_ShouldSendOldValueOnMutations_Params_Data>(
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

const char StorageAreaGetAllCallback::Name_[] = "blink.mojom.StorageAreaGetAllCallback";

StorageAreaGetAllCallbackProxy::StorageAreaGetAllCallbackProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StorageAreaGetAllCallbackProxy::Complete(
    bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageAreaGetAllCallback::Complete");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageAreaGetAllCallback_Complete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageAreaGetAllCallback_Complete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageAreaGetAllCallback::Name_);
  message.set_method_name("Complete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool StorageAreaGetAllCallbackStubDispatch::Accept(
    StorageAreaGetAllCallback* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStorageAreaGetAllCallback_Complete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageAreaGetAllCallback::Complete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageAreaGetAllCallback_Complete_Params_Data* params =
          reinterpret_cast<internal::StorageAreaGetAllCallback_Complete_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      bool p_success{};
      StorageAreaGetAllCallback_Complete_ParamsDataView input_data_view(params, &serialization_context);
      
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageAreaGetAllCallback::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Complete(
std::move(p_success));
      return true;
    }
  }
  return false;
}

// static
bool StorageAreaGetAllCallbackStubDispatch::AcceptWithResponder(
    StorageAreaGetAllCallback* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStorageAreaGetAllCallback_Complete_Name: {
      break;
    }
  }
  return false;
}

bool StorageAreaGetAllCallbackRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StorageAreaGetAllCallback RequestValidator");

  switch (message->header()->name) {
    case internal::kStorageAreaGetAllCallback_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageAreaGetAllCallback_Complete_Params_Data>(
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

const char StorageArea::Name_[] = "blink.mojom.StorageArea";
constexpr uint32_t StorageArea::kPerStorageAreaQuota;
constexpr uint32_t StorageArea::kPerStorageAreaOverQuotaAllowance;
bool StorageArea::GetAll(StorageAreaGetAllCallbackAssociatedPtrInfo complete_callback, bool* out_success, WTF::Vector<KeyValuePtr>* out_data) {
  NOTREACHED();
  return false;
}

class StorageArea_Put_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StorageArea_Put_ForwardToCallback(
      StorageArea::PutCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StorageArea::PutCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StorageArea_Put_ForwardToCallback);
};

class StorageArea_Delete_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StorageArea_Delete_ForwardToCallback(
      StorageArea::DeleteCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StorageArea::DeleteCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StorageArea_Delete_ForwardToCallback);
};

class StorageArea_DeleteAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StorageArea_DeleteAll_ForwardToCallback(
      StorageArea::DeleteAllCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StorageArea::DeleteAllCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StorageArea_DeleteAll_ForwardToCallback);
};

class StorageArea_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StorageArea_Get_ForwardToCallback(
      StorageArea::GetCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StorageArea::GetCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StorageArea_Get_ForwardToCallback);
};
class StorageArea_GetAll_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  StorageArea_GetAll_HandleSyncResponse(
      bool* result, bool* out_success, WTF::Vector<KeyValuePtr>* out_data)
      : result_(result), out_success_(out_success), out_data_(out_data) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  bool* out_success_;
  WTF::Vector<KeyValuePtr>* out_data_;DISALLOW_COPY_AND_ASSIGN(StorageArea_GetAll_HandleSyncResponse);
};

class StorageArea_GetAll_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StorageArea_GetAll_ForwardToCallback(
      StorageArea::GetAllCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StorageArea::GetAllCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(StorageArea_GetAll_ForwardToCallback);
};

StorageAreaProxy::StorageAreaProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void StorageAreaProxy::AddObserver(
    StorageAreaObserverAssociatedPtrInfo in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::AddObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_AddObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_AddObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::StorageAreaObserverAssociatedPtrInfoDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid observer in StorageArea.AddObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("AddObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void StorageAreaProxy::Put(
    const WTF::Vector<uint8_t>& in_key, const WTF::Vector<uint8_t>& in_value, const base::Optional<WTF::Vector<uint8_t>>& in_client_old_value, const WTF::String& in_source, PutCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::Put");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_Put_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in StorageArea.Put request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in StorageArea.Put request");
  typename decltype(params->client_old_value)::BaseType::BufferWriter
      client_old_value_writer;
  const mojo::internal::ContainerValidateParams client_old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_client_old_value, buffer, &client_old_value_writer, &client_old_value_validate_params,
      &serialization_context);
  params->client_old_value.Set(
      client_old_value_writer.is_null() ? nullptr : client_old_value_writer.data());
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageArea.Put request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("Put");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StorageArea_Put_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void StorageAreaProxy::Delete(
    const WTF::Vector<uint8_t>& in_key, const base::Optional<WTF::Vector<uint8_t>>& in_client_old_value, const WTF::String& in_source, DeleteCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::Delete");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_Delete_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in StorageArea.Delete request");
  typename decltype(params->client_old_value)::BaseType::BufferWriter
      client_old_value_writer;
  const mojo::internal::ContainerValidateParams client_old_value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_client_old_value, buffer, &client_old_value_writer, &client_old_value_validate_params,
      &serialization_context);
  params->client_old_value.Set(
      client_old_value_writer.is_null() ? nullptr : client_old_value_writer.data());
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageArea.Delete request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("Delete");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StorageArea_Delete_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void StorageAreaProxy::DeleteAll(
    const WTF::String& in_source, DeleteAllCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::DeleteAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_DeleteAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_DeleteAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->source)::BaseType::BufferWriter
      source_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_source, buffer, &source_writer, &serialization_context);
  params->source.Set(
      source_writer.is_null() ? nullptr : source_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in StorageArea.DeleteAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("DeleteAll");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StorageArea_DeleteAll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void StorageAreaProxy::Get(
    const WTF::Vector<uint8_t>& in_key, GetCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::Get");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_Get_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->key)::BaseType::BufferWriter
      key_writer;
  const mojo::internal::ContainerValidateParams key_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_key, buffer, &key_writer, &key_validate_params,
      &serialization_context);
  params->key.Set(
      key_writer.is_null() ? nullptr : key_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->key.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null key in StorageArea.Get request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("Get");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StorageArea_Get_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
bool StorageAreaProxy::GetAll(
    StorageAreaGetAllCallbackAssociatedPtrInfo param_complete_callback, bool* out_param_success, WTF::Vector<KeyValuePtr>* out_param_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::GetAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_GetAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::StorageAreaGetAllCallbackAssociatedPtrInfoDataView>(
      param_complete_callback, &params->complete_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->complete_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid complete_callback in StorageArea.GetAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("GetAll");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StorageArea_GetAll_HandleSyncResponse(
          &result, out_param_success, out_param_data));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
  return result;
}

void StorageAreaProxy::GetAll(
    StorageAreaGetAllCallbackAssociatedPtrInfo in_complete_callback, GetAllCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::GetAll");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_GetAll_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::blink::mojom::StorageAreaGetAllCallbackAssociatedPtrInfoDataView>(
      in_complete_callback, &params->complete_callback, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->complete_callback),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid complete_callback in StorageArea.GetAll request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("GetAll");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new StorageArea_GetAll_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}
class StorageArea_Put_ProxyToResponder {
 public:
  static StorageArea::PutCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StorageArea_Put_ProxyToResponder> proxy(
        new StorageArea_Put_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StorageArea_Put_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StorageArea_Put_ProxyToResponder() {
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
  StorageArea_Put_ProxyToResponder(
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
        << "StorageArea::PutCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StorageArea_Put_ProxyToResponder);
};

bool StorageArea_Put_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::PutCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StorageArea_Put_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StorageArea_Put_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  StorageArea_Put_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        StorageArea::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void StorageArea_Put_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_Put_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_Put_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::PutCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("Put");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class StorageArea_Delete_ProxyToResponder {
 public:
  static StorageArea::DeleteCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StorageArea_Delete_ProxyToResponder> proxy(
        new StorageArea_Delete_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StorageArea_Delete_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StorageArea_Delete_ProxyToResponder() {
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
  StorageArea_Delete_ProxyToResponder(
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
        << "StorageArea::DeleteCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StorageArea_Delete_ProxyToResponder);
};

bool StorageArea_Delete_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::DeleteCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StorageArea_Delete_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StorageArea_Delete_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  StorageArea_Delete_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        StorageArea::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void StorageArea_Delete_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_Delete_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_Delete_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::DeleteCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("Delete");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class StorageArea_DeleteAll_ProxyToResponder {
 public:
  static StorageArea::DeleteAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StorageArea_DeleteAll_ProxyToResponder> proxy(
        new StorageArea_DeleteAll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StorageArea_DeleteAll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StorageArea_DeleteAll_ProxyToResponder() {
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
  StorageArea_DeleteAll_ProxyToResponder(
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
        << "StorageArea::DeleteAllCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StorageArea_DeleteAll_ProxyToResponder);
};

bool StorageArea_DeleteAll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::DeleteAllCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StorageArea_DeleteAll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StorageArea_DeleteAll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  StorageArea_DeleteAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        StorageArea::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void StorageArea_DeleteAll_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_DeleteAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_DeleteAll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::DeleteAllCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("DeleteAll");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class StorageArea_Get_ProxyToResponder {
 public:
  static StorageArea::GetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StorageArea_Get_ProxyToResponder> proxy(
        new StorageArea_Get_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StorageArea_Get_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StorageArea_Get_ProxyToResponder() {
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
  StorageArea_Get_ProxyToResponder(
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
        << "StorageArea::GetCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, const WTF::Vector<uint8_t>& in_value);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StorageArea_Get_ProxyToResponder);
};

bool StorageArea_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::GetCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StorageArea_Get_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StorageArea_Get_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WTF::Vector<uint8_t> p_value{};
  StorageArea_Get_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        StorageArea::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_value));
  return true;
}

void StorageArea_Get_ProxyToResponder::Run(
    bool in_success, const WTF::Vector<uint8_t>& in_value) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_Get_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_Get_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::GetCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("Get");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class StorageArea_GetAll_ProxyToResponder {
 public:
  static StorageArea::GetAllCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<StorageArea_GetAll_ProxyToResponder> proxy(
        new StorageArea_GetAll_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&StorageArea_GetAll_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~StorageArea_GetAll_ProxyToResponder() {
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
  StorageArea_GetAll_ProxyToResponder(
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
        << "StorageArea::GetAllCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_success, WTF::Vector<KeyValuePtr> in_data);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(StorageArea_GetAll_ProxyToResponder);
};

bool StorageArea_GetAll_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::StorageArea::GetAllCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::StorageArea_GetAll_ResponseParams_Data* params =
      reinterpret_cast<
          internal::StorageArea_GetAll_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WTF::Vector<KeyValuePtr> p_data{};
  StorageArea_GetAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        StorageArea::Name_, 5, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success), 
std::move(p_data));
  return true;
}

void StorageArea_GetAll_ProxyToResponder::Run(
    bool in_success, WTF::Vector<KeyValuePtr> in_data) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kStorageArea_GetAll_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::blink::mojom::internal::StorageArea_GetAll_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  const mojo::internal::ContainerValidateParams data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::KeyValueDataView>>(
      in_data, buffer, &data_writer, &data_validate_params,
      &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::GetAllCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(StorageArea::Name_);
  message.set_method_name("GetAll");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
bool StorageArea_GetAll_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::StorageArea_GetAll_ResponseParams_Data* params =
      reinterpret_cast<internal::StorageArea_GetAll_ResponseParams_Data*>(
          message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WTF::Vector<KeyValuePtr> p_data{};
  StorageArea_GetAll_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!input_data_view.ReadData(&p_data))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        StorageArea::Name_, 5, true);
    return false;
  }
  *out_success_ = std::move(p_success);
  *out_data_ = std::move(p_data);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

// static
bool StorageAreaStubDispatch::Accept(
    StorageArea* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kStorageArea_AddObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::AddObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::StorageArea_AddObserver_Params_Data* params =
          reinterpret_cast<internal::StorageArea_AddObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      StorageAreaObserverAssociatedPtrInfo p_observer{};
      StorageArea_AddObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageArea::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddObserver(
std::move(p_observer));
      return true;
    }
    case internal::kStorageArea_Put_Name: {
      break;
    }
    case internal::kStorageArea_Delete_Name: {
      break;
    }
    case internal::kStorageArea_DeleteAll_Name: {
      break;
    }
    case internal::kStorageArea_Get_Name: {
      break;
    }
    case internal::kStorageArea_GetAll_Name: {
      break;
    }
  }
  return false;
}

// static
bool StorageAreaStubDispatch::AcceptWithResponder(
    StorageArea* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kStorageArea_AddObserver_Name: {
      break;
    }
    case internal::kStorageArea_Put_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::Put",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::StorageArea_Put_Params_Data* params =
          reinterpret_cast<
              internal::StorageArea_Put_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_key{};
      WTF::Vector<uint8_t> p_value{};
      base::Optional<WTF::Vector<uint8_t>> p_client_old_value{};
      WTF::String p_source{};
      StorageArea_Put_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!input_data_view.ReadClientOldValue(&p_client_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageArea::Name_, 1, false);
        return false;
      }
      StorageArea::PutCallback callback =
          StorageArea_Put_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Put(
std::move(p_key), 
std::move(p_value), 
std::move(p_client_old_value), 
std::move(p_source), std::move(callback));
      return true;
    }
    case internal::kStorageArea_Delete_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::Delete",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::StorageArea_Delete_Params_Data* params =
          reinterpret_cast<
              internal::StorageArea_Delete_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_key{};
      base::Optional<WTF::Vector<uint8_t>> p_client_old_value{};
      WTF::String p_source{};
      StorageArea_Delete_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!input_data_view.ReadClientOldValue(&p_client_old_value))
        success = false;
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageArea::Name_, 2, false);
        return false;
      }
      StorageArea::DeleteCallback callback =
          StorageArea_Delete_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Delete(
std::move(p_key), 
std::move(p_client_old_value), 
std::move(p_source), std::move(callback));
      return true;
    }
    case internal::kStorageArea_DeleteAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::DeleteAll",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::StorageArea_DeleteAll_Params_Data* params =
          reinterpret_cast<
              internal::StorageArea_DeleteAll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::String p_source{};
      StorageArea_DeleteAll_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageArea::Name_, 3, false);
        return false;
      }
      StorageArea::DeleteAllCallback callback =
          StorageArea_DeleteAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteAll(
std::move(p_source), std::move(callback));
      return true;
    }
    case internal::kStorageArea_Get_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::Get",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::StorageArea_Get_Params_Data* params =
          reinterpret_cast<
              internal::StorageArea_Get_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WTF::Vector<uint8_t> p_key{};
      StorageArea_Get_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadKey(&p_key))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageArea::Name_, 4, false);
        return false;
      }
      StorageArea::GetCallback callback =
          StorageArea_Get_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Get(
std::move(p_key), std::move(callback));
      return true;
    }
    case internal::kStorageArea_GetAll_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::StorageArea::GetAll",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::StorageArea_GetAll_Params_Data* params =
          reinterpret_cast<
              internal::StorageArea_GetAll_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      StorageAreaGetAllCallbackAssociatedPtrInfo p_complete_callback{};
      StorageArea_GetAll_ParamsDataView input_data_view(params, &serialization_context);
      
      p_complete_callback =
          input_data_view.TakeCompleteCallback<decltype(p_complete_callback)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            StorageArea::Name_, 5, false);
        return false;
      }
      StorageArea::GetAllCallback callback =
          StorageArea_GetAll_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetAll(
std::move(p_complete_callback), std::move(callback));
      return true;
    }
  }
  return false;
}

bool StorageAreaRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StorageArea RequestValidator");

  switch (message->header()->name) {
    case internal::kStorageArea_AddObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_AddObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_Put_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_Put_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_Delete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_Delete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_DeleteAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_DeleteAll_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_Get_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_GetAll_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_GetAll_Params_Data>(
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

bool StorageAreaResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "StorageArea ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kStorageArea_Put_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_Put_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_Delete_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_Delete_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_DeleteAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_DeleteAll_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_Get_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kStorageArea_GetAll_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StorageArea_GetAll_ResponseParams_Data>(
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
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::KeyValue::DataView, ::blink::mojom::blink::KeyValuePtr>::Read(
    ::blink::mojom::blink::KeyValue::DataView input,
    ::blink::mojom::blink::KeyValuePtr* output) {
  bool success = true;
  ::blink::mojom::blink::KeyValuePtr result(::blink::mojom::blink::KeyValue::New());
  
      if (!input.ReadKey(&result->key))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif