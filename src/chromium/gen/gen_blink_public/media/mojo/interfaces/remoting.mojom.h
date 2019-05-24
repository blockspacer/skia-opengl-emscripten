// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/mojo/interfaces/remoting.mojom-shared.h"
#include "media/mojo/interfaces/remoting.mojom-forward.h"
#include "media/mojo/interfaces/remoting_common.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {

class RemoterFactoryProxy;

template <typename ImplRefTraits>
class RemoterFactoryStub;

class RemoterFactoryRequestValidator;


class  RemoterFactory
    : public RemoterFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RemoterFactoryInterfaceBase;
  using Proxy_ = RemoterFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoterFactoryStub<ImplRefTraits>;

  using RequestValidator_ = RemoterFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateMinVersion = 0,
  };
  virtual ~RemoterFactory() {}

  
  virtual void Create(RemotingSourcePtr source, RemoterRequest remoter) = 0;
};

class RemotingDataStreamSenderProxy;

template <typename ImplRefTraits>
class RemotingDataStreamSenderStub;

class RemotingDataStreamSenderRequestValidator;


class  RemotingDataStreamSender
    : public RemotingDataStreamSenderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RemotingDataStreamSenderInterfaceBase;
  using Proxy_ = RemotingDataStreamSenderProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingDataStreamSenderStub<ImplRefTraits>;

  using RequestValidator_ = RemotingDataStreamSenderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSendFrameMinVersion = 0,
    kCancelInFlightDataMinVersion = 0,
  };
  virtual ~RemotingDataStreamSender() {}

  
  virtual void SendFrame(uint32_t frame_size) = 0;

  
  virtual void CancelInFlightData() = 0;
};

class RemoterProxy;

template <typename ImplRefTraits>
class RemoterStub;

class RemoterRequestValidator;
class RemoterResponseValidator;


class  Remoter
    : public RemoterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RemoterInterfaceBase;
  using Proxy_ = RemoterProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemoterStub<ImplRefTraits>;

  using RequestValidator_ = RemoterRequestValidator;
  using ResponseValidator_ = RemoterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStartDataStreamsMinVersion = 0,
    kStopMinVersion = 0,
    kSendMessageToSinkMinVersion = 0,
    kEstimateTransmissionCapacityMinVersion = 0,
  };
  virtual ~Remoter() {}

  
  virtual void Start() = 0;

  
  virtual void StartDataStreams(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, RemotingDataStreamSenderRequest audio_sender, RemotingDataStreamSenderRequest video_sender) = 0;

  
  virtual void Stop(::media::mojom::RemotingStopReason reason) = 0;

  
  virtual void SendMessageToSink(const std::vector<uint8_t>& message) = 0;


  using EstimateTransmissionCapacityCallback = base::OnceCallback<void(double)>;
  
  virtual void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) = 0;
};

class RemotingSourceProxy;

template <typename ImplRefTraits>
class RemotingSourceStub;

class RemotingSourceRequestValidator;


class  RemotingSource
    : public RemotingSourceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RemotingSourceInterfaceBase;
  using Proxy_ = RemotingSourceProxy;

  template <typename ImplRefTraits>
  using Stub_ = RemotingSourceStub<ImplRefTraits>;

  using RequestValidator_ = RemotingSourceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnSinkAvailableMinVersion = 0,
    kOnSinkGoneMinVersion = 0,
    kOnStartedMinVersion = 0,
    kOnStartFailedMinVersion = 0,
    kOnMessageFromSinkMinVersion = 0,
    kOnStoppedMinVersion = 0,
  };
  virtual ~RemotingSource() {}

  
  virtual void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) = 0;

  
  virtual void OnSinkGone() = 0;

  
  virtual void OnStarted() = 0;

  
  virtual void OnStartFailed(::media::mojom::RemotingStartFailReason reason) = 0;

  
  virtual void OnMessageFromSink(const std::vector<uint8_t>& message) = 0;

  
  virtual void OnStopped(::media::mojom::RemotingStopReason reason) = 0;
};

class  RemoterFactoryProxy
    : public RemoterFactory {
 public:
  using InterfaceType = RemoterFactory;

  explicit RemoterFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void Create(RemotingSourcePtr source, RemoterRequest remoter) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  RemotingDataStreamSenderProxy
    : public RemotingDataStreamSender {
 public:
  using InterfaceType = RemotingDataStreamSender;

  explicit RemotingDataStreamSenderProxy(mojo::MessageReceiverWithResponder* receiver);
  void SendFrame(uint32_t frame_size) final;
  void CancelInFlightData() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  RemoterProxy
    : public Remoter {
 public:
  using InterfaceType = Remoter;

  explicit RemoterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start() final;
  void StartDataStreams(mojo::ScopedDataPipeConsumerHandle audio_pipe, mojo::ScopedDataPipeConsumerHandle video_pipe, RemotingDataStreamSenderRequest audio_sender, RemotingDataStreamSenderRequest video_sender) final;
  void Stop(::media::mojom::RemotingStopReason reason) final;
  void SendMessageToSink(const std::vector<uint8_t>& message) final;
  void EstimateTransmissionCapacity(EstimateTransmissionCapacityCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  RemotingSourceProxy
    : public RemotingSource {
 public:
  using InterfaceType = RemotingSource;

  explicit RemotingSourceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnSinkAvailable(::media::mojom::RemotingSinkMetadataPtr metadata) final;
  void OnSinkGone() final;
  void OnStarted() final;
  void OnStartFailed(::media::mojom::RemotingStartFailReason reason) final;
  void OnMessageFromSink(const std::vector<uint8_t>& message) final;
  void OnStopped(::media::mojom::RemotingStopReason reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RemoterFactoryStubDispatch {
 public:
  static bool Accept(RemoterFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemoterFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemoterFactory>>
class RemoterFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoterFactoryStub() {}
  ~RemoterFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingDataStreamSenderStubDispatch {
 public:
  static bool Accept(RemotingDataStreamSender* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingDataStreamSender* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingDataStreamSender>>
class RemotingDataStreamSenderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingDataStreamSenderStub() {}
  ~RemotingDataStreamSenderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingDataStreamSenderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingDataStreamSenderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemoterStubDispatch {
 public:
  static bool Accept(Remoter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Remoter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Remoter>>
class RemoterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemoterStub() {}
  ~RemoterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemoterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemotingSourceStubDispatch {
 public:
  static bool Accept(RemotingSource* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RemotingSource* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RemotingSource>>
class RemotingSourceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RemotingSourceStub() {}
  ~RemotingSourceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingSourceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RemotingSourceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RemoterFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemotingDataStreamSenderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemoterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemotingSourceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RemoterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_REMOTING_MOJOM_H_