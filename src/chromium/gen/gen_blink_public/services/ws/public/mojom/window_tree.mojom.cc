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

#include "services/ws/public/mojom/window_tree.mojom.h"

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

#include "services/ws/public/mojom/window_tree.mojom-params-data.h"
#include "services/ws/public/mojom/window_tree.mojom-shared-message-ids.h"

#include "services/ws/public/mojom/window_tree.mojom-import-headers.h"


#ifndef SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_JUMBO_H_
#define SERVICES_WS_PUBLIC_MOJOM_WINDOW_TREE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_allocation_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "skia/public/interfaces/image_info_struct_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#include "ui/base/mojo/cursor_struct_traits.h"
#include "ui/base/mojo/ui_base_types_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/image/mojo/image_skia_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "ui/latency/mojo/latency_info_struct_traits.h"
#endif
namespace ws {
namespace mojom {
const char WindowTree::Name_[] = "ws.mojom.WindowTree";

class WindowTree_GetWindowTree_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_GetWindowTree_ForwardToCallback(
      WindowTree::GetWindowTreeCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::GetWindowTreeCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetWindowTree_ForwardToCallback);
};

class WindowTree_Embed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_Embed_ForwardToCallback(
      WindowTree::EmbedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::EmbedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_Embed_ForwardToCallback);
};

class WindowTree_ScheduleEmbed_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_ScheduleEmbed_ForwardToCallback(
      WindowTree::ScheduleEmbedCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::ScheduleEmbedCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbed_ForwardToCallback);
};

class WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback(
      WindowTree::ScheduleEmbedForExistingClientCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::ScheduleEmbedForExistingClientCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback);
};

class WindowTree_EmbedUsingToken_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_EmbedUsingToken_ForwardToCallback(
      WindowTree::EmbedUsingTokenCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::EmbedUsingTokenCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_EmbedUsingToken_ForwardToCallback);
};

class WindowTree_GetCursorLocationMemory_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTree_GetCursorLocationMemory_ForwardToCallback(
      WindowTree::GetCursorLocationMemoryCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTree::GetCursorLocationMemoryCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetCursorLocationMemory_ForwardToCallback);
};

WindowTreeProxy::WindowTreeProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeProxy::NewWindow(
    uint32_t in_change_id, uint64_t in_window_id, const base::Optional<base::flat_map<std::string, std::vector<uint8_t>>>& in_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::NewWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_NewWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_NewWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->properties)::BaseType::BufferWriter
      properties_writer;
  const mojo::internal::ContainerValidateParams properties_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_properties, buffer, &properties_writer, &properties_validate_params,
      &serialization_context);
  params->properties.Set(
      properties_writer.is_null() ? nullptr : properties_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("NewWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::NewTopLevelWindow(
    uint32_t in_change_id, uint64_t in_window_id, const base::flat_map<std::string, std::vector<uint8_t>>& in_properties) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::NewTopLevelWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_NewTopLevelWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_NewTopLevelWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->properties)::BaseType::BufferWriter
      properties_writer;
  const mojo::internal::ContainerValidateParams properties_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_properties, buffer, &properties_writer, &properties_validate_params,
      &serialization_context);
  params->properties.Set(
      properties_writer.is_null() ? nullptr : properties_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->properties.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null properties in WindowTree.NewTopLevelWindow request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("NewTopLevelWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::DeleteWindow(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::DeleteWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_DeleteWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_DeleteWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("DeleteWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCapture(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetCapture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCapture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetCapture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetCapture");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ReleaseCapture(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ReleaseCapture");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ReleaseCapture_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ReleaseCapture_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ReleaseCapture");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ObserveEventTypes(
    const std::vector<::ui::mojom::EventType>& in_types) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ObserveEventTypes");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ObserveEventTypes_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ObserveEventTypes_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->types)::BaseType::BufferWriter
      types_writer;
  const mojo::internal::ContainerValidateParams types_validate_params(
      0, ::ui::mojom::internal::EventType_Data::Validate);
  mojo::internal::Serialize<mojo::ArrayDataView<::ui::mojom::EventType>>(
      in_types, buffer, &types_writer, &types_validate_params,
      &serialization_context);
  params->types.Set(
      types_writer.is_null() ? nullptr : types_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->types.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null types in WindowTree.ObserveEventTypes request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ObserveEventTypes");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowBounds(
    uint32_t in_change_id, uint64_t in_window_id, const gfx::Rect& in_bounds, const base::Optional<viz::LocalSurfaceIdAllocation>& in_local_surface_id_allocation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowBounds");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowBounds_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowBounds_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->bounds)::BaseType::BufferWriter
      bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_bounds, buffer, &bounds_writer, &serialization_context);
  params->bounds.Set(
      bounds_writer.is_null() ? nullptr : bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null bounds in WindowTree.SetWindowBounds request");
  typename decltype(params->local_surface_id_allocation)::BaseType::BufferWriter
      local_surface_id_allocation_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
      in_local_surface_id_allocation, buffer, &local_surface_id_allocation_writer, &serialization_context);
  params->local_surface_id_allocation.Set(
      local_surface_id_allocation_writer.is_null() ? nullptr : local_surface_id_allocation_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowBounds");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::UpdateLocalSurfaceIdFromChild(
    uint64_t in_window_id, const viz::LocalSurfaceIdAllocation& in_local_surface_id_allocation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::UpdateLocalSurfaceIdFromChild");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_UpdateLocalSurfaceIdFromChild_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->local_surface_id_allocation)::BaseType::BufferWriter
      local_surface_id_allocation_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
      in_local_surface_id_allocation, buffer, &local_surface_id_allocation_writer, &serialization_context);
  params->local_surface_id_allocation.Set(
      local_surface_id_allocation_writer.is_null() ? nullptr : local_surface_id_allocation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_surface_id_allocation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_surface_id_allocation in WindowTree.UpdateLocalSurfaceIdFromChild request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("UpdateLocalSurfaceIdFromChild");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AllocateLocalSurfaceId(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::AllocateLocalSurfaceId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AllocateLocalSurfaceId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_AllocateLocalSurfaceId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("AllocateLocalSurfaceId");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowTransform(
    uint32_t in_change_id, uint64_t in_window_id, const gfx::Transform& in_transform) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowTransform");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowTransform_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowTransform_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->transform)::BaseType::BufferWriter
      transform_writer;
  mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
      in_transform, buffer, &transform_writer, &serialization_context);
  params->transform.Set(
      transform_writer.is_null() ? nullptr : transform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->transform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null transform in WindowTree.SetWindowTransform request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowTransform");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetClientArea(
    uint64_t in_window_id, const gfx::Insets& in_insets, const base::Optional<std::vector<gfx::Rect>>& in_additional_client_areas) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetClientArea");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetClientArea_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetClientArea_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->insets)::BaseType::BufferWriter
      insets_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_insets, buffer, &insets_writer, &serialization_context);
  params->insets.Set(
      insets_writer.is_null() ? nullptr : insets_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->insets.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null insets in WindowTree.SetClientArea request");
  typename decltype(params->additional_client_areas)::BaseType::BufferWriter
      additional_client_areas_writer;
  const mojo::internal::ContainerValidateParams additional_client_areas_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
      in_additional_client_areas, buffer, &additional_client_areas_writer, &additional_client_areas_validate_params,
      &serialization_context);
  params->additional_client_areas.Set(
      additional_client_areas_writer.is_null() ? nullptr : additional_client_areas_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetClientArea");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetHitTestInsets(
    uint64_t in_window_id, const gfx::Insets& in_mouse, const gfx::Insets& in_touch) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetHitTestInsets");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetHitTestInsets_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetHitTestInsets_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->mouse)::BaseType::BufferWriter
      mouse_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_mouse, buffer, &mouse_writer, &serialization_context);
  params->mouse.Set(
      mouse_writer.is_null() ? nullptr : mouse_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mouse.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mouse in WindowTree.SetHitTestInsets request");
  typename decltype(params->touch)::BaseType::BufferWriter
      touch_writer;
  mojo::internal::Serialize<::gfx::mojom::InsetsDataView>(
      in_touch, buffer, &touch_writer, &serialization_context);
  params->touch.Set(
      touch_writer.is_null() ? nullptr : touch_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->touch.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null touch in WindowTree.SetHitTestInsets request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetHitTestInsets");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetShape(
    uint64_t in_window_id, const std::vector<gfx::Rect>& in_shape) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetShape");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetShape_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetShape_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->shape)::BaseType::BufferWriter
      shape_writer;
  const mojo::internal::ContainerValidateParams shape_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::RectDataView>>(
      in_shape, buffer, &shape_writer, &shape_validate_params,
      &serialization_context);
  params->shape.Set(
      shape_writer.is_null() ? nullptr : shape_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shape.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shape in WindowTree.SetShape request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetShape");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCanAcceptDrops(
    uint64_t in_window_id, bool in_accepts_drops) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetCanAcceptDrops");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCanAcceptDrops_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetCanAcceptDrops_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->accepts_drops = in_accepts_drops;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetCanAcceptDrops");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowVisibility(
    uint32_t in_change_id, uint64_t in_window_id, bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowVisibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowVisibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowVisibility_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowVisibility");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowProperty(
    uint32_t in_change_id, uint64_t in_window_id, const std::string& in_name, const base::Optional<std::vector<uint8_t>>& in_value) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowProperty");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowProperty_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowProperty_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WindowTree.SetWindowProperty request");
  typename decltype(params->value)::BaseType::BufferWriter
      value_writer;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_value, buffer, &value_writer, &value_validate_params,
      &serialization_context);
  params->value.Set(
      value_writer.is_null() ? nullptr : value_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowProperty");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowOpacity(
    uint32_t in_change_id, uint64_t in_window_id, float in_opacity) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowOpacity");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowOpacity_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowOpacity_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->opacity = in_opacity;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowOpacity");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowTransparent(
    uint32_t in_change_id, uint64_t in_window_id, bool in_transparent) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowTransparent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowTransparent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowTransparent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->transparent = in_transparent;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowTransparent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AttachCompositorFrameSink(
    uint64_t in_window_id, ::viz::mojom::CompositorFrameSinkRequest in_compositor_frame_sink, ::viz::mojom::CompositorFrameSinkClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::AttachCompositorFrameSink");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AttachCompositorFrameSink_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_AttachCompositorFrameSink_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
      in_compositor_frame_sink, &params->compositor_frame_sink, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->compositor_frame_sink),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid compositor_frame_sink in WindowTree.AttachCompositorFrameSink request");
  mojo::internal::Serialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.AttachCompositorFrameSink request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("AttachCompositorFrameSink");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AddWindow(
    uint32_t in_change_id, uint64_t in_parent, uint64_t in_child) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::AddWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AddWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_AddWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->parent = in_parent;
  params->child = in_child;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("AddWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::RemoveWindowFromParent(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::RemoveWindowFromParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_RemoveWindowFromParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_RemoveWindowFromParent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("RemoveWindowFromParent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::AddTransientWindow(
    uint32_t in_change_id, uint64_t in_window_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::AddTransientWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AddTransientWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_AddTransientWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("AddTransientWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::RemoveTransientWindowFromParent(
    uint32_t in_change_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::RemoveTransientWindowFromParent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_RemoveTransientWindowFromParent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_RemoveTransientWindowFromParent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("RemoveTransientWindowFromParent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetModalType(
    uint32_t in_change_id, uint64_t in_window_id, ui::ModalType in_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetModalType");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetModalType_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetModalType_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::ModalType>(
      in_type, &params->type);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetModalType");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ReorderWindow(
    uint32_t in_change_id, uint64_t in_window_id, uint64_t in_relative_window_id, ::ws::mojom::OrderDirection in_direction) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ReorderWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ReorderWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ReorderWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  params->relative_window_id = in_relative_window_id;
  mojo::internal::Serialize<::ws::mojom::OrderDirection>(
      in_direction, &params->direction);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ReorderWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::GetWindowTree(
    uint64_t in_window_id, GetWindowTreeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::GetWindowTree");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_GetWindowTree_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("GetWindowTree");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_GetWindowTree_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::Embed(
    uint64_t in_window_id, WindowTreeClientPtr in_client, uint32_t in_embed_flags, EmbedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::Embed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_Embed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_Embed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ws::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.Embed request");
  params->embed_flags = in_embed_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("Embed");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_Embed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::ScheduleEmbed(
    WindowTreeClientPtr in_client, ScheduleEmbedCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbed");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ScheduleEmbed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.ScheduleEmbed request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ScheduleEmbed");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_ScheduleEmbed_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::ScheduleEmbedForExistingClient(
    uint32_t in_window_id, ScheduleEmbedForExistingClientCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbedForExistingClient");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbedForExistingClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ScheduleEmbedForExistingClient");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::EmbedUsingToken(
    uint64_t in_window_id, const base::UnguessableToken& in_token, uint32_t in_embed_flags, EmbedUsingTokenCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::EmbedUsingToken");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_EmbedUsingToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_EmbedUsingToken_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in WindowTree.EmbedUsingToken request");
  params->embed_flags = in_embed_flags;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("EmbedUsingToken");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_EmbedUsingToken_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::AttachFrameSinkId(
    uint64_t in_window_id, const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::AttachFrameSinkId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_AttachFrameSinkId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_AttachFrameSinkId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in WindowTree.AttachFrameSinkId request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("AttachFrameSinkId");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::UnattachFrameSinkId(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::UnattachFrameSinkId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_UnattachFrameSinkId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_UnattachFrameSinkId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("UnattachFrameSinkId");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetFocus(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetFocus");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCanFocus(
    uint64_t in_window_id, bool in_can_focus) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetCanFocus");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCanFocus_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetCanFocus_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->can_focus = in_can_focus;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetCanFocus");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetCursor(
    uint32_t in_change_id, uint64_t in_window_id, ui::Cursor in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetCursor");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetCursor_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetCursor_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::ui::mojom::CursorDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor in WindowTree.SetCursor request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetCursor");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowTextInputState(
    uint64_t in_window_id, ::ui::mojom::TextInputStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowTextInputState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowTextInputState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowTextInputState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::ui::mojom::TextInputStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->state.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in WindowTree.SetWindowTextInputState request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowTextInputState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetImeVisibility(
    uint64_t in_window_id, bool in_visible, ::ui::mojom::TextInputStatePtr in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetImeVisibility");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetImeVisibility_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetImeVisibility_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->visible = in_visible;
  typename decltype(params->state)::BaseType::BufferWriter
      state_writer;
  mojo::internal::Serialize<::ui::mojom::TextInputStateDataView>(
      in_state, buffer, &state_writer, &serialization_context);
  params->state.Set(
      state_writer.is_null() ? nullptr : state_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetImeVisibility");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetEventTargetingPolicy(
    uint64_t in_window_id, ::ws::mojom::EventTargetingPolicy in_policy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetEventTargetingPolicy");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetEventTargetingPolicy_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetEventTargetingPolicy_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ws::mojom::EventTargetingPolicy>(
      in_policy, &params->policy);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetEventTargetingPolicy");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::OnWindowInputEventAck(
    uint32_t in_event_id, ::ws::mojom::EventResult in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::OnWindowInputEventAck");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_OnWindowInputEventAck_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_OnWindowInputEventAck_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->event_id = in_event_id;
  mojo::internal::Serialize<::ws::mojom::EventResult>(
      in_result, &params->result);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("OnWindowInputEventAck");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::DeactivateWindow(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::DeactivateWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_DeactivateWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_DeactivateWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("DeactivateWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StackAbove(
    uint32_t in_change_id, uint64_t in_above_id, uint64_t in_below_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::StackAbove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StackAbove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_StackAbove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->above_id = in_above_id;
  params->below_id = in_below_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("StackAbove");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StackAtTop(
    uint32_t in_change_id, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::StackAtTop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StackAtTop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_StackAtTop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("StackAtTop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::BindWindowManagerInterface(
    const std::string& in_name, ::ws::mojom::WindowManagerAssociatedRequest in_window_manager) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::BindWindowManagerInterface");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_BindWindowManagerInterface_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_BindWindowManagerInterface_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WindowTree.BindWindowManagerInterface request");
  mojo::internal::Serialize<::ws::mojom::WindowManagerAssociatedRequestDataView>(
      in_window_manager, &params->window_manager, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->window_manager),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid window_manager in WindowTree.BindWindowManagerInterface request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("BindWindowManagerInterface");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::GetCursorLocationMemory(
    GetCursorLocationMemoryCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::GetCursorLocationMemory");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetCursorLocationMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_GetCursorLocationMemory_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("GetCursorLocationMemory");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTree_GetCursorLocationMemory_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeProxy::PerformWindowMove(
    uint32_t in_change_id, uint64_t in_window_id, ::ws::mojom::MoveLoopSource in_source, const gfx::Point& in_cursor, int in_hit_test) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::PerformWindowMove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_PerformWindowMove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_PerformWindowMove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ws::mojom::MoveLoopSource>(
      in_source, &params->source);
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor in WindowTree.PerformWindowMove request");
  mojo::internal::Serialize<::ui::mojom::HitTest>(
      in_hit_test, &params->hit_test);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("PerformWindowMove");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::CancelWindowMove(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::CancelWindowMove");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_CancelWindowMove_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_CancelWindowMove_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("CancelWindowMove");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::PerformDragDrop(
    uint32_t in_change_id, uint64_t in_source_window_id, const gfx::Point& in_screen_location, const base::flat_map<std::string, std::vector<uint8_t>>& in_drag_data, const gfx::ImageSkia& in_drag_image, const gfx::Vector2d& in_drag_image_offset, uint32_t in_drag_operation, ::ui::mojom::PointerKind in_source) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::PerformDragDrop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_PerformDragDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_PerformDragDrop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->source_window_id = in_source_window_id;
  typename decltype(params->screen_location)::BaseType::BufferWriter
      screen_location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointDataView>(
      in_screen_location, buffer, &screen_location_writer, &serialization_context);
  params->screen_location.Set(
      screen_location_writer.is_null() ? nullptr : screen_location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->screen_location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null screen_location in WindowTree.PerformDragDrop request");
  typename decltype(params->drag_data)::BaseType::BufferWriter
      drag_data_writer;
  const mojo::internal::ContainerValidateParams drag_data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_drag_data, buffer, &drag_data_writer, &drag_data_validate_params,
      &serialization_context);
  params->drag_data.Set(
      drag_data_writer.is_null() ? nullptr : drag_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag_data in WindowTree.PerformDragDrop request");
  typename decltype(params->drag_image)::BaseType::BufferWriter
      drag_image_writer;
  mojo::internal::Serialize<::gfx::mojom::ImageSkiaDataView>(
      in_drag_image, buffer, &drag_image_writer, &serialization_context);
  params->drag_image.Set(
      drag_image_writer.is_null() ? nullptr : drag_image_writer.data());
  typename decltype(params->drag_image_offset)::BaseType::BufferWriter
      drag_image_offset_writer;
  mojo::internal::Serialize<::gfx::mojom::Vector2dDataView>(
      in_drag_image_offset, buffer, &drag_image_offset_writer, &serialization_context);
  params->drag_image_offset.Set(
      drag_image_offset_writer.is_null() ? nullptr : drag_image_offset_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag_image_offset.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag_image_offset in WindowTree.PerformDragDrop request");
  params->drag_operation = in_drag_operation;
  mojo::internal::Serialize<::ui::mojom::PointerKind>(
      in_source, &params->source);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("PerformDragDrop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::CancelDragDrop(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::CancelDragDrop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_CancelDragDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_CancelDragDrop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("CancelDragDrop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ObserveTopmostWindow(
    ::ws::mojom::MoveLoopSource in_source, uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ObserveTopmostWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ObserveTopmostWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ObserveTopmostWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::MoveLoopSource>(
      in_source, &params->source);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ObserveTopmostWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::StopObservingTopmostWindow(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::StopObservingTopmostWindow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_StopObservingTopmostWindow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_StopObservingTopmostWindow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("StopObservingTopmostWindow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::SetWindowResizeShadow(
    uint64_t in_window_id, int in_hit_test) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowResizeShadow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_SetWindowResizeShadow_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_SetWindowResizeShadow_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  mojo::internal::Serialize<::ui::mojom::HitTest>(
      in_hit_test, &params->hit_test);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("SetWindowResizeShadow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::CancelActiveTouchesExcept(
    uint64_t in_not_cancelled_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::CancelActiveTouchesExcept");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_CancelActiveTouchesExcept_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_CancelActiveTouchesExcept_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->not_cancelled_window_id = in_not_cancelled_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("CancelActiveTouchesExcept");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::CancelActiveTouches(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::CancelActiveTouches");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_CancelActiveTouches_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_CancelActiveTouches_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("CancelActiveTouches");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::TransferGestureEventsTo(
    uint64_t in_current_id, uint64_t in_new_id, bool in_should_cancel) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::TransferGestureEventsTo");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_TransferGestureEventsTo_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_TransferGestureEventsTo_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->current_id = in_current_id;
  params->new_id = in_new_id;
  params->should_cancel = in_should_cancel;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("TransferGestureEventsTo");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::TrackOcclusionState(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::TrackOcclusionState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_TrackOcclusionState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_TrackOcclusionState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("TrackOcclusionState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::PauseWindowOcclusionTracking(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::PauseWindowOcclusionTracking");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_PauseWindowOcclusionTracking_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_PauseWindowOcclusionTracking_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("PauseWindowOcclusionTracking");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::UnpauseWindowOcclusionTracking(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::UnpauseWindowOcclusionTracking");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_UnpauseWindowOcclusionTracking_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_UnpauseWindowOcclusionTracking_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("UnpauseWindowOcclusionTracking");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeProxy::ConnectToImeEngine(
    ::ime::mojom::ImeEngineRequest in_engine_request, ::ime::mojom::ImeEngineClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ConnectToImeEngine");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ConnectToImeEngine_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ConnectToImeEngine_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ime::mojom::ImeEngineRequestDataView>(
      in_engine_request, &params->engine_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->engine_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid engine_request in WindowTree.ConnectToImeEngine request");
  mojo::internal::Serialize<::ime::mojom::ImeEngineClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTree.ConnectToImeEngine request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ConnectToImeEngine");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WindowTree_GetWindowTree_ProxyToResponder {
 public:
  static WindowTree::GetWindowTreeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_GetWindowTree_ProxyToResponder> proxy(
        new WindowTree_GetWindowTree_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_GetWindowTree_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_GetWindowTree_ProxyToResponder() {
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
  WindowTree_GetWindowTree_ProxyToResponder(
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
        << "WindowTree::GetWindowTreeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      std::vector<::ws::mojom::WindowDataPtr> in_windows);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetWindowTree_ProxyToResponder);
};

bool WindowTree_GetWindowTree_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::GetWindowTreeCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_GetWindowTree_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_GetWindowTree_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  std::vector<::ws::mojom::WindowDataPtr> p_windows{};
  WindowTree_GetWindowTree_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadWindows(&p_windows))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTree::Name_, 25, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_windows));
  return true;
}

void WindowTree_GetWindowTree_ProxyToResponder::Run(
    std::vector<::ws::mojom::WindowDataPtr> in_windows) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_GetWindowTree_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->windows)::BaseType::BufferWriter
      windows_writer;
  const mojo::internal::ContainerValidateParams windows_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ws::mojom::WindowDataDataView>>(
      in_windows, buffer, &windows_writer, &windows_validate_params,
      &serialization_context);
  params->windows.Set(
      windows_writer.is_null() ? nullptr : windows_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->windows.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null windows in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::GetWindowTreeCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("GetWindowTree");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_Embed_ProxyToResponder {
 public:
  static WindowTree::EmbedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_Embed_ProxyToResponder> proxy(
        new WindowTree_Embed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_Embed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_Embed_ProxyToResponder() {
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
  WindowTree_Embed_ProxyToResponder(
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
        << "WindowTree::EmbedCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowTree_Embed_ProxyToResponder);
};

bool WindowTree_Embed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::EmbedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_Embed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_Embed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowTree_Embed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTree::Name_, 26, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowTree_Embed_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_Embed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_Embed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::EmbedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("Embed");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_ScheduleEmbed_ProxyToResponder {
 public:
  static WindowTree::ScheduleEmbedCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_ScheduleEmbed_ProxyToResponder> proxy(
        new WindowTree_ScheduleEmbed_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_ScheduleEmbed_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_ScheduleEmbed_ProxyToResponder() {
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
  WindowTree_ScheduleEmbed_ProxyToResponder(
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
        << "WindowTree::ScheduleEmbedCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbed_ProxyToResponder);
};

bool WindowTree_ScheduleEmbed_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbedCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_ScheduleEmbed_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_ScheduleEmbed_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_token{};
  WindowTree_ScheduleEmbed_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTree::Name_, 27, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_token));
  return true;
}

void WindowTree_ScheduleEmbed_ProxyToResponder::Run(
    const base::UnguessableToken& in_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ScheduleEmbed_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbedCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ScheduleEmbed");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder {
 public:
  static WindowTree::ScheduleEmbedForExistingClientCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder> proxy(
        new WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder() {
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
  WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder(
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
        << "WindowTree::ScheduleEmbedForExistingClientCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const base::UnguessableToken& in_token);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder);
};

bool WindowTree_ScheduleEmbedForExistingClient_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbedForExistingClientCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  base::UnguessableToken p_token{};
  WindowTree_ScheduleEmbedForExistingClient_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  if (!input_data_view.ReadToken(&p_token))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTree::Name_, 28, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_token));
  return true;
}

void WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder::Run(
    const base::UnguessableToken& in_token) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_ScheduleEmbedForExistingClient_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbedForExistingClientCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("ScheduleEmbedForExistingClient");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_EmbedUsingToken_ProxyToResponder {
 public:
  static WindowTree::EmbedUsingTokenCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_EmbedUsingToken_ProxyToResponder> proxy(
        new WindowTree_EmbedUsingToken_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_EmbedUsingToken_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_EmbedUsingToken_ProxyToResponder() {
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
  WindowTree_EmbedUsingToken_ProxyToResponder(
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
        << "WindowTree::EmbedUsingTokenCallback was destroyed without "
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

  DISALLOW_COPY_AND_ASSIGN(WindowTree_EmbedUsingToken_ProxyToResponder);
};

bool WindowTree_EmbedUsingToken_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::EmbedUsingTokenCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_EmbedUsingToken_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_EmbedUsingToken_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  bool p_success{};
  WindowTree_EmbedUsingToken_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTree::Name_, 29, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_success));
  return true;
}

void WindowTree_EmbedUsingToken_ProxyToResponder::Run(
    bool in_success) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_EmbedUsingToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_EmbedUsingToken_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::EmbedUsingTokenCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("EmbedUsingToken");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTree_GetCursorLocationMemory_ProxyToResponder {
 public:
  static WindowTree::GetCursorLocationMemoryCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTree_GetCursorLocationMemory_ProxyToResponder> proxy(
        new WindowTree_GetCursorLocationMemory_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTree_GetCursorLocationMemory_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTree_GetCursorLocationMemory_ProxyToResponder() {
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
  WindowTree_GetCursorLocationMemory_ProxyToResponder(
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
        << "WindowTree::GetCursorLocationMemoryCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      mojo::ScopedSharedBufferHandle in_cursor_buffer);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTree_GetCursorLocationMemory_ProxyToResponder);
};

bool WindowTree_GetCursorLocationMemory_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTree::GetCursorLocationMemoryCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  mojo::ScopedSharedBufferHandle p_cursor_buffer{};
  WindowTree_GetCursorLocationMemory_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_cursor_buffer = input_data_view.TakeCursorBuffer();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTree::Name_, 43, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cursor_buffer));
  return true;
}

void WindowTree_GetCursorLocationMemory_ProxyToResponder::Run(
    mojo::ScopedSharedBufferHandle in_cursor_buffer) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTree_GetCursorLocationMemory_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_cursor_buffer, &params->cursor_buffer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cursor_buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cursor_buffer in ");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::GetCursorLocationMemoryCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTree::Name_);
  message.set_method_name("GetCursorLocationMemory");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool WindowTreeStubDispatch::Accept(
    WindowTree* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTree_NewWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::NewWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_NewWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_NewWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      base::Optional<base::flat_map<std::string, std::vector<uint8_t>>> p_properties{};
      WindowTree_NewWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NewWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_properties));
      return true;
    }
    case internal::kWindowTree_NewTopLevelWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::NewTopLevelWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_NewTopLevelWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_NewTopLevelWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      base::flat_map<std::string, std::vector<uint8_t>> p_properties{};
      WindowTree_NewTopLevelWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadProperties(&p_properties))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->NewTopLevelWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_properties));
      return true;
    }
    case internal::kWindowTree_DeleteWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::DeleteWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_DeleteWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_DeleteWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_DeleteWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeleteWindow(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_SetCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetCapture",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCapture_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCapture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_SetCapture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCapture(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_ReleaseCapture_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ReleaseCapture",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ReleaseCapture_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ReleaseCapture_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_ReleaseCapture_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReleaseCapture(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_ObserveEventTypes_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ObserveEventTypes",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ObserveEventTypes_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ObserveEventTypes_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<::ui::mojom::EventType> p_types{};
      WindowTree_ObserveEventTypes_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTypes(&p_types))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ObserveEventTypes(
std::move(p_types));
      return true;
    }
    case internal::kWindowTree_SetWindowBounds_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowBounds",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowBounds_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowBounds_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      gfx::Rect p_bounds{};
      base::Optional<viz::LocalSurfaceIdAllocation> p_local_surface_id_allocation{};
      WindowTree_SetWindowBounds_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadBounds(&p_bounds))
        success = false;
      if (!input_data_view.ReadLocalSurfaceIdAllocation(&p_local_surface_id_allocation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowBounds(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_bounds), 
std::move(p_local_surface_id_allocation));
      return true;
    }
    case internal::kWindowTree_UpdateLocalSurfaceIdFromChild_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::UpdateLocalSurfaceIdFromChild",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data* params =
          reinterpret_cast<internal::WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      viz::LocalSurfaceIdAllocation p_local_surface_id_allocation{};
      WindowTree_UpdateLocalSurfaceIdFromChild_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadLocalSurfaceIdAllocation(&p_local_surface_id_allocation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UpdateLocalSurfaceIdFromChild(
std::move(p_window_id), 
std::move(p_local_surface_id_allocation));
      return true;
    }
    case internal::kWindowTree_AllocateLocalSurfaceId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::AllocateLocalSurfaceId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AllocateLocalSurfaceId_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AllocateLocalSurfaceId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_AllocateLocalSurfaceId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AllocateLocalSurfaceId(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_SetWindowTransform_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowTransform",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowTransform_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowTransform_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      gfx::Transform p_transform{};
      WindowTree_SetWindowTransform_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadTransform(&p_transform))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowTransform(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_transform));
      return true;
    }
    case internal::kWindowTree_SetClientArea_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetClientArea",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetClientArea_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetClientArea_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      gfx::Insets p_insets{};
      base::Optional<std::vector<gfx::Rect>> p_additional_client_areas{};
      WindowTree_SetClientArea_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadInsets(&p_insets))
        success = false;
      if (!input_data_view.ReadAdditionalClientAreas(&p_additional_client_areas))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetClientArea(
std::move(p_window_id), 
std::move(p_insets), 
std::move(p_additional_client_areas));
      return true;
    }
    case internal::kWindowTree_SetHitTestInsets_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetHitTestInsets",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetHitTestInsets_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetHitTestInsets_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      gfx::Insets p_mouse{};
      gfx::Insets p_touch{};
      WindowTree_SetHitTestInsets_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadMouse(&p_mouse))
        success = false;
      if (!input_data_view.ReadTouch(&p_touch))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetHitTestInsets(
std::move(p_window_id), 
std::move(p_mouse), 
std::move(p_touch));
      return true;
    }
    case internal::kWindowTree_SetShape_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetShape",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetShape_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetShape_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      std::vector<gfx::Rect> p_shape{};
      WindowTree_SetShape_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadShape(&p_shape))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 12, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetShape(
std::move(p_window_id), 
std::move(p_shape));
      return true;
    }
    case internal::kWindowTree_SetCanAcceptDrops_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetCanAcceptDrops",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCanAcceptDrops_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCanAcceptDrops_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_accepts_drops{};
      WindowTree_SetCanAcceptDrops_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_accepts_drops = input_data_view.accepts_drops();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 13, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCanAcceptDrops(
std::move(p_window_id), 
std::move(p_accepts_drops));
      return true;
    }
    case internal::kWindowTree_SetWindowVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowVisibility",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowVisibility_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowVisibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      bool p_visible{};
      WindowTree_SetWindowVisibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 14, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowVisibility(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_visible));
      return true;
    }
    case internal::kWindowTree_SetWindowProperty_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowProperty",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowProperty_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowProperty_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      std::string p_name{};
      base::Optional<std::vector<uint8_t>> p_value{};
      WindowTree_SetWindowProperty_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 15, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowProperty(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_name), 
std::move(p_value));
      return true;
    }
    case internal::kWindowTree_SetWindowOpacity_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowOpacity",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowOpacity_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowOpacity_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      float p_opacity{};
      WindowTree_SetWindowOpacity_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_opacity = input_data_view.opacity();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 16, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowOpacity(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_opacity));
      return true;
    }
    case internal::kWindowTree_SetWindowTransparent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowTransparent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowTransparent_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowTransparent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      bool p_transparent{};
      WindowTree_SetWindowTransparent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_transparent = input_data_view.transparent();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 17, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowTransparent(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_transparent));
      return true;
    }
    case internal::kWindowTree_AttachCompositorFrameSink_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::AttachCompositorFrameSink",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AttachCompositorFrameSink_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AttachCompositorFrameSink_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ::viz::mojom::CompositorFrameSinkRequest p_compositor_frame_sink{};
      ::viz::mojom::CompositorFrameSinkClientPtr p_client{};
      WindowTree_AttachCompositorFrameSink_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_compositor_frame_sink =
          input_data_view.TakeCompositorFrameSink<decltype(p_compositor_frame_sink)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 18, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AttachCompositorFrameSink(
std::move(p_window_id), 
std::move(p_compositor_frame_sink), 
std::move(p_client));
      return true;
    }
    case internal::kWindowTree_AddWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::AddWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AddWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AddWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_parent{};
      uint64_t p_child{};
      WindowTree_AddWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_parent = input_data_view.parent();
      p_child = input_data_view.child();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 19, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddWindow(
std::move(p_change_id), 
std::move(p_parent), 
std::move(p_child));
      return true;
    }
    case internal::kWindowTree_RemoveWindowFromParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::RemoveWindowFromParent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_RemoveWindowFromParent_Params_Data* params =
          reinterpret_cast<internal::WindowTree_RemoveWindowFromParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_RemoveWindowFromParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 20, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveWindowFromParent(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_AddTransientWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::AddTransientWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AddTransientWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AddTransientWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      uint64_t p_transient_window_id{};
      WindowTree_AddTransientWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 21, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddTransientWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTree_RemoveTransientWindowFromParent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::RemoveTransientWindowFromParent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_RemoveTransientWindowFromParent_Params_Data* params =
          reinterpret_cast<internal::WindowTree_RemoveTransientWindowFromParent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_transient_window_id{};
      WindowTree_RemoveTransientWindowFromParent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 22, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RemoveTransientWindowFromParent(
std::move(p_change_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTree_SetModalType_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetModalType",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetModalType_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetModalType_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ui::ModalType p_type{};
      WindowTree_SetModalType_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 23, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetModalType(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_type));
      return true;
    }
    case internal::kWindowTree_ReorderWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ReorderWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ReorderWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ReorderWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      uint64_t p_relative_window_id{};
      ::ws::mojom::OrderDirection p_direction{};
      WindowTree_ReorderWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      p_relative_window_id = input_data_view.relative_window_id();
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 24, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ReorderWindow(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_relative_window_id), 
std::move(p_direction));
      return true;
    }
    case internal::kWindowTree_GetWindowTree_Name: {
      break;
    }
    case internal::kWindowTree_Embed_Name: {
      break;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
      break;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
      break;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
      break;
    }
    case internal::kWindowTree_AttachFrameSinkId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::AttachFrameSinkId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_AttachFrameSinkId_Params_Data* params =
          reinterpret_cast<internal::WindowTree_AttachFrameSinkId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      viz::FrameSinkId p_frame_sink_id{};
      WindowTree_AttachFrameSinkId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 30, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AttachFrameSinkId(
std::move(p_window_id), 
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kWindowTree_UnattachFrameSinkId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::UnattachFrameSinkId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_UnattachFrameSinkId_Params_Data* params =
          reinterpret_cast<internal::WindowTree_UnattachFrameSinkId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_UnattachFrameSinkId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 31, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UnattachFrameSinkId(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_SetFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetFocus_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_SetFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 32, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetFocus(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_SetCanFocus_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetCanFocus",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCanFocus_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCanFocus_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_can_focus{};
      WindowTree_SetCanFocus_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_can_focus = input_data_view.can_focus();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 33, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCanFocus(
std::move(p_window_id), 
std::move(p_can_focus));
      return true;
    }
    case internal::kWindowTree_SetCursor_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetCursor",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetCursor_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetCursor_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ui::Cursor p_cursor{};
      WindowTree_SetCursor_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 34, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetCursor(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_cursor));
      return true;
    }
    case internal::kWindowTree_SetWindowTextInputState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowTextInputState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowTextInputState_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowTextInputState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ::ui::mojom::TextInputStatePtr p_state{};
      WindowTree_SetWindowTextInputState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 35, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowTextInputState(
std::move(p_window_id), 
std::move(p_state));
      return true;
    }
    case internal::kWindowTree_SetImeVisibility_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetImeVisibility",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetImeVisibility_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetImeVisibility_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      bool p_visible{};
      ::ui::mojom::TextInputStatePtr p_state{};
      WindowTree_SetImeVisibility_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_visible = input_data_view.visible();
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 36, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetImeVisibility(
std::move(p_window_id), 
std::move(p_visible), 
std::move(p_state));
      return true;
    }
    case internal::kWindowTree_SetEventTargetingPolicy_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetEventTargetingPolicy",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetEventTargetingPolicy_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetEventTargetingPolicy_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ::ws::mojom::EventTargetingPolicy p_policy{};
      WindowTree_SetEventTargetingPolicy_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadPolicy(&p_policy))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 37, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetEventTargetingPolicy(
std::move(p_window_id), 
std::move(p_policy));
      return true;
    }
    case internal::kWindowTree_OnWindowInputEventAck_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::OnWindowInputEventAck",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_OnWindowInputEventAck_Params_Data* params =
          reinterpret_cast<internal::WindowTree_OnWindowInputEventAck_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_event_id{};
      ::ws::mojom::EventResult p_result{};
      WindowTree_OnWindowInputEventAck_ParamsDataView input_data_view(params, &serialization_context);
      
      p_event_id = input_data_view.event_id();
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 38, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowInputEventAck(
std::move(p_event_id), 
std::move(p_result));
      return true;
    }
    case internal::kWindowTree_DeactivateWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::DeactivateWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_DeactivateWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_DeactivateWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_DeactivateWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 39, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DeactivateWindow(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_StackAbove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::StackAbove",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StackAbove_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StackAbove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_above_id{};
      uint64_t p_below_id{};
      WindowTree_StackAbove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_above_id = input_data_view.above_id();
      p_below_id = input_data_view.below_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 40, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StackAbove(
std::move(p_change_id), 
std::move(p_above_id), 
std::move(p_below_id));
      return true;
    }
    case internal::kWindowTree_StackAtTop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::StackAtTop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StackAtTop_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StackAtTop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      WindowTree_StackAtTop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 41, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StackAtTop(
std::move(p_change_id), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_BindWindowManagerInterface_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::BindWindowManagerInterface",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_BindWindowManagerInterface_Params_Data* params =
          reinterpret_cast<internal::WindowTree_BindWindowManagerInterface_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::string p_name{};
      ::ws::mojom::WindowManagerAssociatedRequest p_window_manager{};
      WindowTree_BindWindowManagerInterface_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadName(&p_name))
        success = false;
      p_window_manager =
          input_data_view.TakeWindowManager<decltype(p_window_manager)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 42, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindWindowManagerInterface(
std::move(p_name), 
std::move(p_window_manager));
      return true;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
      break;
    }
    case internal::kWindowTree_PerformWindowMove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::PerformWindowMove",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_PerformWindowMove_Params_Data* params =
          reinterpret_cast<internal::WindowTree_PerformWindowMove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_window_id{};
      ::ws::mojom::MoveLoopSource p_source{};
      gfx::Point p_cursor{};
      int p_hit_test{};
      WindowTree_PerformWindowMove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!input_data_view.ReadHitTest(&p_hit_test))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 44, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PerformWindowMove(
std::move(p_change_id), 
std::move(p_window_id), 
std::move(p_source), 
std::move(p_cursor), 
std::move(p_hit_test));
      return true;
    }
    case internal::kWindowTree_CancelWindowMove_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::CancelWindowMove",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_CancelWindowMove_Params_Data* params =
          reinterpret_cast<internal::WindowTree_CancelWindowMove_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_CancelWindowMove_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 45, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelWindowMove(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_PerformDragDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::PerformDragDrop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_PerformDragDrop_Params_Data* params =
          reinterpret_cast<internal::WindowTree_PerformDragDrop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      uint64_t p_source_window_id{};
      gfx::Point p_screen_location{};
      base::flat_map<std::string, std::vector<uint8_t>> p_drag_data{};
      gfx::ImageSkia p_drag_image{};
      gfx::Vector2d p_drag_image_offset{};
      uint32_t p_drag_operation{};
      ::ui::mojom::PointerKind p_source{};
      WindowTree_PerformDragDrop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_source_window_id = input_data_view.source_window_id();
      if (!input_data_view.ReadScreenLocation(&p_screen_location))
        success = false;
      if (!input_data_view.ReadDragData(&p_drag_data))
        success = false;
      if (!input_data_view.ReadDragImage(&p_drag_image))
        success = false;
      if (!input_data_view.ReadDragImageOffset(&p_drag_image_offset))
        success = false;
      p_drag_operation = input_data_view.drag_operation();
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 46, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PerformDragDrop(
std::move(p_change_id), 
std::move(p_source_window_id), 
std::move(p_screen_location), 
std::move(p_drag_data), 
std::move(p_drag_image), 
std::move(p_drag_image_offset), 
std::move(p_drag_operation), 
std::move(p_source));
      return true;
    }
    case internal::kWindowTree_CancelDragDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::CancelDragDrop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_CancelDragDrop_Params_Data* params =
          reinterpret_cast<internal::WindowTree_CancelDragDrop_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_CancelDragDrop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 47, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelDragDrop(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_ObserveTopmostWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ObserveTopmostWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ObserveTopmostWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ObserveTopmostWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ws::mojom::MoveLoopSource p_source{};
      uint64_t p_window_id{};
      WindowTree_ObserveTopmostWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 48, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ObserveTopmostWindow(
std::move(p_source), 
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_StopObservingTopmostWindow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::StopObservingTopmostWindow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_StopObservingTopmostWindow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_StopObservingTopmostWindow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTree_StopObservingTopmostWindow_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 49, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StopObservingTopmostWindow();
      return true;
    }
    case internal::kWindowTree_SetWindowResizeShadow_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::SetWindowResizeShadow",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_SetWindowResizeShadow_Params_Data* params =
          reinterpret_cast<internal::WindowTree_SetWindowResizeShadow_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      int p_hit_test{};
      WindowTree_SetWindowResizeShadow_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadHitTest(&p_hit_test))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 50, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetWindowResizeShadow(
std::move(p_window_id), 
std::move(p_hit_test));
      return true;
    }
    case internal::kWindowTree_CancelActiveTouchesExcept_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::CancelActiveTouchesExcept",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_CancelActiveTouchesExcept_Params_Data* params =
          reinterpret_cast<internal::WindowTree_CancelActiveTouchesExcept_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_not_cancelled_window_id{};
      WindowTree_CancelActiveTouchesExcept_ParamsDataView input_data_view(params, &serialization_context);
      
      p_not_cancelled_window_id = input_data_view.not_cancelled_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 51, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelActiveTouchesExcept(
std::move(p_not_cancelled_window_id));
      return true;
    }
    case internal::kWindowTree_CancelActiveTouches_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::CancelActiveTouches",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_CancelActiveTouches_Params_Data* params =
          reinterpret_cast<internal::WindowTree_CancelActiveTouches_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_CancelActiveTouches_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 52, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelActiveTouches(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_TransferGestureEventsTo_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::TransferGestureEventsTo",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_TransferGestureEventsTo_Params_Data* params =
          reinterpret_cast<internal::WindowTree_TransferGestureEventsTo_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_current_id{};
      uint64_t p_new_id{};
      bool p_should_cancel{};
      WindowTree_TransferGestureEventsTo_ParamsDataView input_data_view(params, &serialization_context);
      
      p_current_id = input_data_view.current_id();
      p_new_id = input_data_view.new_id();
      p_should_cancel = input_data_view.should_cancel();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 53, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TransferGestureEventsTo(
std::move(p_current_id), 
std::move(p_new_id), 
std::move(p_should_cancel));
      return true;
    }
    case internal::kWindowTree_TrackOcclusionState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::TrackOcclusionState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_TrackOcclusionState_Params_Data* params =
          reinterpret_cast<internal::WindowTree_TrackOcclusionState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_TrackOcclusionState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 54, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TrackOcclusionState(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTree_PauseWindowOcclusionTracking_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::PauseWindowOcclusionTracking",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_PauseWindowOcclusionTracking_Params_Data* params =
          reinterpret_cast<internal::WindowTree_PauseWindowOcclusionTracking_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTree_PauseWindowOcclusionTracking_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 55, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PauseWindowOcclusionTracking();
      return true;
    }
    case internal::kWindowTree_UnpauseWindowOcclusionTracking_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::UnpauseWindowOcclusionTracking",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_UnpauseWindowOcclusionTracking_Params_Data* params =
          reinterpret_cast<internal::WindowTree_UnpauseWindowOcclusionTracking_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTree_UnpauseWindowOcclusionTracking_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 56, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->UnpauseWindowOcclusionTracking();
      return true;
    }
    case internal::kWindowTree_ConnectToImeEngine_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ConnectToImeEngine",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTree_ConnectToImeEngine_Params_Data* params =
          reinterpret_cast<internal::WindowTree_ConnectToImeEngine_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ime::mojom::ImeEngineRequest p_engine_request{};
      ::ime::mojom::ImeEngineClientPtr p_client{};
      WindowTree_ConnectToImeEngine_ParamsDataView input_data_view(params, &serialization_context);
      
      p_engine_request =
          input_data_view.TakeEngineRequest<decltype(p_engine_request)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 57, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ConnectToImeEngine(
std::move(p_engine_request), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeStubDispatch::AcceptWithResponder(
    WindowTree* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTree_NewWindow_Name: {
      break;
    }
    case internal::kWindowTree_NewTopLevelWindow_Name: {
      break;
    }
    case internal::kWindowTree_DeleteWindow_Name: {
      break;
    }
    case internal::kWindowTree_SetCapture_Name: {
      break;
    }
    case internal::kWindowTree_ReleaseCapture_Name: {
      break;
    }
    case internal::kWindowTree_ObserveEventTypes_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowBounds_Name: {
      break;
    }
    case internal::kWindowTree_UpdateLocalSurfaceIdFromChild_Name: {
      break;
    }
    case internal::kWindowTree_AllocateLocalSurfaceId_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowTransform_Name: {
      break;
    }
    case internal::kWindowTree_SetClientArea_Name: {
      break;
    }
    case internal::kWindowTree_SetHitTestInsets_Name: {
      break;
    }
    case internal::kWindowTree_SetShape_Name: {
      break;
    }
    case internal::kWindowTree_SetCanAcceptDrops_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowVisibility_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowProperty_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowOpacity_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowTransparent_Name: {
      break;
    }
    case internal::kWindowTree_AttachCompositorFrameSink_Name: {
      break;
    }
    case internal::kWindowTree_AddWindow_Name: {
      break;
    }
    case internal::kWindowTree_RemoveWindowFromParent_Name: {
      break;
    }
    case internal::kWindowTree_AddTransientWindow_Name: {
      break;
    }
    case internal::kWindowTree_RemoveTransientWindowFromParent_Name: {
      break;
    }
    case internal::kWindowTree_SetModalType_Name: {
      break;
    }
    case internal::kWindowTree_ReorderWindow_Name: {
      break;
    }
    case internal::kWindowTree_GetWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::GetWindowTree",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_GetWindowTree_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_GetWindowTree_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTree_GetWindowTree_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 25, false);
        return false;
      }
      WindowTree::GetWindowTreeCallback callback =
          WindowTree_GetWindowTree_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetWindowTree(
std::move(p_window_id), std::move(callback));
      return true;
    }
    case internal::kWindowTree_Embed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::Embed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_Embed_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_Embed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClientPtr p_client{};
      uint32_t p_embed_flags{};
      WindowTree_Embed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      p_embed_flags = input_data_view.embed_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 26, false);
        return false;
      }
      WindowTree::EmbedCallback callback =
          WindowTree_Embed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Embed(
std::move(p_window_id), 
std::move(p_client), 
std::move(p_embed_flags), std::move(callback));
      return true;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_ScheduleEmbed_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_ScheduleEmbed_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTreeClientPtr p_client{};
      WindowTree_ScheduleEmbed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 27, false);
        return false;
      }
      WindowTree::ScheduleEmbedCallback callback =
          WindowTree_ScheduleEmbed_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ScheduleEmbed(
std::move(p_client), std::move(callback));
      return true;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::ScheduleEmbedForExistingClient",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_window_id{};
      WindowTree_ScheduleEmbedForExistingClient_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 28, false);
        return false;
      }
      WindowTree::ScheduleEmbedForExistingClientCallback callback =
          WindowTree_ScheduleEmbedForExistingClient_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ScheduleEmbedForExistingClient(
std::move(p_window_id), std::move(callback));
      return true;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::EmbedUsingToken",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_EmbedUsingToken_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_EmbedUsingToken_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      base::UnguessableToken p_token{};
      uint32_t p_embed_flags{};
      WindowTree_EmbedUsingToken_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      p_embed_flags = input_data_view.embed_flags();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 29, false);
        return false;
      }
      WindowTree::EmbedUsingTokenCallback callback =
          WindowTree_EmbedUsingToken_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->EmbedUsingToken(
std::move(p_window_id), 
std::move(p_token), 
std::move(p_embed_flags), std::move(callback));
      return true;
    }
    case internal::kWindowTree_AttachFrameSinkId_Name: {
      break;
    }
    case internal::kWindowTree_UnattachFrameSinkId_Name: {
      break;
    }
    case internal::kWindowTree_SetFocus_Name: {
      break;
    }
    case internal::kWindowTree_SetCanFocus_Name: {
      break;
    }
    case internal::kWindowTree_SetCursor_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowTextInputState_Name: {
      break;
    }
    case internal::kWindowTree_SetImeVisibility_Name: {
      break;
    }
    case internal::kWindowTree_SetEventTargetingPolicy_Name: {
      break;
    }
    case internal::kWindowTree_OnWindowInputEventAck_Name: {
      break;
    }
    case internal::kWindowTree_DeactivateWindow_Name: {
      break;
    }
    case internal::kWindowTree_StackAbove_Name: {
      break;
    }
    case internal::kWindowTree_StackAtTop_Name: {
      break;
    }
    case internal::kWindowTree_BindWindowManagerInterface_Name: {
      break;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTree::GetCursorLocationMemory",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTree_GetCursorLocationMemory_Params_Data* params =
          reinterpret_cast<
              internal::WindowTree_GetCursorLocationMemory_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTree_GetCursorLocationMemory_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTree::Name_, 43, false);
        return false;
      }
      WindowTree::GetCursorLocationMemoryCallback callback =
          WindowTree_GetCursorLocationMemory_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetCursorLocationMemory(std::move(callback));
      return true;
    }
    case internal::kWindowTree_PerformWindowMove_Name: {
      break;
    }
    case internal::kWindowTree_CancelWindowMove_Name: {
      break;
    }
    case internal::kWindowTree_PerformDragDrop_Name: {
      break;
    }
    case internal::kWindowTree_CancelDragDrop_Name: {
      break;
    }
    case internal::kWindowTree_ObserveTopmostWindow_Name: {
      break;
    }
    case internal::kWindowTree_StopObservingTopmostWindow_Name: {
      break;
    }
    case internal::kWindowTree_SetWindowResizeShadow_Name: {
      break;
    }
    case internal::kWindowTree_CancelActiveTouchesExcept_Name: {
      break;
    }
    case internal::kWindowTree_CancelActiveTouches_Name: {
      break;
    }
    case internal::kWindowTree_TransferGestureEventsTo_Name: {
      break;
    }
    case internal::kWindowTree_TrackOcclusionState_Name: {
      break;
    }
    case internal::kWindowTree_PauseWindowOcclusionTracking_Name: {
      break;
    }
    case internal::kWindowTree_UnpauseWindowOcclusionTracking_Name: {
      break;
    }
    case internal::kWindowTree_ConnectToImeEngine_Name: {
      break;
    }
  }
  return false;
}

bool WindowTreeRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTree RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTree_NewWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_NewWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_NewTopLevelWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_NewTopLevelWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_DeleteWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_DeleteWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCapture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCapture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ReleaseCapture_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ReleaseCapture_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ObserveEventTypes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ObserveEventTypes_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowBounds_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowBounds_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_UpdateLocalSurfaceIdFromChild_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_UpdateLocalSurfaceIdFromChild_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AllocateLocalSurfaceId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AllocateLocalSurfaceId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowTransform_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowTransform_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetClientArea_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetClientArea_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetHitTestInsets_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetHitTestInsets_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetShape_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetShape_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCanAcceptDrops_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCanAcceptDrops_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowVisibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowVisibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowProperty_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowProperty_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowOpacity_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowOpacity_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowTransparent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowTransparent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AttachCompositorFrameSink_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AttachCompositorFrameSink_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AddWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AddWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_RemoveWindowFromParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_RemoveWindowFromParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AddTransientWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AddTransientWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_RemoveTransientWindowFromParent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_RemoveTransientWindowFromParent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetModalType_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetModalType_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ReorderWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ReorderWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetWindowTree_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetWindowTree_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_Embed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_Embed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbedForExistingClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_EmbedUsingToken_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_AttachFrameSinkId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_AttachFrameSinkId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_UnattachFrameSinkId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_UnattachFrameSinkId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCanFocus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCanFocus_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetCursor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetCursor_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowTextInputState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowTextInputState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetImeVisibility_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetImeVisibility_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetEventTargetingPolicy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetEventTargetingPolicy_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_OnWindowInputEventAck_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_OnWindowInputEventAck_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_DeactivateWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_DeactivateWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StackAbove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StackAbove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StackAtTop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StackAtTop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_BindWindowManagerInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_BindWindowManagerInterface_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetCursorLocationMemory_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_PerformWindowMove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_PerformWindowMove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_CancelWindowMove_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_CancelWindowMove_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_PerformDragDrop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_PerformDragDrop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_CancelDragDrop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_CancelDragDrop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ObserveTopmostWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ObserveTopmostWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_StopObservingTopmostWindow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_StopObservingTopmostWindow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_SetWindowResizeShadow_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_SetWindowResizeShadow_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_CancelActiveTouchesExcept_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_CancelActiveTouchesExcept_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_CancelActiveTouches_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_CancelActiveTouches_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_TransferGestureEventsTo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_TransferGestureEventsTo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_TrackOcclusionState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_TrackOcclusionState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_PauseWindowOcclusionTracking_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_PauseWindowOcclusionTracking_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_UnpauseWindowOcclusionTracking_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_UnpauseWindowOcclusionTracking_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ConnectToImeEngine_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ConnectToImeEngine_Params_Data>(
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

bool WindowTreeResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTree ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowTree_GetWindowTree_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetWindowTree_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_Embed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_Embed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbed_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbed_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_ScheduleEmbedForExistingClient_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_ScheduleEmbedForExistingClient_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_EmbedUsingToken_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_EmbedUsingToken_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTree_GetCursorLocationMemory_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTree_GetCursorLocationMemory_ResponseParams_Data>(
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
const char WindowTreeClient::Name_[] = "ws.mojom.WindowTreeClient";

class WindowTreeClient_OnDragEnter_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTreeClient_OnDragEnter_ForwardToCallback(
      WindowTreeClient::OnDragEnterCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTreeClient::OnDragEnterCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragEnter_ForwardToCallback);
};

class WindowTreeClient_OnDragOver_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTreeClient_OnDragOver_ForwardToCallback(
      WindowTreeClient::OnDragOverCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTreeClient::OnDragOverCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragOver_ForwardToCallback);
};

class WindowTreeClient_OnCompleteDrop_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WindowTreeClient_OnCompleteDrop_ForwardToCallback(
      WindowTreeClient::OnCompleteDropCallback callback
      ) : callback_(std::move(callback)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WindowTreeClient::OnCompleteDropCallback callback_;
  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnCompleteDrop_ForwardToCallback);
};

WindowTreeClientProxy::WindowTreeClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeClientProxy::OnClientId(
    uint32_t in_client_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnClientId");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnClientId_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnClientId_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->client_id = in_client_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnClientId");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnEmbed(
    ::ws::mojom::WindowDataPtr in_root, WindowTreePtr in_tree, int64_t in_display_id, uint64_t in_focused_window, bool in_parent_drawn, const base::Optional<viz::LocalSurfaceIdAllocation>& in_local_surface_id_allocation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnEmbed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnEmbed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnEmbed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->root)::BaseType::BufferWriter
      root_writer;
  mojo::internal::Serialize<::ws::mojom::WindowDataDataView>(
      in_root, buffer, &root_writer, &serialization_context);
  params->root.Set(
      root_writer.is_null() ? nullptr : root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root in WindowTreeClient.OnEmbed request");
  mojo::internal::Serialize<::ws::mojom::WindowTreePtrDataView>(
      in_tree, &params->tree, &serialization_context);
  params->display_id = in_display_id;
  params->focused_window = in_focused_window;
  params->parent_drawn = in_parent_drawn;
  typename decltype(params->local_surface_id_allocation)::BaseType::BufferWriter
      local_surface_id_allocation_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
      in_local_surface_id_allocation, buffer, &local_surface_id_allocation_writer, &serialization_context);
  params->local_surface_id_allocation.Set(
      local_surface_id_allocation_writer.is_null() ? nullptr : local_surface_id_allocation_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnEmbed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnEmbedFromToken(
    const base::UnguessableToken& in_token, ::ws::mojom::WindowDataPtr in_root, int64_t in_display_id, const base::Optional<viz::LocalSurfaceIdAllocation>& in_local_surface_id_allocation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnEmbedFromToken");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnEmbedFromToken_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnEmbedFromToken_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->token)::BaseType::BufferWriter
      token_writer;
  mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
      in_token, buffer, &token_writer, &serialization_context);
  params->token.Set(
      token_writer.is_null() ? nullptr : token_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->token.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null token in WindowTreeClient.OnEmbedFromToken request");
  typename decltype(params->root)::BaseType::BufferWriter
      root_writer;
  mojo::internal::Serialize<::ws::mojom::WindowDataDataView>(
      in_root, buffer, &root_writer, &serialization_context);
  params->root.Set(
      root_writer.is_null() ? nullptr : root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null root in WindowTreeClient.OnEmbedFromToken request");
  params->display_id = in_display_id;
  typename decltype(params->local_surface_id_allocation)::BaseType::BufferWriter
      local_surface_id_allocation_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
      in_local_surface_id_allocation, buffer, &local_surface_id_allocation_writer, &serialization_context);
  params->local_surface_id_allocation.Set(
      local_surface_id_allocation_writer.is_null() ? nullptr : local_surface_id_allocation_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnEmbedFromToken");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnEmbeddedAppDisconnected(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnEmbeddedAppDisconnected");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnEmbeddedAppDisconnected");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnUnembed(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnUnembed");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnUnembed_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnUnembed_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnUnembed");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnCaptureChanged(
    uint64_t in_new_capture, uint64_t in_old_capture) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnCaptureChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnCaptureChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnCaptureChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->new_capture = in_new_capture;
  params->old_capture = in_old_capture;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnCaptureChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnFrameSinkIdAllocated(
    uint64_t in_window, const viz::FrameSinkId& in_frame_sink_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnFrameSinkIdAllocated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->frame_sink_id)::BaseType::BufferWriter
      frame_sink_id_writer;
  mojo::internal::Serialize<::viz::mojom::FrameSinkIdDataView>(
      in_frame_sink_id, buffer, &frame_sink_id_writer, &serialization_context);
  params->frame_sink_id.Set(
      frame_sink_id_writer.is_null() ? nullptr : frame_sink_id_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame_sink_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame_sink_id in WindowTreeClient.OnFrameSinkIdAllocated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnFrameSinkIdAllocated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTopLevelCreated(
    uint32_t in_change_id, ::ws::mojom::WindowDataPtr in_data, int64_t in_display_id, bool in_parent_drawn, const viz::LocalSurfaceIdAllocation& in_local_surface_id_allocation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTopLevelCreated");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTopLevelCreated_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnTopLevelCreated_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  typename decltype(params->data)::BaseType::BufferWriter
      data_writer;
  mojo::internal::Serialize<::ws::mojom::WindowDataDataView>(
      in_data, buffer, &data_writer, &serialization_context);
  params->data.Set(
      data_writer.is_null() ? nullptr : data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in WindowTreeClient.OnTopLevelCreated request");
  params->display_id = in_display_id;
  params->parent_drawn = in_parent_drawn;
  typename decltype(params->local_surface_id_allocation)::BaseType::BufferWriter
      local_surface_id_allocation_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
      in_local_surface_id_allocation, buffer, &local_surface_id_allocation_writer, &serialization_context);
  params->local_surface_id_allocation.Set(
      local_surface_id_allocation_writer.is_null() ? nullptr : local_surface_id_allocation_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->local_surface_id_allocation.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_surface_id_allocation in WindowTreeClient.OnTopLevelCreated request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnTopLevelCreated");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowBoundsChanged(
    uint64_t in_window, const gfx::Rect& in_new_bounds, ui::WindowShowState in_state, const base::Optional<viz::LocalSurfaceIdAllocation>& in_local_surface_id_allocation) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowBoundsChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowBoundsChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->new_bounds)::BaseType::BufferWriter
      new_bounds_writer;
  mojo::internal::Serialize<::gfx::mojom::RectDataView>(
      in_new_bounds, buffer, &new_bounds_writer, &serialization_context);
  params->new_bounds.Set(
      new_bounds_writer.is_null() ? nullptr : new_bounds_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_bounds.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_bounds in WindowTreeClient.OnWindowBoundsChanged request");
  mojo::internal::Serialize<::ui::mojom::WindowShowState>(
      in_state, &params->state);
  typename decltype(params->local_surface_id_allocation)::BaseType::BufferWriter
      local_surface_id_allocation_writer;
  mojo::internal::Serialize<::viz::mojom::LocalSurfaceIdAllocationDataView>(
      in_local_surface_id_allocation, buffer, &local_surface_id_allocation_writer, &serialization_context);
  params->local_surface_id_allocation.Set(
      local_surface_id_allocation_writer.is_null() ? nullptr : local_surface_id_allocation_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowBoundsChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowTransformChanged(
    uint64_t in_window, const gfx::Transform& in_new_transform) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowTransformChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowTransformChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowTransformChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->new_transform)::BaseType::BufferWriter
      new_transform_writer;
  mojo::internal::Serialize<::gfx::mojom::TransformDataView>(
      in_new_transform, buffer, &new_transform_writer, &serialization_context);
  params->new_transform.Set(
      new_transform_writer.is_null() ? nullptr : new_transform_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->new_transform.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_transform in WindowTreeClient.OnWindowTransformChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowTransformChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTransientWindowAdded(
    uint64_t in_window_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTransientWindowAdded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTransientWindowAdded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnTransientWindowAdded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnTransientWindowAdded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTransientWindowRemoved(
    uint64_t in_window_id, uint64_t in_transient_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTransientWindowRemoved");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTransientWindowRemoved_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->transient_window_id = in_transient_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnTransientWindowRemoved");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowHierarchyChanged(
    uint64_t in_window, uint64_t in_old_parent, uint64_t in_new_parent, std::vector<::ws::mojom::WindowDataPtr> in_windows) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowHierarchyChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowHierarchyChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->old_parent = in_old_parent;
  params->new_parent = in_new_parent;
  typename decltype(params->windows)::BaseType::BufferWriter
      windows_writer;
  const mojo::internal::ContainerValidateParams windows_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::ws::mojom::WindowDataDataView>>(
      in_windows, buffer, &windows_writer, &windows_validate_params,
      &serialization_context);
  params->windows.Set(
      windows_writer.is_null() ? nullptr : windows_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->windows.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null windows in WindowTreeClient.OnWindowHierarchyChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowHierarchyChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowReordered(
    uint64_t in_window_id, uint64_t in_relative_window_id, ::ws::mojom::OrderDirection in_direction) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowReordered");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowReordered_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowReordered_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  params->relative_window_id = in_relative_window_id;
  mojo::internal::Serialize<::ws::mojom::OrderDirection>(
      in_direction, &params->direction);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowReordered");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowDeleted(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowDeleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowDeleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowDeleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowDeleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowVisibilityChanged(
    uint64_t in_window, bool in_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowVisibilityChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowVisibilityChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->visible = in_visible;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowVisibilityChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowDisplayChanged(
    uint64_t in_window, int64_t in_display_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowDisplayChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowDisplayChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowDisplayChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->display_id = in_display_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowDisplayChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowParentDrawnStateChanged(
    uint64_t in_window, bool in_drawn) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowParentDrawnStateChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->drawn = in_drawn;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowParentDrawnStateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowSharedPropertyChanged(
    uint64_t in_window, const std::string& in_name, const base::Optional<std::vector<uint8_t>>& in_new_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowSharedPropertyChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  typename decltype(params->name)::BaseType::BufferWriter
      name_writer;
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name, buffer, &name_writer, &serialization_context);
  params->name.Set(
      name_writer.is_null() ? nullptr : name_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in WindowTreeClient.OnWindowSharedPropertyChanged request");
  typename decltype(params->new_data)::BaseType::BufferWriter
      new_data_writer;
  const mojo::internal::ContainerValidateParams new_data_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
      in_new_data, buffer, &new_data_writer, &new_data_validate_params,
      &serialization_context);
  params->new_data.Set(
      new_data_writer.is_null() ? nullptr : new_data_writer.data());
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowSharedPropertyChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowInputEvent(
    uint32_t in_event_id, uint64_t in_window, int64_t in_display_id, std::unique_ptr<ui::Event> in_event, bool in_matches_event_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowInputEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowInputEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowInputEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->event_id = in_event_id;
  params->window = in_window;
  params->display_id = in_display_id;
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WindowTreeClient.OnWindowInputEvent request");
  params->matches_event_observer = in_matches_event_observer;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowInputEvent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnObservedInputEvent(
    std::unique_ptr<ui::Event> in_event) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnObservedInputEvent");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnObservedInputEvent_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnObservedInputEvent_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->event)::BaseType::BufferWriter
      event_writer;
  mojo::internal::Serialize<::ui::mojom::EventDataView>(
      in_event, buffer, &event_writer, &serialization_context);
  params->event.Set(
      event_writer.is_null() ? nullptr : event_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->event.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null event in WindowTreeClient.OnObservedInputEvent request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnObservedInputEvent");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowFocused(
    uint64_t in_focused_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowFocused");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowFocused_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowFocused_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->focused_window_id = in_focused_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowFocused");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowCursorChanged(
    uint64_t in_window_id, ui::Cursor in_cursor) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowCursorChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowCursorChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowCursorChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  typename decltype(params->cursor)::BaseType::BufferWriter
      cursor_writer;
  mojo::internal::Serialize<::ui::mojom::CursorDataView>(
      in_cursor, buffer, &cursor_writer, &serialization_context);
  params->cursor.Set(
      cursor_writer.is_null() ? nullptr : cursor_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cursor.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cursor in WindowTreeClient.OnWindowCursorChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowCursorChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnDragDropStart(
    const base::flat_map<std::string, std::vector<uint8_t>>& in_drag_data) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragDropStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragDropStart_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragDropStart_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->drag_data)::BaseType::BufferWriter
      drag_data_writer;
  const mojo::internal::ContainerValidateParams drag_data_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::ArrayDataView<uint8_t>>>(
      in_drag_data, buffer, &drag_data_writer, &drag_data_validate_params,
      &serialization_context);
  params->drag_data.Set(
      drag_data_writer.is_null() ? nullptr : drag_data_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->drag_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null drag_data in WindowTreeClient.OnDragDropStart request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragDropStart");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnDragEnter(
    uint64_t in_window, uint32_t in_key_state, const gfx::PointF& in_location_in_root, const gfx::PointF& in_location, uint32_t in_effect_bitmask, OnDragEnterCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragEnter");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragEnter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragEnter_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->key_state = in_key_state;
  typename decltype(params->location_in_root)::BaseType::BufferWriter
      location_in_root_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location_in_root, buffer, &location_in_root_writer, &serialization_context);
  params->location_in_root.Set(
      location_in_root_writer.is_null() ? nullptr : location_in_root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location_in_root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location_in_root in WindowTreeClient.OnDragEnter request");
  typename decltype(params->location)::BaseType::BufferWriter
      location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location, buffer, &location_writer, &serialization_context);
  params->location.Set(
      location_writer.is_null() ? nullptr : location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location in WindowTreeClient.OnDragEnter request");
  params->effect_bitmask = in_effect_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragEnter");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTreeClient_OnDragEnter_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeClientProxy::OnDragOver(
    uint64_t in_window, uint32_t in_key_state, const gfx::PointF& in_location_in_root, const gfx::PointF& in_location, uint32_t in_effect_bitmask, OnDragOverCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragOver");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragOver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragOver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->key_state = in_key_state;
  typename decltype(params->location_in_root)::BaseType::BufferWriter
      location_in_root_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location_in_root, buffer, &location_in_root_writer, &serialization_context);
  params->location_in_root.Set(
      location_in_root_writer.is_null() ? nullptr : location_in_root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location_in_root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location_in_root in WindowTreeClient.OnDragOver request");
  typename decltype(params->location)::BaseType::BufferWriter
      location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location, buffer, &location_writer, &serialization_context);
  params->location.Set(
      location_writer.is_null() ? nullptr : location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location in WindowTreeClient.OnDragOver request");
  params->effect_bitmask = in_effect_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragOver");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTreeClient_OnDragOver_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeClientProxy::OnDragLeave(
    uint64_t in_window) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragLeave");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragLeave_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragLeave_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragLeave");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnCompleteDrop(
    uint64_t in_window, uint32_t in_key_state, const gfx::PointF& in_location_in_root, const gfx::PointF& in_location, uint32_t in_effect_bitmask, OnCompleteDropCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnCompleteDrop");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnCompleteDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnCompleteDrop_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window = in_window;
  params->key_state = in_key_state;
  typename decltype(params->location_in_root)::BaseType::BufferWriter
      location_in_root_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location_in_root, buffer, &location_in_root_writer, &serialization_context);
  params->location_in_root.Set(
      location_in_root_writer.is_null() ? nullptr : location_in_root_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location_in_root.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location_in_root in WindowTreeClient.OnCompleteDrop request");
  typename decltype(params->location)::BaseType::BufferWriter
      location_writer;
  mojo::internal::Serialize<::gfx::mojom::PointFDataView>(
      in_location, buffer, &location_writer, &serialization_context);
  params->location.Set(
      location_writer.is_null() ? nullptr : location_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->location.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null location in WindowTreeClient.OnCompleteDrop request");
  params->effect_bitmask = in_effect_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnCompleteDrop");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WindowTreeClient_OnCompleteDrop_ForwardToCallback(
          std::move(callback)));
  ignore_result(receiver_->AcceptWithResponder(&message, std::move(responder)));
}

void WindowTreeClientProxy::OnPerformDragDropCompleted(
    uint32_t in_change_id, bool in_success, uint32_t in_action_taken) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnPerformDragDropCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnPerformDragDropCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->success = in_success;
  params->action_taken = in_action_taken;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnPerformDragDropCompleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnDragDropDone(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragDropDone");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragDropDone_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragDropDone_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragDropDone");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnTopmostWindowChanged(
    const std::vector<uint64_t>& in_topmost_ids) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTopmostWindowChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnTopmostWindowChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnTopmostWindowChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->topmost_ids)::BaseType::BufferWriter
      topmost_ids_writer;
  const mojo::internal::ContainerValidateParams topmost_ids_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<uint64_t>>(
      in_topmost_ids, buffer, &topmost_ids_writer, &topmost_ids_validate_params,
      &serialization_context);
  params->topmost_ids.Set(
      topmost_ids_writer.is_null() ? nullptr : topmost_ids_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->topmost_ids.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null topmost_ids in WindowTreeClient.OnTopmostWindowChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnTopmostWindowChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnChangeCompleted(
    uint32_t in_change_id, bool in_success) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnChangeCompleted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnChangeCompleted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnChangeCompleted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->change_id = in_change_id;
  params->success = in_success;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnChangeCompleted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::RequestClose(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::RequestClose");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_RequestClose_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_RequestClose_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("RequestClose");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::GetScreenProviderObserver(
    ::ws::mojom::ScreenProviderObserverAssociatedRequest in_observer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::GetScreenProviderObserver");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_GetScreenProviderObserver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_GetScreenProviderObserver_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::ScreenProviderObserverAssociatedRequestDataView>(
      in_observer, &params->observer, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->observer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid observer in WindowTreeClient.GetScreenProviderObserver request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("GetScreenProviderObserver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnOcclusionStatesChanged(
    const base::flat_map<uint64_t, ::ws::mojom::OcclusionState>& in_occlusion_changes) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnOcclusionStatesChanged");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnOcclusionStatesChanged_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnOcclusionStatesChanged_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  typename decltype(params->occlusion_changes)::BaseType::BufferWriter
      occlusion_changes_writer;
  const mojo::internal::ContainerValidateParams occlusion_changes_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, ::ws::mojom::internal::OcclusionState_Data::Validate));
  mojo::internal::Serialize<mojo::MapDataView<uint64_t, ::ws::mojom::OcclusionState>>(
      in_occlusion_changes, buffer, &occlusion_changes_writer, &occlusion_changes_validate_params,
      &serialization_context);
  params->occlusion_changes.Set(
      occlusion_changes_writer.is_null() ? nullptr : occlusion_changes_writer.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->occlusion_changes.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null occlusion_changes in WindowTreeClient.OnOcclusionStatesChanged request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnOcclusionStatesChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::CleanupGestureState(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::CleanupGestureState");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_CleanupGestureState_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_CleanupGestureState_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("CleanupGestureState");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowResizeLoopStarted(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowResizeLoopStarted");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowResizeLoopStarted_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowResizeLoopStarted_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowResizeLoopStarted");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

void WindowTreeClientProxy::OnWindowResizeLoopEnded(
    uint64_t in_window_id) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowResizeLoopEnded");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnWindowResizeLoopEnded_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnWindowResizeLoopEnded_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->window_id = in_window_id;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnWindowResizeLoopEnded");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}
class WindowTreeClient_OnDragEnter_ProxyToResponder {
 public:
  static WindowTreeClient::OnDragEnterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTreeClient_OnDragEnter_ProxyToResponder> proxy(
        new WindowTreeClient_OnDragEnter_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTreeClient_OnDragEnter_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTreeClient_OnDragEnter_ProxyToResponder() {
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
  WindowTreeClient_OnDragEnter_ProxyToResponder(
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
        << "WindowTreeClient::OnDragEnterCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_supported_op_bitmask);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragEnter_ProxyToResponder);
};

bool WindowTreeClient_OnDragEnter_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragEnterCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTreeClient_OnDragEnter_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTreeClient_OnDragEnter_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_supported_op_bitmask{};
  WindowTreeClient_OnDragEnter_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_supported_op_bitmask = input_data_view.supported_op_bitmask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTreeClient::Name_, 24, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supported_op_bitmask));
  return true;
}

void WindowTreeClient_OnDragEnter_ProxyToResponder::Run(
    uint32_t in_supported_op_bitmask) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragEnter_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragEnter_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->supported_op_bitmask = in_supported_op_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragEnterCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragEnter");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTreeClient_OnDragOver_ProxyToResponder {
 public:
  static WindowTreeClient::OnDragOverCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTreeClient_OnDragOver_ProxyToResponder> proxy(
        new WindowTreeClient_OnDragOver_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTreeClient_OnDragOver_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTreeClient_OnDragOver_ProxyToResponder() {
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
  WindowTreeClient_OnDragOver_ProxyToResponder(
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
        << "WindowTreeClient::OnDragOverCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_supported_op_bitmask);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnDragOver_ProxyToResponder);
};

bool WindowTreeClient_OnDragOver_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragOverCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTreeClient_OnDragOver_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTreeClient_OnDragOver_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_supported_op_bitmask{};
  WindowTreeClient_OnDragOver_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_supported_op_bitmask = input_data_view.supported_op_bitmask();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTreeClient::Name_, 25, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_supported_op_bitmask));
  return true;
}

void WindowTreeClient_OnDragOver_ProxyToResponder::Run(
    uint32_t in_supported_op_bitmask) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnDragOver_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnDragOver_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->supported_op_bitmask = in_supported_op_bitmask;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragOverCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnDragOver");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WindowTreeClient_OnCompleteDrop_ProxyToResponder {
 public:
  static WindowTreeClient::OnCompleteDropCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WindowTreeClient_OnCompleteDrop_ProxyToResponder> proxy(
        new WindowTreeClient_OnCompleteDrop_ProxyToResponder(
            request_id, is_sync, std::move(responder)));
    return base::BindOnce(&WindowTreeClient_OnCompleteDrop_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WindowTreeClient_OnCompleteDrop_ProxyToResponder() {
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
  WindowTreeClient_OnCompleteDrop_ProxyToResponder(
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
        << "WindowTreeClient::OnCompleteDropCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint32_t in_action_taken);

  uint64_t request_id_;
  bool is_sync_;
  std::unique_ptr<mojo::MessageReceiverWithStatus> responder_;

  DISALLOW_COPY_AND_ASSIGN(WindowTreeClient_OnCompleteDrop_ProxyToResponder);
};

bool WindowTreeClient_OnCompleteDrop_ForwardToCallback::Accept(
    mojo::Message* message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnCompleteDropCallback",
               "message", message->name());
#endif
  mojo::internal::MessageDispatchContext dispatch_context(message);

  DCHECK(message->is_serialized());
  internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data*>(
              message->mutable_payload());
  
  mojo::internal::SerializationContext serialization_context;
  serialization_context.TakeHandlesFromMessage(message);
  bool success = true;
  uint32_t p_action_taken{};
  WindowTreeClient_OnCompleteDrop_ResponseParamsDataView input_data_view(params, &serialization_context);
  
  p_action_taken = input_data_view.action_taken();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WindowTreeClient::Name_, 27, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_action_taken));
  return true;
}

void WindowTreeClient_OnCompleteDrop_ProxyToResponder::Run(
    uint32_t in_action_taken) {
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeClient_OnCompleteDrop_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  params->action_taken = in_action_taken;
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1("mojom", "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnCompleteDropCallback",
               "message", message.name());
#endif

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeClient::Name_);
  message.set_method_name("OnCompleteDrop");
#endif

  message.set_request_id(request_id_);
  ignore_result(responder_->Accept(&message));
  // TODO(darin): Accept() returning false indicates a malformed message, and
  // that may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool WindowTreeClientStubDispatch::Accept(
    WindowTreeClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnClientId_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnClientId",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnClientId_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnClientId_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_client_id{};
      WindowTreeClient_OnClientId_ParamsDataView input_data_view(params, &serialization_context);
      
      p_client_id = input_data_view.client_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnClientId(
std::move(p_client_id));
      return true;
    }
    case internal::kWindowTreeClient_OnEmbed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnEmbed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnEmbed_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnEmbed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ws::mojom::WindowDataPtr p_root{};
      WindowTreePtr p_tree{};
      int64_t p_display_id{};
      uint64_t p_focused_window{};
      bool p_parent_drawn{};
      base::Optional<viz::LocalSurfaceIdAllocation> p_local_surface_id_allocation{};
      WindowTreeClient_OnEmbed_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadRoot(&p_root))
        success = false;
      p_tree =
          input_data_view.TakeTree<decltype(p_tree)>();
      p_display_id = input_data_view.display_id();
      p_focused_window = input_data_view.focused_window();
      p_parent_drawn = input_data_view.parent_drawn();
      if (!input_data_view.ReadLocalSurfaceIdAllocation(&p_local_surface_id_allocation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnEmbed(
std::move(p_root), 
std::move(p_tree), 
std::move(p_display_id), 
std::move(p_focused_window), 
std::move(p_parent_drawn), 
std::move(p_local_surface_id_allocation));
      return true;
    }
    case internal::kWindowTreeClient_OnEmbedFromToken_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnEmbedFromToken",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnEmbedFromToken_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnEmbedFromToken_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::UnguessableToken p_token{};
      ::ws::mojom::WindowDataPtr p_root{};
      int64_t p_display_id{};
      base::Optional<viz::LocalSurfaceIdAllocation> p_local_surface_id_allocation{};
      WindowTreeClient_OnEmbedFromToken_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadToken(&p_token))
        success = false;
      if (!input_data_view.ReadRoot(&p_root))
        success = false;
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadLocalSurfaceIdAllocation(&p_local_surface_id_allocation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnEmbedFromToken(
std::move(p_token), 
std::move(p_root), 
std::move(p_display_id), 
std::move(p_local_surface_id_allocation));
      return true;
    }
    case internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnEmbeddedAppDisconnected",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnEmbeddedAppDisconnected_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnEmbeddedAppDisconnected(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnUnembed_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnUnembed",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnUnembed_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnUnembed_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnUnembed_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnUnembed(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnCaptureChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnCaptureChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnCaptureChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnCaptureChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_new_capture{};
      uint64_t p_old_capture{};
      WindowTreeClient_OnCaptureChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_new_capture = input_data_view.new_capture();
      p_old_capture = input_data_view.old_capture();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 5, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCaptureChanged(
std::move(p_new_capture), 
std::move(p_old_capture));
      return true;
    }
    case internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnFrameSinkIdAllocated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      viz::FrameSinkId p_frame_sink_id{};
      WindowTreeClient_OnFrameSinkIdAllocated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadFrameSinkId(&p_frame_sink_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 6, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnFrameSinkIdAllocated(
std::move(p_window), 
std::move(p_frame_sink_id));
      return true;
    }
    case internal::kWindowTreeClient_OnTopLevelCreated_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTopLevelCreated",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTopLevelCreated_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTopLevelCreated_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      ::ws::mojom::WindowDataPtr p_data{};
      int64_t p_display_id{};
      bool p_parent_drawn{};
      viz::LocalSurfaceIdAllocation p_local_surface_id_allocation{};
      WindowTreeClient_OnTopLevelCreated_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      if (!input_data_view.ReadData(&p_data))
        success = false;
      p_display_id = input_data_view.display_id();
      p_parent_drawn = input_data_view.parent_drawn();
      if (!input_data_view.ReadLocalSurfaceIdAllocation(&p_local_surface_id_allocation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 7, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTopLevelCreated(
std::move(p_change_id), 
std::move(p_data), 
std::move(p_display_id), 
std::move(p_parent_drawn), 
std::move(p_local_surface_id_allocation));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowBoundsChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowBoundsChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      gfx::Rect p_new_bounds{};
      ui::WindowShowState p_state{};
      base::Optional<viz::LocalSurfaceIdAllocation> p_local_surface_id_allocation{};
      WindowTreeClient_OnWindowBoundsChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadNewBounds(&p_new_bounds))
        success = false;
      if (!input_data_view.ReadState(&p_state))
        success = false;
      if (!input_data_view.ReadLocalSurfaceIdAllocation(&p_local_surface_id_allocation))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 8, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowBoundsChanged(
std::move(p_window), 
std::move(p_new_bounds), 
std::move(p_state), 
std::move(p_local_surface_id_allocation));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowTransformChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowTransformChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowTransformChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowTransformChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      gfx::Transform p_new_transform{};
      WindowTreeClient_OnWindowTransformChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadNewTransform(&p_new_transform))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 9, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowTransformChanged(
std::move(p_window), 
std::move(p_new_transform));
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowAdded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTransientWindowAdded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTransientWindowAdded_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTransientWindowAdded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      uint64_t p_transient_window_id{};
      WindowTreeClient_OnTransientWindowAdded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 10, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTransientWindowAdded(
std::move(p_window_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowRemoved_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTransientWindowRemoved",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      uint64_t p_transient_window_id{};
      WindowTreeClient_OnTransientWindowRemoved_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_transient_window_id = input_data_view.transient_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 11, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTransientWindowRemoved(
std::move(p_window_id), 
std::move(p_transient_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowHierarchyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowHierarchyChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint64_t p_old_parent{};
      uint64_t p_new_parent{};
      std::vector<::ws::mojom::WindowDataPtr> p_windows{};
      WindowTreeClient_OnWindowHierarchyChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_old_parent = input_data_view.old_parent();
      p_new_parent = input_data_view.new_parent();
      if (!input_data_view.ReadWindows(&p_windows))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 12, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowHierarchyChanged(
std::move(p_window), 
std::move(p_old_parent), 
std::move(p_new_parent), 
std::move(p_windows));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowReordered_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowReordered",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowReordered_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowReordered_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      uint64_t p_relative_window_id{};
      ::ws::mojom::OrderDirection p_direction{};
      WindowTreeClient_OnWindowReordered_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      p_relative_window_id = input_data_view.relative_window_id();
      if (!input_data_view.ReadDirection(&p_direction))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 13, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowReordered(
std::move(p_window_id), 
std::move(p_relative_window_id), 
std::move(p_direction));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowDeleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowDeleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowDeleted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowDeleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnWindowDeleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 14, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowDeleted(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowVisibilityChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowVisibilityChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      bool p_visible{};
      WindowTreeClient_OnWindowVisibilityChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_visible = input_data_view.visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 15, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowVisibilityChanged(
std::move(p_window), 
std::move(p_visible));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowDisplayChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowDisplayChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowDisplayChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowDisplayChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      int64_t p_display_id{};
      WindowTreeClient_OnWindowDisplayChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_display_id = input_data_view.display_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 16, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowDisplayChanged(
std::move(p_window), 
std::move(p_display_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowParentDrawnStateChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      bool p_drawn{};
      WindowTreeClient_OnWindowParentDrawnStateChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_drawn = input_data_view.drawn();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 17, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowParentDrawnStateChanged(
std::move(p_window), 
std::move(p_drawn));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowSharedPropertyChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      std::string p_name{};
      base::Optional<std::vector<uint8_t>> p_new_data{};
      WindowTreeClient_OnWindowSharedPropertyChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!input_data_view.ReadNewData(&p_new_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 18, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowSharedPropertyChanged(
std::move(p_window), 
std::move(p_name), 
std::move(p_new_data));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowInputEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowInputEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowInputEvent_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowInputEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_event_id{};
      uint64_t p_window{};
      int64_t p_display_id{};
      std::unique_ptr<ui::Event> p_event{};
      bool p_matches_event_observer{};
      WindowTreeClient_OnWindowInputEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      p_event_id = input_data_view.event_id();
      p_window = input_data_view.window();
      p_display_id = input_data_view.display_id();
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      p_matches_event_observer = input_data_view.matches_event_observer();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 19, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowInputEvent(
std::move(p_event_id), 
std::move(p_window), 
std::move(p_display_id), 
std::move(p_event), 
std::move(p_matches_event_observer));
      return true;
    }
    case internal::kWindowTreeClient_OnObservedInputEvent_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnObservedInputEvent",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnObservedInputEvent_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnObservedInputEvent_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::unique_ptr<ui::Event> p_event{};
      WindowTreeClient_OnObservedInputEvent_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadEvent(&p_event))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 20, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnObservedInputEvent(
std::move(p_event));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowFocused_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowFocused",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowFocused_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowFocused_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_focused_window_id{};
      WindowTreeClient_OnWindowFocused_ParamsDataView input_data_view(params, &serialization_context);
      
      p_focused_window_id = input_data_view.focused_window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 21, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowFocused(
std::move(p_focused_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowCursorChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowCursorChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowCursorChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowCursorChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      ui::Cursor p_cursor{};
      WindowTreeClient_OnWindowCursorChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!input_data_view.ReadCursor(&p_cursor))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 22, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowCursorChanged(
std::move(p_window_id), 
std::move(p_cursor));
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropStart_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragDropStart",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnDragDropStart_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnDragDropStart_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::flat_map<std::string, std::vector<uint8_t>> p_drag_data{};
      WindowTreeClient_OnDragDropStart_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadDragData(&p_drag_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 23, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDragDropStart(
std::move(p_drag_data));
      return true;
    }
    case internal::kWindowTreeClient_OnDragEnter_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnDragLeave_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragLeave",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnDragLeave_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnDragLeave_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      WindowTreeClient_OnDragLeave_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 26, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDragLeave(
std::move(p_window));
      return true;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnPerformDragDropCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnPerformDragDropCompleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      bool p_success{};
      uint32_t p_action_taken{};
      WindowTreeClient_OnPerformDragDropCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_success = input_data_view.success();
      p_action_taken = input_data_view.action_taken();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 28, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnPerformDragDropCompleted(
std::move(p_change_id), 
std::move(p_success), 
std::move(p_action_taken));
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropDone_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragDropDone",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnDragDropDone_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnDragDropDone_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTreeClient_OnDragDropDone_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 29, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDragDropDone();
      return true;
    }
    case internal::kWindowTreeClient_OnTopmostWindowChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnTopmostWindowChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnTopmostWindowChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnTopmostWindowChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      std::vector<uint64_t> p_topmost_ids{};
      WindowTreeClient_OnTopmostWindowChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadTopmostIds(&p_topmost_ids))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 30, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTopmostWindowChanged(
std::move(p_topmost_ids));
      return true;
    }
    case internal::kWindowTreeClient_OnChangeCompleted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnChangeCompleted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnChangeCompleted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnChangeCompleted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint32_t p_change_id{};
      bool p_success{};
      WindowTreeClient_OnChangeCompleted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_change_id = input_data_view.change_id();
      p_success = input_data_view.success();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 31, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnChangeCompleted(
std::move(p_change_id), 
std::move(p_success));
      return true;
    }
    case internal::kWindowTreeClient_RequestClose_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::RequestClose",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_RequestClose_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_RequestClose_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClient_RequestClose_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 32, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestClose(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTreeClient_GetScreenProviderObserver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::GetScreenProviderObserver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_GetScreenProviderObserver_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_GetScreenProviderObserver_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      ::ws::mojom::ScreenProviderObserverAssociatedRequest p_observer{};
      WindowTreeClient_GetScreenProviderObserver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_observer =
          input_data_view.TakeObserver<decltype(p_observer)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 33, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetScreenProviderObserver(
std::move(p_observer));
      return true;
    }
    case internal::kWindowTreeClient_OnOcclusionStatesChanged_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnOcclusionStatesChanged",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnOcclusionStatesChanged_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnOcclusionStatesChanged_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      base::flat_map<uint64_t, ::ws::mojom::OcclusionState> p_occlusion_changes{};
      WindowTreeClient_OnOcclusionStatesChanged_ParamsDataView input_data_view(params, &serialization_context);
      
      if (!input_data_view.ReadOcclusionChanges(&p_occlusion_changes))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 34, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnOcclusionStatesChanged(
std::move(p_occlusion_changes));
      return true;
    }
    case internal::kWindowTreeClient_CleanupGestureState_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::CleanupGestureState",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_CleanupGestureState_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_CleanupGestureState_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClient_CleanupGestureState_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 35, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CleanupGestureState(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowResizeLoopStarted_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowResizeLoopStarted",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowResizeLoopStarted_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowResizeLoopStarted_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClient_OnWindowResizeLoopStarted_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 36, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowResizeLoopStarted(
std::move(p_window_id));
      return true;
    }
    case internal::kWindowTreeClient_OnWindowResizeLoopEnded_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnWindowResizeLoopEnded",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeClient_OnWindowResizeLoopEnded_Params_Data* params =
          reinterpret_cast<internal::WindowTreeClient_OnWindowResizeLoopEnded_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window_id{};
      WindowTreeClient_OnWindowResizeLoopEnded_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window_id = input_data_view.window_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 37, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnWindowResizeLoopEnded(
std::move(p_window_id));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeClientStubDispatch::AcceptWithResponder(
    WindowTreeClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnClientId_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnEmbed_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnEmbedFromToken_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnUnembed_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnCaptureChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnTopLevelCreated_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowBoundsChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowTransformChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnTransientWindowAdded_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnTransientWindowRemoved_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowHierarchyChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowReordered_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowDeleted_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowVisibilityChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowDisplayChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowInputEvent_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnObservedInputEvent_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowFocused_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowCursorChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnDragDropStart_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnDragEnter_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragEnter",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTreeClient_OnDragEnter_Params_Data* params =
          reinterpret_cast<
              internal::WindowTreeClient_OnDragEnter_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint32_t p_key_state{};
      gfx::PointF p_location_in_root{};
      gfx::PointF p_location{};
      uint32_t p_effect_bitmask{};
      WindowTreeClient_OnDragEnter_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_key_state = input_data_view.key_state();
      if (!input_data_view.ReadLocationInRoot(&p_location_in_root))
        success = false;
      if (!input_data_view.ReadLocation(&p_location))
        success = false;
      p_effect_bitmask = input_data_view.effect_bitmask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 24, false);
        return false;
      }
      WindowTreeClient::OnDragEnterCallback callback =
          WindowTreeClient_OnDragEnter_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDragEnter(
std::move(p_window), 
std::move(p_key_state), 
std::move(p_location_in_root), 
std::move(p_location), 
std::move(p_effect_bitmask), std::move(callback));
      return true;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnDragOver",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTreeClient_OnDragOver_Params_Data* params =
          reinterpret_cast<
              internal::WindowTreeClient_OnDragOver_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint32_t p_key_state{};
      gfx::PointF p_location_in_root{};
      gfx::PointF p_location{};
      uint32_t p_effect_bitmask{};
      WindowTreeClient_OnDragOver_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_key_state = input_data_view.key_state();
      if (!input_data_view.ReadLocationInRoot(&p_location_in_root))
        success = false;
      if (!input_data_view.ReadLocation(&p_location))
        success = false;
      p_effect_bitmask = input_data_view.effect_bitmask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 25, false);
        return false;
      }
      WindowTreeClient::OnDragOverCallback callback =
          WindowTreeClient_OnDragOver_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnDragOver(
std::move(p_window), 
std::move(p_key_state), 
std::move(p_location_in_root), 
std::move(p_location), 
std::move(p_effect_bitmask), std::move(callback));
      return true;
    }
    case internal::kWindowTreeClient_OnDragLeave_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeClient::OnCompleteDrop",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      internal::WindowTreeClient_OnCompleteDrop_Params_Data* params =
          reinterpret_cast<
              internal::WindowTreeClient_OnCompleteDrop_Params_Data*>(
                  message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      uint64_t p_window{};
      uint32_t p_key_state{};
      gfx::PointF p_location_in_root{};
      gfx::PointF p_location{};
      uint32_t p_effect_bitmask{};
      WindowTreeClient_OnCompleteDrop_ParamsDataView input_data_view(params, &serialization_context);
      
      p_window = input_data_view.window();
      p_key_state = input_data_view.key_state();
      if (!input_data_view.ReadLocationInRoot(&p_location_in_root))
        success = false;
      if (!input_data_view.ReadLocation(&p_location))
        success = false;
      p_effect_bitmask = input_data_view.effect_bitmask();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeClient::Name_, 27, false);
        return false;
      }
      WindowTreeClient::OnCompleteDropCallback callback =
          WindowTreeClient_OnCompleteDrop_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnCompleteDrop(
std::move(p_window), 
std::move(p_key_state), 
std::move(p_location_in_root), 
std::move(p_location), 
std::move(p_effect_bitmask), std::move(callback));
      return true;
    }
    case internal::kWindowTreeClient_OnPerformDragDropCompleted_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnDragDropDone_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnTopmostWindowChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnChangeCompleted_Name: {
      break;
    }
    case internal::kWindowTreeClient_RequestClose_Name: {
      break;
    }
    case internal::kWindowTreeClient_GetScreenProviderObserver_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnOcclusionStatesChanged_Name: {
      break;
    }
    case internal::kWindowTreeClient_CleanupGestureState_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowResizeLoopStarted_Name: {
      break;
    }
    case internal::kWindowTreeClient_OnWindowResizeLoopEnded_Name: {
      break;
    }
  }
  return false;
}

bool WindowTreeClientRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeClient RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnClientId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnClientId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnEmbed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnEmbed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnEmbedFromToken_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnEmbedFromToken_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnEmbeddedAppDisconnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnEmbeddedAppDisconnected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnUnembed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnUnembed_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnCaptureChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnCaptureChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnFrameSinkIdAllocated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnFrameSinkIdAllocated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTopLevelCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTopLevelCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowBoundsChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowBoundsChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowTransformChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowTransformChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowAdded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTransientWindowAdded_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTransientWindowRemoved_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTransientWindowRemoved_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowHierarchyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowHierarchyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowReordered_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowReordered_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowDeleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowDeleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowVisibilityChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowVisibilityChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowDisplayChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowDisplayChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowParentDrawnStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowParentDrawnStateChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowSharedPropertyChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowSharedPropertyChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowInputEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowInputEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnObservedInputEvent_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnObservedInputEvent_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowFocused_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowFocused_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowCursorChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowCursorChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragDropStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragEnter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragEnter_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragOver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragLeave_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragLeave_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnCompleteDrop_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnPerformDragDropCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnPerformDragDropCompleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragDropDone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragDropDone_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnTopmostWindowChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnTopmostWindowChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnChangeCompleted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnChangeCompleted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_RequestClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_RequestClose_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_GetScreenProviderObserver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_GetScreenProviderObserver_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnOcclusionStatesChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnOcclusionStatesChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_CleanupGestureState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_CleanupGestureState_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowResizeLoopStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowResizeLoopStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnWindowResizeLoopEnded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnWindowResizeLoopEnded_Params_Data>(
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

bool WindowTreeClientResponseValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeClient ResponseValidator");

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWindowTreeClient_OnDragEnter_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragEnter_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnDragOver_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnDragOver_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return true;
    }
    case internal::kWindowTreeClient_OnCompleteDrop_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeClient_OnCompleteDrop_ResponseParams_Data>(
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
const char WindowTreeFactory::Name_[] = "ws.mojom.WindowTreeFactory";

WindowTreeFactoryProxy::WindowTreeFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WindowTreeFactoryProxy::CreateWindowTree(
    WindowTreeRequest in_tree_request, WindowTreeClientPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "<class 'jinja2::utils::Namespace'>::WindowTreeFactory::CreateWindowTree");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0);
  
  mojo::Message message(
      internal::kWindowTreeFactory_CreateWindowTree_Name, kFlags, 0, 0, nullptr);
  auto* buffer = message.payload_buffer();
  ::ws::mojom::internal::WindowTreeFactory_CreateWindowTree_Params_Data::BufferWriter
      params;
  mojo::internal::SerializationContext serialization_context;
  params.Allocate(buffer);
  mojo::internal::Serialize<::ws::mojom::WindowTreeRequestDataView>(
      in_tree_request, &params->tree_request, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->tree_request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid tree_request in WindowTreeFactory.CreateWindowTree request");
  mojo::internal::Serialize<::ws::mojom::WindowTreeClientPtrDataView>(
      in_client, &params->client, &serialization_context);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WindowTreeFactory.CreateWindowTree request");
  message.AttachHandlesFromSerializationContext(
      &serialization_context);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WindowTreeFactory::Name_);
  message.set_method_name("CreateWindowTree");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ignore_result(receiver_->Accept(&message));
}

// static
bool WindowTreeFactoryStubDispatch::Accept(
    WindowTreeFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWindowTreeFactory_CreateWindowTree_Name: {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      TRACE_EVENT1(
          "mojom",
          "(Impl)<class 'jinja2::utils::Namespace'>::WindowTreeFactory::CreateWindowTree",
          "message", message->name());
#endif
      base::TaskAnnotator::ScopedSetIpcProgramCounter scoped_ipc_pc(
          base::GetProgramCounter());
      mojo::internal::MessageDispatchContext context(message);

      DCHECK(message->is_serialized());
      internal::WindowTreeFactory_CreateWindowTree_Params_Data* params =
          reinterpret_cast<internal::WindowTreeFactory_CreateWindowTree_Params_Data*>(
              message->mutable_payload());
      
      mojo::internal::SerializationContext serialization_context;
      serialization_context.TakeHandlesFromMessage(message);
      bool success = true;
      WindowTreeRequest p_tree_request{};
      WindowTreeClientPtr p_client{};
      WindowTreeFactory_CreateWindowTree_ParamsDataView input_data_view(params, &serialization_context);
      
      p_tree_request =
          input_data_view.TakeTreeRequest<decltype(p_tree_request)>();
      p_client =
          input_data_view.TakeClient<decltype(p_client)>();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WindowTreeFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateWindowTree(
std::move(p_tree_request), 
std::move(p_client));
      return true;
    }
  }
  return false;
}

// static
bool WindowTreeFactoryStubDispatch::AcceptWithResponder(
    WindowTreeFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  switch (message->header()->name) {
    case internal::kWindowTreeFactory_CreateWindowTree_Name: {
      break;
    }
  }
  return false;
}

bool WindowTreeFactoryRequestValidator::Accept(mojo::Message* message) {
  if (!message->is_serialized() ||
      mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    return true;
  }

  mojo::internal::ValidationContext validation_context(
    message->payload(), message->payload_num_bytes(),
    message->handles()->size(), message->payload_num_interface_ids(), message,
    "WindowTreeFactory RequestValidator");

  switch (message->header()->name) {
    case internal::kWindowTreeFactory_CreateWindowTree_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WindowTreeFactory_CreateWindowTree_Params_Data>(
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

}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif