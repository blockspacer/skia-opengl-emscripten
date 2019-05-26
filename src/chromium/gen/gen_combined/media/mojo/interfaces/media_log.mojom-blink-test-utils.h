// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/media_log.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaLogInterceptorForTesting : public MediaLog {
  virtual MediaLog* GetForwardingInterface() = 0;
  void AddEvent(::media::mojom::blink::MediaLogEventPtr event) override;
};
class BLINK_PLATFORM_EXPORT MediaLogAsyncWaiter {
 public:
  explicit MediaLogAsyncWaiter(MediaLog* proxy);
  ~MediaLogAsyncWaiter();

 private:
  MediaLog* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaLogAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_BLINK_TEST_UTILS_H_