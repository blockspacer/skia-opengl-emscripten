// Copyright 2015 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>

#include "cobalt/media/sandbox/web_media_player_helper.h"

#include "cobalt/media/fetcher_buffered_data_source.h"

namespace cobalt {
namespace media {
namespace sandbox {

class WebMediaPlayerHelper::WebMediaPlayerClientStub
    : public WebMediaPlayerClient {
 public:
  WebMediaPlayerClientStub() {}
  explicit WebMediaPlayerClientStub(
      const ChunkDemuxerOpenCB& chunk_demuxer_open_cb)
      : chunk_demuxer_open_cb_(chunk_demuxer_open_cb) {
    DCHECK(!chunk_demuxer_open_cb_.is_null());
  }
  ~WebMediaPlayerClientStub() {}

 private:
  // WebMediaPlayerClient methods
  void NetworkStateChanged() override {}
  void NetworkError(const std::string&) override {}
  void ReadyStateChanged() override {}
  void TimeChanged(bool) override {}
  void DurationChanged() override {}
  void OutputModeChanged() override {}
  void ContentSizeChanged() override {}
  void PlaybackStateChanged() override {}
  void SawUnsupportedTracks() override {}
  float Volume() const override { return 1.f; }
  void SourceOpened(ChunkDemuxer* chunk_demuxer) override {
    DCHECK(!chunk_demuxer_open_cb_.is_null());
    chunk_demuxer_open_cb_.Run(chunk_demuxer);
  }
  std::string SourceURL() const override { return ""; }
  std::string MaxVideoCapabilities() const override { return std::string(); };
  bool PreferDecodeToTexture() { return true; }

  void EncryptedMediaInitDataEncountered(EmeInitDataType, const unsigned char*,
                                         unsigned) override {}

  ChunkDemuxerOpenCB chunk_demuxer_open_cb_;
};

WebMediaPlayerHelper::WebMediaPlayerHelper(MediaModule* media_module,
                                           const ChunkDemuxerOpenCB& open_cb)
    : client_(new WebMediaPlayerClientStub(open_cb)),
      player_(media_module->CreateWebMediaPlayer(client_)) {
  player_->SetRate(1.0);
  player_->LoadMediaSource();
  player_->Play();
}

WebMediaPlayerHelper::WebMediaPlayerHelper(
    MediaModule* media_module, loader::FetcherFactory* fetcher_factory,
    const GURL& video_url)
    : client_(new WebMediaPlayerClientStub),
      player_(media_module->CreateWebMediaPlayer(client_)) {
  player_->SetRate(1.0);
  std::unique_ptr<BufferedDataSource> data_source(new FetcherBufferedDataSource(
      base::MessageLoop::current()->task_runner(), video_url,
      csp::SecurityCallback(), fetcher_factory->network_module(),
      loader::kNoCORSMode, loader::Origin()));
  player_->LoadProgressive(video_url, std::move(data_source));
  player_->Play();
}

WebMediaPlayerHelper::~WebMediaPlayerHelper() {
  player_.reset();
  delete client_;
}

SbDecodeTarget WebMediaPlayerHelper::GetCurrentDecodeTarget() const {
  return player_->GetVideoFrameProvider()->GetCurrentSbDecodeTarget();
}

bool WebMediaPlayerHelper::IsPlaybackFinished() const {
  // Use a small epsilon to ensure that the video can finish properly even when
  // the audio and video streams are shorter than the duration specified in the
  // container.
  return player_->GetCurrentTime() >= player_->GetDuration() - 0.1f;
}

}  // namespace sandbox
}  // namespace media
}  // namespace cobalt
