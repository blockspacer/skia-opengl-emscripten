// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/presentation/presentation.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT PresentationConnectionInterceptorForTesting : public PresentationConnection {
  virtual PresentationConnection* GetForwardingInterface() = 0;
  void OnMessage(PresentationConnectionMessagePtr message) override;
  void DidChangeState(PresentationConnectionState state) override;
  void DidClose(PresentationConnectionCloseReason reason) override;
};
class BLINK_COMMON_EXPORT PresentationConnectionAsyncWaiter {
 public:
  explicit PresentationConnectionAsyncWaiter(PresentationConnection* proxy);
  ~PresentationConnectionAsyncWaiter();

 private:
  PresentationConnection* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationConnectionAsyncWaiter);
};


class BLINK_COMMON_EXPORT PresentationServiceInterceptorForTesting : public PresentationService {
  virtual PresentationService* GetForwardingInterface() = 0;
  void SetController(PresentationControllerPtr controller) override;
  void SetReceiver(PresentationReceiverPtr receiver) override;
  void SetDefaultPresentationUrls(const std::vector<GURL>& presentation_urls) override;
  void ListenForScreenAvailability(const GURL& availability_url) override;
  void StopListeningForScreenAvailability(const GURL& availability_url) override;
  void StartPresentation(const std::vector<GURL>& presentation_urls, StartPresentationCallback callback) override;
  void ReconnectPresentation(const std::vector<GURL>& presentation_urls, const std::string& presentation_id, ReconnectPresentationCallback callback) override;
  void CloseConnection(const GURL& presentation_url, const std::string& presentation_id) override;
  void Terminate(const GURL& presentation_url, const std::string& presentation_id) override;
};
class BLINK_COMMON_EXPORT PresentationServiceAsyncWaiter {
 public:
  explicit PresentationServiceAsyncWaiter(PresentationService* proxy);
  ~PresentationServiceAsyncWaiter();
  void StartPresentation(
      const std::vector<GURL>& presentation_urls, PresentationConnectionResultPtr* out_result, PresentationErrorPtr* out_error);
  void ReconnectPresentation(
      const std::vector<GURL>& presentation_urls, const std::string& presentation_id, PresentationConnectionResultPtr* out_result, PresentationErrorPtr* out_error);

 private:
  PresentationService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationServiceAsyncWaiter);
};


class BLINK_COMMON_EXPORT PresentationControllerInterceptorForTesting : public PresentationController {
  virtual PresentationController* GetForwardingInterface() = 0;
  void OnScreenAvailabilityUpdated(const GURL& url, ScreenAvailability availability) override;
  void OnDefaultPresentationStarted(PresentationConnectionResultPtr result) override;
  void OnConnectionStateChanged(PresentationInfoPtr presentation_info, PresentationConnectionState newState) override;
  void OnConnectionClosed(PresentationInfoPtr presentation_info, PresentationConnectionCloseReason reason, const std::string& message) override;
};
class BLINK_COMMON_EXPORT PresentationControllerAsyncWaiter {
 public:
  explicit PresentationControllerAsyncWaiter(PresentationController* proxy);
  ~PresentationControllerAsyncWaiter();

 private:
  PresentationController* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationControllerAsyncWaiter);
};


class BLINK_COMMON_EXPORT PresentationReceiverInterceptorForTesting : public PresentationReceiver {
  virtual PresentationReceiver* GetForwardingInterface() = 0;
  void OnReceiverConnectionAvailable(PresentationInfoPtr info, PresentationConnectionPtr controller_connection, PresentationConnectionRequest receiver_connection_request) override;
};
class BLINK_COMMON_EXPORT PresentationReceiverAsyncWaiter {
 public:
  explicit PresentationReceiverAsyncWaiter(PresentationReceiver* proxy);
  ~PresentationReceiverAsyncWaiter();

 private:
  PresentationReceiver* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(PresentationReceiverAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_TEST_UTILS_H_