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


#include "media/mojo/interfaces/remoting.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "media/mojo/interfaces/remoting_common.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_JUMBO_H_
#endif


namespace media {
namespace mojom {


void RemoterFactoryInterceptorForTesting::Create(RemotingSourcePtr source, RemoterRequest remoter) {
  GetForwardingInterface()->Create(std::move(source), std::move(remoter));
}
RemoterFactoryAsyncWaiter::RemoterFactoryAsyncWaiter(
    RemoterFactory* proxy) : proxy_(proxy) {}

RemoterFactoryAsyncWaiter::~RemoterFactoryAsyncWaiter() = default;




void RemotingDataStreamSenderInterceptorForTesting::SendFrame(uint32_t frame_size) {
  GetForwardingInterface()->SendFrame(std::move(frame_size));
}
void RemotingDataStreamSenderInterceptorForTesting::CancelInFlightData() {
  GetForwardingInterface()->CancelInFlightData();
}
RemotingDataStreamSenderAsyncWaiter::RemotingDataStreamSenderAsyncWaiter(
    RemotingDataStreamSender* proxy) : proxy_(proxy) {}

RemotingDataStreamSenderAsyncWaiter::~RemotingDataStreamSenderAsyncWaiter() = default;




void RemoterInterceptorForTesting::Start() {
  GetForwardingInterface()->Start();
}
void RemoterInterceptorForTesting::StartDataStreams(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, RemotingDataStreamSenderRequest audio_sender, RemotingDataStreamSenderRequest video_sender) {
  GetForwardingInterface()->StartDataStreams(std::move(audio_pipe), std::move(video_pipe), std::move(audio_sender), std::move(video_sender));
}
void RemoterInterceptorForTesting::Stop(::media::mojom::RemotingStopReason reason) {
  GetForwardingInterface()->Stop(std::move(reason));
}
void RemoterInterceptorForTesting::SendMessageToSink(const std::vector<uint8_t>& message) {
  GetForwardingInterface()->SendMessageToSink(std::move(message));
}
void RemoterInterceptorForTesting::EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) {
  GetForwardingInterface()->EstimateTransmissionCapacity(std::move(callback));
}
RemoterAsyncWaiter::RemoterAsyncWaiter(
    Remoter* proxy) : proxy_(proxy) {}

RemoterAsyncWaiter::~RemoterAsyncWaiter() = default;

void RemoterAsyncWaiter::EstimateTransmissionCapacity(
    double* out_rate) {
  base::RunLoop loop;
  proxy_->EstimateTransmissionCapacity(
      base::BindOnce(
          [](base::RunLoop* loop,
             double* out_rate
,
             double rate) {*out_rate = std::move(rate);
            loop->Quit();
          },
          &loop,
          out_rate));
  loop.Run();
}



void RemotingSourceInterceptorForTesting::OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) {
  GetForwardingInterface()->OnSinkAvailable(std::move(metadata));
}
void RemotingSourceInterceptorForTesting::OnSinkGone() {
  GetForwardingInterface()->OnSinkGone();
}
void RemotingSourceInterceptorForTesting::OnStarted() {
  GetForwardingInterface()->OnStarted();
}
void RemotingSourceInterceptorForTesting::OnStartFailed(::media::mojom::RemotingStartFailReason reason) {
  GetForwardingInterface()->OnStartFailed(std::move(reason));
}
void RemotingSourceInterceptorForTesting::OnMessageFromSink(const std::vector<uint8_t>& message) {
  GetForwardingInterface()->OnMessageFromSink(std::move(message));
}
void RemotingSourceInterceptorForTesting::OnStopped(::media::mojom::RemotingStopReason reason) {
  GetForwardingInterface()->OnStopped(std::move(reason));
}
RemotingSourceAsyncWaiter::RemotingSourceAsyncWaiter(
    RemotingSource* proxy) : proxy_(proxy) {}

RemotingSourceAsyncWaiter::~RemotingSourceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif