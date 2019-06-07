---
layout: doc
title: "Starboard Module Reference: audio_sink.h"
---

Provides an interface to output raw audio data.

## Macros ##

### kSbAudioSinkInvalid ###

Well-defined value for an invalid audio sink.

## Typedefs ##

### SbAudioSink ###

An opaque handle to an implementation-private structure representing an audio
sink.

#### Definition ####

```
typedef struct SbAudioSinkPrivate* SbAudioSink
```

### SbAudioSinkConsumeFramesFunc ###

Callback used to report frames consumed. The consumed frames will be removed
from the source frame buffer to free space for new audio frames.When
`frames_consumed` is updated asynchnously and the last time that it has been
updated is known, it can be passed in `frames_consumed_at` so the audio time
calculating can be more accurate.

#### Definition ####

```
typedef void(* SbAudioSinkConsumeFramesFunc) (int frames_consumed, SbTime frames_consumed_at, void *context)
```

### SbAudioSinkFrameBuffers ###

An array of frame buffers. For interleaved audio streams, there will be only one
element in the array. For planar audio streams, the number of elements in the
array equal to the number of channels.

#### Definition ####

```
typedef void** SbAudioSinkFrameBuffers
```

### SbAudioSinkUpdateSourceStatusFunc ###

Callback being called periodically to retrieve the status of the audio source.
The first two output parameters indicating the filling level of the audio frame
buffer passed to SbAudioSinkCreate as `frame_buffers`. As `frame_buffers` is a
circular buffer, `offset_in_frames` can be used to calculate the number of
continuous frames towards the end of the buffer. The audio sink can play the
frames only when `is_playing` is true. It should pause the playback when
`is_playing` is false. The audio sink may cache certain amount of audio frames
before start playback. It will start playback immediately when `is_eos_reached`
is true even if the amount of cached audio frames are not enough as no more
frames will be appended into the buffer when `is_eos_reached` is true. It is
possible for a host to set `is_eos_reached` to false after setting it to true,
usually this is caused by a seek. All parameters except `context` cannot be
NULL. Note that this function only reports the status of the source, it doesn't
remove audio data from the source frame buffer.

#### Definition ####

```
typedef void(* SbAudioSinkUpdateSourceStatusFunc) (int *frames_in_buffer, int *offset_in_frames, bool *is_playing, bool *is_eos_reached, void *context)
```

## Functions ##

### SbAudioSinkDestroy ###

Destroys `audio_sink`, freeing all associated resources. Before returning, the
function waits until all callbacks that are in progress have finished. After the
function returns, no further calls are made callbacks passed into
SbAudioSinkCreate. In addition, you can not pass `audio_sink` to any other
SbAudioSink functions after SbAudioSinkDestroy has been called on it.

This function can be called on any thread. However, it cannot be called within
any of the callbacks passed into SbAudioSinkCreate.

`audio_sink`: The audio sink to destroy.

#### Declaration ####

```
void SbAudioSinkDestroy(SbAudioSink audio_sink)
```

### SbAudioSinkGetMaxChannels ###

Returns the maximum number of channels supported on the platform. For example,
the number would be `2` if the platform only supports stereo.

#### Declaration ####

```
int SbAudioSinkGetMaxChannels()
```

### SbAudioSinkGetNearestSupportedSampleFrequency ###

Returns the supported sample rate closest to `sampling_frequency_hz`. On
platforms that don't support all sample rates, it is the caller's responsibility
to resample the audio frames into the supported sample rate returned by this
function.

#### Declaration ####

```
int SbAudioSinkGetNearestSupportedSampleFrequency(int sampling_frequency_hz)
```

### SbAudioSinkIsAudioFrameStorageTypeSupported ###

Indicates whether `audio_frame_storage_type` is supported on this platform.

#### Declaration ####

```
bool SbAudioSinkIsAudioFrameStorageTypeSupported(SbMediaAudioFrameStorageType audio_frame_storage_type)
```

### SbAudioSinkIsAudioSampleTypeSupported ###

Indicates whether `audio_sample_type` is supported on this platform.

#### Declaration ####

```
bool SbAudioSinkIsAudioSampleTypeSupported(SbMediaAudioSampleType audio_sample_type)
```

### SbAudioSinkIsValid ###

Indicates whether the given audio sink handle is valid.

`audio_sink`: The audio sink handle to check.

#### Declaration ####

```
bool SbAudioSinkIsValid(SbAudioSink audio_sink)
```

