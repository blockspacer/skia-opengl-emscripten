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

TF_BUILTIN(TypedArrayPrototypeSubArray, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Map, Int32T, UintPtrT, UintPtrT, UintPtrT, Map, Int32T, Smi, Smi, UintPtrT, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Map, Int32T, UintPtrT, UintPtrT, UintPtrT, Map, Int32T, Smi, Smi, UintPtrT, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Map, Int32T, UintPtrT, UintPtrT, UintPtrT, Map, Int32T, Smi, Smi, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Map, Int32T, UintPtrT, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Map, Int32T, UintPtrT, UintPtrT, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 14);
    compiler::TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = BaseBuiltinsFromDSLAssembler(state_).Cast12JSTypedArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<IntPtrT> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSTypedArray> tmp18;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<IntPtrT> tmp23;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 15);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp19}, MessageTemplate::kIncompatibleMethodReceiver, "%TypedArray%.prototype.subarray");
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<RawPtrT> tmp26;
    compiler::TNode<RawPtrT> tmp27;
    compiler::TNode<IntPtrT> tmp28;
    compiler::TNode<JSTypedArray> tmp29;
    ca_.Bind(&block1, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 18);
    compiler::TNode<JSArrayBuffer> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<JSArrayBuffer>(TypedArrayBuiltinsAssembler(state_).GetBuffer(compiler::TNode<Context>{tmp24}, compiler::TNode<JSTypedArray>{tmp29}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 21);
    compiler::TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp31);
    compiler::TNode<Smi>tmp32 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp29, tmp31});
    compiler::TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr5ATSmi(compiler::TNode<Smi>{tmp32}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 27);
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp26}, compiler::TNode<RawPtrT>{tmp27}, compiler::TNode<IntPtrT>{tmp28}}, compiler::TNode<IntPtrT>{tmp34}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 29);
    compiler::TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp35}, compiler::TNode<HeapObject>{tmp36}));
    ca_.Branch(tmp37, &block5, &block6, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp33, tmp35);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<RawPtrT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<JSTypedArray> tmp43;
    compiler::TNode<JSArrayBuffer> tmp44;
    compiler::TNode<IntPtrT> tmp45;
    compiler::TNode<Object> tmp46;
    ca_.Bind(&block5, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    compiler::TNode<IntPtrT> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp38}, compiler::TNode<Object>{tmp46}, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block8, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<RawPtrT> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    compiler::TNode<IntPtrT> tmp52;
    compiler::TNode<JSTypedArray> tmp53;
    compiler::TNode<JSArrayBuffer> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block6, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    compiler::TNode<IntPtrT> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    ca_.Goto(&block7, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<RawPtrT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<IntPtrT> tmp62;
    compiler::TNode<JSTypedArray> tmp63;
    compiler::TNode<JSArrayBuffer> tmp64;
    compiler::TNode<IntPtrT> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<IntPtrT> tmp67;
    ca_.Bind(&block8, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block7, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<RawPtrT> tmp70;
    compiler::TNode<RawPtrT> tmp71;
    compiler::TNode<IntPtrT> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    compiler::TNode<JSArrayBuffer> tmp74;
    compiler::TNode<IntPtrT> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<IntPtrT> tmp77;
    ca_.Bind(&block7, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 28);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 35);
    compiler::TNode<IntPtrT> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp70}, compiler::TNode<RawPtrT>{tmp71}, compiler::TNode<IntPtrT>{tmp72}}, compiler::TNode<IntPtrT>{tmp78}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 37);
    compiler::TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp79}, compiler::TNode<HeapObject>{tmp80}));
    ca_.Branch(tmp81, &block9, &block10, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp79);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<RawPtrT> tmp84;
    compiler::TNode<RawPtrT> tmp85;
    compiler::TNode<IntPtrT> tmp86;
    compiler::TNode<JSTypedArray> tmp87;
    compiler::TNode<JSArrayBuffer> tmp88;
    compiler::TNode<IntPtrT> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<IntPtrT> tmp91;
    compiler::TNode<Object> tmp92;
    ca_.Bind(&block9, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    compiler::TNode<IntPtrT> tmp93;
    USE(tmp93);
    tmp93 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ConvertToRelativeIndex(compiler::TNode<Context>{tmp82}, compiler::TNode<Object>{tmp92}, compiler::TNode<IntPtrT>{tmp89}));
    ca_.Goto(&block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<RawPtrT> tmp96;
    compiler::TNode<RawPtrT> tmp97;
    compiler::TNode<IntPtrT> tmp98;
    compiler::TNode<JSTypedArray> tmp99;
    compiler::TNode<JSArrayBuffer> tmp100;
    compiler::TNode<IntPtrT> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<IntPtrT> tmp103;
    compiler::TNode<Object> tmp104;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.Goto(&block11, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp101);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<RawPtrT> tmp107;
    compiler::TNode<RawPtrT> tmp108;
    compiler::TNode<IntPtrT> tmp109;
    compiler::TNode<JSTypedArray> tmp110;
    compiler::TNode<JSArrayBuffer> tmp111;
    compiler::TNode<IntPtrT> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<IntPtrT> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<IntPtrT> tmp116;
    ca_.Bind(&block12, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block11, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<JSTypedArray> tmp122;
    compiler::TNode<JSArrayBuffer> tmp123;
    compiler::TNode<IntPtrT> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<IntPtrT> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<IntPtrT> tmp128;
    ca_.Bind(&block11, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 36);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 40);
    compiler::TNode<IntPtrT> tmp129;
    USE(tmp129);
    tmp129 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp128}, compiler::TNode<IntPtrT>{tmp126}));
    compiler::TNode<IntPtrT> tmp130;
    USE(tmp130);
    tmp130 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<IntPtrT> tmp131;
    USE(tmp131);
    tmp131 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrMax(compiler::TNode<IntPtrT>{tmp129}, compiler::TNode<IntPtrT>{tmp130}));
    compiler::TNode<Smi> tmp132;
    USE(tmp132);
    tmp132 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert13ATPositiveSmi8ATintptr(compiler::TNode<IntPtrT>{tmp131}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 45);
    compiler::TNode<UintPtrT> tmp133;
    USE(tmp133);
    compiler::TNode<Map> tmp134;
    USE(tmp134);
    compiler::TNode<Int32T> tmp135;
    USE(tmp135);
    std::tie(tmp133, tmp134, tmp135) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(compiler::TNode<JSTypedArray>{tmp122}).Flatten();
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 48);
    compiler::TNode<IntPtrT> tmp136 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp136);
    compiler::TNode<UintPtrT>tmp137 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp122, tmp136});
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 51);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 52);
    compiler::TNode<Smi> tmp138;
    USE(tmp138);
    tmp138 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert13ATPositiveSmi8ATintptr(compiler::TNode<IntPtrT>{tmp126}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array.tq", 11);
    compiler::TNode<UintPtrT> tmp139;
    USE(tmp139);
    tmp139 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr13ATPositiveSmi(compiler::TNode<Smi>{tmp138}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array.tq", 12);
    compiler::TNode<UintPtrT> tmp140;
    USE(tmp140);
    tmp140 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<UintPtrT>{tmp139}, compiler::TNode<UintPtrT>{tmp133}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array.tq", 15);
    compiler::TNode<UintPtrT> tmp141;
    USE(tmp141);
    tmp141 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp140}, compiler::TNode<UintPtrT>{tmp133}));
    compiler::TNode<BoolT> tmp142;
    USE(tmp142);
    tmp142 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<UintPtrT>{tmp141}, compiler::TNode<UintPtrT>{tmp139}));
    ca_.Branch(tmp142, &block16, &block17, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp132, tmp133, tmp134, tmp135, tmp137, tmp137, tmp133, tmp134, tmp135, tmp138, tmp138, tmp139, tmp140);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<RawPtrT> tmp145;
    compiler::TNode<RawPtrT> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<JSTypedArray> tmp148;
    compiler::TNode<JSArrayBuffer> tmp149;
    compiler::TNode<IntPtrT> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<IntPtrT> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<IntPtrT> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<UintPtrT> tmp156;
    compiler::TNode<Map> tmp157;
    compiler::TNode<Int32T> tmp158;
    compiler::TNode<UintPtrT> tmp159;
    compiler::TNode<UintPtrT> tmp160;
    compiler::TNode<UintPtrT> tmp161;
    compiler::TNode<Map> tmp162;
    compiler::TNode<Int32T> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<Smi> tmp165;
    compiler::TNode<UintPtrT> tmp166;
    compiler::TNode<UintPtrT> tmp167;
    ca_.Bind(&block16, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    ca_.Goto(&block14, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<RawPtrT> tmp170;
    compiler::TNode<RawPtrT> tmp171;
    compiler::TNode<IntPtrT> tmp172;
    compiler::TNode<JSTypedArray> tmp173;
    compiler::TNode<JSArrayBuffer> tmp174;
    compiler::TNode<IntPtrT> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<IntPtrT> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<IntPtrT> tmp179;
    compiler::TNode<Smi> tmp180;
    compiler::TNode<UintPtrT> tmp181;
    compiler::TNode<Map> tmp182;
    compiler::TNode<Int32T> tmp183;
    compiler::TNode<UintPtrT> tmp184;
    compiler::TNode<UintPtrT> tmp185;
    compiler::TNode<UintPtrT> tmp186;
    compiler::TNode<Map> tmp187;
    compiler::TNode<Int32T> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<UintPtrT> tmp191;
    compiler::TNode<UintPtrT> tmp192;
    ca_.Bind(&block17, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array.tq", 16);
    ca_.Goto(&block15, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp192);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<RawPtrT> tmp195;
    compiler::TNode<RawPtrT> tmp196;
    compiler::TNode<IntPtrT> tmp197;
    compiler::TNode<JSTypedArray> tmp198;
    compiler::TNode<JSArrayBuffer> tmp199;
    compiler::TNode<IntPtrT> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<IntPtrT> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<IntPtrT> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<UintPtrT> tmp206;
    compiler::TNode<Map> tmp207;
    compiler::TNode<Int32T> tmp208;
    compiler::TNode<UintPtrT> tmp209;
    compiler::TNode<UintPtrT> tmp210;
    compiler::TNode<UintPtrT> tmp211;
    compiler::TNode<Map> tmp212;
    compiler::TNode<Int32T> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Smi> tmp215;
    compiler::TNode<UintPtrT> tmp216;
    ca_.Bind(&block15, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 52);
    ca_.Goto(&block13, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp216);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp217;
    compiler::TNode<Object> tmp218;
    compiler::TNode<RawPtrT> tmp219;
    compiler::TNode<RawPtrT> tmp220;
    compiler::TNode<IntPtrT> tmp221;
    compiler::TNode<JSTypedArray> tmp222;
    compiler::TNode<JSArrayBuffer> tmp223;
    compiler::TNode<IntPtrT> tmp224;
    compiler::TNode<Object> tmp225;
    compiler::TNode<IntPtrT> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<IntPtrT> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<UintPtrT> tmp230;
    compiler::TNode<Map> tmp231;
    compiler::TNode<Int32T> tmp232;
    compiler::TNode<UintPtrT> tmp233;
    compiler::TNode<UintPtrT> tmp234;
    ca_.Bind(&block14, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 53);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp217}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<RawPtrT> tmp237;
    compiler::TNode<RawPtrT> tmp238;
    compiler::TNode<IntPtrT> tmp239;
    compiler::TNode<JSTypedArray> tmp240;
    compiler::TNode<JSArrayBuffer> tmp241;
    compiler::TNode<IntPtrT> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<IntPtrT> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<IntPtrT> tmp246;
    compiler::TNode<Smi> tmp247;
    compiler::TNode<UintPtrT> tmp248;
    compiler::TNode<Map> tmp249;
    compiler::TNode<Int32T> tmp250;
    compiler::TNode<UintPtrT> tmp251;
    compiler::TNode<UintPtrT> tmp252;
    compiler::TNode<UintPtrT> tmp253;
    ca_.Bind(&block13, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 51);
    compiler::TNode<UintPtrT> tmp254;
    USE(tmp254);
    tmp254 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp252}, compiler::TNode<UintPtrT>{tmp253}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 56);
    compiler::TNode<Number> tmp255;
    USE(tmp255);
    tmp255 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert20UT5ATSmi10HeapNumber9ATuintptr(compiler::TNode<UintPtrT>{tmp254}));
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 61);
    ca_.SetSourcePosition("../../v8/src/builtins/typed-array-subarray.tq", 60);
    compiler::TNode<JSTypedArray> tmp256;
    USE(tmp256);
    tmp256 = ca_.UncheckedCast<JSTypedArray>(TypedArrayCreatetypedarrayBuiltinsFromDSLAssembler(state_).TypedArraySpeciesCreate(compiler::TNode<Context>{tmp235}, "%TypedArray%.prototype.subarray", 3, compiler::TNode<JSTypedArray>{tmp240}, compiler::TNode<Object>{tmp241}, compiler::TNode<Object>{tmp255}, compiler::TNode<Object>{tmp247}));
    arguments.PopAndReturn(tmp256);
  }
}

}  // namespace internal
}  // namespace v8

