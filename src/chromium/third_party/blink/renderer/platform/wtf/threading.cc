// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/platform/wtf/threading.h"

#include "build/build_config.h"
#include "third_party/blink/renderer/platform/wtf/stack_util.h"
#include "third_party/blink/renderer/platform/wtf/text/atomic_string_table.h"
#include "third_party/blink/renderer/platform/wtf/text/text_codec_icu.h"

namespace WTF {

base::PlatformThreadId CurrentThread() {
  thread_local base::PlatformThreadId g_id = base::PlatformThread::CurrentId();
  return g_id;
}

// For debugging only -- whether a non-main thread has been created.
// No synchronization is required, since this is called before any such thread
// exists.

#if DCHECK_IS_ON()
static bool g_thread_created = false;

bool IsBeforeThreadCreated() {
  return !g_thread_created;
}

void WillCreateThread() {
  g_thread_created = true;
}
#endif

ThreadSpecific<Threading>* Threading::static_data_;

Threading::Threading()
    : atomic_string_table_(new AtomicStringTable),
      cached_converter_icu_(new ICUConverterWrapper),
      thread_id_(CurrentThread()) {}

Threading::~Threading() = default;

void Threading::Initialize() {
  DCHECK(!Threading::static_data_);
  Threading::static_data_ = new ThreadSpecific<Threading>;
  WtfThreading();
}

#if defined(OS_WIN) && defined(COMPILER_MSVC)
size_t Threading::ThreadStackSize() {
  // Needed to bootstrap Threading on Windows, because this value is needed
  // before the main thread data is fully initialized.
  if (!Threading::static_data_->IsSet())
    return internal::ThreadStackSize();

  Threading& data = WtfThreading();
  if (!data.thread_stack_size_)
    data.thread_stack_size_ = internal::ThreadStackSize();
  return data.thread_stack_size_;
}
#endif

}  // namespace WTF
