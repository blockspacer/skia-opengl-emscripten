// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_CACHED_METADATA_HANDLER_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_CACHED_METADATA_HANDLER_H_

#include <stdint.h>
#if defined(ENABLE_GNET)
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/loader/code_cache.mojom-shared.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/platform_export.h"
#include "third_party/blink/renderer/platform/weborigin/security_origin.h"
#include "third_party/blink/renderer/platform/wtf/allocator.h"
#include "third_party/blink/renderer/platform/wtf/forward.h"

namespace blink {

class CachedMetadata;
class ResourceResponse;
class WebProcessMemoryDump;

// A callback for sending the serialized data of cached metadata back to the
// platform.
class PLATFORM_EXPORT CachedMetadataSender {
  USING_FAST_MALLOC(CachedMetadataSender);

 public:
  static std::unique_ptr<CachedMetadataSender> Create(
      const ResourceResponse&,
      blink::mojom::CodeCacheType
#if defined(ENABLE_GNET)
      ,
      scoped_refptr<const SecurityOrigin> requestor_origin
#endif // ENABLE_GNET
      );

  virtual ~CachedMetadataSender() = default;
  virtual void Send(const uint8_t*, size_t) = 0;

  // IsServedFromCacheStorage is used to alter caching strategy to be more
  // aggressive. See V8CodeCache::GetCompileOptions() for an example.
  virtual bool IsServedFromCacheStorage() = 0;
};

#if defined(ENABLE_GNET)
// Returns whether we should use isolated code cache for a particular response.
PLATFORM_EXPORT bool ShouldUseIsolatedCodeCache(mojom::RequestContextType,
                                                const ResourceResponse&);
#endif // ENABLE_GNET

// Handler class for caching operations.
class CachedMetadataHandler
    : public GarbageCollectedFinalized<CachedMetadataHandler> {
 public:
  enum CacheType {
    kSendToPlatform,  // send cache data to blink::Platform::cacheMetadata
    kCacheLocally     // cache only in Resource's member variables
  };

  // Enum for marking serialized cached metadatas so that the deserializers
  // do not conflict.
  enum CachedMetadataType : uint32_t {
    kSingleEntry,    // the metadata is a single CachedMetadata entry
    kSourceKeyedMap  // the metadata is multiple CachedMetadata entries keyed by
                     // a source string.
  };

  virtual ~CachedMetadataHandler() = default;
  virtual void Trace(blink::Visitor* visitor) {}

  // Reset existing metadata, to allow setting new data.
  virtual void ClearCachedMetadata(CacheType = kCacheLocally) = 0;

  // Returns the encoding to which the cache is specific.
  virtual String Encoding() const = 0;

  virtual bool IsServedFromCacheStorage() const = 0;

  // Dump cache size kept in memory.
  virtual void OnMemoryDump(WebProcessMemoryDump* pmd,
                            const String& dump_prefix) const = 0;

  virtual size_t GetCodeCacheSize() const = 0;

 protected:
  CachedMetadataHandler() = default;
};

// A CachedMetadataHandler which stores one piece of metadata.
class SingleCachedMetadataHandler : public CachedMetadataHandler {
 public:
  // Caches the given metadata in association with this resource and suggests
  // that the platform persist it. The dataTypeID is a pseudo-randomly chosen
  // identifier that is used to distinguish data generated by the caller.
  virtual void SetCachedMetadata(uint32_t data_type_id,
                                 const uint8_t*,
                                 size_t,
                                 CacheType = kSendToPlatform) = 0;

  // Returns cached metadata of the given type associated with this resource.
  // This cached metadata can be pruned at any time.
  virtual scoped_refptr<CachedMetadata> GetCachedMetadata(
      uint32_t data_type_id) const = 0;

 protected:
  SingleCachedMetadataHandler() = default;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_LOADER_FETCH_CACHED_METADATA_HANDLER_H_
