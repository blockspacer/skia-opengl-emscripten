// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/modules/event_target_modules_names.json5


#include "third_party/blink/renderer/modules/event_target_modules_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace event_target_names {

void* modulesnames_storage[kModulesNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAudioContext = reinterpret_cast<AtomicString*>(&modulesnames_storage)[0];
const AtomicString& kAudioNode = reinterpret_cast<AtomicString*>(&modulesnames_storage)[1];
const AtomicString& kBackgroundFetchRegistration = reinterpret_cast<AtomicString*>(&modulesnames_storage)[2];
const AtomicString& kBatteryManager = reinterpret_cast<AtomicString*>(&modulesnames_storage)[3];
const AtomicString& kBluetooth = reinterpret_cast<AtomicString*>(&modulesnames_storage)[4];
const AtomicString& kBluetoothDevice = reinterpret_cast<AtomicString*>(&modulesnames_storage)[5];
const AtomicString& kBluetoothRemoteGATTCharacteristic = reinterpret_cast<AtomicString*>(&modulesnames_storage)[6];
const AtomicString& kCookieStore = reinterpret_cast<AtomicString*>(&modulesnames_storage)[7];
const AtomicString& kFileWriter = reinterpret_cast<AtomicString*>(&modulesnames_storage)[8];
const AtomicString& kHID = reinterpret_cast<AtomicString*>(&modulesnames_storage)[9];
const AtomicString& kHIDDevice = reinterpret_cast<AtomicString*>(&modulesnames_storage)[10];
const AtomicString& kHTMLVideoElementPictureInPicture = reinterpret_cast<AtomicString*>(&modulesnames_storage)[11];
const AtomicString& kIDBDatabase = reinterpret_cast<AtomicString*>(&modulesnames_storage)[12];
const AtomicString& kIDBOpenDBRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[13];
const AtomicString& kIDBRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[14];
const AtomicString& kIDBTransaction = reinterpret_cast<AtomicString*>(&modulesnames_storage)[15];
const AtomicString& kIdleDetector = reinterpret_cast<AtomicString*>(&modulesnames_storage)[16];
const AtomicString& kImageCapture = reinterpret_cast<AtomicString*>(&modulesnames_storage)[17];
const AtomicString& kMIDIAccess = reinterpret_cast<AtomicString*>(&modulesnames_storage)[18];
const AtomicString& kMIDIInput = reinterpret_cast<AtomicString*>(&modulesnames_storage)[19];
const AtomicString& kMIDIPort = reinterpret_cast<AtomicString*>(&modulesnames_storage)[20];
const AtomicString& kMediaDevices = reinterpret_cast<AtomicString*>(&modulesnames_storage)[21];
const AtomicString& kMediaKeySession = reinterpret_cast<AtomicString*>(&modulesnames_storage)[22];
const AtomicString& kMediaRecorder = reinterpret_cast<AtomicString*>(&modulesnames_storage)[23];
const AtomicString& kMediaSource = reinterpret_cast<AtomicString*>(&modulesnames_storage)[24];
const AtomicString& kMediaStream = reinterpret_cast<AtomicString*>(&modulesnames_storage)[25];
const AtomicString& kMediaStreamTrack = reinterpret_cast<AtomicString*>(&modulesnames_storage)[26];
const AtomicString& kNetworkInformation = reinterpret_cast<AtomicString*>(&modulesnames_storage)[27];
const AtomicString& kNotification = reinterpret_cast<AtomicString*>(&modulesnames_storage)[28];
const AtomicString& kPaymentRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[29];
const AtomicString& kPermissionStatus = reinterpret_cast<AtomicString*>(&modulesnames_storage)[30];
const AtomicString& kPictureInPictureWindow = reinterpret_cast<AtomicString*>(&modulesnames_storage)[31];
const AtomicString& kPresentationAvailability = reinterpret_cast<AtomicString*>(&modulesnames_storage)[32];
const AtomicString& kPresentationConnection = reinterpret_cast<AtomicString*>(&modulesnames_storage)[33];
const AtomicString& kPresentationConnectionList = reinterpret_cast<AtomicString*>(&modulesnames_storage)[34];
const AtomicString& kPresentationRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[35];
const AtomicString& kRTCDTMFSender = reinterpret_cast<AtomicString*>(&modulesnames_storage)[36];
const AtomicString& kRTCDataChannel = reinterpret_cast<AtomicString*>(&modulesnames_storage)[37];
const AtomicString& kRTCDtlsTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[38];
const AtomicString& kRTCIceTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[39];
const AtomicString& kRTCPeerConnection = reinterpret_cast<AtomicString*>(&modulesnames_storage)[40];
const AtomicString& kRTCQuicStream = reinterpret_cast<AtomicString*>(&modulesnames_storage)[41];
const AtomicString& kRTCQuicTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[42];
const AtomicString& kRTCSctpTransport = reinterpret_cast<AtomicString*>(&modulesnames_storage)[43];
const AtomicString& kRemotePlayback = reinterpret_cast<AtomicString*>(&modulesnames_storage)[44];
const AtomicString& kSMSReceiver = reinterpret_cast<AtomicString*>(&modulesnames_storage)[45];
const AtomicString& kScreenOrientation = reinterpret_cast<AtomicString*>(&modulesnames_storage)[46];
const AtomicString& kSensor = reinterpret_cast<AtomicString*>(&modulesnames_storage)[47];
const AtomicString& kSerial = reinterpret_cast<AtomicString*>(&modulesnames_storage)[48];
const AtomicString& kServiceWorker = reinterpret_cast<AtomicString*>(&modulesnames_storage)[49];
const AtomicString& kServiceWorkerContainer = reinterpret_cast<AtomicString*>(&modulesnames_storage)[50];
const AtomicString& kServiceWorkerGlobalScope = reinterpret_cast<AtomicString*>(&modulesnames_storage)[51];
const AtomicString& kServiceWorkerRegistration = reinterpret_cast<AtomicString*>(&modulesnames_storage)[52];
const AtomicString& kSourceBuffer = reinterpret_cast<AtomicString*>(&modulesnames_storage)[53];
const AtomicString& kSourceBufferList = reinterpret_cast<AtomicString*>(&modulesnames_storage)[54];
const AtomicString& kSpeechRecognition = reinterpret_cast<AtomicString*>(&modulesnames_storage)[55];
const AtomicString& kSpeechSynthesis = reinterpret_cast<AtomicString*>(&modulesnames_storage)[56];
const AtomicString& kSpeechSynthesisUtterance = reinterpret_cast<AtomicString*>(&modulesnames_storage)[57];
const AtomicString& kUSB = reinterpret_cast<AtomicString*>(&modulesnames_storage)[58];
const AtomicString& kVRDisplay = reinterpret_cast<AtomicString*>(&modulesnames_storage)[59];
const AtomicString& kWakeLock = reinterpret_cast<AtomicString*>(&modulesnames_storage)[60];
const AtomicString& kWakeLockRequest = reinterpret_cast<AtomicString*>(&modulesnames_storage)[61];
const AtomicString& kWebSocket = reinterpret_cast<AtomicString*>(&modulesnames_storage)[62];
const AtomicString& kXR = reinterpret_cast<AtomicString*>(&modulesnames_storage)[63];
const AtomicString& kXRSession = reinterpret_cast<AtomicString*>(&modulesnames_storage)[64];
const AtomicString& kXRSpace = reinterpret_cast<AtomicString*>(&modulesnames_storage)[65];

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
    { "AudioContext", 5207992, 12 },
    { "AudioNode", 5081561, 9 },
    { "BackgroundFetchRegistration", 8242174, 27 },
    { "BatteryManager", 5049459, 14 },
    { "Bluetooth", 13021927, 9 },
    { "BluetoothDevice", 14102450, 15 },
    { "BluetoothRemoteGATTCharacteristic", 3805326, 33 },
    { "CookieStore", 2537092, 11 },
    { "FileWriter", 15152482, 10 },
    { "HID", 10382381, 3 },
    { "HIDDevice", 13275935, 9 },
    { "HTMLVideoElementPictureInPicture", 14434072, 32 },
    { "IDBDatabase", 1126017, 11 },
    { "IDBOpenDBRequest", 8388818, 16 },
    { "IDBRequest", 16217380, 10 },
    { "IDBTransaction", 13326789, 14 },
    { "IdleDetector", 716762, 12 },
    { "ImageCapture", 3204179, 12 },
    { "MIDIAccess", 13252796, 10 },
    { "MIDIInput", 13226940, 9 },
    { "MIDIPort", 15710269, 8 },
    { "MediaDevices", 7815368, 12 },
    { "MediaKeySession", 1701501, 15 },
    { "MediaRecorder", 9531693, 13 },
    { "MediaSource", 10009800, 11 },
    { "MediaStream", 5095066, 11 },
    { "MediaStreamTrack", 16623886, 16 },
    { "NetworkInformation", 3171974, 18 },
    { "Notification", 7262241, 12 },
    { "PaymentRequest", 7625983, 14 },
    { "PermissionStatus", 4818911, 16 },
    { "PictureInPictureWindow", 5198336, 22 },
    { "PresentationAvailability", 10735288, 24 },
    { "PresentationConnection", 2995870, 22 },
    { "PresentationConnectionList", 14875970, 26 },
    { "PresentationRequest", 4728545, 19 },
    { "RTCDTMFSender", 7965945, 13 },
    { "RTCDataChannel", 16002100, 14 },
    { "RTCDtlsTransport", 1867499, 16 },
    { "RTCIceTransport", 6372167, 15 },
    { "RTCPeerConnection", 11238437, 17 },
    { "RTCQuicStream", 626248, 13 },
    { "RTCQuicTransport", 327077, 16 },
    { "RTCSctpTransport", 13728866, 16 },
    { "RemotePlayback", 14509464, 14 },
    { "SMSReceiver", 16311980, 11 },
    { "ScreenOrientation", 16006315, 17 },
    { "Sensor", 266785, 6 },
    { "Serial", 6663595, 6 },
    { "ServiceWorker", 3155984, 13 },
    { "ServiceWorkerContainer", 6814814, 22 },
    { "ServiceWorkerGlobalScope", 16474009, 24 },
    { "ServiceWorkerRegistration", 11774198, 25 },
    { "SourceBuffer", 3244577, 12 },
    { "SourceBufferList", 5225283, 16 },
    { "SpeechRecognition", 1914212, 17 },
    { "SpeechSynthesis", 9951205, 15 },
    { "SpeechSynthesisUtterance", 12730322, 24 },
    { "USB", 6302079, 3 },
    { "VRDisplay", 2701451, 9 },
    { "WakeLock", 3636704, 8 },
    { "WakeLockRequest", 12715327, 15 },
    { "DOMWebSocket", 15572381, 12 },
    { "XR", 15353191, 2 },
    { "XRSession", 14705135, 9 },
    { "XRSpace", 638017, 7 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&modulesnames_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace event_target_names
}  // namespace blink
