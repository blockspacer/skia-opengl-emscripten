// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /instrumenting_probes_impl.cc.tmpl
// and input files:
//   platform_probes.pidl


#include "third_party/blink/renderer/platform/platform_probes_inl.h"
#include "third_party/blink/renderer/platform/platform_probe_sink.h"
#include "third_party/blink/renderer/platform/probe/platform_trace_events_agent.h"
#include "third_party/blink/renderer/platform/wtf/threading_primitives.h"

namespace blink {

namespace {

Mutex& AgentCountMutex() {
  DEFINE_THREAD_SAFE_STATIC_LOCAL(Mutex, mutex, ());
  return mutex;
}

}  // namespace

// static
std::atomic<unsigned> PlatformProbeSink::s_existingAgents;

PlatformProbeSink::PlatformProbeSink() {}

PlatformProbeSink::~PlatformProbeSink() {
  MutexLocker lock(AgentCountMutex());
  if (HasPlatformTraceEventss() && --s_numSinksWithPlatformTraceEvents == 0)
    s_existingAgents &= ~kPlatformTraceEvents;
}


// static
unsigned PlatformProbeSink::s_numSinksWithPlatformTraceEvents = 0;

void PlatformProbeSink::AddPlatformTraceEvents(PlatformTraceEventsAgent* agent) {
  bool already_had_agent = HasPlatformTraceEventss();
  platform_trace_eventss_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithPlatformTraceEvents == 1)
      s_existingAgents |= kPlatformTraceEvents;
  }

  DCHECK(HasAgentsGlobal(kPlatformTraceEvents));
}

void PlatformProbeSink::RemovePlatformTraceEvents(PlatformTraceEventsAgent* agent) {
  if (!HasPlatformTraceEventss())
    return;

  platform_trace_eventss_.erase(agent);

  if (!HasPlatformTraceEventss()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithPlatformTraceEvents == 0)
      s_existingAgents &= ~kPlatformTraceEvents;
  }

  if (HasPlatformTraceEventss())
    DCHECK(HasAgentsGlobal(kPlatformTraceEvents));
}

void PlatformProbeSink::Trace(Visitor* visitor)
{
  visitor->Trace(platform_trace_eventss_);
}

namespace probe {

PlatformSendRequest::PlatformSendRequest(FetchContext* param_fetch_context, uint64_t identifier, ResourceRequest& param_resource_request, const ResourceResponse& redirect_response, const FetchInitiatorInfo& param_fetch_initiator_info) :
    param_fetch_context(param_fetch_context),
    identifier(identifier),
    param_resource_request(param_resource_request),
    redirect_response(redirect_response),
    param_fetch_initiator_info(param_fetch_initiator_info) {
  probe_sink = ToPlatformProbeSink(param_fetch_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasPlatformTraceEventss()) {
    for (PlatformTraceEventsAgent* agent : probe_sink->PlatformTraceEventsAgents())
      agent->Will(*this);
  }
}

PlatformSendRequest::~PlatformSendRequest() {
  if (!probe_sink)
    return;
  if (probe_sink->HasPlatformTraceEventss()) {
    for (PlatformTraceEventsAgent* agent : probe_sink->PlatformTraceEventsAgents())
      agent->Did(*this);
  }
}


} // namespace probe
} // namespace blink
