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

#include "cobalt/dom/font_face.h"

#include <cmath>
#include <cstdlib>
#include <limits>

namespace cobalt {
namespace dom {

void FontFaceStyleSet::AddEntry(const FontFaceStyleSet::Entry& entry) {
  entries_.push_back(entry);
}

void FontFaceStyleSet::CollectUrlSources(std::set<GURL>* urls) const {
  for (Entries::const_iterator entry_iterator = entries_.begin();
       entry_iterator != entries_.end(); ++entry_iterator) {
    const FontFaceSources& entry_sources = entry_iterator->sources;
    for (FontFaceSources::const_iterator source_iterator =
             entry_sources.begin();
         source_iterator != entry_sources.end(); ++source_iterator) {
      if (source_iterator->IsUrlSource()) {
        urls->insert(source_iterator->GetUrl());
      }
    }
  }
}

const FontFaceStyleSet::Entry* FontFaceStyleSet::MatchStyle(
    const render_tree::FontStyle& pattern) const {
  return entries_.empty() ? NULL
                          : &entries_[GetClosestStyleEntryIndex(pattern)];
}

size_t FontFaceStyleSet::GetClosestStyleEntryIndex(
    const render_tree::FontStyle& pattern) const {
  size_t closest_index = 0;
  int max_score = std::numeric_limits<int>::min();
  for (size_t i = 0; i < entries_.size(); ++i) {
    int score = MatchScore(pattern, entries_[i].style);
    if (score > max_score) {
      closest_index = i;
      max_score = score;
    }
  }

  return closest_index;
}

int FontFaceStyleSet::MatchScore(
    const render_tree::FontStyle& pattern,
    const render_tree::FontStyle& candidate) const {
  // This logic is taken from Skia and is based upon the algorithm specified
  // within the spec:
  //   https://www.w3.org/TR/css-fonts-3/#font-matching-algorithm

  int score = 0;

  // CSS style (italic/oblique)
  // Being italic trumps all valid weights which are not italic.
  // Note that newer specs differentiate between italic and oblique.
  if ((pattern.slant == render_tree::FontStyle::kItalicSlant) ==
      (candidate.slant == render_tree::FontStyle::kItalicSlant)) {
    score += 1001;
  }

  // The 'closer' to the target weight, the higher the score.
  // 1000 is the 'heaviest' recognized weight
  if (pattern.weight == candidate.weight) {
    score += 1000;
  } else if (pattern.weight <= 500) {
    if (400 <= pattern.weight && pattern.weight < 450) {
      if (450 <= candidate.weight && candidate.weight <= 500) {
        score += 500;
      }
    }
    if (candidate.weight <= pattern.weight) {
      score += 1000 - pattern.weight + candidate.weight;
    } else {
      score += 1000 - candidate.weight;
    }
  } else if (pattern.weight > 500) {
    if (candidate.weight > pattern.weight) {
      score += 1000 + pattern.weight - candidate.weight;
    } else {
      score += candidate.weight;
    }
  }

  return score;
}

}  // namespace dom
}  // namespace cobalt
