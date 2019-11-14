/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "third_party/blink/public/platform/web_network_state_notifier.h"
#if defined(ENABLE_GNET)
#include "third_party/blink/renderer/platform/network/network_state_notifier.h"
#endif // ENABLE_GNET

namespace blink {

void WebNetworkStateNotifier::SetOnLine(bool on_line) {
#if defined(ENABLE_GNET)
  GetNetworkStateNotifier().SetOnLine(on_line);
#endif // ENABLE_GNET
}

void WebNetworkStateNotifier::SetWebConnection(WebConnectionType type,
                                               double max_bandwidth_mbps) {
#if defined(ENABLE_GNET)
  GetNetworkStateNotifier().SetWebConnection(type, max_bandwidth_mbps);
#endif // ENABLE_GNET
}

void WebNetworkStateNotifier::SetNetworkQuality(WebEffectiveConnectionType type,
                                                base::TimeDelta http_rtt,
                                                base::TimeDelta transport_rtt,
                                                int downlink_throughput_kbps) {
#if defined(ENABLE_GNET)
  GetNetworkStateNotifier().SetNetworkQuality(type, http_rtt, transport_rtt,
                                              downlink_throughput_kbps);
#endif // ENABLE_GNET
}

void WebNetworkStateNotifier::SetNetworkQualityWebHoldback(
    WebEffectiveConnectionType type) {
#if defined(ENABLE_GNET)
  GetNetworkStateNotifier().SetNetworkQualityWebHoldback(type);
#endif // ENABLE_GNET
}

void WebNetworkStateNotifier::SetSaveDataEnabled(bool enabled) {
#if defined(ENABLE_GNET)
  GetNetworkStateNotifier().SetSaveDataEnabled(enabled);
#endif // ENABLE_GNET
}

bool WebNetworkStateNotifier::SaveDataEnabled() {
#if defined(ENABLE_GNET)
  return GetNetworkStateNotifier().SaveDataEnabled();
#else
  return false;
#endif // ENABLE_GNET
}

}  // namespace blink
