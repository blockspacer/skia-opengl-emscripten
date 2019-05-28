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

#include "cobalt/bindings/testing/bindings_test_base.h"
#include "cobalt/bindings/testing/garbage_collection_test_interface.h"
#include "cobalt/bindings/testing/interface_with_any.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace cobalt {
namespace bindings {
namespace testing {

namespace {

typedef BindingsTestBase GarbageCollectionTest;

class ScriptValueGarbageCollectionTest
    : public InterfaceBindingsTest<InterfaceWithAny> {};

}  // namespace

TEST_F(GarbageCollectionTest, JSObjectHoldsReferenceToPlatformObject) {
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);
  EXPECT_TRUE(
      EvaluateScript("var obj = new GarbageCollectionTestInterface();", NULL));

  // Ensure that this is kept alive after GC is run.
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 1);
  CollectGarbage();
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 1);

  // Ensure that this is destroyed when there are no more references to it from
  // JavaScript.
  EXPECT_TRUE(EvaluateScript("var obj = undefined;", NULL));
  CollectGarbage();
#if !defined(ENGINE_USES_CONSERVATIVE_ROOTING)
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);
#endif
}

TEST_F(GarbageCollectionTest, PreventGarbageCollection) {
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);
  EXPECT_TRUE(
      EvaluateScript("var obj = new GarbageCollectionTestInterface();", NULL));

  // Keep this instance alive using PreventGarbageCollection
  ASSERT_EQ(GarbageCollectionTestInterface::instances().size(), 1);
  {
    script::GlobalEnvironment::ScopedPreventGarbageCollection
        scoped_prevent_garbage_collection(
            global_environment_,
            GarbageCollectionTestInterface::instances()[0]);
    // Remove the only reference to this object from JavaScript.
    EXPECT_TRUE(EvaluateScript("var obj = undefined;", NULL));

    // Ensure that the object is kept alive.
    CollectGarbage();
    ASSERT_EQ(GarbageCollectionTestInterface::instances().size(), 1);

    // Allow this object to be garbage collected once more.
  }

  // Ensure that the object is destroyed by garbage collection.
  CollectGarbage();
#if !defined(ENGINE_USES_CONSERVATIVE_ROOTING)
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);
#endif
}

TEST_F(GarbageCollectionTest, ReachableObjectsKeptAlive) {
  // Build a linked-list structure.
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);
  EXPECT_TRUE(EvaluateScript(
      "var head = new GarbageCollectionTestInterface();"
      "head.next = new GarbageCollectionTestInterface();"
      "head.next.next = new GarbageCollectionTestInterface();"
      "head.next.next.next = new GarbageCollectionTestInterface();"));
  ASSERT_EQ(GarbageCollectionTestInterface::instances().size(), 4);

  // A reference to anything in the list should keep the rest of the structure
  // alive.
  EXPECT_TRUE(
      EvaluateScript("var tail = head.next.next.next;"
                     "var head = undefined;"));
  CollectGarbage();
  ASSERT_EQ(GarbageCollectionTestInterface::instances().size(), 4);

  // The old tail is not reachable, so the nodes should get garbage collected.
  EXPECT_TRUE(
      EvaluateScript("var tail = tail.previous.previous;"
                     "tail.next = null;"));
  CollectGarbage();
#if !defined(ENGINE_USES_CONSERVATIVE_ROOTING)
  ASSERT_EQ(GarbageCollectionTestInterface::instances().size(), 2);
#endif
}

TEST_F(GarbageCollectionTest, ReachableScriptValuesKeptAlive) {
  // Ensure that platform objects attached to |Wrappable|s as script values
  // survive GC.
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);

  const char script[] = R"(
      const root = new InterfaceWithAny();
      (() => {
        const gcti = new GarbageCollectionTestInterface();
        gcti.bicycle = 7;
        root.setAny(gcti);
      })();
  )";
  EXPECT_TRUE(EvaluateScript(script));

  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 1);

  CollectGarbage();

  std::string result;
  EXPECT_TRUE(EvaluateScript("root.getAny().bicycle;", &result));
  EXPECT_STREQ("7", result.c_str());
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 1);
}

TEST_F(GarbageCollectionTest, JSObjectRetainsCustomProperty) {
  // Build a linked-list structure.
  EXPECT_EQ(GarbageCollectionTestInterface::instances().size(), 0);
  EXPECT_TRUE(EvaluateScript(
      "var head = new GarbageCollectionTestInterface();"
      "head.next = new GarbageCollectionTestInterface();"
      "head.next.next = new GarbageCollectionTestInterface();"
      "head.next.next.next = new GarbageCollectionTestInterface();"));
  ASSERT_EQ(GarbageCollectionTestInterface::instances().size(), 4);

  // Add a custom property to an object that is not directly reachable from JS.
  EXPECT_TRUE(EvaluateScript("head.next.bicycle = 7;"));

  // Collect garbage and ensure that the custom property persisted.
  CollectGarbage();
  std::string result;
  EXPECT_TRUE(EvaluateScript("head.next.bicycle;", &result));
  EXPECT_STREQ("7", result.c_str());
}

TEST_F(ScriptValueGarbageCollectionTest, ScriptHandleConstructors) {
  EXPECT_TRUE(EvaluateScript("test.setAny({});"));
  script::Handle<script::ValueHandle> object = test_mock().GetAny();
  EXPECT_TRUE(EvaluateScript("test.setAny({})"));
  CollectGarbage();
  EXPECT_FALSE(object.GetScriptValue()->IsNull());

  auto weak_ref = object.GetScriptValue()->MakeWeakCopy();
  object = test_mock().GetAny();
  CollectGarbage();
#if !defined(ENGINE_USES_CONSERVATIVE_ROOTING)
  EXPECT_TRUE(weak_ref->IsNull());
#endif

  EvaluateScript("test.setAny({})");
  {
    script::Handle<script::ValueHandle> object = test_mock().GetAny();
    script::Handle<script::ValueHandle> object2(object);
    EXPECT_TRUE(object.GetScriptValue()->EqualTo(*object2.GetScriptValue()));
    CollectGarbage();
    EXPECT_FALSE(object.GetScriptValue()->IsNull());
    EXPECT_FALSE(object2.GetScriptValue()->IsNull());
    EXPECT_TRUE(object.GetScriptValue()->EqualTo(*object2.GetScriptValue()));

    weak_ref = object.GetScriptValue()->MakeWeakCopy();
  }

  EvaluateScript("test.setAny({})");
  CollectGarbage();
#if !defined(ENGINE_USES_CONSERVATIVE_ROOTING)
  EXPECT_TRUE(weak_ref->IsNull());
#endif

  {
    script::Handle<script::ValueHandle> object = test_mock().GetAny();
    script::Handle<script::ValueHandle> object2 = std::move(object);
    EXPECT_FALSE(object2.GetScriptValue()->IsNull());
    script::Handle<script::ValueHandle> object3(std::move(object2));
    EXPECT_FALSE(object3.GetScriptValue()->IsNull());
  }
}

}  // namespace testing
}  // namespace bindings
}  // namespace cobalt
