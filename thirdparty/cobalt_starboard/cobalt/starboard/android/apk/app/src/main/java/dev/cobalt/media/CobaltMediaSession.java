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

package dev.cobalt.media;

import static dev.cobalt.media.Log.TAG;

import android.annotation.TargetApi;
import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.media.AudioAttributes;
import android.media.AudioAttributes.Builder;
import android.media.AudioFocusRequest;
import android.media.AudioManager;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.support.v4.media.MediaMetadataCompat;
import android.support.v4.media.session.MediaSessionCompat;
import android.support.v4.media.session.PlaybackStateCompat;
import android.view.WindowManager;
import dev.cobalt.util.DisplayUtil;
import dev.cobalt.util.Holder;
import dev.cobalt.util.Log;

/**
 * Cobalt MediaSession glue, as well as collection of state and logic to switch on/off Android OS
 * features used in media playback, such as audio focus, "KEEP_SCREEN_ON" mode, and "visible
 * behind".
 */
public class CobaltMediaSession
    implements AudioManager.OnAudioFocusChangeListener, ArtworkLoader.Callback {

  // We do handle transport controls and set this flag on all API levels, even though it's
  // deprecated and unnecessary on API 26+.
  @SuppressWarnings("deprecation")
  private static final int MEDIA_SESSION_FLAG_HANDLES_TRANSPORT_CONTROLS =
      MediaSessionCompat.FLAG_HANDLES_TRANSPORT_CONTROLS;

  private AudioFocusRequest audioFocusRequest;

  interface UpdateVolumeListener {
    /** Called when there is a change in audio focus. */
    void onUpdateVolume(float gain);
  }

  /**
   * When losing audio focus with the option of ducking, we reduce the volume to 10%. This arbitrary
   * number is what YouTube Android Player infrastructure uses.
   */
  private static final float AUDIO_FOCUS_DUCK_LEVEL = 0.1f;

  private final Handler mainHandler = new Handler(Looper.getMainLooper());

  private final Context context;
  private final Holder<Activity> activityHolder;

  private final UpdateVolumeListener volumeListener;
  private final ArtworkLoader artworkLoader;
  private MediaSessionCompat mediaSession;

  // We re-use the builder to hold onto the most recent metadata and add artwork later.
  private MediaMetadataCompat.Builder metadataBuilder = new MediaMetadataCompat.Builder();
  // We re-use the builder to hold onto the most recent playback state.
  private PlaybackStateCompat.Builder playbackStateBuilder = new PlaybackStateCompat.Builder();

  // Duplicated in starboard/android/shared/android_media_session_client.h
  // PlaybackStateCompat
  private static final int PLAYBACK_STATE_PLAYING = 0;
  private static final int PLAYBACK_STATE_PAUSED = 1;
  private static final int PLAYBACK_STATE_NONE = 2;
  private static final String[] PLAYBACK_STATE_NAME = {"playing", "paused", "none"};

  // Accessed on the main looper thread only.
  private int playbackState = PLAYBACK_STATE_NONE;
  private boolean transientPause = false;
  private boolean suspended = true;

  public CobaltMediaSession(
      Context context, Holder<Activity> activityHolder, UpdateVolumeListener volumeListener) {
    this.context = context;
    this.activityHolder = activityHolder;

    this.volumeListener = volumeListener;
    artworkLoader = new ArtworkLoader(this, DisplayUtil.getDisplaySize(context));
    setMediaSession();
  }

  private void setMediaSession() {
    mediaSession = new MediaSessionCompat(context, TAG);
    mediaSession.setFlags(MEDIA_SESSION_FLAG_HANDLES_TRANSPORT_CONTROLS);
    mediaSession.setCallback(
        new MediaSessionCompat.Callback() {
          @Override
          public void onFastForward() {
            Log.i(TAG, "MediaSession action: FAST FORWARD");
            nativeInvokeAction(PlaybackStateCompat.ACTION_FAST_FORWARD);
          }

          @Override
          public void onPause() {
            Log.i(TAG, "MediaSession action: PAUSE");
            nativeInvokeAction(PlaybackStateCompat.ACTION_PAUSE);
          }

          @Override
          public void onPlay() {
            Log.i(TAG, "MediaSession action: PLAY");
            nativeInvokeAction(PlaybackStateCompat.ACTION_PLAY);
          }

          @Override
          public void onRewind() {
            Log.i(TAG, "MediaSession action: REWIND");
            nativeInvokeAction(PlaybackStateCompat.ACTION_REWIND);
          }

          @Override
          public void onSkipToNext() {
            Log.i(TAG, "MediaSession action: SKIP NEXT");
            nativeInvokeAction(PlaybackStateCompat.ACTION_SKIP_TO_NEXT);
          }

          @Override
          public void onSkipToPrevious() {
            Log.i(TAG, "MediaSession action: SKIP PREVIOUS");
            nativeInvokeAction(PlaybackStateCompat.ACTION_SKIP_TO_PREVIOUS);
          }

          @Override
          public void onSeekTo(long pos) {
            Log.i(TAG, "MediaSession action: SEEK " + pos);
            nativeInvokeAction(PlaybackStateCompat.ACTION_SEEK_TO, pos);
          }

          @Override
          public void onStop() {
            Log.i(TAG, "MediaSession action: STOP");
            nativeInvokeAction(PlaybackStateCompat.ACTION_STOP);
          }
        });
    // |metadataBuilder| may still have no fields at this point, yielding empty metadata.
    mediaSession.setMetadata(metadataBuilder.build());
    // |playbackStateBuilder| may still have no fields at this point.
    mediaSession.setPlaybackState(playbackStateBuilder.build());
  }

  private static void checkMainLooperThread() {
    if (Looper.getMainLooper() != Looper.myLooper()) {
      throw new RuntimeException("Must be on main thread");
    }
  }

  /**
   * Sets system media resources active or not according to whether media is playing. This is
   * idempotent as it may be called multiple times during the course of a media session.
   */
  private void configureMediaFocus(int playbackState) {
    checkMainLooperThread();
    if (transientPause && playbackState == PLAYBACK_STATE_PAUSED) {
      Log.i(TAG, "Media focus: paused (transient)");
      // Don't release media focus while transiently paused, otherwise we won't get audiofocus back
      // when the transient condition ends and we would leave playback paused.
      return;
    }
    Log.i(TAG, "Media focus: " + PLAYBACK_STATE_NAME[playbackState]);
    wakeLock(playbackState == PLAYBACK_STATE_PLAYING);
    audioFocus(playbackState == PLAYBACK_STATE_PLAYING);

    boolean activating = playbackState != PLAYBACK_STATE_NONE && !mediaSession.isActive();
    boolean deactivating = playbackState == PLAYBACK_STATE_NONE && mediaSession.isActive();
    if (activating) {
      // Resuming or new playbacks land here.
      setMediaSession();
    }
    mediaSession.setActive(playbackState != PLAYBACK_STATE_NONE);
    if (deactivating) {
      // Suspending lands here.
      mediaSession.release();
    }
  }

  private void wakeLock(boolean lock) {
    Activity activity = activityHolder.get();
    if (activity == null) {
      return;
    }
    if (lock) {
      activity.getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
    } else {
      activity.getWindow().clearFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
    }
  }

  private void audioFocus(boolean focus) {
    if (focus) {
      int res;
      if (Build.VERSION.SDK_INT < 26) {
        res = requestAudioFocus();
      } else {
        res = requestAudioFocusV26();
      }
      // This shouldn't happen, but pause playback to be nice if it does.
      if (res != AudioManager.AUDIOFOCUS_REQUEST_GRANTED) {
        Log.w(TAG, "Audiofocus action: PAUSE (not granted)");
        nativeInvokeAction(PlaybackStateCompat.ACTION_PAUSE);
      }
    } else {
      if (Build.VERSION.SDK_INT < 26) {
        abandonAudioFocus();
      } else {
        abandonAudioFocusV26();
      }
    }
  }

  @SuppressWarnings("deprecation")
  private int requestAudioFocus() {
    return getAudioManager()
        .requestAudioFocus(this, AudioManager.STREAM_MUSIC, AudioManager.AUDIOFOCUS_GAIN);
  }

  @TargetApi(26)
  private int requestAudioFocusV26() {
    if (audioFocusRequest == null) {
      AudioAttributes audioAtrributes =
          new Builder().setContentType(AudioAttributes.CONTENT_TYPE_MOVIE).build();
      audioFocusRequest =
          new AudioFocusRequest.Builder(AudioManager.AUDIOFOCUS_GAIN)
              .setOnAudioFocusChangeListener(this)
              .setAudioAttributes(audioAtrributes)
              .build();
    }
    return getAudioManager().requestAudioFocus(audioFocusRequest);
  }

  @SuppressWarnings("deprecation")
  private void abandonAudioFocus() {
    getAudioManager().abandonAudioFocus(this);
  }

  @TargetApi(26)
  private void abandonAudioFocusV26() {
    if (audioFocusRequest != null) {
      getAudioManager().abandonAudioFocusRequest(audioFocusRequest);
    }
  }

  /** AudioManager.OnAudioFocusChangeListener implementation. */
  @Override
  public void onAudioFocusChange(int focusChange) {
    String logExtra = "";
    switch (focusChange) {
      case AudioManager.AUDIOFOCUS_LOSS_TRANSIENT:
        logExtra = " (transient)";
        // fall through
      case AudioManager.AUDIOFOCUS_LOSS:
        Log.i(TAG, "Audiofocus loss" + logExtra);
        if (playbackState == PLAYBACK_STATE_PLAYING) {
          Log.i(TAG, "Audiofocus action: PAUSE");
          nativeInvokeAction(PlaybackStateCompat.ACTION_PAUSE);
        }
        break;
      case AudioManager.AUDIOFOCUS_LOSS_TRANSIENT_CAN_DUCK:
        Log.i(TAG, "Audiofocus duck");
        // Lower the volume, keep current play state.
        // Starting with API 26 the system does automatic ducking without calling our listener,
        // but we still need this for API < 26.
        volumeListener.onUpdateVolume(AUDIO_FOCUS_DUCK_LEVEL);
        break;
      case AudioManager.AUDIOFOCUS_GAIN:
        Log.i(TAG, "Audiofocus gain");
        // The app has been granted audio focus (again). Raise volume to normal,
        // restart playback if necessary.
        volumeListener.onUpdateVolume(1.0f);
        if (transientPause && playbackState == PLAYBACK_STATE_PAUSED) {
          Log.i(TAG, "Audiofocus action: PLAY");
          nativeInvokeAction(PlaybackStateCompat.ACTION_PLAY);
        }
        break;
      default: // fall out
    }

    // Keep track of whether we're currently paused because of a transient loss of audiofocus.
    transientPause = (focusChange == AudioManager.AUDIOFOCUS_LOSS_TRANSIENT);
  }

  private AudioManager getAudioManager() {
    return (AudioManager) context.getSystemService(Context.AUDIO_SERVICE);
  }

  public void resume() {
    mainHandler.post(
        new Runnable() {
          @Override
          public void run() {
            resumeInternal();
          }
        });
  }

  private void resumeInternal() {
    checkMainLooperThread();
    suspended = false;
    // Undoing what may have been done in suspendInternal().
    configureMediaFocus(playbackState);
  }

  public void suspend() {
    mainHandler.post(
        new Runnable() {
          @Override
          public void run() {
            suspendInternal();
          }
        });
  }

  private void suspendInternal() {
    checkMainLooperThread();
    suspended = true;

    // We generally believe the HTML5 app playback state as the source of truth for configuring
    // media focus since only it can know about a momentary pause between videos in a playlist, or
    // other autoplay scenario when we should keep media focus. However, when suspending, any
    // active SbPlayer is destroyed and we release media focus, even if the HTML5 app still thinks
    // it's in a playing state. We'll configure it again in resumeInternal() and the HTML5 app will
    // be none the wiser.
    playbackStateBuilder.setState(
        playbackState,
        PlaybackStateCompat.PLAYBACK_POSITION_UNKNOWN,
        playbackState == PLAYBACK_STATE_PLAYING ? 1.0f : 0.0f);
    configureMediaFocus(PLAYBACK_STATE_NONE);
  }

  private static void nativeInvokeAction(long action) {
    nativeInvokeAction(action, 0);
  }

  private static native void nativeInvokeAction(long action, long seekMs);

  public void updateMediaSession(
      final int playbackState,
      final long actions,
      final long positionMs,
      final float speed,
      final String title,
      final String artist,
      final String album,
      final MediaImage[] artwork,
      final long duration) {
    mainHandler.post(
        new Runnable() {
          @Override
          public void run() {
            updateMediaSessionInternal(
                playbackState, actions, positionMs, speed, title, artist, album, artwork, duration);
          }
        });
  }

  /** Called on main looper thread when media session changes. */
  private void updateMediaSessionInternal(
      int playbackState,
      long actions,
      long positionMs,
      float speed,
      String title,
      String artist,
      String album,
      MediaImage[] artwork,
      final long duration) {
    checkMainLooperThread();

    // Always keep track of what the HTML5 app thinks the playback state is so we can configure the
    // media focus correctly, either immediately or when resuming from being suspended.
    this.playbackState = playbackState;

    // Don't update anything while suspended.
    if (suspended) {
      Log.i(TAG, "Playback state change while suspended: " + PLAYBACK_STATE_NAME[playbackState]);
      return;
    }

    configureMediaFocus(playbackState);

    // Ignore updates to the MediaSession metadata if playback is stopped.
    if (playbackState == PLAYBACK_STATE_NONE) {
      return;
    }

    int androidPlaybackState;
    String stateName;
    switch (playbackState) {
      case PLAYBACK_STATE_PLAYING:
        androidPlaybackState = PlaybackStateCompat.STATE_PLAYING;
        stateName = "PLAYING";
        break;
      case PLAYBACK_STATE_PAUSED:
        androidPlaybackState = PlaybackStateCompat.STATE_PAUSED;
        stateName = "PAUSED";
        break;
      case PLAYBACK_STATE_NONE:
      default:
        androidPlaybackState = PlaybackStateCompat.STATE_NONE;
        stateName = "NONE";
        break;
    }

    Log.i(
        TAG,
        String.format(
            "MediaSession state: %s, position: %d ms, speed: %f x, duration: %d ms",
            stateName, positionMs, speed, duration));

    playbackStateBuilder =
        new PlaybackStateCompat.Builder()
            .setActions(actions)
            .setState(androidPlaybackState, positionMs, speed);
    mediaSession.setPlaybackState(playbackStateBuilder.build());

    // Reset the metadata to make sure we don't retain any fields from previous playback.
    metadataBuilder = new MediaMetadataCompat.Builder();
    metadataBuilder
        .putString(MediaMetadataCompat.METADATA_KEY_TITLE, title)
        .putString(MediaMetadataCompat.METADATA_KEY_ARTIST, artist)
        .putString(MediaMetadataCompat.METADATA_KEY_ALBUM, album)
        .putBitmap(
            MediaMetadataCompat.METADATA_KEY_ALBUM_ART, artworkLoader.getOrLoadArtwork(artwork))
        .putLong(MediaMetadataCompat.METADATA_KEY_DURATION, duration);
    // Update the metadata as soon as we can - even before artwork is loaded.
    mediaSession.setMetadata(metadataBuilder.build());
  }

  @Override
  public void onArtworkLoaded(Bitmap bitmap) {
    metadataBuilder.putBitmap(MediaMetadataCompat.METADATA_KEY_ALBUM_ART, bitmap);
    mediaSession.setMetadata(metadataBuilder.build());
  }
}
