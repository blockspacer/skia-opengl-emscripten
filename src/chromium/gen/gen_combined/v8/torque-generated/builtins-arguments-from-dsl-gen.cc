#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/module.h"
#include "src/objects/stack-frame-info.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/builtins-base-from-dsl-gen.h"
#include "torque-generated/builtins-arguments-from-dsl-gen.h"
#include "torque-generated/builtins-array-copywithin-from-dsl-gen.h"
#include "torque-generated/builtins-array-from-dsl-gen.h"
#include "torque-generated/builtins-array-filter-from-dsl-gen.h"
#include "torque-generated/builtins-array-find-from-dsl-gen.h"
#include "torque-generated/builtins-array-findindex-from-dsl-gen.h"
#include "torque-generated/builtins-array-foreach-from-dsl-gen.h"
#include "torque-generated/builtins-array-join-from-dsl-gen.h"
#include "torque-generated/builtins-array-lastindexof-from-dsl-gen.h"
#include "torque-generated/builtins-array-map-from-dsl-gen.h"
#include "torque-generated/builtins-array-of-from-dsl-gen.h"
#include "torque-generated/builtins-array-reverse-from-dsl-gen.h"
#include "torque-generated/builtins-array-shift-from-dsl-gen.h"
#include "torque-generated/builtins-array-slice-from-dsl-gen.h"
#include "torque-generated/builtins-array-splice-from-dsl-gen.h"
#include "torque-generated/builtins-array-unshift-from-dsl-gen.h"
#include "torque-generated/builtins-collections-from-dsl-gen.h"
#include "torque-generated/builtins-data-view-from-dsl-gen.h"
#include "torque-generated/builtins-extras-utils-from-dsl-gen.h"
#include "torque-generated/builtins-growable-fixed-array-from-dsl-gen.h"
#include "torque-generated/builtins-internal-coverage-from-dsl-gen.h"
#include "torque-generated/builtins-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-math-from-dsl-gen.h"
#include "torque-generated/builtins-object-from-dsl-gen.h"
#include "torque-generated/builtins-proxy-from-dsl-gen.h"
#include "torque-generated/builtins-regexp-replace-from-dsl-gen.h"
#include "torque-generated/builtins-regexp-from-dsl-gen.h"
#include "torque-generated/builtins-string-from-dsl-gen.h"
#include "torque-generated/builtins-string-html-from-dsl-gen.h"
#include "torque-generated/builtins-string-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-string-repeat-from-dsl-gen.h"
#include "torque-generated/builtins-string-substring-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-createtypedarray-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-every-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-filter-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-find-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-findindex-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-foreach-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-reduce-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-reduceright-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-slice-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-some-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-subarray-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-from-dsl-gen.h"
#include "torque-generated/builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo ArgumentsBuiltinsFromDSLAssembler::GetArgumentsFrameAndCount(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT, RawPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, BInt, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, BInt, BInt> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 36);
    compiler::TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadParentFramePointer());
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 37);
    compiler::TNode<JSFunction> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).LoadFunctionFromFrame(compiler::TNode<RawPtrT>{tmp2}));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp3}, compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSFunction> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert \'frame.function == f\' failed", "../../v8/src/builtins/arguments.tq", 37);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSFunction> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 39);
    compiler::TNode<IntPtrT> tmp11 = ca_.IntPtrConstant(JSFunction::kSharedFunctionInfoOffset);
    USE(tmp11);
    compiler::TNode<SharedFunctionInfo>tmp12 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp9, tmp11});
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 41);
    compiler::TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(SharedFunctionInfo::kFormalParameterCountOffset);
    USE(tmp13);
    compiler::TNode<Uint16T>tmp14 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp12, tmp13});
    compiler::TNode<Int32T> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).Convert7ATint328ATuint16(compiler::TNode<Uint16T>{tmp14}));
    compiler::TNode<BInt> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint7ATint32(compiler::TNode<Int32T>{tmp15}));
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 40);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 42);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 45);
    compiler::TNode<RawPtrT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadCallerFromFrame(compiler::TNode<RawPtrT>{tmp10}));
    compiler::TNode<RawPtrT> tmp18;
    USE(tmp18);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp18 = BaseBuiltinsFromDSLAssembler(state_).Cast23ATArgumentsAdaptorFrame(compiler::TNode<Context>{tmp8}, compiler::TNode<RawPtrT>{tmp17}, &label0);
    ca_.Goto(&block6, tmp8, tmp9, tmp10, tmp12, tmp16, tmp16, tmp17, tmp18);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp8, tmp9, tmp10, tmp12, tmp16, tmp16, tmp17);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSFunction> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<SharedFunctionInfo> tmp22;
    compiler::TNode<BInt> tmp23;
    compiler::TNode<BInt> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block5, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSFunction> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<SharedFunctionInfo> tmp29;
    compiler::TNode<BInt> tmp30;
    compiler::TNode<BInt> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<RawPtrT> tmp33;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<JSFunction> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<SharedFunctionInfo> tmp37;
    compiler::TNode<BInt> tmp38;
    compiler::TNode<BInt> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 47);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 48);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 49);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 46);
    ca_.Goto(&block1, tmp34, tmp35, tmp36, tmp39, tmp38);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSFunction> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<SharedFunctionInfo> tmp43;
    compiler::TNode<BInt> tmp44;
    compiler::TNode<BInt> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    ca_.Bind(&block4, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 44);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 53);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 54);
    compiler::TNode<Smi> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadLengthFromAdapterFrame(compiler::TNode<Context>{tmp40}, compiler::TNode<RawPtrT>{tmp46}));
    compiler::TNode<BInt> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint5ATSmi(compiler::TNode<Smi>{tmp47}));
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 55);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 52);
    ca_.Goto(&block1, tmp40, tmp41, tmp46, tmp48, tmp44);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSFunction> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    compiler::TNode<BInt> tmp52;
    compiler::TNode<BInt> tmp53;
    ca_.Bind(&block1, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../v8/src/builtins/arguments.tq", 34);
    ca_.Goto(&block8, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

    compiler::TNode<Context> tmp54;
    compiler::TNode<JSFunction> tmp55;
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<BInt> tmp57;
    compiler::TNode<BInt> tmp58;
    ca_.Bind(&block8, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
  return ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo{compiler::TNode<RawPtrT>{tmp56}, compiler::TNode<BInt>{tmp57}, compiler::TNode<BInt>{tmp58}};
}

}  // namespace internal
}  // namespace v8

