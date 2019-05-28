// Copyright 2018 The Cobalt Authors. All Rights Reserved.
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

#include "starboard/player.h"

#include "starboard/log.h"
#include "starboard/shared/starboard/player/player_internal.h"
#if SB_PLAYER_ENABLE_VIDEO_DUMPER && SB_HAS(PLAYER_FILTER_TESTS)
#include "starboard/shared/starboard/player/video_dmp_writer.h"
#endif  // SB_PLAYER_ENABLE_VIDEO_DUMPER && SB_HAS(PLAYER_FILTER_TESTS)

#if SB_API_VERSION >= 10
void SbPlayerWriteSample2(SbPlayer player,
                          SbMediaType sample_type,
                          const SbPlayerSampleInfo* sample_infos,
                          int number_of_sample_infos) {
  SB_DCHECK(number_of_sample_infos == 1);

  const void* sample_buffers[] = {sample_infos->buffer};
  const int sample_buffer_sizes[] = {sample_infos->buffer_size};
  int number_of_sample_buffers = 1;
  SbTime sample_timestamp = sample_infos->timestamp;
  auto video_sample_info = sample_infos->video_sample_info;
  auto sample_drm_info = sample_infos->drm_info;

  if (!SbPlayerIsValid(player)) {
    SB_DLOG(WARNING) << "player is invalid.";
    return;
  }

  if (number_of_sample_buffers < 1) {
    SB_DLOG(WARNING) << "SbPlayerWriteSample() doesn't support"
                     << " |number_of_sample_buffers| less than one.";
    return;
  }

#if SB_PLAYER_ENABLE_VIDEO_DUMPER && SB_HAS(PLAYER_FILTER_TESTS)
  using ::starboard::shared::starboard::player::video_dmp::VideoDmpWriter;
  VideoDmpWriter::OnPlayerWriteSample(
      player, sample_type, sample_buffers, sample_buffer_sizes,
      number_of_sample_buffers, sample_timestamp, video_sample_info,
      sample_drm_info);
#endif  // SB_PLAYER_ENABLE_VIDEO_DUMPER && SB_HAS(PLAYER_FILTER_TESTS)

  player->WriteSample(sample_type, sample_buffers, sample_buffer_sizes,
                      number_of_sample_buffers, sample_timestamp,
                      video_sample_info, sample_drm_info);
}
#endif  // SB_API_VERSION >= 10
