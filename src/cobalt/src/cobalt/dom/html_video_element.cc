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

#include "cobalt/dom/html_video_element.h"

#if !defined(DISABLE_COBALT_MEDIA)

#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "cobalt/dom/dom_settings.h"
#include "cobalt/dom/performance.h"
#include "cobalt/dom/window.h"
#include "cobalt/math/size_f.h"

namespace cobalt {
namespace dom {

using media::VideoFrameProvider;
using media::WebMediaPlayer;

const char HTMLVideoElement::kTagName[] = "video";

HTMLVideoElement::HTMLVideoElement(Document* document)
    : HTMLMediaElement(document, base::Token(kTagName))
{
#if 0
#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  auto taskCb
    = [em_node = &em_node_](const html_native::NativeHTMLTaskCbParams&&)
    {
      DCHECK(em_node);
      //DCHECK(em_node->isNull() || em_node->isUndefined());

      if(em_node && (em_node->isNull() || em_node->isUndefined()))
      {
        printf("Node::HTMLVideoElement\n");
        (*em_node)
          = emscripten::val::global("document").call<emscripten::val>(
              "createElement", emscripten::val("div"));
      } else {
        NOTIMPLEMENTED_LOG_ONCE();
      }
    };

  html_native::NativeHTMLTaskCbParams cbParams{1,2};

  html_native::GlobalHTML5TaskQueue::getInstance()->
    scheduleTaskInMainThread(
      new html_native::NativeHTMLTaskParams{
        std::move(taskCb),
        std::move(cbParams)
      },
      true
    );
#endif
#endif // 0
}

uint32 HTMLVideoElement::width() const {
  uint32 result = 0;
  std::string value_in_string = GetAttribute("width").value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid width attribute: \'" << value_in_string << "\'";
  }
  return result;
}

uint32 HTMLVideoElement::height() const {
  uint32 result = 0;
  std::string value_in_string = GetAttribute("height").value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid height attribute: \'" << value_in_string << "\'";
  }
  return result;
}

void HTMLVideoElement::set_width(uint32 width) {
  SetAttribute("width", base::NumberToString(width));
}

void HTMLVideoElement::set_height(uint32 height) {
  SetAttribute("height", base::NumberToString(height));
}

uint32 HTMLVideoElement::video_width() const {
  if (!player()) {
    return 0u;
  }
  DCHECK_GE(player()->GetNaturalSize().width(), 0);
  return static_cast<uint32>(player()->GetNaturalSize().width());
}

uint32 HTMLVideoElement::video_height() const {
  if (!player()) {
    return 0u;
  }
  DCHECK_GE(player()->GetNaturalSize().height(), 0);
  return static_cast<uint32>(player()->GetNaturalSize().height());
}

scoped_refptr<VideoPlaybackQuality> HTMLVideoElement::GetVideoPlaybackQuality(
    script::EnvironmentSettings* environment_settings) const {
  DOMSettings* dom_settings =
      base::polymorphic_downcast<DOMSettings*>(environment_settings);
  DCHECK(dom_settings);
  DCHECK(dom_settings->window());
  DCHECK(dom_settings->window()->performance());

  if (player()) {
    auto player_stats = player()->GetStatistics();
    return new VideoPlaybackQuality(
        dom_settings->window()->performance()->Now(),
        static_cast<uint32>(player_stats.video_frames_decoded),
        static_cast<uint32>(player_stats.video_frames_dropped));
  } else {
    return new VideoPlaybackQuality(
        dom_settings->window()->performance()->Now(), 0, 0);
  }
}

scoped_refptr<VideoFrameProvider> HTMLVideoElement::GetVideoFrameProvider() {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);
  return player() ? player()->GetVideoFrameProvider() : NULL;
}

WebMediaPlayer::SetBoundsCB HTMLVideoElement::GetSetBoundsCB() {
  return player() ? player()->GetSetBoundsCB() : WebMediaPlayer::SetBoundsCB();
}

math::SizeF HTMLVideoElement::GetVideoSize() const {
  return math::SizeF(video_width(), video_height());
}

}  // namespace dom
}  // namespace cobalt

#endif // !DISABLE_COBALT_MEDIA
