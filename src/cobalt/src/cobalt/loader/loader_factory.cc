﻿// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

#include <memory>

#include "cobalt/loader/loader_factory.h"

#include "base/threading/platform_thread.h"
#include "cobalt/loader/image/threaded_image_decoder_proxy.h"

namespace cobalt {
namespace loader {

namespace {

// The ResourceLoader thread uses the default stack size, which is requested
// by passing in 0 for its stack size.
const size_t kLoadThreadStackSize = 0;

}  // namespace

LoaderFactory::LoaderFactory(const char* name, FetcherFactory* fetcher_factory,
                             render_tree::ResourceProvider* resource_provider,
                             size_t encoded_image_cache_capacity,
                             base::ThreadPriority loader_thread_priority)
    : fetcher_factory_(fetcher_factory),
      resource_provider_(resource_provider),
      load_thread_("ResourceLoader"),
      is_suspended_(false) {
  if (encoded_image_cache_capacity > 0) {
    fetcher_cache_.reset(new FetcherCache(name, encoded_image_cache_capacity));
  }

  base::Thread::Options options(base::MessageLoop::TYPE_DEFAULT,
                                kLoadThreadStackSize);
  options.priority = loader_thread_priority;
  load_thread_.StartWithOptions(options);
}

std::unique_ptr<Loader> LoaderFactory::CreateImageLoader(
    const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    const image::ImageDecoder::ImageAvailableCallback& image_available_callback,
    const Loader::OnCompleteFunction& load_complete_callback) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  Loader::FetcherCreator fetcher_creator =
      MakeCachedFetcherCreator(url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
      kNoCORSMode, origin);

  /// \todo
  scoped_refptr<base::SingleThreadTaskRunner> load_message_loop_
    =  load_thread_.task_runner();

  std::unique_ptr<Loader> loader(new Loader(
      fetcher_creator,
      base::Bind(&image::ThreadedImageDecoderProxy::Create, resource_provider_,
                 image_available_callback, load_message_loop_),
      load_complete_callback,
      base::Bind(&LoaderFactory::OnLoaderDestroyed, base::Unretained(this)),
      is_suspended_));

  OnLoaderCreated(loader.get());
  return loader;
}

std::unique_ptr<Loader> LoaderFactory::CreateLinkLoader(
    const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    const loader::RequestMode cors_mode,
    const TextDecoder::TextAvailableCallback& link_available_callback,
    const Loader::OnCompleteFunction& load_complete_callback) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  Loader::FetcherCreator fetcher_creator =
      MakeFetcherCreator(url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
      cors_mode, origin);

  std::unique_ptr<Loader> loader(new Loader(
      fetcher_creator,
      base::Bind(&loader::TextDecoder::Create, link_available_callback),
      load_complete_callback,
      base::Bind(&LoaderFactory::OnLoaderDestroyed, base::Unretained(this)),
      is_suspended_));

  OnLoaderCreated(loader.get());
  return loader;
}

#if defined(ENABLE_COBALT_SPATIAL_MESH)
// Creates a loader that fetches and decodes a Mesh.
std::unique_ptr<Loader> LoaderFactory::CreateMeshLoader(
    const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    const mesh::MeshDecoder::MeshAvailableCallback& mesh_available_callback,
    const Loader::OnCompleteFunction& load_complete_callback) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  Loader::FetcherCreator fetcher_creator =
      MakeFetcherCreator(url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
       kNoCORSMode, origin);

  std::unique_ptr<Loader> loader(new Loader(
      fetcher_creator,
      base::Bind(&mesh::MeshDecoder::Create, resource_provider_,
                 mesh_available_callback),
      load_complete_callback,
      base::Bind(&LoaderFactory::OnLoaderDestroyed, base::Unretained(this)),
      is_suspended_));

  OnLoaderCreated(loader.get());
  return loader;
}
#endif // ENABLE_COBALT_SPATIAL_MESH

std::unique_ptr<Loader> LoaderFactory::CreateScriptLoader(
    const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    const TextDecoder::TextAvailableCallback& script_available_callback,
    const Loader::OnCompleteFunction& load_complete_callback) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  Loader::FetcherCreator fetcher_creator =
      MakeFetcherCreator(url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
       kNoCORSMode, origin);

  std::unique_ptr<Loader> loader(new Loader(
      fetcher_creator,
      base::Bind(&loader::TextDecoder::Create, script_available_callback),
      load_complete_callback,
      base::Bind(&LoaderFactory::OnLoaderDestroyed, base::Unretained(this)),
      is_suspended_));

  OnLoaderCreated(loader.get());
  return loader;
}

std::unique_ptr<Loader> LoaderFactory::CreateTypefaceLoader(
    const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    const font::TypefaceDecoder::TypefaceAvailableCallback&
        typeface_available_callback,
    const Loader::OnCompleteFunction& load_complete_callback) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  Loader::FetcherCreator fetcher_creator = MakeFetcherCreator(
      url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
      kCORSModeSameOriginCredentials, origin);

  std::unique_ptr<Loader> loader(new Loader(
      fetcher_creator,
      base::Bind(&font::TypefaceDecoder::Create, resource_provider_,
                 typeface_available_callback),
      load_complete_callback,
      base::Bind(&LoaderFactory::OnLoaderDestroyed, base::Unretained(this)),
      is_suspended_));

  OnLoaderCreated(loader.get());
  return loader;
}

void LoaderFactory::NotifyResourceRequested(const std::string& url) {
  if (fetcher_cache_) {
    fetcher_cache_->NotifyResourceRequested(url);
  }
}

Loader::FetcherCreator LoaderFactory::MakeFetcherCreator(
    const GURL& url,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    RequestMode request_mode, const Origin& origin) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  return base::Bind(&FetcherFactory::CreateSecureFetcher,
                    base::Unretained(fetcher_factory_), url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
       request_mode, origin);
}

Loader::FetcherCreator LoaderFactory::MakeCachedFetcherCreator(
    const GURL& url,
#if defined(ENABLE_COBALT_CSP)
    const csp::SecurityCallback& url_security_callback,
#endif
    RequestMode request_mode, const Origin& origin) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);

  auto fetcher_creator =
      MakeFetcherCreator(url,
#if defined(ENABLE_COBALT_CSP)
      url_security_callback,
#endif
      request_mode, origin);

  if (fetcher_cache_) {
    return fetcher_cache_->GetFetcherCreator(url, fetcher_creator);
  }
  return fetcher_creator;
}

void LoaderFactory::Suspend() {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);
  DCHECK(resource_provider_);
  DCHECK(!is_suspended_);

  is_suspended_ = true;
  resource_provider_ = NULL;

  for (LoaderSet::const_iterator iter = active_loaders_.begin();
       iter != active_loaders_.end(); ++iter) {
    (*iter)->Suspend();
  }

  // Wait for all loader thread messages to be flushed before returning.
  /// \todo
  load_thread_.task_runner()->RunsTasksInCurrentSequence();
  //load_thread_.message_loop()->task_runner()->WaitForFence();

}

void LoaderFactory::Resume(render_tree::ResourceProvider* resource_provider) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);
  DCHECK(resource_provider);

  is_suspended_ = false;
  resource_provider_ = resource_provider;

  for (LoaderSet::const_iterator iter = active_loaders_.begin();
       iter != active_loaders_.end(); ++iter) {
    (*iter)->Resume(resource_provider);
  }
}

void LoaderFactory::OnLoaderCreated(Loader* loader) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);
  DCHECK(active_loaders_.find(loader) == active_loaders_.end());
  active_loaders_.insert(loader);
}

void LoaderFactory::OnLoaderDestroyed(Loader* loader) {
  DCHECK_CALLED_ON_VALID_THREAD(thread_checker_);
  DCHECK(active_loaders_.find(loader) != active_loaders_.end());
  active_loaders_.erase(loader);
}

}  // namespace loader
}  // namespace cobalt
