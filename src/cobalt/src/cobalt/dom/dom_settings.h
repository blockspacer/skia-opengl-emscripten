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

#ifndef COBALT_DOM_DOM_SETTINGS_H_
#define COBALT_DOM_DOM_SETTINGS_H_

#include "base/memory/ref_counted.h"
#include "cobalt/dom/blob.h"
#include "cobalt/dom/mutation_observer_task_manager.h"
#include "cobalt/dom/url_registry.h"
#include "cobalt/dom/url_utils.h"
#if !defined(DISABLE_COBALT_MEDIA)
#include "cobalt/media/can_play_type_handler.h"
#endif // !DISABLE_COBALT_MEDIA
#include "cobalt/script/environment_settings.h"

#include "cobalt/script/global_environment.h"

#ifdef ENABLE_SPEECH
#include "cobalt/speech/microphone.h"
#endif // ENABLE_SPEECH

namespace cobalt {

namespace loader {
class FetcherFactory;
}
namespace network {
class NetworkModule;
}
namespace script {
//class GlobalEnvironment;
class JavaScriptEngine;
}
namespace dom {
#if !defined(DISABLE_COBALT_MEDIA)
class MediaSource;
#endif // !DISABLE_COBALT_MEDIA
class Window;

// A package of global state to be passed around to script objects
// that ask for it in their IDL custom attributes.
class DOMSettings : public script::EnvironmentSettings {
 public:
#if !defined(DISABLE_COBALT_MEDIA)
  typedef UrlRegistry<MediaSource> MediaSourceRegistry;
#endif // !DISABLE_COBALT_MEDIA
  // Hold optional settings for DOMSettings.
  struct Options {
#ifdef ENABLE_SPEECH
    // Microphone options.
    speech::Microphone::Options microphone_options;
#endif // ENABLE_SPEECH
  };

  DOMSettings(const int max_dom_element_depth,
              loader::FetcherFactory* fetcher_factory,
              network::NetworkModule* network_module,
              const scoped_refptr<Window>& window,
#if !defined(DISABLE_COBALT_MEDIA)
              MediaSourceRegistry* media_source_registry,
#endif // !DISABLE_COBALT_MEDIA
              Blob::Registry* blob_registry,
#if !defined(DISABLE_COBALT_MEDIA)
              media::CanPlayTypeHandler* can_play_type_handler,
#endif // !DISABLE_COBALT_MEDIA
              script::JavaScriptEngine* engine,
              script::GlobalEnvironment* global_environment_proxy,
              MutationObserverTaskManager* mutation_observer_task_manager,
              const Options& options = Options());
  ~DOMSettings() override;

  int max_dom_element_depth() { return max_dom_element_depth_; }
#ifdef ENABLE_SPEECH
  const speech::Microphone::Options& microphone_options() const {
    return microphone_options_;
  }
#endif // ENABLE_SPEECH

  void set_window(const scoped_refptr<Window>& window);
  scoped_refptr<Window> window() const;

  void set_fetcher_factory(loader::FetcherFactory* fetcher_factory) {
    fetcher_factory_ = fetcher_factory;
  }
  loader::FetcherFactory* fetcher_factory() const { return fetcher_factory_; }
  void set_network_module(network::NetworkModule* network_module) {
    network_module_ = network_module;
  }
  network::NetworkModule* network_module() const { return network_module_; }
  script::JavaScriptEngine* javascript_engine() const {
    return javascript_engine_;
  }
  script::GlobalEnvironment* global_environment() const {
    return global_environment_;
  }
#if !defined(DISABLE_COBALT_MEDIA)
  MediaSourceRegistry* media_source_registry() const {
    return media_source_registry_;
  }
  media::CanPlayTypeHandler* can_play_type_handler() const {
    return can_play_type_handler_;
  }
#endif // !DISABLE_COBALT_MEDIA
  MutationObserverTaskManager* mutation_observer_task_manager() const {
    return mutation_observer_task_manager_;
  }
  Blob::Registry* blob_registry() const { return blob_registry_; }

  // An absolute URL used to resolve relative URLs.
  virtual const GURL& base_url() const;

  // Return's document's origin.
  loader::Origin document_origin() const;

 private:
  const int max_dom_element_depth_;
#ifdef ENABLE_SPEECH
  const speech::Microphone::Options microphone_options_;
#endif // ENABLE_SPEECH
  loader::FetcherFactory* fetcher_factory_;
  network::NetworkModule* network_module_;
  scoped_refptr<Window> window_;
#if !defined(DISABLE_COBALT_MEDIA)
  MediaSourceRegistry* media_source_registry_;
#endif // !DISABLE_COBALT_MEDIA
  Blob::Registry* blob_registry_;
#if !defined(DISABLE_COBALT_MEDIA)
  media::CanPlayTypeHandler* can_play_type_handler_;
#endif // !DISABLE_COBALT_MEDIA
  script::JavaScriptEngine* javascript_engine_;
  script::GlobalEnvironment* global_environment_;
  MutationObserverTaskManager* mutation_observer_task_manager_;

  DISALLOW_COPY_AND_ASSIGN(DOMSettings);
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_DOM_SETTINGS_H_
