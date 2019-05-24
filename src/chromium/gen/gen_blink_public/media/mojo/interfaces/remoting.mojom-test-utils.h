// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/remoting.mojom.h"


namespace media {
namespace mojom {


class  RemoterFactoryInterceptorForTesting : public RemoterFactory {
  virtual RemoterFactory* GetForwardingInterface() = 0;
  void Create(RemotingSourcePtr source, RemoterRequest remoter) override;
};
class  RemoterFactoryAsyncWaiter {
 public:
  explicit RemoterFactoryAsyncWaiter(RemoterFactory* proxy);
  ~RemoterFactoryAsyncWaiter();

 private:
  RemoterFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemoterFactoryAsyncWaiter);
};


class  RemotingDataStreamSenderInterceptorForTesting : public RemotingDataStreamSender {
  virtual RemotingDataStreamSender* GetForwardingInterface() = 0;
  void SendFrame(uint32_t frame_size) override;
  void CancelInFlightData() override;
};
class  RemotingDataStreamSenderAsyncWaiter {
 public:
  explicit RemotingDataStreamSenderAsyncWaiter(RemotingDataStreamSender* proxy);
  ~RemotingDataStreamSenderAsyncWaiter();

 private:
  RemotingDataStreamSender* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemotingDataStreamSenderAsyncWaiter);
};


class  RemoterInterceptorForTesting : public Remoter {
  virtual Remoter* GetForwardingInterface() = 0;
  void Start() override;
  void StartDataStreams(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, RemotingDataStreamSenderRequest audio_sender, RemotingDataStreamSenderRequest video_sender) override;
  void Stop(::media::mojom::RemotingStopReason reason) override;
  void SendMessageToSink(const std::vector<uint8_t>& message) override;
  void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) override;
};
class  RemoterAsyncWaiter {
 public:
  explicit RemoterAsyncWaiter(Remoter* proxy);
  ~RemoterAsyncWaiter();
  void EstimateTransmissionCapacity(
      double* out_rate);

 private:
  Remoter* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemoterAsyncWaiter);
};


class  RemotingSourceInterceptorForTesting : public RemotingSource {
  virtual RemotingSource* GetForwardingInterface() = 0;
  void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) override;
  void OnSinkGone() override;
  void OnStarted() override;
  void OnStartFailed(::media::mojom::RemotingStartFailReason reason) override;
  void OnMessageFromSink(const std::vector<uint8_t>& message) override;
  void OnStopped(::media::mojom::RemotingStopReason reason) override;
};
class  RemotingSourceAsyncWaiter {
 public:
  explicit RemotingSourceAsyncWaiter(RemotingSource* proxy);
  ~RemotingSourceAsyncWaiter();

 private:
  RemotingSource* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(RemotingSourceAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_TEST_UTILS_H_