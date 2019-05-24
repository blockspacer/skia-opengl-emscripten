// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /instrumenting_probes_inl.h.tmpl
// and input files:
//   platform_probes.pidl


#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_PLATFORM_PROBES_INL_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_PLATFORM_PROBES_INL_H_

#include "third_party/blink/renderer/platform/heap/heap_allocator.h"
#include "third_party/blink/renderer/platform/platform_probe_sink.h"
#include "third_party/blink/renderer/platform/probe/platform_probes.h"


namespace blink {

class FetchContext;
class ResourceRequest;
class ResourceResponse;
struct FetchInitiatorInfo;

namespace probe {


class PLATFORM_EXPORT PlatformSendRequest : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit PlatformSendRequest(FetchContext*, uint64_t, ResourceRequest&, const ResourceResponse&, const FetchInitiatorInfo&);
  ~PlatformSendRequest();
  Member<PlatformProbeSink> probe_sink;
  Member<FetchContext> param_fetch_context;
  uint64_t identifier;
  ResourceRequest& param_resource_request;
  const ResourceResponse& redirect_response;
  const FetchInitiatorInfo& param_fetch_initiator_info;
};

} // namespace probe
} // namespace blink

#endif // THIRD_PARTY_BLINK_RENDERER_PLATFORM_PLATFORM_PROBES_INL_H_
