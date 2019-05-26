// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_FORWARD_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace tracing {
namespace mojom {
class ChunksToMoveDataView;

class ChunkPatchDataView;

class ChunksToPatchDataView;

class CommitDataRequestDataView;

class ChromeConfigDataView;

class DataSourceConfigDataView;

class DataSourceRegistrationDataView;

class BufferConfigDataView;

class DataSourceDataView;

class PerfettoBuiltinDataSourceDataView;

class TraceConfigDataView;


enum class TracingClientPriority : int32_t;

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kPerfettoProducerNamePrefix[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kTraceEventDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kMetaDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kSystemTraceDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kArcTraceDataSourceName[];
class ChunksToMove;
using ChunksToMovePtr = mojo::InlinedStructPtr<ChunksToMove>;

class ChunkPatch;
using ChunkPatchPtr = mojo::InlinedStructPtr<ChunkPatch>;

class ChunksToPatch;
using ChunksToPatchPtr = mojo::StructPtr<ChunksToPatch>;

class CommitDataRequest;
using CommitDataRequestPtr = mojo::StructPtr<CommitDataRequest>;

class ChromeConfig;
using ChromeConfigPtr = mojo::InlinedStructPtr<ChromeConfig>;

class DataSourceConfig;
using DataSourceConfigPtr = mojo::StructPtr<DataSourceConfig>;

class DataSourceRegistration;
using DataSourceRegistrationPtr = mojo::InlinedStructPtr<DataSourceRegistration>;

class BufferConfig;
using BufferConfigPtr = mojo::InlinedStructPtr<BufferConfig>;

class DataSource;
using DataSourcePtr = mojo::StructPtr<DataSource>;

class PerfettoBuiltinDataSource;
using PerfettoBuiltinDataSourcePtr = mojo::InlinedStructPtr<PerfettoBuiltinDataSource>;

class TraceConfig;
using TraceConfigPtr = mojo::StructPtr<TraceConfig>;

class ProducerHost;
using ProducerHostPtr = mojo::InterfacePtr<ProducerHost>;
using ProducerHostPtrInfo = mojo::InterfacePtrInfo<ProducerHost>;
using ThreadSafeProducerHostPtr =
    mojo::ThreadSafeInterfacePtr<ProducerHost>;
using ProducerHostRequest = mojo::InterfaceRequest<ProducerHost>;
using ProducerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProducerHost>;
using ThreadSafeProducerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProducerHost>;
using ProducerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProducerHost>;
using ProducerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProducerHost>;

class ProducerClient;
using ProducerClientPtr = mojo::InterfacePtr<ProducerClient>;
using ProducerClientPtrInfo = mojo::InterfacePtrInfo<ProducerClient>;
using ThreadSafeProducerClientPtr =
    mojo::ThreadSafeInterfacePtr<ProducerClient>;
using ProducerClientRequest = mojo::InterfaceRequest<ProducerClient>;
using ProducerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProducerClient>;
using ThreadSafeProducerClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ProducerClient>;
using ProducerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProducerClient>;
using ProducerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProducerClient>;

class PerfettoService;
using PerfettoServicePtr = mojo::InterfacePtr<PerfettoService>;
using PerfettoServicePtrInfo = mojo::InterfacePtrInfo<PerfettoService>;
using ThreadSafePerfettoServicePtr =
    mojo::ThreadSafeInterfacePtr<PerfettoService>;
using PerfettoServiceRequest = mojo::InterfaceRequest<PerfettoService>;
using PerfettoServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PerfettoService>;
using ThreadSafePerfettoServiceAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<PerfettoService>;
using PerfettoServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PerfettoService>;
using PerfettoServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PerfettoService>;

class ConsumerHost;
using ConsumerHostPtr = mojo::InterfacePtr<ConsumerHost>;
using ConsumerHostPtrInfo = mojo::InterfacePtrInfo<ConsumerHost>;
using ThreadSafeConsumerHostPtr =
    mojo::ThreadSafeInterfacePtr<ConsumerHost>;
using ConsumerHostRequest = mojo::InterfaceRequest<ConsumerHost>;
using ConsumerHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<ConsumerHost>;
using ThreadSafeConsumerHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ConsumerHost>;
using ConsumerHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ConsumerHost>;
using ConsumerHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ConsumerHost>;

class TracingSessionHost;
using TracingSessionHostPtr = mojo::InterfacePtr<TracingSessionHost>;
using TracingSessionHostPtrInfo = mojo::InterfacePtrInfo<TracingSessionHost>;
using ThreadSafeTracingSessionHostPtr =
    mojo::ThreadSafeInterfacePtr<TracingSessionHost>;
using TracingSessionHostRequest = mojo::InterfaceRequest<TracingSessionHost>;
using TracingSessionHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<TracingSessionHost>;
using ThreadSafeTracingSessionHostAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TracingSessionHost>;
using TracingSessionHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TracingSessionHost>;
using TracingSessionHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TracingSessionHost>;

class TracingSessionClient;
using TracingSessionClientPtr = mojo::InterfacePtr<TracingSessionClient>;
using TracingSessionClientPtrInfo = mojo::InterfacePtrInfo<TracingSessionClient>;
using ThreadSafeTracingSessionClientPtr =
    mojo::ThreadSafeInterfacePtr<TracingSessionClient>;
using TracingSessionClientRequest = mojo::InterfaceRequest<TracingSessionClient>;
using TracingSessionClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<TracingSessionClient>;
using ThreadSafeTracingSessionClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<TracingSessionClient>;
using TracingSessionClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TracingSessionClient>;
using TracingSessionClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<TracingSessionClient>;




}  // namespace mojom
}  // namespace tracing
#include "third_party/perfetto/include/perfetto/tracing/core/chrome_config.h"
#include "third_party/perfetto/include/perfetto/tracing/core/commit_data_request.h"
#include "third_party/perfetto/include/perfetto/tracing/core/data_source_config.h"
#include "third_party/perfetto/include/perfetto/tracing/core/data_source_descriptor.h"
#include "third_party/perfetto/include/perfetto/tracing/core/trace_config.h"

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_FORWARD_H_