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

compiler::TNode<Object> ArrayShiftBuiltinsFromDSLAssembler::TryFastArrayShift(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, BaseBuiltinsFromDSLAssembler::Arguments p_arguments, compiler::CodeAssemblerLabel* label_Slow) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context, Map, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase, FixedDoubleArray> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedDoubleArray> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase, FixedArray> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_arguments.frame, p_arguments.base, p_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 11);
    compiler::TNode<JSArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp1, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 12);
    compiler::TNode<JSArray> tmp19;
    USE(tmp19);
    compiler::TNode<JSArray> tmp20;
    USE(tmp20);
    compiler::TNode<Map> tmp21;
    USE(tmp21);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    std::tie(tmp19, tmp20, tmp21, tmp22, tmp23, tmp24) = BaseBuiltinsFromDSLAssembler(state_).NewFastJSArrayWitness(compiler::TNode<JSArray>{tmp18}).Flatten();
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 14);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2399);
    compiler::TNode<Int32T> tmp25;
    USE(tmp25);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp25 = CodeStubAssembler(state_).EnsureArrayPushable(compiler::TNode<Map>{tmp21}, &label0);
    ca_.Goto(&block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp12, tmp21, tmp25);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp12, tmp21);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<IntPtrT> tmp30;
    compiler::TNode<JSArray> tmp31;
    compiler::TNode<JSArray> tmp32;
    compiler::TNode<JSArray> tmp33;
    compiler::TNode<Map> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<Context> tmp38;
    compiler::TNode<Map> tmp39;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<RawPtrT> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    compiler::TNode<JSArray> tmp45;
    compiler::TNode<JSArray> tmp46;
    compiler::TNode<JSArray> tmp47;
    compiler::TNode<Map> tmp48;
    compiler::TNode<BoolT> tmp49;
    compiler::TNode<BoolT> tmp50;
    compiler::TNode<BoolT> tmp51;
    compiler::TNode<Context> tmp52;
    compiler::TNode<Map> tmp53;
    compiler::TNode<Int32T> tmp54;
    ca_.Bind(&block6, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2400);
    ArrayBuiltinsFromDSLAssembler(state_).EnsureWriteableFastElements(compiler::TNode<Context>{tmp52}, compiler::TNode<JSArray>{tmp47});
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2401);
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 14);
    ca_.Goto(&block5, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp55, tmp52);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<JSArray> tmp61;
    compiler::TNode<JSArray> tmp62;
    compiler::TNode<JSArray> tmp63;
    compiler::TNode<Map> tmp64;
    compiler::TNode<BoolT> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<BoolT> tmp67;
    compiler::TNode<Context> tmp68;
    ca_.Bind(&block5, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 16);
    compiler::TNode<Smi> tmp69;
    USE(tmp69);
    tmp69 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp61}));
    compiler::TNode<Smi> tmp70;
    USE(tmp70);
    tmp70 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp69}, compiler::TNode<Smi>{tmp70}));
    ca_.Branch(tmp71, &block8, &block9, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<RawPtrT> tmp74;
    compiler::TNode<RawPtrT> tmp75;
    compiler::TNode<IntPtrT> tmp76;
    compiler::TNode<JSArray> tmp77;
    compiler::TNode<JSArray> tmp78;
    compiler::TNode<JSArray> tmp79;
    compiler::TNode<Map> tmp80;
    compiler::TNode<BoolT> tmp81;
    compiler::TNode<BoolT> tmp82;
    compiler::TNode<BoolT> tmp83;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 17);
    compiler::TNode<Oddball> tmp84;
    USE(tmp84);
    tmp84 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block2, tmp72, tmp73, tmp74, tmp75, tmp76, tmp84);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<RawPtrT> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<JSArray> tmp90;
    compiler::TNode<JSArray> tmp91;
    compiler::TNode<JSArray> tmp92;
    compiler::TNode<Map> tmp93;
    compiler::TNode<BoolT> tmp94;
    compiler::TNode<BoolT> tmp95;
    compiler::TNode<BoolT> tmp96;
    ca_.Bind(&block9, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 21);
    compiler::TNode<Smi> tmp97;
    USE(tmp97);
    tmp97 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp90}));
    compiler::TNode<Smi> tmp98;
    USE(tmp98);
    tmp98 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp99;
    USE(tmp99);
    tmp99 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp97}, compiler::TNode<Smi>{tmp98}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 25);
    compiler::TNode<Smi> tmp100;
    USE(tmp100);
    tmp100 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp99}, compiler::TNode<Smi>{tmp99}));
    compiler::TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(JSObject::kMinAddedElementsCapacity));
    compiler::TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp100}, compiler::TNode<Smi>{tmp101}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 26);
    compiler::TNode<IntPtrT> tmp103 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp103);
    compiler::TNode<FixedArrayBase>tmp104 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp90, tmp103});
    compiler::TNode<IntPtrT> tmp105 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp105);
    compiler::TNode<Smi>tmp106 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp104, tmp105});
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 25);
    compiler::TNode<BoolT> tmp107;
    USE(tmp107);
    tmp107 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp102}, compiler::TNode<Smi>{tmp106}));
    ca_.Branch(tmp107, &block12, &block13, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp99);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<RawPtrT> tmp110;
    compiler::TNode<RawPtrT> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<JSArray> tmp113;
    compiler::TNode<JSArray> tmp114;
    compiler::TNode<JSArray> tmp115;
    compiler::TNode<Map> tmp116;
    compiler::TNode<BoolT> tmp117;
    compiler::TNode<BoolT> tmp118;
    compiler::TNode<BoolT> tmp119;
    compiler::TNode<Smi> tmp120;
    ca_.Bind(&block12, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 27);
    ca_.Goto(&block11, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<RawPtrT> tmp123;
    compiler::TNode<RawPtrT> tmp124;
    compiler::TNode<IntPtrT> tmp125;
    compiler::TNode<JSArray> tmp126;
    compiler::TNode<JSArray> tmp127;
    compiler::TNode<JSArray> tmp128;
    compiler::TNode<Map> tmp129;
    compiler::TNode<BoolT> tmp130;
    compiler::TNode<BoolT> tmp131;
    compiler::TNode<BoolT> tmp132;
    compiler::TNode<Smi> tmp133;
    ca_.Bind(&block13, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 32);
    compiler::TNode<Smi> tmp134;
    USE(tmp134);
    tmp134 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(JSArray::kMaxCopyElements));
    compiler::TNode<BoolT> tmp135;
    USE(tmp135);
    tmp135 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp133}, compiler::TNode<Smi>{tmp134}));
    ca_.Branch(tmp135, &block14, &block15, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<RawPtrT> tmp138;
    compiler::TNode<RawPtrT> tmp139;
    compiler::TNode<IntPtrT> tmp140;
    compiler::TNode<JSArray> tmp141;
    compiler::TNode<JSArray> tmp142;
    compiler::TNode<JSArray> tmp143;
    compiler::TNode<Map> tmp144;
    compiler::TNode<BoolT> tmp145;
    compiler::TNode<BoolT> tmp146;
    compiler::TNode<BoolT> tmp147;
    compiler::TNode<Smi> tmp148;
    ca_.Bind(&block14, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block11, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<RawPtrT> tmp151;
    compiler::TNode<RawPtrT> tmp152;
    compiler::TNode<IntPtrT> tmp153;
    compiler::TNode<JSArray> tmp154;
    compiler::TNode<JSArray> tmp155;
    compiler::TNode<JSArray> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<BoolT> tmp158;
    compiler::TNode<BoolT> tmp159;
    compiler::TNode<BoolT> tmp160;
    compiler::TNode<Smi> tmp161;
    ca_.Bind(&block15, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 34);
    compiler::TNode<Smi> tmp162;
    USE(tmp162);
    tmp162 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2391);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2380);
    ca_.Branch(tmp158, &block20, &block21, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp149, tmp162, tmp162, tmp149, tmp162);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<RawPtrT> tmp165;
    compiler::TNode<RawPtrT> tmp166;
    compiler::TNode<IntPtrT> tmp167;
    compiler::TNode<JSArray> tmp168;
    compiler::TNode<JSArray> tmp169;
    compiler::TNode<JSArray> tmp170;
    compiler::TNode<Map> tmp171;
    compiler::TNode<BoolT> tmp172;
    compiler::TNode<BoolT> tmp173;
    compiler::TNode<BoolT> tmp174;
    compiler::TNode<Smi> tmp175;
    compiler::TNode<Context> tmp176;
    compiler::TNode<Smi> tmp177;
    compiler::TNode<Smi> tmp178;
    compiler::TNode<Context> tmp179;
    compiler::TNode<Smi> tmp180;
    ca_.Bind(&block20, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2381);
    compiler::TNode<Object> tmp181;
    USE(tmp181);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp181 = BaseBuiltinsFromDSLAssembler(state_).LoadElementNoHole16FixedDoubleArray(compiler::TNode<Context>{tmp179}, compiler::TNode<JSArray>{tmp170}, compiler::TNode<Smi>{tmp180}, &label0);
    ca_.Goto(&block23, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp170, tmp180, tmp181);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block24, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp170, tmp180);
    }
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<RawPtrT> tmp184;
    compiler::TNode<RawPtrT> tmp185;
    compiler::TNode<IntPtrT> tmp186;
    compiler::TNode<JSArray> tmp187;
    compiler::TNode<JSArray> tmp188;
    compiler::TNode<JSArray> tmp189;
    compiler::TNode<Map> tmp190;
    compiler::TNode<BoolT> tmp191;
    compiler::TNode<BoolT> tmp192;
    compiler::TNode<BoolT> tmp193;
    compiler::TNode<Smi> tmp194;
    compiler::TNode<Context> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<Context> tmp198;
    compiler::TNode<Smi> tmp199;
    compiler::TNode<JSArray> tmp200;
    compiler::TNode<Smi> tmp201;
    ca_.Bind(&block24, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201);
    ca_.Goto(&block18, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<RawPtrT> tmp204;
    compiler::TNode<RawPtrT> tmp205;
    compiler::TNode<IntPtrT> tmp206;
    compiler::TNode<JSArray> tmp207;
    compiler::TNode<JSArray> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<Map> tmp210;
    compiler::TNode<BoolT> tmp211;
    compiler::TNode<BoolT> tmp212;
    compiler::TNode<BoolT> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Context> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<Context> tmp218;
    compiler::TNode<Smi> tmp219;
    compiler::TNode<JSArray> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<Object> tmp222;
    ca_.Bind(&block23, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222);
    ca_.Goto(&block19, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp222);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<RawPtrT> tmp225;
    compiler::TNode<RawPtrT> tmp226;
    compiler::TNode<IntPtrT> tmp227;
    compiler::TNode<JSArray> tmp228;
    compiler::TNode<JSArray> tmp229;
    compiler::TNode<JSArray> tmp230;
    compiler::TNode<Map> tmp231;
    compiler::TNode<BoolT> tmp232;
    compiler::TNode<BoolT> tmp233;
    compiler::TNode<BoolT> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Context> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Smi> tmp238;
    compiler::TNode<Context> tmp239;
    compiler::TNode<Smi> tmp240;
    ca_.Bind(&block21, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2384);
    compiler::TNode<Object> tmp241;
    USE(tmp241);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp241 = BaseBuiltinsFromDSLAssembler(state_).LoadElementNoHole10FixedArray(compiler::TNode<Context>{tmp239}, compiler::TNode<JSArray>{tmp230}, compiler::TNode<Smi>{tmp240}, &label0);
    ca_.Goto(&block25, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp230, tmp240, tmp241);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp230, tmp240);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<RawPtrT> tmp244;
    compiler::TNode<RawPtrT> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    compiler::TNode<JSArray> tmp247;
    compiler::TNode<JSArray> tmp248;
    compiler::TNode<JSArray> tmp249;
    compiler::TNode<Map> tmp250;
    compiler::TNode<BoolT> tmp251;
    compiler::TNode<BoolT> tmp252;
    compiler::TNode<BoolT> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Context> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Context> tmp258;
    compiler::TNode<Smi> tmp259;
    compiler::TNode<JSArray> tmp260;
    compiler::TNode<Smi> tmp261;
    ca_.Bind(&block26, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    ca_.Goto(&block18, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp262;
    compiler::TNode<Object> tmp263;
    compiler::TNode<RawPtrT> tmp264;
    compiler::TNode<RawPtrT> tmp265;
    compiler::TNode<IntPtrT> tmp266;
    compiler::TNode<JSArray> tmp267;
    compiler::TNode<JSArray> tmp268;
    compiler::TNode<JSArray> tmp269;
    compiler::TNode<Map> tmp270;
    compiler::TNode<BoolT> tmp271;
    compiler::TNode<BoolT> tmp272;
    compiler::TNode<BoolT> tmp273;
    compiler::TNode<Smi> tmp274;
    compiler::TNode<Context> tmp275;
    compiler::TNode<Smi> tmp276;
    compiler::TNode<Smi> tmp277;
    compiler::TNode<Context> tmp278;
    compiler::TNode<Smi> tmp279;
    compiler::TNode<JSArray> tmp280;
    compiler::TNode<Smi> tmp281;
    compiler::TNode<Object> tmp282;
    ca_.Bind(&block25, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282);
    ca_.Goto(&block19, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp282);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp283;
    compiler::TNode<Object> tmp284;
    compiler::TNode<RawPtrT> tmp285;
    compiler::TNode<RawPtrT> tmp286;
    compiler::TNode<IntPtrT> tmp287;
    compiler::TNode<JSArray> tmp288;
    compiler::TNode<JSArray> tmp289;
    compiler::TNode<JSArray> tmp290;
    compiler::TNode<Map> tmp291;
    compiler::TNode<BoolT> tmp292;
    compiler::TNode<BoolT> tmp293;
    compiler::TNode<BoolT> tmp294;
    compiler::TNode<Smi> tmp295;
    compiler::TNode<Context> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<Smi> tmp298;
    compiler::TNode<Context> tmp299;
    compiler::TNode<Smi> tmp300;
    compiler::TNode<Object> tmp301;
    ca_.Bind(&block19, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2391);
    ca_.Goto(&block16, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp301);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp302;
    compiler::TNode<Object> tmp303;
    compiler::TNode<RawPtrT> tmp304;
    compiler::TNode<RawPtrT> tmp305;
    compiler::TNode<IntPtrT> tmp306;
    compiler::TNode<JSArray> tmp307;
    compiler::TNode<JSArray> tmp308;
    compiler::TNode<JSArray> tmp309;
    compiler::TNode<Map> tmp310;
    compiler::TNode<BoolT> tmp311;
    compiler::TNode<BoolT> tmp312;
    compiler::TNode<BoolT> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<Context> tmp315;
    compiler::TNode<Smi> tmp316;
    ca_.Bind(&block18, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2394);
    compiler::TNode<Oddball> tmp317;
    USE(tmp317);
    tmp317 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block16, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp318;
    compiler::TNode<Object> tmp319;
    compiler::TNode<RawPtrT> tmp320;
    compiler::TNode<RawPtrT> tmp321;
    compiler::TNode<IntPtrT> tmp322;
    compiler::TNode<JSArray> tmp323;
    compiler::TNode<JSArray> tmp324;
    compiler::TNode<JSArray> tmp325;
    compiler::TNode<Map> tmp326;
    compiler::TNode<BoolT> tmp327;
    compiler::TNode<BoolT> tmp328;
    compiler::TNode<BoolT> tmp329;
    compiler::TNode<Smi> tmp330;
    compiler::TNode<Context> tmp331;
    compiler::TNode<Smi> tmp332;
    compiler::TNode<Object> tmp333;
    ca_.Bind(&block16, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 34);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 35);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2405);
    ca_.Branch(tmp329, &block28, &block29, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp333, tmp330, tmp330);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp334;
    compiler::TNode<Object> tmp335;
    compiler::TNode<RawPtrT> tmp336;
    compiler::TNode<RawPtrT> tmp337;
    compiler::TNode<IntPtrT> tmp338;
    compiler::TNode<JSArray> tmp339;
    compiler::TNode<JSArray> tmp340;
    compiler::TNode<JSArray> tmp341;
    compiler::TNode<Map> tmp342;
    compiler::TNode<BoolT> tmp343;
    compiler::TNode<BoolT> tmp344;
    compiler::TNode<BoolT> tmp345;
    compiler::TNode<Smi> tmp346;
    compiler::TNode<Object> tmp347;
    compiler::TNode<Smi> tmp348;
    compiler::TNode<Smi> tmp349;
    ca_.Bind(&block29, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349);
    CodeStubAssembler(state_).FailAssert("Torque assert \'this.arrayIsPushable\' failed", "../../v8/src/builtins/base.tq", 2405);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp350;
    compiler::TNode<Object> tmp351;
    compiler::TNode<RawPtrT> tmp352;
    compiler::TNode<RawPtrT> tmp353;
    compiler::TNode<IntPtrT> tmp354;
    compiler::TNode<JSArray> tmp355;
    compiler::TNode<JSArray> tmp356;
    compiler::TNode<JSArray> tmp357;
    compiler::TNode<Map> tmp358;
    compiler::TNode<BoolT> tmp359;
    compiler::TNode<BoolT> tmp360;
    compiler::TNode<BoolT> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<Object> tmp363;
    compiler::TNode<Smi> tmp364;
    compiler::TNode<Smi> tmp365;
    ca_.Bind(&block28, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2406);
    BaseBuiltinsFromDSLAssembler(state_).StoreFastJSArrayLength(compiler::TNode<JSArray>{tmp357}, compiler::TNode<Smi>{tmp365});
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 35);
    ca_.Goto(&block27, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp366;
    compiler::TNode<Object> tmp367;
    compiler::TNode<RawPtrT> tmp368;
    compiler::TNode<RawPtrT> tmp369;
    compiler::TNode<IntPtrT> tmp370;
    compiler::TNode<JSArray> tmp371;
    compiler::TNode<JSArray> tmp372;
    compiler::TNode<JSArray> tmp373;
    compiler::TNode<Map> tmp374;
    compiler::TNode<BoolT> tmp375;
    compiler::TNode<BoolT> tmp376;
    compiler::TNode<BoolT> tmp377;
    compiler::TNode<Smi> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<Smi> tmp380;
    compiler::TNode<Smi> tmp381;
    ca_.Bind(&block27, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 36);
    compiler::TNode<IntPtrT> tmp382;
    USE(tmp382);
    tmp382 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp378}));
    compiler::TNode<IntPtrT> tmp383;
    USE(tmp383);
    tmp383 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<IntPtrT> tmp384;
    USE(tmp384);
    tmp384 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2427);
    ca_.Branch(tmp377, &block31, &block32, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp382, tmp383, tmp384, tmp382);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp385;
    compiler::TNode<Object> tmp386;
    compiler::TNode<RawPtrT> tmp387;
    compiler::TNode<RawPtrT> tmp388;
    compiler::TNode<IntPtrT> tmp389;
    compiler::TNode<JSArray> tmp390;
    compiler::TNode<JSArray> tmp391;
    compiler::TNode<JSArray> tmp392;
    compiler::TNode<Map> tmp393;
    compiler::TNode<BoolT> tmp394;
    compiler::TNode<BoolT> tmp395;
    compiler::TNode<BoolT> tmp396;
    compiler::TNode<Smi> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<IntPtrT> tmp399;
    compiler::TNode<IntPtrT> tmp400;
    compiler::TNode<IntPtrT> tmp401;
    compiler::TNode<IntPtrT> tmp402;
    ca_.Bind(&block32, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402);
    CodeStubAssembler(state_).FailAssert("Torque assert \'this.arrayIsPushable\' failed", "../../v8/src/builtins/base.tq", 2427);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp403;
    compiler::TNode<Object> tmp404;
    compiler::TNode<RawPtrT> tmp405;
    compiler::TNode<RawPtrT> tmp406;
    compiler::TNode<IntPtrT> tmp407;
    compiler::TNode<JSArray> tmp408;
    compiler::TNode<JSArray> tmp409;
    compiler::TNode<JSArray> tmp410;
    compiler::TNode<Map> tmp411;
    compiler::TNode<BoolT> tmp412;
    compiler::TNode<BoolT> tmp413;
    compiler::TNode<BoolT> tmp414;
    compiler::TNode<Smi> tmp415;
    compiler::TNode<Object> tmp416;
    compiler::TNode<IntPtrT> tmp417;
    compiler::TNode<IntPtrT> tmp418;
    compiler::TNode<IntPtrT> tmp419;
    compiler::TNode<IntPtrT> tmp420;
    ca_.Bind(&block31, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2428);
    ca_.Branch(tmp412, &block33, &block34, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp421;
    compiler::TNode<Object> tmp422;
    compiler::TNode<RawPtrT> tmp423;
    compiler::TNode<RawPtrT> tmp424;
    compiler::TNode<IntPtrT> tmp425;
    compiler::TNode<JSArray> tmp426;
    compiler::TNode<JSArray> tmp427;
    compiler::TNode<JSArray> tmp428;
    compiler::TNode<Map> tmp429;
    compiler::TNode<BoolT> tmp430;
    compiler::TNode<BoolT> tmp431;
    compiler::TNode<BoolT> tmp432;
    compiler::TNode<Smi> tmp433;
    compiler::TNode<Object> tmp434;
    compiler::TNode<IntPtrT> tmp435;
    compiler::TNode<IntPtrT> tmp436;
    compiler::TNode<IntPtrT> tmp437;
    compiler::TNode<IntPtrT> tmp438;
    ca_.Bind(&block33, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2430);
    compiler::TNode<IntPtrT> tmp439 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp439);
    compiler::TNode<FixedArrayBase>tmp440 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp428, tmp439});
    compiler::TNode<FixedDoubleArray> tmp441;
    USE(tmp441);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp441 = BaseBuiltinsFromDSLAssembler(state_).Cast16FixedDoubleArray(compiler::TNode<HeapObject>{tmp440}, &label0);
    ca_.Goto(&block38, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp440, tmp441);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block39, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp440);
    }
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp442;
    compiler::TNode<Object> tmp443;
    compiler::TNode<RawPtrT> tmp444;
    compiler::TNode<RawPtrT> tmp445;
    compiler::TNode<IntPtrT> tmp446;
    compiler::TNode<JSArray> tmp447;
    compiler::TNode<JSArray> tmp448;
    compiler::TNode<JSArray> tmp449;
    compiler::TNode<Map> tmp450;
    compiler::TNode<BoolT> tmp451;
    compiler::TNode<BoolT> tmp452;
    compiler::TNode<BoolT> tmp453;
    compiler::TNode<Smi> tmp454;
    compiler::TNode<Object> tmp455;
    compiler::TNode<IntPtrT> tmp456;
    compiler::TNode<IntPtrT> tmp457;
    compiler::TNode<IntPtrT> tmp458;
    compiler::TNode<IntPtrT> tmp459;
    compiler::TNode<FixedArrayBase> tmp460;
    ca_.Bind(&block39, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460);
    ca_.Goto(&block37, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp461;
    compiler::TNode<Object> tmp462;
    compiler::TNode<RawPtrT> tmp463;
    compiler::TNode<RawPtrT> tmp464;
    compiler::TNode<IntPtrT> tmp465;
    compiler::TNode<JSArray> tmp466;
    compiler::TNode<JSArray> tmp467;
    compiler::TNode<JSArray> tmp468;
    compiler::TNode<Map> tmp469;
    compiler::TNode<BoolT> tmp470;
    compiler::TNode<BoolT> tmp471;
    compiler::TNode<BoolT> tmp472;
    compiler::TNode<Smi> tmp473;
    compiler::TNode<Object> tmp474;
    compiler::TNode<IntPtrT> tmp475;
    compiler::TNode<IntPtrT> tmp476;
    compiler::TNode<IntPtrT> tmp477;
    compiler::TNode<IntPtrT> tmp478;
    compiler::TNode<FixedArrayBase> tmp479;
    compiler::TNode<FixedDoubleArray> tmp480;
    ca_.Bind(&block38, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480);
    ca_.Goto(&block36, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp480);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp481;
    compiler::TNode<Object> tmp482;
    compiler::TNode<RawPtrT> tmp483;
    compiler::TNode<RawPtrT> tmp484;
    compiler::TNode<IntPtrT> tmp485;
    compiler::TNode<JSArray> tmp486;
    compiler::TNode<JSArray> tmp487;
    compiler::TNode<JSArray> tmp488;
    compiler::TNode<Map> tmp489;
    compiler::TNode<BoolT> tmp490;
    compiler::TNode<BoolT> tmp491;
    compiler::TNode<BoolT> tmp492;
    compiler::TNode<Smi> tmp493;
    compiler::TNode<Object> tmp494;
    compiler::TNode<IntPtrT> tmp495;
    compiler::TNode<IntPtrT> tmp496;
    compiler::TNode<IntPtrT> tmp497;
    compiler::TNode<IntPtrT> tmp498;
    ca_.Bind(&block37, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2431);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/base.tq:2431:21");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp499;
    compiler::TNode<Object> tmp500;
    compiler::TNode<RawPtrT> tmp501;
    compiler::TNode<RawPtrT> tmp502;
    compiler::TNode<IntPtrT> tmp503;
    compiler::TNode<JSArray> tmp504;
    compiler::TNode<JSArray> tmp505;
    compiler::TNode<JSArray> tmp506;
    compiler::TNode<Map> tmp507;
    compiler::TNode<BoolT> tmp508;
    compiler::TNode<BoolT> tmp509;
    compiler::TNode<BoolT> tmp510;
    compiler::TNode<Smi> tmp511;
    compiler::TNode<Object> tmp512;
    compiler::TNode<IntPtrT> tmp513;
    compiler::TNode<IntPtrT> tmp514;
    compiler::TNode<IntPtrT> tmp515;
    compiler::TNode<IntPtrT> tmp516;
    compiler::TNode<FixedDoubleArray> tmp517;
    ca_.Bind(&block36, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2429);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2432);
    BaseBuiltinsFromDSLAssembler(state_).TorqueMoveElements(compiler::TNode<FixedDoubleArray>{tmp517}, compiler::TNode<IntPtrT>{tmp514}, compiler::TNode<IntPtrT>{tmp515}, compiler::TNode<IntPtrT>{tmp516});
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2428);
    ca_.Goto(&block35, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp518;
    compiler::TNode<Object> tmp519;
    compiler::TNode<RawPtrT> tmp520;
    compiler::TNode<RawPtrT> tmp521;
    compiler::TNode<IntPtrT> tmp522;
    compiler::TNode<JSArray> tmp523;
    compiler::TNode<JSArray> tmp524;
    compiler::TNode<JSArray> tmp525;
    compiler::TNode<Map> tmp526;
    compiler::TNode<BoolT> tmp527;
    compiler::TNode<BoolT> tmp528;
    compiler::TNode<BoolT> tmp529;
    compiler::TNode<Smi> tmp530;
    compiler::TNode<Object> tmp531;
    compiler::TNode<IntPtrT> tmp532;
    compiler::TNode<IntPtrT> tmp533;
    compiler::TNode<IntPtrT> tmp534;
    compiler::TNode<IntPtrT> tmp535;
    ca_.Bind(&block34, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2434);
    compiler::TNode<IntPtrT> tmp536 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp536);
    compiler::TNode<FixedArrayBase>tmp537 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp525, tmp536});
    compiler::TNode<FixedArray> tmp538;
    USE(tmp538);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp538 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp537}, &label0);
    ca_.Goto(&block42, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp537, tmp538);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block43, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp537);
    }
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp539;
    compiler::TNode<Object> tmp540;
    compiler::TNode<RawPtrT> tmp541;
    compiler::TNode<RawPtrT> tmp542;
    compiler::TNode<IntPtrT> tmp543;
    compiler::TNode<JSArray> tmp544;
    compiler::TNode<JSArray> tmp545;
    compiler::TNode<JSArray> tmp546;
    compiler::TNode<Map> tmp547;
    compiler::TNode<BoolT> tmp548;
    compiler::TNode<BoolT> tmp549;
    compiler::TNode<BoolT> tmp550;
    compiler::TNode<Smi> tmp551;
    compiler::TNode<Object> tmp552;
    compiler::TNode<IntPtrT> tmp553;
    compiler::TNode<IntPtrT> tmp554;
    compiler::TNode<IntPtrT> tmp555;
    compiler::TNode<IntPtrT> tmp556;
    compiler::TNode<FixedArrayBase> tmp557;
    ca_.Bind(&block43, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557);
    ca_.Goto(&block41, tmp539, tmp540, tmp541, tmp542, tmp543, tmp544, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp558;
    compiler::TNode<Object> tmp559;
    compiler::TNode<RawPtrT> tmp560;
    compiler::TNode<RawPtrT> tmp561;
    compiler::TNode<IntPtrT> tmp562;
    compiler::TNode<JSArray> tmp563;
    compiler::TNode<JSArray> tmp564;
    compiler::TNode<JSArray> tmp565;
    compiler::TNode<Map> tmp566;
    compiler::TNode<BoolT> tmp567;
    compiler::TNode<BoolT> tmp568;
    compiler::TNode<BoolT> tmp569;
    compiler::TNode<Smi> tmp570;
    compiler::TNode<Object> tmp571;
    compiler::TNode<IntPtrT> tmp572;
    compiler::TNode<IntPtrT> tmp573;
    compiler::TNode<IntPtrT> tmp574;
    compiler::TNode<IntPtrT> tmp575;
    compiler::TNode<FixedArrayBase> tmp576;
    compiler::TNode<FixedArray> tmp577;
    ca_.Bind(&block42, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577);
    ca_.Goto(&block40, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp577);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp578;
    compiler::TNode<Object> tmp579;
    compiler::TNode<RawPtrT> tmp580;
    compiler::TNode<RawPtrT> tmp581;
    compiler::TNode<IntPtrT> tmp582;
    compiler::TNode<JSArray> tmp583;
    compiler::TNode<JSArray> tmp584;
    compiler::TNode<JSArray> tmp585;
    compiler::TNode<Map> tmp586;
    compiler::TNode<BoolT> tmp587;
    compiler::TNode<BoolT> tmp588;
    compiler::TNode<BoolT> tmp589;
    compiler::TNode<Smi> tmp590;
    compiler::TNode<Object> tmp591;
    compiler::TNode<IntPtrT> tmp592;
    compiler::TNode<IntPtrT> tmp593;
    compiler::TNode<IntPtrT> tmp594;
    compiler::TNode<IntPtrT> tmp595;
    ca_.Bind(&block41, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2435);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/base.tq:2435:21");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp596;
    compiler::TNode<Object> tmp597;
    compiler::TNode<RawPtrT> tmp598;
    compiler::TNode<RawPtrT> tmp599;
    compiler::TNode<IntPtrT> tmp600;
    compiler::TNode<JSArray> tmp601;
    compiler::TNode<JSArray> tmp602;
    compiler::TNode<JSArray> tmp603;
    compiler::TNode<Map> tmp604;
    compiler::TNode<BoolT> tmp605;
    compiler::TNode<BoolT> tmp606;
    compiler::TNode<BoolT> tmp607;
    compiler::TNode<Smi> tmp608;
    compiler::TNode<Object> tmp609;
    compiler::TNode<IntPtrT> tmp610;
    compiler::TNode<IntPtrT> tmp611;
    compiler::TNode<IntPtrT> tmp612;
    compiler::TNode<IntPtrT> tmp613;
    compiler::TNode<FixedArray> tmp614;
    ca_.Bind(&block40, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2434);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2436);
    ca_.Branch(tmp606, &block44, &block45, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp614);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp615;
    compiler::TNode<Object> tmp616;
    compiler::TNode<RawPtrT> tmp617;
    compiler::TNode<RawPtrT> tmp618;
    compiler::TNode<IntPtrT> tmp619;
    compiler::TNode<JSArray> tmp620;
    compiler::TNode<JSArray> tmp621;
    compiler::TNode<JSArray> tmp622;
    compiler::TNode<Map> tmp623;
    compiler::TNode<BoolT> tmp624;
    compiler::TNode<BoolT> tmp625;
    compiler::TNode<BoolT> tmp626;
    compiler::TNode<Smi> tmp627;
    compiler::TNode<Object> tmp628;
    compiler::TNode<IntPtrT> tmp629;
    compiler::TNode<IntPtrT> tmp630;
    compiler::TNode<IntPtrT> tmp631;
    compiler::TNode<IntPtrT> tmp632;
    compiler::TNode<FixedArray> tmp633;
    ca_.Bind(&block44, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2437);
    BaseBuiltinsFromDSLAssembler(state_).TorqueMoveElementsSmi(compiler::TNode<FixedArray>{tmp633}, compiler::TNode<IntPtrT>{tmp630}, compiler::TNode<IntPtrT>{tmp631}, compiler::TNode<IntPtrT>{tmp632});
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2436);
    ca_.Goto(&block46, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp634;
    compiler::TNode<Object> tmp635;
    compiler::TNode<RawPtrT> tmp636;
    compiler::TNode<RawPtrT> tmp637;
    compiler::TNode<IntPtrT> tmp638;
    compiler::TNode<JSArray> tmp639;
    compiler::TNode<JSArray> tmp640;
    compiler::TNode<JSArray> tmp641;
    compiler::TNode<Map> tmp642;
    compiler::TNode<BoolT> tmp643;
    compiler::TNode<BoolT> tmp644;
    compiler::TNode<BoolT> tmp645;
    compiler::TNode<Smi> tmp646;
    compiler::TNode<Object> tmp647;
    compiler::TNode<IntPtrT> tmp648;
    compiler::TNode<IntPtrT> tmp649;
    compiler::TNode<IntPtrT> tmp650;
    compiler::TNode<IntPtrT> tmp651;
    compiler::TNode<FixedArray> tmp652;
    ca_.Bind(&block45, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2439);
    BaseBuiltinsFromDSLAssembler(state_).TorqueMoveElements(compiler::TNode<FixedArray>{tmp652}, compiler::TNode<IntPtrT>{tmp649}, compiler::TNode<IntPtrT>{tmp650}, compiler::TNode<IntPtrT>{tmp651});
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2436);
    ca_.Goto(&block46, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp653;
    compiler::TNode<Object> tmp654;
    compiler::TNode<RawPtrT> tmp655;
    compiler::TNode<RawPtrT> tmp656;
    compiler::TNode<IntPtrT> tmp657;
    compiler::TNode<JSArray> tmp658;
    compiler::TNode<JSArray> tmp659;
    compiler::TNode<JSArray> tmp660;
    compiler::TNode<Map> tmp661;
    compiler::TNode<BoolT> tmp662;
    compiler::TNode<BoolT> tmp663;
    compiler::TNode<BoolT> tmp664;
    compiler::TNode<Smi> tmp665;
    compiler::TNode<Object> tmp666;
    compiler::TNode<IntPtrT> tmp667;
    compiler::TNode<IntPtrT> tmp668;
    compiler::TNode<IntPtrT> tmp669;
    compiler::TNode<IntPtrT> tmp670;
    compiler::TNode<FixedArray> tmp671;
    ca_.Bind(&block46, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2433);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2428);
    ca_.Goto(&block35, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp672;
    compiler::TNode<Object> tmp673;
    compiler::TNode<RawPtrT> tmp674;
    compiler::TNode<RawPtrT> tmp675;
    compiler::TNode<IntPtrT> tmp676;
    compiler::TNode<JSArray> tmp677;
    compiler::TNode<JSArray> tmp678;
    compiler::TNode<JSArray> tmp679;
    compiler::TNode<Map> tmp680;
    compiler::TNode<BoolT> tmp681;
    compiler::TNode<BoolT> tmp682;
    compiler::TNode<BoolT> tmp683;
    compiler::TNode<Smi> tmp684;
    compiler::TNode<Object> tmp685;
    compiler::TNode<IntPtrT> tmp686;
    compiler::TNode<IntPtrT> tmp687;
    compiler::TNode<IntPtrT> tmp688;
    compiler::TNode<IntPtrT> tmp689;
    ca_.Bind(&block35, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 36);
    ca_.Goto(&block30, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp690;
    compiler::TNode<Object> tmp691;
    compiler::TNode<RawPtrT> tmp692;
    compiler::TNode<RawPtrT> tmp693;
    compiler::TNode<IntPtrT> tmp694;
    compiler::TNode<JSArray> tmp695;
    compiler::TNode<JSArray> tmp696;
    compiler::TNode<JSArray> tmp697;
    compiler::TNode<Map> tmp698;
    compiler::TNode<BoolT> tmp699;
    compiler::TNode<BoolT> tmp700;
    compiler::TNode<BoolT> tmp701;
    compiler::TNode<Smi> tmp702;
    compiler::TNode<Object> tmp703;
    compiler::TNode<IntPtrT> tmp704;
    compiler::TNode<IntPtrT> tmp705;
    compiler::TNode<IntPtrT> tmp706;
    compiler::TNode<IntPtrT> tmp707;
    ca_.Bind(&block30, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 37);
    ca_.Goto(&block2, tmp690, tmp691, tmp692, tmp693, tmp694, tmp703);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp708;
    compiler::TNode<Object> tmp709;
    compiler::TNode<RawPtrT> tmp710;
    compiler::TNode<RawPtrT> tmp711;
    compiler::TNode<IntPtrT> tmp712;
    compiler::TNode<JSArray> tmp713;
    compiler::TNode<JSArray> tmp714;
    compiler::TNode<JSArray> tmp715;
    compiler::TNode<Map> tmp716;
    compiler::TNode<BoolT> tmp717;
    compiler::TNode<BoolT> tmp718;
    compiler::TNode<BoolT> tmp719;
    ca_.Bind(&block11, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 41);
    compiler::TNode<JSFunction> tmp720;
    USE(tmp720);
    tmp720 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).LoadTargetFromFrame());
    compiler::TNode<Oddball> tmp721;
    USE(tmp721);
    tmp721 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 42);
    compiler::TNode<Int32T> tmp722;
    USE(tmp722);
    tmp722 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).Convert7ATint328ATintptr(compiler::TNode<IntPtrT>{tmp712}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 40);
   CodeStubAssembler(state_).TailCallBuiltin(Builtins::kArrayShift, tmp708, tmp720, tmp721, tmp722);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp723;
    compiler::TNode<Object> tmp724;
    compiler::TNode<RawPtrT> tmp725;
    compiler::TNode<RawPtrT> tmp726;
    compiler::TNode<IntPtrT> tmp727;
    compiler::TNode<Object> tmp728;
    ca_.Bind(&block2, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 8);
    ca_.Goto(&block47, tmp723, tmp724, tmp725, tmp726, tmp727, tmp728);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

    compiler::TNode<Context> tmp729;
    compiler::TNode<Object> tmp730;
    compiler::TNode<RawPtrT> tmp731;
    compiler::TNode<RawPtrT> tmp732;
    compiler::TNode<IntPtrT> tmp733;
    compiler::TNode<Object> tmp734;
    ca_.Bind(&block47, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734);
  return compiler::TNode<Object>{tmp734};
}

compiler::TNode<Object> ArrayShiftBuiltinsFromDSLAssembler::GenericArrayShift(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 49);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 52);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).GetLengthProperty(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 55);
    compiler::TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).IsNumberEqual(compiler::TNode<Number>{tmp3}, compiler::TNode<Number>{tmp4}));
    ca_.Branch(tmp5, &block2, &block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 57);
    compiler::TNode<String> tmp10;
    USE(tmp10);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).kLengthString();
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi17ATconstexpr_int31(0));
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp6, tmp8, tmp10, tmp11);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 59);
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block1, tmp6, tmp7, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Number> tmp17;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 63);
    compiler::TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp16}, compiler::TNode<Object>{tmp18}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 65);
    compiler::TNode<Number> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 67);
    ca_.Goto(&block6, tmp14, tmp15, tmp16, tmp17, tmp19, tmp20);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp26}, compiler::TNode<Number>{tmp24}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp26, tmp24);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp26, tmp24);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Number> tmp32;
    compiler::TNode<Number> tmp33;
    compiler::TNode<Number> tmp34;
    ca_.Bind(&block7, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block4, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<JSReceiver> tmp37;
    compiler::TNode<Number> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Number> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<Number> tmp42;
    ca_.Bind(&block8, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block5, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<JSReceiver> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Number> tmp48;
    ca_.Bind(&block4, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 69);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 72);
    compiler::TNode<Number> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp48}, compiler::TNode<Number>{tmp49}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 75);
    compiler::TNode<Oddball> tmp51;
    tmp51 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp43, tmp45, tmp48));
    USE(tmp51);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 78);
    compiler::TNode<Oddball> tmp52;
    USE(tmp52);
    tmp52 = BaseBuiltinsFromDSLAssembler(state_).True();
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp51}, compiler::TNode<HeapObject>{tmp52}));
    ca_.Branch(tmp53, &block9, &block10, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp48, tmp50, tmp51);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<Number> tmp61;
    compiler::TNode<Oddball> tmp62;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 80);
    compiler::TNode<Object> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp54}, compiler::TNode<Object>{tmp56}, compiler::TNode<Object>{tmp60}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 83);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp54, tmp56, tmp61, tmp63);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 78);
    ca_.Goto(&block11, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    compiler::TNode<Number> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<Oddball> tmp73;
    ca_.Bind(&block10, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 86);
    compiler::TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode(LanguageMode::kStrict));
    CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp65, tmp67, tmp72, tmp74);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 78);
    ca_.Goto(&block11, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<Number> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Number> tmp81;
    compiler::TNode<Number> tmp82;
    compiler::TNode<Number> tmp83;
    compiler::TNode<Oddball> tmp84;
    ca_.Bind(&block11, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 90);
    compiler::TNode<Number> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp86;
    USE(tmp86);
    tmp86 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp81}, compiler::TNode<Number>{tmp85}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 67);
    ca_.Goto(&block6, tmp76, tmp77, tmp78, tmp79, tmp80, tmp86);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Number> tmp92;
    ca_.Bind(&block5, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 94);
    compiler::TNode<Number> tmp93;
    USE(tmp93);
    tmp93 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp94;
    USE(tmp94);
    tmp94 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp90}, compiler::TNode<Number>{tmp93}));
    compiler::TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode(LanguageMode::kStrict));
    CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp87, tmp89, tmp94, tmp95);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 97);
    compiler::TNode<String> tmp97;
    USE(tmp97);
    tmp97 = BaseBuiltinsFromDSLAssembler(state_).kLengthString();
    compiler::TNode<Number> tmp98;
    USE(tmp98);
    tmp98 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp99;
    USE(tmp99);
    tmp99 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberSub(compiler::TNode<Number>{tmp90}, compiler::TNode<Number>{tmp98}));
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp87, tmp89, tmp97, tmp99);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 100);
    ca_.Goto(&block1, tmp87, tmp88, tmp91);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    ca_.Bind(&block1, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 46);
    ca_.Goto(&block12, tmp101, tmp102, tmp103);
  }

    compiler::TNode<Context> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Object> tmp106;
    ca_.Bind(&block12, &tmp104, &tmp105, &tmp106);
  return compiler::TNode<Object>{tmp106};
}

TF_BUILTIN(ArrayPrototypeShift, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, RawPtrT, RawPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, RawPtrT, RawPtrT, IntPtrT, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 107);
    compiler::TNode<Object> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = ArrayShiftBuiltinsFromDSLAssembler(state_).TryFastArrayShift(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp1, tmp2, tmp3, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp1, tmp2, tmp3, tmp4);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<RawPtrT> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<IntPtrT> tmp14;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    compiler::TNode<Object> tmp24;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    arguments.PopAndReturn(tmp24);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<RawPtrT> tmp28;
    compiler::TNode<IntPtrT> tmp29;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../v8/src/builtins/array-shift.tq", 110);
    compiler::TNode<Object> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Object>(ArrayShiftBuiltinsFromDSLAssembler(state_).GenericArrayShift(compiler::TNode<Context>{tmp25}, compiler::TNode<Object>{tmp26}));
    arguments.PopAndReturn(tmp30);
  }
}

}  // namespace internal
}  // namespace v8

