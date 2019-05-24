#ifndef V8_TORQUE_TEST_FROM_DSL_BASE_H__
#define V8_TORQUE_TEST_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"
#include "src/utils.h"
#include "torque-generated/class-definitions-from-dsl.h"

namespace v8 {
namespace internal {

class V8_EXPORT_PRIVATE TestBuiltinsFromDSLAssembler {
 public:
  explicit TestBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  struct TestStructA {
    compiler::TNode<FixedArray> indexes;
    compiler::TNode<Smi> i;
    compiler::TNode<Number> k;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
      return std::tuple_cat(std::make_tuple(indexes), std::make_tuple(i), std::make_tuple(k));
    }
  };
  struct TestStructB {
    TestBuiltinsFromDSLAssembler::TestStructA x;
    compiler::TNode<Smi> y;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<Smi>> Flatten() const {
      return std::tuple_cat(x.Flatten(), std::make_tuple(y));
    }
  };
  struct TestStructC {
    TestBuiltinsFromDSLAssembler::TestStructA x;
    TestBuiltinsFromDSLAssembler::TestStructA y;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
      return std::tuple_cat(x.Flatten(), y.Flatten());
    }
  };
  struct TestInner {
    compiler::TNode<Int32T> x;
    compiler::TNode<Int32T> y;

    std::tuple<compiler::TNode<Int32T>, compiler::TNode<Int32T>> Flatten() const {
      return std::tuple_cat(std::make_tuple(x), std::make_tuple(y));
    }
  };
  struct TestOuter {
    compiler::TNode<Int32T> a;
    TestBuiltinsFromDSLAssembler::TestInner b;
    compiler::TNode<Int32T> c;

    std::tuple<compiler::TNode<Int32T>, compiler::TNode<Int32T>, compiler::TNode<Int32T>, compiler::TNode<Int32T>> Flatten() const {
      return std::tuple_cat(std::make_tuple(a), b.Flatten(), std::make_tuple(c));
    }
  };
  class TestClassWithAllTypes : public JSObject {
   public:
    DEFINE_FIELD_OFFSET_CONSTANTS(JSObject::kSize, TORQUE_GENERATED_TEST_CLASS_WITH_ALL_TYPES_FIELDS)
  };
  class PreprocessingTest : public JSObject {
   public:
    DEFINE_FIELD_OFFSET_CONSTANTS(JSObject::kSize, TORQUE_GENERATED_PREPROCESSING_TEST_FIELDS)
  };
  struct StructWithConst {
    compiler::TNode<Object> a;
    compiler::TNode<Int32T> b;

    std::tuple<compiler::TNode<Object>, compiler::TNode<Int32T>> Flatten() const {
      return std::tuple_cat(std::make_tuple(a), std::make_tuple(b));
    }
  };
  struct TestIterator {
    compiler::TNode<Smi> count;

    std::tuple<compiler::TNode<Smi>> Flatten() const {
      return std::tuple_cat(std::make_tuple(count));
    }
  };
  class Foo : public JSObject {
   public:
    DEFINE_FIELD_OFFSET_CONSTANTS(JSObject::kSize, TORQUE_GENERATED_FOO_FIELDS)
  };
  class Bar : public TestBuiltinsFromDSLAssembler::Foo {
   public:
    DEFINE_FIELD_OFFSET_CONSTANTS(TestBuiltinsFromDSLAssembler::Foo::kSize, TORQUE_GENERATED_BAR_FIELDS)
  };
  compiler::TNode<BoolT> ElementsKindTestHelper1(ElementsKind p_kind);
  compiler::TNode<BoolT> ElementsKindTestHelper2(ElementsKind p_kind);
  bool ElementsKindTestHelper3(ElementsKind p_kind);
  void LabelTestHelper1(compiler::CodeAssemblerLabel* label_Label1);
  void LabelTestHelper2(compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
  void LabelTestHelper3(compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
  void TestConstexpr1();
  void TestConstexprIf();
  void TestConstexprReturn();
  compiler::TNode<Oddball> TestGotoLabel();
  compiler::TNode<Oddball> TestGotoLabelWithOneParameter();
  compiler::TNode<Oddball> TestGotoLabelWithTwoParameters();
  void TestBuiltinSpecialization(compiler::TNode<Context> p_c);
  void LabelTestHelper4(bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
  compiler::TNode<BoolT> CallLabelTestHelper4(bool p_flag);
  compiler::TNode<Oddball> TestPartiallyUnusedLabel();
  compiler::TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject(compiler::TNode<Object> p_param2);
  compiler::TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject(compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
  void TestMacroSpecialization();
  compiler::TNode<Oddball> TestFunctionPointers(compiler::TNode<Context> p_context);
  compiler::TNode<Oddball> TestVariableRedeclaration(compiler::TNode<Context> p_context);
  compiler::TNode<Smi> TestTernaryOperator(compiler::TNode<Smi> p_x);
  void TestFunctionPointerToGeneric(compiler::TNode<Context> p_c);
  compiler::TNode<BuiltinPtr> TestTypeAlias(compiler::TNode<BuiltinPtr> p_x);
  compiler::TNode<Oddball> TestUnsafeCast(compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
  void TestHexLiteral();
  void TestLargeIntegerLiterals(compiler::TNode<Context> p_c);
  void TestMultilineAssert();
  void TestNewlineInString();
  int31_t kConstexprConst();
  compiler::TNode<IntPtrT> kIntptrConst();
  compiler::TNode<Smi> kSmiConst();
  void TestModuleConstBindings();
  void TestLocalConstBindings();
  compiler::TNode<Smi> TestStruct1(TestBuiltinsFromDSLAssembler::TestStructA p_i);
  TestBuiltinsFromDSLAssembler::TestStructA TestStruct2(compiler::TNode<Context> p_context);
  TestBuiltinsFromDSLAssembler::TestStructA TestStruct3(compiler::TNode<Context> p_context);
  TestBuiltinsFromDSLAssembler::TestStructC TestStruct4(compiler::TNode<Context> p_context);
  void CallTestStructInLabel(compiler::TNode<Context> p_context);
  void TestForLoop();
  void TestSubtyping(compiler::TNode<Smi> p_x);
  compiler::TNode<Int32T> TypeswitchExample(compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
  void TestTypeswitch(compiler::TNode<Context> p_context);
  void TestTypeswitchAsanLsanFailure(compiler::TNode<Context> p_context, compiler::TNode<Object> p_obj);
  void TestGenericOverload(compiler::TNode<Context> p_context);
  void TestEquality(compiler::TNode<Context> p_context);
  void BoolToBranch(compiler::TNode<BoolT> p_x, compiler::CodeAssemblerLabel* label_Taken, compiler::CodeAssemblerLabel* label_NotTaken);
  compiler::TNode<BoolT> TestOrAnd1(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestOrAnd2(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestOrAnd3(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestAndOr1(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestAndOr2(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestAndOr3(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  void TestLogicalOperators();
  compiler::TNode<Smi> TestCall(compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
  void TestOtherwiseWithCode1();
  void TestOtherwiseWithCode2();
  void TestOtherwiseWithCode3();
  void TestForwardLabel();
  void TestQualifiedAccess(compiler::TNode<Context> p_context);
  compiler::TNode<Smi> TestCatch1(compiler::TNode<Context> p_context);
  void TestCatch2Wrapper(compiler::TNode<Context> p_context);
  compiler::TNode<Smi> TestCatch2(compiler::TNode<Context> p_context);
  void TestCatch3WrapperWithLabel(compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_Abort);
  compiler::TNode<Smi> TestCatch3(compiler::TNode<Context> p_context);
  void TestIterator(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Map> p_map);
  void TestFrame1(compiler::TNode<Context> p_context);
  void TestNew(compiler::TNode<Context> p_context);
  void TestStructConstructor(compiler::TNode<Context> p_context);
  void TestClassWithAllTypesLoadsAndStores(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_t, compiler::TNode<RawPtrT> p_r, compiler::TNode<Int8T> p_v1, compiler::TNode<Uint8T> p_v2, compiler::TNode<Int16T> p_v3, compiler::TNode<Uint16T> p_v4);
  compiler::TNode<FixedArray> NewInternalClass(compiler::TNode<Smi> p_x);
  void TestInternalClass(compiler::TNode<Context> p_context);
  void TestConstInStructs();
  compiler::TNode<Object> TestNewFixedArrayFromSpread(compiler::TNode<Context> p_context);
  void TestReferences();
  compiler::TNode<Int8T> LoadTestClassWithAllTypesA(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesA(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Int8T> p_v);
  compiler::TNode<Uint8T> LoadTestClassWithAllTypesB(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesB(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Uint8T> p_v);
  compiler::TNode<Uint8T> LoadTestClassWithAllTypesB2(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesB2(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Uint8T> p_v);
  compiler::TNode<Uint8T> LoadTestClassWithAllTypesB3(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesB3(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Uint8T> p_v);
  compiler::TNode<Int16T> LoadTestClassWithAllTypesC(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesC(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Int16T> p_v);
  compiler::TNode<Uint16T> LoadTestClassWithAllTypesD(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesD(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Uint16T> p_v);
  compiler::TNode<Int32T> LoadTestClassWithAllTypesE(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesE(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Int32T> p_v);
  compiler::TNode<Uint32T> LoadTestClassWithAllTypesF(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesF(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<Uint32T> p_v);
  compiler::TNode<RawPtrT> LoadTestClassWithAllTypesG(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesG(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<RawPtrT> p_v);
  compiler::TNode<IntPtrT> LoadTestClassWithAllTypesH(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesH(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<IntPtrT> p_v);
  compiler::TNode<UintPtrT> LoadTestClassWithAllTypesI(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o);
  void StoreTestClassWithAllTypesI(compiler::TNode<TestBuiltinsFromDSLAssembler::TestClassWithAllTypes> p_o, compiler::TNode<UintPtrT> p_v);
  compiler::TNode<Int16T> LoadPreprocessingTestA(compiler::TNode<TestBuiltinsFromDSLAssembler::PreprocessingTest> p_o);
  void StorePreprocessingTestA(compiler::TNode<TestBuiltinsFromDSLAssembler::PreprocessingTest> p_o, compiler::TNode<Int16T> p_v);
  compiler::TNode<Int16T> LoadPreprocessingTestB(compiler::TNode<TestBuiltinsFromDSLAssembler::PreprocessingTest> p_o);
  void StorePreprocessingTestB(compiler::TNode<TestBuiltinsFromDSLAssembler::PreprocessingTest> p_o, compiler::TNode<Int16T> p_v);
  compiler::TNode<Int32T> LoadPreprocessingTestD(compiler::TNode<TestBuiltinsFromDSLAssembler::PreprocessingTest> p_o);
  void StorePreprocessingTestD(compiler::TNode<TestBuiltinsFromDSLAssembler::PreprocessingTest> p_o, compiler::TNode<Int32T> p_v);
  compiler::TNode<Smi> LoadInternalClassA(compiler::TNode<FixedArray> p_o);
  void StoreInternalClassA(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
  compiler::TNode<Number> LoadInternalClassB(compiler::TNode<FixedArray> p_o);
  void StoreInternalClassB(compiler::TNode<FixedArray> p_o, compiler::TNode<Number> p_v);
  void _method_InternalClass_Flip(compiler::TNode<FixedArray> p_this, compiler::CodeAssemblerLabel* label_NotASmi);
  compiler::TNode<Smi> LoadSmiPairA(compiler::TNode<FixedArray> p_o);
  void StoreSmiPairA(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
  compiler::TNode<Smi> LoadSmiPairB(compiler::TNode<FixedArray> p_o);
  void StoreSmiPairB(compiler::TNode<FixedArray> p_o, compiler::TNode<Smi> p_v);
  CodeStubAssembler::Reference _method_SmiPair_GetA(compiler::TNode<FixedArray> p_this);
  compiler::TNode<Object> LoadFooFooField(compiler::TNode<TestBuiltinsFromDSLAssembler::Foo> p_o);
  void StoreFooFooField(compiler::TNode<TestBuiltinsFromDSLAssembler::Foo> p_o, compiler::TNode<Object> p_v);
  compiler::TNode<Object> LoadBarBarField(compiler::TNode<TestBuiltinsFromDSLAssembler::Bar> p_o);
  void StoreBarBarField(compiler::TNode<TestBuiltinsFromDSLAssembler::Bar> p_o, compiler::TNode<Object> p_v);
  compiler::TNode<Object> LoadBarBazfield(compiler::TNode<TestBuiltinsFromDSLAssembler::Bar> p_o);
  void StoreBarBazfield(compiler::TNode<TestBuiltinsFromDSLAssembler::Bar> p_o, compiler::TNode<Object> p_v);
  compiler::TNode<Object> GenericMacroTest5ATSmi(compiler::TNode<Smi> p_param);
  compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi(compiler::TNode<Smi> p_param, compiler::CodeAssemblerLabel* label_X);
  compiler::TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber(compiler::TNode<Object> p_x);
  compiler::TNode<Smi> ExampleGenericOverload5ATSmi(compiler::TNode<Smi> p_o);
  compiler::TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject(compiler::TNode<Object> p_o);
  void Swap5ATSmi(CodeStubAssembler::Reference p_a, CodeStubAssembler::Reference p_b);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;
};

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_TEST_FROM_DSL_BASE_H__
