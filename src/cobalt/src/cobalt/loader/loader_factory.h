// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_LOADER_LOADER_FACTORY_H_
#define COBALT_LOADER_LOADER_FACTORY_H_

#include <memory>
#include <set>

#include "base/threading/thread.h"
#if defined(ENABLE_COBALT_CSP)
#include "cobalt/csp/content_security_policy.h"
#endif
#include "cobalt/loader/fetcher.h"
#include "cobalt/loader/fetcher_factory.h"
#include "cobalt/loader/font/typeface_decoder.h"
#include "cobalt/loader/image/image_decoder.h"
#include "cobalt/loader/loader.h"
#include "cobalt/loader/mesh/mesh_decoder.h"
#include "cobalt/loader/text_decoder.h"

//#if defined(ENABLE_COBALT_RENDER_TREE)
#include "cobalt/render_tree/resource_provider.h"
//#endif // ENABLE_COBALT_RENDER_TREE
#include "url/gurl.h"


//#if defined(ENABLE_COBALT_RENDER_TREE)
namespace cobalt {
namespace loader {

// The LoaderFactory provides a central loader creator object from which clients
// can request the creation of loaders of various types.  The LoaderFactory
// maintains all context necessary to create the various resource types.
class LoaderFactory {
 public:
  LoaderFactory(FetcherFactory* fetcher_factory,
                render_tree::ResourceProvider* resource_provider,
                base::ThreadPriority loader_thread_priority);

  // Creates a loader that fetches and decodes an image.
  std::unique_ptr<Loader> CreateImageLoader(
      const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
      const csp::SecurityCallback& url_security_callback,
#endif
      const image::ImageDecoder::ImageAvailableCallback&
          image_available_callback,
      const Loader::OnCompleteFunction& load_complete_callback);

  // Creates a loader that fetches and decodes a render_tree::Typeface.
  std::unique_ptr<Loader> CreateTypefaceLoader(
      const GURL& url, const Origin& orgin,
#if defined(ENABLE_COBALT_CSP)
      const csp::SecurityCallback& url_security_callback,
#endif
      const font::TypefaceDecoder::TypefaceAvailableCallback&
          typeface_available_callback,
      const Loader::OnCompleteFunction& load_complete_callback);

  // Creates a loader that fetches and decodes a Mesh.
  std::unique_ptr<Loader> CreateMeshLoader(
      const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
      const csp::SecurityCallback& url_security_callback,
#endif
      const mesh::MeshDecoder::MeshAvailableCallback& mesh_available_callback,
      const Loader::OnCompleteFunction& load_complete_callback);

  // Creates a loader that fetches and decodes a Javascript resource.
  std::unique_ptr<Loader> CreateScriptLoader(
      const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
      const csp::SecurityCallback& url_security_callback,
#endif
      const TextDecoder::TextAvailableCallback& script_available_callback,
      const Loader::OnCompleteFunction& load_complete_callback);

  // Creates a loader that fetches and decodes a link resources.
  std::unique_ptr<Loader> CreateLinkLoader(
      const GURL& url, const Origin& origin,
#if defined(ENABLE_COBALT_CSP)
      const csp::SecurityCallback& url_security_callback,
#endif
      const loader::RequestMode cors_mode,
      const TextDecoder::TextAvailableCallback& link_available_callback,
      const Loader::OnCompleteFunction& load_complete_callback);

  // Clears out the loader factory's resource provider, aborting any in-progress
  // loads.
  void Suspend();
  // Resets a new resource provider for this loader factory to use.  The
  // previous resource provider must have been cleared before this method is
  // called.
  void Resume(render_tree::ResourceProvider* resource_provider);

 private:
  void OnLoaderCreated(Loader* loader);
  void OnLoaderDestroyed(Loader* loader);

  Loader::FetcherCreator MakeFetcherCreator(
      const GURL& url,
#if defined(ENABLE_COBALT_CSP)
      const csp::SecurityCallback& url_security_callback,
#endif
      RequestMode request_mode, const Origin& origin);

  // Ensures that the LoaderFactory methods are only called from the same
  // thread.
  base::ThreadChecker thread_checker_;

  // Used to create the Fetcher component of the loaders.
  FetcherFactory* fetcher_factory_;

  // Used to create render_tree resources.
  render_tree::ResourceProvider* resource_provider_;

  // Keeps track of all active loaders so that if a suspend event occurs they
  // can be aborted.
  typedef std::set<Loader*> LoaderSet;
  LoaderSet active_loaders_;

  // Thread to run asynchronous fetchers and decoders on.  At the moment,
  // image decoding is the only thing done on this thread.
  base::Thread load_thread_;

  // Whether or not the LoaderFactory is currently suspended. While it is, all
  // loaders created by it begin in a suspended state.
  bool is_suspended_;
};

}  // namespace loader
}  // namespace cobalt
//#endif // ENABLE_COBALT_RENDER_TREE

#endif  // COBALT_LOADER_LOADER_FACTORY_H_
