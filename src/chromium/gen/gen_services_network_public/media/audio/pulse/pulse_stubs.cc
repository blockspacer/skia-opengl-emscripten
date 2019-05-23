// This is generated file. Do not modify directly.

#include "media/audio/pulse/pulse_stubs.h"

#include <stdlib.h>  // For NULL.
#include <dlfcn.h>   // For dlsym, dlopen.

#include <map>
#include <vector>

// The extra include header needed in the generated stub file for defining
// various Pulse types.

extern "C" {

#include <pulse/pulseaudio.h>

}

extern "C" {

// Static pointers that will hold the location of the real function
// implementations after the module has been loaded.
static pa_mainloop_api* (*pa_threaded_mainloop_get_api_ptr)(pa_threaded_mainloop* m) = NULL;
static void (*pa_threaded_mainloop_free_ptr)(pa_threaded_mainloop* m) = NULL;
static pa_threaded_mainloop* (*pa_threaded_mainloop_new_ptr)() = NULL;
static void (*pa_threaded_mainloop_lock_ptr)(pa_threaded_mainloop* m) = NULL;
static int (*pa_threaded_mainloop_in_thread_ptr)(pa_threaded_mainloop* m) = NULL;
static void (*pa_threaded_mainloop_signal_ptr)(pa_threaded_mainloop* m, int wait_for_accept) = NULL;
static int (*pa_threaded_mainloop_start_ptr)(pa_threaded_mainloop* m) = NULL;
static void (*pa_threaded_mainloop_stop_ptr)(pa_threaded_mainloop* m) = NULL;
static void (*pa_threaded_mainloop_unlock_ptr)(pa_threaded_mainloop* m) = NULL;
static void (*pa_threaded_mainloop_wait_ptr)(pa_threaded_mainloop* m) = NULL;
static pa_channel_map* (*pa_channel_map_init_ptr)(pa_channel_map* m) = NULL;
static pa_channel_map* (*pa_channel_map_init_mono_ptr)(pa_channel_map* m) = NULL;
static int (*pa_context_connect_ptr)(pa_context* c, const char* server, pa_context_flags_t flags, const pa_spawn_api* api) = NULL;
static void (*pa_context_disconnect_ptr)(pa_context* c) = NULL;
static pa_operation* (*pa_context_get_server_info_ptr)(pa_context* c, pa_server_info_cb_t cb, void* userdata) = NULL;
static pa_operation* (*pa_context_get_source_info_by_index_ptr)(pa_context* c, uint32_t idx, pa_source_info_cb_t cb, void* userdata) = NULL;
static pa_operation* (*pa_context_get_source_info_by_name_ptr)(pa_context* c, const char* name, pa_source_info_cb_t cb, void *userdata) = NULL;
static pa_operation* (*pa_context_get_source_info_list_ptr)(pa_context* c, pa_source_info_cb_t cb, void* userdata) = NULL;
static pa_operation* (*pa_context_get_sink_info_list_ptr)(pa_context* c, pa_sink_info_cb_t cb, void* userdata) = NULL;
static pa_context_state_t (*pa_context_get_state_ptr)(pa_context* c) = NULL;
static pa_context* (*pa_context_new_ptr)(pa_mainloop_api* mainloop, const char* name) = NULL;
static pa_operation* (*pa_context_set_source_volume_by_index_ptr)(pa_context* c, uint32_t idx, const pa_cvolume* volume, pa_context_success_cb_t cb, void* userdata) = NULL;
static void (*pa_context_set_state_callback_ptr)(pa_context* c, pa_context_notify_cb_t cb, void* userdata) = NULL;
static pa_operation_state_t (*pa_operation_get_state_ptr)(pa_operation* o) = NULL;
static void (*pa_context_unref_ptr)(pa_context* c) = NULL;
static void (*pa_operation_unref_ptr)(pa_operation* o) = NULL;
static int (*pa_stream_begin_write_ptr)(pa_stream* p, void** data, size_t* nbytes) = NULL;
static int (*pa_stream_connect_playback_ptr)(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags, const pa_cvolume* volume, pa_stream* sync_stream) = NULL;
static int (*pa_stream_connect_record_ptr)(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags) = NULL;
static pa_operation* (*pa_stream_cork_ptr)(pa_stream* s, int b, pa_stream_success_cb_t cb, void* userdata) = NULL;
static int (*pa_stream_disconnect_ptr)(pa_stream* s) = NULL;
static int (*pa_stream_drop_ptr)(pa_stream *p) = NULL;
static pa_operation* (*pa_stream_flush_ptr)(pa_stream* s, pa_stream_success_cb_t cb, void* userdata) = NULL;
static uint32_t (*pa_stream_get_device_index_ptr)(pa_stream* s) = NULL;
static int (*pa_stream_get_latency_ptr)(pa_stream* s, pa_usec_t* r_usec, int* negative) = NULL;
static pa_stream_state_t (*pa_stream_get_state_ptr)(pa_stream* p) = NULL;
static pa_stream* (*pa_stream_new_ptr)(pa_context*  c, const char*  name, const pa_sample_spec*  ss, const pa_channel_map *  map) = NULL;
static pa_stream* (*pa_stream_new_with_proplist_ptr)(pa_context* c, const char* name, const pa_sample_spec* ss, const pa_channel_map* map, pa_proplist* p) = NULL;
static pa_proplist* (*pa_proplist_new_ptr)(void) = NULL;
static int (*pa_proplist_contains_ptr)(pa_proplist* p, const char* key) = NULL;
static void (*pa_proplist_free_ptr)(pa_proplist* p) = NULL;
static const char* (*pa_proplist_gets_ptr)(pa_proplist* p, const char* key) = NULL;
static int (*pa_proplist_sets_ptr)(pa_proplist* p, const char* key, const char* value) = NULL;
static size_t (*pa_stream_readable_size_ptr)(pa_stream *p) = NULL;
static int (*pa_stream_peek_ptr)(pa_stream* p, const void** data, size_t* nbytes) = NULL;
static void (*pa_stream_set_read_callback_ptr)(pa_stream* p, pa_stream_request_cb_t cb, void* userdata) = NULL;
static void (*pa_stream_set_state_callback_ptr)(pa_stream* s, pa_stream_notify_cb_t cb, void* userdata) = NULL;
static int (*pa_stream_write_ptr)(pa_stream* p, const void* data, size_t nbytes, pa_free_cb_t free_cb, int64_t offset, pa_seek_mode_t seek) = NULL;
static void (*pa_stream_set_write_callback_ptr)(pa_stream *p, pa_stream_request_cb_t cb, void *userdata) = NULL;
static void (*pa_stream_unref_ptr)(pa_stream* s) = NULL;
static int (*pa_context_errno_ptr)(pa_context *c) = NULL;
static const char* (*pa_strerror_ptr)(int error) = NULL;
static pa_cvolume* (*pa_cvolume_set_ptr)(pa_cvolume* a, unsigned  channels, pa_volume_t v) = NULL;

// Stubs that dispatch to the real implementations.
extern pa_mainloop_api* pa_threaded_mainloop_get_api(pa_threaded_mainloop* m) __attribute__((weak));
pa_mainloop_api*  pa_threaded_mainloop_get_api(pa_threaded_mainloop* m) {
  return pa_threaded_mainloop_get_api_ptr(m);
}
extern void pa_threaded_mainloop_free(pa_threaded_mainloop* m) __attribute__((weak));
void  pa_threaded_mainloop_free(pa_threaded_mainloop* m) {
  pa_threaded_mainloop_free_ptr(m);
}
extern pa_threaded_mainloop* pa_threaded_mainloop_new() __attribute__((weak));
pa_threaded_mainloop*  pa_threaded_mainloop_new() {
  return pa_threaded_mainloop_new_ptr();
}
extern void pa_threaded_mainloop_lock(pa_threaded_mainloop* m) __attribute__((weak));
void  pa_threaded_mainloop_lock(pa_threaded_mainloop* m) {
  pa_threaded_mainloop_lock_ptr(m);
}
extern int pa_threaded_mainloop_in_thread(pa_threaded_mainloop* m) __attribute__((weak));
int  pa_threaded_mainloop_in_thread(pa_threaded_mainloop* m) {
  return pa_threaded_mainloop_in_thread_ptr(m);
}
extern void pa_threaded_mainloop_signal(pa_threaded_mainloop* m, int wait_for_accept) __attribute__((weak));
void  pa_threaded_mainloop_signal(pa_threaded_mainloop* m, int wait_for_accept) {
  pa_threaded_mainloop_signal_ptr(m, wait_for_accept);
}
extern int pa_threaded_mainloop_start(pa_threaded_mainloop* m) __attribute__((weak));
int  pa_threaded_mainloop_start(pa_threaded_mainloop* m) {
  return pa_threaded_mainloop_start_ptr(m);
}
extern void pa_threaded_mainloop_stop(pa_threaded_mainloop* m) __attribute__((weak));
void  pa_threaded_mainloop_stop(pa_threaded_mainloop* m) {
  pa_threaded_mainloop_stop_ptr(m);
}
extern void pa_threaded_mainloop_unlock(pa_threaded_mainloop* m) __attribute__((weak));
void  pa_threaded_mainloop_unlock(pa_threaded_mainloop* m) {
  pa_threaded_mainloop_unlock_ptr(m);
}
extern void pa_threaded_mainloop_wait(pa_threaded_mainloop* m) __attribute__((weak));
void  pa_threaded_mainloop_wait(pa_threaded_mainloop* m) {
  pa_threaded_mainloop_wait_ptr(m);
}
extern pa_channel_map* pa_channel_map_init(pa_channel_map* m) __attribute__((weak));
pa_channel_map*  pa_channel_map_init(pa_channel_map* m) {
  return pa_channel_map_init_ptr(m);
}
extern pa_channel_map* pa_channel_map_init_mono(pa_channel_map* m) __attribute__((weak));
pa_channel_map*  pa_channel_map_init_mono(pa_channel_map* m) {
  return pa_channel_map_init_mono_ptr(m);
}
extern int pa_context_connect(pa_context* c, const char* server, pa_context_flags_t flags, const pa_spawn_api* api) __attribute__((weak));
int  pa_context_connect(pa_context* c, const char* server, pa_context_flags_t flags, const pa_spawn_api* api) {
  return pa_context_connect_ptr(c, server, flags, api);
}
extern void pa_context_disconnect(pa_context* c) __attribute__((weak));
void  pa_context_disconnect(pa_context* c) {
  pa_context_disconnect_ptr(c);
}
extern pa_operation* pa_context_get_server_info(pa_context* c, pa_server_info_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_context_get_server_info(pa_context* c, pa_server_info_cb_t cb, void* userdata) {
  return pa_context_get_server_info_ptr(c, cb, userdata);
}
extern pa_operation* pa_context_get_source_info_by_index(pa_context* c, uint32_t idx, pa_source_info_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_context_get_source_info_by_index(pa_context* c, uint32_t idx, pa_source_info_cb_t cb, void* userdata) {
  return pa_context_get_source_info_by_index_ptr(c, idx, cb, userdata);
}
extern pa_operation* pa_context_get_source_info_by_name(pa_context* c, const char* name, pa_source_info_cb_t cb, void *userdata) __attribute__((weak));
pa_operation*  pa_context_get_source_info_by_name(pa_context* c, const char* name, pa_source_info_cb_t cb, void *userdata) {
  return pa_context_get_source_info_by_name_ptr(c, name, cb, userdata);
}
extern pa_operation* pa_context_get_source_info_list(pa_context* c, pa_source_info_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_context_get_source_info_list(pa_context* c, pa_source_info_cb_t cb, void* userdata) {
  return pa_context_get_source_info_list_ptr(c, cb, userdata);
}
extern pa_operation* pa_context_get_sink_info_list(pa_context* c, pa_sink_info_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_context_get_sink_info_list(pa_context* c, pa_sink_info_cb_t cb, void* userdata) {
  return pa_context_get_sink_info_list_ptr(c, cb, userdata);
}
extern pa_context_state_t pa_context_get_state(pa_context* c) __attribute__((weak));
pa_context_state_t  pa_context_get_state(pa_context* c) {
  return pa_context_get_state_ptr(c);
}
extern pa_context* pa_context_new(pa_mainloop_api* mainloop, const char* name) __attribute__((weak));
pa_context*  pa_context_new(pa_mainloop_api* mainloop, const char* name) {
  return pa_context_new_ptr(mainloop, name);
}
extern pa_operation* pa_context_set_source_volume_by_index(pa_context* c, uint32_t idx, const pa_cvolume* volume, pa_context_success_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_context_set_source_volume_by_index(pa_context* c, uint32_t idx, const pa_cvolume* volume, pa_context_success_cb_t cb, void* userdata) {
  return pa_context_set_source_volume_by_index_ptr(c, idx, volume, cb, userdata);
}
extern void pa_context_set_state_callback(pa_context* c, pa_context_notify_cb_t cb, void* userdata) __attribute__((weak));
void  pa_context_set_state_callback(pa_context* c, pa_context_notify_cb_t cb, void* userdata) {
  pa_context_set_state_callback_ptr(c, cb, userdata);
}
extern pa_operation_state_t pa_operation_get_state(pa_operation* o) __attribute__((weak));
pa_operation_state_t  pa_operation_get_state(pa_operation* o) {
  return pa_operation_get_state_ptr(o);
}
extern void pa_context_unref(pa_context* c) __attribute__((weak));
void  pa_context_unref(pa_context* c) {
  pa_context_unref_ptr(c);
}
extern void pa_operation_unref(pa_operation* o) __attribute__((weak));
void  pa_operation_unref(pa_operation* o) {
  pa_operation_unref_ptr(o);
}
extern int pa_stream_begin_write(pa_stream* p, void** data, size_t* nbytes) __attribute__((weak));
int  pa_stream_begin_write(pa_stream* p, void** data, size_t* nbytes) {
  return pa_stream_begin_write_ptr(p, data, nbytes);
}
extern int pa_stream_connect_playback(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags, const pa_cvolume* volume, pa_stream* sync_stream) __attribute__((weak));
int  pa_stream_connect_playback(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags, const pa_cvolume* volume, pa_stream* sync_stream) {
  return pa_stream_connect_playback_ptr(s, dev, attr, flags, volume, sync_stream);
}
extern int pa_stream_connect_record(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags) __attribute__((weak));
int  pa_stream_connect_record(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags) {
  return pa_stream_connect_record_ptr(s, dev, attr, flags);
}
extern pa_operation* pa_stream_cork(pa_stream* s, int b, pa_stream_success_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_stream_cork(pa_stream* s, int b, pa_stream_success_cb_t cb, void* userdata) {
  return pa_stream_cork_ptr(s, b, cb, userdata);
}
extern int pa_stream_disconnect(pa_stream* s) __attribute__((weak));
int  pa_stream_disconnect(pa_stream* s) {
  return pa_stream_disconnect_ptr(s);
}
extern int pa_stream_drop(pa_stream *p) __attribute__((weak));
int  pa_stream_drop(pa_stream *p) {
  return pa_stream_drop_ptr(p);
}
extern pa_operation* pa_stream_flush(pa_stream* s, pa_stream_success_cb_t cb, void* userdata) __attribute__((weak));
pa_operation*  pa_stream_flush(pa_stream* s, pa_stream_success_cb_t cb, void* userdata) {
  return pa_stream_flush_ptr(s, cb, userdata);
}
extern uint32_t pa_stream_get_device_index(pa_stream* s) __attribute__((weak));
uint32_t  pa_stream_get_device_index(pa_stream* s) {
  return pa_stream_get_device_index_ptr(s);
}
extern int pa_stream_get_latency(pa_stream* s, pa_usec_t* r_usec, int* negative) __attribute__((weak));
int  pa_stream_get_latency(pa_stream* s, pa_usec_t* r_usec, int* negative) {
  return pa_stream_get_latency_ptr(s, r_usec, negative);
}
extern pa_stream_state_t pa_stream_get_state(pa_stream* p) __attribute__((weak));
pa_stream_state_t  pa_stream_get_state(pa_stream* p) {
  return pa_stream_get_state_ptr(p);
}
extern pa_stream* pa_stream_new(pa_context*  c, const char*  name, const pa_sample_spec*  ss, const pa_channel_map *  map) __attribute__((weak));
pa_stream*  pa_stream_new(pa_context*  c, const char*  name, const pa_sample_spec*  ss, const pa_channel_map *  map) {
  return pa_stream_new_ptr(c, name, ss, map);
}
extern pa_stream* pa_stream_new_with_proplist(pa_context* c, const char* name, const pa_sample_spec* ss, const pa_channel_map* map, pa_proplist* p) __attribute__((weak));
pa_stream*  pa_stream_new_with_proplist(pa_context* c, const char* name, const pa_sample_spec* ss, const pa_channel_map* map, pa_proplist* p) {
  return pa_stream_new_with_proplist_ptr(c, name, ss, map, p);
}
extern pa_proplist* pa_proplist_new(void) __attribute__((weak));
pa_proplist*  pa_proplist_new(void) {
  return pa_proplist_new_ptr();
}
extern int pa_proplist_contains(pa_proplist* p, const char* key) __attribute__((weak));
int  pa_proplist_contains(pa_proplist* p, const char* key) {
  return pa_proplist_contains_ptr(p, key);
}
extern void pa_proplist_free(pa_proplist* p) __attribute__((weak));
void  pa_proplist_free(pa_proplist* p) {
  pa_proplist_free_ptr(p);
}
extern const char* pa_proplist_gets(pa_proplist* p, const char* key) __attribute__((weak));
const char*  pa_proplist_gets(pa_proplist* p, const char* key) {
  return pa_proplist_gets_ptr(p, key);
}
extern int pa_proplist_sets(pa_proplist* p, const char* key, const char* value) __attribute__((weak));
int  pa_proplist_sets(pa_proplist* p, const char* key, const char* value) {
  return pa_proplist_sets_ptr(p, key, value);
}
extern size_t pa_stream_readable_size(pa_stream *p) __attribute__((weak));
size_t  pa_stream_readable_size(pa_stream *p) {
  return pa_stream_readable_size_ptr(p);
}
extern int pa_stream_peek(pa_stream* p, const void** data, size_t* nbytes) __attribute__((weak));
int  pa_stream_peek(pa_stream* p, const void** data, size_t* nbytes) {
  return pa_stream_peek_ptr(p, data, nbytes);
}
extern void pa_stream_set_read_callback(pa_stream* p, pa_stream_request_cb_t cb, void* userdata) __attribute__((weak));
void  pa_stream_set_read_callback(pa_stream* p, pa_stream_request_cb_t cb, void* userdata) {
  pa_stream_set_read_callback_ptr(p, cb, userdata);
}
extern void pa_stream_set_state_callback(pa_stream* s, pa_stream_notify_cb_t cb, void* userdata) __attribute__((weak));
void  pa_stream_set_state_callback(pa_stream* s, pa_stream_notify_cb_t cb, void* userdata) {
  pa_stream_set_state_callback_ptr(s, cb, userdata);
}
extern int pa_stream_write(pa_stream* p, const void* data, size_t nbytes, pa_free_cb_t free_cb, int64_t offset, pa_seek_mode_t seek) __attribute__((weak));
int  pa_stream_write(pa_stream* p, const void* data, size_t nbytes, pa_free_cb_t free_cb, int64_t offset, pa_seek_mode_t seek) {
  return pa_stream_write_ptr(p, data, nbytes, free_cb, offset, seek);
}
extern void pa_stream_set_write_callback(pa_stream *p, pa_stream_request_cb_t cb, void *userdata) __attribute__((weak));
void  pa_stream_set_write_callback(pa_stream *p, pa_stream_request_cb_t cb, void *userdata) {
  pa_stream_set_write_callback_ptr(p, cb, userdata);
}
extern void pa_stream_unref(pa_stream* s) __attribute__((weak));
void  pa_stream_unref(pa_stream* s) {
  pa_stream_unref_ptr(s);
}
extern int pa_context_errno(pa_context *c) __attribute__((weak));
int  pa_context_errno(pa_context *c) {
  return pa_context_errno_ptr(c);
}
extern const char* pa_strerror(int error) __attribute__((weak));
const char*  pa_strerror(int error) {
  return pa_strerror_ptr(error);
}
extern pa_cvolume* pa_cvolume_set(pa_cvolume* a, unsigned  channels, pa_volume_t v) __attribute__((weak));
pa_cvolume*  pa_cvolume_set(pa_cvolume* a, unsigned  channels, pa_volume_t v) {
  return pa_cvolume_set_ptr(a, channels, v);
}

}  // extern "C"


namespace media_audio_pulse {

// Returns true if all stubs have been properly initialized.
bool IsPulseInitialized() {
  if (pa_threaded_mainloop_get_api_ptr &&
      pa_threaded_mainloop_free_ptr &&
      pa_threaded_mainloop_new_ptr &&
      pa_threaded_mainloop_lock_ptr &&
      pa_threaded_mainloop_in_thread_ptr &&
      pa_threaded_mainloop_signal_ptr &&
      pa_threaded_mainloop_start_ptr &&
      pa_threaded_mainloop_stop_ptr &&
      pa_threaded_mainloop_unlock_ptr &&
      pa_threaded_mainloop_wait_ptr &&
      pa_channel_map_init_ptr &&
      pa_channel_map_init_mono_ptr &&
      pa_context_connect_ptr &&
      pa_context_disconnect_ptr &&
      pa_context_get_server_info_ptr &&
      pa_context_get_source_info_by_index_ptr &&
      pa_context_get_source_info_by_name_ptr &&
      pa_context_get_source_info_list_ptr &&
      pa_context_get_sink_info_list_ptr &&
      pa_context_get_state_ptr &&
      pa_context_new_ptr &&
      pa_context_set_source_volume_by_index_ptr &&
      pa_context_set_state_callback_ptr &&
      pa_operation_get_state_ptr &&
      pa_context_unref_ptr &&
      pa_operation_unref_ptr &&
      pa_stream_begin_write_ptr &&
      pa_stream_connect_playback_ptr &&
      pa_stream_connect_record_ptr &&
      pa_stream_cork_ptr &&
      pa_stream_disconnect_ptr &&
      pa_stream_drop_ptr &&
      pa_stream_flush_ptr &&
      pa_stream_get_device_index_ptr &&
      pa_stream_get_latency_ptr &&
      pa_stream_get_state_ptr &&
      pa_stream_new_ptr &&
      pa_stream_new_with_proplist_ptr &&
      pa_proplist_new_ptr &&
      pa_proplist_contains_ptr &&
      pa_proplist_free_ptr &&
      pa_proplist_gets_ptr &&
      pa_proplist_sets_ptr &&
      pa_stream_readable_size_ptr &&
      pa_stream_peek_ptr &&
      pa_stream_set_read_callback_ptr &&
      pa_stream_set_state_callback_ptr &&
      pa_stream_write_ptr &&
      pa_stream_set_write_callback_ptr &&
      pa_stream_unref_ptr &&
      pa_context_errno_ptr &&
      pa_strerror_ptr &&
      pa_cvolume_set_ptr) {
    return true;
  } else {
    return false;
  }
}

// Initializes the module stubs.
void InitializePulse(void* module) {
  pa_threaded_mainloop_get_api_ptr =
    reinterpret_cast<pa_mainloop_api* (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_get_api"));
  if (!pa_threaded_mainloop_get_api_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_get_api, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_free_ptr =
    reinterpret_cast<void (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_free"));
  if (!pa_threaded_mainloop_free_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_free, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_new_ptr =
    reinterpret_cast<pa_threaded_mainloop* (*)()>(
      dlsym(module, "pa_threaded_mainloop_new"));
  if (!pa_threaded_mainloop_new_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_new, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_lock_ptr =
    reinterpret_cast<void (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_lock"));
  if (!pa_threaded_mainloop_lock_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_lock, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_in_thread_ptr =
    reinterpret_cast<int (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_in_thread"));
  if (!pa_threaded_mainloop_in_thread_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_in_thread, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_signal_ptr =
    reinterpret_cast<void (*)(pa_threaded_mainloop* m, int wait_for_accept)>(
      dlsym(module, "pa_threaded_mainloop_signal"));
  if (!pa_threaded_mainloop_signal_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_signal, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_start_ptr =
    reinterpret_cast<int (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_start"));
  if (!pa_threaded_mainloop_start_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_start, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_stop_ptr =
    reinterpret_cast<void (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_stop"));
  if (!pa_threaded_mainloop_stop_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_stop, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_unlock_ptr =
    reinterpret_cast<void (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_unlock"));
  if (!pa_threaded_mainloop_unlock_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_unlock, dlerror() says:\n"
      << dlerror();
  }
  pa_threaded_mainloop_wait_ptr =
    reinterpret_cast<void (*)(pa_threaded_mainloop* m)>(
      dlsym(module, "pa_threaded_mainloop_wait"));
  if (!pa_threaded_mainloop_wait_ptr) {
    VLOG(1) << "Couldn't load pa_threaded_mainloop_wait, dlerror() says:\n"
      << dlerror();
  }
  pa_channel_map_init_ptr =
    reinterpret_cast<pa_channel_map* (*)(pa_channel_map* m)>(
      dlsym(module, "pa_channel_map_init"));
  if (!pa_channel_map_init_ptr) {
    VLOG(1) << "Couldn't load pa_channel_map_init, dlerror() says:\n"
      << dlerror();
  }
  pa_channel_map_init_mono_ptr =
    reinterpret_cast<pa_channel_map* (*)(pa_channel_map* m)>(
      dlsym(module, "pa_channel_map_init_mono"));
  if (!pa_channel_map_init_mono_ptr) {
    VLOG(1) << "Couldn't load pa_channel_map_init_mono, dlerror() says:\n"
      << dlerror();
  }
  pa_context_connect_ptr =
    reinterpret_cast<int (*)(pa_context* c, const char* server, pa_context_flags_t flags, const pa_spawn_api* api)>(
      dlsym(module, "pa_context_connect"));
  if (!pa_context_connect_ptr) {
    VLOG(1) << "Couldn't load pa_context_connect, dlerror() says:\n"
      << dlerror();
  }
  pa_context_disconnect_ptr =
    reinterpret_cast<void (*)(pa_context* c)>(
      dlsym(module, "pa_context_disconnect"));
  if (!pa_context_disconnect_ptr) {
    VLOG(1) << "Couldn't load pa_context_disconnect, dlerror() says:\n"
      << dlerror();
  }
  pa_context_get_server_info_ptr =
    reinterpret_cast<pa_operation* (*)(pa_context* c, pa_server_info_cb_t cb, void* userdata)>(
      dlsym(module, "pa_context_get_server_info"));
  if (!pa_context_get_server_info_ptr) {
    VLOG(1) << "Couldn't load pa_context_get_server_info, dlerror() says:\n"
      << dlerror();
  }
  pa_context_get_source_info_by_index_ptr =
    reinterpret_cast<pa_operation* (*)(pa_context* c, uint32_t idx, pa_source_info_cb_t cb, void* userdata)>(
      dlsym(module, "pa_context_get_source_info_by_index"));
  if (!pa_context_get_source_info_by_index_ptr) {
    VLOG(1) << "Couldn't load pa_context_get_source_info_by_index, dlerror() says:\n"
      << dlerror();
  }
  pa_context_get_source_info_by_name_ptr =
    reinterpret_cast<pa_operation* (*)(pa_context* c, const char* name, pa_source_info_cb_t cb, void *userdata)>(
      dlsym(module, "pa_context_get_source_info_by_name"));
  if (!pa_context_get_source_info_by_name_ptr) {
    VLOG(1) << "Couldn't load pa_context_get_source_info_by_name, dlerror() says:\n"
      << dlerror();
  }
  pa_context_get_source_info_list_ptr =
    reinterpret_cast<pa_operation* (*)(pa_context* c, pa_source_info_cb_t cb, void* userdata)>(
      dlsym(module, "pa_context_get_source_info_list"));
  if (!pa_context_get_source_info_list_ptr) {
    VLOG(1) << "Couldn't load pa_context_get_source_info_list, dlerror() says:\n"
      << dlerror();
  }
  pa_context_get_sink_info_list_ptr =
    reinterpret_cast<pa_operation* (*)(pa_context* c, pa_sink_info_cb_t cb, void* userdata)>(
      dlsym(module, "pa_context_get_sink_info_list"));
  if (!pa_context_get_sink_info_list_ptr) {
    VLOG(1) << "Couldn't load pa_context_get_sink_info_list, dlerror() says:\n"
      << dlerror();
  }
  pa_context_get_state_ptr =
    reinterpret_cast<pa_context_state_t (*)(pa_context* c)>(
      dlsym(module, "pa_context_get_state"));
  if (!pa_context_get_state_ptr) {
    VLOG(1) << "Couldn't load pa_context_get_state, dlerror() says:\n"
      << dlerror();
  }
  pa_context_new_ptr =
    reinterpret_cast<pa_context* (*)(pa_mainloop_api* mainloop, const char* name)>(
      dlsym(module, "pa_context_new"));
  if (!pa_context_new_ptr) {
    VLOG(1) << "Couldn't load pa_context_new, dlerror() says:\n"
      << dlerror();
  }
  pa_context_set_source_volume_by_index_ptr =
    reinterpret_cast<pa_operation* (*)(pa_context* c, uint32_t idx, const pa_cvolume* volume, pa_context_success_cb_t cb, void* userdata)>(
      dlsym(module, "pa_context_set_source_volume_by_index"));
  if (!pa_context_set_source_volume_by_index_ptr) {
    VLOG(1) << "Couldn't load pa_context_set_source_volume_by_index, dlerror() says:\n"
      << dlerror();
  }
  pa_context_set_state_callback_ptr =
    reinterpret_cast<void (*)(pa_context* c, pa_context_notify_cb_t cb, void* userdata)>(
      dlsym(module, "pa_context_set_state_callback"));
  if (!pa_context_set_state_callback_ptr) {
    VLOG(1) << "Couldn't load pa_context_set_state_callback, dlerror() says:\n"
      << dlerror();
  }
  pa_operation_get_state_ptr =
    reinterpret_cast<pa_operation_state_t (*)(pa_operation* o)>(
      dlsym(module, "pa_operation_get_state"));
  if (!pa_operation_get_state_ptr) {
    VLOG(1) << "Couldn't load pa_operation_get_state, dlerror() says:\n"
      << dlerror();
  }
  pa_context_unref_ptr =
    reinterpret_cast<void (*)(pa_context* c)>(
      dlsym(module, "pa_context_unref"));
  if (!pa_context_unref_ptr) {
    VLOG(1) << "Couldn't load pa_context_unref, dlerror() says:\n"
      << dlerror();
  }
  pa_operation_unref_ptr =
    reinterpret_cast<void (*)(pa_operation* o)>(
      dlsym(module, "pa_operation_unref"));
  if (!pa_operation_unref_ptr) {
    VLOG(1) << "Couldn't load pa_operation_unref, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_begin_write_ptr =
    reinterpret_cast<int (*)(pa_stream* p, void** data, size_t* nbytes)>(
      dlsym(module, "pa_stream_begin_write"));
  if (!pa_stream_begin_write_ptr) {
    VLOG(1) << "Couldn't load pa_stream_begin_write, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_connect_playback_ptr =
    reinterpret_cast<int (*)(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags, const pa_cvolume* volume, pa_stream* sync_stream)>(
      dlsym(module, "pa_stream_connect_playback"));
  if (!pa_stream_connect_playback_ptr) {
    VLOG(1) << "Couldn't load pa_stream_connect_playback, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_connect_record_ptr =
    reinterpret_cast<int (*)(pa_stream* s, const char* dev, const pa_buffer_attr* attr, pa_stream_flags_t flags)>(
      dlsym(module, "pa_stream_connect_record"));
  if (!pa_stream_connect_record_ptr) {
    VLOG(1) << "Couldn't load pa_stream_connect_record, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_cork_ptr =
    reinterpret_cast<pa_operation* (*)(pa_stream* s, int b, pa_stream_success_cb_t cb, void* userdata)>(
      dlsym(module, "pa_stream_cork"));
  if (!pa_stream_cork_ptr) {
    VLOG(1) << "Couldn't load pa_stream_cork, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_disconnect_ptr =
    reinterpret_cast<int (*)(pa_stream* s)>(
      dlsym(module, "pa_stream_disconnect"));
  if (!pa_stream_disconnect_ptr) {
    VLOG(1) << "Couldn't load pa_stream_disconnect, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_drop_ptr =
    reinterpret_cast<int (*)(pa_stream *p)>(
      dlsym(module, "pa_stream_drop"));
  if (!pa_stream_drop_ptr) {
    VLOG(1) << "Couldn't load pa_stream_drop, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_flush_ptr =
    reinterpret_cast<pa_operation* (*)(pa_stream* s, pa_stream_success_cb_t cb, void* userdata)>(
      dlsym(module, "pa_stream_flush"));
  if (!pa_stream_flush_ptr) {
    VLOG(1) << "Couldn't load pa_stream_flush, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_get_device_index_ptr =
    reinterpret_cast<uint32_t (*)(pa_stream* s)>(
      dlsym(module, "pa_stream_get_device_index"));
  if (!pa_stream_get_device_index_ptr) {
    VLOG(1) << "Couldn't load pa_stream_get_device_index, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_get_latency_ptr =
    reinterpret_cast<int (*)(pa_stream* s, pa_usec_t* r_usec, int* negative)>(
      dlsym(module, "pa_stream_get_latency"));
  if (!pa_stream_get_latency_ptr) {
    VLOG(1) << "Couldn't load pa_stream_get_latency, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_get_state_ptr =
    reinterpret_cast<pa_stream_state_t (*)(pa_stream* p)>(
      dlsym(module, "pa_stream_get_state"));
  if (!pa_stream_get_state_ptr) {
    VLOG(1) << "Couldn't load pa_stream_get_state, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_new_ptr =
    reinterpret_cast<pa_stream* (*)(pa_context*  c, const char*  name, const pa_sample_spec*  ss, const pa_channel_map *  map)>(
      dlsym(module, "pa_stream_new"));
  if (!pa_stream_new_ptr) {
    VLOG(1) << "Couldn't load pa_stream_new, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_new_with_proplist_ptr =
    reinterpret_cast<pa_stream* (*)(pa_context* c, const char* name, const pa_sample_spec* ss, const pa_channel_map* map, pa_proplist* p)>(
      dlsym(module, "pa_stream_new_with_proplist"));
  if (!pa_stream_new_with_proplist_ptr) {
    VLOG(1) << "Couldn't load pa_stream_new_with_proplist, dlerror() says:\n"
      << dlerror();
  }
  pa_proplist_new_ptr =
    reinterpret_cast<pa_proplist* (*)(void)>(
      dlsym(module, "pa_proplist_new"));
  if (!pa_proplist_new_ptr) {
    VLOG(1) << "Couldn't load pa_proplist_new, dlerror() says:\n"
      << dlerror();
  }
  pa_proplist_contains_ptr =
    reinterpret_cast<int (*)(pa_proplist* p, const char* key)>(
      dlsym(module, "pa_proplist_contains"));
  if (!pa_proplist_contains_ptr) {
    VLOG(1) << "Couldn't load pa_proplist_contains, dlerror() says:\n"
      << dlerror();
  }
  pa_proplist_free_ptr =
    reinterpret_cast<void (*)(pa_proplist* p)>(
      dlsym(module, "pa_proplist_free"));
  if (!pa_proplist_free_ptr) {
    VLOG(1) << "Couldn't load pa_proplist_free, dlerror() says:\n"
      << dlerror();
  }
  pa_proplist_gets_ptr =
    reinterpret_cast<const char* (*)(pa_proplist* p, const char* key)>(
      dlsym(module, "pa_proplist_gets"));
  if (!pa_proplist_gets_ptr) {
    VLOG(1) << "Couldn't load pa_proplist_gets, dlerror() says:\n"
      << dlerror();
  }
  pa_proplist_sets_ptr =
    reinterpret_cast<int (*)(pa_proplist* p, const char* key, const char* value)>(
      dlsym(module, "pa_proplist_sets"));
  if (!pa_proplist_sets_ptr) {
    VLOG(1) << "Couldn't load pa_proplist_sets, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_readable_size_ptr =
    reinterpret_cast<size_t (*)(pa_stream *p)>(
      dlsym(module, "pa_stream_readable_size"));
  if (!pa_stream_readable_size_ptr) {
    VLOG(1) << "Couldn't load pa_stream_readable_size, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_peek_ptr =
    reinterpret_cast<int (*)(pa_stream* p, const void** data, size_t* nbytes)>(
      dlsym(module, "pa_stream_peek"));
  if (!pa_stream_peek_ptr) {
    VLOG(1) << "Couldn't load pa_stream_peek, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_set_read_callback_ptr =
    reinterpret_cast<void (*)(pa_stream* p, pa_stream_request_cb_t cb, void* userdata)>(
      dlsym(module, "pa_stream_set_read_callback"));
  if (!pa_stream_set_read_callback_ptr) {
    VLOG(1) << "Couldn't load pa_stream_set_read_callback, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_set_state_callback_ptr =
    reinterpret_cast<void (*)(pa_stream* s, pa_stream_notify_cb_t cb, void* userdata)>(
      dlsym(module, "pa_stream_set_state_callback"));
  if (!pa_stream_set_state_callback_ptr) {
    VLOG(1) << "Couldn't load pa_stream_set_state_callback, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_write_ptr =
    reinterpret_cast<int (*)(pa_stream* p, const void* data, size_t nbytes, pa_free_cb_t free_cb, int64_t offset, pa_seek_mode_t seek)>(
      dlsym(module, "pa_stream_write"));
  if (!pa_stream_write_ptr) {
    VLOG(1) << "Couldn't load pa_stream_write, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_set_write_callback_ptr =
    reinterpret_cast<void (*)(pa_stream *p, pa_stream_request_cb_t cb, void *userdata)>(
      dlsym(module, "pa_stream_set_write_callback"));
  if (!pa_stream_set_write_callback_ptr) {
    VLOG(1) << "Couldn't load pa_stream_set_write_callback, dlerror() says:\n"
      << dlerror();
  }
  pa_stream_unref_ptr =
    reinterpret_cast<void (*)(pa_stream* s)>(
      dlsym(module, "pa_stream_unref"));
  if (!pa_stream_unref_ptr) {
    VLOG(1) << "Couldn't load pa_stream_unref, dlerror() says:\n"
      << dlerror();
  }
  pa_context_errno_ptr =
    reinterpret_cast<int (*)(pa_context *c)>(
      dlsym(module, "pa_context_errno"));
  if (!pa_context_errno_ptr) {
    VLOG(1) << "Couldn't load pa_context_errno, dlerror() says:\n"
      << dlerror();
  }
  pa_strerror_ptr =
    reinterpret_cast<const char* (*)(int error)>(
      dlsym(module, "pa_strerror"));
  if (!pa_strerror_ptr) {
    VLOG(1) << "Couldn't load pa_strerror, dlerror() says:\n"
      << dlerror();
  }
  pa_cvolume_set_ptr =
    reinterpret_cast<pa_cvolume* (*)(pa_cvolume* a, unsigned  channels, pa_volume_t v)>(
      dlsym(module, "pa_cvolume_set"));
  if (!pa_cvolume_set_ptr) {
    VLOG(1) << "Couldn't load pa_cvolume_set, dlerror() says:\n"
      << dlerror();
  }
}

// Uninitialize the module stubs.  Reset pointers to NULL.
void UninitializePulse() {
  pa_threaded_mainloop_get_api_ptr = NULL;
  pa_threaded_mainloop_free_ptr = NULL;
  pa_threaded_mainloop_new_ptr = NULL;
  pa_threaded_mainloop_lock_ptr = NULL;
  pa_threaded_mainloop_in_thread_ptr = NULL;
  pa_threaded_mainloop_signal_ptr = NULL;
  pa_threaded_mainloop_start_ptr = NULL;
  pa_threaded_mainloop_stop_ptr = NULL;
  pa_threaded_mainloop_unlock_ptr = NULL;
  pa_threaded_mainloop_wait_ptr = NULL;
  pa_channel_map_init_ptr = NULL;
  pa_channel_map_init_mono_ptr = NULL;
  pa_context_connect_ptr = NULL;
  pa_context_disconnect_ptr = NULL;
  pa_context_get_server_info_ptr = NULL;
  pa_context_get_source_info_by_index_ptr = NULL;
  pa_context_get_source_info_by_name_ptr = NULL;
  pa_context_get_source_info_list_ptr = NULL;
  pa_context_get_sink_info_list_ptr = NULL;
  pa_context_get_state_ptr = NULL;
  pa_context_new_ptr = NULL;
  pa_context_set_source_volume_by_index_ptr = NULL;
  pa_context_set_state_callback_ptr = NULL;
  pa_operation_get_state_ptr = NULL;
  pa_context_unref_ptr = NULL;
  pa_operation_unref_ptr = NULL;
  pa_stream_begin_write_ptr = NULL;
  pa_stream_connect_playback_ptr = NULL;
  pa_stream_connect_record_ptr = NULL;
  pa_stream_cork_ptr = NULL;
  pa_stream_disconnect_ptr = NULL;
  pa_stream_drop_ptr = NULL;
  pa_stream_flush_ptr = NULL;
  pa_stream_get_device_index_ptr = NULL;
  pa_stream_get_latency_ptr = NULL;
  pa_stream_get_state_ptr = NULL;
  pa_stream_new_ptr = NULL;
  pa_stream_new_with_proplist_ptr = NULL;
  pa_proplist_new_ptr = NULL;
  pa_proplist_contains_ptr = NULL;
  pa_proplist_free_ptr = NULL;
  pa_proplist_gets_ptr = NULL;
  pa_proplist_sets_ptr = NULL;
  pa_stream_readable_size_ptr = NULL;
  pa_stream_peek_ptr = NULL;
  pa_stream_set_read_callback_ptr = NULL;
  pa_stream_set_state_callback_ptr = NULL;
  pa_stream_write_ptr = NULL;
  pa_stream_set_write_callback_ptr = NULL;
  pa_stream_unref_ptr = NULL;
  pa_context_errno_ptr = NULL;
  pa_strerror_ptr = NULL;
  pa_cvolume_set_ptr = NULL;
}

}  // namespace media_audio_pulse

namespace media_audio_pulse {
typedef std::map<StubModules, void*> StubHandleMap;
static void CloseLibraries(StubHandleMap* stub_handles) {
  for (StubHandleMap::const_iterator it = stub_handles->begin();
       it != stub_handles->end();
       ++it) {
    dlclose(it->second);
  }

  stub_handles->clear();
}
bool InitializeStubs(const StubPathMap& path_map) {
  StubHandleMap opened_libraries;
  for (int i = 0; i < kNumStubModules; ++i) {
    StubModules cur_module = static_cast<StubModules>(i);
    // If a module is missing, we fail.
    StubPathMap::const_iterator it = path_map.find(cur_module);
    if (it == path_map.end()) {
      CloseLibraries(&opened_libraries);
      return false;
    }

    // Otherwise, attempt to dlopen the library.
    const std::vector<std::string>& paths = it->second;
    bool module_opened = false;
    for (std::vector<std::string>::const_iterator dso_path = paths.begin();
         !module_opened && dso_path != paths.end();
         ++dso_path) {
      void* handle = dlopen(dso_path->c_str(), RTLD_LAZY);
      if (handle != NULL) {
        module_opened = true;
        opened_libraries[cur_module] = handle;
      } else {
        VLOG(1) << "dlopen(" << dso_path->c_str() << ") failed, "
                << "dlerror() says:\n" << dlerror();
      }
    }

    if (!module_opened) {
      CloseLibraries(&opened_libraries);
      return false;
    }
  }

  // Initialize each module if we have not already failed.
  InitializePulse(opened_libraries[kModulePulse]);

  // Check that each module is initialized correctly.
  // Close all previously opened libraries on failure.
  if (!IsPulseInitialized()) {
    UninitializePulse();
    CloseLibraries(&opened_libraries);
    return false;
  }

  return true;
}

}  // namespace media_audio_pulse
