﻿// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/dom/font_cache.h"

namespace cobalt {
namespace dom {

namespace {

const int64 kInactiveProcessTimeIntervalMs = 1000;
const int32_t kInactiveFontListPurgeDelayMs = 300000;
const int32_t kInactiveFontPurgeDelayMs = 900000;
const int32_t kTotalFontCountPurgeThreshold = 64;

}  // namespace

FontCache::RequestedRemoteTypefaceInfo::RequestedRemoteTypefaceInfo(
    const scoped_refptr<loader::font::CachedRemoteTypeface>&
        cached_remote_typeface,
    const base::Closure& typeface_load_event_callback)
    : cached_remote_typeface_reference_(
          //nullptr
          new loader::font::CachedRemoteTypefaceReferenceWithCallbacks(
              cached_remote_typeface, typeface_load_event_callback,
              typeface_load_event_callback))
      ///
      , request_timer_(new base::OneShotTimer())
{

  /// TODO: !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))

  request_timer_->Start(FROM_HERE,
                        base::TimeDelta::FromMilliseconds(kRequestTimerDelay),
                        typeface_load_event_callback);

  //std::move(typeface_load_event_callback).Run();
}

FontCache::FontCache(render_tree::ResourceProvider** resource_provider,
                     loader::font::RemoteTypefaceCache* remote_typeface_cache,
                     const base::Closure& external_typeface_load_event_callback,
                     const std::string& language_script,
                     scoped_refptr<Location> document_location)
    : resource_provider_(resource_provider),
      remote_typeface_cache_(remote_typeface_cache),
      external_typeface_load_event_callback_(
          external_typeface_load_event_callback),
      language_script_(language_script),
      font_face_map_(new FontFaceMap()),
      last_inactive_process_time_(base::TimeTicks::Now()),
      document_location_(document_location) {}

void FontCache::SetFontFaceMap(std::unique_ptr<FontFaceMap> font_face_map) {
  //printf("FontCache::SetFontFaceMap 1\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  // If nothing has changed, then there's nothing to update. Just return.
  if (*font_face_map == *font_face_map_) {
    return;
  }

  // Clear out the cached font lists. It may no longer contain valid font
  // mappings as a result of the font face map changing.
  font_list_map_.clear();

  font_face_map_ = std::move(font_face_map);

  // Generate a set of the urls contained within the new font face map.
  std::set<GURL> new_url_set;
  for (FontFaceMap::iterator map_iterator = font_face_map_->begin();
       map_iterator != font_face_map_->end(); ++map_iterator) {
    //printf("FontCache::SetFontFaceMap 2\n");
    map_iterator->second.CollectUrlSources(&new_url_set);
  }

  // Iterate through active remote typeface references, verifying that the font
  // face map still contains each remote typeface's url. Any remote typeface
  // with a url that is no longer contained within |font_face_map_| is purged to
  // allow the remote cache to release the memory.
  RequestedRemoteTypefaceMap::iterator requested_remote_typeface_iterator =
      requested_remote_typeface_cache_.begin();
  while (requested_remote_typeface_iterator !=
         requested_remote_typeface_cache_.end()) {
    //printf("FontCache::SetFontFaceMap 3\n");
    RequestedRemoteTypefaceMap::iterator current_iterator =
        requested_remote_typeface_iterator++;

    // If the referenced url is not in the new url set, then purge it.
    if (new_url_set.find(current_iterator->first) == new_url_set.end()) {
      requested_remote_typeface_cache_.erase(current_iterator);
    }
  }
}

void FontCache::PurgeCachedResources() {
  //printf("FontCache::PurgeCachedResources\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  requested_remote_typeface_cache_.clear();

  // Remove all font lists that are unreferenced outside of the cache and reset
  // those that are retained to their initial state.
  for (FontListMap::iterator iter = font_list_map_.begin();
       iter != font_list_map_.end();) {
    FontListInfo& font_list_info = iter->second;
    if (font_list_info.font_list->HasOneRef()) {
      font_list_map_.erase(iter++);
      continue;
    }
    DLOG(WARNING) << "Unable to purge font list!";
    font_list_info.font_list->Reset();
    ++iter;
  }

  local_typeface_map_.clear();
  font_map_.clear();
  inactive_font_set_.clear();

  // Walk the character fallback maps, clearing their typefaces.
  for (CharacterFallbackTypefaceMaps::iterator iter =
           character_fallback_typeface_maps_.begin();
       iter != character_fallback_typeface_maps_.end(); ++iter) {
    iter->second.clear();
  }
}

void FontCache::ProcessInactiveFontListsAndFonts() {
  ///printf("FontCache::ProcessInactiveFontListsAndFonts\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  base::TimeTicks current_time = base::TimeTicks::Now();
  if ((current_time - last_inactive_process_time_).InMilliseconds() >
      kInactiveProcessTimeIntervalMs) {
    last_inactive_process_time_ = current_time;
    ProcessInactiveFontLists(current_time);
    ProcessInactiveFonts(current_time);
  }
}

const scoped_refptr<dom::FontList>& FontCache::GetFontList(
    const FontListKey& font_list_key) {
  //printf("FontCache::GetFontList\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  FontListInfo& font_list_info = font_list_map_[font_list_key];
  if (font_list_info.font_list.get() == NULL) {
    font_list_info.font_list = new FontList(this, font_list_key);
  }
  return font_list_info.font_list;
}

/// \note may create typeface in CreateFontWithSize
const scoped_refptr<render_tree::Font>& FontCache::GetFontFromTypefaceAndSize(
    const scoped_refptr<render_tree::Typeface>& typeface, float size) {
  printf("FontCache::GetFontFromTypefaceAndSize size %f\n", size);
  DCHECK(thread_checker_.CalledOnValidThread());
  DCHECK(typeface);
  FontKey font_key(typeface->GetId(), size);
  // Check to see if the font is already in the cache. If it is not, then
  // create it from the typeface and size and add it to the cache.
  FontInfo& cached_font_info = font_map_[font_key];
  if (cached_font_info.font.get() == NULL) {
    printf("FontCache::GetFontFromTypefaceAndSize 2 size %f\n", size);
    //size = 22.0f; // __TODO__
    cached_font_info.font = typeface->CreateFontWithSize(size);
  }
  printf("FontCache::GetFontFromTypefaceAndSize 3 size %f\n", size);
  DCHECK(cached_font_info.font);
  return cached_font_info.font;
}

scoped_refptr<render_tree::Font> FontCache::TryGetFont(
    const std::string& family, render_tree::FontStyle style, float size,
    FontListFont::State* state) {
  //printf("FontCache::TryGetFont 1 %s\n", family.c_str());
  DCHECK(thread_checker_.CalledOnValidThread());
  FontFaceMap::iterator font_face_map_iterator = font_face_map_->find(family);
  if (font_face_map_iterator != font_face_map_->end()) {
    // Retrieve the font face style set entry that most closely matches the
    // desired style. Given that a font face was found for this family, it
    // should never be NULL.
    // https://www.w3.org/TR/css3-fonts/#font-prop-desc
    const FontFaceStyleSet::Entry* style_set_entry =
        font_face_map_iterator->second.MatchStyle(style);
    DCHECK(style_set_entry != NULL);

    // Walk the entry's sources:
    // - If a remote source is encountered, always return the results of its
    //   attempted retrieval, regardless of its success.
    // - If a local source is encountered, only return the local font if it is
    //   successfully retrieved. In the case where the font is not locally
    //   available, the next font in the source list should be attempted
    //   instead.
    // https://www.w3.org/TR/css3-fonts/#src-desc
    for (FontFaceSources::const_iterator source_iterator =
             style_set_entry->sources.begin();
         source_iterator != style_set_entry->sources.end(); ++source_iterator) {
      //printf("FontCache::TryGetFont 2\n");
      if (source_iterator->IsUrlSource()) {
        //printf("FontCache::TryGetFont 3 %s\n", source_iterator->GetUrl().path().c_str());
        return TryGetRemoteFont(source_iterator->GetUrl(), size, state);
      } else {
        //printf("FontCache::TryGetFont 4  %s\n", source_iterator->GetName().c_str());
        scoped_refptr<render_tree::Font> font =
            TryGetLocalFontByFaceName(source_iterator->GetName(), size, state);
        if (font.get() != NULL) {
          return font;
        }
      }
    }
    printf("FontCache::TryGetFont 5 (kUnavailableState)\n");

    *state = FontListFont::kUnavailableState;
    return NULL;
  } else {
    //printf("FontCache::TryGetFont 6\n");
    return TryGetLocalFont(family, style, size, state);
  }
}

FontCache::CharacterFallbackTypefaceMap&
FontCache::GetCharacterFallbackTypefaceMap(
    const render_tree::FontStyle& style) {
  //printf("FontCache::GetCharacterFallbackTypefaceMap 1\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  return character_fallback_typeface_maps_[CharacterFallbackKey(style)];
}

const scoped_refptr<render_tree::Typeface>&
FontCache::GetCharacterFallbackTypeface(int32 utf32_character,
                                        const render_tree::FontStyle& style) {
  printf("FontCache::GetCharacterFallbackTypefaceMap 1\n");
  DCHECK(thread_checker_.CalledOnValidThread());
  printf("FontCache::GetCharacterFallbackTypefaceMap 2\n");
  DCHECK(resource_provider());
  scoped_refptr<render_tree::Typeface> typeface =
    resource_provider()->
    GetCharacterFallbackTypeface(utf32_character, style,
      language_script_);
  DCHECK(typeface);
  printf("FontCache::GetCharacterFallbackTypefaceMap 3\n");
  return GetCachedLocalTypeface(typeface);
}

scoped_refptr<render_tree::GlyphBuffer> FontCache::CreateGlyphBuffer(
    const base::char16* text_buffer, int32 text_length, bool is_rtl,
    FontList* font_list) {
  //printf("FontCache::CreateGlyphBuffer 1\n");
  DCHECK(resource_provider());
  return resource_provider()->CreateGlyphBuffer(
      text_buffer, static_cast<size_t>(text_length), language_script_, is_rtl,
      font_list);
}

float FontCache::GetTextWidth(const base::char16* text_buffer,
                              int32 text_length, bool is_rtl,
                              FontList* font_list,
                              render_tree::FontVector* maybe_used_fonts) {
  //printf("FontCache::GetTextWidth 1\n");
  DCHECK(resource_provider());
  DCHECK(font_list);
  //DCHECK(maybe_used_fonts);
  DCHECK(text_buffer);
  return resource_provider()->GetTextWidth(
      text_buffer, static_cast<size_t>(text_length), language_script_, is_rtl,
      font_list, maybe_used_fonts);
}

void FontCache::ProcessInactiveFontLists(const base::TimeTicks& current_time) {
  //printf("FontCache::ProcessInactiveFontLists 1\n");
  for (FontListMap::iterator font_list_iterator = font_list_map_.begin();
       font_list_iterator != font_list_map_.end();) {
    //printf("FontCache::ProcessInactiveFontLists 2\n");
    FontListInfo& font_list_info = font_list_iterator->second;

    // Any font list that has a single ref is unreferenced outside of the font
    // cache and is no longer active.
    if (font_list_info.font_list->HasOneRef()) {
      // If there is no inactive time set, then the font list has just become
      // inactive, so set the time now.
      if (font_list_info.inactive_time.is_null()) {
        font_list_info.inactive_time = current_time;
        // Otherwise, check to see if the purge delay has been reached.
      } else if ((current_time - font_list_info.inactive_time)
                     .InMilliseconds() >= kInactiveFontListPurgeDelayMs) {
        font_list_map_.erase(font_list_iterator++);
        continue;
      }
      // Otherwise, if there's an inactive time set on this font list, clear it.
    } else if (!font_list_info.inactive_time.is_null()) {
      font_list_info.inactive_time = base::TimeTicks();
    }

    ++font_list_iterator;
  }
}

void FontCache::ProcessInactiveFonts(const base::TimeTicks& current_time) {
  //printf("FontCache::ProcessInactiveFonts 1\n");
  for (FontMap::iterator font_iterator = font_map_.begin();
       font_iterator != font_map_.end();) {
    //printf("FontCache::ProcessInactiveFonts 2\n");
    FontInfo& font_info = font_iterator->second;

    // Any font that has a single ref is unreferenced outside of the font cache
    // and is no longer active.
    if (font_info.font->HasOneRef()) {
      // If there is no inactive time set, then the font has just become
      // inactive, so set the time now and insert it into the inactive font set.
      if (font_info.inactive_time.is_null()) {
        font_info.inactive_time = current_time;
        inactive_font_set_.insert(
            InactiveFontKey(font_info.inactive_time, font_iterator->first));
      }
      // Otherwise, if there's an inactive time set on this font, clear it and
      // remove the font from the inactive font set.
    } else if (!font_info.inactive_time.is_null()) {
      inactive_font_set_.erase(
          InactiveFontKey(font_info.inactive_time, font_iterator->first));
      font_info.inactive_time = base::TimeTicks();
    }

    ++font_iterator;
  }
  //printf("FontCache::ProcessInactiveFonts 3\n");

  // Continue looping until the total font count drops to the purge threshold or
  // there are no more inactive fonts to purge.
  while (font_map_.size() > kTotalFontCountPurgeThreshold &&
         inactive_font_set_.size() > 0) {
    ///printf("FontCache::ProcessInactiveFonts 4\n");
    // Grab the first inactive font in the set. They are ordered by the time
    // they became inactive, so the first inactive font in the set is the
    // oldest.
    InactiveFontSet::iterator inactive_font_iterator =
        inactive_font_set_.begin();
    // Check to see if the oldest inactive font is old enough to be purged. If
    // it is not, simply break out. None of the other inactive fonts will be
    // purgeable either.
    if ((current_time - inactive_font_iterator->inactive_time)
            .InMilliseconds() < kInactiveFontPurgeDelayMs) {
      break;
    }

    // The inactive font is old enough to be purged. Remove it from both the
    // font map and the inactive font set.
    font_map_.erase(inactive_font_iterator->font_key);
    inactive_font_set_.erase(inactive_font_iterator);
  }
  ///printf("FontCache::ProcessInactiveFonts 5\n");
}

const scoped_refptr<render_tree::Typeface>& FontCache::GetCachedLocalTypeface(
    const scoped_refptr<render_tree::Typeface>& typeface) {
  DCHECK(typeface);
  // Check to see if a typeface with a matching id is already in the cache. If
  // it is not, then add the passed in typeface to the cache.
  scoped_refptr<render_tree::Typeface>& cached_typeface =
      local_typeface_map_[typeface->GetId()];
  if (cached_typeface.get() == NULL) {
    cached_typeface = typeface;
  }
  return cached_typeface;
}

scoped_refptr<render_tree::Font> FontCache::TryGetRemoteFont(
    const GURL& url, float size, FontListFont::State* state) {
  //printf("FontCache::TryGetRemoteFont 1 %f %s %s \n", size, url.path().c_str(), document_location_->origin().c_str());
  //return TryGetLocalFont("", render_tree::FontStyle(),22,state); /// __TODO__

  // Retrieve the font from the remote typeface cache, potentially triggering a
  // load.
  scoped_refptr<loader::font::CachedRemoteTypeface> cached_remote_typeface =
      remote_typeface_cache_->CreateCachedResource(
          url, document_location_ ? document_location_->GetOriginAsObject()
                                  : loader::Origin());

  //printf("FontCache::TryGetRemoteFont 2\n");

  RequestedRemoteTypefaceMap::iterator requested_remote_typeface_iterator =
      requested_remote_typeface_cache_.find(url);

  //printf("FontCache::TryGetRemoteFont 3\n");

  // If the requested url is not currently cached, then create a cached
  // reference and request timer, providing callbacks for when the load is
  // completed or the timer expires.
  if (requested_remote_typeface_iterator ==
      requested_remote_typeface_cache_.end()) {
    //printf("FontCache::TryGetRemoteFont 4\n");
    DLOG(INFO) << "Requested remote font from " << url;
    // Create the remote typeface load event's callback. This callback occurs on
    // successful loads, failed loads, and when the request's timer expires.
    base::Closure typeface_load_event_callback = base::Bind(
        &FontCache::OnRemoteTypefaceLoadEvent, base::Unretained(this), url);
    //printf("FontCache::TryGetRemoteFont 5\n");

    //return NULL; /// __TODO__

    // Insert the newly requested remote typeface's info into the cache, and set
    // the iterator from the return value of the map insertion.
    requested_remote_typeface_iterator =
        requested_remote_typeface_cache_
            .insert(RequestedRemoteTypefaceMap::value_type(
                url,
                new RequestedRemoteTypefaceInfo(
                         cached_remote_typeface, typeface_load_event_callback)
                //nullptr
                ))
            .first;
    //printf("FontCache::TryGetRemoteFont 6\n");
  }

  //requested_remote_typeface_iterator->second->HasActiveRequestTimer()

  //OnRemoteTypefaceLoadEvent(url);

  /// __TODO__
  /*{
    scoped_refptr<render_tree::Typeface> typeface = /// __TODO__
        cached_remote_typeface->TryGetResource();
    DCHECK(typeface);
    *state = FontListFont::kLoadedState; /// __TODO__
    return GetFontFromTypefaceAndSize(typeface, size); /// __TODO__
  }*/

  printf("FontCache::TryGetRemoteFont 7\n");
  scoped_refptr<render_tree::Typeface> typeface =
      cached_remote_typeface->TryGetResource();
  printf("FontCache::TryGetRemoteFont 8\n");
  if (typeface.get() != NULL) {
    printf("FontCache::TryGetRemoteFont 9 (kLoadedState)\n");
    *state = FontListFont::kLoadedState;
    return GetFontFromTypefaceAndSize(typeface, size);
  } else {
    printf("FontCache::TryGetRemoteFont 10\n");
    if (cached_remote_typeface->IsLoadingComplete()) {
      printf("FontCache::TryGetRemoteFont 11 (kUnavailableState)\n");
      *state = FontListFont::kUnavailableState;
       /// __TODO__
    /**/
    } else if (requested_remote_typeface_iterator->second
                   ->HasActiveRequestTimer()) {
      printf("FontCache::TryGetRemoteFont 12 (kLoadingWithTimerActiveState)\n");
      *state = FontListFont::kLoadingWithTimerActiveState;
    } else {
      printf("FontCache::TryGetRemoteFont 13 (kLoadingWithTimerExpiredState)\n");
      *state = FontListFont::kLoadingWithTimerExpiredState;
    }
    return NULL;
  }

  NOTREACHED();
}

scoped_refptr<render_tree::Font> FontCache::TryGetLocalFont(
    const std::string& family, render_tree::FontStyle style, float size,
    FontListFont::State* state) {
  //printf("FontCache::TryGetLocalFont 1 %s\n", family.c_str());

  DCHECK(resource_provider());
  DCHECK(resource_provider() != NULL);
  // Only request the local font from the resource provider if the family is
  // empty or the resource provider actually has the family. The reason for this
  // is that the resource provider's |GetLocalTypeface()| is guaranteed to
  // return a non-NULL value, and in the case where a family is not supported,
  // the subsequent fonts in the font list need to be attempted. An empty family
  // signifies using the default font.
  if (!family.empty() &&
      !resource_provider()->HasLocalFontFamily(family.c_str())) {
    //printf("FontCache::TryGetLocalFont 2 %s\n", family.c_str());
    *state = FontListFont::kUnavailableState;
    return NULL;
  } else {
    //printf("FontCache::TryGetLocalFont 3 %s\n", family.c_str());
    *state = FontListFont::kLoadedState;
    DCHECK(resource_provider()->GetLocalTypeface(family.c_str(), style));
    return GetFontFromTypefaceAndSize(
        GetCachedLocalTypeface(
            resource_provider()->GetLocalTypeface(family.c_str(), style)),
        size);
  }
  //printf("FontCache::TryGetLocalFont 2\n");
}

scoped_refptr<render_tree::Font> FontCache::TryGetLocalFontByFaceName(
    const std::string& font_face, float size, FontListFont::State* state) {
  //printf("FontCache::TryGetLocalFontByFaceName 1\n");

    do {
      //printf("FontCache::TryGetLocalFontByFaceName 2\n");
    if (font_face.empty()) {
      break;
    }
    const scoped_refptr<render_tree::Typeface>& typeface(
        resource_provider()->GetLocalTypefaceByFaceNameIfAvailable(
            font_face.c_str()));
    if (!typeface) {
      break;
    }
    DCHECK(typeface);
    const scoped_refptr<render_tree::Typeface>& typeface_cached(
        GetCachedLocalTypeface(typeface));

    *state = FontListFont::kLoadedState;
    return GetFontFromTypefaceAndSize(typeface_cached, size);
  } while (false);

  *state = FontListFont::kUnavailableState;
  return NULL;
}

void FontCache::OnRemoteTypefaceLoadEvent(const GURL& url) {
  printf("FontCache::OnRemoteTypefaceLoadEvent %s 1\n", url.path().c_str());

  //return; /// __TODO__

  DCHECK(thread_checker_.CalledOnValidThread());
  RequestedRemoteTypefaceMap::iterator requested_remote_typeface_iterator =
      requested_remote_typeface_cache_.find(url);
  if (requested_remote_typeface_iterator !=
      requested_remote_typeface_cache_.end()) {
    //printf("FontCache::OnRemoteTypefaceLoadEvent 2\n");

    // NOTE: We can potentially track the exact font list fonts that are
    // impacted by each load event and only reset them. However, as a result of
    // the minimal amount of processing required to update the loading status of
    // a font, the small number of fonts involved, and the fact that this is an
    // infrequent event, adding this additional layer of tracking complexity
    // doesn't appear to offer any meaningful benefits.
    for (FontListMap::iterator font_list_iterator = font_list_map_.begin();
         font_list_iterator != font_list_map_.end(); ++font_list_iterator) {
      FontListInfo& font_list_info = font_list_iterator->second;
      font_list_info.font_list->ResetLoadingFonts();
      //printf("FontCache::OnRemoteTypefaceLoadEvent 3\n");
    }

    printf("FontCache::OnRemoteTypefaceLoadEvent 4\n");

    // Clear the request timer. It only runs until the first load event occurs.
    requested_remote_typeface_iterator->second->ClearRequestTimer();

    external_typeface_load_event_callback_.Run();
  }
  printf("FontCache::OnRemoteTypefaceLoadEvent 5\n");
}

}  // namespace dom
}  // namespace cobalt
