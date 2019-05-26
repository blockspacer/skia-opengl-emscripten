// Copyright 2019 The Chromium Authors. All rights reserved.
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


#include "third_party/blink/public/mojom/presentation/presentation.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void PresentationConnectionInterceptorForTesting::OnMessage(PresentationConnectionMessagePtr message) {
  GetForwardingInterface()->OnMessage(std::move(message));
}
void PresentationConnectionInterceptorForTesting::DidChangeState(PresentationConnectionState state) {
  GetForwardingInterface()->DidChangeState(std::move(state));
}
void PresentationConnectionInterceptorForTesting::DidClose(PresentationConnectionCloseReason reason) {
  GetForwardingInterface()->DidClose(std::move(reason));
}
PresentationConnectionAsyncWaiter::PresentationConnectionAsyncWaiter(
    PresentationConnection* proxy) : proxy_(proxy) {}

PresentationConnectionAsyncWaiter::~PresentationConnectionAsyncWaiter() = default;




void PresentationServiceInterceptorForTesting::SetController(PresentationControllerPtr controller) {
  GetForwardingInterface()->SetController(std::move(controller));
}
void PresentationServiceInterceptorForTesting::SetReceiver(PresentationReceiverPtr receiver) {
  GetForwardingInterface()->SetReceiver(std::move(receiver));
}
void PresentationServiceInterceptorForTesting::SetDefaultPresentationUrls(const WTF::Vector<::blink::KURL>& presentation_urls) {
  GetForwardingInterface()->SetDefaultPresentationUrls(std::move(presentation_urls));
}
void PresentationServiceInterceptorForTesting::ListenForScreenAvailability(const ::blink::KURL& availability_url) {
  GetForwardingInterface()->ListenForScreenAvailability(std::move(availability_url));
}
void PresentationServiceInterceptorForTesting::StopListeningForScreenAvailability(const ::blink::KURL& availability_url) {
  GetForwardingInterface()->StopListeningForScreenAvailability(std::move(availability_url));
}
void PresentationServiceInterceptorForTesting::StartPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, StartPresentationCallback callback) {
  GetForwardingInterface()->StartPresentation(std::move(presentation_urls), std::move(callback));
}
void PresentationServiceInterceptorForTesting::ReconnectPresentation(const WTF::Vector<::blink::KURL>& presentation_urls, const WTF::String& presentation_id, ReconnectPresentationCallback callback) {
  GetForwardingInterface()->ReconnectPresentation(std::move(presentation_urls), std::move(presentation_id), std::move(callback));
}
void PresentationServiceInterceptorForTesting::CloseConnection(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) {
  GetForwardingInterface()->CloseConnection(std::move(presentation_url), std::move(presentation_id));
}
void PresentationServiceInterceptorForTesting::Terminate(const ::blink::KURL& presentation_url, const WTF::String& presentation_id) {
  GetForwardingInterface()->Terminate(std::move(presentation_url), std::move(presentation_id));
}
PresentationServiceAsyncWaiter::PresentationServiceAsyncWaiter(
    PresentationService* proxy) : proxy_(proxy) {}

PresentationServiceAsyncWaiter::~PresentationServiceAsyncWaiter() = default;

void PresentationServiceAsyncWaiter::StartPresentation(
    const WTF::Vector<::blink::KURL>& presentation_urls, PresentationConnectionResultPtr* out_result, PresentationErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->StartPresentation(std::move(presentation_urls),
      base::BindOnce(
          [](base::RunLoop* loop,
             PresentationConnectionResultPtr* out_result
,
             PresentationErrorPtr* out_error
,
             PresentationConnectionResultPtr result,
             PresentationErrorPtr error) {*out_result = std::move(result);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_result,
          out_error));
  loop.Run();
}
void PresentationServiceAsyncWaiter::ReconnectPresentation(
    const WTF::Vector<::blink::KURL>& presentation_urls, const WTF::String& presentation_id, PresentationConnectionResultPtr* out_result, PresentationErrorPtr* out_error) {
  base::RunLoop loop;
  proxy_->ReconnectPresentation(std::move(presentation_urls),std::move(presentation_id),
      base::BindOnce(
          [](base::RunLoop* loop,
             PresentationConnectionResultPtr* out_result
,
             PresentationErrorPtr* out_error
,
             PresentationConnectionResultPtr result,
             PresentationErrorPtr error) {*out_result = std::move(result);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_result,
          out_error));
  loop.Run();
}



void PresentationControllerInterceptorForTesting::OnScreenAvailabilityUpdated(const ::blink::KURL& url, ScreenAvailability availability) {
  GetForwardingInterface()->OnScreenAvailabilityUpdated(std::move(url), std::move(availability));
}
void PresentationControllerInterceptorForTesting::OnDefaultPresentationStarted(PresentationConnectionResultPtr result) {
  GetForwardingInterface()->OnDefaultPresentationStarted(std::move(result));
}
void PresentationControllerInterceptorForTesting::OnConnectionStateChanged(PresentationInfoPtr presentation_info, PresentationConnectionState newState) {
  GetForwardingInterface()->OnConnectionStateChanged(std::move(presentation_info), std::move(newState));
}
void PresentationControllerInterceptorForTesting::OnConnectionClosed(PresentationInfoPtr presentation_info, PresentationConnectionCloseReason reason, const WTF::String& message) {
  GetForwardingInterface()->OnConnectionClosed(std::move(presentation_info), std::move(reason), std::move(message));
}
PresentationControllerAsyncWaiter::PresentationControllerAsyncWaiter(
    PresentationController* proxy) : proxy_(proxy) {}

PresentationControllerAsyncWaiter::~PresentationControllerAsyncWaiter() = default;




void PresentationReceiverInterceptorForTesting::OnReceiverConnectionAvailable(PresentationInfoPtr info, PresentationConnectionPtr controller_connection, PresentationConnectionRequest receiver_connection_request) {
  GetForwardingInterface()->OnReceiverConnectionAvailable(std::move(info), std::move(controller_connection), std::move(receiver_connection_request));
}
PresentationReceiverAsyncWaiter::PresentationReceiverAsyncWaiter(
    PresentationReceiver* proxy) : proxy_(proxy) {}

PresentationReceiverAsyncWaiter::~PresentationReceiverAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif