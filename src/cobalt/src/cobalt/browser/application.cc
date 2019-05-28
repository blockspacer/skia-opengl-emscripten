// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#if defined(STARBOARD)
#include "starboard/client_porting/poem/stdio_leaks_poem.h"
#endif

#include "cobalt/browser/application.h"

#include <algorithm>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "base/base64.h"
#include "base/base64url.h"
#include "base/command_line.h"
#include "base/lazy_instance.h"
#include "base/logging.h"
#include "base/optional.h"
#include "base/path_service.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "base/task/task_scheduler/task_scheduler.h"
#include "base/time/time.h"
#include "base/trace_event/trace_event.h"
#include "build/build_config.h"
#include "cobalt/base/accessibility_caption_settings_changed_event.h"
#include "cobalt/base/accessibility_settings_changed_event.h"
#include "cobalt/base/application_event.h"
#include "cobalt/base/cobalt_paths.h"
#include "cobalt/base/deep_link_event.h"
#include "cobalt/base/get_application_key.h"
#include "cobalt/base/init_cobalt.h"
#include "cobalt/base/language.h"
#include "cobalt/base/localized_strings.h"
#include "cobalt/base/on_screen_keyboard_blurred_event.h"
#include "cobalt/base/on_screen_keyboard_focused_event.h"
#include "cobalt/base/on_screen_keyboard_hidden_event.h"
#include "cobalt/base/on_screen_keyboard_shown_event.h"
#include "cobalt/base/on_screen_keyboard_suggestions_updated_event.h"
#include "cobalt/base/startup_timer.h"
#include "cobalt/base/user_log.h"
#if defined(COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS)
#include "cobalt/base/version_compatibility.h"
#endif  // defined(COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS)
#include "cobalt/base/window_size_changed_event.h"
#include "cobalt/browser/memory_settings/auto_mem_settings.h"
#include "cobalt/browser/memory_tracker/tool.h"
#include "cobalt/browser/switches.h"
#include "cobalt/loader/image/image_decoder.h"
#include "cobalt/math/size.h"
#include "cobalt/script/javascript_engine.h"
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
#include "cobalt/storage/savegame_fake.h"
#endif  // defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
#include "cobalt/system_window/input_event.h"
#include "cobalt/trace_event/scoped_trace_to_file.h"
#include "crypto/hmac.h"
#include "net/base/escape.h"
#include "starboard/configuration.h"
#include "url/gurl.h"

using cobalt::cssom::ViewportSize;

namespace cobalt {
namespace browser {

namespace {
const int kStatUpdatePeriodMs = 1000;

const char kDefaultURL[] = "https://www.youtube.com/tv";

bool IsStringNone(const std::string& str) {
  return !base::strcasecmp(str.c_str(), "none");
}

#if defined(ENABLE_DEBUGGER)
int GetRemoteDebuggingPort() {
#if defined(SB_OVERRIDE_DEFAULT_REMOTE_DEBUGGING_PORT)
  const unsigned int kDefaultRemoteDebuggingPort =
      SB_OVERRIDE_DEFAULT_REMOTE_DEBUGGING_PORT;
#else
  const unsigned int kDefaultRemoteDebuggingPort = 9222;
#endif  // defined(SB_OVERRIDE_DEFAULT_REMOTE_DEBUGGING_PORT)
  unsigned int remote_debugging_port = kDefaultRemoteDebuggingPort;
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kRemoteDebuggingPort)) {
    std::string switch_value =
        command_line->GetSwitchValueASCII(switches::kRemoteDebuggingPort);
    if (!base::StringToUint(switch_value, &remote_debugging_port)) {
      DLOG(ERROR) << "Invalid port specified for remote debug server: "
                  << switch_value
                  << ". Using default port: " << kDefaultRemoteDebuggingPort;
      remote_debugging_port = kDefaultRemoteDebuggingPort;
    }
  }
  DCHECK(remote_debugging_port != 0 ||
         !command_line->HasSwitch(switches::kWaitForWebDebugger))
      << switches::kWaitForWebDebugger << " switch can't be used when "
      << switches::kRemoteDebuggingPort << " is 0 (disabled).";
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  return uint16_t(remote_debugging_port);
}
#endif  // ENABLE_DEBUGGER

#if defined(ENABLE_WEBDRIVER)
int GetWebDriverPort() {
  // The default port on which the webdriver server should listen for incoming
  // connections.
#if defined(SB_OVERRIDE_DEFAULT_WEBDRIVER_PORT)
  const int kDefaultWebDriverPort = SB_OVERRIDE_DEFAULT_WEBDRIVER_PORT;
#else
  const int kDefaultWebDriverPort = 4444;
#endif  // defined(SB_OVERRIDE_DEFAULT_WEBDRIVER_PORT)
  int webdriver_port = kDefaultWebDriverPort;
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kWebDriverPort)) {
    if (!base::StringToInt(
            command_line->GetSwitchValueASCII(switches::kWebDriverPort),
            &webdriver_port)) {
      DLOG(ERROR) << "Invalid port specified for WebDriver server: "
                  << command_line->GetSwitchValueASCII(switches::kWebDriverPort)
                  << ". Using default port: " << kDefaultWebDriverPort;
      webdriver_port = kDefaultWebDriverPort;
    }
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  return webdriver_port;
}

std::string GetWebDriverListenIp() {
  // The default IP on which the webdriver server should listen for incoming
  // connections.
  std::string webdriver_listen_ip =
      webdriver::WebDriverModule::kDefaultListenIp;
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kWebDriverListenIp)) {
    webdriver_listen_ip =
        command_line->GetSwitchValueASCII(switches::kWebDriverListenIp);
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  return webdriver_listen_ip;
}
#endif  // ENABLE_WEBDRIVER

#if SB_API_VERSION >= SB_HAS_STARTUP_URL_SIGNING_VERSION
std::string NumberToFourByteString(size_t n) {
  std::string str;
  str += static_cast<char>(((n & 0xff000000) >> 24));
  str += static_cast<char>(((n & 0x00ff0000) >> 16));
  str += static_cast<char>(((n & 0x0000ff00) >> 8));
  str += static_cast<char>((n & 0x000000ff));
  return str;
}

std::string BuildMessageFragment(const std::string& key,
                                 const std::string& value) {
  std::string msg_fragment = NumberToFourByteString(key.length()) + key +
                             NumberToFourByteString(value.length()) + value;
  return msg_fragment;
}

std::string ComputeSignature(const std::string& cert_scope,
                             const std::string& start_time,
                             const std::string& base_64_secret) {
  const size_t kSHA256DigestSize = 32;

  // Build signed_msg from cert_scope and start_time.
  std::string signed_msg = BuildMessageFragment("cert_scope", cert_scope);
  signed_msg += BuildMessageFragment("start_time", start_time);

  // Decode secret from base_64_secret.
  std::string secret;
  base::Base64Decode(base_64_secret, &secret);

  // Generate signature from signed_msg using HMAC-SHA256.
  unsigned char signature_hash[kSHA256DigestSize] = {0};
  crypto::HMAC hmac(crypto::HMAC::SHA256);
  if (!hmac.Init(secret)) {
    DLOG(ERROR) << "Unable to initialize HMAC-SHA256.";
  }
  if (!hmac.Sign(signed_msg, signature_hash, kSHA256DigestSize)) {
    DLOG(ERROR) << "Unable to sign HMAC-SHA256.";
  }
  std::string signature(signature_hash, signature_hash + kSHA256DigestSize);

  // Encode base_64_url_signature from signature.
  std::string base_64_url_signature;
  base::Base64UrlEncode(signature, base::Base64UrlEncodePolicy::OMIT_PADDING,
                        &base_64_url_signature);

  return base_64_url_signature;
}
#endif  // SB_API_VERSION >= SB_HAS_STARTUP_URL_SIGNING_VERSION

GURL GetInitialURL() {
  GURL initial_url = GURL(kDefaultURL);
  // Allow the user to override the default URL via a command line parameter.
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kInitialURL)) {
    GURL url = GURL(command_line->GetSwitchValueASCII(switches::kInitialURL));
    if (url.is_valid()) {
      initial_url = url;
    } else {
      DLOG(ERROR) << "URL from parameter " << command_line
                  << " is not valid, using default URL.";
    }
  }

#if SB_API_VERSION >= SB_HAS_STARTUP_URL_SIGNING_VERSION
  // Get cert_scope and base_64_secret
  const size_t kCertificationScopeLength = 1023;
  char cert_scope_property[kCertificationScopeLength + 1] = {0};
  bool result =
      SbSystemGetProperty(kSbSystemPropertyCertificationScope,
                          cert_scope_property, kCertificationScopeLength);
  if (!result) {
    DLOG(ERROR) << "Unable to get kSbSystemPropertyCertificationScope";
    return initial_url;
  }
  std::string cert_scope(cert_scope_property);

  const size_t kBase64EncodedCertificationSecretLength = 1023;
  char base_64_secret_property[kBase64EncodedCertificationSecretLength + 1] = {
      0};
  result = SbSystemGetProperty(
      kSbSystemPropertyBase64EncodedCertificationSecret,
      base_64_secret_property, kBase64EncodedCertificationSecretLength);
  if (!result) {
    DLOG(ERROR)
        << "Unable to get kSbSystemPropertyBase64EncodedCertificationSecret";
    return initial_url;
  }
  std::string base_64_secret(base_64_secret_property);

  // Get current unix time in seconds.
  std::string start_time =
      std::to_string(static_cast<int64>(base::Time::Now().ToDoubleT()));

  // Add signed_query to the initial_url.
  std::map<std::string, std::string> signed_query;
  signed_query["cert_scope"] = cert_scope;
  signed_query["start_time"] = start_time;
  signed_query["sig"] =
      ComputeSignature(cert_scope, start_time, base_64_secret);

  std::string query = initial_url.query();
  std::map<std::string, std::string>::iterator it = signed_query.begin();
  while (it != signed_query.end()) {
    std::string key = it->first;
    std::string value = it->second;

    if (!query.empty()) query += "&";
    query += net::EscapeQueryParamValue(key, true);
    if (!value.empty()) {
      query += "=" + net::EscapeQueryParamValue(value, true);
    }
    it++;
  }

  GURL::Replacements replacements;
  replacements.SetQueryStr(query);
  initial_url = initial_url.ReplaceComponents(replacements);
#endif  // SB_API_VERSION >= SB_HAS_STARTUP_URL_SIGNING_VERSION

  return initial_url;
}

base::Optional<GURL> GetFallbackSplashScreenURL() {
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  std::string fallback_splash_screen_string;
  if (command_line->HasSwitch(switches::kFallbackSplashScreenURL)) {
    fallback_splash_screen_string =
        command_line->GetSwitchValueASCII(switches::kFallbackSplashScreenURL);
  } else {
    fallback_splash_screen_string = COBALT_FALLBACK_SPLASH_SCREEN_URL;
  }
  if (IsStringNone(fallback_splash_screen_string)) {
    return base::Optional<GURL>();
  }
  base::Optional<GURL> fallback_splash_screen_url =
      GURL(fallback_splash_screen_string);
  if (!fallback_splash_screen_url->is_valid() ||
      !(fallback_splash_screen_url->SchemeIsFile() ||
        fallback_splash_screen_url->SchemeIs("h5vcc-embedded"))) {
    LOG(FATAL) << "Ignoring invalid fallback splash screen: "
               << fallback_splash_screen_string;
  }
  return fallback_splash_screen_url;
}

base::TimeDelta GetTimedTraceDuration() {
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  int duration_in_seconds = 0;
  if (command_line->HasSwitch(switches::kTimedTrace) &&
      base::StringToInt(
          command_line->GetSwitchValueASCII(switches::kTimedTrace),
          &duration_in_seconds)) {
    return base::TimeDelta::FromSeconds(duration_in_seconds);
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES

  return base::TimeDelta();
}

base::FilePath GetExtraWebFileDir() {
  // Default is empty, command line can override.
  base::FilePath result;

#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kExtraWebFileDir)) {
    result = base::FilePath(
        command_line->GetSwitchValueASCII(switches::kExtraWebFileDir));
    if (!result.IsAbsolute()) {
      // Non-absolute paths are relative to the executable directory.
      base::FilePath content_path;
      base::PathService::Get(base::DIR_EXE, &content_path);
      result = content_path.DirName().DirName().Append(result);
    }
    DLOG(INFO) << "Extra web file dir: " << result.value();
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES

  return result;
}

#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
void EnableUsingStubImageDecoderIfRequired() {
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kStubImageDecoder)) {
    loader::image::ImageDecoder::UseStubImageDecoder();
  }
}
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES

base::Optional<cssom::ViewportSize> GetRequestedViewportSize(
    base::CommandLine* command_line) {
  DCHECK(command_line);
  if (!command_line->HasSwitch(browser::switches::kViewport)) {
    return base::nullopt;
  }

  std::string switch_value =
      command_line->GetSwitchValueASCII(browser::switches::kViewport);

  std::vector<std::string> lengths = base::SplitString(
      switch_value, "x", base::TRIM_WHITESPACE, base::SPLIT_WANT_ALL);

  if (lengths.empty()) {
    DLOG(ERROR) << "Viewport " << switch_value << " is invalid.";
    return base::nullopt;
  }

  int width = 0;
  if (!base::StringToInt(lengths[0], &width)) {
    DLOG(ERROR) << "Viewport " << switch_value << " has invalid width.";
    return base::nullopt;
  }

  if (lengths.size() < 2) {
    // Allow shorthand specification of the viewport by only giving the
    // width. This calculates the height at 4:3 aspect ratio for smaller
    // viewport widths, and 16:9 for viewports 1280 pixels wide or larger.
    if (width >= 1280) {
      return ViewportSize(width, 9 * width / 16, 0);
    }
    return ViewportSize(width, 3 * width / 4, 0);
  }

  int height = 0;
  if (!base::StringToInt(lengths[1], &height)) {
    DLOG(ERROR) << "Viewport " << switch_value << " has invalid height.";
    return base::nullopt;
  }

  if (lengths.size() < 3) {
    return ViewportSize(width, height);
  }

  double screen_diagonal_inches = 0.0;
  if (!base::StringToDouble(lengths[2], &screen_diagonal_inches)) {
    DLOG(ERROR) << "Viewport " << switch_value
                << " has invalid screen_diagonal_inches.";
    return base::nullopt;
  }
  return ViewportSize(width, height,
                      static_cast<float>(screen_diagonal_inches));
}

std::string GetMinLogLevelString() {
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(switches::kMinLogLevel)) {
    return command_line->GetSwitchValueASCII(switches::kMinLogLevel);
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  return "info";
}

int StringToLogLevel(const std::string& log_level) {
  if (log_level == "info") {
    return logging::LOG_INFO;
  } else if (log_level == "warning") {
    return logging::LOG_WARNING;
  } else if (log_level == "error") {
    return logging::LOG_ERROR;
  } else if (log_level == "fatal") {
    return logging::LOG_FATAL;
  } else {
    NOTREACHED() << "Unrecognized logging level: " << log_level;
    return logging::LOG_INFO;
  }
}

void SetIntegerIfSwitchIsSet(const char* switch_name, int* output) {
  if (base::CommandLine::ForCurrentProcess()->HasSwitch(switch_name)) {
    int32 out;
    if (base::StringToInt32(
            base::CommandLine::ForCurrentProcess()->GetSwitchValueNative(
                switch_name),
            &out)) {
      LOG(INFO) << "Command line switch '" << switch_name << "': Modifying "
                << *output << " -> " << out;
      *output = out;
    } else {
      LOG(ERROR) << "Invalid value for command line setting: " << switch_name;
    }
  }
}

void ApplyCommandLineSettingsToRendererOptions(
    renderer::RendererModule::Options* options) {
  SetIntegerIfSwitchIsSet(browser::switches::kScratchSurfaceCacheSizeInBytes,
                          &options->scratch_surface_cache_size_in_bytes);
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  auto command_line = base::CommandLine::ForCurrentProcess();
  if (command_line->HasSwitch(browser::switches::kDisableRasterizerCaching) ||
      command_line->HasSwitch(
          browser::switches::kForceDeterministicRendering)) {
    options->force_deterministic_rendering = true;
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
}

struct NonTrivialStaticFields {
  NonTrivialStaticFields() : system_language(base::GetSystemLanguage()) {}

  const std::string system_language;
  std::string user_agent;

 private:
  DISALLOW_COPY_AND_ASSIGN(NonTrivialStaticFields);
};

struct SecurityFlags {
  csp::CSPHeaderPolicy csp_header_policy;
  network::HTTPSRequirement https_requirement;
};

// |non_trivial_static_fields| will be lazily created on the first time it's
// accessed.
base::LazyInstance<NonTrivialStaticFields>::DestructorAtExit
    non_trivial_static_fields = LAZY_INSTANCE_INITIALIZER;
}  // namespace

// Static user logs
ssize_t Application::available_memory_ = 0;
int64 Application::lifetime_in_ms_ = 0;

Application::AppStatus Application::app_status_ =
    Application::kUninitializedAppStatus;
int Application::app_pause_count_ = 0;
int Application::app_unpause_count_ = 0;
int Application::app_suspend_count_ = 0;
int Application::app_resume_count_ = 0;

Application::NetworkStatus Application::network_status_ =
    Application::kDisconnectedNetworkStatus;
int Application::network_connect_count_ = 0;
int Application::network_disconnect_count_ = 0;

Application::Application(const base::Closure& quit_closure, bool should_preload)
    : message_loop_(base::MessageLoop::current()), quit_closure_(quit_closure) {
  DCHECK(!quit_closure_.is_null());
  // Check to see if a timed_trace has been set, indicating that we should
  // begin a timed trace upon startup.
  base::TimeDelta trace_duration = GetTimedTraceDuration();
  if (trace_duration != base::TimeDelta()) {
    trace_event::TraceToFileForDuration(
        base::FilePath(FILE_PATH_LITERAL("timed_trace.json")), trace_duration);
  }

  TRACE_EVENT0("cobalt::browser", "Application::Application()");

  DCHECK(base::MessageLoop::current());
  DCHECK_EQ(
      base::MessageLoop::TYPE_UI,
      static_cast<base::MessageLoop*>(base::MessageLoop::current())->type());

  network_event_thread_checker_.DetachFromThread();
  application_event_thread_checker_.DetachFromThread();

  RegisterUserLogs();

  // Set the minimum logging level, if specified on the command line.
  logging::SetMinLogLevel(StringToLogLevel(GetMinLogLevelString()));

  stats_update_timer_.Start(
      FROM_HERE, base::TimeDelta::FromMilliseconds(kStatUpdatePeriodMs),
      base::Bind(&Application::UpdatePeriodicStats, base::Unretained(this)));

  // Get the initial URL.
  GURL initial_url = GetInitialURL();
  DLOG(INFO) << "Initial URL: " << initial_url;

  // Get the fallback splash screen URL.
  base::Optional<GURL> fallback_splash_screen_url =
      GetFallbackSplashScreenURL();
  DLOG(INFO) << "Fallback splash screen URL: "
             << (fallback_splash_screen_url ? fallback_splash_screen_url->spec()
                                            : "none");

  // Get the system language and initialize our localized strings.
  std::string language = base::GetSystemLanguage();
  base::LocalizedStrings::GetInstance()->Initialize(language);

  // A one-per-process task scheduler is needed for usage of APIs in
  // base/post_task.h which will be used by some net APIs like
  // URLRequestContext;
  base::TaskScheduler::CreateAndStartWithDefaultParams("Cobalt TaskScheduler");

  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();
  base::Optional<cssom::ViewportSize> requested_viewport_size =
      GetRequestedViewportSize(command_line);

  WebModule::Options web_options;
  // Create the main components of our browser.
  BrowserModule::Options options(web_options);
  options.web_module_options.name = "MainWebModule";
  options.initial_deep_link = GetInitialDeepLink();
  options.network_module_options.preferred_language = language;
  options.command_line_auto_mem_settings =
      memory_settings::GetSettings(*command_line);
  options.build_auto_mem_settings = memory_settings::GetDefaultBuildSettings();
  options.fallback_splash_screen_url = fallback_splash_screen_url;

  if (command_line->HasSwitch(browser::switches::kFPSPrint)) {
    options.renderer_module_options.enable_fps_stdout = true;
  }
  if (command_line->HasSwitch(browser::switches::kFPSOverlay)) {
    options.renderer_module_options.enable_fps_overlay = true;
  }

  ApplyCommandLineSettingsToRendererOptions(&options.renderer_module_options);

  if (command_line->HasSwitch(browser::switches::kDisableJavaScriptJit)) {
    options.web_module_options.javascript_engine_options.disable_jit = true;
  }

  if (command_line->HasSwitch(
          browser::switches::kRetainRemoteTypefaceCacheDuringSuspend)) {
    options.web_module_options.should_retain_remote_typeface_cache_on_suspend =
        true;
  }

#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  if (command_line->HasSwitch(browser::switches::kNullSavegame)) {
    options.storage_manager_options.savegame_options.factory =
        &storage::SavegameFake::Create;
  }
#if SB_HAS(ON_SCREEN_KEYBOARD)
  if (command_line->HasSwitch(browser::switches::kDisableOnScreenKeyboard)) {
    options.enable_on_screen_keyboard = false;
  }
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

#endif  // defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)

#if defined(COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS)
  constexpr int kDefaultMinCompatibilityVersion = 1;
  int minimum_version = kDefaultMinCompatibilityVersion;
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  if (command_line->HasSwitch(browser::switches::kMinCompatibilityVersion)) {
    std::string switch_value =
        command_line->GetSwitchValueASCII(switches::kMinCompatibilityVersion);
    if (!base::StringToInt(switch_value, &minimum_version)) {
      DLOG(ERROR) << "Invalid min_compatibility_version provided.";
    }
  }
#endif  // defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  base::VersionCompatibility::GetInstance()->SetMinimumVersion(minimum_version);
#endif  // defined(COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS)

  base::Optional<std::string> partition_key;
  if (command_line->HasSwitch(browser::switches::kLocalStoragePartitionUrl)) {
    std::string local_storage_partition_url = command_line->GetSwitchValueASCII(
        browser::switches::kLocalStoragePartitionUrl);
    partition_key = base::GetApplicationKey(GURL(local_storage_partition_url));
    CHECK(partition_key) << "local_storage_partition_url is not a valid URL.";
  } else {
    partition_key = base::GetApplicationKey(initial_url);
  }
  options.storage_manager_options.savegame_options.id = partition_key;

  base::Optional<std::string> default_key =
      base::GetApplicationKey(GURL(kDefaultURL));
  if (command_line->HasSwitch(
          browser::switches::kForceMigrationForStoragePartitioning) ||
      partition_key == default_key) {
    options.storage_manager_options.savegame_options.fallback_to_default_id =
        true;
  }

  // User can specify an extra search path entry for files loaded via file://.
  options.web_module_options.extra_web_file_dir = GetExtraWebFileDir();
  SecurityFlags security_flags{csp::kCSPRequired, network::kHTTPSRequired};
  // Set callback to be notified when a navigation occurs that destroys the
  // underlying WebModule.
  options.web_module_recreated_callback =
      base::Bind(&Application::WebModuleRecreated, base::Unretained(this));

  // The main web module's stat tracker tracks event stats.
  options.web_module_options.track_event_stats = true;

  if (command_line->HasSwitch(browser::switches::kProxy)) {
    options.network_module_options.custom_proxy =
        command_line->GetSwitchValueASCII(browser::switches::kProxy);
  }

#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
#if defined(ENABLE_IGNORE_CERTIFICATE_ERRORS)
  if (command_line->HasSwitch(browser::switches::kIgnoreCertificateErrors)) {
    options.network_module_options.ignore_certificate_errors = true;
  }
#endif  // defined(ENABLE_IGNORE_CERTIFICATE_ERRORS)

  if (!command_line->HasSwitch(switches::kRequireHTTPSLocation)) {
    security_flags.https_requirement = network::kHTTPSOptional;
  }

  if (!command_line->HasSwitch(browser::switches::kRequireCSP)) {
    security_flags.csp_header_policy = csp::kCSPOptional;
  }

  if (command_line->HasSwitch(browser::switches::kProd)) {
    security_flags.https_requirement = network::kHTTPSRequired;
    security_flags.csp_header_policy = csp::kCSPRequired;
  }

  if (command_line->HasSwitch(switches::kVideoPlaybackRateMultiplier)) {
    double playback_rate = 1.0;
    base::StringToDouble(command_line->GetSwitchValueASCII(
                             switches::kVideoPlaybackRateMultiplier),
                         &playback_rate);
    options.web_module_options.video_playback_rate_multiplier =
        static_cast<float>(playback_rate);
    DLOG(INFO) << "Set video playback rate multiplier to "
               << options.web_module_options.video_playback_rate_multiplier;
  }

  EnableUsingStubImageDecoderIfRequired();

  if (command_line->HasSwitch(browser::switches::kDisableWebmVp9)) {
    DLOG(INFO) << "Webm/Vp9 disabled";
    options.media_module_options.disable_webm_vp9 = true;
  }
  if (command_line->HasSwitch(switches::kAudioDecoderStub)) {
    DLOG(INFO) << "Use ShellRawAudioDecoderStub";
    options.media_module_options.use_audio_decoder_stub = true;
  }
  if (command_line->HasSwitch(switches::kNullAudioStreamer)) {
    DLOG(INFO) << "Use null audio";
    options.media_module_options.use_null_audio_streamer = true;
  }
  if (command_line->HasSwitch(switches::kVideoDecoderStub)) {
    DLOG(INFO) << "Use ShellRawVideoDecoderStub";
    options.media_module_options.use_video_decoder_stub = true;
  }
  if (command_line->HasSwitch(switches::kMemoryTracker)) {
    std::string command_arg =
        command_line->GetSwitchValueASCII(switches::kMemoryTracker);
    memory_tracker_tool_ = memory_tracker::CreateMemoryTrackerTool(command_arg);
  }

  if (command_line->HasSwitch(switches::kDisableImageAnimations)) {
    options.web_module_options.enable_image_animations = false;
  }
  if (command_line->HasSwitch(switches::kDisableSplashScreenOnReloads)) {
    options.enable_splash_screen_on_reloads = false;
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES

// Production-builds override all switches to the most secure configuration.
#if defined(COBALT_FORCE_HTTPS)
  security_flags.https_requirement = network::kHTTPSRequired;
#endif  // defined(COBALT_FORCE_HTTPS)

#if defined(COBALT_FORCE_CSP)
  security_flags.csp_header_policy = csp::kCSPRequired;
#endif  // defined(COBALT_FORCE_CSP)

  options.network_module_options.https_requirement =
      security_flags.https_requirement;
  options.web_module_options.require_csp = security_flags.csp_header_policy;
  options.web_module_options.csp_enforcement_mode = dom::kCspEnforcementEnable;

  options.requested_viewport_size = requested_viewport_size;
  account_manager_.reset(new account::AccountManager());
  browser_module_.reset(
      new BrowserModule(initial_url,
                        (should_preload ? base::kApplicationStatePreloading
                                        : base::kApplicationStateStarted),
                        &event_dispatcher_, account_manager_.get(), options));
  UpdateAndMaybeRegisterUserAgent();

  app_status_ = (should_preload ? kPreloadingAppStatus : kRunningAppStatus);

  // Register event callbacks.
  deep_link_event_callback_ =
      base::Bind(&Application::OnDeepLinkEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(base::DeepLinkEvent::TypeId(),
                                     deep_link_event_callback_);
#if SB_API_VERSION >= 8
  window_size_change_event_callback_ = base::Bind(
      &Application::OnWindowSizeChangedEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(base::WindowSizeChangedEvent::TypeId(),
                                     window_size_change_event_callback_);
#endif  // SB_API_VERSION >= 8
#if SB_HAS(ON_SCREEN_KEYBOARD)
  on_screen_keyboard_shown_event_callback_ = base::Bind(
      &Application::OnOnScreenKeyboardShownEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(base::OnScreenKeyboardShownEvent::TypeId(),
                                     on_screen_keyboard_shown_event_callback_);
  on_screen_keyboard_hidden_event_callback_ = base::Bind(
      &Application::OnOnScreenKeyboardHiddenEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(
      base::OnScreenKeyboardHiddenEvent::TypeId(),
      on_screen_keyboard_hidden_event_callback_);
  on_screen_keyboard_focused_event_callback_ = base::Bind(
      &Application::OnOnScreenKeyboardFocusedEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(
      base::OnScreenKeyboardFocusedEvent::TypeId(),
      on_screen_keyboard_focused_event_callback_);
  on_screen_keyboard_blurred_event_callback_ = base::Bind(
      &Application::OnOnScreenKeyboardBlurredEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(
      base::OnScreenKeyboardBlurredEvent::TypeId(),
      on_screen_keyboard_blurred_event_callback_);
#if SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
  on_screen_keyboard_suggestions_updated_event_callback_ =
      base::Bind(&Application::OnOnScreenKeyboardSuggestionsUpdatedEvent,
                 base::Unretained(this));
  event_dispatcher_.AddEventCallback(
      base::OnScreenKeyboardSuggestionsUpdatedEvent::TypeId(),
      on_screen_keyboard_suggestions_updated_event_callback_);
#endif  // SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

#if SB_HAS(CAPTIONS)
  on_caption_settings_changed_event_callback_ = base::Bind(
      &Application::OnCaptionSettingsChangedEvent, base::Unretained(this));
  event_dispatcher_.AddEventCallback(
      base::AccessibilityCaptionSettingsChangedEvent::TypeId(),
      on_caption_settings_changed_event_callback_);
#endif  // SB_HAS(CAPTIONS)
#if defined(ENABLE_WEBDRIVER)
#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  bool create_webdriver_module =
      !command_line->HasSwitch(switches::kDisableWebDriver);
#else
  bool create_webdriver_module = true;
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
  if (create_webdriver_module) {
    web_driver_module_.reset(new webdriver::WebDriverModule(
        GetWebDriverPort(), GetWebDriverListenIp(),
        base::Bind(&BrowserModule::CreateSessionDriver,
                   base::Unretained(browser_module_.get())),
        base::Bind(&BrowserModule::RequestScreenshotToMemory,
                   base::Unretained(browser_module_.get())),
        base::Bind(&BrowserModule::SetProxy,
                   base::Unretained(browser_module_.get())),
        base::Bind(&Application::Quit, base::Unretained(this))));
  }
#endif  // ENABLE_WEBDRIVER

#if defined(ENABLE_DEBUGGER)
  int remote_debugging_port = GetRemoteDebuggingPort();
  if (remote_debugging_port == 0) {
    DLOG(INFO) << "Remote web debugger disabled because "
               << switches::kRemoteDebuggingPort << " is 0.";
  } else {
    debug_web_server_.reset(new debug::remote::DebugWebServer(
        remote_debugging_port,
        base::Bind(&BrowserModule::CreateDebugClient,
                   base::Unretained(browser_module_.get()))));
  }
#endif  // ENABLE_DEBUGGER

#if defined(ENABLE_DEBUG_COMMAND_LINE_SWITCHES)
  int duration_in_seconds = 0;
  if (command_line->HasSwitch(switches::kShutdownAfter) &&
      base::StringToInt(
          command_line->GetSwitchValueASCII(switches::kShutdownAfter),
          &duration_in_seconds)) {
    // If the "shutdown_after" command line option is specified, setup a delayed
    // message to quit the application after the specified number of seconds
    // have passed.
    message_loop_->task_runner()->PostDelayedTask(
        FROM_HERE, quit_closure_,
        base::TimeDelta::FromSeconds(duration_in_seconds));
  }
#endif  // ENABLE_DEBUG_COMMAND_LINE_SWITCHES
}

Application::~Application() {
  // explicitly reset here because the destruction of the object is complex
  // and involves a thread join. If this were to hang the app then having
  // the destruction at this point gives a real file-line number and a place
  // for the debugger to land.
  memory_tracker_tool_.reset(NULL);

  // Unregister event callbacks.
  event_dispatcher_.RemoveEventCallback(base::DeepLinkEvent::TypeId(),
                                        deep_link_event_callback_);
#if SB_API_VERSION >= 8
  event_dispatcher_.RemoveEventCallback(base::WindowSizeChangedEvent::TypeId(),
                                        window_size_change_event_callback_);
#endif  // SB_API_VERSION >= 8
#if SB_HAS(ON_SCREEN_KEYBOARD)
  event_dispatcher_.RemoveEventCallback(
      base::OnScreenKeyboardShownEvent::TypeId(),
      on_screen_keyboard_shown_event_callback_);
  event_dispatcher_.RemoveEventCallback(
      base::OnScreenKeyboardHiddenEvent::TypeId(),
      on_screen_keyboard_hidden_event_callback_);
  event_dispatcher_.RemoveEventCallback(
      base::OnScreenKeyboardFocusedEvent::TypeId(),
      on_screen_keyboard_focused_event_callback_);
  event_dispatcher_.RemoveEventCallback(
      base::OnScreenKeyboardBlurredEvent::TypeId(),
      on_screen_keyboard_blurred_event_callback_);
#if SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
  event_dispatcher_.RemoveEventCallback(
      base::OnScreenKeyboardSuggestionsUpdatedEvent::TypeId(),
      on_screen_keyboard_suggestions_updated_event_callback_);
#endif  // SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
#if SB_HAS(CAPTIONS)
  event_dispatcher_.RemoveEventCallback(
      base::AccessibilityCaptionSettingsChangedEvent::TypeId(),
      on_caption_settings_changed_event_callback_);
#endif  // SB_HAS(CAPTIONS)

  app_status_ = kShutDownAppStatus;
}

void Application::Start() {
  if (base::MessageLoop::current() != message_loop_) {
    message_loop_->task_runner()->PostTask(
        FROM_HERE, base::Bind(&Application::Start, base::Unretained(this)));
    return;
  }

  if (app_status_ != kPreloadingAppStatus) {
    NOTREACHED() << __FUNCTION__ << ": Redundant call.";
    return;
  }

  OnApplicationEvent(kSbEventTypeStart);
}

void Application::Quit() {
  if (base::MessageLoop::current() != message_loop_) {
    message_loop_->task_runner()->PostTask(
        FROM_HERE, base::Bind(&Application::Quit, base::Unretained(this)));
    return;
  }

  quit_closure_.Run();
  app_status_ = kQuitAppStatus;
}

void Application::HandleStarboardEvent(const SbEvent* starboard_event) {
  DCHECK(starboard_event);

  // Forward input events to |SystemWindow|.
  if (starboard_event->type == kSbEventTypeInput) {
    system_window::HandleInputEvent(starboard_event);
    return;
  }

  // Create a Cobalt event from the Starboard event, if recognized.
  switch (starboard_event->type) {
    case kSbEventTypePause:
    case kSbEventTypeUnpause:
    case kSbEventTypeSuspend:
    case kSbEventTypeResume:
#if SB_API_VERSION >= 6
    case kSbEventTypeLowMemory:
#endif  // SB_API_VERSION >= 6
      OnApplicationEvent(starboard_event->type);
      break;
#if SB_API_VERSION >= 8
    case kSbEventTypeWindowSizeChanged:
      DispatchEventInternal(new base::WindowSizeChangedEvent(
          static_cast<SbEventWindowSizeChangedData*>(starboard_event->data)
              ->window,
          static_cast<SbEventWindowSizeChangedData*>(starboard_event->data)
              ->size));
      break;
#endif  // SB_API_VERSION >= 8
#if SB_HAS(ON_SCREEN_KEYBOARD)
    case kSbEventTypeOnScreenKeyboardShown:
      DCHECK(starboard_event->data);
      DispatchEventInternal(new base::OnScreenKeyboardShownEvent(
          *static_cast<int*>(starboard_event->data)));
      break;
    case kSbEventTypeOnScreenKeyboardHidden:
      DispatchEventInternal(new base::OnScreenKeyboardHiddenEvent(
          *static_cast<int*>(starboard_event->data)));
      break;
    case kSbEventTypeOnScreenKeyboardFocused:
      DCHECK(starboard_event->data);
      DispatchEventInternal(new base::OnScreenKeyboardFocusedEvent(
          *static_cast<int*>(starboard_event->data)));
      break;
    case kSbEventTypeOnScreenKeyboardBlurred:
      DispatchEventInternal(new base::OnScreenKeyboardBlurredEvent(
          *static_cast<int*>(starboard_event->data)));
      break;
#if SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
    case kSbEventTypeOnScreenKeyboardSuggestionsUpdated:
      DispatchEventInternal(new base::OnScreenKeyboardSuggestionsUpdatedEvent(
          *static_cast<int*>(starboard_event->data)));
      break;
#endif  // SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
    case kSbEventTypeLink: {
      const char* link = static_cast<const char*>(starboard_event->data);
      DispatchEventInternal(new base::DeepLinkEvent(link));
      break;
    }
    case kSbEventTypeAccessiblitySettingsChanged:
      DispatchEventInternal(new base::AccessibilitySettingsChangedEvent());
      break;
#if SB_HAS(CAPTIONS)
    case kSbEventTypeAccessibilityCaptionSettingsChanged:
      DispatchEventInternal(
          new base::AccessibilityCaptionSettingsChangedEvent());
      break;
#endif  // SB_HAS(CAPTIONS)
    // Explicitly list unhandled cases here so that the compiler can give a
    // warning when a value is added, but not handled.
    case kSbEventTypeInput:
#if SB_API_VERSION >= 6
    case kSbEventTypePreload:
#endif  // SB_API_VERSION >= 6
#if SB_API_VERSION < SB_DEPRECATE_DISCONNECT_VERSION
    case kSbEventTypeNetworkConnect:
    case kSbEventTypeNetworkDisconnect:
#endif  // SB_API_VERSION < SB_DEPRECATE_DISCONNECT_VERSION
    case kSbEventTypeScheduled:
    case kSbEventTypeStart:
    case kSbEventTypeStop:
    case kSbEventTypeUser:
    case kSbEventTypeVerticalSync:
      DLOG(WARNING) << "Unhandled Starboard event of type: "
                    << starboard_event->type;
  }
}

void Application::OnApplicationEvent(SbEventType event_type) {
  TRACE_EVENT0("cobalt::browser", "Application::OnApplicationEvent()");
  DCHECK(application_event_thread_checker_.CalledOnValidThread());
  switch (event_type) {
    case kSbEventTypeStop:
      DLOG(INFO) << "Got quit event.";
      app_status_ = kWillQuitAppStatus;
      Quit();
      DLOG(INFO) << "Finished quitting.";
      break;
    case kSbEventTypeStart:
      DLOG(INFO) << "Got start event.";
      app_status_ = kRunningAppStatus;
      browser_module_->Start();
      DLOG(INFO) << "Finished starting.";
      break;
    case kSbEventTypePause:
      DLOG(INFO) << "Got pause event.";
      app_status_ = kPausedAppStatus;
      ++app_pause_count_;
      browser_module_->Pause();
      DLOG(INFO) << "Finished pausing.";
      break;
    case kSbEventTypeUnpause:
      DLOG(INFO) << "Got unpause event.";
      app_status_ = kRunningAppStatus;
      ++app_unpause_count_;
      browser_module_->Unpause();
      DLOG(INFO) << "Finished unpausing.";
      break;
    case kSbEventTypeSuspend:
      DLOG(INFO) << "Got suspend event.";
      app_status_ = kSuspendedAppStatus;
      ++app_suspend_count_;
      browser_module_->Suspend();
      DLOG(INFO) << "Finished suspending.";
      break;
    case kSbEventTypeResume:
#if SB_API_VERSION >= 10
      DCHECK(SbSystemSupportsResume());
#endif  // SB_API_VERSION >= 10
      DLOG(INFO) << "Got resume event.";
      app_status_ = kPausedAppStatus;
      ++app_resume_count_;
      browser_module_->Resume();
      DLOG(INFO) << "Finished resuming.";
      break;
#if SB_API_VERSION >= 6
    case kSbEventTypeLowMemory:
      DLOG(INFO) << "Got low memory event.";
      browser_module_->ReduceMemory();
      DLOG(INFO) << "Finished reducing memory usage.";
      break;
    // All of the remaining event types are unexpected:
    case kSbEventTypePreload:
#endif  // SB_API_VERSION >= 6
#if SB_API_VERSION >= 8
    case kSbEventTypeWindowSizeChanged:
#endif
#if SB_HAS(CAPTIONS)
    case kSbEventTypeAccessibilityCaptionSettingsChanged:
#endif  // SB_HAS(CAPTIONS)
#if SB_HAS(ON_SCREEN_KEYBOARD)
    case kSbEventTypeOnScreenKeyboardBlurred:
    case kSbEventTypeOnScreenKeyboardFocused:
    case kSbEventTypeOnScreenKeyboardHidden:
    case kSbEventTypeOnScreenKeyboardShown:
#if SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
    case kSbEventTypeOnScreenKeyboardSuggestionsUpdated:
#endif  // SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
    case kSbEventTypeAccessiblitySettingsChanged:
    case kSbEventTypeInput:
    case kSbEventTypeLink:
#if SB_API_VERSION < SB_DEPRECATE_DISCONNECT_VERSION
    case kSbEventTypeNetworkConnect:
    case kSbEventTypeNetworkDisconnect:
#endif  // SB_API_VERSION < SB_DEPRECATE_DISCONNECT_VERSION
    case kSbEventTypeScheduled:
    case kSbEventTypeUser:
    case kSbEventTypeVerticalSync:
      NOTREACHED() << "Unexpected event type: " << event_type;
      return;
  }
}

void Application::OnDeepLinkEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser", "Application::OnDeepLinkEvent()");
  const base::DeepLinkEvent* deep_link_event =
      base::polymorphic_downcast<const base::DeepLinkEvent*>(event);
  // TODO: Remove this when terminal application states are properly handled.
  if (deep_link_event->IsH5vccLink()) {
    browser_module_->Navigate(GURL(deep_link_event->link()));
  }
}

#if SB_API_VERSION >= 8
void Application::OnWindowSizeChangedEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser", "Application::OnWindowSizeChangedEvent()");
  const base::WindowSizeChangedEvent* window_size_change_event =
      base::polymorphic_downcast<const base::WindowSizeChangedEvent*>(event);
  const auto& size = window_size_change_event->size();
#if SB_API_VERSION >= SB_HAS_SCREEN_DIAGONAL_API_VERSION
  float diagonal =
      SbWindowGetDiagonalSizeInInches(window_size_change_event->window());
#else
  float diagonal = 0.0f;  // Special value meaning diagonal size is not known.
#endif

  cssom::ViewportSize viewport_size(size.width, size.height, diagonal);
  browser_module_->OnWindowSizeChanged(viewport_size, size.video_pixel_ratio);
}
#endif  // SB_API_VERSION >= 8

#if SB_HAS(ON_SCREEN_KEYBOARD)
void Application::OnOnScreenKeyboardShownEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser",
               "Application::OnOnScreenKeyboardShownEvent()");
  browser_module_->OnOnScreenKeyboardShown(
      base::polymorphic_downcast<const base::OnScreenKeyboardShownEvent*>(
          event));
}

void Application::OnOnScreenKeyboardHiddenEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser",
               "Application::OnOnScreenKeyboardHiddenEvent()");
  browser_module_->OnOnScreenKeyboardHidden(
      base::polymorphic_downcast<const base::OnScreenKeyboardHiddenEvent*>(
          event));
}

void Application::OnOnScreenKeyboardFocusedEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser",
               "Application::OnOnScreenKeyboardFocusedEvent()");
  browser_module_->OnOnScreenKeyboardFocused(
      base::polymorphic_downcast<const base::OnScreenKeyboardFocusedEvent*>(
          event));
}

void Application::OnOnScreenKeyboardBlurredEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser",
               "Application::OnOnScreenKeyboardBlurredEvent()");
  browser_module_->OnOnScreenKeyboardBlurred(
      base::polymorphic_downcast<const base::OnScreenKeyboardBlurredEvent*>(
          event));
}

#if SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
void Application::OnOnScreenKeyboardSuggestionsUpdatedEvent(
    const base::Event* event) {
  TRACE_EVENT0("cobalt::browser",
               "Application::OnOnScreenKeyboardSuggestionsUpdatedEvent()");
  browser_module_->OnOnScreenKeyboardSuggestionsUpdated(
      base::polymorphic_downcast<
          const base::OnScreenKeyboardSuggestionsUpdatedEvent*>(event));
}
#endif  // SB_API_VERSION >= SB_ON_SCREEN_KEYBOARD_SUGGESTIONS_VERSION
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

#if SB_HAS(CAPTIONS)
void Application::OnCaptionSettingsChangedEvent(const base::Event* event) {
  TRACE_EVENT0("cobalt::browser",
               "Application::OnCaptionSettingsChangedEvent()");
  browser_module_->OnCaptionSettingsChanged(
      base::polymorphic_downcast<
          const base::AccessibilityCaptionSettingsChangedEvent*>(event));
}
#endif  // SB_HAS(CAPTIONS)

void Application::WebModuleRecreated() {
  TRACE_EVENT0("cobalt::browser", "Application::WebModuleRecreated()");
#if defined(ENABLE_WEBDRIVER)
  if (web_driver_module_) {
    web_driver_module_->OnWindowRecreated();
  }
#endif
}

Application::CValStats::CValStats()
    : free_cpu_memory("Memory.CPU.Free", 0,
                      "Total free application CPU memory remaining."),
      used_cpu_memory("Memory.CPU.Used", 0,
                      "Total CPU memory allocated via the app's allocators."),
      app_start_time("Time.Cobalt.Start",
                     base::StartupTimer::StartTime().ToInternalValue(),
                     "Start time of the application in microseconds."),
      app_lifetime("Cobalt.Lifetime", base::TimeDelta(),
                   "Application lifetime in microseconds.") {
  if (SbSystemHasCapability(kSbSystemCapabilityCanQueryGPUMemoryStats)) {
    free_gpu_memory.emplace("Memory.GPU.Free", 0,
                            "Total free application GPU memory remaining.");
    used_gpu_memory.emplace("Memory.GPU.Used", 0,
                            "Total GPU memory allocated by the application.");
  }
}

void Application::RegisterUserLogs() {
  if (base::UserLog::IsRegistrationSupported()) {
    base::UserLog::Register(
        base::UserLog::kSystemLanguageStringIndex, "SystemLanguage",
        non_trivial_static_fields.Get().system_language.c_str(),
        non_trivial_static_fields.Get().system_language.size());

    base::UserLog::Register(base::UserLog::kAvailableMemoryIndex,
                            "AvailableMemory", &available_memory_,
                            sizeof(available_memory_));
    base::UserLog::Register(base::UserLog::kAppLifetimeIndex, "Lifetime(ms)",
                            &lifetime_in_ms_, sizeof(lifetime_in_ms_));
    base::UserLog::Register(base::UserLog::kAppStatusIndex, "AppStatus",
                            &app_status_, sizeof(app_status_));
    base::UserLog::Register(base::UserLog::kAppPauseCountIndex, "PauseCnt",
                            &app_pause_count_, sizeof(app_pause_count_));
    base::UserLog::Register(base::UserLog::kAppUnpauseCountIndex, "UnpauseCnt",
                            &app_unpause_count_, sizeof(app_unpause_count_));
    base::UserLog::Register(base::UserLog::kAppSuspendCountIndex, "SuspendCnt",
                            &app_suspend_count_, sizeof(app_suspend_count_));
    base::UserLog::Register(base::UserLog::kAppResumeCountIndex, "ResumeCnt",
                            &app_resume_count_, sizeof(app_resume_count_));
    base::UserLog::Register(base::UserLog::kNetworkStatusIndex, "NetworkStatus",
                            &network_status_, sizeof(network_status_));
    base::UserLog::Register(base::UserLog::kNetworkConnectCountIndex,
                            "ConnectCnt", &network_connect_count_,
                            sizeof(network_connect_count_));
    base::UserLog::Register(base::UserLog::kNetworkDisconnectCountIndex,
                            "DisconnectCnt", &network_disconnect_count_,
                            sizeof(network_disconnect_count_));
  }
}

// NOTE: UserAgent registration is handled separately, as the value is not
// available when the app is first being constructed. Registration must happen
// each time the user agent is modified, because the string may be pointing
// to a new location on the heap.
void Application::UpdateAndMaybeRegisterUserAgent() {
  non_trivial_static_fields.Get().user_agent = browser_module_->GetUserAgent();
  DLOG(INFO) << "User Agent: " << non_trivial_static_fields.Get().user_agent;
  if (base::UserLog::IsRegistrationSupported()) {
    base::UserLog::Register(base::UserLog::kUserAgentStringIndex, "UserAgent",
                            non_trivial_static_fields.Get().user_agent.c_str(),
                            non_trivial_static_fields.Get().user_agent.size());
  }
}

void Application::UpdatePeriodicStats() {
  TRACE_EVENT0("cobalt::browser", "Application::UpdatePeriodicStats()");
  c_val_stats_.app_lifetime = base::StartupTimer::TimeElapsed();

  int64_t used_cpu_memory = SbSystemGetUsedCPUMemory();
  base::Optional<int64_t> used_gpu_memory;
  if (SbSystemHasCapability(kSbSystemCapabilityCanQueryGPUMemoryStats)) {
    used_gpu_memory = SbSystemGetUsedGPUMemory();
  }

  available_memory_ =
      static_cast<ssize_t>(SbSystemGetTotalCPUMemory() - used_cpu_memory);
  c_val_stats_.free_cpu_memory = available_memory_;
  c_val_stats_.used_cpu_memory = used_cpu_memory;

  if (used_gpu_memory) {
    *c_val_stats_.free_gpu_memory =
        SbSystemGetTotalGPUMemory() - *used_gpu_memory;
    *c_val_stats_.used_gpu_memory = *used_gpu_memory;
  }

  browser_module_->UpdateJavaScriptHeapStatistics();

  browser_module_->CheckMemory(used_cpu_memory, used_gpu_memory);
}

void Application::DispatchEventInternal(base::Event* event) {
  event_dispatcher_.DispatchEvent(std::unique_ptr<base::Event>(event));
}

}  // namespace browser
}  // namespace cobalt
