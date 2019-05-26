// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   gen/third_party/blink/renderer/modules/event_interface_modules_names.json5


#include "third_party/blink/renderer/modules/event_interface_modules_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace event_interface_names {

void* modulesnames_storage[kModulesNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAbortPaymentEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[0];
const AtomicString& kAudioProcessingEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[1];
const AtomicString& kBackgroundFetchEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[2];
const AtomicString& kBackgroundFetchUpdateUIEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[3];
const AtomicString& kBeforeInstallPromptEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[4];
const AtomicString& kBlobEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[5];
const AtomicString& kCanMakePaymentEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[6];
const AtomicString& kCloseEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[7];
const AtomicString& kCookieChangeEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[8];
const AtomicString& kDeviceMotionEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[9];
const AtomicString& kDeviceOrientationEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[10];
const AtomicString& kEnterPictureInPictureEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[11];
const AtomicString& kExtendableCookieChangeEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[12];
const AtomicString& kExtendableEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[13];
const AtomicString& kExtendableMessageEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[14];
const AtomicString& kFetchEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[15];
const AtomicString& kGamepadAxisEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[16];
const AtomicString& kGamepadButtonEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[17];
const AtomicString& kGamepadEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[18];
const AtomicString& kIDBVersionChangeEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[19];
const AtomicString& kInstallEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[20];
const AtomicString& kMIDIConnectionEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[21];
const AtomicString& kMIDIMessageEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[22];
const AtomicString& kMediaEncryptedEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[23];
const AtomicString& kMediaKeyMessageEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[24];
const AtomicString& kMediaStreamEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[25];
const AtomicString& kMediaStreamTrackEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[26];
const AtomicString& kMerchantValidationEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[27];
const AtomicString& kNotificationEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[28];
const AtomicString& kOfflineAudioCompletionEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[29];
const AtomicString& kPaymentMethodChangeEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[30];
const AtomicString& kPaymentMethodChangeResponse = reinterpret_cast<AtomicString*>(&modulesnames_storage)[31];
const AtomicString& kPaymentRequestEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[32];
const AtomicString& kPaymentRequestUpdateEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[33];
const AtomicString& kPresentationConnectionAvailableEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[34];
const AtomicString& kPresentationConnectionCloseEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[35];
const AtomicString& kPushEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[36];
const AtomicString& kRTCDTMFToneChangeEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[37];
const AtomicString& kRTCDataChannelEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[38];
const AtomicString& kRTCPeerConnectionIceEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[39];
const AtomicString& kRTCQuicStreamEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[40];
const AtomicString& kSensorErrorEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[41];
const AtomicString& kSpeechRecognitionError = reinterpret_cast<AtomicString*>(&modulesnames_storage)[42];
const AtomicString& kSpeechRecognitionEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[43];
const AtomicString& kSpeechSynthesisErrorEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[44];
const AtomicString& kSpeechSynthesisEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[45];
const AtomicString& kStorageEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[46];
const AtomicString& kSyncEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[47];
const AtomicString& kVRDisplayEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[48];
const AtomicString& kWebGLContextEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[49];
const AtomicString& kXRInputSourceEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[50];
const AtomicString& kXRReferenceSpaceEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[51];
const AtomicString& kXRSessionEvent = reinterpret_cast<AtomicString*>(&modulesnames_storage)[52];

void InitModules() {
  static bool is_loaded = false;
  if (is_loaded) return;
  is_loaded = true;

  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
  };

  static const NameEntry kNames[] = {
    { "AbortPaymentEvent", 8840685, 17 },
    { "AudioProcessingEvent", 9607128, 20 },
    { "BackgroundFetchEvent", 4918435, 20 },
    { "BackgroundFetchUpdateUIEvent", 5157054, 28 },
    { "BeforeInstallPromptEvent", 4066404, 24 },
    { "BlobEvent", 11517662, 9 },
    { "CanMakePaymentEvent", 3154110, 19 },
    { "CloseEvent", 11722244, 10 },
    { "CookieChangeEvent", 10108494, 17 },
    { "DeviceMotionEvent", 12345260, 17 },
    { "DeviceOrientationEvent", 858735, 22 },
    { "EnterPictureInPictureEvent", 12494415, 26 },
    { "ExtendableCookieChangeEvent", 515089, 27 },
    { "ExtendableEvent", 2731257, 15 },
    { "ExtendableMessageEvent", 4738899, 22 },
    { "FetchEvent", 6447122, 10 },
    { "GamepadAxisEvent", 6202116, 16 },
    { "GamepadButtonEvent", 15151151, 18 },
    { "GamepadEvent", 11020890, 12 },
    { "IDBVersionChangeEvent", 7770749, 21 },
    { "InstallEvent", 13461741, 12 },
    { "MIDIConnectionEvent", 5515626, 19 },
    { "MIDIMessageEvent", 12787442, 16 },
    { "MediaEncryptedEvent", 13703864, 19 },
    { "MediaKeyMessageEvent", 4827241, 20 },
    { "MediaStreamEvent", 328267, 16 },
    { "MediaStreamTrackEvent", 13109664, 21 },
    { "MerchantValidationEvent", 3287981, 23 },
    { "NotificationEvent", 8638709, 17 },
    { "OfflineAudioCompletionEvent", 6072331, 27 },
    { "PaymentMethodChangeEvent", 8767784, 24 },
    { "PaymentMethodChangeResponse", 16221549, 27 },
    { "PaymentRequestEvent", 303922, 19 },
    { "PaymentRequestUpdateEvent", 6504900, 25 },
    { "PresentationConnectionAvailableEvent", 12337962, 36 },
    { "PresentationConnectionCloseEvent", 7051740, 32 },
    { "PushEvent", 508183, 9 },
    { "RTCDTMFToneChangeEvent", 16457152, 22 },
    { "RTCDataChannelEvent", 1105547, 19 },
    { "RTCPeerConnectionIceEvent", 11405375, 25 },
    { "RTCQuicStreamEvent", 15513225, 18 },
    { "SensorErrorEvent", 7058930, 16 },
    { "SpeechRecognitionError", 13037355, 22 },
    { "SpeechRecognitionEvent", 6869292, 22 },
    { "SpeechSynthesisErrorEvent", 1972136, 25 },
    { "SpeechSynthesisEvent", 17758, 20 },
    { "StorageEvent", 5246637, 12 },
    { "SyncEvent", 5657331, 9 },
    { "VRDisplayEvent", 1333207, 14 },
    { "WebGLContextEvent", 8713913, 17 },
    { "XRInputSourceEvent", 15246074, 18 },
    { "XRReferenceSpaceEvent", 11421455, 21 },
    { "XRSessionEvent", 12077765, 14 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&modulesnames_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace event_interface_names
}  // namespace blink
