/*
 * Copyright (C) 2010 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_WORKERS_ABSTRACT_WORKER_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_WORKERS_ABSTRACT_WORKER_H_

#if defined(ENABLE_GNET)
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-blink.h"
#endif // ENABLE_GNET
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/dom/events/event_listener.h"
#include "third_party/blink/renderer/core/dom/events/event_target.h"
#include "third_party/blink/renderer/core/execution_context/context_lifecycle_observer.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"

namespace blink {

class ExceptionState;
class KURL;
class ExecutionContext;

// Implementation of the AbstractWorker interface defined in the WebWorker HTML
// spec: https://html.spec.whatwg.org/C/#abstractworker
class CORE_EXPORT AbstractWorker : public EventTargetWithInlineData,
                                   public ContextLifecycleObserver {
  USING_GARBAGE_COLLECTED_MIXIN(AbstractWorker);

 public:
  // EventTarget APIs
  ExecutionContext* GetExecutionContext() const final {
    return ContextLifecycleObserver::GetExecutionContext();
  }

  DEFINE_STATIC_ATTRIBUTE_EVENT_LISTENER(error, kError)

  AbstractWorker(ExecutionContext*);
  ~AbstractWorker() override;

  void Trace(blink::Visitor*) override;

 protected:
  // Helper function that converts a URL to an absolute URL and checks the
  // result for validity.
  static KURL ResolveURL(ExecutionContext*,
                         const String& url,
                         ExceptionState&,
                         mojom::RequestContextType);
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_WORKERS_ABSTRACT_WORKER_H_
