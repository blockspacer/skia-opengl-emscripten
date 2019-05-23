// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_H_

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
#include "media/mojo/interfaces/video_decode_perf_history.mojom-shared.h"
#include "media/mojo/interfaces/video_decode_perf_history.mojom-forward.h"
#include "media/mojo/interfaces/media_types.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
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

class VideoDecodePerfHistoryProxy;

template <typename ImplRefTraits>
class VideoDecodePerfHistoryStub;

class VideoDecodePerfHistoryRequestValidator;
class VideoDecodePerfHistoryResponseValidator;


class  VideoDecodePerfHistory
    : public VideoDecodePerfHistoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VideoDecodePerfHistoryInterfaceBase;
  using Proxy_ = VideoDecodePerfHistoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecodePerfHistoryStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecodePerfHistoryRequestValidator;
  using ResponseValidator_ = VideoDecodePerfHistoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetPerfInfoMinVersion = 0,
  };
  virtual ~VideoDecodePerfHistory() {}


  using GetPerfInfoCallback = base::OnceCallback<void(bool, bool)>;
  
  virtual void GetPerfInfo(::media::mojom::PredictionFeaturesPtr features, GetPerfInfoCallback callback) = 0;
};

class  VideoDecodePerfHistoryProxy
    : public VideoDecodePerfHistory {
 public:
  using InterfaceType = VideoDecodePerfHistory;

  explicit VideoDecodePerfHistoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPerfInfo(::media::mojom::PredictionFeaturesPtr features, GetPerfInfoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoDecodePerfHistoryStubDispatch {
 public:
  static bool Accept(VideoDecodePerfHistory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecodePerfHistory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecodePerfHistory>>
class VideoDecodePerfHistoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecodePerfHistoryStub() {}
  ~VideoDecodePerfHistoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodePerfHistoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodePerfHistoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoDecodePerfHistoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoDecodePerfHistoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_H_