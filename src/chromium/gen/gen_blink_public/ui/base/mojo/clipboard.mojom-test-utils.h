// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_TEST_UTILS_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_TEST_UTILS_H_

#include "ui/base/mojo/clipboard.mojom.h"


namespace ui {
namespace mojom {


class  ClipboardHostInterceptorForTesting : public ClipboardHost {
  virtual ClipboardHost* GetForwardingInterface() = 0;
  void GetSequenceNumber(ui::ClipboardType type, GetSequenceNumberCallback callback) override;
  void IsFormatAvailable(const std::string& format, ui::ClipboardType type, IsFormatAvailableCallback callback) override;
  void Clear(ui::ClipboardType type) override;
  void ReadAvailableTypes(ui::ClipboardType type, ReadAvailableTypesCallback callback) override;
  void ReadText(ui::ClipboardType type, ReadTextCallback callback) override;
  void ReadAsciiText(ui::ClipboardType type, ReadAsciiTextCallback callback) override;
  void ReadHTML(ui::ClipboardType type, ReadHTMLCallback callback) override;
  void ReadRTF(ui::ClipboardType type, ReadRTFCallback callback) override;
  void ReadImage(ui::ClipboardType type, ReadImageCallback callback) override;
  void ReadCustomData(ui::ClipboardType clipboard_type, const base::string16& type, ReadCustomDataCallback callback) override;
  void ReadBookmark(ReadBookmarkCallback callback) override;
  void ReadData(const std::string& format, ReadDataCallback callback) override;
  void GetLastModifiedTime(GetLastModifiedTimeCallback callback) override;
  void ClearLastModifiedTime() override;
  void WriteText(const base::string16& text) override;
  void WriteHTML(const base::string16& markup, const std::string& url) override;
  void WriteRTF(const std::string& rtf) override;
  void WriteBookmark(const std::string& url, const base::string16& title) override;
  void WriteWebSmartPaste() override;
  void WriteBitmap(const SkBitmap& bitmap) override;
  void WriteData(const std::string& type, const std::string& data) override;
  void CommitWrite(ui::ClipboardType type) override;
};
class  ClipboardHostAsyncWaiter {
 public:
  explicit ClipboardHostAsyncWaiter(ClipboardHost* proxy);
  ~ClipboardHostAsyncWaiter();
  void GetSequenceNumber(
      ui::ClipboardType type, uint64_t* out_result);
  void IsFormatAvailable(
      const std::string& format, ui::ClipboardType type, bool* out_result);
  void ReadAvailableTypes(
      ui::ClipboardType type, std::vector<base::string16>* out_types, bool* out_contains_filenames);
  void ReadText(
      ui::ClipboardType type, base::string16* out_result);
  void ReadAsciiText(
      ui::ClipboardType type, std::string* out_result);
  void ReadHTML(
      ui::ClipboardType type, base::string16* out_markup, std::string* out_src_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);
  void ReadRTF(
      ui::ClipboardType type, std::string* out_result);
  void ReadImage(
      ui::ClipboardType type, SkBitmap* out_image);
  void ReadCustomData(
      ui::ClipboardType clipboard_type, const base::string16& type, base::string16* out_result);
  void ReadBookmark(
      base::string16* out_title, std::string* out_url);
  void ReadData(
      const std::string& format, std::string* out_result);
  void GetLastModifiedTime(
      base::Time* out_time);

 private:
  ClipboardHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ClipboardHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_MOJO_CLIPBOARD_MOJOM_TEST_UTILS_H_