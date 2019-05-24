// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   /instrumenting_probes_inl.h.tmpl
// and input files:
//   core_probes.pidl


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CORE_PROBES_INL_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CORE_PROBES_INL_H_

#include "third_party/blink/renderer/platform/heap/heap_allocator.h"
#include "third_party/blink/renderer/bindings/core/v8/script_source_code.h"
#include "third_party/blink/renderer/core/animation/animation.h"
#include "third_party/blink/renderer/core/core_probe_sink.h"
#include "third_party/blink/renderer/core/dom/character_data.h"
#include "third_party/blink/renderer/core/dom/pseudo_element.h"
#include "third_party/blink/renderer/core/html/html_slot_element.h"
#include "third_party/blink/renderer/core/loader/frame_loader_types.h"
#include "third_party/blink/renderer/core/page/chrome_client.h"
#include "third_party/blink/renderer/core/probe/core_probes.h"


namespace blink {

class ConsoleMessage;
class FontCustomPlatformData;
class FontFace;
class HTMLDocumentParser;
class WorkerInspectorProxy;
class XMLHttpRequest;

namespace probe {


CORE_EXPORT void DidClearDocumentOfWindowObjectImpl(LocalFrame*);
inline void DidClearDocumentOfWindowObject(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorAnimationAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  DidClearDocumentOfWindowObjectImpl(param_local_frame);
}

CORE_EXPORT void WillInsertDOMNodeImpl(Node*);
inline void WillInsertDOMNode(Node* parent) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  WillInsertDOMNodeImpl(parent);
}

CORE_EXPORT void DidInsertDOMNodeImpl(Node*);
inline void DidInsertDOMNode(Node* param_node) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMSnapshotAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  DidInsertDOMNodeImpl(param_node);
}

CORE_EXPORT void WillRemoveDOMNodeImpl(Node*);
inline void WillRemoveDOMNode(Node* param_node) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  WillRemoveDOMNodeImpl(param_node);
}

CORE_EXPORT void WillModifyDOMAttrImpl(Element*, const AtomicString&, const AtomicString&);
inline void WillModifyDOMAttr(Element* param_element, const AtomicString& old_value, const AtomicString& new_value) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  WillModifyDOMAttrImpl(param_element, old_value, new_value);
}

CORE_EXPORT void DidModifyDOMAttrImpl(Element*, const QualifiedName&, const AtomicString&);
inline void DidModifyDOMAttr(Element* param_element, const QualifiedName& name, const AtomicString& value) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  DidModifyDOMAttrImpl(param_element, name, value);
}

CORE_EXPORT void DidRemoveDOMAttrImpl(Element*, const QualifiedName&);
inline void DidRemoveDOMAttr(Element* param_element, const QualifiedName& name) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  DidRemoveDOMAttrImpl(param_element, name);
}

CORE_EXPORT void WillChangeStyleElementImpl(Element*);
inline void WillChangeStyleElement(Element* param_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  WillChangeStyleElementImpl(param_element);
}

CORE_EXPORT void CharacterDataModifiedImpl(CharacterData*);
inline void CharacterDataModified(CharacterData* param_character_data) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMSnapshotAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  CharacterDataModifiedImpl(param_character_data);
}

CORE_EXPORT void DidInvalidateStyleAttrImpl(Node*);
inline void DidInvalidateStyleAttr(Node* param_node) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  DidInvalidateStyleAttrImpl(param_node);
}

CORE_EXPORT void DidPerformElementShadowDistributionImpl(Element*);
inline void DidPerformElementShadowDistribution(Element* param_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  DidPerformElementShadowDistributionImpl(param_element);
}

CORE_EXPORT void DidPerformSlotDistributionImpl(HTMLSlotElement*);
inline void DidPerformSlotDistribution(HTMLSlotElement* param_html_slot_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  DidPerformSlotDistributionImpl(param_html_slot_element);
}

CORE_EXPORT void DocumentDetachedImpl(Document*);
inline void DocumentDetached(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  DocumentDetachedImpl(param_document);
}

CORE_EXPORT void ActiveStyleSheetsUpdatedImpl(Document*);
inline void ActiveStyleSheetsUpdated(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  ActiveStyleSheetsUpdatedImpl(param_document);
}

CORE_EXPORT void FontsUpdatedImpl(ExecutionContext*, const FontFace*, const String&, const FontCustomPlatformData*);
inline void FontsUpdated(ExecutionContext* param_execution_context, const FontFace* face, const String& src, const FontCustomPlatformData* font_custom_platform_data) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  FontsUpdatedImpl(param_execution_context, face, src, font_custom_platform_data);
}

CORE_EXPORT void MediaQueryResultChangedImpl(Document*);
inline void MediaQueryResultChanged(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  MediaQueryResultChangedImpl(param_document);
}

CORE_EXPORT void DidPushShadowRootImpl(Element*, ShadowRoot*);
inline void DidPushShadowRoot(Element* host, ShadowRoot* param_shadow_root) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  DidPushShadowRootImpl(host, param_shadow_root);
}

CORE_EXPORT void WillPopShadowRootImpl(Element*, ShadowRoot*);
inline void WillPopShadowRoot(Element* host, ShadowRoot* param_shadow_root) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  WillPopShadowRootImpl(host, param_shadow_root);
}

CORE_EXPORT void WillSendXMLHttpOrFetchNetworkRequestImpl(ExecutionContext*, const String&);
inline void WillSendXMLHttpOrFetchNetworkRequest(ExecutionContext* param_execution_context, const String& url) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  WillSendXMLHttpOrFetchNetworkRequestImpl(param_execution_context, url);
}

CORE_EXPORT void DidCreateCanvasContextImpl(Document*);
inline void DidCreateCanvasContext(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidCreateCanvasContextImpl(param_document);
}

CORE_EXPORT void DidFireWebGLErrorImpl(Element*, const String&);
inline void DidFireWebGLError(Element* param_element, const String& error_name) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidFireWebGLErrorImpl(param_element, error_name);
}

CORE_EXPORT void DidFireWebGLWarningImpl(Element*);
inline void DidFireWebGLWarning(Element* param_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidFireWebGLWarningImpl(param_element);
}

CORE_EXPORT void DidFireWebGLErrorOrWarningImpl(Element*, const String&);
inline void DidFireWebGLErrorOrWarning(Element* param_element, const String& message) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidFireWebGLErrorOrWarningImpl(param_element, message);
}

CORE_EXPORT void DidResizeMainFrameImpl(LocalFrame*);
inline void DidResizeMainFrame(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  DidResizeMainFrameImpl(param_local_frame);
}

CORE_EXPORT void DidPaintImpl(LocalFrame*, const cc::Layer*, const LayoutRect&);
inline void DidPaint(LocalFrame* param_local_frame, const cc::Layer* param_cc, const LayoutRect& param_layout_rect) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLayerTreeAgent))
    return;

  DidPaintImpl(param_local_frame, param_cc, param_layout_rect);
}

CORE_EXPORT void ApplyAcceptLanguageOverrideImpl(ExecutionContext*, String*);
inline void ApplyAcceptLanguageOverride(ExecutionContext* param_execution_context, String* accept_language) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorEmulationAgent))
    return;

  ApplyAcceptLanguageOverrideImpl(param_execution_context, accept_language);
}

CORE_EXPORT void ApplyUserAgentOverrideImpl(CoreProbeSink*, String*);
inline void ApplyUserAgentOverride(CoreProbeSink* param_core_probe_sink, String* user_agent) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorEmulationAgent))
    return;

  ApplyUserAgentOverrideImpl(param_core_probe_sink, user_agent);
}

CORE_EXPORT void DidBlockRequestImpl(CoreProbeSink*, const ResourceRequest&, DocumentLoader*, const KURL&, const FetchInitiatorInfo&, ResourceRequestBlockedReason, ResourceType);
inline void DidBlockRequest(CoreProbeSink* param_core_probe_sink, const ResourceRequest& param_resource_request, DocumentLoader* param_document_loader, const KURL& fetch_context_url, const FetchInitiatorInfo& param_fetch_initiator_info, ResourceRequestBlockedReason param_resource_request_blocked_reason, ResourceType param_resource_type) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidBlockRequestImpl(param_core_probe_sink, param_resource_request, param_document_loader, fetch_context_url, param_fetch_initiator_info, param_resource_request_blocked_reason, param_resource_type);
}

CORE_EXPORT void DidChangeResourcePriorityImpl(LocalFrame*, DocumentLoader*, uint64_t, ResourceLoadPriority);
inline void DidChangeResourcePriority(LocalFrame* param_local_frame, DocumentLoader* param_document_loader, uint64_t identifier, ResourceLoadPriority load_priority) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidChangeResourcePriorityImpl(param_local_frame, param_document_loader, identifier, load_priority);
}

CORE_EXPORT void PrepareRequestImpl(CoreProbeSink*, DocumentLoader*, ResourceRequest&, const FetchInitiatorInfo&, ResourceType);
inline void PrepareRequest(CoreProbeSink* param_core_probe_sink, DocumentLoader* param_document_loader, ResourceRequest& param_resource_request, const FetchInitiatorInfo& param_fetch_initiator_info, ResourceType param_resource_type) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorEmulationAgent))
    return;

  PrepareRequestImpl(param_core_probe_sink, param_document_loader, param_resource_request, param_fetch_initiator_info, param_resource_type);
}

CORE_EXPORT void WillSendRequestImpl(CoreProbeSink*, uint64_t, DocumentLoader*, const KURL&, const ResourceRequest&, const ResourceResponse&, const FetchInitiatorInfo&, ResourceType);
inline void WillSendRequest(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const KURL& fetch_context_url, const ResourceRequest& param_resource_request, const ResourceResponse& redirect_response, const FetchInitiatorInfo& param_fetch_initiator_info, ResourceType param_resource_type) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  WillSendRequestImpl(param_core_probe_sink, identifier, param_document_loader, fetch_context_url, param_resource_request, redirect_response, param_fetch_initiator_info, param_resource_type);
}

CORE_EXPORT void WillSendNavigationRequestImpl(CoreProbeSink*, uint64_t, DocumentLoader*, const KURL&, const AtomicString&, EncodedFormData*);
inline void WillSendNavigationRequest(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const KURL& param_kurl, const AtomicString& http_method, EncodedFormData* param_encoded_form_data) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  WillSendNavigationRequestImpl(param_core_probe_sink, identifier, param_document_loader, param_kurl, http_method, param_encoded_form_data);
}

CORE_EXPORT void MarkResourceAsCachedImpl(LocalFrame*, DocumentLoader*, uint64_t);
inline void MarkResourceAsCached(LocalFrame* param_local_frame, DocumentLoader* param_document_loader, uint64_t identifier) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  MarkResourceAsCachedImpl(param_local_frame, param_document_loader, identifier);
}

CORE_EXPORT void DidReceiveResourceResponseImpl(CoreProbeSink*, uint64_t, DocumentLoader*, const ResourceResponse&, const Resource*);
inline void DidReceiveResourceResponse(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const ResourceResponse& param_resource_response, const Resource* param_resource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveResourceResponseImpl(param_core_probe_sink, identifier, param_document_loader, param_resource_response, param_resource);
}

CORE_EXPORT void DidReceiveDataImpl(CoreProbeSink*, uint64_t, DocumentLoader*, const char*, uint64_t);
inline void DidReceiveData(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const char* data, uint64_t data_length) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveDataImpl(param_core_probe_sink, identifier, param_document_loader, data, data_length);
}

CORE_EXPORT void DidReceiveBlobImpl(CoreProbeSink*, uint64_t, DocumentLoader*, BlobDataHandle*);
inline void DidReceiveBlob(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, BlobDataHandle* param_blob_data_handle) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveBlobImpl(param_core_probe_sink, identifier, param_document_loader, param_blob_data_handle);
}

CORE_EXPORT void DidReceiveEncodedDataLengthImpl(CoreProbeSink*, DocumentLoader*, uint64_t, size_t);
inline void DidReceiveEncodedDataLength(CoreProbeSink* param_core_probe_sink, DocumentLoader* loader, uint64_t identifier, size_t encoded_data_length) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveEncodedDataLengthImpl(param_core_probe_sink, loader, identifier, encoded_data_length);
}

CORE_EXPORT void DidFinishLoadingImpl(CoreProbeSink*, uint64_t, DocumentLoader*, TimeTicks, int64_t, int64_t, bool);
inline void DidFinishLoading(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, TimeTicks finish_time, int64_t encoded_data_length, int64_t decoded_body_length, bool should_report_corb_blocking) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidFinishLoadingImpl(param_core_probe_sink, identifier, param_document_loader, finish_time, encoded_data_length, decoded_body_length, should_report_corb_blocking);
}

CORE_EXPORT void DidReceiveCorsRedirectResponseImpl(ExecutionContext*, uint64_t, DocumentLoader*, const ResourceResponse&, Resource*);
inline void DidReceiveCorsRedirectResponse(ExecutionContext* param_execution_context, uint64_t identifier, DocumentLoader* param_document_loader, const ResourceResponse& param_resource_response, Resource* param_resource) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveCorsRedirectResponseImpl(param_execution_context, identifier, param_document_loader, param_resource_response, param_resource);
}

CORE_EXPORT void DidFailLoadingImpl(CoreProbeSink*, uint64_t, DocumentLoader*, const ResourceError&);
inline void DidFailLoading(CoreProbeSink* param_core_probe_sink, uint64_t identifier, DocumentLoader* param_document_loader, const ResourceError& param_resource_error) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidFailLoadingImpl(param_core_probe_sink, identifier, param_document_loader, param_resource_error);
}

CORE_EXPORT void WillSendEventSourceRequestImpl(ExecutionContext*);
inline void WillSendEventSourceRequest(ExecutionContext* param_execution_context) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  WillSendEventSourceRequestImpl(param_execution_context);
}

CORE_EXPORT void WillDispatchEventSourceEventImpl(ExecutionContext*, uint64_t, const AtomicString&, const AtomicString&, const String&);
inline void WillDispatchEventSourceEvent(ExecutionContext* param_execution_context, uint64_t identifier, const AtomicString& event_name, const AtomicString& event_id, const String& data) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  WillDispatchEventSourceEventImpl(param_execution_context, identifier, event_name, event_id, data);
}

CORE_EXPORT void WillLoadXHRImpl(ExecutionContext*, const AtomicString&, const KURL&, bool, EncodedFormData*, const HTTPHeaderMap&, bool);
inline void WillLoadXHR(ExecutionContext* param_execution_context, const AtomicString& method, const KURL& url, bool async, EncodedFormData* form_data, const HTTPHeaderMap& headers, bool include_credentials) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  WillLoadXHRImpl(param_execution_context, method, url, async, form_data, headers, include_credentials);
}

CORE_EXPORT void DidFinishXHRImpl(ExecutionContext*, XMLHttpRequest*);
inline void DidFinishXHR(ExecutionContext* param_execution_context, XMLHttpRequest* xhr) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidFinishXHRImpl(param_execution_context, xhr);
}

CORE_EXPORT void ScriptImportedImpl(ExecutionContext*, uint64_t, const String&);
inline void ScriptImported(ExecutionContext* param_execution_context, uint64_t identifier, const String& source_string) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  ScriptImportedImpl(param_execution_context, identifier, source_string);
}

CORE_EXPORT void ScriptExecutionBlockedByCSPImpl(ExecutionContext*, const String&);
inline void ScriptExecutionBlockedByCSP(ExecutionContext* param_execution_context, const String& directive_text) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  ScriptExecutionBlockedByCSPImpl(param_execution_context, directive_text);
}

CORE_EXPORT void DidReceiveScriptResponseImpl(ExecutionContext*, uint64_t);
inline void DidReceiveScriptResponse(ExecutionContext* param_execution_context, uint64_t identifier) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveScriptResponseImpl(param_execution_context, identifier);
}

CORE_EXPORT void DomContentLoadedEventFiredImpl(LocalFrame*);
inline void DomContentLoadedEventFired(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  DomContentLoadedEventFiredImpl(param_local_frame);
}

CORE_EXPORT void LoadEventFiredImpl(LocalFrame*);
inline void LoadEventFired(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  LoadEventFiredImpl(param_local_frame);
}

CORE_EXPORT void FrameAttachedToParentImpl(LocalFrame*);
inline void FrameAttachedToParent(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  FrameAttachedToParentImpl(param_local_frame);
}

CORE_EXPORT void FrameDetachedFromParentImpl(LocalFrame*);
inline void FrameDetachedFromParent(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  FrameDetachedFromParentImpl(param_local_frame);
}

CORE_EXPORT void DidStartProvisionalLoadImpl(LocalFrame*);
inline void DidStartProvisionalLoad(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kDevToolsSession))
    return;

  DidStartProvisionalLoadImpl(param_local_frame);
}

CORE_EXPORT void DidFailProvisionalLoadImpl(LocalFrame*);
inline void DidFailProvisionalLoad(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kDevToolsSession))
    return;

  DidFailProvisionalLoadImpl(param_local_frame);
}

CORE_EXPORT void WillCommitLoadImpl(LocalFrame*, DocumentLoader*);
inline void WillCommitLoad(LocalFrame* param_local_frame, DocumentLoader* param_document_loader) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  WillCommitLoadImpl(param_local_frame, param_document_loader);
}

CORE_EXPORT void DidCommitLoadImpl(LocalFrame*, DocumentLoader*);
inline void DidCommitLoad(LocalFrame* param_local_frame, DocumentLoader* param_document_loader) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kDevToolsSession | CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorDOMAgent))
    return;

  DidCommitLoadImpl(param_local_frame, param_document_loader);
}

CORE_EXPORT void DidNavigateWithinDocumentImpl(LocalFrame*);
inline void DidNavigateWithinDocument(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  DidNavigateWithinDocumentImpl(param_local_frame);
}

CORE_EXPORT void FrameDocumentUpdatedImpl(LocalFrame*);
inline void FrameDocumentUpdated(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  FrameDocumentUpdatedImpl(param_local_frame);
}

CORE_EXPORT void FrameOwnerContentUpdatedImpl(LocalFrame*, HTMLFrameOwnerElement*);
inline void FrameOwnerContentUpdated(LocalFrame* param_local_frame, HTMLFrameOwnerElement* param_html_frame_owner_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  FrameOwnerContentUpdatedImpl(param_local_frame, param_html_frame_owner_element);
}

CORE_EXPORT void FrameStartedLoadingImpl(LocalFrame*);
inline void FrameStartedLoading(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorPageAgent | CoreProbeSink::kInspectorEmulationAgent))
    return;

  FrameStartedLoadingImpl(param_local_frame);
}

CORE_EXPORT void FrameStoppedLoadingImpl(LocalFrame*);
inline void FrameStoppedLoading(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  FrameStoppedLoadingImpl(param_local_frame);
}

CORE_EXPORT void FrameRequestedNavigationImpl(LocalFrame*, Frame*, const KURL&, ClientNavigationReason);
inline void FrameRequestedNavigation(LocalFrame* param_local_frame, Frame* target_frame, const KURL& url, ClientNavigationReason reason) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  FrameRequestedNavigationImpl(param_local_frame, target_frame, url, reason);
}

CORE_EXPORT void FrameScheduledNavigationImpl(LocalFrame*, const KURL&, double, ClientNavigationReason);
inline void FrameScheduledNavigation(LocalFrame* param_local_frame, const KURL& url, double delay, ClientNavigationReason reason) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  FrameScheduledNavigationImpl(param_local_frame, url, delay, reason);
}

CORE_EXPORT void FrameClearedScheduledNavigationImpl(LocalFrame*);
inline void FrameClearedScheduledNavigation(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent | CoreProbeSink::kInspectorPageAgent))
    return;

  FrameClearedScheduledNavigationImpl(param_local_frame);
}

CORE_EXPORT void DidCreateWebSocketImpl(ExecutionContext*, uint64_t, const KURL&, const String&);
inline void DidCreateWebSocket(ExecutionContext* param_execution_context, uint64_t identifier, const KURL& request_url, const String& protocol) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidCreateWebSocketImpl(param_execution_context, identifier, request_url, protocol);
}

CORE_EXPORT void WillSendWebSocketHandshakeRequestImpl(ExecutionContext*, uint64_t, network::mojom::blink::WebSocketHandshakeRequest*);
inline void WillSendWebSocketHandshakeRequest(ExecutionContext* param_execution_context, uint64_t identifier, network::mojom::blink::WebSocketHandshakeRequest* request) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  WillSendWebSocketHandshakeRequestImpl(param_execution_context, identifier, request);
}

CORE_EXPORT void DidReceiveWebSocketHandshakeResponseImpl(ExecutionContext*, uint64_t, network::mojom::blink::WebSocketHandshakeRequest*, network::mojom::blink::WebSocketHandshakeResponse*);
inline void DidReceiveWebSocketHandshakeResponse(ExecutionContext* param_execution_context, uint64_t identifier, network::mojom::blink::WebSocketHandshakeRequest* request, network::mojom::blink::WebSocketHandshakeResponse* response) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveWebSocketHandshakeResponseImpl(param_execution_context, identifier, request, response);
}

CORE_EXPORT void DidCloseWebSocketImpl(ExecutionContext*, uint64_t);
inline void DidCloseWebSocket(ExecutionContext* param_execution_context, uint64_t identifier) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidCloseWebSocketImpl(param_execution_context, identifier);
}

CORE_EXPORT void DidReceiveWebSocketMessageImpl(ExecutionContext*, uint64_t, int, bool, const char*, size_t);
inline void DidReceiveWebSocketMessage(ExecutionContext* param_execution_context, uint64_t identifier, int opcode, bool masked, const char* payload, size_t payload_length) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveWebSocketMessageImpl(param_execution_context, identifier, opcode, masked, payload, payload_length);
}

CORE_EXPORT void DidSendWebSocketMessageImpl(ExecutionContext*, uint64_t, int, bool, const char*, size_t);
inline void DidSendWebSocketMessage(ExecutionContext* param_execution_context, uint64_t identifier, int opcode, bool masked, const char* payload, size_t payload_length) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidSendWebSocketMessageImpl(param_execution_context, identifier, opcode, masked, payload, payload_length);
}

CORE_EXPORT void DidReceiveWebSocketMessageErrorImpl(ExecutionContext*, uint64_t, const String&);
inline void DidReceiveWebSocketMessageError(ExecutionContext* param_execution_context, uint64_t identifier, const String& error_message) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  DidReceiveWebSocketMessageErrorImpl(param_execution_context, identifier, error_message);
}

CORE_EXPORT void NetworkStateChangedImpl(LocalFrame*, bool);
inline void NetworkStateChanged(LocalFrame* param_local_frame, bool online) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorApplicationCacheAgent))
    return;

  NetworkStateChangedImpl(param_local_frame, online);
}

CORE_EXPORT void UpdateApplicationCacheStatusImpl(LocalFrame*);
inline void UpdateApplicationCacheStatus(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorApplicationCacheAgent))
    return;

  UpdateApplicationCacheStatusImpl(param_local_frame);
}

CORE_EXPORT void LayerTreeDidChangeImpl(LocalFrame*);
inline void LayerTreeDidChange(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLayerTreeAgent))
    return;

  LayerTreeDidChangeImpl(param_local_frame);
}

CORE_EXPORT void LayerTreePaintedImpl(LocalFrame*);
inline void LayerTreePainted(LocalFrame* param_local_frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLayerTreeAgent))
    return;

  LayerTreePaintedImpl(param_local_frame);
}

CORE_EXPORT void PseudoElementCreatedImpl(PseudoElement*);
inline void PseudoElementCreated(PseudoElement* param_pseudo_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  PseudoElementCreatedImpl(param_pseudo_element);
}

CORE_EXPORT void PseudoElementDestroyedImpl(PseudoElement*);
inline void PseudoElementDestroyed(PseudoElement* param_pseudo_element) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMAgent))
    return;

  PseudoElementDestroyedImpl(param_pseudo_element);
}

CORE_EXPORT void DidCreateAnimationImpl(Document*, unsigned);
inline void DidCreateAnimation(Document* param_document, unsigned param_unsigned) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorAnimationAgent))
    return;

  DidCreateAnimationImpl(param_document, param_unsigned);
}

CORE_EXPORT void AnimationPlayStateChangedImpl(Document*, Animation*, Animation::AnimationPlayState, Animation::AnimationPlayState);
inline void AnimationPlayStateChanged(Document* param_document, Animation* param_animation, Animation::AnimationPlayState old_play_state, Animation::AnimationPlayState new_play_state) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorAnimationAgent))
    return;

  AnimationPlayStateChangedImpl(param_document, param_animation, old_play_state, new_play_state);
}

CORE_EXPORT void WindowOpenImpl(Document*, const String&, const AtomicString&, const WebWindowFeatures&, bool);
inline void WindowOpen(Document* param_document, const String& url, const AtomicString& window_name, const WebWindowFeatures& window_features, bool user_gestrue) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  WindowOpenImpl(param_document, url, window_name, window_features, user_gestrue);
}

CORE_EXPORT void ConsoleMessageAddedImpl(ExecutionContext*, ConsoleMessage*);
inline void ConsoleMessageAdded(ExecutionContext* param_execution_context, ConsoleMessage* param_console_message) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorLogAgent))
    return;

  ConsoleMessageAddedImpl(param_execution_context, param_console_message);
}

CORE_EXPORT void WillRunJavaScriptDialogImpl(LocalFrame*);
inline void WillRunJavaScriptDialog(LocalFrame* frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  WillRunJavaScriptDialogImpl(frame);
}

CORE_EXPORT void DidRunJavaScriptDialogImpl(LocalFrame*);
inline void DidRunJavaScriptDialog(LocalFrame* frame) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  DidRunJavaScriptDialogImpl(frame);
}

CORE_EXPORT void DocumentWriteFetchScriptImpl(Document*);
inline void DocumentWriteFetchScript(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kPerformanceMonitor))
    return;

  DocumentWriteFetchScriptImpl(param_document);
}

CORE_EXPORT void DidChangeViewportImpl(LocalFrame*);
inline void DidChangeViewport(LocalFrame* document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  DidChangeViewportImpl(document);
}

CORE_EXPORT void BreakableLocationImpl(ExecutionContext*, const char*);
inline void BreakableLocation(ExecutionContext* context, const char* name) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  BreakableLocationImpl(context, name);
}

class CORE_EXPORT RecalculateStyle : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit RecalculateStyle(Document*);
  ~RecalculateStyle();
  Member<CoreProbeSink> probe_sink;
  Member<Document> document;
};

class CORE_EXPORT UpdateLayout : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit UpdateLayout(Document*);
  ~UpdateLayout();
  Member<CoreProbeSink> probe_sink;
  Member<Document> document;
};

class CORE_EXPORT ExecuteScript : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit ExecuteScript(ExecutionContext*, const String&);
  ~ExecuteScript();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  const String& script_url;
};

class CORE_EXPORT CallFunction : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit CallFunction(ExecutionContext*, v8::Local<v8::Function>, int = 0);
  ~CallFunction();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  v8::Local<v8::Function> function;
  int depth;
};

class CORE_EXPORT UserCallback : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit UserCallback(ExecutionContext*, const char*, const AtomicString&, bool, EventTarget* = nullptr);
  ~UserCallback();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  const char* name;
  const AtomicString& atomic_name;
  bool recurring;
  Member<EventTarget> event_target;
};

class CORE_EXPORT V8Compile : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit V8Compile(ExecutionContext*, const String&, int, int);
  ~V8Compile();
  Member<CoreProbeSink> probe_sink;
  Member<ExecutionContext> context;
  const String& file_name;
  int line;
  int column;
};

class CORE_EXPORT ParseHTML : public ProbeBase {
  STACK_ALLOCATED();

 public:
  explicit ParseHTML(Document*, HTMLDocumentParser*);
  ~ParseHTML();
  Member<CoreProbeSink> probe_sink;
  Member<Document> document;
  Member<HTMLDocumentParser> parser;
};

CORE_EXPORT void ForcePseudoStateImpl(Element*, CSSSelector::PseudoType, bool*);
inline void ForcePseudoState(Element* element, CSSSelector::PseudoType pseudo_state, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorCSSAgent))
    return;

  ForcePseudoStateImpl(element, pseudo_state, result);
}

CORE_EXPORT void ShouldForceCorsPreflightImpl(ExecutionContext*, bool*);
inline void ShouldForceCorsPreflight(ExecutionContext* param_execution_context, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  ShouldForceCorsPreflightImpl(param_execution_context, result);
}

CORE_EXPORT void ShouldBlockRequestImpl(CoreProbeSink*, const KURL&, bool*);
inline void ShouldBlockRequest(CoreProbeSink* param_core_probe_sink, const KURL& param_kurl, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  ShouldBlockRequestImpl(param_core_probe_sink, param_kurl, result);
}

CORE_EXPORT void ShouldBypassServiceWorkerImpl(ExecutionContext*, bool*);
inline void ShouldBypassServiceWorker(ExecutionContext* context, bool* result) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorNetworkAgent))
    return;

  ShouldBypassServiceWorkerImpl(context, result);
}

CORE_EXPORT void ConsoleTimeStampImpl(ExecutionContext*, const String&);
inline void ConsoleTimeStamp(ExecutionContext* param_execution_context, const String& title) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPerformanceAgent))
    return;

  ConsoleTimeStampImpl(param_execution_context, title);
}

CORE_EXPORT void LifecycleEventImpl(LocalFrame*, DocumentLoader*, const char*, double);
inline void LifecycleEvent(LocalFrame* param_local_frame, DocumentLoader* param_document_loader, const char* name, double timestamp) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  LifecycleEventImpl(param_local_frame, param_document_loader, name, timestamp);
}

CORE_EXPORT void PaintTimingImpl(Document*, const char*, double);
inline void PaintTiming(Document* param_document, const char* name, double timestamp) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorTraceEvents | CoreProbeSink::kInspectorPageAgent))
    return;

  PaintTimingImpl(param_document, name, timestamp);
}

CORE_EXPORT void DidCreateAudioContextImpl(Document*);
inline void DidCreateAudioContext(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidCreateAudioContextImpl(param_document);
}

CORE_EXPORT void DidCloseAudioContextImpl(Document*);
inline void DidCloseAudioContext(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidCloseAudioContextImpl(param_document);
}

CORE_EXPORT void DidResumeAudioContextImpl(Document*);
inline void DidResumeAudioContext(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidResumeAudioContextImpl(param_document);
}

CORE_EXPORT void DidSuspendAudioContextImpl(Document*);
inline void DidSuspendAudioContext(Document* param_document) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorDOMDebuggerAgent))
    return;

  DidSuspendAudioContextImpl(param_document);
}

CORE_EXPORT void ProduceCompilationCacheImpl(LocalFrame*, const ScriptSourceCode&, v8::Local<v8::Script>);
inline void ProduceCompilationCache(LocalFrame* param_local_frame, const ScriptSourceCode& source, v8::Local<v8::Script> script) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  ProduceCompilationCacheImpl(param_local_frame, source, script);
}

CORE_EXPORT void ConsumeCompilationCacheImpl(ExecutionContext*, const ScriptSourceCode&, v8::ScriptCompiler::CachedData**);
inline void ConsumeCompilationCache(ExecutionContext* param_execution_context, const ScriptSourceCode& source, v8::ScriptCompiler::CachedData** cached_data) {
  if (!CoreProbeSink::HasAgentsGlobal(CoreProbeSink::kInspectorPageAgent))
    return;

  ConsumeCompilationCacheImpl(param_execution_context, source, cached_data);
}

} // namespace probe
} // namespace blink

#endif // THIRD_PARTY_BLINK_RENDERER_CORE_CORE_PROBES_INL_H_
