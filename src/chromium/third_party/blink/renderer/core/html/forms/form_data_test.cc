// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/html/forms/form_data.h"

#include "testing/gtest/include/gtest/gtest.h"
#include "third_party/blink/renderer/core/fileapi/file.h"
#include "third_party/blink/renderer/core/html/forms/form_controller.h"

namespace blink {

namespace {

FormData* Deserialize(const Vector<String>& strings) {
  wtf_size_t i = 0;
  auto state = FormControlState::Deserialize(strings, i);
  wtf_size_t j = 0;
  return FormData::CreateFromControlState(state, j);
}

}  // namespace

TEST(FormDataTest, append) {
  FormData* fd = FormData::Create(UTF8Encoding());
  fd->append("test\n1", "value\n1");
  fd->append("test\r2", nullptr, "filename");

  const FormData::Entry& entry1 = *fd->Entries()[0];
  EXPECT_EQ("test\n1", entry1.name());
  EXPECT_EQ("value\n1", entry1.Value());

  const FormData::Entry& entry2 = *fd->Entries()[1];
  EXPECT_EQ("test\r2", entry2.name());
}

TEST(FormDataTest, AppendFromElement) {
  FormData* fd = FormData::Create(UTF8Encoding());
  fd->AppendFromElement("Atomic\nNumber", 1);
  fd->AppendFromElement("Periodic\nTable", nullptr);
  fd->AppendFromElement("Noble\nGas", "He\rNe\nAr\r\nKr");

  const FormData::Entry& entry1 = *fd->Entries()[0];
  EXPECT_EQ("Atomic\r\nNumber", entry1.name());
  EXPECT_EQ("1", entry1.Value());

  const FormData::Entry& entry2 = *fd->Entries()[1];
  EXPECT_EQ("Periodic\r\nTable", entry2.name());

  const FormData::Entry& entry3 = *fd->Entries()[2];
  EXPECT_EQ("Noble\r\nGas", entry3.name());
  EXPECT_EQ("He\r\nNe\r\nAr\r\nKr", entry3.Value());
}

TEST(FormDataTest, get) {
  FormData* fd = FormData::Create(UTF8Encoding());
  fd->append("name1", "value1");

  FileOrUSVString result;
  fd->get("name1", result);
  EXPECT_TRUE(result.IsUSVString());
  EXPECT_EQ("value1", result.GetAsUSVString());

  const FormData::Entry& entry = *fd->Entries()[0];
  EXPECT_EQ("name1", entry.name());
  EXPECT_EQ("value1", entry.Value());
}

TEST(FormDataTest, getAll) {
  FormData* fd = FormData::Create(UTF8Encoding());
  fd->append("name1", "value1");

  HeapVector<FormDataEntryValue> results = fd->getAll("name1");
  EXPECT_EQ(1u, results.size());
  EXPECT_TRUE(results[0].IsUSVString());
  EXPECT_EQ("value1", results[0].GetAsUSVString());

  EXPECT_EQ(1u, fd->size());
}

TEST(FormDataTest, has) {
  FormData* fd = FormData::Create(UTF8Encoding());
  fd->append("name1", "value1");

  EXPECT_TRUE(fd->has("name1"));
  EXPECT_EQ(1u, fd->size());
}

TEST(FormDataTest, AppendToControlState) {
  {
    auto* fd = MakeGarbageCollected<FormData>();
    FormControlState state;
    fd->AppendToControlState(state);

    EXPECT_EQ(1u, state.ValueSize());
    EXPECT_EQ("0", state[0]) << "Number of entries should be 0";
  }

  {
    auto* fd = MakeGarbageCollected<FormData>();
    fd->append("n1", "string");
    fd->AppendFromElement("n1", File::Create("/etc/hosts"));
    FormControlState state;
    fd->AppendToControlState(state);

    EXPECT_EQ(9u, state.ValueSize());
    EXPECT_EQ("2", state[0]) << "Number of entries should be 2";

    EXPECT_EQ("n1", state[1]);
    EXPECT_EQ("USVString", state[2]);
    EXPECT_EQ("string", state[3]);

    EXPECT_EQ("n1", state[4]);
    EXPECT_EQ("File", state[5]);
    EXPECT_EQ("/etc/hosts", state[6]);
    EXPECT_EQ("hosts", state[7]);
    EXPECT_EQ(String(), state[8]);
  }
}

TEST(FormDataTest, CreateFromControlState) {
  EXPECT_EQ(nullptr, Deserialize({"1", "not-a-number"}))
      << "Should fail on size parsing";

  auto* fd0 = Deserialize({"1", "0"});
  ASSERT_NE(nullptr, fd0);
  EXPECT_EQ(0u, fd0->size());

  EXPECT_EQ(nullptr, Deserialize({"1", "1"})) << "Missing name value";

  EXPECT_EQ(nullptr, Deserialize({"2", "1", "n0"})) << "Missing entry type";

  EXPECT_EQ(nullptr, Deserialize({"3", "1", "n0", "DOMString"}))
      << "Unknown entry type";

  EXPECT_EQ(nullptr, Deserialize({"3", "1", "n0", "USVString"}))
      << "Missing USVString value";

  EXPECT_EQ(nullptr, Deserialize({"3", "1", "n1", "File"}))
      << "Missing File value 1";

  EXPECT_EQ(nullptr, Deserialize({"4", "1", "n1", "File", "/etc/hosts"}))
      << "Missing File value 2";

  EXPECT_EQ(nullptr,
            Deserialize({"5", "1", "n1", "File", "/etc/password", "pasword"}))
      << "Missing File value 3";

  auto* fd = Deserialize({"9", "2", "n1", "USVString", "string-value", "n2",
                          "File", "/etc/password", "pasword", ""});
  ASSERT_NE(nullptr, fd);
  EXPECT_EQ(2u, fd->size());
  const FormData::Entry* entry0 = fd->Entries()[0];
  EXPECT_TRUE(entry0->IsString());
  EXPECT_EQ("string-value", entry0->Value());
  const FormData::Entry* entry1 = fd->Entries()[1];
  EXPECT_TRUE(entry1->isFile());
  EXPECT_EQ("/etc/password", entry1->GetFile()->GetPath());
}

}  // namespace blink
