// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /probe_sink.h.tmpl
// and input files:
//   core_probes.pidl



#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CORE_PROBE_SINK_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CORE_PROBE_SINK_H_

#include <atomic>

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AdTracker;
class InspectorLogAgent;
class InspectorCSSAgent;
class InspectorEmulationAgent;
class InspectorDOMDebuggerAgent;
class InspectorTraceEvents;
class InspectorDOMAgent;
class InspectorApplicationCacheAgent;
class DevToolsSession;
class InspectorNetworkAgent;
class PerformanceMonitor;
class InspectorPerformanceAgent;
class InspectorAnimationAgent;
class InspectorPageAgent;
class InspectorDOMSnapshotAgent;
class InspectorLayerTreeAgent;

class CORE_EXPORT CoreProbeSink : public GarbageCollectedFinalized<CoreProbeSink> {

 public:
  enum AgentType : unsigned {
    kAdTracker = 1u << 0,
    kInspectorLogAgent = 1u << 1,
    kInspectorCSSAgent = 1u << 2,
    kInspectorEmulationAgent = 1u << 3,
    kInspectorDOMDebuggerAgent = 1u << 4,
    kInspectorTraceEvents = 1u << 5,
    kInspectorDOMAgent = 1u << 6,
    kInspectorApplicationCacheAgent = 1u << 7,
    kDevToolsSession = 1u << 8,
    kInspectorNetworkAgent = 1u << 9,
    kPerformanceMonitor = 1u << 10,
    kInspectorPerformanceAgent = 1u << 11,
    kInspectorAnimationAgent = 1u << 12,
    kInspectorPageAgent = 1u << 13,
    kInspectorDOMSnapshotAgent = 1u << 14,
    kInspectorLayerTreeAgent = 1u << 15,
  };

  CoreProbeSink();
  ~CoreProbeSink();
  CoreProbeSink (const CoreProbeSink&) = delete;
  CoreProbeSink& operator=(const CoreProbeSink&) = delete;

  void Trace(Visitor*);

  bool HasAdTrackers() const { return !ad_trackers_.IsEmpty(); }
  const HeapListHashSet<Member<AdTracker>>& AdTrackers() const { return ad_trackers_; }
  void AddAdTracker(AdTracker* agent);
  void RemoveAdTracker(AdTracker* agent);

  bool HasInspectorLogAgents() const { return !inspector_log_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorLogAgent>>& InspectorLogAgents() const { return inspector_log_agents_; }
  void AddInspectorLogAgent(InspectorLogAgent* agent);
  void RemoveInspectorLogAgent(InspectorLogAgent* agent);

  bool HasInspectorCSSAgents() const { return !inspector_css_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorCSSAgent>>& InspectorCSSAgents() const { return inspector_css_agents_; }
  void AddInspectorCSSAgent(InspectorCSSAgent* agent);
  void RemoveInspectorCSSAgent(InspectorCSSAgent* agent);

  bool HasInspectorEmulationAgents() const { return !inspector_emulation_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorEmulationAgent>>& InspectorEmulationAgents() const { return inspector_emulation_agents_; }
  void AddInspectorEmulationAgent(InspectorEmulationAgent* agent);
  void RemoveInspectorEmulationAgent(InspectorEmulationAgent* agent);

  bool HasInspectorDOMDebuggerAgents() const { return !inspector_dom_debugger_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorDOMDebuggerAgent>>& InspectorDOMDebuggerAgents() const { return inspector_dom_debugger_agents_; }
  void AddInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent);
  void RemoveInspectorDOMDebuggerAgent(InspectorDOMDebuggerAgent* agent);

  bool HasInspectorTraceEventss() const { return !inspector_trace_eventss_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorTraceEvents>>& InspectorTraceEventss() const { return inspector_trace_eventss_; }
  void AddInspectorTraceEvents(InspectorTraceEvents* agent);
  void RemoveInspectorTraceEvents(InspectorTraceEvents* agent);

  bool HasInspectorDOMAgents() const { return !inspector_dom_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorDOMAgent>>& InspectorDOMAgents() const { return inspector_dom_agents_; }
  void AddInspectorDOMAgent(InspectorDOMAgent* agent);
  void RemoveInspectorDOMAgent(InspectorDOMAgent* agent);

  bool HasInspectorApplicationCacheAgents() const { return !inspector_application_cache_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorApplicationCacheAgent>>& InspectorApplicationCacheAgents() const { return inspector_application_cache_agents_; }
  void AddInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent);
  void RemoveInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent);

  bool HasDevToolsSessions() const { return !dev_tools_sessions_.IsEmpty(); }
  const HeapListHashSet<Member<DevToolsSession>>& DevToolsSessions() const { return dev_tools_sessions_; }
  void AddDevToolsSession(DevToolsSession* agent);
  void RemoveDevToolsSession(DevToolsSession* agent);

  bool HasInspectorNetworkAgents() const { return !inspector_network_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorNetworkAgent>>& InspectorNetworkAgents() const { return inspector_network_agents_; }
  void AddInspectorNetworkAgent(InspectorNetworkAgent* agent);
  void RemoveInspectorNetworkAgent(InspectorNetworkAgent* agent);

  bool HasPerformanceMonitors() const { return !performance_monitors_.IsEmpty(); }
  const HeapListHashSet<Member<PerformanceMonitor>>& PerformanceMonitors() const { return performance_monitors_; }
  void AddPerformanceMonitor(PerformanceMonitor* agent);
  void RemovePerformanceMonitor(PerformanceMonitor* agent);

  bool HasInspectorPerformanceAgents() const { return !inspector_performance_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorPerformanceAgent>>& InspectorPerformanceAgents() const { return inspector_performance_agents_; }
  void AddInspectorPerformanceAgent(InspectorPerformanceAgent* agent);
  void RemoveInspectorPerformanceAgent(InspectorPerformanceAgent* agent);

  bool HasInspectorAnimationAgents() const { return !inspector_animation_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorAnimationAgent>>& InspectorAnimationAgents() const { return inspector_animation_agents_; }
  void AddInspectorAnimationAgent(InspectorAnimationAgent* agent);
  void RemoveInspectorAnimationAgent(InspectorAnimationAgent* agent);

  bool HasInspectorPageAgents() const { return !inspector_page_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorPageAgent>>& InspectorPageAgents() const { return inspector_page_agents_; }
  void AddInspectorPageAgent(InspectorPageAgent* agent);
  void RemoveInspectorPageAgent(InspectorPageAgent* agent);

  bool HasInspectorDOMSnapshotAgents() const { return !inspector_dom_snapshot_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorDOMSnapshotAgent>>& InspectorDOMSnapshotAgents() const { return inspector_dom_snapshot_agents_; }
  void AddInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent);
  void RemoveInspectorDOMSnapshotAgent(InspectorDOMSnapshotAgent* agent);

  bool HasInspectorLayerTreeAgents() const { return !inspector_layer_tree_agents_.IsEmpty(); }
  const HeapListHashSet<Member<InspectorLayerTreeAgent>>& InspectorLayerTreeAgents() const { return inspector_layer_tree_agents_; }
  void AddInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent);
  void RemoveInspectorLayerTreeAgent(InspectorLayerTreeAgent* agent);

  // Queries process-wide. Intended for fast-return cases only.
  static bool HasAgentsGlobal(unsigned mask) {
    return s_existingAgents.load(std::memory_order_acquire) & mask;
  }

 private:
  HeapListHashSet<Member<AdTracker>> ad_trackers_;
  HeapListHashSet<Member<InspectorLogAgent>> inspector_log_agents_;
  HeapListHashSet<Member<InspectorCSSAgent>> inspector_css_agents_;
  HeapListHashSet<Member<InspectorEmulationAgent>> inspector_emulation_agents_;
  HeapListHashSet<Member<InspectorDOMDebuggerAgent>> inspector_dom_debugger_agents_;
  HeapListHashSet<Member<InspectorTraceEvents>> inspector_trace_eventss_;
  HeapListHashSet<Member<InspectorDOMAgent>> inspector_dom_agents_;
  HeapListHashSet<Member<InspectorApplicationCacheAgent>> inspector_application_cache_agents_;
  HeapListHashSet<Member<DevToolsSession>> dev_tools_sessions_;
  HeapListHashSet<Member<InspectorNetworkAgent>> inspector_network_agents_;
  HeapListHashSet<Member<PerformanceMonitor>> performance_monitors_;
  HeapListHashSet<Member<InspectorPerformanceAgent>> inspector_performance_agents_;
  HeapListHashSet<Member<InspectorAnimationAgent>> inspector_animation_agents_;
  HeapListHashSet<Member<InspectorPageAgent>> inspector_page_agents_;
  HeapListHashSet<Member<InspectorDOMSnapshotAgent>> inspector_dom_snapshot_agents_;
  HeapListHashSet<Member<InspectorLayerTreeAgent>> inspector_layer_tree_agents_;

  // Number of sinks with an enabled agent of each type, used to keep
  // |s_existingAgents| up to date.
  // Access must be guarded by AgentCountMutex in the source file.
  static unsigned s_numSinksWithAdTracker;
  static unsigned s_numSinksWithInspectorLogAgent;
  static unsigned s_numSinksWithInspectorCSSAgent;
  static unsigned s_numSinksWithInspectorEmulationAgent;
  static unsigned s_numSinksWithInspectorDOMDebuggerAgent;
  static unsigned s_numSinksWithInspectorTraceEvents;
  static unsigned s_numSinksWithInspectorDOMAgent;
  static unsigned s_numSinksWithInspectorApplicationCacheAgent;
  static unsigned s_numSinksWithDevToolsSession;
  static unsigned s_numSinksWithInspectorNetworkAgent;
  static unsigned s_numSinksWithPerformanceMonitor;
  static unsigned s_numSinksWithInspectorPerformanceAgent;
  static unsigned s_numSinksWithInspectorAnimationAgent;
  static unsigned s_numSinksWithInspectorPageAgent;
  static unsigned s_numSinksWithInspectorDOMSnapshotAgent;
  static unsigned s_numSinksWithInspectorLayerTreeAgent;

  // Bit-set of types of enabled agent which exist in this process.
  // Always a bitwise-or of AgentType enumerators.
  static std::atomic<unsigned> s_existingAgents;
};

} // namespace blink

#endif // THIRD_PARTY_BLINK_RENDERER_CORE_CORE_PROBE_SINK_H_
