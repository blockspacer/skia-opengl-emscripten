// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/media_log.mojom.h"


namespace media {
namespace mojom {


class  MediaLogInterceptorForTesting : public MediaLog {
  virtual MediaLog* GetForwardingInterface() = 0;
  void AddEvent(const media::MediaLogEvent& event) override;
};
class  MediaLogAsyncWaiter {
 public:
  explicit MediaLogAsyncWaiter(MediaLog* proxy);
  ~MediaLogAsyncWaiter();

 private:
  MediaLog* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(MediaLogAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_LOG_MOJOM_TEST_UTILS_H_