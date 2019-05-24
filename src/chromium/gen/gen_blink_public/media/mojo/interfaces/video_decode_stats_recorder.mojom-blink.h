// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-shared.h"
#include "media/mojo/interfaces/video_decode_stats_recorder.mojom-blink-forward.h"
#include "media/mojo/interfaces/media_types.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace media {
namespace mojom {
namespace blink {

class VideoDecodeStatsRecorderProxy;

template <typename ImplRefTraits>
class VideoDecodeStatsRecorderStub;

class VideoDecodeStatsRecorderRequestValidator;


class BLINK_PLATFORM_EXPORT VideoDecodeStatsRecorder
    : public VideoDecodeStatsRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VideoDecodeStatsRecorderInterfaceBase;
  using Proxy_ = VideoDecodeStatsRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoDecodeStatsRecorderStub<ImplRefTraits>;

  using RequestValidator_ = VideoDecodeStatsRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartNewRecordMinVersion = 0,
    kUpdateRecordMinVersion = 0,
  };
  virtual ~VideoDecodeStatsRecorder() {}

  
  virtual void StartNewRecord(::media::mojom::blink::PredictionFeaturesPtr features) = 0;

  
  virtual void UpdateRecord(::media::mojom::blink::PredictionTargetsPtr targets) = 0;
};

class BLINK_PLATFORM_EXPORT VideoDecodeStatsRecorderProxy
    : public VideoDecodeStatsRecorder {
 public:
  using InterfaceType = VideoDecodeStatsRecorder;

  explicit VideoDecodeStatsRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartNewRecord(::media::mojom::blink::PredictionFeaturesPtr features) final;
  void UpdateRecord(::media::mojom::blink::PredictionTargetsPtr targets) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT VideoDecodeStatsRecorderStubDispatch {
 public:
  static bool Accept(VideoDecodeStatsRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoDecodeStatsRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoDecodeStatsRecorder>>
class VideoDecodeStatsRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoDecodeStatsRecorderStub() {}
  ~VideoDecodeStatsRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeStatsRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoDecodeStatsRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT VideoDecodeStatsRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_BLINK_H_