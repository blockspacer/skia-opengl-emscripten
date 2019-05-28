// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 968875970 value is based on sha256(salt + "RemoterFactory1").
constexpr uint32_t kRemoterFactory_Create_Name = 968875970;
// The 518589867 value is based on sha256(salt + "RemotingDataStreamSender1").
constexpr uint32_t kRemotingDataStreamSender_SendFrame_Name = 518589867;
// The 1397044203 value is based on sha256(salt + "RemotingDataStreamSender2").
constexpr uint32_t kRemotingDataStreamSender_CancelInFlightData_Name = 1397044203;
// The 870258448 value is based on sha256(salt + "Remoter1").
constexpr uint32_t kRemoter_Start_Name = 870258448;
// The 985493844 value is based on sha256(salt + "Remoter2").
constexpr uint32_t kRemoter_StartDataStreams_Name = 985493844;
// The 6260373 value is based on sha256(salt + "Remoter3").
constexpr uint32_t kRemoter_Stop_Name = 6260373;
// The 185285829 value is based on sha256(salt + "Remoter4").
constexpr uint32_t kRemoter_SendMessageToSink_Name = 185285829;
// The 835548549 value is based on sha256(salt + "Remoter5").
constexpr uint32_t kRemoter_EstimateTransmissionCapacity_Name = 835548549;
// The 392344955 value is based on sha256(salt + "RemotingSource1").
constexpr uint32_t kRemotingSource_OnSinkAvailable_Name = 392344955;
// The 209124324 value is based on sha256(salt + "RemotingSource2").
constexpr uint32_t kRemotingSource_OnSinkGone_Name = 209124324;
// The 1286766392 value is based on sha256(salt + "RemotingSource3").
constexpr uint32_t kRemotingSource_OnStarted_Name = 1286766392;
// The 798837915 value is based on sha256(salt + "RemotingSource4").
constexpr uint32_t kRemotingSource_OnStartFailed_Name = 798837915;
// The 2005603776 value is based on sha256(salt + "RemotingSource5").
constexpr uint32_t kRemotingSource_OnMessageFromSink_Name = 2005603776;
// The 167576385 value is based on sha256(salt + "RemotingSource6").
constexpr uint32_t kRemotingSource_OnStopped_Name = 167576385;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_SHARED_MESSAGE_IDS_H_