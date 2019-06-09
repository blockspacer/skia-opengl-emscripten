// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_TREES_UKM_MANAGER_H_
#define CC_TREES_UKM_MANAGER_H_

#include "cc/cc_export.h"
#if defined(ENABLE_UKM)
#include "services/metrics/public/cpp/ukm_source_id.h"
#endif // defined(ENABLE_UKM)
#include "url/gurl.h"

#if defined(ENABLE_UKM)
namespace ukm {
class UkmRecorder;
}  // namespace ukm
#endif // ENABLE_UKM

#if defined(ENABLE_UKM)
namespace cc {

class CC_EXPORT UkmRecorderFactory {
 public:
  virtual ~UkmRecorderFactory() {}

  virtual std::unique_ptr<ukm::UkmRecorder> CreateRecorder() = 0;
};

class CC_EXPORT UkmManager {
 public:
  explicit UkmManager(std::unique_ptr<ukm::UkmRecorder> recorder);
  ~UkmManager();

  void SetSourceId(ukm::SourceId source_id);

  // These metrics are recorded while a user interaction is in progress.
  void SetUserInteractionInProgress(bool in_progress);
  void AddCheckerboardStatsForFrame(int64_t checkerboard_area,
                                    int64_t num_missing_tiles,
                                    int64_t total_visible_area);

  // These metrics are recorded until the source URL changes.
  void AddCheckerboardedImages(int num_of_checkerboarded_images);

  ukm::UkmRecorder* recorder_for_testing() { return recorder_.get(); }

 private:
  void RecordCheckerboardUkm();
  void RecordRenderingUkm();

  bool user_interaction_in_progress_ = false;
  int64_t num_of_images_checkerboarded_during_interaction_ = 0;
  int64_t checkerboarded_content_area_ = 0;
  int64_t num_missing_tiles_ = 0;
  int64_t total_visible_area_ = 0;
  int64_t num_of_frames_ = 0;

  int total_num_of_checkerboarded_images_ = 0;

  ukm::SourceId source_id_ = ukm::kInvalidSourceId;
  std::unique_ptr<ukm::UkmRecorder> recorder_;
};

}  // namespace cc
#endif // ENABLE_UKM

#endif  // CC_TREES_UKM_MANAGER_H_
