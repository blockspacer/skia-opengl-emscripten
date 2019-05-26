// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /probe_sink.h.tmpl
// and input files:
//   platform_probes.pidl



#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_PLATFORM_PROBE_SINK_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_PLATFORM_PROBE_SINK_H_

#include <atomic>

#include "third_party/blink/renderer/platform/platform_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class PlatformTraceEventsAgent;

class PLATFORM_EXPORT PlatformProbeSink : public GarbageCollectedFinalized<PlatformProbeSink> {

 public:
  enum AgentType : unsigned {
    kPlatformTraceEvents = 1u << 0,
  };

  PlatformProbeSink();
  ~PlatformProbeSink();
  PlatformProbeSink (const PlatformProbeSink&) = delete;
  PlatformProbeSink& operator=(const PlatformProbeSink&) = delete;

  void Trace(Visitor*);

  bool HasPlatformTraceEventss() const { return !platform_trace_eventss_.IsEmpty(); }
  const HeapListHashSet<Member<PlatformTraceEventsAgent>>& PlatformTraceEventsAgents() const { return platform_trace_eventss_; }
  void AddPlatformTraceEvents(PlatformTraceEventsAgent* agent);
  void RemovePlatformTraceEvents(PlatformTraceEventsAgent* agent);

  // Queries process-wide. Intended for fast-return cases only.
  static bool HasAgentsGlobal(unsigned mask) {
    return s_existingAgents.load(std::memory_order_acquire) & mask;
  }

 private:
  HeapListHashSet<Member<PlatformTraceEventsAgent>> platform_trace_eventss_;

  // Number of sinks with an enabled agent of each type, used to keep
  // |s_existingAgents| up to date.
  // Access must be guarded by AgentCountMutex in the source file.
  static unsigned s_numSinksWithPlatformTraceEvents;

  // Bit-set of types of enabled agent which exist in this process.
  // Always a bitwise-or of AgentType enumerators.
  static std::atomic<unsigned> s_existingAgents;
};

} // namespace blink

#endif // THIRD_PARTY_BLINK_RENDERER_PLATFORM_PLATFORM_PROBE_SINK_H_
