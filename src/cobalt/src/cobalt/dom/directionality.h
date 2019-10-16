// Copyright 2019 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_DOM_DIRECTIONALITY_H_
#define COBALT_DOM_DIRECTIONALITY_H_

namespace cobalt {
namespace dom {

// The enum Directionality is used to track the explicit direction of the html
// element:
// https://dev.w3.org/html5/spec-preview/global-attributes.html#the-directionality
// NOTE: Value "auto" is not supported.
enum Directionality {
  kNoExplicitDirectionality,
  kLeftToRightDirectionality,
  kRightToLeftDirectionality,
};

}  // namespace dom
}  // namespace cobalt

#endif  // COBALT_DOM_DIRECTIONALITY_H_
