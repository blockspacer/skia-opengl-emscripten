// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /instrumenting_probes_impl.cc.tmpl
// and input files:
//   core_probes.pidl


#include "third_party/blink/renderer/core/core_probes_inl.h"
#include "third_party/blink/renderer/core/core_probe_sink.h"
#include "third_party/blink/renderer/core/frame/ad_tracker.h"
#include "third_party/blink/renderer/core/inspector/inspector_log_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_css_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_emulation_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_dom_debugger_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_trace_events.h"
#include "third_party/blink/renderer/core/inspector/inspector_dom_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_application_cache_agent.h"
#include "third_party/blink/renderer/core/inspector/devtools_session.h"
#include "third_party/blink/renderer/core/inspector/inspector_network_agent.h"
#include "third_party/blink/renderer/core/frame/performance_monitor.h"
#include "third_party/blink/renderer/core/inspector/inspector_performance_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_animation_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_page_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_dom_snapshot_agent.h"
#include "third_party/blink/renderer/core/inspector/inspector_layer_tree_agent.h"
#include "third_party/blink/renderer/platform/wtf/threading_primitives.h"

namespace blink {

namespace {

Mutex& AgentCountMutex() {
  DEFINE_THREAD_SAFE_STATIC_LOCAL(Mutex, mutex, ());
  return mutex;
}

}  // namespace

// static
std::atomic<unsigned> CoreProbeSink::s_existingAgents;

CoreProbeSink::CoreProbeSink() {}

CoreProbeSink::~CoreProbeSink() {
  MutexLocker lock(AgentCountMutex());
  if (HasAdTrackers() && --s_numSinksWithAdTracker == 0)
    s_existingAgents &= ~kAdTracker;
  if (HasInspectorLogAgents() && --s_numSinksWithInspectorLogAgent == 0)
    s_existingAgents &= ~kInspectorLogAgent;
  if (HasInspectorCSSAgents() && --s_numSinksWithInspectorCSSAgent == 0)
    s_existingAgents &= ~kInspectorCSSAgent;
  if (HasInspectorEmulationAgents() && --s_numSinksWithInspectorEmulationAgent == 0)
    s_existingAgents &= ~kInspectorEmulationAgent;
  if (HasInspectorDOMDebuggerAgents() && --s_numSinksWithInspectorDOMDebuggerAgent == 0)
    s_existingAgents &= ~kInspectorDOMDebuggerAgent;
  if (HasInspectorTraceEventss() && --s_numSinksWithInspectorTraceEvents == 0)
    s_existingAgents &= ~kInspectorTraceEvents;
  if (HasInspectorDOMAgents() && --s_numSinksWithInspectorDOMAgent == 0)
    s_existingAgents &= ~kInspectorDOMAgent;
  if (HasInspectorApplicationCacheAgents() && --s_numSinksWithInspectorApplicationCacheAgent == 0)
    s_existingAgents &= ~kInspectorApplicationCacheAgent;
  if (HasDevToolsSessions() && --s_numSinksWithDevToolsSession == 0)
    s_existingAgents &= ~kDevToolsSession;
  if (HasInspectorNetworkAgents() && --s_numSinksWithInspectorNetworkAgent == 0)
    s_existingAgents &= ~kInspectorNetworkAgent;
  if (HasPerformanceMonitors() && --s_numSinksWithPerformanceMonitor == 0)
    s_existingAgents &= ~kPerformanceMonitor;
  if (HasInspectorPerformanceAgents() && --s_numSinksWithInspectorPerformanceAgent == 0)
    s_existingAgents &= ~kInspectorPerformanceAgent;
  if (HasInspectorAnimationAgents() && --s_numSinksWithInspectorAnimationAgent == 0)
    s_existingAgents &= ~kInspectorAnimationAgent;
  if (HasInspectorPageAgents() && --s_numSinksWithInspectorPageAgent == 0)
    s_existingAgents &= ~kInspectorPageAgent;
  if (HasInspectorDOMSnapshotAgents() && --s_numSinksWithInspectorDOMSnapshotAgent == 0)
    s_existingAgents &= ~kInspectorDOMSnapshotAgent;
  if (HasInspectorLayerTreeAgents() && --s_numSinksWithInspectorLayerTreeAgent == 0)
    s_existingAgents &= ~kInspectorLayerTreeAgent;
}


// static
unsigned CoreProbeSink::s_numSinksWithAdTracker = 0;

void CoreProbeSink::AddAdTracker(AdTracker* agent) {
  bool already_had_agent = HasAdTrackers();
  ad_trackers_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithAdTracker == 1)
      s_existingAgents |= kAdTracker;
  }

  DCHECK(HasAgentsGlobal(kAdTracker));
}

void CoreProbeSink::RemoveAdTracker(AdTracker* agent) {
  if (!HasAdTrackers())
    return;

  ad_trackers_.erase(agent);

  if (!HasAdTrackers()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithAdTracker == 0)
      s_existingAgents &= ~kAdTracker;
  }

  if (HasAdTrackers())
    DCHECK(HasAgentsGlobal(kAdTracker));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorLogAgent = 0;

void CoreProbeSink::AddInspectorLogAgent(InspectorLogAgent* agent) {
  bool already_had_agent = HasInspectorLogAgents();
  inspector_log_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorLogAgent == 1)
      s_existingAgents |= kInspectorLogAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorLogAgent));
}

void CoreProbeSink::RemoveInspectorLogAgent(InspectorLogAgent* agent) {
  if (!HasInspectorLogAgents())
    return;

  inspector_log_agents_.erase(agent);

  if (!HasInspectorLogAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorLogAgent == 0)
      s_existingAgents &= ~kInspectorLogAgent;
  }

  if (HasInspectorLogAgents())
    DCHECK(HasAgentsGlobal(kInspectorLogAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorCSSAgent = 0;

void CoreProbeSink::AddInspectorCSSAgent(InspectorCSSAgent* agent) {
  bool already_had_agent = HasInspectorCSSAgents();
  inspector_css_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorCSSAgent == 1)
      s_existingAgents |= kInspectorCSSAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorCSSAgent));
}

void CoreProbeSink::RemoveInspectorCSSAgent(InspectorCSSAgent* agent) {
  if (!HasInspectorCSSAgents())
    return;

  inspector_css_agents_.erase(agent);

  if (!HasInspectorCSSAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorCSSAgent == 0)
      s_existingAgents &= ~kInspectorCSSAgent;
  }

  if (HasInspectorCSSAgents())
    DCHECK(HasAgentsGlobal(kInspectorCSSAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorEmulationAgent = 0;

void CoreProbeSink::AddInspectorEmulationAgent(InspectorEmulationAgent* agent) {
  bool already_had_agent = HasInspectorEmulationAgents();
  inspector_emulation_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorEmulationAgent == 1)
      s_existingAgents |= kInspectorEmulationAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorEmulationAgent));
}

void CoreProbeSink::RemoveInspectorEmulationAgent(InspectorEmulationAgent* agent) {
  if (!HasInspectorEmulationAgents())
    return;

  inspector_emulation_agents_.erase(agent);

  if (!HasInspectorEmulationAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorEmulationAgent == 0)
      s_existingAgents &= ~kInspectorEmulationAgent;
  }

  if (HasInspectorEmulationAgents())
    DCHECK(HasAgentsGlobal(kInspectorEmulationAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorDOMDebuggerAgent = 0;

void CoreProbeSink::AddInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent) {
  bool already_had_agent = HasInspectorDOMDebuggerAgents();
  inspector_dom_debugger_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorDOMDebuggerAgent == 1)
      s_existingAgents |= kInspectorDOMDebuggerAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorDOMDebuggerAgent));
}

void CoreProbeSink::RemoveInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent) {
  if (!HasInspectorDOMDebuggerAgents())
    return;

  inspector_dom_debugger_agents_.erase(agent);

  if (!HasInspectorDOMDebuggerAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorDOMDebuggerAgent == 0)
      s_existingAgents &= ~kInspectorDOMDebuggerAgent;
  }

  if (HasInspectorDOMDebuggerAgents())
    DCHECK(HasAgentsGlobal(kInspectorDOMDebuggerAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorTraceEvents = 0;

void CoreProbeSink::AddInspectorTraceEvents(InspectorTraceEvents* agent) {
  bool already_had_agent = HasInspectorTraceEventss();
  inspector_trace_eventss_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorTraceEvents == 1)
      s_existingAgents |= kInspectorTraceEvents;
  }

  DCHECK(HasAgentsGlobal(kInspectorTraceEvents));
}

void CoreProbeSink::RemoveInspectorTraceEvents(InspectorTraceEvents* agent) {
  if (!HasInspectorTraceEventss())
    return;

  inspector_trace_eventss_.erase(agent);

  if (!HasInspectorTraceEventss()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorTraceEvents == 0)
      s_existingAgents &= ~kInspectorTraceEvents;
  }

  if (HasInspectorTraceEventss())
    DCHECK(HasAgentsGlobal(kInspectorTraceEvents));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorDOMAgent = 0;

void CoreProbeSink::AddInspectorDOMAgent(InspectorDOMAgent* agent) {
  bool already_had_agent = HasInspectorDOMAgents();
  inspector_dom_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorDOMAgent == 1)
      s_existingAgents |= kInspectorDOMAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorDOMAgent));
}

void CoreProbeSink::RemoveInspectorDOMAgent(InspectorDOMAgent* agent) {
  if (!HasInspectorDOMAgents())
    return;

  inspector_dom_agents_.erase(agent);

  if (!HasInspectorDOMAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorDOMAgent == 0)
      s_existingAgents &= ~kInspectorDOMAgent;
  }

  if (HasInspectorDOMAgents())
    DCHECK(HasAgentsGlobal(kInspectorDOMAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorApplicationCacheAgent = 0;

void CoreProbeSink::AddInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent) {
  bool already_had_agent = HasInspectorApplicationCacheAgents();
  inspector_application_cache_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorApplicationCacheAgent == 1)
      s_existingAgents |= kInspectorApplicationCacheAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorApplicationCacheAgent));
}

void CoreProbeSink::RemoveInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent) {
  if (!HasInspectorApplicationCacheAgents())
    return;

  inspector_application_cache_agents_.erase(agent);

  if (!HasInspectorApplicationCacheAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorApplicationCacheAgent == 0)
      s_existingAgents &= ~kInspectorApplicationCacheAgent;
  }

  if (HasInspectorApplicationCacheAgents())
    DCHECK(HasAgentsGlobal(kInspectorApplicationCacheAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithDevToolsSession = 0;

void CoreProbeSink::AddDevToolsSession(DevToolsSession* agent) {
  bool already_had_agent = HasDevToolsSessions();
  dev_tools_sessions_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithDevToolsSession == 1)
      s_existingAgents |= kDevToolsSession;
  }

  DCHECK(HasAgentsGlobal(kDevToolsSession));
}

void CoreProbeSink::RemoveDevToolsSession(DevToolsSession* agent) {
  if (!HasDevToolsSessions())
    return;

  dev_tools_sessions_.erase(agent);

  if (!HasDevToolsSessions()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithDevToolsSession == 0)
      s_existingAgents &= ~kDevToolsSession;
  }

  if (HasDevToolsSessions())
    DCHECK(HasAgentsGlobal(kDevToolsSession));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorNetworkAgent = 0;

void CoreProbeSink::AddInspectorNetworkAgent(InspectorNetworkAgent* agent) {
  bool already_had_agent = HasInspectorNetworkAgents();
  inspector_network_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorNetworkAgent == 1)
      s_existingAgents |= kInspectorNetworkAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorNetworkAgent));
}

void CoreProbeSink::RemoveInspectorNetworkAgent(InspectorNetworkAgent* agent) {
  if (!HasInspectorNetworkAgents())
    return;

  inspector_network_agents_.erase(agent);

  if (!HasInspectorNetworkAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorNetworkAgent == 0)
      s_existingAgents &= ~kInspectorNetworkAgent;
  }

  if (HasInspectorNetworkAgents())
    DCHECK(HasAgentsGlobal(kInspectorNetworkAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithPerformanceMonitor = 0;

void CoreProbeSink::AddPerformanceMonitor(PerformanceMonitor* agent) {
  bool already_had_agent = HasPerformanceMonitors();
  performance_monitors_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithPerformanceMonitor == 1)
      s_existingAgents |= kPerformanceMonitor;
  }

  DCHECK(HasAgentsGlobal(kPerformanceMonitor));
}

void CoreProbeSink::RemovePerformanceMonitor(PerformanceMonitor* agent) {
  if (!HasPerformanceMonitors())
    return;

  performance_monitors_.erase(agent);

  if (!HasPerformanceMonitors()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithPerformanceMonitor == 0)
      s_existingAgents &= ~kPerformanceMonitor;
  }

  if (HasPerformanceMonitors())
    DCHECK(HasAgentsGlobal(kPerformanceMonitor));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorPerformanceAgent = 0;

void CoreProbeSink::AddInspectorPerformanceAgent(InspectorPerformanceAgent* agent) {
  bool already_had_agent = HasInspectorPerformanceAgents();
  inspector_performance_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorPerformanceAgent == 1)
      s_existingAgents |= kInspectorPerformanceAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorPerformanceAgent));
}

void CoreProbeSink::RemoveInspectorPerformanceAgent(InspectorPerformanceAgent* agent) {
  if (!HasInspectorPerformanceAgents())
    return;

  inspector_performance_agents_.erase(agent);

  if (!HasInspectorPerformanceAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorPerformanceAgent == 0)
      s_existingAgents &= ~kInspectorPerformanceAgent;
  }

  if (HasInspectorPerformanceAgents())
    DCHECK(HasAgentsGlobal(kInspectorPerformanceAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorAnimationAgent = 0;

void CoreProbeSink::AddInspectorAnimationAgent(InspectorAnimationAgent* agent) {
  bool already_had_agent = HasInspectorAnimationAgents();
  inspector_animation_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorAnimationAgent == 1)
      s_existingAgents |= kInspectorAnimationAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorAnimationAgent));
}

void CoreProbeSink::RemoveInspectorAnimationAgent(InspectorAnimationAgent* agent) {
  if (!HasInspectorAnimationAgents())
    return;

  inspector_animation_agents_.erase(agent);

  if (!HasInspectorAnimationAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorAnimationAgent == 0)
      s_existingAgents &= ~kInspectorAnimationAgent;
  }

  if (HasInspectorAnimationAgents())
    DCHECK(HasAgentsGlobal(kInspectorAnimationAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorPageAgent = 0;

void CoreProbeSink::AddInspectorPageAgent(InspectorPageAgent* agent) {
  bool already_had_agent = HasInspectorPageAgents();
  inspector_page_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorPageAgent == 1)
      s_existingAgents |= kInspectorPageAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorPageAgent));
}

void CoreProbeSink::RemoveInspectorPageAgent(InspectorPageAgent* agent) {
  if (!HasInspectorPageAgents())
    return;

  inspector_page_agents_.erase(agent);

  if (!HasInspectorPageAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorPageAgent == 0)
      s_existingAgents &= ~kInspectorPageAgent;
  }

  if (HasInspectorPageAgents())
    DCHECK(HasAgentsGlobal(kInspectorPageAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorDOMSnapshotAgent = 0;

void CoreProbeSink::AddInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent) {
  bool already_had_agent = HasInspectorDOMSnapshotAgents();
  inspector_dom_snapshot_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorDOMSnapshotAgent == 1)
      s_existingAgents |= kInspectorDOMSnapshotAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorDOMSnapshotAgent));
}

void CoreProbeSink::RemoveInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent) {
  if (!HasInspectorDOMSnapshotAgents())
    return;

  inspector_dom_snapshot_agents_.erase(agent);

  if (!HasInspectorDOMSnapshotAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorDOMSnapshotAgent == 0)
      s_existingAgents &= ~kInspectorDOMSnapshotAgent;
  }

  if (HasInspectorDOMSnapshotAgents())
    DCHECK(HasAgentsGlobal(kInspectorDOMSnapshotAgent));
}


// static
unsigned CoreProbeSink::s_numSinksWithInspectorLayerTreeAgent = 0;

void CoreProbeSink::AddInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent) {
  bool already_had_agent = HasInspectorLayerTreeAgents();
  inspector_layer_tree_agents_.insert(agent);

  if (!already_had_agent) {
    MutexLocker lock(AgentCountMutex());
    if (++s_numSinksWithInspectorLayerTreeAgent == 1)
      s_existingAgents |= kInspectorLayerTreeAgent;
  }

  DCHECK(HasAgentsGlobal(kInspectorLayerTreeAgent));
}

void CoreProbeSink::RemoveInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent) {
  if (!HasInspectorLayerTreeAgents())
    return;

  inspector_layer_tree_agents_.erase(agent);

  if (!HasInspectorLayerTreeAgents()) {
    MutexLocker lock(AgentCountMutex());
    if (--s_numSinksWithInspectorLayerTreeAgent == 0)
      s_existingAgents &= ~kInspectorLayerTreeAgent;
  }

  if (HasInspectorLayerTreeAgents())
    DCHECK(HasAgentsGlobal(kInspectorLayerTreeAgent));
}

void CoreProbeSink::Trace(Visitor* visitor)
{
  visitor->Trace(ad_trackers_);
  visitor->Trace(inspector_log_agents_);
  visitor->Trace(inspector_css_agents_);
  visitor->Trace(inspector_emulation_agents_);
  visitor->Trace(inspector_dom_debugger_agents_);
  visitor->Trace(inspector_trace_eventss_);
  visitor->Trace(inspector_dom_agents_);
  visitor->Trace(inspector_application_cache_agents_);
  visitor->Trace(dev_tools_sessions_);
  visitor->Trace(inspector_network_agents_);
  visitor->Trace(performance_monitors_);
  visitor->Trace(inspector_performance_agents_);
  visitor->Trace(inspector_animation_agents_);
  visitor->Trace(inspector_page_agents_);
  visitor->Trace(inspector_dom_snapshot_agents_);
  visitor->Trace(inspector_layer_tree_agents_);
}

namespace probe {

void DidClearDocumentOfWindowObjectImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorAnimationAgents()) {
    for (InspectorAnimationAgent* agent : probe_sink->InspectorAnimationAgents())
      agent->DidClearDocumentOfWindowObject(param_local_frame);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->DidClearDocumentOfWindowObject(param_local_frame);
  }
}

void WillInsertDOMNodeImpl(Node* parent) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(parent);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->WillInsertDOMNode(parent);
  }
}

void DidInsertDOMNodeImpl(Node* param_node) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_node);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidInsertDOMNode(param_node);
  }
  if (probe_sink->HasInspectorDOMSnapshotAgents()) {
    for (InspectorDOMSnapshotAgent* agent : probe_sink->InspectorDOMSnapshotAgents())
      agent->DidInsertDOMNode(param_node);
  }
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidInsertDOMNode(param_node);
  }
}

void WillRemoveDOMNodeImpl(Node* param_node) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_node);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->WillRemoveDOMNode(param_node);
  }
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->WillRemoveDOMNode(param_node);
  }
}

void WillModifyDOMAttrImpl(Element* param_element, const AtomicString& old_value, const AtomicString& new_value) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->WillModifyDOMAttr(param_element, old_value, new_value);
  }
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->WillModifyDOMAttr(param_element, old_value, new_value);
  }
}

void DidModifyDOMAttrImpl(Element* param_element, const QualifiedName& name, const AtomicString& value) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidModifyDOMAttr(param_element, name, value);
  }
}

void DidRemoveDOMAttrImpl(Element* param_element, const QualifiedName& name) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidRemoveDOMAttr(param_element, name);
  }
}

void WillChangeStyleElementImpl(Element* param_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->InspectorCSSAgents())
      agent->WillChangeStyleElement(param_element);
  }
}

void CharacterDataModifiedImpl(CharacterData* param_character_data) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_character_data);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMSnapshotAgents()) {
    for (InspectorDOMSnapshotAgent* agent : probe_sink->InspectorDOMSnapshotAgents())
      agent->CharacterDataModified(param_character_data);
  }
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->CharacterDataModified(param_character_data);
  }
}

void DidInvalidateStyleAttrImpl(Node* param_node) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_node);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidInvalidateStyleAttr(param_node);
  }
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidInvalidateStyleAttr(param_node);
  }
}

void DidPerformElementShadowDistributionImpl(Element* param_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidPerformElementShadowDistribution(param_element);
  }
}

void DidPerformSlotDistributionImpl(HTMLSlotElement* param_html_slot_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_html_slot_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidPerformSlotDistribution(param_html_slot_element);
  }
}

void DocumentDetachedImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->InspectorCSSAgents())
      agent->DocumentDetached(param_document);
  }
}

void ActiveStyleSheetsUpdatedImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->InspectorCSSAgents())
      agent->ActiveStyleSheetsUpdated(param_document);
  }
}

void FontsUpdatedImpl(ExecutionContext* param_execution_context, const FontFace* face, const String& src, const FontCustomPlatformData* font_custom_platform_data) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->InspectorCSSAgents())
      agent->FontsUpdated(face, src, font_custom_platform_data);
  }
}

void MediaQueryResultChangedImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->InspectorCSSAgents())
      agent->MediaQueryResultChanged();
  }
}

void DidPushShadowRootImpl(Element* host, ShadowRoot* param_shadow_root) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(host);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidPushShadowRoot(host, param_shadow_root);
  }
}

void WillPopShadowRootImpl(Element* host, ShadowRoot* param_shadow_root) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(host);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->WillPopShadowRoot(host, param_shadow_root);
  }
}

void WillSendXMLHttpOrFetchNetworkRequestImpl(ExecutionContext* param_execution_context, const String& url) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->WillSendXMLHttpOrFetchNetworkRequest(url);
  }
}

void DidCreateCanvasContextImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidCreateCanvasContext();
  }
}

void DidFireWebGLErrorImpl(Element* param_element, const String& error_name) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidFireWebGLError(error_name);
  }
}

void DidFireWebGLWarningImpl(Element* param_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidFireWebGLWarning();
  }
}

void DidFireWebGLErrorOrWarningImpl(Element* param_element, const String& message) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidFireWebGLErrorOrWarning(message);
  }
}

void DidResizeMainFrameImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->DidResizeMainFrame();
  }
}

void DidPaintImpl(LocalFrame* param_local_frame, const cc::Layer* param_cc, const LayoutRect& param_layout_rect) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorLayerTreeAgents()) {
    for (InspectorLayerTreeAgent* agent : probe_sink->InspectorLayerTreeAgents())
      agent->DidPaint(param_cc, param_layout_rect);
  }
}

void ApplyAcceptLanguageOverrideImpl(ExecutionContext* param_execution_context, String* accept_language) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorEmulationAgents()) {
    for (InspectorEmulationAgent* agent : probe_sink->InspectorEmulationAgents())
      agent->ApplyAcceptLanguageOverride(accept_language);
  }
}

void ApplyUserAgentOverrideImpl(CoreProbeSink* param_core_probe_sink, String* user_agent) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorEmulationAgents()) {
    for (InspectorEmulationAgent* agent : probe_sink->InspectorEmulationAgents())
      agent->ApplyUserAgentOverride(user_agent);
  }
}

void DidBlockRequestImpl(CoreProbeSink* param_core_probe_sink, const ResourceRequest& param_resource_request, DocumentLoader* param_document_loader, const KURL& fetch_context_url, const FetchInitiatorInfo& param_fetch_initiator_info, ResourceRequestBlockedReason param_resource_request_blocked_reason, ResourceType param_resource_type) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidBlockRequest(param_resource_request, param_document_loader, fetch_context_url, param_fetch_initiator_info, param_resource_request_blocked_reason, param_resource_type);
  }
}

void DidChangeResourcePriorityImpl(LocalFrame* param_local_frame, DocumentLoader* param_document_loader, uint64_t identifier, ResourceLoadPriority load_priority) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidChangeResourcePriority(param_document_loader, identifier, load_priority);
  }
}

void PrepareRequestImpl(CoreProbeSink* param_core_probe_sink, DocumentLoader* param_document_loader, ResourceRequest& param_resource_request, const FetchInitiatorInfo& param_fetch_initiator_info, ResourceType param_resource_type) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->PrepareRequest(param_document_loader, param_resource_request, param_fetch_initiator_info, param_resource_type);
  }
  if (probe_sink->HasInspectorEmulationAgents()) {
    for (InspectorEmulationAgent* agent : probe_sink->InspectorEmulationAgents())
      agent->PrepareRequest(param_document_loader, param_resource_request, param_fetch_initiator_info, param_resource_type);
  }
}

void WillSendRequestImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const KURL& fetch_context_url, const ResourceRequest& param_resource_request, const ResourceResponse& redirect_response, const FetchInitiatorInfo& param_fetch_initiator_info, ResourceType param_resource_type) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->WillSendRequest(identifier, param_document_loader, fetch_context_url, param_resource_request, redirect_response, param_fetch_initiator_info, param_resource_type);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->WillSendRequest(identifier, param_document_loader, fetch_context_url, param_resource_request, redirect_response, param_fetch_initiator_info, param_resource_type);
  }
}

void WillSendNavigationRequestImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const KURL& param_kurl, const AtomicString& http_method, EncodedFormData* param_encoded_form_data) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->WillSendNavigationRequest(identifier, param_document_loader, param_kurl, http_method, param_encoded_form_data);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->WillSendNavigationRequest(identifier, param_document_loader, param_kurl, http_method, param_encoded_form_data);
  }
}

void MarkResourceAsCachedImpl(LocalFrame* param_local_frame, DocumentLoader* param_document_loader, uint64_t identifier) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->MarkResourceAsCached(param_document_loader, identifier);
  }
}

void DidReceiveResourceResponseImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const ResourceResponse& param_resource_response, const Resource* param_resource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->DidReceiveResourceResponse(identifier, param_document_loader, param_resource_response, param_resource);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveResourceResponse(identifier, param_document_loader, param_resource_response, param_resource);
  }
}

void DidReceiveDataImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const char* data, uint64_t data_length) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->DidReceiveData(identifier, param_document_loader, data, data_length);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveData(identifier, param_document_loader, data, data_length);
  }
}

void DidReceiveBlobImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, BlobDataHandle* param_blob_data_handle) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveBlob(identifier, param_document_loader, param_blob_data_handle);
  }
}

void DidReceiveEncodedDataLengthImpl(CoreProbeSink* param_core_probe_sink, DocumentLoader* loader, uint64_t identifier, size_t encoded_data_length) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveEncodedDataLength(loader, identifier, encoded_data_length);
  }
}

void DidFinishLoadingImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, TimeTicks finish_time, int64_t encoded_data_length, int64_t decoded_body_length, bool should_report_corb_blocking) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->DidFinishLoading(identifier, param_document_loader, finish_time, encoded_data_length, decoded_body_length, should_report_corb_blocking);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidFinishLoading(identifier, param_document_loader, finish_time, encoded_data_length, decoded_body_length, should_report_corb_blocking);
  }
}

void DidReceiveCorsRedirectResponseImpl(ExecutionContext* param_execution_context, uint64_t identifier, DocumentLoader* param_document_loader, const ResourceResponse& param_resource_response, Resource* param_resource) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveCorsRedirectResponse(identifier, param_document_loader, param_resource_response, param_resource);
  }
}

void DidFailLoadingImpl(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const ResourceError& param_resource_error) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->DidFailLoading(identifier, param_document_loader, param_resource_error);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidFailLoading(identifier, param_document_loader, param_resource_error);
  }
}

void WillSendEventSourceRequestImpl(ExecutionContext* param_execution_context) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->WillSendEventSourceRequest();
  }
}

void WillDispatchEventSourceEventImpl(ExecutionContext* param_execution_context, uint64_t identifier, const AtomicString& event_name, const AtomicString& event_id, const String& data) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->WillDispatchEventSourceEvent(identifier, event_name, event_id, data);
  }
}

void WillLoadXHRImpl(ExecutionContext* param_execution_context, const AtomicString& method, const KURL& url, bool async, EncodedFormData* form_data, const HTTPHeaderMap& headers, bool include_credentials) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->WillLoadXHR(param_execution_context, method, url, async, form_data, headers, include_credentials);
  }
}

void DidFinishXHRImpl(ExecutionContext* param_execution_context, XMLHttpRequest* xhr) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidFinishXHR(xhr);
  }
}

void ScriptImportedImpl(ExecutionContext* param_execution_context, uint64_t identifier, const String& source_string) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->ScriptImported(identifier, source_string);
  }
}

void ScriptExecutionBlockedByCSPImpl(ExecutionContext* param_execution_context, const String& directive_text) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->ScriptExecutionBlockedByCSP(directive_text);
  }
}

void DidReceiveScriptResponseImpl(ExecutionContext* param_execution_context, uint64_t identifier) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveScriptResponse(identifier);
  }
}

void DomContentLoadedEventFiredImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DomContentLoadedEventFired(param_local_frame);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->DomContentLoadedEventFired(param_local_frame);
  }
}

void LoadEventFiredImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->LoadEventFired(param_local_frame);
  }
}

void FrameAttachedToParentImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameAttachedToParent(param_local_frame);
  }
}

void FrameDetachedFromParentImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameDetachedFromParent(param_local_frame);
  }
}

void DidStartProvisionalLoadImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasDevToolsSessions()) {
    for (DevToolsSession* agent : probe_sink->DevToolsSessions())
      agent->DidStartProvisionalLoad(param_local_frame);
  }
}

void DidFailProvisionalLoadImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasDevToolsSessions()) {
    for (DevToolsSession* agent : probe_sink->DevToolsSessions())
      agent->DidFailProvisionalLoad(param_local_frame);
  }
}

void WillCommitLoadImpl(LocalFrame* param_local_frame, DocumentLoader* param_document_loader) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->WillCommitLoad(param_local_frame, param_document_loader);
  }
}

void DidCommitLoadImpl(LocalFrame* param_local_frame, DocumentLoader* param_document_loader) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasDevToolsSessions()) {
    for (DevToolsSession* agent : probe_sink->DevToolsSessions())
      agent->DidCommitLoad(param_local_frame, param_document_loader);
  }
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidCommitLoad(param_local_frame, param_document_loader);
  }
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->DidCommitLoad(param_local_frame, param_document_loader);
  }
}

void DidNavigateWithinDocumentImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->DidNavigateWithinDocument(param_local_frame);
  }
}

void FrameDocumentUpdatedImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->FrameDocumentUpdated(param_local_frame);
  }
}

void FrameOwnerContentUpdatedImpl(LocalFrame* param_local_frame, HTMLFrameOwnerElement* param_html_frame_owner_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->FrameOwnerContentUpdated(param_local_frame, param_html_frame_owner_element);
  }
}

void FrameStartedLoadingImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->FrameStartedLoading(param_local_frame);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameStartedLoading(param_local_frame);
  }
  if (probe_sink->HasInspectorEmulationAgents()) {
    for (InspectorEmulationAgent* agent : probe_sink->InspectorEmulationAgents())
      agent->FrameStartedLoading(param_local_frame);
  }
}

void FrameStoppedLoadingImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameStoppedLoading(param_local_frame);
  }
}

void FrameRequestedNavigationImpl(LocalFrame* param_local_frame, Frame* target_frame, const KURL& url, ClientNavigationReason reason) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameRequestedNavigation(target_frame, url, reason);
  }
}

void FrameScheduledNavigationImpl(LocalFrame* param_local_frame, const KURL& url, double delay, ClientNavigationReason reason) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->FrameScheduledNavigation(param_local_frame, url, delay, reason);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameScheduledNavigation(param_local_frame, url, delay, reason);
  }
}

void FrameClearedScheduledNavigationImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->FrameClearedScheduledNavigation(param_local_frame);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->FrameClearedScheduledNavigation(param_local_frame);
  }
}

void DidCreateWebSocketImpl(ExecutionContext* param_execution_context, uint64_t identifier, const KURL& request_url, const String& protocol) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidCreateWebSocket(param_execution_context, identifier, request_url, protocol);
  }
}

void WillSendWebSocketHandshakeRequestImpl(ExecutionContext* param_execution_context, uint64_t identifier, network::mojom::blink::WebSocketHandshakeRequest* request) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->WillSendWebSocketHandshakeRequest(param_execution_context, identifier, request);
  }
}

void DidReceiveWebSocketHandshakeResponseImpl(ExecutionContext* param_execution_context, uint64_t identifier, network::mojom::blink::WebSocketHandshakeRequest* request, network::mojom::blink::WebSocketHandshakeResponse* response) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveWebSocketHandshakeResponse(param_execution_context, identifier, request, response);
  }
}

void DidCloseWebSocketImpl(ExecutionContext* param_execution_context, uint64_t identifier) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidCloseWebSocket(param_execution_context, identifier);
  }
}

void DidReceiveWebSocketMessageImpl(ExecutionContext* param_execution_context, uint64_t identifier, int opcode, bool masked, const char* payload, size_t payload_length) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveWebSocketMessage(identifier, opcode, masked, payload, payload_length);
  }
}

void DidSendWebSocketMessageImpl(ExecutionContext* param_execution_context, uint64_t identifier, int opcode, bool masked, const char* payload, size_t payload_length) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidSendWebSocketMessage(identifier, opcode, masked, payload, payload_length);
  }
}

void DidReceiveWebSocketMessageErrorImpl(ExecutionContext* param_execution_context, uint64_t identifier, const String& error_message) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->DidReceiveWebSocketMessageError(identifier, error_message);
  }
}

void NetworkStateChangedImpl(LocalFrame* param_local_frame, bool online) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorApplicationCacheAgents()) {
    for (InspectorApplicationCacheAgent* agent : probe_sink->InspectorApplicationCacheAgents())
      agent->NetworkStateChanged(param_local_frame, online);
  }
}

void UpdateApplicationCacheStatusImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorApplicationCacheAgents()) {
    for (InspectorApplicationCacheAgent* agent : probe_sink->InspectorApplicationCacheAgents())
      agent->UpdateApplicationCacheStatus(param_local_frame);
  }
}

void LayerTreeDidChangeImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorLayerTreeAgents()) {
    for (InspectorLayerTreeAgent* agent : probe_sink->InspectorLayerTreeAgents())
      agent->LayerTreeDidChange();
  }
}

void LayerTreePaintedImpl(LocalFrame* param_local_frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorLayerTreeAgents()) {
    for (InspectorLayerTreeAgent* agent : probe_sink->InspectorLayerTreeAgents())
      agent->LayerTreePainted();
  }
}

void PseudoElementCreatedImpl(PseudoElement* param_pseudo_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_pseudo_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->PseudoElementCreated(param_pseudo_element);
  }
}

void PseudoElementDestroyedImpl(PseudoElement* param_pseudo_element) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_pseudo_element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMAgents()) {
    for (InspectorDOMAgent* agent : probe_sink->InspectorDOMAgents())
      agent->PseudoElementDestroyed(param_pseudo_element);
  }
}

void DidCreateAnimationImpl(Document* param_document, unsigned param_unsigned) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorAnimationAgents()) {
    for (InspectorAnimationAgent* agent : probe_sink->InspectorAnimationAgents())
      agent->DidCreateAnimation(param_unsigned);
  }
}

void AnimationPlayStateChangedImpl(Document* param_document, Animation* param_animation, Animation::AnimationPlayState old_play_state, Animation::AnimationPlayState new_play_state) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorAnimationAgents()) {
    for (InspectorAnimationAgent* agent : probe_sink->InspectorAnimationAgents())
      agent->AnimationPlayStateChanged(param_animation, old_play_state, new_play_state);
  }
}

void WindowOpenImpl(Document* param_document, const String& url, const AtomicString& window_name, const WebWindowFeatures& window_features, bool user_gestrue) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->WindowOpen(param_document, url, window_name, window_features, user_gestrue);
  }
}

void ConsoleMessageAddedImpl(ExecutionContext* param_execution_context, ConsoleMessage* param_console_message) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorLogAgents()) {
    for (InspectorLogAgent* agent : probe_sink->InspectorLogAgents())
      agent->ConsoleMessageAdded(param_console_message);
  }
}

void WillRunJavaScriptDialogImpl(LocalFrame* frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->WillRunJavaScriptDialog();
  }
}

void DidRunJavaScriptDialogImpl(LocalFrame* frame) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->DidRunJavaScriptDialog();
  }
}

void DocumentWriteFetchScriptImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->DocumentWriteFetchScript(param_document);
  }
}

void DidChangeViewportImpl(LocalFrame* document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->DidChangeViewport();
  }
}

void BreakableLocationImpl(ExecutionContext* context, const char* name) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->BreakableLocation(name);
  }
}

RecalculateStyle::RecalculateStyle(Document* document) :
    document(document) {
  probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Will(*this);
  }
}

RecalculateStyle::~RecalculateStyle() {
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Did(*this);
  }
}

UpdateLayout::UpdateLayout(Document* document) :
    document(document) {
  probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Will(*this);
  }
}

UpdateLayout::~UpdateLayout() {
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Did(*this);
  }
}

ExecuteScript::ExecuteScript(ExecutionContext* context, const String& script_url) :
    context(context),
    script_url(script_url) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->HasAdTrackers()) {
    for (AdTracker* agent : probe_sink->AdTrackers())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->Will(*this);
  }
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Will(*this);
  }
}

ExecuteScript::~ExecuteScript() {
  if (!probe_sink)
    return;
  if (probe_sink->HasAdTrackers()) {
    for (AdTracker* agent : probe_sink->AdTrackers())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->Did(*this);
  }
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Did(*this);
  }
}

CallFunction::CallFunction(ExecutionContext* context, v8::Local<v8::Function> function, int depth) :
    context(context),
    function(function),
    depth(depth) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->HasAdTrackers()) {
    for (AdTracker* agent : probe_sink->AdTrackers())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->Will(*this);
  }
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Will(*this);
  }
}

CallFunction::~CallFunction() {
  if (!probe_sink)
    return;
  if (probe_sink->HasAdTrackers()) {
    for (AdTracker* agent : probe_sink->AdTrackers())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->Did(*this);
  }
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Did(*this);
  }
}

UserCallback::UserCallback(ExecutionContext* context, const char* name, const AtomicString& atomic_name, bool recurring, EventTarget* event_target) :
    context(context),
    name(name),
    atomic_name(atomic_name),
    recurring(recurring),
    event_target(event_target) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->Will(*this);
  }
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Will(*this);
  }
}

UserCallback::~UserCallback() {
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->Did(*this);
  }
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Did(*this);
  }
}

V8Compile::V8Compile(ExecutionContext* context, const String& file_name, int line, int column) :
    context(context),
    file_name(file_name),
    line(line),
    column(column) {
  probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Will(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Will(*this);
  }
}

V8Compile::~V8Compile() {
  if (!probe_sink)
    return;
  if (probe_sink->HasPerformanceMonitors()) {
    for (PerformanceMonitor* agent : probe_sink->PerformanceMonitors())
      agent->Did(*this);
  }
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->Did(*this);
  }
}

ParseHTML::ParseHTML(Document* document, HTMLDocumentParser* parser) :
    document(document),
    parser(parser) {
  probe_sink = ToCoreProbeSink(document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->Will(*this);
  }
}

ParseHTML::~ParseHTML() {
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->Did(*this);
  }
}

void ForcePseudoStateImpl(Element* element, CSSSelector::PseudoType pseudo_state, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(element);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorCSSAgents()) {
    for (InspectorCSSAgent* agent : probe_sink->InspectorCSSAgents())
      agent->ForcePseudoState(element, pseudo_state, result);
  }
}

void ShouldForceCorsPreflightImpl(ExecutionContext* param_execution_context, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->ShouldForceCorsPreflight(result);
  }
}

void ShouldBlockRequestImpl(CoreProbeSink* param_core_probe_sink, const KURL& param_kurl, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_core_probe_sink);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->ShouldBlockRequest(param_kurl, result);
  }
}

void ShouldBypassServiceWorkerImpl(ExecutionContext* context, bool* result) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorNetworkAgents()) {
    for (InspectorNetworkAgent* agent : probe_sink->InspectorNetworkAgents())
      agent->ShouldBypassServiceWorker(result);
  }
}

void ConsoleTimeStampImpl(ExecutionContext* param_execution_context, const String& title) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPerformanceAgents()) {
    for (InspectorPerformanceAgent* agent : probe_sink->InspectorPerformanceAgents())
      agent->ConsoleTimeStamp(title);
  }
}

void LifecycleEventImpl(LocalFrame* param_local_frame, DocumentLoader* param_document_loader, const char* name, double timestamp) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->LifecycleEvent(param_local_frame, param_document_loader, name, timestamp);
  }
}

void PaintTimingImpl(Document* param_document, const char* name, double timestamp) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorTraceEventss()) {
    for (InspectorTraceEvents* agent : probe_sink->InspectorTraceEventss())
      agent->PaintTiming(param_document, name, timestamp);
  }
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->PaintTiming(param_document, name, timestamp);
  }
}

void DidCreateAudioContextImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidCreateAudioContext();
  }
}

void DidCloseAudioContextImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidCloseAudioContext();
  }
}

void DidResumeAudioContextImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidResumeAudioContext();
  }
}

void DidSuspendAudioContextImpl(Document* param_document) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_document);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorDOMDebuggerAgents()) {
    for (InspectorDOMDebuggerAgent* agent : probe_sink->InspectorDOMDebuggerAgents())
      agent->DidSuspendAudioContext();
  }
}

void ProduceCompilationCacheImpl(LocalFrame* param_local_frame, const ScriptSourceCode& source, v8::Local<v8::Script> script) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_local_frame);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->ProduceCompilationCache(source, script);
  }
}

void ConsumeCompilationCacheImpl(ExecutionContext* param_execution_context, const ScriptSourceCode& source, v8::ScriptCompiler::CachedData** cached_data) {
  CoreProbeSink* probe_sink = ToCoreProbeSink(param_execution_context);
  if (!probe_sink)
    return;
  if (probe_sink->HasInspectorPageAgents()) {
    for (InspectorPageAgent* agent : probe_sink->InspectorPageAgents())
      agent->ConsumeCompilationCache(source, cached_data);
  }
}


} // namespace probe
} // namespace blink
