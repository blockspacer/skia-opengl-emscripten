/*
 * Copyright (C) 2009 Apple Inc. All Rights Reserved.
 * Copyright (C) 2009, 2011 Google Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE COMPUTER, INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE COMPUTER, INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "third_party/blink/renderer/core/workers/worker_classic_script_loader.h"

#include <memory>
#include "base/memory/scoped_refptr.h"
#include "third_party/blink/public/mojom/net/ip_address_space.mojom-blink.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/csp/content_security_policy.h"
#include "third_party/blink/renderer/core/html/parser/text_resource_decoder.h"
#include "third_party/blink/renderer/core/inspector/console_message.h"
#include "third_party/blink/renderer/core/loader/resource/script_resource.h"
#include "third_party/blink/renderer/core/origin_trials/origin_trial_context.h"
#include "third_party/blink/renderer/core/workers/worker_global_scope.h"
#include "third_party/blink/renderer/platform/loader/fetch/fetch_client_settings_object.h"
#include "third_party/blink/renderer/platform/loader/fetch/resource_fetcher.h"
#include "third_party/blink/renderer/platform/loader/fetch/resource_fetcher_properties.h"
#include "third_party/blink/renderer/platform/loader/fetch/resource_loader_options.h"
#include "third_party/blink/renderer/platform/loader/fetch/resource_response.h"
#include "third_party/blink/renderer/platform/loader/fetch/text_resource_decoder_options.h"
#include "third_party/blink/renderer/platform/network/content_security_policy_response_headers.h"
#include "third_party/blink/renderer/platform/network/http_names.h"
#include "third_party/blink/renderer/platform/network/network_utils.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/weborigin/security_origin.h"

namespace blink {

namespace {

// CheckSameOriginEnforcement() functions return non-null String on error.
//
// WorkerGlobalScope's SecurityOrigin is initialized to request URL's
// origin at the construction of WorkerGlobalScope, while
// WorkerGlobalScope's URL is set to response URL
// (ResourceResponse::ResponseURL()).
// These functions are used to ensure the SecurityOrigin and the URL to be
// consistent. https://crbug.com/861564
//
// TODO(hiroshige): Merge with similar code in other places.
String CheckSameOriginEnforcement(const KURL& request_url,
                                  const KURL& response_url) {
  if (request_url != response_url &&
      !SecurityOrigin::AreSameSchemeHostPort(request_url, response_url)) {
    return "Refused to load the top-level worker script from '" +
           response_url.ElidedString() +
           "' because it doesn't match the origin of the request URL '" +
           request_url.ElidedString() + "'";
  }
  return String();
}

String CheckSameOriginEnforcement(const KURL& request_url,
                                  const ResourceResponse& response) {
  // While this check is not strictly necessary as CurrentRequestUrl() is not
  // used as WorkerGlobalScope's URL, it is probably safer to reject cases like
  // Origin A(request_url)
  //   =(cross-origin redirects)=> Origin B(CurrentRequestUrl())
  //   =(ServiceWorker interception)=> Origin A(ResponseUrl())
  // which doesn't seem to have valid use cases.
  String error =
      CheckSameOriginEnforcement(request_url, response.CurrentRequestUrl());
  if (!error.IsNull())
    return error;

  // This check is directly required to ensure the consistency between
  // WorkerGlobalScope's SecurityOrigin and URL.
  return CheckSameOriginEnforcement(request_url, response.ResponseUrl());
}

}  // namespace

WorkerClassicScriptLoader::WorkerClassicScriptLoader()
    : response_address_space_(mojom::IPAddressSpace::kPublic) {}

void WorkerClassicScriptLoader::LoadSynchronously(
    ExecutionContext& execution_context,
    ResourceFetcher* fetch_client_settings_object_fetcher,
    const KURL& url,
    mojom::RequestContextType request_context) {
  DCHECK(fetch_client_settings_object_fetcher);
  url_ = url;
  fetch_client_settings_object_fetcher_ = fetch_client_settings_object_fetcher;

  ResourceRequest request(url);
  request.SetHttpMethod(http_names::kGET);
  request.SetExternalRequestStateFromRequestorAddressSpace(
      fetch_client_settings_object_fetcher_->GetProperties()
          .GetFetchClientSettingsObject()
          .GetAddressSpace());
  request.SetRequestContext(request_context);

  SECURITY_DCHECK(execution_context.IsWorkerGlobalScope());

  ResourceLoaderOptions resource_loader_options;
  resource_loader_options.parser_disposition =
      ParserDisposition::kNotParserInserted;
  resource_loader_options.synchronous_policy = kRequestSynchronously;

  threadable_loader_ = MakeGarbageCollected<ThreadableLoader>(
      execution_context, this, resource_loader_options,
      fetch_client_settings_object_fetcher);
  threadable_loader_->Start(request);
}

void WorkerClassicScriptLoader::LoadTopLevelScriptAsynchronously(
    ExecutionContext& execution_context,
    ResourceFetcher* fetch_client_settings_object_fetcher,
    const KURL& url,
    mojom::RequestContextType request_context,
    network::mojom::FetchRequestMode fetch_request_mode,
    network::mojom::FetchCredentialsMode fetch_credentials_mode,
    base::OnceClosure response_callback,
    base::OnceClosure finished_callback) {
  DCHECK(fetch_client_settings_object_fetcher);
  DCHECK(response_callback || finished_callback);
  response_callback_ = std::move(response_callback);
  finished_callback_ = std::move(finished_callback);
  url_ = url;
  fetch_client_settings_object_fetcher_ = fetch_client_settings_object_fetcher;
  is_top_level_script_ = true;

  is_worker_global_scope_ = execution_context.IsWorkerGlobalScope();

  ResourceRequest request(url);
  request.SetHttpMethod(http_names::kGET);
  request.SetExternalRequestStateFromRequestorAddressSpace(
      fetch_client_settings_object_fetcher_->GetProperties()
          .GetFetchClientSettingsObject()
          .GetAddressSpace());
  request.SetRequestContext(request_context);
  request.SetFetchRequestMode(fetch_request_mode);
  request.SetFetchCredentialsMode(fetch_credentials_mode);

  need_to_cancel_ = true;
  threadable_loader_ = MakeGarbageCollected<ThreadableLoader>(
      execution_context, this, ResourceLoaderOptions(),
      fetch_client_settings_object_fetcher);
  threadable_loader_->Start(request);
  if (failed_)
    NotifyFinished();
}

const KURL& WorkerClassicScriptLoader::ResponseURL() const {
  DCHECK(!Failed());
  return response_url_;
}

void WorkerClassicScriptLoader::DidReceiveResponse(
    uint64_t identifier,
    const ResourceResponse& response) {
  if (response.HttpStatusCode() / 100 != 2 && response.HttpStatusCode()) {
    NotifyError();
    return;
  }
  if (!AllowedByNosniff::MimeTypeAsScript(
          fetch_client_settings_object_fetcher_->Context(),
          &fetch_client_settings_object_fetcher_->GetConsoleLogger(), response,
          fetch_client_settings_object_fetcher_->GetProperties()
              .GetFetchClientSettingsObject()
              .MimeTypeCheckForClassicWorkerScript(),
          is_worker_global_scope_)) {
    NotifyError();
    return;
  }

  if (is_top_level_script_) {
    String error = CheckSameOriginEnforcement(url_, response);
    if (!error.IsNull()) {
      fetch_client_settings_object_fetcher_->GetConsoleLogger()
          .AddConsoleMessage(mojom::ConsoleMessageSource::kSecurity,
                             mojom::ConsoleMessageLevel::kError, error);
      NotifyError();
      return;
    }
  }

  identifier_ = identifier;
  response_url_ = response.ResponseUrl();
  response_encoding_ = response.TextEncodingName();
  app_cache_id_ = response.AppCacheID();

  referrer_policy_ = response.HttpHeaderField(http_names::kReferrerPolicy);
  ProcessContentSecurityPolicy(response);
  origin_trial_tokens_ = OriginTrialContext::ParseHeaderValue(
      response.HttpHeaderField(http_names::kOriginTrial));

  if (network_utils::IsReservedIPAddress(response.RemoteIPAddress())) {
    response_address_space_ =
        SecurityOrigin::Create(response_url_)->IsLocalhost()
            ? mojom::IPAddressSpace::kLocal
            : mojom::IPAddressSpace::kPrivate;
  }

  if (response_callback_)
    std::move(response_callback_).Run();
}

void WorkerClassicScriptLoader::DidReceiveData(const char* data, unsigned len) {
  if (failed_)
    return;

  if (!decoder_) {
    decoder_ = std::make_unique<TextResourceDecoder>(TextResourceDecoderOptions(
        TextResourceDecoderOptions::kPlainTextContent,
        response_encoding_.IsEmpty() ? UTF8Encoding()
                                     : WTF::TextEncoding(response_encoding_)));
  }

  if (!len)
    return;

  source_text_.Append(decoder_->Decode(data, len));
}

void WorkerClassicScriptLoader::DidReceiveCachedMetadata(const char* data,
                                                         int size) {
  cached_metadata_ = std::make_unique<Vector<uint8_t>>(size);
  memcpy(cached_metadata_->data(), data, size);
}

void WorkerClassicScriptLoader::DidFinishLoading(uint64_t identifier) {
  need_to_cancel_ = false;
  if (!failed_ && decoder_)
    source_text_.Append(decoder_->Flush());

  NotifyFinished();
}

void WorkerClassicScriptLoader::DidFail(const ResourceError& error) {
  need_to_cancel_ = false;
  canceled_ = error.IsCancellation();
  NotifyError();
}

void WorkerClassicScriptLoader::DidFailRedirectCheck() {
  // When didFailRedirectCheck() is called, the ResourceLoader for the script
  // is not canceled yet. So we don't reset |m_needToCancel| here.
  NotifyError();
}

void WorkerClassicScriptLoader::Trace(Visitor* visitor) {
  visitor->Trace(threadable_loader_);
  visitor->Trace(content_security_policy_);
  visitor->Trace(fetch_client_settings_object_fetcher_);
  ThreadableLoaderClient::Trace(visitor);
}

void WorkerClassicScriptLoader::Cancel() {
  if (!need_to_cancel_)
    return;
  need_to_cancel_ = false;
  if (threadable_loader_)
    threadable_loader_->Cancel();
}

String WorkerClassicScriptLoader::SourceText() {
  return source_text_.ToString();
}

void WorkerClassicScriptLoader::NotifyError() {
  failed_ = true;
  // NotifyError() could be called before ThreadableLoader::Create() returns
  // e.g. from DidFail(), and in that case threadable_loader_ is not yet set
  // (i.e. still null).
  // Since the callback invocation in NotifyFinished() potentially delete
  // |this| object, the callback invocation should be postponed until the
  // create() call returns. See LoadAsynchronously() for the postponed call.
  if (threadable_loader_)
    NotifyFinished();
}

void WorkerClassicScriptLoader::NotifyFinished() {
  if (!finished_callback_)
    return;

  std::move(finished_callback_).Run();
}

void WorkerClassicScriptLoader::ProcessContentSecurityPolicy(
    const ResourceResponse& response) {
  // Per http://www.w3.org/TR/CSP2/#processing-model-workers, if the Worker's
  // URL is not a GUID, then it grabs its CSP from the response headers
  // directly.  Otherwise, the Worker inherits the policy from the parent
  // document (which is implemented in WorkerMessagingProxy, and
  // m_contentSecurityPolicy should be left as nullptr to inherit the policy).
  if (!response.CurrentRequestUrl().ProtocolIs("blob") &&
      !response.CurrentRequestUrl().ProtocolIs("file") &&
      !response.CurrentRequestUrl().ProtocolIs("filesystem")) {
    content_security_policy_ = MakeGarbageCollected<ContentSecurityPolicy>();
    content_security_policy_->SetOverrideURLForSelf(
        response.CurrentRequestUrl());
    content_security_policy_->DidReceiveHeaders(
        ContentSecurityPolicyResponseHeaders(response));
  }
}

}  // namespace blink
