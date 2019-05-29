// Copyright 2017 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/media/base/color_space.h"

#include "starboard/memory.h"

namespace gfx {

CbColorSpace::PrimaryID CbColorSpace::PrimaryIDFromInt(int primary_id) {
  if (primary_id < 0 || primary_id > static_cast<int>(kPrimaryIdLast))
    return kPrimaryIdUnknown;
  if (primary_id > static_cast<int>(kPrimaryIdLastStandardValue) &&
      primary_id < 1000)
    return kPrimaryIdUnknown;
  return static_cast<PrimaryID>(primary_id);
}

CbColorSpace::TransferID CbColorSpace::TransferIDFromInt(int transfer_id) {
  if (transfer_id < 0 || transfer_id > static_cast<int>(kTransferIdLast))
    return kTransferIdUnknown;
  if (transfer_id > static_cast<int>(kTransferIdLastStandardValue) &&
      transfer_id < 1000)
    return kTransferIdUnknown;
  return static_cast<TransferID>(transfer_id);
}

CbColorSpace::MatrixID CbColorSpace::MatrixIDFromInt(int matrix_id) {
  if (matrix_id < 0 || matrix_id > static_cast<int>(kMatrixIdLast))
    return kMatrixIdUnknown;
  if (matrix_id > static_cast<int>(kMatrixIdLastStandardValue) &&
      matrix_id < 1000)
    return kMatrixIdUnknown;
  return static_cast<MatrixID>(matrix_id);
}

CbColorSpace::CbColorSpace()
    : primaries_(kPrimaryIdUnspecified),
      transfer_(kTransferIdUnspecified),
      matrix_(kMatrixIdUnspecified),
      range_(kRangeIdLimited) {
  SbMemorySet(custom_primary_matrix_, 0, sizeof(custom_primary_matrix_));
}

CbColorSpace::CbColorSpace(PrimaryID primaries, TransferID transfer,
                       MatrixID matrix, RangeID range)
    : primaries_(primaries),
      transfer_(transfer),
      matrix_(matrix),
      range_(range) {
  SbMemorySet(custom_primary_matrix_, 0, sizeof(custom_primary_matrix_));
}

CbColorSpace::CbColorSpace(int primaries, int transfer, int matrix, RangeID range)
    : primaries_(PrimaryIDFromInt(primaries)),
      transfer_(TransferIDFromInt(transfer)),
      matrix_(MatrixIDFromInt(matrix)),
      range_(range) {
  SbMemorySet(custom_primary_matrix_, 0, sizeof(custom_primary_matrix_));
}

CbColorSpace::CbColorSpace(const CbColorSpace& other)
    : primaries_(other.primaries_),
      transfer_(other.transfer_),
      matrix_(other.matrix_),
      range_(other.range_) {
  SbMemoryCopy(custom_primary_matrix_, other.custom_primary_matrix_,
               sizeof(custom_primary_matrix_));
}

CbColorSpace::~CbColorSpace() {}

// Static
CbColorSpace CbColorSpace::CreateXYZD50() {
  return CbColorSpace(kPrimaryIdXyzD50, kTransferIdLinear, kMatrixIdRgb,
                    kRangeIdFull);
}

// static
CbColorSpace CbColorSpace::CreateJpeg() {
  return CbColorSpace(kPrimaryIdBt709, kTransferIdIec6196621, kMatrixIdBt709,
                    kRangeIdFull);
}

// static
CbColorSpace CbColorSpace::CreateREC601() {
  return CbColorSpace(kPrimaryIdSmpte170M, kTransferIdSmpte170M,
                    kMatrixIdSmpte170M, kRangeIdLimited);
}

// static
CbColorSpace CbColorSpace::CreateREC709() {
  return CbColorSpace(kPrimaryIdBt709, kTransferIdBt709, kMatrixIdBt709,
                    kRangeIdLimited);
}

bool CbColorSpace::operator==(const CbColorSpace& other) const {
  if (primaries_ != other.primaries_ || transfer_ != other.transfer_ ||
      matrix_ != other.matrix_ || range_ != other.range_)
    return false;
  if (primaries_ == kPrimaryIdCustom &&
      SbMemoryCompare(custom_primary_matrix_, other.custom_primary_matrix_,
                      sizeof(custom_primary_matrix_)))
    return false;
  return true;
}

bool CbColorSpace::operator!=(const CbColorSpace& other) const {
  return !(*this == other);
}

bool CbColorSpace::operator<(const CbColorSpace& other) const {
  if (primaries_ < other.primaries_) return true;
  if (primaries_ > other.primaries_) return false;
  if (transfer_ < other.transfer_) return true;
  if (transfer_ > other.transfer_) return false;
  if (matrix_ < other.matrix_) return true;
  if (matrix_ > other.matrix_) return false;
  if (range_ < other.range_) return true;
  if (range_ > other.range_) return false;
  if (primaries_ == kPrimaryIdCustom) {
    int primary_result =
        SbMemoryCompare(custom_primary_matrix_, other.custom_primary_matrix_,
                        sizeof(custom_primary_matrix_));
    if (primary_result < 0) return true;
    if (primary_result > 0) return false;
  }
  return false;
}

}  // namespace gfx
