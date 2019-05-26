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

compiler::TNode<JSArray> ArraySliceBuiltinsFromDSLAssembler::HandleSimpleArgumentsSlice(compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, Smi, FixedArray, Map, JSArray, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 11);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(FixedArray::kMaxRegularLength));
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4}));
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 13);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp12}, compiler::TNode<Smi>{tmp13}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 15);
    compiler::TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp15);
    compiler::TNode<FixedArrayBase>tmp16 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp15});
    compiler::TNode<FixedArray> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp16}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp16);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSArgumentsObjectWithLength> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<FixedArrayBase> tmp23;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<JSArgumentsObjectWithLength> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Smi> tmp28;
    compiler::TNode<FixedArrayBase> tmp29;
    compiler::TNode<FixedArray> tmp30;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 14);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 16);
    compiler::TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp31);
    compiler::TNode<Smi>tmp32 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp30, tmp31});
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp28}, compiler::TNode<Smi>{tmp32}));
    ca_.Branch(tmp33, &block7, &block8, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<JSArgumentsObjectWithLength> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<FixedArray> tmp39;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSArgumentsObjectWithLength> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<FixedArray> tmp45;
    ca_.Bind(&block8, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 18);
    compiler::TNode<Map> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<Context>{tmp40}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 20);
    compiler::TNode<JSArray> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp46}, compiler::TNode<Smi>{tmp43}, compiler::TNode<Smi>{tmp43}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 19);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 22);
    compiler::TNode<IntPtrT> tmp48 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp48);
    compiler::TNode<FixedArrayBase>tmp49 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp47, tmp48});
    compiler::TNode<FixedArray> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp49}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSArgumentsObjectWithLength> tmp52;
    compiler::TNode<Smi> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<FixedArray> tmp56;
    compiler::TNode<Map> tmp57;
    compiler::TNode<JSArray> tmp58;
    compiler::TNode<FixedArrayBase> tmp59;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block1);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<JSArgumentsObjectWithLength> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<Map> tmp66;
    compiler::TNode<JSArray> tmp67;
    compiler::TNode<FixedArrayBase> tmp68;
    compiler::TNode<FixedArray> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 21);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 24);
    compiler::TNode<IntPtrT> tmp70;
    USE(tmp70);
    tmp70 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp62}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 25);
    compiler::TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp63}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 23);
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp69}, compiler::TNode<IntPtrT>{tmp72}, compiler::TNode<FixedArrayBase>{tmp65}, compiler::TNode<IntPtrT>{tmp70}, compiler::TNode<IntPtrT>{tmp71});
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 26);
    ca_.Goto(&block2, tmp60, tmp61, tmp62, tmp63, tmp67);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<JSArgumentsObjectWithLength> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<JSArray> tmp77;
    ca_.Bind(&block2, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 6);
    ca_.Goto(&block11, tmp73, tmp74, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp78;
    compiler::TNode<JSArgumentsObjectWithLength> tmp79;
    compiler::TNode<Smi> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<JSArray> tmp82;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
  return compiler::TNode<JSArray>{tmp82};
}

compiler::TNode<JSArray> ArraySliceBuiltinsFromDSLAssembler::HandleFastAliasedSloppyArgumentsSlice(compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, FixedArrayBase, SloppyArgumentsElements> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, Object, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, SloppyArgumentsElements, Smi, Smi, Smi, FixedArray, Smi, Context, Map, JSArray, Smi, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_args, p_start, p_count);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArgumentsObjectWithLength> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 34);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(FixedArray::kMaxRegularLength));
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp3}, compiler::TNode<Smi>{tmp4}));
    ca_.Branch(tmp5, &block3, &block4, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArgumentsObjectWithLength> tmp7;
    compiler::TNode<Smi> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArgumentsObjectWithLength> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 37);
    compiler::TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp14);
    compiler::TNode<FixedArrayBase>tmp15 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp14});
    compiler::TNode<SloppyArgumentsElements> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast23SloppyArgumentsElements(compiler::TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSArgumentsObjectWithLength> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<FixedArrayBase> tmp21;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSArgumentsObjectWithLength> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<FixedArrayBase> tmp26;
    compiler::TNode<SloppyArgumentsElements> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 36);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 38);
    compiler::TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp28);
    compiler::TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp27, tmp28});
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 40);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(SloppyArgumentsElements::kParameterMapStart));
    compiler::TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp29}, compiler::TNode<Smi>{tmp30}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 39);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 44);
    compiler::TNode<Smi> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 46);
    compiler::TNode<Object> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp27}, SloppyArgumentsElements::kArgumentsIndex));
    compiler::TNode<FixedArray> tmp34;
    USE(tmp34);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp34 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<Context>{tmp22}, compiler::TNode<Object>{tmp33}, &label0);
    ca_.Goto(&block7, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp31, tmp32, tmp33, tmp34);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp22, tmp23, tmp24, tmp25, tmp27, tmp29, tmp31, tmp32, tmp33);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSArgumentsObjectWithLength> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<SloppyArgumentsElements> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Object> tmp43;
    ca_.Bind(&block8, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp44;
    compiler::TNode<JSArgumentsObjectWithLength> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<SloppyArgumentsElements> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<FixedArray> tmp53;
    ca_.Bind(&block7, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 45);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 48);
    compiler::TNode<IntPtrT> tmp54 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp54);
    compiler::TNode<Smi>tmp55 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp53, tmp54});
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 49);
    compiler::TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp51}, compiler::TNode<Smi>{tmp55}));
    ca_.Branch(tmp56, &block9, &block10, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp53, tmp55);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<JSArgumentsObjectWithLength> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<SloppyArgumentsElements> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<FixedArray> tmp65;
    compiler::TNode<Smi> tmp66;
    ca_.Bind(&block9, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<JSArgumentsObjectWithLength> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<SloppyArgumentsElements> tmp71;
    compiler::TNode<Smi> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Smi> tmp74;
    compiler::TNode<FixedArray> tmp75;
    compiler::TNode<Smi> tmp76;
    ca_.Bind(&block10, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 52);
    compiler::TNode<Object> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp71}, SloppyArgumentsElements::kContextIndex));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 51);
    compiler::TNode<Context> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<Context>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast7Context(compiler::TNode<Context>{tmp67}, compiler::TNode<Object>{tmp77}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 54);
    compiler::TNode<Map> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(HOLEY_ELEMENTS, compiler::TNode<Context>{tmp67}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 56);
    compiler::TNode<JSArray> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).AllocateJSArray(HOLEY_ELEMENTS, compiler::TNode<Map>{tmp79}, compiler::TNode<Smi>{tmp70}, compiler::TNode<Smi>{tmp70}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 55);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 58);
    compiler::TNode<Smi> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 59);
    compiler::TNode<IntPtrT> tmp82 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp82);
    compiler::TNode<FixedArrayBase>tmp83 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp80, tmp82});
    compiler::TNode<FixedArray> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<FixedArray>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast10FixedArray(compiler::TNode<Context>{tmp67}, compiler::TNode<Object>{tmp83}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 60);
    compiler::TNode<Smi> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp73}, compiler::TNode<Smi>{tmp74}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 63);
    ca_.Goto(&block13, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp78, tmp79, tmp80, tmp81, tmp84, tmp85, tmp69);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSArgumentsObjectWithLength> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<SloppyArgumentsElements> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Smi> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<FixedArray> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Context> tmp96;
    compiler::TNode<Map> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<FixedArray> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<Smi> tmp102;
    ca_.Bind(&block13, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    compiler::TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp102}, compiler::TNode<Smi>{tmp101}));
    ca_.Branch(tmp103, &block11, &block12, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<JSArgumentsObjectWithLength> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<SloppyArgumentsElements> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<Smi> tmp111;
    compiler::TNode<FixedArray> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<Context> tmp114;
    compiler::TNode<Map> tmp115;
    compiler::TNode<JSArray> tmp116;
    compiler::TNode<Smi> tmp117;
    compiler::TNode<FixedArray> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    ca_.Bind(&block11, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 65);
    compiler::TNode<Smi> tmp121;
    USE(tmp121);
    tmp121 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(SloppyArgumentsElements::kParameterMapStart));
    compiler::TNode<Smi> tmp122;
    USE(tmp122);
    tmp122 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp120}, compiler::TNode<Smi>{tmp121}));
    compiler::TNode<Object> tmp123;
    USE(tmp123);
    tmp123 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp108}, compiler::TNode<Smi>{tmp122}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 64);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 66);
    compiler::TNode<Oddball> tmp124;
    USE(tmp124);
    tmp124 = BaseBuiltinsFromDSLAssembler(state_).Hole();
    compiler::TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp123}, compiler::TNode<HeapObject>{tmp124}));
    ca_.Branch(tmp125, &block15, &block16, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp123);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<JSArgumentsObjectWithLength> tmp127;
    compiler::TNode<Smi> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<SloppyArgumentsElements> tmp130;
    compiler::TNode<Smi> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<FixedArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Context> tmp136;
    compiler::TNode<Map> tmp137;
    compiler::TNode<JSArray> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<FixedArray> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Object> tmp143;
    ca_.Bind(&block15, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 67);
    compiler::TNode<Smi> tmp144;
    USE(tmp144);
    tmp144 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast5ATSmi(compiler::TNode<Context>{tmp126}, compiler::TNode<Object>{tmp143}));
    compiler::TNode<Object> tmp145;
    USE(tmp145);
    tmp145 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp136}, compiler::TNode<Smi>{tmp144}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 66);
    ca_.Goto(&block18, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp146;
    compiler::TNode<JSArgumentsObjectWithLength> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<SloppyArgumentsElements> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<FixedArray> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Context> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<JSArray> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<FixedArray> tmp160;
    compiler::TNode<Smi> tmp161;
    compiler::TNode<Smi> tmp162;
    compiler::TNode<Object> tmp163;
    ca_.Bind(&block16, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 68);
    compiler::TNode<Object> tmp164;
    USE(tmp164);
    tmp164 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp154}, compiler::TNode<Smi>{tmp162}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 66);
    ca_.Goto(&block17, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<JSArgumentsObjectWithLength> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<SloppyArgumentsElements> tmp169;
    compiler::TNode<Smi> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<FixedArray> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Context> tmp175;
    compiler::TNode<Map> tmp176;
    compiler::TNode<JSArray> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<FixedArray> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    ca_.Bind(&block18, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.Goto(&block17, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp184;
    compiler::TNode<JSArgumentsObjectWithLength> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<SloppyArgumentsElements> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<FixedArray> tmp192;
    compiler::TNode<Smi> tmp193;
    compiler::TNode<Context> tmp194;
    compiler::TNode<Map> tmp195;
    compiler::TNode<JSArray> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<FixedArray> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<Object> tmp202;
    ca_.Bind(&block17, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 70);
    compiler::TNode<Smi> tmp203;
    USE(tmp203);
    tmp203 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp204;
    USE(tmp204);
    tmp204 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp197}, compiler::TNode<Smi>{tmp203}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 69);
    CodeStubAssembler(state_).StoreFixedArrayElementSmi(compiler::TNode<FixedArray>{tmp198}, compiler::TNode<Smi>{tmp197}, compiler::TNode<Object>{tmp202}, SKIP_WRITE_BARRIER);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 63);
    ca_.Goto(&block14, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp204, tmp198, tmp199, tmp200);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp205;
    compiler::TNode<JSArgumentsObjectWithLength> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<Smi> tmp208;
    compiler::TNode<SloppyArgumentsElements> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<FixedArray> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Context> tmp215;
    compiler::TNode<Map> tmp216;
    compiler::TNode<JSArray> tmp217;
    compiler::TNode<Smi> tmp218;
    compiler::TNode<FixedArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<Smi> tmp221;
    ca_.Bind(&block14, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    compiler::TNode<Smi> tmp222;
    USE(tmp222);
    tmp222 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp223;
    USE(tmp223);
    tmp223 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp221}, compiler::TNode<Smi>{tmp222}));
    ca_.Goto(&block13, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp223);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp224;
    compiler::TNode<JSArgumentsObjectWithLength> tmp225;
    compiler::TNode<Smi> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<SloppyArgumentsElements> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<FixedArray> tmp232;
    compiler::TNode<Smi> tmp233;
    compiler::TNode<Context> tmp234;
    compiler::TNode<Map> tmp235;
    compiler::TNode<JSArray> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<FixedArray> tmp238;
    compiler::TNode<Smi> tmp239;
    compiler::TNode<Smi> tmp240;
    ca_.Bind(&block12, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 75);
    compiler::TNode<Smi> tmp241;
    USE(tmp241);
    tmp241 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiMax(compiler::TNode<Smi>{tmp230}, compiler::TNode<Smi>{tmp226}));
    compiler::TNode<Smi> tmp242;
    USE(tmp242);
    tmp242 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiMin(compiler::TNode<Smi>{tmp241}, compiler::TNode<Smi>{tmp231}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 76);
    compiler::TNode<Smi> tmp243;
    USE(tmp243);
    tmp243 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp231}, compiler::TNode<Smi>{tmp242}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 78);
    compiler::TNode<IntPtrT> tmp244;
    USE(tmp244);
    tmp244 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp237}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 79);
    compiler::TNode<IntPtrT> tmp245;
    USE(tmp245);
    tmp245 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp242}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 80);
    compiler::TNode<IntPtrT> tmp246;
    USE(tmp246);
    tmp246 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp243}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 77);
    CodeStubAssembler(state_).CopyElements(PACKED_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp238}, compiler::TNode<IntPtrT>{tmp244}, compiler::TNode<FixedArrayBase>{tmp232}, compiler::TNode<IntPtrT>{tmp245}, compiler::TNode<IntPtrT>{tmp246});
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 81);
    ca_.Goto(&block2, tmp224, tmp225, tmp226, tmp227, tmp236);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp247;
    compiler::TNode<JSArgumentsObjectWithLength> tmp248;
    compiler::TNode<Smi> tmp249;
    compiler::TNode<Smi> tmp250;
    compiler::TNode<JSArray> tmp251;
    ca_.Bind(&block2, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 29);
    ca_.Goto(&block19, tmp247, tmp248, tmp249, tmp250, tmp251);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp252;
    compiler::TNode<JSArgumentsObjectWithLength> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Smi> tmp255;
    compiler::TNode<JSArray> tmp256;
    ca_.Bind(&block19, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
  return compiler::TNode<JSArray>{tmp256};
}

compiler::TNode<JSArray> ArraySliceBuiltinsFromDSLAssembler::HandleFastSlice(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Number> p_startNumber, compiler::TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object, JSArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArray> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, Object, JSArgumentsObjectWithLength> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map, Context, JSArgumentsObjectWithLength, Smi, Smi, JSArray> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object, JSArgumentsObjectWithLength, Context, Map> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, Smi, Smi, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Number, JSArray> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_startNumber, p_countNumber);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 88);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 89);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp13}, &label0);
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp15, tmp13);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Number> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Number> tmp22;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 90);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp30}));
    ca_.Branch(tmp31, &block7, &block8, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert \'start >= 0\' failed", "../../v8/src/builtins/array-slice.tq", 90);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    ca_.Bind(&block7, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 92);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 93);
    compiler::TNode<JSArray> tmp44;
    USE(tmp44);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp44 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp38}, compiler::TNode<Object>{tmp39}, &label0);
    ca_.Goto(&block11, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp39, tmp39, tmp44);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp39, tmp39);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Number> tmp47;
    compiler::TNode<Number> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    ca_.Bind(&block12, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block10, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Number> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<Smi> tmp57;
    compiler::TNode<Smi> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSArray> tmp61;
    ca_.Bind(&block11, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 100);
    compiler::TNode<Smi> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp57}, compiler::TNode<Smi>{tmp58}));
    compiler::TNode<Smi> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp61}));
    compiler::TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp62}, compiler::TNode<Smi>{tmp63}));
    ca_.Branch(tmp64, &block13, &block14, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Number> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<JSArray> tmp72;
    ca_.Bind(&block13, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.Goto(&block1);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<Number> tmp75;
    compiler::TNode<Number> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<Smi> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<JSArray> tmp80;
    ca_.Bind(&block14, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 101);
    compiler::TNode<JSArray> tmp81;
    tmp81 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kExtractFastJSArray, tmp73, tmp80, tmp77, tmp78));
    USE(tmp81);
    ca_.Goto(&block2, tmp73, tmp74, tmp75, tmp76, tmp81);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Number> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<Smi> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<Object> tmp88;
    ca_.Bind(&block10, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 103);
    compiler::TNode<JSArgumentsObjectWithLength> tmp89;
    USE(tmp89);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp89 = BaseBuiltinsFromDSLAssembler(state_).Cast27JSArgumentsObjectWithLength(compiler::TNode<Context>{tmp82}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp88)}, &label0);
    ca_.Goto(&block17, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, ca_.UncheckedCast<Object>(tmp88), tmp89);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, ca_.UncheckedCast<Object>(tmp88));
    }
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block18, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block16, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Number> tmp101;
    compiler::TNode<Smi> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<JSArgumentsObjectWithLength> tmp106;
    ca_.Bind(&block17, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 104);
    compiler::TNode<Context> tmp107;
    USE(tmp107);
    tmp107 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp98}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 105);
    compiler::TNode<IntPtrT> tmp108 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp108);
    compiler::TNode<Map>tmp109 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp106, tmp108});
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 106);
    compiler::TNode<BoolT> tmp110;
    USE(tmp110);
    tmp110 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastAliasedArgumentsMap(compiler::TNode<Context>{tmp98}, compiler::TNode<Map>{tmp109}));
    ca_.Branch(tmp110, &block19, &block20, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp106, tmp107, tmp109);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Number> tmp113;
    compiler::TNode<Number> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<Smi> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSArgumentsObjectWithLength> tmp118;
    compiler::TNode<Context> tmp119;
    compiler::TNode<Map> tmp120;
    ca_.Bind(&block19, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 107);
    compiler::TNode<JSArray> tmp121;
    USE(tmp121);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp121 = ArraySliceBuiltinsFromDSLAssembler(state_).HandleFastAliasedSloppyArgumentsSlice(compiler::TNode<Context>{tmp111}, compiler::TNode<JSArgumentsObjectWithLength>{tmp118}, compiler::TNode<Smi>{tmp115}, compiler::TNode<Smi>{tmp116}, &label0);
    ca_.Goto(&block22, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp111, tmp118, tmp115, tmp116, tmp121);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block23, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp111, tmp118, tmp115, tmp116);
    }
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSArgumentsObjectWithLength> tmp129;
    compiler::TNode<Context> tmp130;
    compiler::TNode<Map> tmp131;
    compiler::TNode<Context> tmp132;
    compiler::TNode<JSArgumentsObjectWithLength> tmp133;
    compiler::TNode<Smi> tmp134;
    compiler::TNode<Smi> tmp135;
    ca_.Bind(&block23, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.Goto(&block1);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Number> tmp138;
    compiler::TNode<Number> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<JSArgumentsObjectWithLength> tmp143;
    compiler::TNode<Context> tmp144;
    compiler::TNode<Map> tmp145;
    compiler::TNode<Context> tmp146;
    compiler::TNode<JSArgumentsObjectWithLength> tmp147;
    compiler::TNode<Smi> tmp148;
    compiler::TNode<Smi> tmp149;
    compiler::TNode<JSArray> tmp150;
    ca_.Bind(&block22, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.Goto(&block2, tmp136, tmp137, tmp138, tmp139, tmp150);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<Number> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Smi> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<JSArgumentsObjectWithLength> tmp158;
    compiler::TNode<Context> tmp159;
    compiler::TNode<Map> tmp160;
    ca_.Bind(&block20, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 109);
    compiler::TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsStrictArgumentsMap(compiler::TNode<Context>{tmp151}, compiler::TNode<Map>{tmp160}));
    ca_.Branch(tmp161, &block24, &block26, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<Number> tmp164;
    compiler::TNode<Number> tmp165;
    compiler::TNode<Smi> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<JSArgumentsObjectWithLength> tmp169;
    compiler::TNode<Context> tmp170;
    compiler::TNode<Map> tmp171;
    ca_.Bind(&block26, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    compiler::TNode<BoolT> tmp172;
    USE(tmp172);
    tmp172 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsSloppyArgumentsMap(compiler::TNode<Context>{tmp162}, compiler::TNode<Map>{tmp171}));
    ca_.Branch(tmp172, &block24, &block25, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp173;
    compiler::TNode<Object> tmp174;
    compiler::TNode<Number> tmp175;
    compiler::TNode<Number> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<JSArgumentsObjectWithLength> tmp180;
    compiler::TNode<Context> tmp181;
    compiler::TNode<Map> tmp182;
    ca_.Bind(&block24, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 110);
    compiler::TNode<JSArray> tmp183;
    USE(tmp183);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp183 = ArraySliceBuiltinsFromDSLAssembler(state_).HandleSimpleArgumentsSlice(compiler::TNode<Context>{tmp173}, compiler::TNode<JSArgumentsObjectWithLength>{tmp180}, compiler::TNode<Smi>{tmp177}, compiler::TNode<Smi>{tmp178}, &label0);
    ca_.Goto(&block27, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp173, tmp180, tmp177, tmp178, tmp183);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block28, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp173, tmp180, tmp177, tmp178);
    }
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp184;
    compiler::TNode<Object> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<JSArgumentsObjectWithLength> tmp191;
    compiler::TNode<Context> tmp192;
    compiler::TNode<Map> tmp193;
    compiler::TNode<Context> tmp194;
    compiler::TNode<JSArgumentsObjectWithLength> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    ca_.Bind(&block28, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197);
    ca_.Goto(&block1);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<JSArgumentsObjectWithLength> tmp205;
    compiler::TNode<Context> tmp206;
    compiler::TNode<Map> tmp207;
    compiler::TNode<Context> tmp208;
    compiler::TNode<JSArgumentsObjectWithLength> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<JSArray> tmp212;
    ca_.Bind(&block27, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block2, tmp198, tmp199, tmp200, tmp201, tmp212);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<Smi> tmp218;
    compiler::TNode<Object> tmp219;
    compiler::TNode<JSArgumentsObjectWithLength> tmp220;
    compiler::TNode<Context> tmp221;
    compiler::TNode<Map> tmp222;
    ca_.Bind(&block25, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 106);
    ca_.Goto(&block21, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Number> tmp225;
    compiler::TNode<Number> tmp226;
    compiler::TNode<Smi> tmp227;
    compiler::TNode<Smi> tmp228;
    compiler::TNode<Object> tmp229;
    compiler::TNode<JSArgumentsObjectWithLength> tmp230;
    compiler::TNode<Context> tmp231;
    compiler::TNode<Map> tmp232;
    ca_.Bind(&block21, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 103);
    ca_.Goto(&block15, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp233;
    compiler::TNode<Object> tmp234;
    compiler::TNode<Number> tmp235;
    compiler::TNode<Number> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Object> tmp239;
    ca_.Bind(&block16, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 114);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 103);
    ca_.Goto(&block15, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<Number> tmp243;
    compiler::TNode<Smi> tmp244;
    compiler::TNode<Smi> tmp245;
    compiler::TNode<Object> tmp246;
    ca_.Bind(&block15, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 93);
    ca_.Goto(&block9, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp247;
    compiler::TNode<Object> tmp248;
    compiler::TNode<Number> tmp249;
    compiler::TNode<Number> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<Object> tmp253;
    ca_.Bind(&block9, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 92);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 117);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp254;
    compiler::TNode<Object> tmp255;
    compiler::TNode<Number> tmp256;
    compiler::TNode<Number> tmp257;
    compiler::TNode<JSArray> tmp258;
    ca_.Bind(&block2, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 84);
    ca_.Goto(&block29, tmp254, tmp255, tmp256, tmp257, tmp258);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<Number> tmp261;
    compiler::TNode<Number> tmp262;
    compiler::TNode<JSArray> tmp263;
    ca_.Bind(&block29, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263);
  return compiler::TNode<JSArray>{tmp263};
}

TF_BUILTIN(ArrayPrototypeSlice, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  BaseBuiltinsFromDSLAssembler::Arguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number, Number> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number, Number> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block28(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block32(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number, Number> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number, Number> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block36(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block40(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number, Number> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Number, Number> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block44(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Context, JSReceiver, Number, Number> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, Context, JSReceiver, Number, Number, JSArray> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Number> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Number> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number, Number, Oddball> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, Number, Number, Object, Number, Number, Number, JSReceiver, Number> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 125);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp4}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<IntPtrT> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 126);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 127);
    compiler::TNode<JSArray> tmp12;
    USE(tmp12);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp12 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp7}, compiler::TNode<Object>{tmp8}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp8, tmp8, tmp12);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp8, tmp8);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<IntPtrT> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block4, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSArray> tmp27;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 128);
    compiler::TNode<JSArray> tmp28;
    tmp28 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCloneFastJSArray, tmp20, tmp27));
    USE(tmp28);
    arguments.PopAndReturn(tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<RawPtrT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 130);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 127);
    ca_.Goto(&block3, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<IntPtrT> tmp39;
    compiler::TNode<Object> tmp40;
    ca_.Bind(&block3, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 126);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 125);
    ca_.Goto(&block2, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    ca_.Bind(&block2, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 136);
    compiler::TNode<JSReceiver> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp41}, compiler::TNode<Object>{tmp42}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 139);
    compiler::TNode<Number> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).GetLengthProperty(compiler::TNode<Context>{tmp41}, compiler::TNode<Object>{tmp46}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 142);
    compiler::TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp43}, compiler::TNode<RawPtrT>{tmp44}, compiler::TNode<IntPtrT>{tmp45}}, compiler::TNode<IntPtrT>{tmp48}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 143);
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp41}, compiler::TNode<Object>{tmp49}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 147);
    compiler::TNode<Number> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp50}, compiler::TNode<Number>{tmp51}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50, tmp50);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp49, tmp50, tmp50);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<RawPtrT> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    ca_.Bind(&block11, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.Goto(&block7, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<RawPtrT> tmp64;
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    ca_.Bind(&block12, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block8, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<JSReceiver> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Number> tmp80;
    ca_.Bind(&block7, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Number> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp78}, compiler::TNode<Number>{tmp80}));
    compiler::TNode<Number> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Max(compiler::TNode<Number>{tmp81}, compiler::TNode<Number>{tmp82}));
    ca_.Goto(&block10, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp83);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<IntPtrT> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Number> tmp92;
    ca_.Bind(&block8, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 148);
    compiler::TNode<Number> tmp93;
    USE(tmp93);
    tmp93 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Min(compiler::TNode<Number>{tmp92}, compiler::TNode<Number>{tmp90}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 147);
    ca_.Goto(&block9, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<RawPtrT> tmp96;
    compiler::TNode<RawPtrT> tmp97;
    compiler::TNode<IntPtrT> tmp98;
    compiler::TNode<JSReceiver> tmp99;
    compiler::TNode<Number> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Number> tmp102;
    compiler::TNode<Number> tmp103;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.Goto(&block9, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<RawPtrT> tmp106;
    compiler::TNode<RawPtrT> tmp107;
    compiler::TNode<IntPtrT> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    compiler::TNode<Number> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<Number> tmp113;
    ca_.Bind(&block9, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 152);
    compiler::TNode<IntPtrT> tmp114;
    USE(tmp114);
    tmp114 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp115;
    USE(tmp115);
    tmp115 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp106}, compiler::TNode<RawPtrT>{tmp107}, compiler::TNode<IntPtrT>{tmp108}}, compiler::TNode<IntPtrT>{tmp114}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 154);
    compiler::TNode<Oddball> tmp116;
    USE(tmp116);
    tmp116 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp117;
    USE(tmp117);
    tmp117 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp115}, compiler::TNode<HeapObject>{tmp116}));
    ca_.Branch(tmp117, &block13, &block14, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp115);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<RawPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Number> tmp126;
    compiler::TNode<Number> tmp127;
    compiler::TNode<Object> tmp128;
    ca_.Bind(&block13, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.Goto(&block16, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp124);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<JSReceiver> tmp134;
    compiler::TNode<Number> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Number> tmp137;
    compiler::TNode<Number> tmp138;
    compiler::TNode<Object> tmp139;
    ca_.Bind(&block14, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139);
    compiler::TNode<Number> tmp140;
    USE(tmp140);
    tmp140 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp129}, compiler::TNode<Object>{tmp139}));
    ca_.Goto(&block15, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<RawPtrT> tmp143;
    compiler::TNode<RawPtrT> tmp144;
    compiler::TNode<IntPtrT> tmp145;
    compiler::TNode<JSReceiver> tmp146;
    compiler::TNode<Number> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<Number> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Number> tmp152;
    ca_.Bind(&block16, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.Goto(&block15, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<RawPtrT> tmp155;
    compiler::TNode<RawPtrT> tmp156;
    compiler::TNode<IntPtrT> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Number> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Number> tmp161;
    compiler::TNode<Number> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<Number> tmp164;
    ca_.Bind(&block15, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 153);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 159);
    compiler::TNode<Number> tmp165;
    USE(tmp165);
    tmp165 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp164}, compiler::TNode<Number>{tmp165}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp164);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block22, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp164);
    }
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<RawPtrT> tmp168;
    compiler::TNode<RawPtrT> tmp169;
    compiler::TNode<IntPtrT> tmp170;
    compiler::TNode<JSReceiver> tmp171;
    compiler::TNode<Number> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<Number> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Number> tmp177;
    compiler::TNode<Number> tmp178;
    ca_.Bind(&block21, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178);
    ca_.Goto(&block17, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<RawPtrT> tmp181;
    compiler::TNode<RawPtrT> tmp182;
    compiler::TNode<IntPtrT> tmp183;
    compiler::TNode<JSReceiver> tmp184;
    compiler::TNode<Number> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<Number> tmp187;
    compiler::TNode<Number> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Number> tmp190;
    compiler::TNode<Number> tmp191;
    ca_.Bind(&block22, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.Goto(&block18, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<RawPtrT> tmp194;
    compiler::TNode<RawPtrT> tmp195;
    compiler::TNode<IntPtrT> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<Number> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Number> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<Number> tmp203;
    ca_.Bind(&block17, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    compiler::TNode<Number> tmp204;
    USE(tmp204);
    tmp204 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp198}, compiler::TNode<Number>{tmp203}));
    compiler::TNode<Number> tmp205;
    USE(tmp205);
    tmp205 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::TNode<Number> tmp206;
    USE(tmp206);
    tmp206 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Max(compiler::TNode<Number>{tmp204}, compiler::TNode<Number>{tmp205}));
    ca_.Goto(&block20, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp206);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<RawPtrT> tmp209;
    compiler::TNode<RawPtrT> tmp210;
    compiler::TNode<IntPtrT> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Number> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<Number> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Number> tmp218;
    ca_.Bind(&block18, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    compiler::TNode<Number> tmp219;
    USE(tmp219);
    tmp219 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Min(compiler::TNode<Number>{tmp218}, compiler::TNode<Number>{tmp213}));
    ca_.Goto(&block19, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp220;
    compiler::TNode<Object> tmp221;
    compiler::TNode<RawPtrT> tmp222;
    compiler::TNode<RawPtrT> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<JSReceiver> tmp225;
    compiler::TNode<Number> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Number> tmp228;
    compiler::TNode<Number> tmp229;
    compiler::TNode<Object> tmp230;
    compiler::TNode<Number> tmp231;
    compiler::TNode<Number> tmp232;
    ca_.Bind(&block20, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.Goto(&block19, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp233;
    compiler::TNode<Object> tmp234;
    compiler::TNode<RawPtrT> tmp235;
    compiler::TNode<RawPtrT> tmp236;
    compiler::TNode<IntPtrT> tmp237;
    compiler::TNode<JSReceiver> tmp238;
    compiler::TNode<Number> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<Number> tmp244;
    compiler::TNode<Number> tmp245;
    ca_.Bind(&block19, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 158);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 162);
    compiler::TNode<Number> tmp246;
    USE(tmp246);
    tmp246 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp245}, compiler::TNode<Number>{tmp242}));
    compiler::TNode<Number> tmp247;
    USE(tmp247);
    tmp247 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::TNode<Number> tmp248;
    USE(tmp248);
    tmp248 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Max(compiler::TNode<Number>{tmp246}, compiler::TNode<Number>{tmp247}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 164);
    compiler::TNode<Number> tmp249;
    USE(tmp249);
    tmp249 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp249}, compiler::TNode<Number>{tmp242}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp248, tmp242);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block26, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp248, tmp242);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp250;
    compiler::TNode<Object> tmp251;
    compiler::TNode<RawPtrT> tmp252;
    compiler::TNode<RawPtrT> tmp253;
    compiler::TNode<IntPtrT> tmp254;
    compiler::TNode<JSReceiver> tmp255;
    compiler::TNode<Number> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<Number> tmp258;
    compiler::TNode<Number> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<Number> tmp261;
    compiler::TNode<Number> tmp262;
    compiler::TNode<Number> tmp263;
    compiler::TNode<Number> tmp264;
    ca_.Bind(&block25, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264);
    ca_.Goto(&block23, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp265;
    compiler::TNode<Object> tmp266;
    compiler::TNode<RawPtrT> tmp267;
    compiler::TNode<RawPtrT> tmp268;
    compiler::TNode<IntPtrT> tmp269;
    compiler::TNode<JSReceiver> tmp270;
    compiler::TNode<Number> tmp271;
    compiler::TNode<Object> tmp272;
    compiler::TNode<Number> tmp273;
    compiler::TNode<Number> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Number> tmp276;
    compiler::TNode<Number> tmp277;
    compiler::TNode<Number> tmp278;
    compiler::TNode<Number> tmp279;
    ca_.Bind(&block26, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279);
    ca_.Goto(&block24, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<RawPtrT> tmp282;
    compiler::TNode<RawPtrT> tmp283;
    compiler::TNode<IntPtrT> tmp284;
    compiler::TNode<JSReceiver> tmp285;
    compiler::TNode<Number> tmp286;
    compiler::TNode<Object> tmp287;
    compiler::TNode<Number> tmp288;
    compiler::TNode<Number> tmp289;
    compiler::TNode<Object> tmp290;
    compiler::TNode<Number> tmp291;
    compiler::TNode<Number> tmp292;
    compiler::TNode<Number> tmp293;
    ca_.Bind(&block24, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    CodeStubAssembler(state_).FailAssert("Torque assert \'0 <= k\' failed", "../../v8/src/builtins/array-slice.tq", 164);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp294;
    compiler::TNode<Object> tmp295;
    compiler::TNode<RawPtrT> tmp296;
    compiler::TNode<RawPtrT> tmp297;
    compiler::TNode<IntPtrT> tmp298;
    compiler::TNode<JSReceiver> tmp299;
    compiler::TNode<Number> tmp300;
    compiler::TNode<Object> tmp301;
    compiler::TNode<Number> tmp302;
    compiler::TNode<Number> tmp303;
    compiler::TNode<Object> tmp304;
    compiler::TNode<Number> tmp305;
    compiler::TNode<Number> tmp306;
    compiler::TNode<Number> tmp307;
    ca_.Bind(&block23, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 165);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp303}, compiler::TNode<Number>{tmp300}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block29, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp303, tmp300);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block30, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp303, tmp300);
    }
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp308;
    compiler::TNode<Object> tmp309;
    compiler::TNode<RawPtrT> tmp310;
    compiler::TNode<RawPtrT> tmp311;
    compiler::TNode<IntPtrT> tmp312;
    compiler::TNode<JSReceiver> tmp313;
    compiler::TNode<Number> tmp314;
    compiler::TNode<Object> tmp315;
    compiler::TNode<Number> tmp316;
    compiler::TNode<Number> tmp317;
    compiler::TNode<Object> tmp318;
    compiler::TNode<Number> tmp319;
    compiler::TNode<Number> tmp320;
    compiler::TNode<Number> tmp321;
    compiler::TNode<Number> tmp322;
    compiler::TNode<Number> tmp323;
    ca_.Bind(&block29, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.Goto(&block27, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp324;
    compiler::TNode<Object> tmp325;
    compiler::TNode<RawPtrT> tmp326;
    compiler::TNode<RawPtrT> tmp327;
    compiler::TNode<IntPtrT> tmp328;
    compiler::TNode<JSReceiver> tmp329;
    compiler::TNode<Number> tmp330;
    compiler::TNode<Object> tmp331;
    compiler::TNode<Number> tmp332;
    compiler::TNode<Number> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<Number> tmp335;
    compiler::TNode<Number> tmp336;
    compiler::TNode<Number> tmp337;
    compiler::TNode<Number> tmp338;
    compiler::TNode<Number> tmp339;
    ca_.Bind(&block30, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339);
    ca_.Goto(&block28, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp340;
    compiler::TNode<Object> tmp341;
    compiler::TNode<RawPtrT> tmp342;
    compiler::TNode<RawPtrT> tmp343;
    compiler::TNode<IntPtrT> tmp344;
    compiler::TNode<JSReceiver> tmp345;
    compiler::TNode<Number> tmp346;
    compiler::TNode<Object> tmp347;
    compiler::TNode<Number> tmp348;
    compiler::TNode<Number> tmp349;
    compiler::TNode<Object> tmp350;
    compiler::TNode<Number> tmp351;
    compiler::TNode<Number> tmp352;
    compiler::TNode<Number> tmp353;
    ca_.Bind(&block28, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    CodeStubAssembler(state_).FailAssert("Torque assert \'k <= len\' failed", "../../v8/src/builtins/array-slice.tq", 165);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp354;
    compiler::TNode<Object> tmp355;
    compiler::TNode<RawPtrT> tmp356;
    compiler::TNode<RawPtrT> tmp357;
    compiler::TNode<IntPtrT> tmp358;
    compiler::TNode<JSReceiver> tmp359;
    compiler::TNode<Number> tmp360;
    compiler::TNode<Object> tmp361;
    compiler::TNode<Number> tmp362;
    compiler::TNode<Number> tmp363;
    compiler::TNode<Object> tmp364;
    compiler::TNode<Number> tmp365;
    compiler::TNode<Number> tmp366;
    compiler::TNode<Number> tmp367;
    ca_.Bind(&block27, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 166);
    compiler::TNode<Number> tmp368;
    USE(tmp368);
    tmp368 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp368}, compiler::TNode<Number>{tmp366}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block33, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp366);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block34, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp366);
    }
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp369;
    compiler::TNode<Object> tmp370;
    compiler::TNode<RawPtrT> tmp371;
    compiler::TNode<RawPtrT> tmp372;
    compiler::TNode<IntPtrT> tmp373;
    compiler::TNode<JSReceiver> tmp374;
    compiler::TNode<Number> tmp375;
    compiler::TNode<Object> tmp376;
    compiler::TNode<Number> tmp377;
    compiler::TNode<Number> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<Number> tmp380;
    compiler::TNode<Number> tmp381;
    compiler::TNode<Number> tmp382;
    compiler::TNode<Number> tmp383;
    ca_.Bind(&block33, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.Goto(&block31, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp384;
    compiler::TNode<Object> tmp385;
    compiler::TNode<RawPtrT> tmp386;
    compiler::TNode<RawPtrT> tmp387;
    compiler::TNode<IntPtrT> tmp388;
    compiler::TNode<JSReceiver> tmp389;
    compiler::TNode<Number> tmp390;
    compiler::TNode<Object> tmp391;
    compiler::TNode<Number> tmp392;
    compiler::TNode<Number> tmp393;
    compiler::TNode<Object> tmp394;
    compiler::TNode<Number> tmp395;
    compiler::TNode<Number> tmp396;
    compiler::TNode<Number> tmp397;
    compiler::TNode<Number> tmp398;
    ca_.Bind(&block34, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398);
    ca_.Goto(&block32, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp399;
    compiler::TNode<Object> tmp400;
    compiler::TNode<RawPtrT> tmp401;
    compiler::TNode<RawPtrT> tmp402;
    compiler::TNode<IntPtrT> tmp403;
    compiler::TNode<JSReceiver> tmp404;
    compiler::TNode<Number> tmp405;
    compiler::TNode<Object> tmp406;
    compiler::TNode<Number> tmp407;
    compiler::TNode<Number> tmp408;
    compiler::TNode<Object> tmp409;
    compiler::TNode<Number> tmp410;
    compiler::TNode<Number> tmp411;
    compiler::TNode<Number> tmp412;
    ca_.Bind(&block32, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412);
    CodeStubAssembler(state_).FailAssert("Torque assert \'0 <= final\' failed", "../../v8/src/builtins/array-slice.tq", 166);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp413;
    compiler::TNode<Object> tmp414;
    compiler::TNode<RawPtrT> tmp415;
    compiler::TNode<RawPtrT> tmp416;
    compiler::TNode<IntPtrT> tmp417;
    compiler::TNode<JSReceiver> tmp418;
    compiler::TNode<Number> tmp419;
    compiler::TNode<Object> tmp420;
    compiler::TNode<Number> tmp421;
    compiler::TNode<Number> tmp422;
    compiler::TNode<Object> tmp423;
    compiler::TNode<Number> tmp424;
    compiler::TNode<Number> tmp425;
    compiler::TNode<Number> tmp426;
    ca_.Bind(&block31, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 167);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp425}, compiler::TNode<Number>{tmp419}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block37, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp425, tmp419);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block38, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp425, tmp419);
    }
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<RawPtrT> tmp429;
    compiler::TNode<RawPtrT> tmp430;
    compiler::TNode<IntPtrT> tmp431;
    compiler::TNode<JSReceiver> tmp432;
    compiler::TNode<Number> tmp433;
    compiler::TNode<Object> tmp434;
    compiler::TNode<Number> tmp435;
    compiler::TNode<Number> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<Number> tmp438;
    compiler::TNode<Number> tmp439;
    compiler::TNode<Number> tmp440;
    compiler::TNode<Number> tmp441;
    compiler::TNode<Number> tmp442;
    ca_.Bind(&block37, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442);
    ca_.Goto(&block35, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp443;
    compiler::TNode<Object> tmp444;
    compiler::TNode<RawPtrT> tmp445;
    compiler::TNode<RawPtrT> tmp446;
    compiler::TNode<IntPtrT> tmp447;
    compiler::TNode<JSReceiver> tmp448;
    compiler::TNode<Number> tmp449;
    compiler::TNode<Object> tmp450;
    compiler::TNode<Number> tmp451;
    compiler::TNode<Number> tmp452;
    compiler::TNode<Object> tmp453;
    compiler::TNode<Number> tmp454;
    compiler::TNode<Number> tmp455;
    compiler::TNode<Number> tmp456;
    compiler::TNode<Number> tmp457;
    compiler::TNode<Number> tmp458;
    ca_.Bind(&block38, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458);
    ca_.Goto(&block36, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp459;
    compiler::TNode<Object> tmp460;
    compiler::TNode<RawPtrT> tmp461;
    compiler::TNode<RawPtrT> tmp462;
    compiler::TNode<IntPtrT> tmp463;
    compiler::TNode<JSReceiver> tmp464;
    compiler::TNode<Number> tmp465;
    compiler::TNode<Object> tmp466;
    compiler::TNode<Number> tmp467;
    compiler::TNode<Number> tmp468;
    compiler::TNode<Object> tmp469;
    compiler::TNode<Number> tmp470;
    compiler::TNode<Number> tmp471;
    compiler::TNode<Number> tmp472;
    ca_.Bind(&block36, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472);
    CodeStubAssembler(state_).FailAssert("Torque assert \'final <= len\' failed", "../../v8/src/builtins/array-slice.tq", 167);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp473;
    compiler::TNode<Object> tmp474;
    compiler::TNode<RawPtrT> tmp475;
    compiler::TNode<RawPtrT> tmp476;
    compiler::TNode<IntPtrT> tmp477;
    compiler::TNode<JSReceiver> tmp478;
    compiler::TNode<Number> tmp479;
    compiler::TNode<Object> tmp480;
    compiler::TNode<Number> tmp481;
    compiler::TNode<Number> tmp482;
    compiler::TNode<Object> tmp483;
    compiler::TNode<Number> tmp484;
    compiler::TNode<Number> tmp485;
    compiler::TNode<Number> tmp486;
    ca_.Bind(&block35, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 168);
    compiler::TNode<Number> tmp487;
    USE(tmp487);
    tmp487 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp487}, compiler::TNode<Number>{tmp486}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block41, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp486);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block42, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp486);
    }
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp488;
    compiler::TNode<Object> tmp489;
    compiler::TNode<RawPtrT> tmp490;
    compiler::TNode<RawPtrT> tmp491;
    compiler::TNode<IntPtrT> tmp492;
    compiler::TNode<JSReceiver> tmp493;
    compiler::TNode<Number> tmp494;
    compiler::TNode<Object> tmp495;
    compiler::TNode<Number> tmp496;
    compiler::TNode<Number> tmp497;
    compiler::TNode<Object> tmp498;
    compiler::TNode<Number> tmp499;
    compiler::TNode<Number> tmp500;
    compiler::TNode<Number> tmp501;
    compiler::TNode<Number> tmp502;
    ca_.Bind(&block41, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502);
    ca_.Goto(&block39, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp503;
    compiler::TNode<Object> tmp504;
    compiler::TNode<RawPtrT> tmp505;
    compiler::TNode<RawPtrT> tmp506;
    compiler::TNode<IntPtrT> tmp507;
    compiler::TNode<JSReceiver> tmp508;
    compiler::TNode<Number> tmp509;
    compiler::TNode<Object> tmp510;
    compiler::TNode<Number> tmp511;
    compiler::TNode<Number> tmp512;
    compiler::TNode<Object> tmp513;
    compiler::TNode<Number> tmp514;
    compiler::TNode<Number> tmp515;
    compiler::TNode<Number> tmp516;
    compiler::TNode<Number> tmp517;
    ca_.Bind(&block42, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    ca_.Goto(&block40, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp518;
    compiler::TNode<Object> tmp519;
    compiler::TNode<RawPtrT> tmp520;
    compiler::TNode<RawPtrT> tmp521;
    compiler::TNode<IntPtrT> tmp522;
    compiler::TNode<JSReceiver> tmp523;
    compiler::TNode<Number> tmp524;
    compiler::TNode<Object> tmp525;
    compiler::TNode<Number> tmp526;
    compiler::TNode<Number> tmp527;
    compiler::TNode<Object> tmp528;
    compiler::TNode<Number> tmp529;
    compiler::TNode<Number> tmp530;
    compiler::TNode<Number> tmp531;
    ca_.Bind(&block40, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531);
    CodeStubAssembler(state_).FailAssert("Torque assert \'0 <= count\' failed", "../../v8/src/builtins/array-slice.tq", 168);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp532;
    compiler::TNode<Object> tmp533;
    compiler::TNode<RawPtrT> tmp534;
    compiler::TNode<RawPtrT> tmp535;
    compiler::TNode<IntPtrT> tmp536;
    compiler::TNode<JSReceiver> tmp537;
    compiler::TNode<Number> tmp538;
    compiler::TNode<Object> tmp539;
    compiler::TNode<Number> tmp540;
    compiler::TNode<Number> tmp541;
    compiler::TNode<Object> tmp542;
    compiler::TNode<Number> tmp543;
    compiler::TNode<Number> tmp544;
    compiler::TNode<Number> tmp545;
    ca_.Bind(&block39, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 169);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThanOrEqual(compiler::TNode<Number>{tmp545}, compiler::TNode<Number>{tmp538}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block45, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp545, tmp538);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block46, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp545, tmp538);
    }
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp546;
    compiler::TNode<Object> tmp547;
    compiler::TNode<RawPtrT> tmp548;
    compiler::TNode<RawPtrT> tmp549;
    compiler::TNode<IntPtrT> tmp550;
    compiler::TNode<JSReceiver> tmp551;
    compiler::TNode<Number> tmp552;
    compiler::TNode<Object> tmp553;
    compiler::TNode<Number> tmp554;
    compiler::TNode<Number> tmp555;
    compiler::TNode<Object> tmp556;
    compiler::TNode<Number> tmp557;
    compiler::TNode<Number> tmp558;
    compiler::TNode<Number> tmp559;
    compiler::TNode<Number> tmp560;
    compiler::TNode<Number> tmp561;
    ca_.Bind(&block45, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561);
    ca_.Goto(&block43, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp562;
    compiler::TNode<Object> tmp563;
    compiler::TNode<RawPtrT> tmp564;
    compiler::TNode<RawPtrT> tmp565;
    compiler::TNode<IntPtrT> tmp566;
    compiler::TNode<JSReceiver> tmp567;
    compiler::TNode<Number> tmp568;
    compiler::TNode<Object> tmp569;
    compiler::TNode<Number> tmp570;
    compiler::TNode<Number> tmp571;
    compiler::TNode<Object> tmp572;
    compiler::TNode<Number> tmp573;
    compiler::TNode<Number> tmp574;
    compiler::TNode<Number> tmp575;
    compiler::TNode<Number> tmp576;
    compiler::TNode<Number> tmp577;
    ca_.Bind(&block46, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577);
    ca_.Goto(&block44, tmp562, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp578;
    compiler::TNode<Object> tmp579;
    compiler::TNode<RawPtrT> tmp580;
    compiler::TNode<RawPtrT> tmp581;
    compiler::TNode<IntPtrT> tmp582;
    compiler::TNode<JSReceiver> tmp583;
    compiler::TNode<Number> tmp584;
    compiler::TNode<Object> tmp585;
    compiler::TNode<Number> tmp586;
    compiler::TNode<Number> tmp587;
    compiler::TNode<Object> tmp588;
    compiler::TNode<Number> tmp589;
    compiler::TNode<Number> tmp590;
    compiler::TNode<Number> tmp591;
    ca_.Bind(&block44, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591);
    CodeStubAssembler(state_).FailAssert("Torque assert \'count <= len\' failed", "../../v8/src/builtins/array-slice.tq", 169);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp592;
    compiler::TNode<Object> tmp593;
    compiler::TNode<RawPtrT> tmp594;
    compiler::TNode<RawPtrT> tmp595;
    compiler::TNode<IntPtrT> tmp596;
    compiler::TNode<JSReceiver> tmp597;
    compiler::TNode<Number> tmp598;
    compiler::TNode<Object> tmp599;
    compiler::TNode<Number> tmp600;
    compiler::TNode<Number> tmp601;
    compiler::TNode<Object> tmp602;
    compiler::TNode<Number> tmp603;
    compiler::TNode<Number> tmp604;
    compiler::TNode<Number> tmp605;
    ca_.Bind(&block43, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 172);
    compiler::TNode<JSArray> tmp606;
    USE(tmp606);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp606 = ArraySliceBuiltinsFromDSLAssembler(state_).HandleFastSlice(compiler::TNode<Context>{tmp592}, compiler::TNode<Object>{tmp597}, compiler::TNode<Number>{tmp601}, compiler::TNode<Number>{tmp605}, &label0);
    ca_.Goto(&block49, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp592, tmp597, tmp601, tmp605, tmp606);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block50, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp592, tmp597, tmp601, tmp605);
    }
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp607;
    compiler::TNode<Object> tmp608;
    compiler::TNode<RawPtrT> tmp609;
    compiler::TNode<RawPtrT> tmp610;
    compiler::TNode<IntPtrT> tmp611;
    compiler::TNode<JSReceiver> tmp612;
    compiler::TNode<Number> tmp613;
    compiler::TNode<Object> tmp614;
    compiler::TNode<Number> tmp615;
    compiler::TNode<Number> tmp616;
    compiler::TNode<Object> tmp617;
    compiler::TNode<Number> tmp618;
    compiler::TNode<Number> tmp619;
    compiler::TNode<Number> tmp620;
    compiler::TNode<Context> tmp621;
    compiler::TNode<JSReceiver> tmp622;
    compiler::TNode<Number> tmp623;
    compiler::TNode<Number> tmp624;
    ca_.Bind(&block50, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624);
    ca_.Goto(&block48, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620);
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp625;
    compiler::TNode<Object> tmp626;
    compiler::TNode<RawPtrT> tmp627;
    compiler::TNode<RawPtrT> tmp628;
    compiler::TNode<IntPtrT> tmp629;
    compiler::TNode<JSReceiver> tmp630;
    compiler::TNode<Number> tmp631;
    compiler::TNode<Object> tmp632;
    compiler::TNode<Number> tmp633;
    compiler::TNode<Number> tmp634;
    compiler::TNode<Object> tmp635;
    compiler::TNode<Number> tmp636;
    compiler::TNode<Number> tmp637;
    compiler::TNode<Number> tmp638;
    compiler::TNode<Context> tmp639;
    compiler::TNode<JSReceiver> tmp640;
    compiler::TNode<Number> tmp641;
    compiler::TNode<Number> tmp642;
    compiler::TNode<JSArray> tmp643;
    ca_.Bind(&block49, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643);
    arguments.PopAndReturn(tmp643);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp644;
    compiler::TNode<Object> tmp645;
    compiler::TNode<RawPtrT> tmp646;
    compiler::TNode<RawPtrT> tmp647;
    compiler::TNode<IntPtrT> tmp648;
    compiler::TNode<JSReceiver> tmp649;
    compiler::TNode<Number> tmp650;
    compiler::TNode<Object> tmp651;
    compiler::TNode<Number> tmp652;
    compiler::TNode<Number> tmp653;
    compiler::TNode<Object> tmp654;
    compiler::TNode<Number> tmp655;
    compiler::TNode<Number> tmp656;
    compiler::TNode<Number> tmp657;
    ca_.Bind(&block48, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 171);
    ca_.Goto(&block47, tmp644, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp658;
    compiler::TNode<Object> tmp659;
    compiler::TNode<RawPtrT> tmp660;
    compiler::TNode<RawPtrT> tmp661;
    compiler::TNode<IntPtrT> tmp662;
    compiler::TNode<JSReceiver> tmp663;
    compiler::TNode<Number> tmp664;
    compiler::TNode<Object> tmp665;
    compiler::TNode<Number> tmp666;
    compiler::TNode<Number> tmp667;
    compiler::TNode<Object> tmp668;
    compiler::TNode<Number> tmp669;
    compiler::TNode<Number> tmp670;
    compiler::TNode<Number> tmp671;
    ca_.Bind(&block47, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 177);
    compiler::TNode<JSReceiver> tmp672;
    USE(tmp672);
    tmp672 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ArraySpeciesCreate(compiler::TNode<Context>{tmp658}, compiler::TNode<Object>{tmp663}, compiler::TNode<Number>{tmp671}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 180);
    compiler::TNode<Number> tmp673;
    USE(tmp673);
    tmp673 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 183);
    ca_.Goto(&block53, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673);
  }

  if (block53.is_used()) {
    compiler::TNode<Context> tmp674;
    compiler::TNode<Object> tmp675;
    compiler::TNode<RawPtrT> tmp676;
    compiler::TNode<RawPtrT> tmp677;
    compiler::TNode<IntPtrT> tmp678;
    compiler::TNode<JSReceiver> tmp679;
    compiler::TNode<Number> tmp680;
    compiler::TNode<Object> tmp681;
    compiler::TNode<Number> tmp682;
    compiler::TNode<Number> tmp683;
    compiler::TNode<Object> tmp684;
    compiler::TNode<Number> tmp685;
    compiler::TNode<Number> tmp686;
    compiler::TNode<Number> tmp687;
    compiler::TNode<JSReceiver> tmp688;
    compiler::TNode<Number> tmp689;
    ca_.Bind(&block53, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp683}, compiler::TNode<Number>{tmp686}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block54, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp683, tmp686);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block55, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp683, tmp686);
    }
  }

  if (block54.is_used()) {
    compiler::TNode<Context> tmp690;
    compiler::TNode<Object> tmp691;
    compiler::TNode<RawPtrT> tmp692;
    compiler::TNode<RawPtrT> tmp693;
    compiler::TNode<IntPtrT> tmp694;
    compiler::TNode<JSReceiver> tmp695;
    compiler::TNode<Number> tmp696;
    compiler::TNode<Object> tmp697;
    compiler::TNode<Number> tmp698;
    compiler::TNode<Number> tmp699;
    compiler::TNode<Object> tmp700;
    compiler::TNode<Number> tmp701;
    compiler::TNode<Number> tmp702;
    compiler::TNode<Number> tmp703;
    compiler::TNode<JSReceiver> tmp704;
    compiler::TNode<Number> tmp705;
    compiler::TNode<Number> tmp706;
    compiler::TNode<Number> tmp707;
    ca_.Bind(&block54, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707);
    ca_.Goto(&block51, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704, tmp705);
  }

  if (block55.is_used()) {
    compiler::TNode<Context> tmp708;
    compiler::TNode<Object> tmp709;
    compiler::TNode<RawPtrT> tmp710;
    compiler::TNode<RawPtrT> tmp711;
    compiler::TNode<IntPtrT> tmp712;
    compiler::TNode<JSReceiver> tmp713;
    compiler::TNode<Number> tmp714;
    compiler::TNode<Object> tmp715;
    compiler::TNode<Number> tmp716;
    compiler::TNode<Number> tmp717;
    compiler::TNode<Object> tmp718;
    compiler::TNode<Number> tmp719;
    compiler::TNode<Number> tmp720;
    compiler::TNode<Number> tmp721;
    compiler::TNode<JSReceiver> tmp722;
    compiler::TNode<Number> tmp723;
    compiler::TNode<Number> tmp724;
    compiler::TNode<Number> tmp725;
    ca_.Bind(&block55, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725);
    ca_.Goto(&block52, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723);
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp726;
    compiler::TNode<Object> tmp727;
    compiler::TNode<RawPtrT> tmp728;
    compiler::TNode<RawPtrT> tmp729;
    compiler::TNode<IntPtrT> tmp730;
    compiler::TNode<JSReceiver> tmp731;
    compiler::TNode<Number> tmp732;
    compiler::TNode<Object> tmp733;
    compiler::TNode<Number> tmp734;
    compiler::TNode<Number> tmp735;
    compiler::TNode<Object> tmp736;
    compiler::TNode<Number> tmp737;
    compiler::TNode<Number> tmp738;
    compiler::TNode<Number> tmp739;
    compiler::TNode<JSReceiver> tmp740;
    compiler::TNode<Number> tmp741;
    ca_.Bind(&block51, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 185);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 188);
    compiler::TNode<Oddball> tmp742;
    tmp742 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp726, tmp731, tmp735));
    USE(tmp742);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 191);
    compiler::TNode<Oddball> tmp743;
    USE(tmp743);
    tmp743 = BaseBuiltinsFromDSLAssembler(state_).True();
    compiler::TNode<BoolT> tmp744;
    USE(tmp744);
    tmp744 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp742}, compiler::TNode<HeapObject>{tmp743}));
    ca_.Branch(tmp744, &block56, &block57, tmp726, tmp727, tmp728, tmp729, tmp730, tmp731, tmp732, tmp733, tmp734, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp735, tmp742);
  }

  if (block56.is_used()) {
    compiler::TNode<Context> tmp745;
    compiler::TNode<Object> tmp746;
    compiler::TNode<RawPtrT> tmp747;
    compiler::TNode<RawPtrT> tmp748;
    compiler::TNode<IntPtrT> tmp749;
    compiler::TNode<JSReceiver> tmp750;
    compiler::TNode<Number> tmp751;
    compiler::TNode<Object> tmp752;
    compiler::TNode<Number> tmp753;
    compiler::TNode<Number> tmp754;
    compiler::TNode<Object> tmp755;
    compiler::TNode<Number> tmp756;
    compiler::TNode<Number> tmp757;
    compiler::TNode<Number> tmp758;
    compiler::TNode<JSReceiver> tmp759;
    compiler::TNode<Number> tmp760;
    compiler::TNode<Number> tmp761;
    compiler::TNode<Oddball> tmp762;
    ca_.Bind(&block56, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 193);
    compiler::TNode<Object> tmp763;
    USE(tmp763);
    tmp763 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp745}, compiler::TNode<Object>{tmp750}, compiler::TNode<Object>{tmp761}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 196);
    compiler::TNode<Object> tmp764;
    tmp764 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp745, tmp759, tmp760, tmp763);
    USE(tmp764);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 191);
    ca_.Goto(&block57, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759, tmp760, tmp761, tmp762);
  }

  if (block57.is_used()) {
    compiler::TNode<Context> tmp765;
    compiler::TNode<Object> tmp766;
    compiler::TNode<RawPtrT> tmp767;
    compiler::TNode<RawPtrT> tmp768;
    compiler::TNode<IntPtrT> tmp769;
    compiler::TNode<JSReceiver> tmp770;
    compiler::TNode<Number> tmp771;
    compiler::TNode<Object> tmp772;
    compiler::TNode<Number> tmp773;
    compiler::TNode<Number> tmp774;
    compiler::TNode<Object> tmp775;
    compiler::TNode<Number> tmp776;
    compiler::TNode<Number> tmp777;
    compiler::TNode<Number> tmp778;
    compiler::TNode<JSReceiver> tmp779;
    compiler::TNode<Number> tmp780;
    compiler::TNode<Number> tmp781;
    compiler::TNode<Oddball> tmp782;
    ca_.Bind(&block57, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 200);
    compiler::TNode<Number> tmp783;
    USE(tmp783);
    tmp783 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp784;
    USE(tmp784);
    tmp784 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp774}, compiler::TNode<Number>{tmp783}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 203);
    compiler::TNode<Number> tmp785;
    USE(tmp785);
    tmp785 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp786;
    USE(tmp786);
    tmp786 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp780}, compiler::TNode<Number>{tmp785}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 183);
    ca_.Goto(&block53, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771, tmp772, tmp773, tmp784, tmp775, tmp776, tmp777, tmp778, tmp779, tmp786);
  }

  if (block52.is_used()) {
    compiler::TNode<Context> tmp787;
    compiler::TNode<Object> tmp788;
    compiler::TNode<RawPtrT> tmp789;
    compiler::TNode<RawPtrT> tmp790;
    compiler::TNode<IntPtrT> tmp791;
    compiler::TNode<JSReceiver> tmp792;
    compiler::TNode<Number> tmp793;
    compiler::TNode<Object> tmp794;
    compiler::TNode<Number> tmp795;
    compiler::TNode<Number> tmp796;
    compiler::TNode<Object> tmp797;
    compiler::TNode<Number> tmp798;
    compiler::TNode<Number> tmp799;
    compiler::TNode<Number> tmp800;
    compiler::TNode<JSReceiver> tmp801;
    compiler::TNode<Number> tmp802;
    ca_.Bind(&block52, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 207);
    compiler::TNode<String> tmp803;
    USE(tmp803);
    tmp803 = BaseBuiltinsFromDSLAssembler(state_).kLengthString();
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp787, tmp801, tmp803, tmp802);
    ca_.SetSourcePosition("../../v8/src/builtins/array-slice.tq", 210);
    arguments.PopAndReturn(tmp801);
  }
}

}  // namespace internal
}  // namespace v8

