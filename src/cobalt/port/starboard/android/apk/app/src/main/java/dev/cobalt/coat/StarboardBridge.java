// Copyright 2017 The Cobalt Authors. All Rights Reserved.
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

package dev.cobalt.coat;

import static android.content.Context.AUDIO_SERVICE;
import static android.media.AudioManager.GET_DEVICES_INPUTS;
import static dev.cobalt.util.Log.TAG;

import android.annotation.TargetApi;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.media.AudioDeviceInfo;
import android.media.AudioManager;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Build;
import android.util.Size;
import android.view.WindowManager;
import android.view.accessibility.AccessibilityManager;
import android.view.accessibility.CaptioningManager;
import dev.cobalt.account.UserAuthorizer;
import dev.cobalt.feedback.FeedbackService;
import dev.cobalt.media.AudioOutputManager;
import dev.cobalt.media.CaptionSettings;
import dev.cobalt.media.CobaltMediaSession;
import dev.cobalt.media.MediaImage;
import dev.cobalt.util.DisplayUtil;
import dev.cobalt.util.Holder;
import dev.cobalt.util.Log;
import dev.cobalt.util.UsedByNative;
import java.lang.reflect.Method;
import java.util.HashMap;
import java.util.Locale;

/** Implementation of the required JNI methods called by the Starboard C++ code. */
public class StarboardBridge {

  /** Interface to be implemented by the Android Application hosting the starboard app. */
  public interface HostApplication {
    void setStarboardBridge(StarboardBridge starboardBridge);

    StarboardBridge getStarboardBridge();
  }

  private CobaltSystemConfigChangeReceiver sysConfigChangeReceiver;
  private CobaltTextToSpeechHelper ttsHelper;
  private UserAuthorizer userAuthorizer;
  private FeedbackService feedbackService;
  private AudioOutputManager audioOutputManager;
  private CobaltMediaSession cobaltMediaSession;
  private VoiceRecognizer voiceRecognizer;
  private AudioPermissionRequester audioPermissionRequester;
  private KeyboardEditor keyboardEditor;

  static {
    // Even though NativeActivity already loads our library from C++,
    // we still have to load it from Java to make JNI calls into it.
    System.loadLibrary("coat");
  }

  private final Context appContext;
  private final Holder<Activity> activityHolder;
  private final String[] args;
  private final String startDeepLink;
  private final Runnable stopRequester =
      new Runnable() {
        @Override
        public void run() {
          requestStop(0);
        }
      };

  private volatile boolean starboardStopped = false;

  private final HashMap<String, CobaltService.Factory> cobaltServiceFactories = new HashMap<>();
  private final HashMap<String, CobaltService> cobaltServices = new HashMap<>();

  public StarboardBridge(
      Context appContext,
      Holder<Activity> activityHolder,
      UserAuthorizer userAuthorizer,
      FeedbackService feedbackService,
      String[] args,
      String startDeepLink) {

    // Make sure the JNI stack is properly initialized first as there is
    // race condition as soon as any of the following objects creates a new thread.
    nativeInitialize();

    this.appContext = appContext;
    this.activityHolder = activityHolder;
    this.args = args;
    this.startDeepLink = startDeepLink;
    this.sysConfigChangeReceiver = new CobaltSystemConfigChangeReceiver(appContext, stopRequester);
    this.ttsHelper = new CobaltTextToSpeechHelper(appContext, stopRequester);
    this.userAuthorizer = userAuthorizer;
    this.feedbackService = feedbackService;
    this.audioOutputManager = new AudioOutputManager(appContext);
    this.cobaltMediaSession =
        new CobaltMediaSession(appContext, activityHolder, audioOutputManager);
    this.audioPermissionRequester = new AudioPermissionRequester(appContext, activityHolder);
    this.voiceRecognizer =
        new VoiceRecognizer(appContext, activityHolder, audioPermissionRequester);
  }

  private native boolean nativeInitialize();

  protected void onActivityStart(Activity activity, KeyboardEditor keyboardEditor) {
    activityHolder.set(activity);
    this.keyboardEditor = keyboardEditor;
    sysConfigChangeReceiver.setForeground(true);
  }

  protected void onActivityStop(Activity activity) {
    if (activityHolder.get() == activity) {
      activityHolder.set(null);
    }
    sysConfigChangeReceiver.setForeground(false);
  }

  protected void onActivityDestroy(Activity activity) {
    if (starboardStopped) {
      // We can't restart the starboard app, so kill the process for a clean start next time.
      Log.i(TAG, "Activity destroyed after shutdown; killing app.");
      System.exit(0);
    } else {
      Log.i(TAG, "Activity destroyed without shutdown; app suspended in background.");
    }
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void beforeStartOrResume() {
    Log.i(TAG, "Prepare to resume");
    // Bring our platform services to life before resuming so that they're ready to deal with
    // whatever the web app wants to do with them as part of its start/resume logic.
    cobaltMediaSession.resume();
    feedbackService.connect();
    for (CobaltService service : cobaltServices.values()) {
      service.beforeStartOrResume();
    }
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void beforeSuspend() {
    Log.i(TAG, "Prepare to suspend");
    // We want the MediaSession to be deactivated immediately before suspending so that by the time
    // the launcher is visible our "Now Playing" card is already gone. Then Cobalt and the web app
    // can take their time suspending after that.
    cobaltMediaSession.suspend();
    feedbackService.disconnect();
    for (CobaltService service : cobaltServices.values()) {
      service.beforeSuspend();
    }
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void afterStopped() {
    starboardStopped = true;
    ttsHelper.shutdown();
    userAuthorizer.shutdown();
    for (CobaltService service : cobaltServices.values()) {
      service.afterStopped();
    }
    Activity activity = activityHolder.get();
    if (activity != null) {
      // Wait until the activity is destroyed to exit.
      Log.i(TAG, "Shutdown in foreground; finishing Activity and removing task.");
      activity.finishAndRemoveTask();
    } else {
      // We can't restart the starboard app, so kill the process for a clean start next time.
      Log.i(TAG, "Shutdown in background; killing app without removing task.");
      System.exit(0);
    }
  }

  @SuppressWarnings("unused")
  @UsedByNative
  public void requestStop(int errorLevel) {
    if (!starboardStopped) {
      nativeStopApp(errorLevel);
    }
  }

  private native void nativeStopApp(int errorLevel);

  @SuppressWarnings("unused")
  @UsedByNative
  public void requestSuspend() {
    Activity activity = activityHolder.get();
    if (activity != null) {
      activity.finish();
    }
  }

  public boolean onSearchRequested() {
    return nativeOnSearchRequested();
  }

  private native boolean nativeOnSearchRequested();

  @SuppressWarnings("unused")
  @UsedByNative
  public Context getApplicationContext() {
    return appContext;
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void raisePlatformError(@PlatformError.ErrorType int errorType, long data) {
    PlatformError error = new PlatformError(activityHolder, errorType, data);
    error.raise();
  }

  /** Returns true if the native code is compiled for release (i.e. 'gold' build). */
  public static boolean isReleaseBuild() {
    return nativeIsReleaseBuild();
  }

  private static native boolean nativeIsReleaseBuild();

  protected Holder<Activity> getActivityHolder() {
    return activityHolder;
  }

  @SuppressWarnings("unused")
  @UsedByNative
  protected String[] getArgs() {
    return args;
  }

  /** Returns the URL from the Intent that started the app. */
  @SuppressWarnings("unused")
  @UsedByNative
  protected String getStartDeepLink() {
    return startDeepLink;
  }

  /** Sends an event to the web app to navigate to the given URL */
  public void handleDeepLink(String url) {
    nativeHandleDeepLink(url);
  }

  private native void nativeHandleDeepLink(String url);

  /**
   * Returns the absolute path to the directory where application specific files should be written.
   * May be overridden for use cases that need to segregate storage.
   */
  @SuppressWarnings("unused")
  @UsedByNative
  protected String getFilesAbsolutePath() {
    return appContext.getFilesDir().getAbsolutePath();
  }

  /**
   * Returns the absolute path to the application specific cache directory on the filesystem. May be
   * overridden for use cases that need to segregate storage.
   */
  @SuppressWarnings("unused")
  @UsedByNative
  protected String getCacheAbsolutePath() {
    return appContext.getCacheDir().getAbsolutePath();
  }

  @SuppressWarnings("unused")
  @UsedByNative
  CobaltTextToSpeechHelper getTextToSpeechHelper() {
    return ttsHelper;
  }

  /** @return A new CaptionSettings object with the current system caption settings. */
  @SuppressWarnings("unused")
  @UsedByNative
  CaptionSettings getCaptionSettings() {
    CaptioningManager cm =
        (CaptioningManager) appContext.getSystemService(Context.CAPTIONING_SERVICE);
    return new CaptionSettings(cm);
  }

  /** Java-layer implementation of SbSystemGetLocaleId. */
  @SuppressWarnings("unused")
  @UsedByNative
  String systemGetLocaleId() {
    return Locale.getDefault().toLanguageTag();
  }

  @SuppressWarnings("unused")
  @UsedByNative
  Size getDisplaySize() {
    return DisplayUtil.getSystemDisplaySize(appContext);
  }

  /**
   * Checks if there is no microphone connected to the system.
   *
   * @return true if no device is connected.
   */
  @SuppressWarnings("unused")
  @UsedByNative
  public boolean isMicrophoneDisconnected() {
    if (Build.VERSION.SDK_INT >= 23) {
      return !isMicrophoneConnectedV23();
    } else {
      // There is no way of checking for a connected microphone/device before API 23, so cannot
      // guarantee that no microphone is connected.
      return false;
    }
  }

  @TargetApi(23)
  private boolean isMicrophoneConnectedV23() {
    // A check specifically for microphones is not available before API 28, so it is assumed that a
    // connected input audio device is a microphone.
    AudioManager audioManager = (AudioManager) appContext.getSystemService(AUDIO_SERVICE);
    AudioDeviceInfo[] devices = audioManager.getDevices(GET_DEVICES_INPUTS);
    return devices.length > 0;
  }

  /**
   * Checks if the microphone is muted.
   *
   * @return true if the microphone mute is on.
   */
  @SuppressWarnings("unused")
  @UsedByNative
  public boolean isMicrophoneMute() {
    AudioManager audioManager = (AudioManager) appContext.getSystemService(AUDIO_SERVICE);
    return audioManager.isMicrophoneMute();
  }

  /** @return true if we have an active network connection and it's on a wireless network. */
  @SuppressWarnings("unused")
  @UsedByNative
  boolean isCurrentNetworkWireless() {
    ConnectivityManager connMgr =
        (ConnectivityManager) appContext.getSystemService(Context.CONNECTIVITY_SERVICE);

    NetworkInfo activeInfo = connMgr.getActiveNetworkInfo();

    if (activeInfo == null) {
      return false;
    }

    switch (activeInfo.getType()) {
      case ConnectivityManager.TYPE_ETHERNET:
        return false;
      default:
        // Consider anything that's not definitely wired to be wireless.
        // For example, TYPE_VPN is ambiguous, but it's highly likely to be
        // over wifi.
        return true;
    }
  }

  /**
   * @return true if the user has enabled accessibility high contrast text in the operating system.
   */
  @SuppressWarnings("unused")
  @UsedByNative
  boolean isAccessibilityHighContrastTextEnabled() {
    AccessibilityManager am =
        (AccessibilityManager) appContext.getSystemService(Context.ACCESSIBILITY_SERVICE);

    try {
      Method m = AccessibilityManager.class.getDeclaredMethod("isHighTextContrastEnabled");

      return m.invoke(am) == Boolean.TRUE;
    } catch (ReflectiveOperationException ex) {
      return false;
    }
  }

  /** Returns Java layer implementation for AndroidUserAuthorizer */
  @SuppressWarnings("unused")
  @UsedByNative
  UserAuthorizer getUserAuthorizer() {
    return userAuthorizer;
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void sendFeedback(
      HashMap<String, String> productSpecificData, String categoryTag, byte[] screenshotData) {
    // Convert the screenshot byte array into a Bitmap.
    Bitmap screenshotBitmap = null;
    if ((screenshotData != null) && (screenshotData.length > 0)) {
      screenshotBitmap = BitmapFactory.decodeByteArray(screenshotData, 0, screenshotData.length);
      if (screenshotBitmap == null) {
        Log.e(TAG, "Unable to decode a screenshot from the data.");
      }
    }
    feedbackService.sendFeedback(productSpecificData, categoryTag, screenshotBitmap);
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void updateMediaSession(
      int playbackState,
      long actions,
      long positionMs,
      float speed,
      String title,
      String artist,
      String album,
      MediaImage[] artwork,
      long duration) {
    cobaltMediaSession.updateMediaSession(
        playbackState, actions, positionMs, speed, title, artist, album, artwork, duration);
  }

  /** Returns string for kSbSystemPropertyUserAgentAuxField */
  @SuppressWarnings("unused")
  @UsedByNative
  String getUserAgentAuxField() {
    StringBuilder sb = new StringBuilder();

    String packageName = appContext.getApplicationInfo().packageName;
    sb.append(packageName);
    sb.append('/');

    try {
      sb.append(appContext.getPackageManager().getPackageInfo(packageName, 0).versionName);
    } catch (PackageManager.NameNotFoundException ex) {
      // Should never happen
      Log.e(TAG, "Can't find our own package", ex);
    }

    return sb.toString();
  }

  @SuppressWarnings("unused")
  @UsedByNative
  AudioOutputManager getAudioOutputManager() {
    return audioOutputManager;
  }

  /** Returns Java layer implementation for KeyboardEditor */
  @SuppressWarnings("unused")
  @UsedByNative
  KeyboardEditor getKeyboardEditor() {
    return keyboardEditor;
  }

  /** Returns Java layer implementation for AndroidVoiceRecognizer */
  @SuppressWarnings("unused")
  @UsedByNative
  VoiceRecognizer getVoiceRecognizer() {
    return voiceRecognizer;
  }

  /** Returns Java layer implementation for AudioPermissionRequester */
  @SuppressWarnings("unused")
  @UsedByNative
  AudioPermissionRequester getAudioPermissionRequester() {
    return audioPermissionRequester;
  }

  void onActivityResult(int requestCode, int resultCode, Intent data) {
    userAuthorizer.onActivityResult(requestCode, resultCode, data);
  }

  void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults) {
    userAuthorizer.onRequestPermissionsResult(requestCode, permissions, grantResults);
    audioPermissionRequester.onRequestPermissionsResult(requestCode, permissions, grantResults);
  }

  @SuppressWarnings("unused")
  @UsedByNative
  public void setVideoSurfaceBounds(final int x, final int y, final int width, final int height) {
    Activity activity = activityHolder.get();
    if (activity instanceof CobaltActivity) {
      ((CobaltActivity) activity).setVideoSurfaceBounds(x, y, width, height);
    }
  }

  /**
   * Check if hdrType is supported by the current default display. See
   * https://developer.android.com/reference/android/view/Display.HdrCapabilities.html for valid
   * values.
   */
  @TargetApi(24)
  @SuppressWarnings("unused")
  @UsedByNative
  public boolean isHdrTypeSupported(int hdrType) {
    if (android.os.Build.VERSION.SDK_INT < 24) {
      return false;
    }

    Activity activity = activityHolder.get();
    if (activity == null) {
      return false;
    }

    WindowManager windowManager = activity.getWindowManager();
    if (windowManager == null) {
      return false;
    }

    int[] supportedHdrTypes =
        windowManager.getDefaultDisplay().getHdrCapabilities().getSupportedHdrTypes();
    for (int supportedType : supportedHdrTypes) {
      if (supportedType == hdrType) {
        return true;
      }
    }
    return false;
  }

  public void registerCobaltService(CobaltService.Factory factory) {
    cobaltServiceFactories.put(factory.getServiceName(), factory);
  }

  @SuppressWarnings("unused")
  @UsedByNative
  boolean hasCobaltService(String serviceName) {
    return cobaltServiceFactories.get(serviceName) != null;
  }

  @SuppressWarnings("unused")
  @UsedByNative
  CobaltService openCobaltService(long nativeService, String serviceName) {
    if (cobaltServices.get(serviceName) != null) {
      // Attempting to re-open an already open service fails.
      Log.e(TAG, String.format("Cannot open already open service %s", serviceName));
      return null;
    }
    final CobaltService.Factory factory = cobaltServiceFactories.get(serviceName);
    if (factory == null) {
      Log.e(TAG, String.format("Cannot open unregistered service %s", serviceName));
      return null;
    }
    CobaltService service = factory.createCobaltService(nativeService);
    if (service != null) {
      cobaltServices.put(serviceName, service);
    }
    return service;
  }

  @SuppressWarnings("unused")
  @UsedByNative
  void closeCobaltService(String serviceName) {
    cobaltServices.remove(serviceName);
  }
}
