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

compiler::TNode<Smi> StringSubstringBuiltinsFromDSLAssembler::ToSmiBetweenZeroAnd(compiler::TNode<Context> p_context, compiler::TNode<Object> p_value, compiler::TNode<Smi> p_limit) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_value, p_limit);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 12);
    compiler::TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero));
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 11);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 13);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 14);
    compiler::TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<Number> tmp8;
    compiler::TNode<Number> tmp9;
    compiler::TNode<Number> tmp10;
    ca_.Bind(&block5, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block3, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Smi> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block4, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 15);
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiAbove(compiler::TNode<Smi>{tmp17}, compiler::TNode<Smi>{tmp13}));
    ca_.Branch(tmp18, &block6, &block7, tmp11, tmp12, tmp13, tmp14, tmp15, tmp17);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Number> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block6, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 16);
    compiler::TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp24}, compiler::TNode<Smi>{tmp25}));
    ca_.Branch(tmp26, &block8, &block9, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<Number> tmp31;
    compiler::TNode<Smi> tmp32;
    ca_.Bind(&block8, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block11, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<Smi> tmp38;
    ca_.Bind(&block9, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block10, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp35);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Number> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<Smi> tmp44;
    ca_.Bind(&block11, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<Smi> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<Number> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    ca_.Bind(&block10, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block1, tmp46, tmp47, tmp48, tmp52);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Number> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Smi> tmp58;
    ca_.Bind(&block7, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 18);
    ca_.Goto(&block1, tmp53, tmp54, tmp55, tmp58);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Smi> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<Number> tmp63;
    ca_.Bind(&block3, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 22);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 23);
    compiler::TNode<Float64T> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).LoadHeapNumberValue(compiler::TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp63)}));
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 24);
    compiler::TNode<Float64T> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31(0.));
    compiler::TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64LessThan(compiler::TNode<Float64T>{tmp64}, compiler::TNode<Float64T>{tmp65}));
    ca_.Branch(tmp66, &block12, &block13, tmp59, tmp60, tmp61, tmp62, tmp63, ca_.UncheckedCast<HeapNumber>(tmp63), tmp64);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<HeapNumber> tmp72;
    compiler::TNode<Float64T> tmp73;
    ca_.Bind(&block12, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block15, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<Smi> tmp76;
    compiler::TNode<Number> tmp77;
    compiler::TNode<Number> tmp78;
    compiler::TNode<HeapNumber> tmp79;
    compiler::TNode<Float64T> tmp80;
    ca_.Bind(&block13, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.Goto(&block14, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp76);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<Number> tmp84;
    compiler::TNode<Number> tmp85;
    compiler::TNode<HeapNumber> tmp86;
    compiler::TNode<Float64T> tmp87;
    ca_.Bind(&block15, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    compiler::TNode<Smi> tmp88;
    USE(tmp88);
    tmp88 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block14, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<Number> tmp93;
    compiler::TNode<HeapNumber> tmp94;
    compiler::TNode<Float64T> tmp95;
    compiler::TNode<Smi> tmp96;
    ca_.Bind(&block14, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block1, tmp89, tmp90, tmp91, tmp96);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp97;
    compiler::TNode<Object> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<Smi> tmp100;
    ca_.Bind(&block1, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 9);
    ca_.Goto(&block16, tmp97, tmp98, tmp99, tmp100);
  }

    compiler::TNode<Context> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Smi> tmp104;
    ca_.Bind(&block16, &tmp101, &tmp102, &tmp103, &tmp104);
  return compiler::TNode<Smi>{tmp104};
}

TF_BUILTIN(StringPrototypeSubstring, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 33);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6String18ATconstexpr_string("String.prototype.substring"));
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).ToThisString(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp5}));
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 34);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadStringLengthAsSmi(compiler::TNode<String>{tmp6}));
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 37);
    compiler::TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp8}));
    compiler::TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Smi>(StringSubstringBuiltinsFromDSLAssembler(state_).ToSmiBetweenZeroAnd(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp9}, compiler::TNode<Smi>{tmp7}));
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 40);
    compiler::TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp11}));
    compiler::TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp12}, compiler::TNode<HeapObject>{tmp13}));
    ca_.Branch(tmp14, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7, tmp10);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<IntPtrT> tmp19;
    compiler::TNode<String> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    ca_.Bind(&block1, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 41);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 40);
    ca_.Goto(&block4, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp21);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    compiler::TNode<String> tmp28;
    compiler::TNode<Smi> tmp29;
    compiler::TNode<Smi> tmp30;
    ca_.Bind(&block2, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 42);
    compiler::TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp25}, compiler::TNode<RawPtrT>{tmp26}, compiler::TNode<IntPtrT>{tmp27}}, compiler::TNode<IntPtrT>{tmp31}));
    compiler::TNode<Smi> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<Smi>(StringSubstringBuiltinsFromDSLAssembler(state_).ToSmiBetweenZeroAnd(compiler::TNode<Context>{tmp23}, compiler::TNode<Object>{tmp32}, compiler::TNode<Smi>{tmp29}));
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 40);
    ca_.Goto(&block3, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<IntPtrT> tmp38;
    compiler::TNode<String> tmp39;
    compiler::TNode<Smi> tmp40;
    compiler::TNode<Smi> tmp41;
    compiler::TNode<Smi> tmp42;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block3, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<RawPtrT> tmp45;
    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<IntPtrT> tmp47;
    compiler::TNode<String> tmp48;
    compiler::TNode<Smi> tmp49;
    compiler::TNode<Smi> tmp50;
    compiler::TNode<Smi> tmp51;
    ca_.Bind(&block3, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 43);
    compiler::TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp51}, compiler::TNode<Smi>{tmp50}));
    ca_.Branch(tmp52, &block5, &block6, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<RawPtrT> tmp55;
    compiler::TNode<RawPtrT> tmp56;
    compiler::TNode<IntPtrT> tmp57;
    compiler::TNode<String> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<Smi> tmp61;
    ca_.Bind(&block5, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 44);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 45);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 46);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 43);
    ca_.Goto(&block6, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61, tmp60);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<RawPtrT> tmp64;
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<String> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<Smi> tmp70;
    ca_.Bind(&block6, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../v8/src/builtins/string-substring.tq", 48);
    compiler::TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp69}));
    compiler::TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp70}));
    compiler::TNode<String> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).SubString(compiler::TNode<String>{tmp67}, compiler::TNode<IntPtrT>{tmp71}, compiler::TNode<IntPtrT>{tmp72}));
    arguments.PopAndReturn(tmp73);
  }
}

}  // namespace internal
}  // namespace v8

