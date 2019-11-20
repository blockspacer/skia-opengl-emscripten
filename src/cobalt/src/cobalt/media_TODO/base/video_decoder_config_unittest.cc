// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cobalt/media/base/video_decoder_config.h"

#include "cobalt/media/base/limits.h"
#include "cobalt/media/base/media_util.h"
#include "cobalt/media/base/video_util.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace cobalt {
namespace media {

static const VideoPixelFormat kVideoFormat = PIXEL_FORMAT_YV12;
static const cobalt::math::Size kCodedSize(320, 240);
static const cobalt::math::Rect kVisibleRect(320, 240);
static const cobalt::math::Size kNaturalSize(320, 240);

TEST(VideoDecoderConfigTest, Invalid_UnsupportedPixelFormat) {
  VideoDecoderConfig config(kCodecVP8, VIDEO_CODEC_PROFILE_UNKNOWN,
                            PIXEL_FORMAT_UNKNOWN, COLOR_SPACE_UNSPECIFIED,
                            kCodedSize, kVisibleRect, kNaturalSize,
                            EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

TEST(VideoDecoderConfigTest, Invalid_AspectRatioNumeratorZero) {
  cobalt::math::Size natural_size = GetNaturalSize(kVisibleRect.size(), 0, 1);
  VideoDecoderConfig config(kCodecVP8, VP8PROFILE_ANY, kVideoFormat,
                            COLOR_SPACE_UNSPECIFIED, kCodedSize, kVisibleRect,
                            natural_size, EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

TEST(VideoDecoderConfigTest, Invalid_AspectRatioDenominatorZero) {
  cobalt::math::Size natural_size = GetNaturalSize(kVisibleRect.size(), 1, 0);
  VideoDecoderConfig config(kCodecVP8, VP8PROFILE_ANY, kVideoFormat,
                            COLOR_SPACE_UNSPECIFIED, kCodedSize, kVisibleRect,
                            natural_size, EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

TEST(VideoDecoderConfigTest, Invalid_AspectRatioNumeratorNegative) {
  cobalt::math::Size natural_size = GetNaturalSize(kVisibleRect.size(), -1, 1);
  VideoDecoderConfig config(kCodecVP8, VP8PROFILE_ANY, kVideoFormat,
                            COLOR_SPACE_UNSPECIFIED, kCodedSize, kVisibleRect,
                            natural_size, EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

TEST(VideoDecoderConfigTest, Invalid_AspectRatioDenominatorNegative) {
  cobalt::math::Size natural_size = GetNaturalSize(kVisibleRect.size(), 1, -1);
  VideoDecoderConfig config(kCodecVP8, VP8PROFILE_ANY, kVideoFormat,
                            COLOR_SPACE_UNSPECIFIED, kCodedSize, kVisibleRect,
                            natural_size, EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

TEST(VideoDecoderConfigTest, Invalid_AspectRatioNumeratorTooLarge) {
  int width = kVisibleRect.size().width();
  int num = ceil(static_cast<double>(limits::kMaxDimension + 1) / width);
  cobalt::math::Size natural_size = GetNaturalSize(kVisibleRect.size(), num, 1);
  VideoDecoderConfig config(kCodecVP8, VP8PROFILE_ANY, kVideoFormat,
                            COLOR_SPACE_UNSPECIFIED, kCodedSize, kVisibleRect,
                            natural_size, EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

TEST(VideoDecoderConfigTest, Invalid_AspectRatioDenominatorTooLarge) {
  // Denominator is large enough that the natural size height will be zero.
  int den = 2 * kVisibleRect.size().width() + 1;
  cobalt::math::Size natural_size = GetNaturalSize(kVisibleRect.size(), 1, den);
  EXPECT_EQ(0, natural_size.width());
  VideoDecoderConfig config(kCodecVP8, VP8PROFILE_ANY, kVideoFormat,
                            COLOR_SPACE_UNSPECIFIED, kCodedSize, kVisibleRect,
                            natural_size, EmptyExtraData(), Unencrypted());
  EXPECT_FALSE(config.IsValidConfig());
}

}  // namespace media
}  // namespace cobalt
