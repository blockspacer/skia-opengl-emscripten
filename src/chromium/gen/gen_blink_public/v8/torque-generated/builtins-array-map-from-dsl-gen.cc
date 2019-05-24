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

TF_BUILTIN(ArrayMapLoopEagerDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kArray));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter5);
  compiler::TNode<Object> parameter6 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number, Object, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 17);
    compiler::TNode<JSReceiver> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp1, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<JSReceiver> tmp24;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block1, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp24);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:17:61");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    ca_.Bind(&block1, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 18);
    compiler::TNode<JSReceiver> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = BaseBuiltinsFromDSLAssembler(state_).Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context>{tmp32}, compiler::TNode<Object>{tmp34}, &label0);
    ca_.Goto(&block7, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp34, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp34);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<JSReceiver> tmp48;
    compiler::TNode<Object> tmp49;
    ca_.Bind(&block8, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.Goto(&block6, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSReceiver> tmp59;
    ca_.Bind(&block7, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block5, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp59);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Object> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<JSReceiver> tmp67;
    ca_.Bind(&block6, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:18:59");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    ca_.Bind(&block5, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 19);
    compiler::TNode<JSReceiver> tmp77;
    USE(tmp77);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp77 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp68}, compiler::TNode<Object>{tmp72}, &label0);
    ca_.Goto(&block11, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp72, tmp77);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp72);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    compiler::TNode<JSReceiver> tmp86;
    compiler::TNode<Object> tmp87;
    ca_.Bind(&block12, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.Goto(&block10, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<JSReceiver> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<JSReceiver> tmp98;
    ca_.Bind(&block11, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.Goto(&block9, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp98);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<JSReceiver> tmp107;
    ca_.Bind(&block10, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:19:59");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<JSReceiver> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<JSReceiver> tmp117;
    ca_.Bind(&block9, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 20);
    compiler::TNode<Number> tmp118;
    USE(tmp118);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp118 = BaseBuiltinsFromDSLAssembler(state_).Cast20UT5ATSmi10HeapNumber(compiler::TNode<Object>{tmp113}, &label0);
    ca_.Goto(&block15, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp113, tmp118);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp113);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<JSReceiver> tmp128;
    compiler::TNode<Object> tmp129;
    ca_.Bind(&block16, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.Goto(&block14, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<Object> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<JSReceiver> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Number> tmp141;
    ca_.Bind(&block15, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.Goto(&block13, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp141);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<JSReceiver> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    ca_.Bind(&block14, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:20:54");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Object> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<JSReceiver> tmp159;
    compiler::TNode<JSReceiver> tmp160;
    compiler::TNode<JSReceiver> tmp161;
    compiler::TNode<Number> tmp162;
    ca_.Bind(&block13, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 21);
    compiler::TNode<Number> tmp163;
    USE(tmp163);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp163 = BaseBuiltinsFromDSLAssembler(state_).Cast20UT5ATSmi10HeapNumber(compiler::TNode<Object>{tmp158}, &label0);
    ca_.Goto(&block19, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp158, tmp163);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block20, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp158);
    }
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<Object> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<JSReceiver> tmp171;
    compiler::TNode<JSReceiver> tmp172;
    compiler::TNode<JSReceiver> tmp173;
    compiler::TNode<Number> tmp174;
    compiler::TNode<Object> tmp175;
    ca_.Bind(&block20, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.Goto(&block18, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Object> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<JSReceiver> tmp183;
    compiler::TNode<JSReceiver> tmp184;
    compiler::TNode<JSReceiver> tmp185;
    compiler::TNode<Number> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Number> tmp188;
    ca_.Bind(&block19, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.Goto(&block17, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp188);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<Object> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<JSReceiver> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<JSReceiver> tmp198;
    compiler::TNode<Number> tmp199;
    ca_.Bind(&block18, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:21:57");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<Object> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<JSReceiver> tmp207;
    compiler::TNode<JSReceiver> tmp208;
    compiler::TNode<JSReceiver> tmp209;
    compiler::TNode<Number> tmp210;
    compiler::TNode<Number> tmp211;
    ca_.Bind(&block17, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 24);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 25);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 23);
    compiler::TNode<Object> tmp212;
    tmp212 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayMapLoopContinuation, tmp200, tmp207, tmp208, tmp203, tmp209, tmp207, tmp210, tmp211);
    USE(tmp212);
    CodeStubAssembler(state_).Return(tmp212);
  }
}

TF_BUILTIN(ArrayMapLoopLazyDeoptContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCallback));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  compiler::TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kArray));
  USE(parameter4);
  compiler::TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kInitialK));
  USE(parameter5);
  compiler::TNode<Object> parameter6 = UncheckedCast<Object>(Parameter(Descriptor::kLength));
  USE(parameter6);
  compiler::TNode<Object> parameter7 = UncheckedCast<Object>(Parameter(Descriptor::kResult));
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number, Object, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object, Object, Object, JSReceiver, JSReceiver, JSReceiver, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6, parameter7);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 35);
    compiler::TNode<JSReceiver> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp1, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block4, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp27);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Object> tmp35;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:35:61");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    ca_.Bind(&block1, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 36);
    compiler::TNode<JSReceiver> tmp45;
    USE(tmp45);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp45 = BaseBuiltinsFromDSLAssembler(state_).Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp38}, &label0);
    ca_.Goto(&block7, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp38, tmp45);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp38);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<JSReceiver> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block6, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<Object> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<JSReceiver> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.Goto(&block5, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp66);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    ca_.Bind(&block6, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:36:59");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    compiler::TNode<Object> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<JSReceiver> tmp85;
    ca_.Bind(&block5, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 37);
    compiler::TNode<JSReceiver> tmp86;
    USE(tmp86);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp86 = BaseBuiltinsFromDSLAssembler(state_).Cast10JSReceiver(compiler::TNode<Context>{tmp76}, compiler::TNode<Object>{tmp80}, &label0);
    ca_.Goto(&block11, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp80, tmp86);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp80);
    }
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<JSReceiver> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block12, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block10, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<JSReceiver> tmp106;
    compiler::TNode<JSReceiver> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<JSReceiver> tmp109;
    ca_.Bind(&block11, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109);
    ca_.Goto(&block9, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp109);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<Object> tmp112;
    compiler::TNode<Object> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<Object> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSReceiver> tmp118;
    compiler::TNode<JSReceiver> tmp119;
    ca_.Bind(&block10, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:37:59");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Object> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<JSReceiver> tmp128;
    compiler::TNode<JSReceiver> tmp129;
    compiler::TNode<JSReceiver> tmp130;
    ca_.Bind(&block9, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 38);
    compiler::TNode<Number> tmp131;
    USE(tmp131);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp131 = BaseBuiltinsFromDSLAssembler(state_).Cast20UT5ATSmi10HeapNumber(compiler::TNode<Object>{tmp125}, &label0);
    ca_.Goto(&block15, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp125, tmp131);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp125);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<Object> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<JSReceiver> tmp140;
    compiler::TNode<JSReceiver> tmp141;
    compiler::TNode<JSReceiver> tmp142;
    compiler::TNode<Object> tmp143;
    ca_.Bind(&block16, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.Goto(&block14, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<Object> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<JSReceiver> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Number> tmp156;
    ca_.Bind(&block15, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    ca_.Goto(&block13, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp156);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<Object> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Object> tmp163;
    compiler::TNode<Object> tmp164;
    compiler::TNode<JSReceiver> tmp165;
    compiler::TNode<JSReceiver> tmp166;
    compiler::TNode<JSReceiver> tmp167;
    ca_.Bind(&block14, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:38:52");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp168;
    compiler::TNode<Object> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<Object> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<Object> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<JSReceiver> tmp176;
    compiler::TNode<JSReceiver> tmp177;
    compiler::TNode<JSReceiver> tmp178;
    compiler::TNode<Number> tmp179;
    ca_.Bind(&block13, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 39);
    compiler::TNode<Number> tmp180;
    USE(tmp180);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp180 = BaseBuiltinsFromDSLAssembler(state_).Cast20UT5ATSmi10HeapNumber(compiler::TNode<Object>{tmp174}, &label0);
    ca_.Goto(&block19, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp174, tmp180);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block20, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp174);
    }
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp181;
    compiler::TNode<Object> tmp182;
    compiler::TNode<Object> tmp183;
    compiler::TNode<Object> tmp184;
    compiler::TNode<Object> tmp185;
    compiler::TNode<Object> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<JSReceiver> tmp189;
    compiler::TNode<JSReceiver> tmp190;
    compiler::TNode<JSReceiver> tmp191;
    compiler::TNode<Number> tmp192;
    compiler::TNode<Object> tmp193;
    ca_.Bind(&block20, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193);
    ca_.Goto(&block18, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<Object> tmp200;
    compiler::TNode<Object> tmp201;
    compiler::TNode<JSReceiver> tmp202;
    compiler::TNode<JSReceiver> tmp203;
    compiler::TNode<JSReceiver> tmp204;
    compiler::TNode<Number> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<Number> tmp207;
    ca_.Bind(&block19, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.Goto(&block17, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp207);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<Object> tmp214;
    compiler::TNode<Object> tmp215;
    compiler::TNode<JSReceiver> tmp216;
    compiler::TNode<JSReceiver> tmp217;
    compiler::TNode<JSReceiver> tmp218;
    compiler::TNode<Number> tmp219;
    ca_.Bind(&block18, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../v8/src/builtins/array-map.tq:39:57");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp220;
    compiler::TNode<Object> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Object> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<JSReceiver> tmp228;
    compiler::TNode<JSReceiver> tmp229;
    compiler::TNode<JSReceiver> tmp230;
    compiler::TNode<Number> tmp231;
    compiler::TNode<Number> tmp232;
    ca_.Bind(&block17, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 47);
    compiler::TNode<Object> tmp233;
    tmp233 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp220, tmp230, tmp231, tmp227);
    USE(tmp233);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 50);
    compiler::TNode<Number> tmp234;
    USE(tmp234);
    tmp234 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp235;
    USE(tmp235);
    tmp235 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp231}, compiler::TNode<Number>{tmp234}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 53);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 54);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 52);
    compiler::TNode<Object> tmp236;
    tmp236 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayMapLoopContinuation, tmp220, tmp228, tmp229, tmp223, tmp230, tmp228, tmp235, tmp232);
    USE(tmp236);
    CodeStubAssembler(state_).Return(tmp236);
  }
}

TF_BUILTIN(ArrayMapLoopContinuation, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSReceiver> parameter1 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  compiler::TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kCallbackfn));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kThisArg));
  USE(parameter3);
  compiler::TNode<JSReceiver> parameter4 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kArray));
  USE(parameter4);
  compiler::TNode<JSReceiver> parameter5 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kO));
  USE(parameter5);
  compiler::TNode<Number> parameter6 = UncheckedCast<Number>(Parameter(Descriptor::kInitialK));
  USE(parameter6);
  compiler::TNode<Number> parameter7 = UncheckedCast<Number>(Parameter(Descriptor::kLength));
  USE(parameter7);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number, Number, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number, Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object, JSReceiver, JSReceiver, Number, Number, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6, parameter7);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 63);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    compiler::TNode<JSReceiver> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<JSReceiver> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Number> tmp15;
    compiler::TNode<Number> tmp16;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp16}, compiler::TNode<Number>{tmp15}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp16, tmp15);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp16, tmp15);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSReceiver> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<JSReceiver> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Number> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    compiler::TNode<Number> tmp27;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSReceiver> tmp29;
    compiler::TNode<JSReceiver> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<Number> tmp34;
    compiler::TNode<Number> tmp35;
    compiler::TNode<Number> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<Number> tmp38;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block2, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<JSReceiver> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSReceiver> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Number> tmp45;
    compiler::TNode<Number> tmp46;
    compiler::TNode<Number> tmp47;
    ca_.Bind(&block1, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 69);
    compiler::TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).HasProperty_Inline(compiler::TNode<Context>{tmp39}, compiler::TNode<JSReceiver>{tmp44}, compiler::TNode<Object>{tmp47}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 72);
    compiler::TNode<Oddball> tmp49;
    USE(tmp49);
    tmp49 = BaseBuiltinsFromDSLAssembler(state_).True();
    compiler::TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<HeapObject>{tmp48}, compiler::TNode<HeapObject>{tmp49}));
    ca_.Branch(tmp50, &block7, &block8, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp51;
    compiler::TNode<JSReceiver> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<JSReceiver> tmp56;
    compiler::TNode<Number> tmp57;
    compiler::TNode<Number> tmp58;
    compiler::TNode<Number> tmp59;
    compiler::TNode<Oddball> tmp60;
    ca_.Bind(&block7, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 74);
    compiler::TNode<Object> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp51}, compiler::TNode<Object>{tmp56}, compiler::TNode<Object>{tmp59}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 78);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp51}, compiler::TNode<JSReceiver>{tmp53}, compiler::TNode<Object>{tmp54}, compiler::TNode<Object>{tmp61}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp56}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 77);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 81);
    compiler::TNode<Object> tmp63;
    tmp63 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp51, tmp55, tmp59, tmp62);
    USE(tmp63);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 72);
    ca_.Goto(&block8, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<JSReceiver> tmp65;
    compiler::TNode<JSReceiver> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<JSReceiver> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    compiler::TNode<Number> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<Oddball> tmp73;
    ca_.Bind(&block8, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 63);
    ca_.Goto(&block4, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<JSReceiver> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSReceiver> tmp78;
    compiler::TNode<JSReceiver> tmp79;
    compiler::TNode<Number> tmp80;
    compiler::TNode<Number> tmp81;
    compiler::TNode<Number> tmp82;
    ca_.Bind(&block4, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    compiler::TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(1));
    compiler::TNode<Number> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberAdd(compiler::TNode<Number>{tmp82}, compiler::TNode<Number>{tmp83}));
    ca_.Goto(&block3, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp84);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSReceiver> tmp86;
    compiler::TNode<JSReceiver> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<Number> tmp91;
    compiler::TNode<Number> tmp92;
    compiler::TNode<Number> tmp93;
    ca_.Bind(&block2, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 88);
    CodeStubAssembler(state_).Return(tmp89);
  }
}

ArrayMapBuiltinsFromDSLAssembler::Vector ArrayMapBuiltinsFromDSLAssembler::NewVector(compiler::TNode<Context> p_context, compiler::TNode<Smi> p_length) {
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, FixedArray, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, FixedArray, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 172);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp1}, compiler::TNode<Smi>{tmp2}));
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 174);
    compiler::TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp5}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 173);
    compiler::TNode<FixedArray> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).AllocateFixedArrayWithHoles(compiler::TNode<IntPtrT>{tmp6}, CodeStubAssembler::kAllowLargeObjectAllocation));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 172);
    ca_.Goto(&block5, tmp4, tmp5, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 175);
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 172);
    ca_.Goto(&block4, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<FixedArray> tmp13;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block4, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Smi> tmp15;
    compiler::TNode<FixedArray> tmp16;
    ca_.Bind(&block4, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 177);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 176);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<FixedArray> tmp22;
    compiler::TNode<BoolT> tmp23;
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<BoolT> tmp25;
    ca_.Bind(&block1, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 171);
    ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

    compiler::TNode<Context> tmp26;
    compiler::TNode<Smi> tmp27;
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
  return ArrayMapBuiltinsFromDSLAssembler::Vector{compiler::TNode<FixedArray>{tmp28}, compiler::TNode<BoolT>{tmp29}, compiler::TNode<BoolT>{tmp30}, compiler::TNode<BoolT>{tmp31}};
}

compiler::TNode<JSArray> ArrayMapBuiltinsFromDSLAssembler::FastArrayMap(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_fastO, compiler::TNode<Smi> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<JSArray>* label_Bailout_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_1) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, JSArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, JSArray, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, JSArray, Smi, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, JSArray, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, JSArray, Smi, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Context, JSReceiver, Object, Object, Smi, JSArray> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object, Object, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object, HeapObject> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object, HeapObject, HeapNumber> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object, Object> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Object, Object, Smi, Object, Context, Smi, Object> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, Object> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, Object, Number> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, HeapObject> block63(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, HeapObject> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, Smi, Int32T, Map, JSArray> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Smi, Context, Smi, JSArray> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi> block66(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray> block75(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, Object> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, Object, Number> block84(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, HeapObject> block87(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object, HeapObject> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi, Object> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray, FixedDoubleArray, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Int32T, Map, JSArray> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, Smi, JSArray, JSArray, Map, BoolT, BoolT, BoolT, FixedArray, BoolT, BoolT, BoolT, Smi, Context, Smi, JSArray> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, JSReceiver, Object, JSArray> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_fastO, p_len, p_callbackfn, p_thisArg);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<JSReceiver> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 188);
    compiler::TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 189);
    compiler::TNode<JSArray> tmp6;
    USE(tmp6);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    compiler::TNode<Map> tmp8;
    USE(tmp8);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    std::tie(tmp6, tmp7, tmp8, tmp9, tmp10, tmp11) = BaseBuiltinsFromDSLAssembler(state_).NewFastJSArrayWitness(compiler::TNode<JSArray>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 190);
    compiler::TNode<FixedArray> tmp12;
    USE(tmp12);
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    std::tie(tmp12, tmp13, tmp14, tmp15) = ArrayMapBuiltinsFromDSLAssembler(state_).NewVector(compiler::TNode<Context>{tmp0}, compiler::TNode<Smi>{tmp2}).Flatten();
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 195);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSArray> tmp17;
    compiler::TNode<Smi> tmp18;
    compiler::TNode<JSReceiver> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<JSArray> tmp22;
    compiler::TNode<JSArray> tmp23;
    compiler::TNode<Map> tmp24;
    compiler::TNode<BoolT> tmp25;
    compiler::TNode<BoolT> tmp26;
    compiler::TNode<BoolT> tmp27;
    compiler::TNode<FixedArray> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<BoolT> tmp30;
    compiler::TNode<BoolT> tmp31;
    ca_.Bind(&block7, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp21}, compiler::TNode<Smi>{tmp18}));
    ca_.Branch(tmp32, &block5, &block6, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<JSArray> tmp34;
    compiler::TNode<Smi> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<JSArray> tmp39;
    compiler::TNode<JSArray> tmp40;
    compiler::TNode<Map> tmp41;
    compiler::TNode<BoolT> tmp42;
    compiler::TNode<BoolT> tmp43;
    compiler::TNode<BoolT> tmp44;
    compiler::TNode<FixedArray> tmp45;
    compiler::TNode<BoolT> tmp46;
    compiler::TNode<BoolT> tmp47;
    compiler::TNode<BoolT> tmp48;
    ca_.Bind(&block5, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2367);
    compiler::TNode<IntPtrT> tmp49 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp49);
    compiler::TNode<Map>tmp50 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp39, tmp49});
    compiler::TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<HeapObject>{tmp50}, compiler::TNode<HeapObject>{tmp41}));
    ca_.Branch(tmp51, &block12, &block13, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<JSArray> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<JSReceiver> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Smi> tmp57;
    compiler::TNode<JSArray> tmp58;
    compiler::TNode<JSArray> tmp59;
    compiler::TNode<Map> tmp60;
    compiler::TNode<BoolT> tmp61;
    compiler::TNode<BoolT> tmp62;
    compiler::TNode<BoolT> tmp63;
    compiler::TNode<FixedArray> tmp64;
    compiler::TNode<BoolT> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<BoolT> tmp67;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block10, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp68;
    compiler::TNode<JSArray> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Object> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<JSArray> tmp74;
    compiler::TNode<JSArray> tmp75;
    compiler::TNode<Map> tmp76;
    compiler::TNode<BoolT> tmp77;
    compiler::TNode<BoolT> tmp78;
    compiler::TNode<BoolT> tmp79;
    compiler::TNode<FixedArray> tmp80;
    compiler::TNode<BoolT> tmp81;
    compiler::TNode<BoolT> tmp82;
    compiler::TNode<BoolT> tmp83;
    ca_.Bind(&block13, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2374);
    compiler::TNode<BoolT> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid());
    ca_.Branch(tmp84, &block14, &block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp85;
    compiler::TNode<JSArray> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<JSReceiver> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<JSArray> tmp91;
    compiler::TNode<JSArray> tmp92;
    compiler::TNode<Map> tmp93;
    compiler::TNode<BoolT> tmp94;
    compiler::TNode<BoolT> tmp95;
    compiler::TNode<BoolT> tmp96;
    compiler::TNode<FixedArray> tmp97;
    compiler::TNode<BoolT> tmp98;
    compiler::TNode<BoolT> tmp99;
    compiler::TNode<BoolT> tmp100;
    ca_.Bind(&block14, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.Goto(&block10, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp101;
    compiler::TNode<JSArray> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Object> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<JSArray> tmp107;
    compiler::TNode<JSArray> tmp108;
    compiler::TNode<Map> tmp109;
    compiler::TNode<BoolT> tmp110;
    compiler::TNode<BoolT> tmp111;
    compiler::TNode<BoolT> tmp112;
    compiler::TNode<FixedArray> tmp113;
    compiler::TNode<BoolT> tmp114;
    compiler::TNode<BoolT> tmp115;
    compiler::TNode<BoolT> tmp116;
    ca_.Bind(&block15, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2375);
    compiler::TNode<JSArray> tmp117;
    USE(tmp117);
    tmp117 = (compiler::TNode<JSArray>{tmp107});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 196);
    ca_.Goto(&block11, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp117, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp118;
    compiler::TNode<JSArray> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<JSReceiver> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Smi> tmp123;
    compiler::TNode<JSArray> tmp124;
    compiler::TNode<JSArray> tmp125;
    compiler::TNode<Map> tmp126;
    compiler::TNode<BoolT> tmp127;
    compiler::TNode<BoolT> tmp128;
    compiler::TNode<BoolT> tmp129;
    compiler::TNode<FixedArray> tmp130;
    compiler::TNode<BoolT> tmp131;
    compiler::TNode<BoolT> tmp132;
    compiler::TNode<BoolT> tmp133;
    ca_.Bind(&block11, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.Goto(&block9, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp134;
    compiler::TNode<JSArray> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<JSArray> tmp140;
    compiler::TNode<JSArray> tmp141;
    compiler::TNode<Map> tmp142;
    compiler::TNode<BoolT> tmp143;
    compiler::TNode<BoolT> tmp144;
    compiler::TNode<BoolT> tmp145;
    compiler::TNode<FixedArray> tmp146;
    compiler::TNode<BoolT> tmp147;
    compiler::TNode<BoolT> tmp148;
    compiler::TNode<BoolT> tmp149;
    ca_.Bind(&block10, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149);
    ca_.Goto(&block4, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp139);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<JSArray> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<JSArray> tmp156;
    compiler::TNode<JSArray> tmp157;
    compiler::TNode<Map> tmp158;
    compiler::TNode<BoolT> tmp159;
    compiler::TNode<BoolT> tmp160;
    compiler::TNode<BoolT> tmp161;
    compiler::TNode<FixedArray> tmp162;
    compiler::TNode<BoolT> tmp163;
    compiler::TNode<BoolT> tmp164;
    compiler::TNode<BoolT> tmp165;
    ca_.Bind(&block9, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 199);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2363);
    ca_.Goto(&block18, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp155, tmp157);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp166;
    compiler::TNode<JSArray> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Smi> tmp171;
    compiler::TNode<JSArray> tmp172;
    compiler::TNode<JSArray> tmp173;
    compiler::TNode<Map> tmp174;
    compiler::TNode<BoolT> tmp175;
    compiler::TNode<BoolT> tmp176;
    compiler::TNode<BoolT> tmp177;
    compiler::TNode<FixedArray> tmp178;
    compiler::TNode<BoolT> tmp179;
    compiler::TNode<BoolT> tmp180;
    compiler::TNode<BoolT> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<JSArray> tmp183;
    ca_.Bind(&block18, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 199);
    compiler::TNode<Smi> tmp184;
    USE(tmp184);
    tmp184 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp183}));
    compiler::TNode<BoolT> tmp185;
    USE(tmp185);
    tmp185 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp182}, compiler::TNode<Smi>{tmp184}));
    ca_.Branch(tmp185, &block16, &block17, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<JSArray> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<JSReceiver> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<JSArray> tmp192;
    compiler::TNode<JSArray> tmp193;
    compiler::TNode<Map> tmp194;
    compiler::TNode<BoolT> tmp195;
    compiler::TNode<BoolT> tmp196;
    compiler::TNode<BoolT> tmp197;
    compiler::TNode<FixedArray> tmp198;
    compiler::TNode<BoolT> tmp199;
    compiler::TNode<BoolT> tmp200;
    compiler::TNode<BoolT> tmp201;
    ca_.Bind(&block16, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201);
    ca_.Goto(&block4, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp191);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp202;
    compiler::TNode<JSArray> tmp203;
    compiler::TNode<Smi> tmp204;
    compiler::TNode<JSReceiver> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<Smi> tmp207;
    compiler::TNode<JSArray> tmp208;
    compiler::TNode<JSArray> tmp209;
    compiler::TNode<Map> tmp210;
    compiler::TNode<BoolT> tmp211;
    compiler::TNode<BoolT> tmp212;
    compiler::TNode<BoolT> tmp213;
    compiler::TNode<FixedArray> tmp214;
    compiler::TNode<BoolT> tmp215;
    compiler::TNode<BoolT> tmp216;
    compiler::TNode<BoolT> tmp217;
    ca_.Bind(&block17, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 202);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2380);
    ca_.Branch(tmp211, &block22, &block23, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp207, tmp202, tmp207);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp218;
    compiler::TNode<JSArray> tmp219;
    compiler::TNode<Smi> tmp220;
    compiler::TNode<JSReceiver> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Smi> tmp223;
    compiler::TNode<JSArray> tmp224;
    compiler::TNode<JSArray> tmp225;
    compiler::TNode<Map> tmp226;
    compiler::TNode<BoolT> tmp227;
    compiler::TNode<BoolT> tmp228;
    compiler::TNode<BoolT> tmp229;
    compiler::TNode<FixedArray> tmp230;
    compiler::TNode<BoolT> tmp231;
    compiler::TNode<BoolT> tmp232;
    compiler::TNode<BoolT> tmp233;
    compiler::TNode<Smi> tmp234;
    compiler::TNode<Context> tmp235;
    compiler::TNode<Smi> tmp236;
    ca_.Bind(&block22, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2381);
    compiler::TNode<Object> tmp237;
    USE(tmp237);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp237 = BaseBuiltinsFromDSLAssembler(state_).LoadElementNoHole16FixedDoubleArray(compiler::TNode<Context>{tmp235}, compiler::TNode<JSArray>{tmp225}, compiler::TNode<Smi>{tmp236}, &label0);
    ca_.Goto(&block25, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp225, tmp236, tmp237);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp225, tmp236);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp238;
    compiler::TNode<JSArray> tmp239;
    compiler::TNode<Smi> tmp240;
    compiler::TNode<JSReceiver> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<Smi> tmp243;
    compiler::TNode<JSArray> tmp244;
    compiler::TNode<JSArray> tmp245;
    compiler::TNode<Map> tmp246;
    compiler::TNode<BoolT> tmp247;
    compiler::TNode<BoolT> tmp248;
    compiler::TNode<BoolT> tmp249;
    compiler::TNode<FixedArray> tmp250;
    compiler::TNode<BoolT> tmp251;
    compiler::TNode<BoolT> tmp252;
    compiler::TNode<BoolT> tmp253;
    compiler::TNode<Smi> tmp254;
    compiler::TNode<Context> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<JSArray> tmp257;
    compiler::TNode<Smi> tmp258;
    ca_.Bind(&block26, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258);
    ca_.Goto(&block20, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp259;
    compiler::TNode<JSArray> tmp260;
    compiler::TNode<Smi> tmp261;
    compiler::TNode<JSReceiver> tmp262;
    compiler::TNode<Object> tmp263;
    compiler::TNode<Smi> tmp264;
    compiler::TNode<JSArray> tmp265;
    compiler::TNode<JSArray> tmp266;
    compiler::TNode<Map> tmp267;
    compiler::TNode<BoolT> tmp268;
    compiler::TNode<BoolT> tmp269;
    compiler::TNode<BoolT> tmp270;
    compiler::TNode<FixedArray> tmp271;
    compiler::TNode<BoolT> tmp272;
    compiler::TNode<BoolT> tmp273;
    compiler::TNode<BoolT> tmp274;
    compiler::TNode<Smi> tmp275;
    compiler::TNode<Context> tmp276;
    compiler::TNode<Smi> tmp277;
    compiler::TNode<JSArray> tmp278;
    compiler::TNode<Smi> tmp279;
    compiler::TNode<Object> tmp280;
    ca_.Bind(&block25, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280);
    ca_.Goto(&block21, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp280);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp281;
    compiler::TNode<JSArray> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<JSReceiver> tmp284;
    compiler::TNode<Object> tmp285;
    compiler::TNode<Smi> tmp286;
    compiler::TNode<JSArray> tmp287;
    compiler::TNode<JSArray> tmp288;
    compiler::TNode<Map> tmp289;
    compiler::TNode<BoolT> tmp290;
    compiler::TNode<BoolT> tmp291;
    compiler::TNode<BoolT> tmp292;
    compiler::TNode<FixedArray> tmp293;
    compiler::TNode<BoolT> tmp294;
    compiler::TNode<BoolT> tmp295;
    compiler::TNode<BoolT> tmp296;
    compiler::TNode<Smi> tmp297;
    compiler::TNode<Context> tmp298;
    compiler::TNode<Smi> tmp299;
    ca_.Bind(&block23, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2384);
    compiler::TNode<Object> tmp300;
    USE(tmp300);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp300 = BaseBuiltinsFromDSLAssembler(state_).LoadElementNoHole10FixedArray(compiler::TNode<Context>{tmp298}, compiler::TNode<JSArray>{tmp288}, compiler::TNode<Smi>{tmp299}, &label0);
    ca_.Goto(&block27, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp288, tmp299, tmp300);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block28, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp288, tmp299);
    }
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp301;
    compiler::TNode<JSArray> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<JSReceiver> tmp304;
    compiler::TNode<Object> tmp305;
    compiler::TNode<Smi> tmp306;
    compiler::TNode<JSArray> tmp307;
    compiler::TNode<JSArray> tmp308;
    compiler::TNode<Map> tmp309;
    compiler::TNode<BoolT> tmp310;
    compiler::TNode<BoolT> tmp311;
    compiler::TNode<BoolT> tmp312;
    compiler::TNode<FixedArray> tmp313;
    compiler::TNode<BoolT> tmp314;
    compiler::TNode<BoolT> tmp315;
    compiler::TNode<BoolT> tmp316;
    compiler::TNode<Smi> tmp317;
    compiler::TNode<Context> tmp318;
    compiler::TNode<Smi> tmp319;
    compiler::TNode<JSArray> tmp320;
    compiler::TNode<Smi> tmp321;
    ca_.Bind(&block28, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321);
    ca_.Goto(&block20, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp322;
    compiler::TNode<JSArray> tmp323;
    compiler::TNode<Smi> tmp324;
    compiler::TNode<JSReceiver> tmp325;
    compiler::TNode<Object> tmp326;
    compiler::TNode<Smi> tmp327;
    compiler::TNode<JSArray> tmp328;
    compiler::TNode<JSArray> tmp329;
    compiler::TNode<Map> tmp330;
    compiler::TNode<BoolT> tmp331;
    compiler::TNode<BoolT> tmp332;
    compiler::TNode<BoolT> tmp333;
    compiler::TNode<FixedArray> tmp334;
    compiler::TNode<BoolT> tmp335;
    compiler::TNode<BoolT> tmp336;
    compiler::TNode<BoolT> tmp337;
    compiler::TNode<Smi> tmp338;
    compiler::TNode<Context> tmp339;
    compiler::TNode<Smi> tmp340;
    compiler::TNode<JSArray> tmp341;
    compiler::TNode<Smi> tmp342;
    compiler::TNode<Object> tmp343;
    ca_.Bind(&block27, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343);
    ca_.Goto(&block21, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp343);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp344;
    compiler::TNode<JSArray> tmp345;
    compiler::TNode<Smi> tmp346;
    compiler::TNode<JSReceiver> tmp347;
    compiler::TNode<Object> tmp348;
    compiler::TNode<Smi> tmp349;
    compiler::TNode<JSArray> tmp350;
    compiler::TNode<JSArray> tmp351;
    compiler::TNode<Map> tmp352;
    compiler::TNode<BoolT> tmp353;
    compiler::TNode<BoolT> tmp354;
    compiler::TNode<BoolT> tmp355;
    compiler::TNode<FixedArray> tmp356;
    compiler::TNode<BoolT> tmp357;
    compiler::TNode<BoolT> tmp358;
    compiler::TNode<BoolT> tmp359;
    compiler::TNode<Smi> tmp360;
    compiler::TNode<Context> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<Object> tmp363;
    ca_.Bind(&block21, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 202);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 205);
    ca_.SetSourcePosition("../../v8/src/builtins/base.tq", 2363);
    ca_.Goto(&block29, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp363, tmp344, tmp347, tmp348, tmp363, tmp349, tmp351);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp364;
    compiler::TNode<JSArray> tmp365;
    compiler::TNode<Smi> tmp366;
    compiler::TNode<JSReceiver> tmp367;
    compiler::TNode<Object> tmp368;
    compiler::TNode<Smi> tmp369;
    compiler::TNode<JSArray> tmp370;
    compiler::TNode<JSArray> tmp371;
    compiler::TNode<Map> tmp372;
    compiler::TNode<BoolT> tmp373;
    compiler::TNode<BoolT> tmp374;
    compiler::TNode<BoolT> tmp375;
    compiler::TNode<FixedArray> tmp376;
    compiler::TNode<BoolT> tmp377;
    compiler::TNode<BoolT> tmp378;
    compiler::TNode<BoolT> tmp379;
    compiler::TNode<Object> tmp380;
    compiler::TNode<Context> tmp381;
    compiler::TNode<JSReceiver> tmp382;
    compiler::TNode<Object> tmp383;
    compiler::TNode<Object> tmp384;
    compiler::TNode<Smi> tmp385;
    compiler::TNode<JSArray> tmp386;
    ca_.Bind(&block29, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 205);
    compiler::TNode<Object> tmp387;
    USE(tmp387);
    tmp387 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp381}, compiler::TNode<JSReceiver>{tmp382}, compiler::TNode<Object>{tmp383}, compiler::TNode<Object>{tmp384}, compiler::TNode<Object>{tmp385}, compiler::TNode<Object>{tmp386}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 204);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 206);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 149);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 150);
    compiler::TNode<Smi> tmp388;
    USE(tmp388);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp388 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp387}, &label0);
    ca_.Goto(&block33, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp387, tmp369, tmp387, tmp364, tmp369, tmp387, tmp387, tmp387, tmp388);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp387, tmp369, tmp387, tmp364, tmp369, tmp387, tmp387, tmp387);
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp389;
    compiler::TNode<JSArray> tmp390;
    compiler::TNode<Smi> tmp391;
    compiler::TNode<JSReceiver> tmp392;
    compiler::TNode<Object> tmp393;
    compiler::TNode<Smi> tmp394;
    compiler::TNode<JSArray> tmp395;
    compiler::TNode<JSArray> tmp396;
    compiler::TNode<Map> tmp397;
    compiler::TNode<BoolT> tmp398;
    compiler::TNode<BoolT> tmp399;
    compiler::TNode<BoolT> tmp400;
    compiler::TNode<FixedArray> tmp401;
    compiler::TNode<BoolT> tmp402;
    compiler::TNode<BoolT> tmp403;
    compiler::TNode<BoolT> tmp404;
    compiler::TNode<Object> tmp405;
    compiler::TNode<Object> tmp406;
    compiler::TNode<Smi> tmp407;
    compiler::TNode<Object> tmp408;
    compiler::TNode<Context> tmp409;
    compiler::TNode<Smi> tmp410;
    compiler::TNode<Object> tmp411;
    compiler::TNode<Object> tmp412;
    compiler::TNode<Object> tmp413;
    ca_.Bind(&block34, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.Goto(&block32, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp414;
    compiler::TNode<JSArray> tmp415;
    compiler::TNode<Smi> tmp416;
    compiler::TNode<JSReceiver> tmp417;
    compiler::TNode<Object> tmp418;
    compiler::TNode<Smi> tmp419;
    compiler::TNode<JSArray> tmp420;
    compiler::TNode<JSArray> tmp421;
    compiler::TNode<Map> tmp422;
    compiler::TNode<BoolT> tmp423;
    compiler::TNode<BoolT> tmp424;
    compiler::TNode<BoolT> tmp425;
    compiler::TNode<FixedArray> tmp426;
    compiler::TNode<BoolT> tmp427;
    compiler::TNode<BoolT> tmp428;
    compiler::TNode<BoolT> tmp429;
    compiler::TNode<Object> tmp430;
    compiler::TNode<Object> tmp431;
    compiler::TNode<Smi> tmp432;
    compiler::TNode<Object> tmp433;
    compiler::TNode<Context> tmp434;
    compiler::TNode<Smi> tmp435;
    compiler::TNode<Object> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<Object> tmp438;
    compiler::TNode<Smi> tmp439;
    ca_.Bind(&block33, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 151);
    CodeStubAssembler(state_).StoreFixedArrayElement(compiler::TNode<FixedArray>{tmp426}, compiler::TNode<Smi>{tmp435}, compiler::TNode<Smi>{tmp439});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 150);
    ca_.Goto(&block31, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp440;
    compiler::TNode<JSArray> tmp441;
    compiler::TNode<Smi> tmp442;
    compiler::TNode<JSReceiver> tmp443;
    compiler::TNode<Object> tmp444;
    compiler::TNode<Smi> tmp445;
    compiler::TNode<JSArray> tmp446;
    compiler::TNode<JSArray> tmp447;
    compiler::TNode<Map> tmp448;
    compiler::TNode<BoolT> tmp449;
    compiler::TNode<BoolT> tmp450;
    compiler::TNode<BoolT> tmp451;
    compiler::TNode<FixedArray> tmp452;
    compiler::TNode<BoolT> tmp453;
    compiler::TNode<BoolT> tmp454;
    compiler::TNode<BoolT> tmp455;
    compiler::TNode<Object> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<Smi> tmp458;
    compiler::TNode<Object> tmp459;
    compiler::TNode<Context> tmp460;
    compiler::TNode<Smi> tmp461;
    compiler::TNode<Object> tmp462;
    compiler::TNode<Object> tmp463;
    ca_.Bind(&block32, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 153);
    compiler::TNode<HeapNumber> tmp464;
    USE(tmp464);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp464 = BaseBuiltinsFromDSLAssembler(state_).Cast10HeapNumber(compiler::TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp463)}, &label0);
    ca_.Goto(&block37, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, ca_.UncheckedCast<HeapObject>(tmp463), tmp464);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, ca_.UncheckedCast<HeapObject>(tmp463));
    }
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp465;
    compiler::TNode<JSArray> tmp466;
    compiler::TNode<Smi> tmp467;
    compiler::TNode<JSReceiver> tmp468;
    compiler::TNode<Object> tmp469;
    compiler::TNode<Smi> tmp470;
    compiler::TNode<JSArray> tmp471;
    compiler::TNode<JSArray> tmp472;
    compiler::TNode<Map> tmp473;
    compiler::TNode<BoolT> tmp474;
    compiler::TNode<BoolT> tmp475;
    compiler::TNode<BoolT> tmp476;
    compiler::TNode<FixedArray> tmp477;
    compiler::TNode<BoolT> tmp478;
    compiler::TNode<BoolT> tmp479;
    compiler::TNode<BoolT> tmp480;
    compiler::TNode<Object> tmp481;
    compiler::TNode<Object> tmp482;
    compiler::TNode<Smi> tmp483;
    compiler::TNode<Object> tmp484;
    compiler::TNode<Context> tmp485;
    compiler::TNode<Smi> tmp486;
    compiler::TNode<Object> tmp487;
    compiler::TNode<Object> tmp488;
    compiler::TNode<HeapObject> tmp489;
    ca_.Bind(&block38, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489);
    ca_.Goto(&block36, tmp465, tmp466, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp490;
    compiler::TNode<JSArray> tmp491;
    compiler::TNode<Smi> tmp492;
    compiler::TNode<JSReceiver> tmp493;
    compiler::TNode<Object> tmp494;
    compiler::TNode<Smi> tmp495;
    compiler::TNode<JSArray> tmp496;
    compiler::TNode<JSArray> tmp497;
    compiler::TNode<Map> tmp498;
    compiler::TNode<BoolT> tmp499;
    compiler::TNode<BoolT> tmp500;
    compiler::TNode<BoolT> tmp501;
    compiler::TNode<FixedArray> tmp502;
    compiler::TNode<BoolT> tmp503;
    compiler::TNode<BoolT> tmp504;
    compiler::TNode<BoolT> tmp505;
    compiler::TNode<Object> tmp506;
    compiler::TNode<Object> tmp507;
    compiler::TNode<Smi> tmp508;
    compiler::TNode<Object> tmp509;
    compiler::TNode<Context> tmp510;
    compiler::TNode<Smi> tmp511;
    compiler::TNode<Object> tmp512;
    compiler::TNode<Object> tmp513;
    compiler::TNode<HeapObject> tmp514;
    compiler::TNode<HeapNumber> tmp515;
    ca_.Bind(&block37, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 154);
    compiler::TNode<BoolT> tmp516;
    USE(tmp516);
    tmp516 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 155);
    CodeStubAssembler(state_).StoreFixedArrayElementSmi(compiler::TNode<FixedArray>{tmp502}, compiler::TNode<Smi>{tmp511}, compiler::TNode<Object>{tmp515});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 153);
    ca_.Goto(&block35, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp499, tmp500, tmp501, tmp502, tmp516, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp517;
    compiler::TNode<JSArray> tmp518;
    compiler::TNode<Smi> tmp519;
    compiler::TNode<JSReceiver> tmp520;
    compiler::TNode<Object> tmp521;
    compiler::TNode<Smi> tmp522;
    compiler::TNode<JSArray> tmp523;
    compiler::TNode<JSArray> tmp524;
    compiler::TNode<Map> tmp525;
    compiler::TNode<BoolT> tmp526;
    compiler::TNode<BoolT> tmp527;
    compiler::TNode<BoolT> tmp528;
    compiler::TNode<FixedArray> tmp529;
    compiler::TNode<BoolT> tmp530;
    compiler::TNode<BoolT> tmp531;
    compiler::TNode<BoolT> tmp532;
    compiler::TNode<Object> tmp533;
    compiler::TNode<Object> tmp534;
    compiler::TNode<Smi> tmp535;
    compiler::TNode<Object> tmp536;
    compiler::TNode<Context> tmp537;
    compiler::TNode<Smi> tmp538;
    compiler::TNode<Object> tmp539;
    compiler::TNode<Object> tmp540;
    ca_.Bind(&block36, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 157);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 158);
    compiler::TNode<BoolT> tmp541;
    USE(tmp541);
    tmp541 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 159);
    compiler::TNode<BoolT> tmp542;
    USE(tmp542);
    tmp542 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 160);
    CodeStubAssembler(state_).StoreFixedArrayElementSmi(compiler::TNode<FixedArray>{tmp529}, compiler::TNode<Smi>{tmp538}, compiler::TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp540)});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 153);
    ca_.Goto(&block35, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp541, tmp542, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp543;
    compiler::TNode<JSArray> tmp544;
    compiler::TNode<Smi> tmp545;
    compiler::TNode<JSReceiver> tmp546;
    compiler::TNode<Object> tmp547;
    compiler::TNode<Smi> tmp548;
    compiler::TNode<JSArray> tmp549;
    compiler::TNode<JSArray> tmp550;
    compiler::TNode<Map> tmp551;
    compiler::TNode<BoolT> tmp552;
    compiler::TNode<BoolT> tmp553;
    compiler::TNode<BoolT> tmp554;
    compiler::TNode<FixedArray> tmp555;
    compiler::TNode<BoolT> tmp556;
    compiler::TNode<BoolT> tmp557;
    compiler::TNode<BoolT> tmp558;
    compiler::TNode<Object> tmp559;
    compiler::TNode<Object> tmp560;
    compiler::TNode<Smi> tmp561;
    compiler::TNode<Object> tmp562;
    compiler::TNode<Context> tmp563;
    compiler::TNode<Smi> tmp564;
    compiler::TNode<Object> tmp565;
    compiler::TNode<Object> tmp566;
    ca_.Bind(&block35, &tmp543, &tmp544, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 150);
    ca_.Goto(&block31, tmp543, tmp544, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp567;
    compiler::TNode<JSArray> tmp568;
    compiler::TNode<Smi> tmp569;
    compiler::TNode<JSReceiver> tmp570;
    compiler::TNode<Object> tmp571;
    compiler::TNode<Smi> tmp572;
    compiler::TNode<JSArray> tmp573;
    compiler::TNode<JSArray> tmp574;
    compiler::TNode<Map> tmp575;
    compiler::TNode<BoolT> tmp576;
    compiler::TNode<BoolT> tmp577;
    compiler::TNode<BoolT> tmp578;
    compiler::TNode<FixedArray> tmp579;
    compiler::TNode<BoolT> tmp580;
    compiler::TNode<BoolT> tmp581;
    compiler::TNode<BoolT> tmp582;
    compiler::TNode<Object> tmp583;
    compiler::TNode<Object> tmp584;
    compiler::TNode<Smi> tmp585;
    compiler::TNode<Object> tmp586;
    compiler::TNode<Context> tmp587;
    compiler::TNode<Smi> tmp588;
    compiler::TNode<Object> tmp589;
    compiler::TNode<Object> tmp590;
    ca_.Bind(&block31, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 149);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 206);
    ca_.Goto(&block30, tmp567, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588, tmp589);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp591;
    compiler::TNode<JSArray> tmp592;
    compiler::TNode<Smi> tmp593;
    compiler::TNode<JSReceiver> tmp594;
    compiler::TNode<Object> tmp595;
    compiler::TNode<Smi> tmp596;
    compiler::TNode<JSArray> tmp597;
    compiler::TNode<JSArray> tmp598;
    compiler::TNode<Map> tmp599;
    compiler::TNode<BoolT> tmp600;
    compiler::TNode<BoolT> tmp601;
    compiler::TNode<BoolT> tmp602;
    compiler::TNode<FixedArray> tmp603;
    compiler::TNode<BoolT> tmp604;
    compiler::TNode<BoolT> tmp605;
    compiler::TNode<BoolT> tmp606;
    compiler::TNode<Object> tmp607;
    compiler::TNode<Object> tmp608;
    compiler::TNode<Smi> tmp609;
    compiler::TNode<Object> tmp610;
    compiler::TNode<Context> tmp611;
    compiler::TNode<Smi> tmp612;
    compiler::TNode<Object> tmp613;
    ca_.Bind(&block30, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 201);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 208);
    ca_.Goto(&block19, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp614;
    compiler::TNode<JSArray> tmp615;
    compiler::TNode<Smi> tmp616;
    compiler::TNode<JSReceiver> tmp617;
    compiler::TNode<Object> tmp618;
    compiler::TNode<Smi> tmp619;
    compiler::TNode<JSArray> tmp620;
    compiler::TNode<JSArray> tmp621;
    compiler::TNode<Map> tmp622;
    compiler::TNode<BoolT> tmp623;
    compiler::TNode<BoolT> tmp624;
    compiler::TNode<BoolT> tmp625;
    compiler::TNode<FixedArray> tmp626;
    compiler::TNode<BoolT> tmp627;
    compiler::TNode<BoolT> tmp628;
    compiler::TNode<BoolT> tmp629;
    ca_.Bind(&block20, &tmp614, &tmp615, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 93);
    compiler::TNode<BoolT> tmp630;
    USE(tmp630);
    tmp630 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 211);
    ca_.Goto(&block39, tmp614, tmp615, tmp616, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp630);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp631;
    compiler::TNode<JSArray> tmp632;
    compiler::TNode<Smi> tmp633;
    compiler::TNode<JSReceiver> tmp634;
    compiler::TNode<Object> tmp635;
    compiler::TNode<Smi> tmp636;
    compiler::TNode<JSArray> tmp637;
    compiler::TNode<JSArray> tmp638;
    compiler::TNode<Map> tmp639;
    compiler::TNode<BoolT> tmp640;
    compiler::TNode<BoolT> tmp641;
    compiler::TNode<BoolT> tmp642;
    compiler::TNode<FixedArray> tmp643;
    compiler::TNode<BoolT> tmp644;
    compiler::TNode<BoolT> tmp645;
    compiler::TNode<BoolT> tmp646;
    ca_.Bind(&block39, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 201);
    ca_.Goto(&block19, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644, tmp645, tmp646);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp647;
    compiler::TNode<JSArray> tmp648;
    compiler::TNode<Smi> tmp649;
    compiler::TNode<JSReceiver> tmp650;
    compiler::TNode<Object> tmp651;
    compiler::TNode<Smi> tmp652;
    compiler::TNode<JSArray> tmp653;
    compiler::TNode<JSArray> tmp654;
    compiler::TNode<Map> tmp655;
    compiler::TNode<BoolT> tmp656;
    compiler::TNode<BoolT> tmp657;
    compiler::TNode<BoolT> tmp658;
    compiler::TNode<FixedArray> tmp659;
    compiler::TNode<BoolT> tmp660;
    compiler::TNode<BoolT> tmp661;
    compiler::TNode<BoolT> tmp662;
    ca_.Bind(&block19, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 195);
    ca_.Goto(&block8, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658, tmp659, tmp660, tmp661, tmp662);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp663;
    compiler::TNode<JSArray> tmp664;
    compiler::TNode<Smi> tmp665;
    compiler::TNode<JSReceiver> tmp666;
    compiler::TNode<Object> tmp667;
    compiler::TNode<Smi> tmp668;
    compiler::TNode<JSArray> tmp669;
    compiler::TNode<JSArray> tmp670;
    compiler::TNode<Map> tmp671;
    compiler::TNode<BoolT> tmp672;
    compiler::TNode<BoolT> tmp673;
    compiler::TNode<BoolT> tmp674;
    compiler::TNode<FixedArray> tmp675;
    compiler::TNode<BoolT> tmp676;
    compiler::TNode<BoolT> tmp677;
    compiler::TNode<BoolT> tmp678;
    ca_.Bind(&block8, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678);
    compiler::TNode<Smi> tmp679;
    USE(tmp679);
    tmp679 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp680;
    USE(tmp680);
    tmp680 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp668}, compiler::TNode<Smi>{tmp679}));
    ca_.Goto(&block7, tmp663, tmp664, tmp665, tmp666, tmp667, tmp680, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp681;
    compiler::TNode<JSArray> tmp682;
    compiler::TNode<Smi> tmp683;
    compiler::TNode<JSReceiver> tmp684;
    compiler::TNode<Object> tmp685;
    compiler::TNode<Smi> tmp686;
    compiler::TNode<JSArray> tmp687;
    compiler::TNode<JSArray> tmp688;
    compiler::TNode<Map> tmp689;
    compiler::TNode<BoolT> tmp690;
    compiler::TNode<BoolT> tmp691;
    compiler::TNode<BoolT> tmp692;
    compiler::TNode<FixedArray> tmp693;
    compiler::TNode<BoolT> tmp694;
    compiler::TNode<BoolT> tmp695;
    compiler::TNode<BoolT> tmp696;
    ca_.Bind(&block6, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 215);
    ca_.Goto(&block3, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686, tmp687, tmp688, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp697;
    compiler::TNode<JSArray> tmp698;
    compiler::TNode<Smi> tmp699;
    compiler::TNode<JSReceiver> tmp700;
    compiler::TNode<Object> tmp701;
    compiler::TNode<Smi> tmp702;
    compiler::TNode<JSArray> tmp703;
    compiler::TNode<JSArray> tmp704;
    compiler::TNode<Map> tmp705;
    compiler::TNode<BoolT> tmp706;
    compiler::TNode<BoolT> tmp707;
    compiler::TNode<BoolT> tmp708;
    compiler::TNode<FixedArray> tmp709;
    compiler::TNode<BoolT> tmp710;
    compiler::TNode<BoolT> tmp711;
    compiler::TNode<BoolT> tmp712;
    compiler::TNode<Smi> tmp713;
    ca_.Bind(&block4, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707, &tmp708, &tmp709, &tmp710, &tmp711, &tmp712, &tmp713);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 217);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 97);
    compiler::TNode<IntPtrT> tmp714 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp714);
    compiler::TNode<Smi>tmp715 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp709, tmp714});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 98);
    compiler::TNode<BoolT> tmp716;
    USE(tmp716);
    tmp716 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThanOrEqual(compiler::TNode<Smi>{tmp713}, compiler::TNode<Smi>{tmp715}));
    ca_.Branch(tmp716, &block41, &block42, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704, tmp705, tmp706, tmp707, tmp708, tmp709, tmp710, tmp711, tmp712, tmp713, tmp713, tmp697, tmp713, tmp715);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp717;
    compiler::TNode<JSArray> tmp718;
    compiler::TNode<Smi> tmp719;
    compiler::TNode<JSReceiver> tmp720;
    compiler::TNode<Object> tmp721;
    compiler::TNode<Smi> tmp722;
    compiler::TNode<JSArray> tmp723;
    compiler::TNode<JSArray> tmp724;
    compiler::TNode<Map> tmp725;
    compiler::TNode<BoolT> tmp726;
    compiler::TNode<BoolT> tmp727;
    compiler::TNode<BoolT> tmp728;
    compiler::TNode<FixedArray> tmp729;
    compiler::TNode<BoolT> tmp730;
    compiler::TNode<BoolT> tmp731;
    compiler::TNode<BoolT> tmp732;
    compiler::TNode<Smi> tmp733;
    compiler::TNode<Smi> tmp734;
    compiler::TNode<Context> tmp735;
    compiler::TNode<Smi> tmp736;
    compiler::TNode<Smi> tmp737;
    ca_.Bind(&block42, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732, &tmp733, &tmp734, &tmp735, &tmp736, &tmp737);
    CodeStubAssembler(state_).FailAssert("Torque assert \'validLength <= length\' failed", "../../v8/src/builtins/array-map.tq", 98);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp738;
    compiler::TNode<JSArray> tmp739;
    compiler::TNode<Smi> tmp740;
    compiler::TNode<JSReceiver> tmp741;
    compiler::TNode<Object> tmp742;
    compiler::TNode<Smi> tmp743;
    compiler::TNode<JSArray> tmp744;
    compiler::TNode<JSArray> tmp745;
    compiler::TNode<Map> tmp746;
    compiler::TNode<BoolT> tmp747;
    compiler::TNode<BoolT> tmp748;
    compiler::TNode<BoolT> tmp749;
    compiler::TNode<FixedArray> tmp750;
    compiler::TNode<BoolT> tmp751;
    compiler::TNode<BoolT> tmp752;
    compiler::TNode<BoolT> tmp753;
    compiler::TNode<Smi> tmp754;
    compiler::TNode<Smi> tmp755;
    compiler::TNode<Context> tmp756;
    compiler::TNode<Smi> tmp757;
    compiler::TNode<Smi> tmp758;
    ca_.Bind(&block41, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757, &tmp758);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 99);
    compiler::TNode<Int32T> tmp759;
    USE(tmp759);
    tmp759 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 100);
    compiler::TNode<BoolT> tmp760;
    USE(tmp760);
    tmp760 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp751}));
    ca_.Branch(tmp760, &block43, &block44, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756, tmp757, tmp758, tmp759);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp761;
    compiler::TNode<JSArray> tmp762;
    compiler::TNode<Smi> tmp763;
    compiler::TNode<JSReceiver> tmp764;
    compiler::TNode<Object> tmp765;
    compiler::TNode<Smi> tmp766;
    compiler::TNode<JSArray> tmp767;
    compiler::TNode<JSArray> tmp768;
    compiler::TNode<Map> tmp769;
    compiler::TNode<BoolT> tmp770;
    compiler::TNode<BoolT> tmp771;
    compiler::TNode<BoolT> tmp772;
    compiler::TNode<FixedArray> tmp773;
    compiler::TNode<BoolT> tmp774;
    compiler::TNode<BoolT> tmp775;
    compiler::TNode<BoolT> tmp776;
    compiler::TNode<Smi> tmp777;
    compiler::TNode<Smi> tmp778;
    compiler::TNode<Context> tmp779;
    compiler::TNode<Smi> tmp780;
    compiler::TNode<Smi> tmp781;
    compiler::TNode<Int32T> tmp782;
    ca_.Bind(&block43, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781, &tmp782);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 101);
    ca_.Branch(tmp775, &block45, &block46, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775, tmp776, tmp777, tmp778, tmp779, tmp780, tmp781, tmp782);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp783;
    compiler::TNode<JSArray> tmp784;
    compiler::TNode<Smi> tmp785;
    compiler::TNode<JSReceiver> tmp786;
    compiler::TNode<Object> tmp787;
    compiler::TNode<Smi> tmp788;
    compiler::TNode<JSArray> tmp789;
    compiler::TNode<JSArray> tmp790;
    compiler::TNode<Map> tmp791;
    compiler::TNode<BoolT> tmp792;
    compiler::TNode<BoolT> tmp793;
    compiler::TNode<BoolT> tmp794;
    compiler::TNode<FixedArray> tmp795;
    compiler::TNode<BoolT> tmp796;
    compiler::TNode<BoolT> tmp797;
    compiler::TNode<BoolT> tmp798;
    compiler::TNode<Smi> tmp799;
    compiler::TNode<Smi> tmp800;
    compiler::TNode<Context> tmp801;
    compiler::TNode<Smi> tmp802;
    compiler::TNode<Smi> tmp803;
    compiler::TNode<Int32T> tmp804;
    ca_.Bind(&block45, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 102);
    compiler::TNode<Int32T> tmp805;
    USE(tmp805);
    tmp805 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 101);
    ca_.Goto(&block47, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp792, tmp793, tmp794, tmp795, tmp796, tmp797, tmp798, tmp799, tmp800, tmp801, tmp802, tmp803, tmp805);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp806;
    compiler::TNode<JSArray> tmp807;
    compiler::TNode<Smi> tmp808;
    compiler::TNode<JSReceiver> tmp809;
    compiler::TNode<Object> tmp810;
    compiler::TNode<Smi> tmp811;
    compiler::TNode<JSArray> tmp812;
    compiler::TNode<JSArray> tmp813;
    compiler::TNode<Map> tmp814;
    compiler::TNode<BoolT> tmp815;
    compiler::TNode<BoolT> tmp816;
    compiler::TNode<BoolT> tmp817;
    compiler::TNode<FixedArray> tmp818;
    compiler::TNode<BoolT> tmp819;
    compiler::TNode<BoolT> tmp820;
    compiler::TNode<BoolT> tmp821;
    compiler::TNode<Smi> tmp822;
    compiler::TNode<Smi> tmp823;
    compiler::TNode<Context> tmp824;
    compiler::TNode<Smi> tmp825;
    compiler::TNode<Smi> tmp826;
    compiler::TNode<Int32T> tmp827;
    ca_.Bind(&block46, &tmp806, &tmp807, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813, &tmp814, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 104);
    compiler::TNode<Int32T> tmp828;
    USE(tmp828);
    tmp828 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_ELEMENTS));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 101);
    ca_.Goto(&block47, tmp806, tmp807, tmp808, tmp809, tmp810, tmp811, tmp812, tmp813, tmp814, tmp815, tmp816, tmp817, tmp818, tmp819, tmp820, tmp821, tmp822, tmp823, tmp824, tmp825, tmp826, tmp828);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp829;
    compiler::TNode<JSArray> tmp830;
    compiler::TNode<Smi> tmp831;
    compiler::TNode<JSReceiver> tmp832;
    compiler::TNode<Object> tmp833;
    compiler::TNode<Smi> tmp834;
    compiler::TNode<JSArray> tmp835;
    compiler::TNode<JSArray> tmp836;
    compiler::TNode<Map> tmp837;
    compiler::TNode<BoolT> tmp838;
    compiler::TNode<BoolT> tmp839;
    compiler::TNode<BoolT> tmp840;
    compiler::TNode<FixedArray> tmp841;
    compiler::TNode<BoolT> tmp842;
    compiler::TNode<BoolT> tmp843;
    compiler::TNode<BoolT> tmp844;
    compiler::TNode<Smi> tmp845;
    compiler::TNode<Smi> tmp846;
    compiler::TNode<Context> tmp847;
    compiler::TNode<Smi> tmp848;
    compiler::TNode<Smi> tmp849;
    compiler::TNode<Int32T> tmp850;
    ca_.Bind(&block47, &tmp829, &tmp830, &tmp831, &tmp832, &tmp833, &tmp834, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842, &tmp843, &tmp844, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 100);
    ca_.Goto(&block44, tmp829, tmp830, tmp831, tmp832, tmp833, tmp834, tmp835, tmp836, tmp837, tmp838, tmp839, tmp840, tmp841, tmp842, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp851;
    compiler::TNode<JSArray> tmp852;
    compiler::TNode<Smi> tmp853;
    compiler::TNode<JSReceiver> tmp854;
    compiler::TNode<Object> tmp855;
    compiler::TNode<Smi> tmp856;
    compiler::TNode<JSArray> tmp857;
    compiler::TNode<JSArray> tmp858;
    compiler::TNode<Map> tmp859;
    compiler::TNode<BoolT> tmp860;
    compiler::TNode<BoolT> tmp861;
    compiler::TNode<BoolT> tmp862;
    compiler::TNode<FixedArray> tmp863;
    compiler::TNode<BoolT> tmp864;
    compiler::TNode<BoolT> tmp865;
    compiler::TNode<BoolT> tmp866;
    compiler::TNode<Smi> tmp867;
    compiler::TNode<Smi> tmp868;
    compiler::TNode<Context> tmp869;
    compiler::TNode<Smi> tmp870;
    compiler::TNode<Smi> tmp871;
    compiler::TNode<Int32T> tmp872;
    ca_.Bind(&block44, &tmp851, &tmp852, &tmp853, &tmp854, &tmp855, &tmp856, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862, &tmp863, &tmp864, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869, &tmp870, &tmp871, &tmp872);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 108);
    ca_.Branch(tmp866, &block48, &block50, tmp851, tmp852, tmp853, tmp854, tmp855, tmp856, tmp857, tmp858, tmp859, tmp860, tmp861, tmp862, tmp863, tmp864, tmp865, tmp866, tmp867, tmp868, tmp869, tmp870, tmp871, tmp872);
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp873;
    compiler::TNode<JSArray> tmp874;
    compiler::TNode<Smi> tmp875;
    compiler::TNode<JSReceiver> tmp876;
    compiler::TNode<Object> tmp877;
    compiler::TNode<Smi> tmp878;
    compiler::TNode<JSArray> tmp879;
    compiler::TNode<JSArray> tmp880;
    compiler::TNode<Map> tmp881;
    compiler::TNode<BoolT> tmp882;
    compiler::TNode<BoolT> tmp883;
    compiler::TNode<BoolT> tmp884;
    compiler::TNode<FixedArray> tmp885;
    compiler::TNode<BoolT> tmp886;
    compiler::TNode<BoolT> tmp887;
    compiler::TNode<BoolT> tmp888;
    compiler::TNode<Smi> tmp889;
    compiler::TNode<Smi> tmp890;
    compiler::TNode<Context> tmp891;
    compiler::TNode<Smi> tmp892;
    compiler::TNode<Smi> tmp893;
    compiler::TNode<Int32T> tmp894;
    ca_.Bind(&block50, &tmp873, &tmp874, &tmp875, &tmp876, &tmp877, &tmp878, &tmp879, &tmp880, &tmp881, &tmp882, &tmp883, &tmp884, &tmp885, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893, &tmp894);
    compiler::TNode<BoolT> tmp895;
    USE(tmp895);
    tmp895 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp892}, compiler::TNode<Smi>{tmp893}));
    ca_.Branch(tmp895, &block48, &block49, tmp873, tmp874, tmp875, tmp876, tmp877, tmp878, tmp879, tmp880, tmp881, tmp882, tmp883, tmp884, tmp885, tmp886, tmp887, tmp888, tmp889, tmp890, tmp891, tmp892, tmp893, tmp894);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp896;
    compiler::TNode<JSArray> tmp897;
    compiler::TNode<Smi> tmp898;
    compiler::TNode<JSReceiver> tmp899;
    compiler::TNode<Object> tmp900;
    compiler::TNode<Smi> tmp901;
    compiler::TNode<JSArray> tmp902;
    compiler::TNode<JSArray> tmp903;
    compiler::TNode<Map> tmp904;
    compiler::TNode<BoolT> tmp905;
    compiler::TNode<BoolT> tmp906;
    compiler::TNode<BoolT> tmp907;
    compiler::TNode<FixedArray> tmp908;
    compiler::TNode<BoolT> tmp909;
    compiler::TNode<BoolT> tmp910;
    compiler::TNode<BoolT> tmp911;
    compiler::TNode<Smi> tmp912;
    compiler::TNode<Smi> tmp913;
    compiler::TNode<Context> tmp914;
    compiler::TNode<Smi> tmp915;
    compiler::TNode<Smi> tmp916;
    compiler::TNode<Int32T> tmp917;
    ca_.Bind(&block48, &tmp896, &tmp897, &tmp898, &tmp899, &tmp900, &tmp901, &tmp902, &tmp903, &tmp904, &tmp905, &tmp906, &tmp907, &tmp908, &tmp909, &tmp910, &tmp911, &tmp912, &tmp913, &tmp914, &tmp915, &tmp916, &tmp917);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 114);
    compiler::TNode<Int32T> tmp918;
    USE(tmp918);
    tmp918 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FastHoleyElementsKind(compiler::TNode<Int32T>{tmp917}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 108);
    ca_.Goto(&block49, tmp896, tmp897, tmp898, tmp899, tmp900, tmp901, tmp902, tmp903, tmp904, tmp905, tmp906, tmp907, tmp908, tmp909, tmp910, tmp911, tmp912, tmp913, tmp914, tmp915, tmp916, tmp918);
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp919;
    compiler::TNode<JSArray> tmp920;
    compiler::TNode<Smi> tmp921;
    compiler::TNode<JSReceiver> tmp922;
    compiler::TNode<Object> tmp923;
    compiler::TNode<Smi> tmp924;
    compiler::TNode<JSArray> tmp925;
    compiler::TNode<JSArray> tmp926;
    compiler::TNode<Map> tmp927;
    compiler::TNode<BoolT> tmp928;
    compiler::TNode<BoolT> tmp929;
    compiler::TNode<BoolT> tmp930;
    compiler::TNode<FixedArray> tmp931;
    compiler::TNode<BoolT> tmp932;
    compiler::TNode<BoolT> tmp933;
    compiler::TNode<BoolT> tmp934;
    compiler::TNode<Smi> tmp935;
    compiler::TNode<Smi> tmp936;
    compiler::TNode<Context> tmp937;
    compiler::TNode<Smi> tmp938;
    compiler::TNode<Smi> tmp939;
    compiler::TNode<Int32T> tmp940;
    ca_.Bind(&block49, &tmp919, &tmp920, &tmp921, &tmp922, &tmp923, &tmp924, &tmp925, &tmp926, &tmp927, &tmp928, &tmp929, &tmp930, &tmp931, &tmp932, &tmp933, &tmp934, &tmp935, &tmp936, &tmp937, &tmp938, &tmp939, &tmp940);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 117);
    compiler::TNode<Context> tmp941;
    USE(tmp941);
    tmp941 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp937}));
    compiler::TNode<Map> tmp942;
    USE(tmp942);
    tmp942 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(compiler::TNode<Int32T>{tmp940}, compiler::TNode<Context>{tmp941}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 118);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 120);
    compiler::TNode<BoolT> tmp943;
    USE(tmp943);
    tmp943 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDoubleElementsKind(compiler::TNode<Int32T>{tmp940}));
    ca_.Branch(tmp943, &block51, &block52, tmp919, tmp920, tmp921, tmp922, tmp923, tmp924, tmp925, tmp926, tmp927, tmp928, tmp929, tmp930, tmp931, tmp932, tmp933, tmp934, tmp935, tmp936, tmp937, tmp938, tmp939, tmp940, tmp942, ca_.Uninitialized<JSArray>());
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp944;
    compiler::TNode<JSArray> tmp945;
    compiler::TNode<Smi> tmp946;
    compiler::TNode<JSReceiver> tmp947;
    compiler::TNode<Object> tmp948;
    compiler::TNode<Smi> tmp949;
    compiler::TNode<JSArray> tmp950;
    compiler::TNode<JSArray> tmp951;
    compiler::TNode<Map> tmp952;
    compiler::TNode<BoolT> tmp953;
    compiler::TNode<BoolT> tmp954;
    compiler::TNode<BoolT> tmp955;
    compiler::TNode<FixedArray> tmp956;
    compiler::TNode<BoolT> tmp957;
    compiler::TNode<BoolT> tmp958;
    compiler::TNode<BoolT> tmp959;
    compiler::TNode<Smi> tmp960;
    compiler::TNode<Smi> tmp961;
    compiler::TNode<Context> tmp962;
    compiler::TNode<Smi> tmp963;
    compiler::TNode<Smi> tmp964;
    compiler::TNode<Int32T> tmp965;
    compiler::TNode<Map> tmp966;
    compiler::TNode<JSArray> tmp967;
    ca_.Bind(&block51, &tmp944, &tmp945, &tmp946, &tmp947, &tmp948, &tmp949, &tmp950, &tmp951, &tmp952, &tmp953, &tmp954, &tmp955, &tmp956, &tmp957, &tmp958, &tmp959, &tmp960, &tmp961, &tmp962, &tmp963, &tmp964, &tmp965, &tmp966, &tmp967);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 125);
    compiler::TNode<IntPtrT> tmp968;
    USE(tmp968);
    tmp968 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp964}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 124);
    compiler::TNode<FixedDoubleArray> tmp969;
    USE(tmp969);
    tmp969 = ca_.UncheckedCast<FixedDoubleArray>(CodeStubAssembler(state_).AllocateFixedDoubleArrayWithHoles(compiler::TNode<IntPtrT>{tmp968}, CodeStubAssembler::kAllowLargeObjectAllocation));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 126);
    compiler::TNode<JSArray> tmp970;
    USE(tmp970);
    tmp970 = ca_.UncheckedCast<JSArray>(BaseBuiltinsFromDSLAssembler(state_).NewJSArray(compiler::TNode<Context>{tmp962}, compiler::TNode<Map>{tmp966}, compiler::TNode<FixedArrayBase>{tmp956}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 127);
    compiler::TNode<Smi> tmp971;
    USE(tmp971);
    tmp971 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block56, tmp944, tmp945, tmp946, tmp947, tmp948, tmp949, tmp950, tmp951, tmp952, tmp953, tmp954, tmp955, tmp956, tmp957, tmp958, tmp959, tmp960, tmp961, tmp962, tmp963, tmp964, tmp965, tmp966, tmp970, tmp969, tmp971);
  }

  if (block56.is_used()) {
    compiler::TNode<Context> tmp972;
    compiler::TNode<JSArray> tmp973;
    compiler::TNode<Smi> tmp974;
    compiler::TNode<JSReceiver> tmp975;
    compiler::TNode<Object> tmp976;
    compiler::TNode<Smi> tmp977;
    compiler::TNode<JSArray> tmp978;
    compiler::TNode<JSArray> tmp979;
    compiler::TNode<Map> tmp980;
    compiler::TNode<BoolT> tmp981;
    compiler::TNode<BoolT> tmp982;
    compiler::TNode<BoolT> tmp983;
    compiler::TNode<FixedArray> tmp984;
    compiler::TNode<BoolT> tmp985;
    compiler::TNode<BoolT> tmp986;
    compiler::TNode<BoolT> tmp987;
    compiler::TNode<Smi> tmp988;
    compiler::TNode<Smi> tmp989;
    compiler::TNode<Context> tmp990;
    compiler::TNode<Smi> tmp991;
    compiler::TNode<Smi> tmp992;
    compiler::TNode<Int32T> tmp993;
    compiler::TNode<Map> tmp994;
    compiler::TNode<JSArray> tmp995;
    compiler::TNode<FixedDoubleArray> tmp996;
    compiler::TNode<Smi> tmp997;
    ca_.Bind(&block56, &tmp972, &tmp973, &tmp974, &tmp975, &tmp976, &tmp977, &tmp978, &tmp979, &tmp980, &tmp981, &tmp982, &tmp983, &tmp984, &tmp985, &tmp986, &tmp987, &tmp988, &tmp989, &tmp990, &tmp991, &tmp992, &tmp993, &tmp994, &tmp995, &tmp996, &tmp997);
    compiler::TNode<BoolT> tmp998;
    USE(tmp998);
    tmp998 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp997}, compiler::TNode<Smi>{tmp991}));
    ca_.Branch(tmp998, &block54, &block55, tmp972, tmp973, tmp974, tmp975, tmp976, tmp977, tmp978, tmp979, tmp980, tmp981, tmp982, tmp983, tmp984, tmp985, tmp986, tmp987, tmp988, tmp989, tmp990, tmp991, tmp992, tmp993, tmp994, tmp995, tmp996, tmp997);
  }

  if (block54.is_used()) {
    compiler::TNode<Context> tmp999;
    compiler::TNode<JSArray> tmp1000;
    compiler::TNode<Smi> tmp1001;
    compiler::TNode<JSReceiver> tmp1002;
    compiler::TNode<Object> tmp1003;
    compiler::TNode<Smi> tmp1004;
    compiler::TNode<JSArray> tmp1005;
    compiler::TNode<JSArray> tmp1006;
    compiler::TNode<Map> tmp1007;
    compiler::TNode<BoolT> tmp1008;
    compiler::TNode<BoolT> tmp1009;
    compiler::TNode<BoolT> tmp1010;
    compiler::TNode<FixedArray> tmp1011;
    compiler::TNode<BoolT> tmp1012;
    compiler::TNode<BoolT> tmp1013;
    compiler::TNode<BoolT> tmp1014;
    compiler::TNode<Smi> tmp1015;
    compiler::TNode<Smi> tmp1016;
    compiler::TNode<Context> tmp1017;
    compiler::TNode<Smi> tmp1018;
    compiler::TNode<Smi> tmp1019;
    compiler::TNode<Int32T> tmp1020;
    compiler::TNode<Map> tmp1021;
    compiler::TNode<JSArray> tmp1022;
    compiler::TNode<FixedDoubleArray> tmp1023;
    compiler::TNode<Smi> tmp1024;
    ca_.Bind(&block54, &tmp999, &tmp1000, &tmp1001, &tmp1002, &tmp1003, &tmp1004, &tmp1005, &tmp1006, &tmp1007, &tmp1008, &tmp1009, &tmp1010, &tmp1011, &tmp1012, &tmp1013, &tmp1014, &tmp1015, &tmp1016, &tmp1017, &tmp1018, &tmp1019, &tmp1020, &tmp1021, &tmp1022, &tmp1023, &tmp1024);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 128);
    compiler::TNode<Object> tmp1025;
    USE(tmp1025);
    tmp1025 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp1011}, compiler::TNode<Smi>{tmp1024}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 129);
    compiler::TNode<Number> tmp1026;
    USE(tmp1026);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1026 = BaseBuiltinsFromDSLAssembler(state_).Cast20UT5ATSmi10HeapNumber(compiler::TNode<Object>{tmp1025}, &label0);
    ca_.Goto(&block60, tmp999, tmp1000, tmp1001, tmp1002, tmp1003, tmp1004, tmp1005, tmp1006, tmp1007, tmp1008, tmp1009, tmp1010, tmp1011, tmp1012, tmp1013, tmp1014, tmp1015, tmp1016, tmp1017, tmp1018, tmp1019, tmp1020, tmp1021, tmp1022, tmp1023, tmp1024, tmp1025, tmp1025, tmp1026);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block61, tmp999, tmp1000, tmp1001, tmp1002, tmp1003, tmp1004, tmp1005, tmp1006, tmp1007, tmp1008, tmp1009, tmp1010, tmp1011, tmp1012, tmp1013, tmp1014, tmp1015, tmp1016, tmp1017, tmp1018, tmp1019, tmp1020, tmp1021, tmp1022, tmp1023, tmp1024, tmp1025, tmp1025);
    }
  }

  if (block61.is_used()) {
    compiler::TNode<Context> tmp1027;
    compiler::TNode<JSArray> tmp1028;
    compiler::TNode<Smi> tmp1029;
    compiler::TNode<JSReceiver> tmp1030;
    compiler::TNode<Object> tmp1031;
    compiler::TNode<Smi> tmp1032;
    compiler::TNode<JSArray> tmp1033;
    compiler::TNode<JSArray> tmp1034;
    compiler::TNode<Map> tmp1035;
    compiler::TNode<BoolT> tmp1036;
    compiler::TNode<BoolT> tmp1037;
    compiler::TNode<BoolT> tmp1038;
    compiler::TNode<FixedArray> tmp1039;
    compiler::TNode<BoolT> tmp1040;
    compiler::TNode<BoolT> tmp1041;
    compiler::TNode<BoolT> tmp1042;
    compiler::TNode<Smi> tmp1043;
    compiler::TNode<Smi> tmp1044;
    compiler::TNode<Context> tmp1045;
    compiler::TNode<Smi> tmp1046;
    compiler::TNode<Smi> tmp1047;
    compiler::TNode<Int32T> tmp1048;
    compiler::TNode<Map> tmp1049;
    compiler::TNode<JSArray> tmp1050;
    compiler::TNode<FixedDoubleArray> tmp1051;
    compiler::TNode<Smi> tmp1052;
    compiler::TNode<Object> tmp1053;
    compiler::TNode<Object> tmp1054;
    ca_.Bind(&block61, &tmp1027, &tmp1028, &tmp1029, &tmp1030, &tmp1031, &tmp1032, &tmp1033, &tmp1034, &tmp1035, &tmp1036, &tmp1037, &tmp1038, &tmp1039, &tmp1040, &tmp1041, &tmp1042, &tmp1043, &tmp1044, &tmp1045, &tmp1046, &tmp1047, &tmp1048, &tmp1049, &tmp1050, &tmp1051, &tmp1052, &tmp1053, &tmp1054);
    ca_.Goto(&block59, tmp1027, tmp1028, tmp1029, tmp1030, tmp1031, tmp1032, tmp1033, tmp1034, tmp1035, tmp1036, tmp1037, tmp1038, tmp1039, tmp1040, tmp1041, tmp1042, tmp1043, tmp1044, tmp1045, tmp1046, tmp1047, tmp1048, tmp1049, tmp1050, tmp1051, tmp1052, tmp1053);
  }

  if (block60.is_used()) {
    compiler::TNode<Context> tmp1055;
    compiler::TNode<JSArray> tmp1056;
    compiler::TNode<Smi> tmp1057;
    compiler::TNode<JSReceiver> tmp1058;
    compiler::TNode<Object> tmp1059;
    compiler::TNode<Smi> tmp1060;
    compiler::TNode<JSArray> tmp1061;
    compiler::TNode<JSArray> tmp1062;
    compiler::TNode<Map> tmp1063;
    compiler::TNode<BoolT> tmp1064;
    compiler::TNode<BoolT> tmp1065;
    compiler::TNode<BoolT> tmp1066;
    compiler::TNode<FixedArray> tmp1067;
    compiler::TNode<BoolT> tmp1068;
    compiler::TNode<BoolT> tmp1069;
    compiler::TNode<BoolT> tmp1070;
    compiler::TNode<Smi> tmp1071;
    compiler::TNode<Smi> tmp1072;
    compiler::TNode<Context> tmp1073;
    compiler::TNode<Smi> tmp1074;
    compiler::TNode<Smi> tmp1075;
    compiler::TNode<Int32T> tmp1076;
    compiler::TNode<Map> tmp1077;
    compiler::TNode<JSArray> tmp1078;
    compiler::TNode<FixedDoubleArray> tmp1079;
    compiler::TNode<Smi> tmp1080;
    compiler::TNode<Object> tmp1081;
    compiler::TNode<Object> tmp1082;
    compiler::TNode<Number> tmp1083;
    ca_.Bind(&block60, &tmp1055, &tmp1056, &tmp1057, &tmp1058, &tmp1059, &tmp1060, &tmp1061, &tmp1062, &tmp1063, &tmp1064, &tmp1065, &tmp1066, &tmp1067, &tmp1068, &tmp1069, &tmp1070, &tmp1071, &tmp1072, &tmp1073, &tmp1074, &tmp1075, &tmp1076, &tmp1077, &tmp1078, &tmp1079, &tmp1080, &tmp1081, &tmp1082, &tmp1083);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 130);
    compiler::TNode<Float64T> tmp1084;
    USE(tmp1084);
    tmp1084 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp1083}));
    CodeStubAssembler(state_).StoreFixedDoubleArrayElementSmi(compiler::TNode<FixedDoubleArray>{tmp1079}, compiler::TNode<Smi>{tmp1080}, compiler::TNode<Float64T>{tmp1084});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 129);
    ca_.Goto(&block58, tmp1055, tmp1056, tmp1057, tmp1058, tmp1059, tmp1060, tmp1061, tmp1062, tmp1063, tmp1064, tmp1065, tmp1066, tmp1067, tmp1068, tmp1069, tmp1070, tmp1071, tmp1072, tmp1073, tmp1074, tmp1075, tmp1076, tmp1077, tmp1078, tmp1079, tmp1080, tmp1081);
  }

  if (block59.is_used()) {
    compiler::TNode<Context> tmp1085;
    compiler::TNode<JSArray> tmp1086;
    compiler::TNode<Smi> tmp1087;
    compiler::TNode<JSReceiver> tmp1088;
    compiler::TNode<Object> tmp1089;
    compiler::TNode<Smi> tmp1090;
    compiler::TNode<JSArray> tmp1091;
    compiler::TNode<JSArray> tmp1092;
    compiler::TNode<Map> tmp1093;
    compiler::TNode<BoolT> tmp1094;
    compiler::TNode<BoolT> tmp1095;
    compiler::TNode<BoolT> tmp1096;
    compiler::TNode<FixedArray> tmp1097;
    compiler::TNode<BoolT> tmp1098;
    compiler::TNode<BoolT> tmp1099;
    compiler::TNode<BoolT> tmp1100;
    compiler::TNode<Smi> tmp1101;
    compiler::TNode<Smi> tmp1102;
    compiler::TNode<Context> tmp1103;
    compiler::TNode<Smi> tmp1104;
    compiler::TNode<Smi> tmp1105;
    compiler::TNode<Int32T> tmp1106;
    compiler::TNode<Map> tmp1107;
    compiler::TNode<JSArray> tmp1108;
    compiler::TNode<FixedDoubleArray> tmp1109;
    compiler::TNode<Smi> tmp1110;
    compiler::TNode<Object> tmp1111;
    ca_.Bind(&block59, &tmp1085, &tmp1086, &tmp1087, &tmp1088, &tmp1089, &tmp1090, &tmp1091, &tmp1092, &tmp1093, &tmp1094, &tmp1095, &tmp1096, &tmp1097, &tmp1098, &tmp1099, &tmp1100, &tmp1101, &tmp1102, &tmp1103, &tmp1104, &tmp1105, &tmp1106, &tmp1107, &tmp1108, &tmp1109, &tmp1110, &tmp1111);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 132);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 133);
    compiler::TNode<Oddball> tmp1112;
    USE(tmp1112);
    tmp1112 = BaseBuiltinsFromDSLAssembler(state_).Hole();
    compiler::TNode<BoolT> tmp1113;
    USE(tmp1113);
    tmp1113 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp1111)}, compiler::TNode<HeapObject>{tmp1112}));
    ca_.Branch(tmp1113, &block62, &block63, tmp1085, tmp1086, tmp1087, tmp1088, tmp1089, tmp1090, tmp1091, tmp1092, tmp1093, tmp1094, tmp1095, tmp1096, tmp1097, tmp1098, tmp1099, tmp1100, tmp1101, tmp1102, tmp1103, tmp1104, tmp1105, tmp1106, tmp1107, tmp1108, tmp1109, tmp1110, tmp1111, ca_.UncheckedCast<HeapObject>(tmp1111));
  }

  if (block63.is_used()) {
    compiler::TNode<Context> tmp1114;
    compiler::TNode<JSArray> tmp1115;
    compiler::TNode<Smi> tmp1116;
    compiler::TNode<JSReceiver> tmp1117;
    compiler::TNode<Object> tmp1118;
    compiler::TNode<Smi> tmp1119;
    compiler::TNode<JSArray> tmp1120;
    compiler::TNode<JSArray> tmp1121;
    compiler::TNode<Map> tmp1122;
    compiler::TNode<BoolT> tmp1123;
    compiler::TNode<BoolT> tmp1124;
    compiler::TNode<BoolT> tmp1125;
    compiler::TNode<FixedArray> tmp1126;
    compiler::TNode<BoolT> tmp1127;
    compiler::TNode<BoolT> tmp1128;
    compiler::TNode<BoolT> tmp1129;
    compiler::TNode<Smi> tmp1130;
    compiler::TNode<Smi> tmp1131;
    compiler::TNode<Context> tmp1132;
    compiler::TNode<Smi> tmp1133;
    compiler::TNode<Smi> tmp1134;
    compiler::TNode<Int32T> tmp1135;
    compiler::TNode<Map> tmp1136;
    compiler::TNode<JSArray> tmp1137;
    compiler::TNode<FixedDoubleArray> tmp1138;
    compiler::TNode<Smi> tmp1139;
    compiler::TNode<Object> tmp1140;
    compiler::TNode<HeapObject> tmp1141;
    ca_.Bind(&block63, &tmp1114, &tmp1115, &tmp1116, &tmp1117, &tmp1118, &tmp1119, &tmp1120, &tmp1121, &tmp1122, &tmp1123, &tmp1124, &tmp1125, &tmp1126, &tmp1127, &tmp1128, &tmp1129, &tmp1130, &tmp1131, &tmp1132, &tmp1133, &tmp1134, &tmp1135, &tmp1136, &tmp1137, &tmp1138, &tmp1139, &tmp1140, &tmp1141);
    CodeStubAssembler(state_).FailAssert("Torque assert \'h == Hole\' failed", "../../v8/src/builtins/array-map.tq", 133);
  }

  if (block62.is_used()) {
    compiler::TNode<Context> tmp1142;
    compiler::TNode<JSArray> tmp1143;
    compiler::TNode<Smi> tmp1144;
    compiler::TNode<JSReceiver> tmp1145;
    compiler::TNode<Object> tmp1146;
    compiler::TNode<Smi> tmp1147;
    compiler::TNode<JSArray> tmp1148;
    compiler::TNode<JSArray> tmp1149;
    compiler::TNode<Map> tmp1150;
    compiler::TNode<BoolT> tmp1151;
    compiler::TNode<BoolT> tmp1152;
    compiler::TNode<BoolT> tmp1153;
    compiler::TNode<FixedArray> tmp1154;
    compiler::TNode<BoolT> tmp1155;
    compiler::TNode<BoolT> tmp1156;
    compiler::TNode<BoolT> tmp1157;
    compiler::TNode<Smi> tmp1158;
    compiler::TNode<Smi> tmp1159;
    compiler::TNode<Context> tmp1160;
    compiler::TNode<Smi> tmp1161;
    compiler::TNode<Smi> tmp1162;
    compiler::TNode<Int32T> tmp1163;
    compiler::TNode<Map> tmp1164;
    compiler::TNode<JSArray> tmp1165;
    compiler::TNode<FixedDoubleArray> tmp1166;
    compiler::TNode<Smi> tmp1167;
    compiler::TNode<Object> tmp1168;
    compiler::TNode<HeapObject> tmp1169;
    ca_.Bind(&block62, &tmp1142, &tmp1143, &tmp1144, &tmp1145, &tmp1146, &tmp1147, &tmp1148, &tmp1149, &tmp1150, &tmp1151, &tmp1152, &tmp1153, &tmp1154, &tmp1155, &tmp1156, &tmp1157, &tmp1158, &tmp1159, &tmp1160, &tmp1161, &tmp1162, &tmp1163, &tmp1164, &tmp1165, &tmp1166, &tmp1167, &tmp1168, &tmp1169);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 129);
    ca_.Goto(&block58, tmp1142, tmp1143, tmp1144, tmp1145, tmp1146, tmp1147, tmp1148, tmp1149, tmp1150, tmp1151, tmp1152, tmp1153, tmp1154, tmp1155, tmp1156, tmp1157, tmp1158, tmp1159, tmp1160, tmp1161, tmp1162, tmp1163, tmp1164, tmp1165, tmp1166, tmp1167, tmp1168);
  }

  if (block58.is_used()) {
    compiler::TNode<Context> tmp1170;
    compiler::TNode<JSArray> tmp1171;
    compiler::TNode<Smi> tmp1172;
    compiler::TNode<JSReceiver> tmp1173;
    compiler::TNode<Object> tmp1174;
    compiler::TNode<Smi> tmp1175;
    compiler::TNode<JSArray> tmp1176;
    compiler::TNode<JSArray> tmp1177;
    compiler::TNode<Map> tmp1178;
    compiler::TNode<BoolT> tmp1179;
    compiler::TNode<BoolT> tmp1180;
    compiler::TNode<BoolT> tmp1181;
    compiler::TNode<FixedArray> tmp1182;
    compiler::TNode<BoolT> tmp1183;
    compiler::TNode<BoolT> tmp1184;
    compiler::TNode<BoolT> tmp1185;
    compiler::TNode<Smi> tmp1186;
    compiler::TNode<Smi> tmp1187;
    compiler::TNode<Context> tmp1188;
    compiler::TNode<Smi> tmp1189;
    compiler::TNode<Smi> tmp1190;
    compiler::TNode<Int32T> tmp1191;
    compiler::TNode<Map> tmp1192;
    compiler::TNode<JSArray> tmp1193;
    compiler::TNode<FixedDoubleArray> tmp1194;
    compiler::TNode<Smi> tmp1195;
    compiler::TNode<Object> tmp1196;
    ca_.Bind(&block58, &tmp1170, &tmp1171, &tmp1172, &tmp1173, &tmp1174, &tmp1175, &tmp1176, &tmp1177, &tmp1178, &tmp1179, &tmp1180, &tmp1181, &tmp1182, &tmp1183, &tmp1184, &tmp1185, &tmp1186, &tmp1187, &tmp1188, &tmp1189, &tmp1190, &tmp1191, &tmp1192, &tmp1193, &tmp1194, &tmp1195, &tmp1196);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 128);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 127);
    ca_.Goto(&block57, tmp1170, tmp1171, tmp1172, tmp1173, tmp1174, tmp1175, tmp1176, tmp1177, tmp1178, tmp1179, tmp1180, tmp1181, tmp1182, tmp1183, tmp1184, tmp1185, tmp1186, tmp1187, tmp1188, tmp1189, tmp1190, tmp1191, tmp1192, tmp1193, tmp1194, tmp1195);
  }

  if (block57.is_used()) {
    compiler::TNode<Context> tmp1197;
    compiler::TNode<JSArray> tmp1198;
    compiler::TNode<Smi> tmp1199;
    compiler::TNode<JSReceiver> tmp1200;
    compiler::TNode<Object> tmp1201;
    compiler::TNode<Smi> tmp1202;
    compiler::TNode<JSArray> tmp1203;
    compiler::TNode<JSArray> tmp1204;
    compiler::TNode<Map> tmp1205;
    compiler::TNode<BoolT> tmp1206;
    compiler::TNode<BoolT> tmp1207;
    compiler::TNode<BoolT> tmp1208;
    compiler::TNode<FixedArray> tmp1209;
    compiler::TNode<BoolT> tmp1210;
    compiler::TNode<BoolT> tmp1211;
    compiler::TNode<BoolT> tmp1212;
    compiler::TNode<Smi> tmp1213;
    compiler::TNode<Smi> tmp1214;
    compiler::TNode<Context> tmp1215;
    compiler::TNode<Smi> tmp1216;
    compiler::TNode<Smi> tmp1217;
    compiler::TNode<Int32T> tmp1218;
    compiler::TNode<Map> tmp1219;
    compiler::TNode<JSArray> tmp1220;
    compiler::TNode<FixedDoubleArray> tmp1221;
    compiler::TNode<Smi> tmp1222;
    ca_.Bind(&block57, &tmp1197, &tmp1198, &tmp1199, &tmp1200, &tmp1201, &tmp1202, &tmp1203, &tmp1204, &tmp1205, &tmp1206, &tmp1207, &tmp1208, &tmp1209, &tmp1210, &tmp1211, &tmp1212, &tmp1213, &tmp1214, &tmp1215, &tmp1216, &tmp1217, &tmp1218, &tmp1219, &tmp1220, &tmp1221, &tmp1222);
    compiler::TNode<Smi> tmp1223;
    USE(tmp1223);
    tmp1223 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp1224;
    USE(tmp1224);
    tmp1224 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1222}, compiler::TNode<Smi>{tmp1223}));
    ca_.Goto(&block56, tmp1197, tmp1198, tmp1199, tmp1200, tmp1201, tmp1202, tmp1203, tmp1204, tmp1205, tmp1206, tmp1207, tmp1208, tmp1209, tmp1210, tmp1211, tmp1212, tmp1213, tmp1214, tmp1215, tmp1216, tmp1217, tmp1218, tmp1219, tmp1220, tmp1221, tmp1224);
  }

  if (block55.is_used()) {
    compiler::TNode<Context> tmp1225;
    compiler::TNode<JSArray> tmp1226;
    compiler::TNode<Smi> tmp1227;
    compiler::TNode<JSReceiver> tmp1228;
    compiler::TNode<Object> tmp1229;
    compiler::TNode<Smi> tmp1230;
    compiler::TNode<JSArray> tmp1231;
    compiler::TNode<JSArray> tmp1232;
    compiler::TNode<Map> tmp1233;
    compiler::TNode<BoolT> tmp1234;
    compiler::TNode<BoolT> tmp1235;
    compiler::TNode<BoolT> tmp1236;
    compiler::TNode<FixedArray> tmp1237;
    compiler::TNode<BoolT> tmp1238;
    compiler::TNode<BoolT> tmp1239;
    compiler::TNode<BoolT> tmp1240;
    compiler::TNode<Smi> tmp1241;
    compiler::TNode<Smi> tmp1242;
    compiler::TNode<Context> tmp1243;
    compiler::TNode<Smi> tmp1244;
    compiler::TNode<Smi> tmp1245;
    compiler::TNode<Int32T> tmp1246;
    compiler::TNode<Map> tmp1247;
    compiler::TNode<JSArray> tmp1248;
    compiler::TNode<FixedDoubleArray> tmp1249;
    compiler::TNode<Smi> tmp1250;
    ca_.Bind(&block55, &tmp1225, &tmp1226, &tmp1227, &tmp1228, &tmp1229, &tmp1230, &tmp1231, &tmp1232, &tmp1233, &tmp1234, &tmp1235, &tmp1236, &tmp1237, &tmp1238, &tmp1239, &tmp1240, &tmp1241, &tmp1242, &tmp1243, &tmp1244, &tmp1245, &tmp1246, &tmp1247, &tmp1248, &tmp1249, &tmp1250);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 137);
    compiler::TNode<IntPtrT> tmp1251 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp1251);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1248, tmp1251}, tmp1249);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 120);
    ca_.Goto(&block53, tmp1225, tmp1226, tmp1227, tmp1228, tmp1229, tmp1230, tmp1231, tmp1232, tmp1233, tmp1234, tmp1235, tmp1236, tmp1237, tmp1238, tmp1239, tmp1240, tmp1241, tmp1242, tmp1243, tmp1244, tmp1245, tmp1246, tmp1247, tmp1248);
  }

  if (block52.is_used()) {
    compiler::TNode<Context> tmp1252;
    compiler::TNode<JSArray> tmp1253;
    compiler::TNode<Smi> tmp1254;
    compiler::TNode<JSReceiver> tmp1255;
    compiler::TNode<Object> tmp1256;
    compiler::TNode<Smi> tmp1257;
    compiler::TNode<JSArray> tmp1258;
    compiler::TNode<JSArray> tmp1259;
    compiler::TNode<Map> tmp1260;
    compiler::TNode<BoolT> tmp1261;
    compiler::TNode<BoolT> tmp1262;
    compiler::TNode<BoolT> tmp1263;
    compiler::TNode<FixedArray> tmp1264;
    compiler::TNode<BoolT> tmp1265;
    compiler::TNode<BoolT> tmp1266;
    compiler::TNode<BoolT> tmp1267;
    compiler::TNode<Smi> tmp1268;
    compiler::TNode<Smi> tmp1269;
    compiler::TNode<Context> tmp1270;
    compiler::TNode<Smi> tmp1271;
    compiler::TNode<Smi> tmp1272;
    compiler::TNode<Int32T> tmp1273;
    compiler::TNode<Map> tmp1274;
    compiler::TNode<JSArray> tmp1275;
    ca_.Bind(&block52, &tmp1252, &tmp1253, &tmp1254, &tmp1255, &tmp1256, &tmp1257, &tmp1258, &tmp1259, &tmp1260, &tmp1261, &tmp1262, &tmp1263, &tmp1264, &tmp1265, &tmp1266, &tmp1267, &tmp1268, &tmp1269, &tmp1270, &tmp1271, &tmp1272, &tmp1273, &tmp1274, &tmp1275);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 140);
    compiler::TNode<JSArray> tmp1276;
    USE(tmp1276);
    tmp1276 = ca_.UncheckedCast<JSArray>(BaseBuiltinsFromDSLAssembler(state_).NewJSArray(compiler::TNode<Context>{tmp1270}, compiler::TNode<Map>{tmp1274}, compiler::TNode<FixedArrayBase>{tmp1264}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 120);
    ca_.Goto(&block53, tmp1252, tmp1253, tmp1254, tmp1255, tmp1256, tmp1257, tmp1258, tmp1259, tmp1260, tmp1261, tmp1262, tmp1263, tmp1264, tmp1265, tmp1266, tmp1267, tmp1268, tmp1269, tmp1270, tmp1271, tmp1272, tmp1273, tmp1274, tmp1276);
  }

  if (block53.is_used()) {
    compiler::TNode<Context> tmp1277;
    compiler::TNode<JSArray> tmp1278;
    compiler::TNode<Smi> tmp1279;
    compiler::TNode<JSReceiver> tmp1280;
    compiler::TNode<Object> tmp1281;
    compiler::TNode<Smi> tmp1282;
    compiler::TNode<JSArray> tmp1283;
    compiler::TNode<JSArray> tmp1284;
    compiler::TNode<Map> tmp1285;
    compiler::TNode<BoolT> tmp1286;
    compiler::TNode<BoolT> tmp1287;
    compiler::TNode<BoolT> tmp1288;
    compiler::TNode<FixedArray> tmp1289;
    compiler::TNode<BoolT> tmp1290;
    compiler::TNode<BoolT> tmp1291;
    compiler::TNode<BoolT> tmp1292;
    compiler::TNode<Smi> tmp1293;
    compiler::TNode<Smi> tmp1294;
    compiler::TNode<Context> tmp1295;
    compiler::TNode<Smi> tmp1296;
    compiler::TNode<Smi> tmp1297;
    compiler::TNode<Int32T> tmp1298;
    compiler::TNode<Map> tmp1299;
    compiler::TNode<JSArray> tmp1300;
    ca_.Bind(&block53, &tmp1277, &tmp1278, &tmp1279, &tmp1280, &tmp1281, &tmp1282, &tmp1283, &tmp1284, &tmp1285, &tmp1286, &tmp1287, &tmp1288, &tmp1289, &tmp1290, &tmp1291, &tmp1292, &tmp1293, &tmp1294, &tmp1295, &tmp1296, &tmp1297, &tmp1298, &tmp1299, &tmp1300);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 144);
    compiler::TNode<FixedArray> tmp1301;
    USE(tmp1301);
    tmp1301 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 145);
    ca_.Goto(&block40, tmp1277, tmp1278, tmp1279, tmp1280, tmp1281, tmp1282, tmp1283, tmp1284, tmp1285, tmp1286, tmp1287, tmp1288, tmp1301, tmp1290, tmp1291, tmp1292, tmp1293, tmp1294, tmp1295, tmp1296, tmp1300);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp1302;
    compiler::TNode<JSArray> tmp1303;
    compiler::TNode<Smi> tmp1304;
    compiler::TNode<JSReceiver> tmp1305;
    compiler::TNode<Object> tmp1306;
    compiler::TNode<Smi> tmp1307;
    compiler::TNode<JSArray> tmp1308;
    compiler::TNode<JSArray> tmp1309;
    compiler::TNode<Map> tmp1310;
    compiler::TNode<BoolT> tmp1311;
    compiler::TNode<BoolT> tmp1312;
    compiler::TNode<BoolT> tmp1313;
    compiler::TNode<FixedArray> tmp1314;
    compiler::TNode<BoolT> tmp1315;
    compiler::TNode<BoolT> tmp1316;
    compiler::TNode<BoolT> tmp1317;
    compiler::TNode<Smi> tmp1318;
    compiler::TNode<Smi> tmp1319;
    compiler::TNode<Context> tmp1320;
    compiler::TNode<Smi> tmp1321;
    compiler::TNode<JSArray> tmp1322;
    ca_.Bind(&block40, &tmp1302, &tmp1303, &tmp1304, &tmp1305, &tmp1306, &tmp1307, &tmp1308, &tmp1309, &tmp1310, &tmp1311, &tmp1312, &tmp1313, &tmp1314, &tmp1315, &tmp1316, &tmp1317, &tmp1318, &tmp1319, &tmp1320, &tmp1321, &tmp1322);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 217);
    ca_.Goto(&block1, tmp1322, tmp1318);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp1323;
    compiler::TNode<JSArray> tmp1324;
    compiler::TNode<Smi> tmp1325;
    compiler::TNode<JSReceiver> tmp1326;
    compiler::TNode<Object> tmp1327;
    compiler::TNode<Smi> tmp1328;
    compiler::TNode<JSArray> tmp1329;
    compiler::TNode<JSArray> tmp1330;
    compiler::TNode<Map> tmp1331;
    compiler::TNode<BoolT> tmp1332;
    compiler::TNode<BoolT> tmp1333;
    compiler::TNode<BoolT> tmp1334;
    compiler::TNode<FixedArray> tmp1335;
    compiler::TNode<BoolT> tmp1336;
    compiler::TNode<BoolT> tmp1337;
    compiler::TNode<BoolT> tmp1338;
    ca_.Bind(&block3, &tmp1323, &tmp1324, &tmp1325, &tmp1326, &tmp1327, &tmp1328, &tmp1329, &tmp1330, &tmp1331, &tmp1332, &tmp1333, &tmp1334, &tmp1335, &tmp1336, &tmp1337, &tmp1338);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 220);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 97);
    compiler::TNode<IntPtrT> tmp1339 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1339);
    compiler::TNode<Smi>tmp1340 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1335, tmp1339});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 98);
    compiler::TNode<BoolT> tmp1341;
    USE(tmp1341);
    tmp1341 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThanOrEqual(compiler::TNode<Smi>{tmp1325}, compiler::TNode<Smi>{tmp1340}));
    ca_.Branch(tmp1341, &block65, &block66, tmp1323, tmp1324, tmp1325, tmp1326, tmp1327, tmp1328, tmp1329, tmp1330, tmp1331, tmp1332, tmp1333, tmp1334, tmp1335, tmp1336, tmp1337, tmp1338, tmp1325, tmp1323, tmp1325, tmp1340);
  }

  if (block66.is_used()) {
    compiler::TNode<Context> tmp1342;
    compiler::TNode<JSArray> tmp1343;
    compiler::TNode<Smi> tmp1344;
    compiler::TNode<JSReceiver> tmp1345;
    compiler::TNode<Object> tmp1346;
    compiler::TNode<Smi> tmp1347;
    compiler::TNode<JSArray> tmp1348;
    compiler::TNode<JSArray> tmp1349;
    compiler::TNode<Map> tmp1350;
    compiler::TNode<BoolT> tmp1351;
    compiler::TNode<BoolT> tmp1352;
    compiler::TNode<BoolT> tmp1353;
    compiler::TNode<FixedArray> tmp1354;
    compiler::TNode<BoolT> tmp1355;
    compiler::TNode<BoolT> tmp1356;
    compiler::TNode<BoolT> tmp1357;
    compiler::TNode<Smi> tmp1358;
    compiler::TNode<Context> tmp1359;
    compiler::TNode<Smi> tmp1360;
    compiler::TNode<Smi> tmp1361;
    ca_.Bind(&block66, &tmp1342, &tmp1343, &tmp1344, &tmp1345, &tmp1346, &tmp1347, &tmp1348, &tmp1349, &tmp1350, &tmp1351, &tmp1352, &tmp1353, &tmp1354, &tmp1355, &tmp1356, &tmp1357, &tmp1358, &tmp1359, &tmp1360, &tmp1361);
    CodeStubAssembler(state_).FailAssert("Torque assert \'validLength <= length\' failed", "../../v8/src/builtins/array-map.tq", 98);
  }

  if (block65.is_used()) {
    compiler::TNode<Context> tmp1362;
    compiler::TNode<JSArray> tmp1363;
    compiler::TNode<Smi> tmp1364;
    compiler::TNode<JSReceiver> tmp1365;
    compiler::TNode<Object> tmp1366;
    compiler::TNode<Smi> tmp1367;
    compiler::TNode<JSArray> tmp1368;
    compiler::TNode<JSArray> tmp1369;
    compiler::TNode<Map> tmp1370;
    compiler::TNode<BoolT> tmp1371;
    compiler::TNode<BoolT> tmp1372;
    compiler::TNode<BoolT> tmp1373;
    compiler::TNode<FixedArray> tmp1374;
    compiler::TNode<BoolT> tmp1375;
    compiler::TNode<BoolT> tmp1376;
    compiler::TNode<BoolT> tmp1377;
    compiler::TNode<Smi> tmp1378;
    compiler::TNode<Context> tmp1379;
    compiler::TNode<Smi> tmp1380;
    compiler::TNode<Smi> tmp1381;
    ca_.Bind(&block65, &tmp1362, &tmp1363, &tmp1364, &tmp1365, &tmp1366, &tmp1367, &tmp1368, &tmp1369, &tmp1370, &tmp1371, &tmp1372, &tmp1373, &tmp1374, &tmp1375, &tmp1376, &tmp1377, &tmp1378, &tmp1379, &tmp1380, &tmp1381);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 99);
    compiler::TNode<Int32T> tmp1382;
    USE(tmp1382);
    tmp1382 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 100);
    compiler::TNode<BoolT> tmp1383;
    USE(tmp1383);
    tmp1383 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp1375}));
    ca_.Branch(tmp1383, &block67, &block68, tmp1362, tmp1363, tmp1364, tmp1365, tmp1366, tmp1367, tmp1368, tmp1369, tmp1370, tmp1371, tmp1372, tmp1373, tmp1374, tmp1375, tmp1376, tmp1377, tmp1378, tmp1379, tmp1380, tmp1381, tmp1382);
  }

  if (block67.is_used()) {
    compiler::TNode<Context> tmp1384;
    compiler::TNode<JSArray> tmp1385;
    compiler::TNode<Smi> tmp1386;
    compiler::TNode<JSReceiver> tmp1387;
    compiler::TNode<Object> tmp1388;
    compiler::TNode<Smi> tmp1389;
    compiler::TNode<JSArray> tmp1390;
    compiler::TNode<JSArray> tmp1391;
    compiler::TNode<Map> tmp1392;
    compiler::TNode<BoolT> tmp1393;
    compiler::TNode<BoolT> tmp1394;
    compiler::TNode<BoolT> tmp1395;
    compiler::TNode<FixedArray> tmp1396;
    compiler::TNode<BoolT> tmp1397;
    compiler::TNode<BoolT> tmp1398;
    compiler::TNode<BoolT> tmp1399;
    compiler::TNode<Smi> tmp1400;
    compiler::TNode<Context> tmp1401;
    compiler::TNode<Smi> tmp1402;
    compiler::TNode<Smi> tmp1403;
    compiler::TNode<Int32T> tmp1404;
    ca_.Bind(&block67, &tmp1384, &tmp1385, &tmp1386, &tmp1387, &tmp1388, &tmp1389, &tmp1390, &tmp1391, &tmp1392, &tmp1393, &tmp1394, &tmp1395, &tmp1396, &tmp1397, &tmp1398, &tmp1399, &tmp1400, &tmp1401, &tmp1402, &tmp1403, &tmp1404);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 101);
    ca_.Branch(tmp1398, &block69, &block70, tmp1384, tmp1385, tmp1386, tmp1387, tmp1388, tmp1389, tmp1390, tmp1391, tmp1392, tmp1393, tmp1394, tmp1395, tmp1396, tmp1397, tmp1398, tmp1399, tmp1400, tmp1401, tmp1402, tmp1403, tmp1404);
  }

  if (block69.is_used()) {
    compiler::TNode<Context> tmp1405;
    compiler::TNode<JSArray> tmp1406;
    compiler::TNode<Smi> tmp1407;
    compiler::TNode<JSReceiver> tmp1408;
    compiler::TNode<Object> tmp1409;
    compiler::TNode<Smi> tmp1410;
    compiler::TNode<JSArray> tmp1411;
    compiler::TNode<JSArray> tmp1412;
    compiler::TNode<Map> tmp1413;
    compiler::TNode<BoolT> tmp1414;
    compiler::TNode<BoolT> tmp1415;
    compiler::TNode<BoolT> tmp1416;
    compiler::TNode<FixedArray> tmp1417;
    compiler::TNode<BoolT> tmp1418;
    compiler::TNode<BoolT> tmp1419;
    compiler::TNode<BoolT> tmp1420;
    compiler::TNode<Smi> tmp1421;
    compiler::TNode<Context> tmp1422;
    compiler::TNode<Smi> tmp1423;
    compiler::TNode<Smi> tmp1424;
    compiler::TNode<Int32T> tmp1425;
    ca_.Bind(&block69, &tmp1405, &tmp1406, &tmp1407, &tmp1408, &tmp1409, &tmp1410, &tmp1411, &tmp1412, &tmp1413, &tmp1414, &tmp1415, &tmp1416, &tmp1417, &tmp1418, &tmp1419, &tmp1420, &tmp1421, &tmp1422, &tmp1423, &tmp1424, &tmp1425);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 102);
    compiler::TNode<Int32T> tmp1426;
    USE(tmp1426);
    tmp1426 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 101);
    ca_.Goto(&block71, tmp1405, tmp1406, tmp1407, tmp1408, tmp1409, tmp1410, tmp1411, tmp1412, tmp1413, tmp1414, tmp1415, tmp1416, tmp1417, tmp1418, tmp1419, tmp1420, tmp1421, tmp1422, tmp1423, tmp1424, tmp1426);
  }

  if (block70.is_used()) {
    compiler::TNode<Context> tmp1427;
    compiler::TNode<JSArray> tmp1428;
    compiler::TNode<Smi> tmp1429;
    compiler::TNode<JSReceiver> tmp1430;
    compiler::TNode<Object> tmp1431;
    compiler::TNode<Smi> tmp1432;
    compiler::TNode<JSArray> tmp1433;
    compiler::TNode<JSArray> tmp1434;
    compiler::TNode<Map> tmp1435;
    compiler::TNode<BoolT> tmp1436;
    compiler::TNode<BoolT> tmp1437;
    compiler::TNode<BoolT> tmp1438;
    compiler::TNode<FixedArray> tmp1439;
    compiler::TNode<BoolT> tmp1440;
    compiler::TNode<BoolT> tmp1441;
    compiler::TNode<BoolT> tmp1442;
    compiler::TNode<Smi> tmp1443;
    compiler::TNode<Context> tmp1444;
    compiler::TNode<Smi> tmp1445;
    compiler::TNode<Smi> tmp1446;
    compiler::TNode<Int32T> tmp1447;
    ca_.Bind(&block70, &tmp1427, &tmp1428, &tmp1429, &tmp1430, &tmp1431, &tmp1432, &tmp1433, &tmp1434, &tmp1435, &tmp1436, &tmp1437, &tmp1438, &tmp1439, &tmp1440, &tmp1441, &tmp1442, &tmp1443, &tmp1444, &tmp1445, &tmp1446, &tmp1447);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 104);
    compiler::TNode<Int32T> tmp1448;
    USE(tmp1448);
    tmp1448 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_ELEMENTS));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 101);
    ca_.Goto(&block71, tmp1427, tmp1428, tmp1429, tmp1430, tmp1431, tmp1432, tmp1433, tmp1434, tmp1435, tmp1436, tmp1437, tmp1438, tmp1439, tmp1440, tmp1441, tmp1442, tmp1443, tmp1444, tmp1445, tmp1446, tmp1448);
  }

  if (block71.is_used()) {
    compiler::TNode<Context> tmp1449;
    compiler::TNode<JSArray> tmp1450;
    compiler::TNode<Smi> tmp1451;
    compiler::TNode<JSReceiver> tmp1452;
    compiler::TNode<Object> tmp1453;
    compiler::TNode<Smi> tmp1454;
    compiler::TNode<JSArray> tmp1455;
    compiler::TNode<JSArray> tmp1456;
    compiler::TNode<Map> tmp1457;
    compiler::TNode<BoolT> tmp1458;
    compiler::TNode<BoolT> tmp1459;
    compiler::TNode<BoolT> tmp1460;
    compiler::TNode<FixedArray> tmp1461;
    compiler::TNode<BoolT> tmp1462;
    compiler::TNode<BoolT> tmp1463;
    compiler::TNode<BoolT> tmp1464;
    compiler::TNode<Smi> tmp1465;
    compiler::TNode<Context> tmp1466;
    compiler::TNode<Smi> tmp1467;
    compiler::TNode<Smi> tmp1468;
    compiler::TNode<Int32T> tmp1469;
    ca_.Bind(&block71, &tmp1449, &tmp1450, &tmp1451, &tmp1452, &tmp1453, &tmp1454, &tmp1455, &tmp1456, &tmp1457, &tmp1458, &tmp1459, &tmp1460, &tmp1461, &tmp1462, &tmp1463, &tmp1464, &tmp1465, &tmp1466, &tmp1467, &tmp1468, &tmp1469);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 100);
    ca_.Goto(&block68, tmp1449, tmp1450, tmp1451, tmp1452, tmp1453, tmp1454, tmp1455, tmp1456, tmp1457, tmp1458, tmp1459, tmp1460, tmp1461, tmp1462, tmp1463, tmp1464, tmp1465, tmp1466, tmp1467, tmp1468, tmp1469);
  }

  if (block68.is_used()) {
    compiler::TNode<Context> tmp1470;
    compiler::TNode<JSArray> tmp1471;
    compiler::TNode<Smi> tmp1472;
    compiler::TNode<JSReceiver> tmp1473;
    compiler::TNode<Object> tmp1474;
    compiler::TNode<Smi> tmp1475;
    compiler::TNode<JSArray> tmp1476;
    compiler::TNode<JSArray> tmp1477;
    compiler::TNode<Map> tmp1478;
    compiler::TNode<BoolT> tmp1479;
    compiler::TNode<BoolT> tmp1480;
    compiler::TNode<BoolT> tmp1481;
    compiler::TNode<FixedArray> tmp1482;
    compiler::TNode<BoolT> tmp1483;
    compiler::TNode<BoolT> tmp1484;
    compiler::TNode<BoolT> tmp1485;
    compiler::TNode<Smi> tmp1486;
    compiler::TNode<Context> tmp1487;
    compiler::TNode<Smi> tmp1488;
    compiler::TNode<Smi> tmp1489;
    compiler::TNode<Int32T> tmp1490;
    ca_.Bind(&block68, &tmp1470, &tmp1471, &tmp1472, &tmp1473, &tmp1474, &tmp1475, &tmp1476, &tmp1477, &tmp1478, &tmp1479, &tmp1480, &tmp1481, &tmp1482, &tmp1483, &tmp1484, &tmp1485, &tmp1486, &tmp1487, &tmp1488, &tmp1489, &tmp1490);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 108);
    ca_.Branch(tmp1485, &block72, &block74, tmp1470, tmp1471, tmp1472, tmp1473, tmp1474, tmp1475, tmp1476, tmp1477, tmp1478, tmp1479, tmp1480, tmp1481, tmp1482, tmp1483, tmp1484, tmp1485, tmp1486, tmp1487, tmp1488, tmp1489, tmp1490);
  }

  if (block74.is_used()) {
    compiler::TNode<Context> tmp1491;
    compiler::TNode<JSArray> tmp1492;
    compiler::TNode<Smi> tmp1493;
    compiler::TNode<JSReceiver> tmp1494;
    compiler::TNode<Object> tmp1495;
    compiler::TNode<Smi> tmp1496;
    compiler::TNode<JSArray> tmp1497;
    compiler::TNode<JSArray> tmp1498;
    compiler::TNode<Map> tmp1499;
    compiler::TNode<BoolT> tmp1500;
    compiler::TNode<BoolT> tmp1501;
    compiler::TNode<BoolT> tmp1502;
    compiler::TNode<FixedArray> tmp1503;
    compiler::TNode<BoolT> tmp1504;
    compiler::TNode<BoolT> tmp1505;
    compiler::TNode<BoolT> tmp1506;
    compiler::TNode<Smi> tmp1507;
    compiler::TNode<Context> tmp1508;
    compiler::TNode<Smi> tmp1509;
    compiler::TNode<Smi> tmp1510;
    compiler::TNode<Int32T> tmp1511;
    ca_.Bind(&block74, &tmp1491, &tmp1492, &tmp1493, &tmp1494, &tmp1495, &tmp1496, &tmp1497, &tmp1498, &tmp1499, &tmp1500, &tmp1501, &tmp1502, &tmp1503, &tmp1504, &tmp1505, &tmp1506, &tmp1507, &tmp1508, &tmp1509, &tmp1510, &tmp1511);
    compiler::TNode<BoolT> tmp1512;
    USE(tmp1512);
    tmp1512 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp1509}, compiler::TNode<Smi>{tmp1510}));
    ca_.Branch(tmp1512, &block72, &block73, tmp1491, tmp1492, tmp1493, tmp1494, tmp1495, tmp1496, tmp1497, tmp1498, tmp1499, tmp1500, tmp1501, tmp1502, tmp1503, tmp1504, tmp1505, tmp1506, tmp1507, tmp1508, tmp1509, tmp1510, tmp1511);
  }

  if (block72.is_used()) {
    compiler::TNode<Context> tmp1513;
    compiler::TNode<JSArray> tmp1514;
    compiler::TNode<Smi> tmp1515;
    compiler::TNode<JSReceiver> tmp1516;
    compiler::TNode<Object> tmp1517;
    compiler::TNode<Smi> tmp1518;
    compiler::TNode<JSArray> tmp1519;
    compiler::TNode<JSArray> tmp1520;
    compiler::TNode<Map> tmp1521;
    compiler::TNode<BoolT> tmp1522;
    compiler::TNode<BoolT> tmp1523;
    compiler::TNode<BoolT> tmp1524;
    compiler::TNode<FixedArray> tmp1525;
    compiler::TNode<BoolT> tmp1526;
    compiler::TNode<BoolT> tmp1527;
    compiler::TNode<BoolT> tmp1528;
    compiler::TNode<Smi> tmp1529;
    compiler::TNode<Context> tmp1530;
    compiler::TNode<Smi> tmp1531;
    compiler::TNode<Smi> tmp1532;
    compiler::TNode<Int32T> tmp1533;
    ca_.Bind(&block72, &tmp1513, &tmp1514, &tmp1515, &tmp1516, &tmp1517, &tmp1518, &tmp1519, &tmp1520, &tmp1521, &tmp1522, &tmp1523, &tmp1524, &tmp1525, &tmp1526, &tmp1527, &tmp1528, &tmp1529, &tmp1530, &tmp1531, &tmp1532, &tmp1533);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 114);
    compiler::TNode<Int32T> tmp1534;
    USE(tmp1534);
    tmp1534 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FastHoleyElementsKind(compiler::TNode<Int32T>{tmp1533}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 108);
    ca_.Goto(&block73, tmp1513, tmp1514, tmp1515, tmp1516, tmp1517, tmp1518, tmp1519, tmp1520, tmp1521, tmp1522, tmp1523, tmp1524, tmp1525, tmp1526, tmp1527, tmp1528, tmp1529, tmp1530, tmp1531, tmp1532, tmp1534);
  }

  if (block73.is_used()) {
    compiler::TNode<Context> tmp1535;
    compiler::TNode<JSArray> tmp1536;
    compiler::TNode<Smi> tmp1537;
    compiler::TNode<JSReceiver> tmp1538;
    compiler::TNode<Object> tmp1539;
    compiler::TNode<Smi> tmp1540;
    compiler::TNode<JSArray> tmp1541;
    compiler::TNode<JSArray> tmp1542;
    compiler::TNode<Map> tmp1543;
    compiler::TNode<BoolT> tmp1544;
    compiler::TNode<BoolT> tmp1545;
    compiler::TNode<BoolT> tmp1546;
    compiler::TNode<FixedArray> tmp1547;
    compiler::TNode<BoolT> tmp1548;
    compiler::TNode<BoolT> tmp1549;
    compiler::TNode<BoolT> tmp1550;
    compiler::TNode<Smi> tmp1551;
    compiler::TNode<Context> tmp1552;
    compiler::TNode<Smi> tmp1553;
    compiler::TNode<Smi> tmp1554;
    compiler::TNode<Int32T> tmp1555;
    ca_.Bind(&block73, &tmp1535, &tmp1536, &tmp1537, &tmp1538, &tmp1539, &tmp1540, &tmp1541, &tmp1542, &tmp1543, &tmp1544, &tmp1545, &tmp1546, &tmp1547, &tmp1548, &tmp1549, &tmp1550, &tmp1551, &tmp1552, &tmp1553, &tmp1554, &tmp1555);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 117);
    compiler::TNode<Context> tmp1556;
    USE(tmp1556);
    tmp1556 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp1552}));
    compiler::TNode<Map> tmp1557;
    USE(tmp1557);
    tmp1557 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(compiler::TNode<Int32T>{tmp1555}, compiler::TNode<Context>{tmp1556}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 118);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 120);
    compiler::TNode<BoolT> tmp1558;
    USE(tmp1558);
    tmp1558 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDoubleElementsKind(compiler::TNode<Int32T>{tmp1555}));
    ca_.Branch(tmp1558, &block75, &block76, tmp1535, tmp1536, tmp1537, tmp1538, tmp1539, tmp1540, tmp1541, tmp1542, tmp1543, tmp1544, tmp1545, tmp1546, tmp1547, tmp1548, tmp1549, tmp1550, tmp1551, tmp1552, tmp1553, tmp1554, tmp1555, tmp1557, ca_.Uninitialized<JSArray>());
  }

  if (block75.is_used()) {
    compiler::TNode<Context> tmp1559;
    compiler::TNode<JSArray> tmp1560;
    compiler::TNode<Smi> tmp1561;
    compiler::TNode<JSReceiver> tmp1562;
    compiler::TNode<Object> tmp1563;
    compiler::TNode<Smi> tmp1564;
    compiler::TNode<JSArray> tmp1565;
    compiler::TNode<JSArray> tmp1566;
    compiler::TNode<Map> tmp1567;
    compiler::TNode<BoolT> tmp1568;
    compiler::TNode<BoolT> tmp1569;
    compiler::TNode<BoolT> tmp1570;
    compiler::TNode<FixedArray> tmp1571;
    compiler::TNode<BoolT> tmp1572;
    compiler::TNode<BoolT> tmp1573;
    compiler::TNode<BoolT> tmp1574;
    compiler::TNode<Smi> tmp1575;
    compiler::TNode<Context> tmp1576;
    compiler::TNode<Smi> tmp1577;
    compiler::TNode<Smi> tmp1578;
    compiler::TNode<Int32T> tmp1579;
    compiler::TNode<Map> tmp1580;
    compiler::TNode<JSArray> tmp1581;
    ca_.Bind(&block75, &tmp1559, &tmp1560, &tmp1561, &tmp1562, &tmp1563, &tmp1564, &tmp1565, &tmp1566, &tmp1567, &tmp1568, &tmp1569, &tmp1570, &tmp1571, &tmp1572, &tmp1573, &tmp1574, &tmp1575, &tmp1576, &tmp1577, &tmp1578, &tmp1579, &tmp1580, &tmp1581);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 125);
    compiler::TNode<IntPtrT> tmp1582;
    USE(tmp1582);
    tmp1582 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp1578}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 124);
    compiler::TNode<FixedDoubleArray> tmp1583;
    USE(tmp1583);
    tmp1583 = ca_.UncheckedCast<FixedDoubleArray>(CodeStubAssembler(state_).AllocateFixedDoubleArrayWithHoles(compiler::TNode<IntPtrT>{tmp1582}, CodeStubAssembler::kAllowLargeObjectAllocation));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 126);
    compiler::TNode<JSArray> tmp1584;
    USE(tmp1584);
    tmp1584 = ca_.UncheckedCast<JSArray>(BaseBuiltinsFromDSLAssembler(state_).NewJSArray(compiler::TNode<Context>{tmp1576}, compiler::TNode<Map>{tmp1580}, compiler::TNode<FixedArrayBase>{tmp1571}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 127);
    compiler::TNode<Smi> tmp1585;
    USE(tmp1585);
    tmp1585 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block80, tmp1559, tmp1560, tmp1561, tmp1562, tmp1563, tmp1564, tmp1565, tmp1566, tmp1567, tmp1568, tmp1569, tmp1570, tmp1571, tmp1572, tmp1573, tmp1574, tmp1575, tmp1576, tmp1577, tmp1578, tmp1579, tmp1580, tmp1584, tmp1583, tmp1585);
  }

  if (block80.is_used()) {
    compiler::TNode<Context> tmp1586;
    compiler::TNode<JSArray> tmp1587;
    compiler::TNode<Smi> tmp1588;
    compiler::TNode<JSReceiver> tmp1589;
    compiler::TNode<Object> tmp1590;
    compiler::TNode<Smi> tmp1591;
    compiler::TNode<JSArray> tmp1592;
    compiler::TNode<JSArray> tmp1593;
    compiler::TNode<Map> tmp1594;
    compiler::TNode<BoolT> tmp1595;
    compiler::TNode<BoolT> tmp1596;
    compiler::TNode<BoolT> tmp1597;
    compiler::TNode<FixedArray> tmp1598;
    compiler::TNode<BoolT> tmp1599;
    compiler::TNode<BoolT> tmp1600;
    compiler::TNode<BoolT> tmp1601;
    compiler::TNode<Smi> tmp1602;
    compiler::TNode<Context> tmp1603;
    compiler::TNode<Smi> tmp1604;
    compiler::TNode<Smi> tmp1605;
    compiler::TNode<Int32T> tmp1606;
    compiler::TNode<Map> tmp1607;
    compiler::TNode<JSArray> tmp1608;
    compiler::TNode<FixedDoubleArray> tmp1609;
    compiler::TNode<Smi> tmp1610;
    ca_.Bind(&block80, &tmp1586, &tmp1587, &tmp1588, &tmp1589, &tmp1590, &tmp1591, &tmp1592, &tmp1593, &tmp1594, &tmp1595, &tmp1596, &tmp1597, &tmp1598, &tmp1599, &tmp1600, &tmp1601, &tmp1602, &tmp1603, &tmp1604, &tmp1605, &tmp1606, &tmp1607, &tmp1608, &tmp1609, &tmp1610);
    compiler::TNode<BoolT> tmp1611;
    USE(tmp1611);
    tmp1611 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp1610}, compiler::TNode<Smi>{tmp1604}));
    ca_.Branch(tmp1611, &block78, &block79, tmp1586, tmp1587, tmp1588, tmp1589, tmp1590, tmp1591, tmp1592, tmp1593, tmp1594, tmp1595, tmp1596, tmp1597, tmp1598, tmp1599, tmp1600, tmp1601, tmp1602, tmp1603, tmp1604, tmp1605, tmp1606, tmp1607, tmp1608, tmp1609, tmp1610);
  }

  if (block78.is_used()) {
    compiler::TNode<Context> tmp1612;
    compiler::TNode<JSArray> tmp1613;
    compiler::TNode<Smi> tmp1614;
    compiler::TNode<JSReceiver> tmp1615;
    compiler::TNode<Object> tmp1616;
    compiler::TNode<Smi> tmp1617;
    compiler::TNode<JSArray> tmp1618;
    compiler::TNode<JSArray> tmp1619;
    compiler::TNode<Map> tmp1620;
    compiler::TNode<BoolT> tmp1621;
    compiler::TNode<BoolT> tmp1622;
    compiler::TNode<BoolT> tmp1623;
    compiler::TNode<FixedArray> tmp1624;
    compiler::TNode<BoolT> tmp1625;
    compiler::TNode<BoolT> tmp1626;
    compiler::TNode<BoolT> tmp1627;
    compiler::TNode<Smi> tmp1628;
    compiler::TNode<Context> tmp1629;
    compiler::TNode<Smi> tmp1630;
    compiler::TNode<Smi> tmp1631;
    compiler::TNode<Int32T> tmp1632;
    compiler::TNode<Map> tmp1633;
    compiler::TNode<JSArray> tmp1634;
    compiler::TNode<FixedDoubleArray> tmp1635;
    compiler::TNode<Smi> tmp1636;
    ca_.Bind(&block78, &tmp1612, &tmp1613, &tmp1614, &tmp1615, &tmp1616, &tmp1617, &tmp1618, &tmp1619, &tmp1620, &tmp1621, &tmp1622, &tmp1623, &tmp1624, &tmp1625, &tmp1626, &tmp1627, &tmp1628, &tmp1629, &tmp1630, &tmp1631, &tmp1632, &tmp1633, &tmp1634, &tmp1635, &tmp1636);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 128);
    compiler::TNode<Object> tmp1637;
    USE(tmp1637);
    tmp1637 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp1624}, compiler::TNode<Smi>{tmp1636}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 129);
    compiler::TNode<Number> tmp1638;
    USE(tmp1638);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1638 = BaseBuiltinsFromDSLAssembler(state_).Cast20UT5ATSmi10HeapNumber(compiler::TNode<Object>{tmp1637}, &label0);
    ca_.Goto(&block84, tmp1612, tmp1613, tmp1614, tmp1615, tmp1616, tmp1617, tmp1618, tmp1619, tmp1620, tmp1621, tmp1622, tmp1623, tmp1624, tmp1625, tmp1626, tmp1627, tmp1628, tmp1629, tmp1630, tmp1631, tmp1632, tmp1633, tmp1634, tmp1635, tmp1636, tmp1637, tmp1637, tmp1638);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block85, tmp1612, tmp1613, tmp1614, tmp1615, tmp1616, tmp1617, tmp1618, tmp1619, tmp1620, tmp1621, tmp1622, tmp1623, tmp1624, tmp1625, tmp1626, tmp1627, tmp1628, tmp1629, tmp1630, tmp1631, tmp1632, tmp1633, tmp1634, tmp1635, tmp1636, tmp1637, tmp1637);
    }
  }

  if (block85.is_used()) {
    compiler::TNode<Context> tmp1639;
    compiler::TNode<JSArray> tmp1640;
    compiler::TNode<Smi> tmp1641;
    compiler::TNode<JSReceiver> tmp1642;
    compiler::TNode<Object> tmp1643;
    compiler::TNode<Smi> tmp1644;
    compiler::TNode<JSArray> tmp1645;
    compiler::TNode<JSArray> tmp1646;
    compiler::TNode<Map> tmp1647;
    compiler::TNode<BoolT> tmp1648;
    compiler::TNode<BoolT> tmp1649;
    compiler::TNode<BoolT> tmp1650;
    compiler::TNode<FixedArray> tmp1651;
    compiler::TNode<BoolT> tmp1652;
    compiler::TNode<BoolT> tmp1653;
    compiler::TNode<BoolT> tmp1654;
    compiler::TNode<Smi> tmp1655;
    compiler::TNode<Context> tmp1656;
    compiler::TNode<Smi> tmp1657;
    compiler::TNode<Smi> tmp1658;
    compiler::TNode<Int32T> tmp1659;
    compiler::TNode<Map> tmp1660;
    compiler::TNode<JSArray> tmp1661;
    compiler::TNode<FixedDoubleArray> tmp1662;
    compiler::TNode<Smi> tmp1663;
    compiler::TNode<Object> tmp1664;
    compiler::TNode<Object> tmp1665;
    ca_.Bind(&block85, &tmp1639, &tmp1640, &tmp1641, &tmp1642, &tmp1643, &tmp1644, &tmp1645, &tmp1646, &tmp1647, &tmp1648, &tmp1649, &tmp1650, &tmp1651, &tmp1652, &tmp1653, &tmp1654, &tmp1655, &tmp1656, &tmp1657, &tmp1658, &tmp1659, &tmp1660, &tmp1661, &tmp1662, &tmp1663, &tmp1664, &tmp1665);
    ca_.Goto(&block83, tmp1639, tmp1640, tmp1641, tmp1642, tmp1643, tmp1644, tmp1645, tmp1646, tmp1647, tmp1648, tmp1649, tmp1650, tmp1651, tmp1652, tmp1653, tmp1654, tmp1655, tmp1656, tmp1657, tmp1658, tmp1659, tmp1660, tmp1661, tmp1662, tmp1663, tmp1664);
  }

  if (block84.is_used()) {
    compiler::TNode<Context> tmp1666;
    compiler::TNode<JSArray> tmp1667;
    compiler::TNode<Smi> tmp1668;
    compiler::TNode<JSReceiver> tmp1669;
    compiler::TNode<Object> tmp1670;
    compiler::TNode<Smi> tmp1671;
    compiler::TNode<JSArray> tmp1672;
    compiler::TNode<JSArray> tmp1673;
    compiler::TNode<Map> tmp1674;
    compiler::TNode<BoolT> tmp1675;
    compiler::TNode<BoolT> tmp1676;
    compiler::TNode<BoolT> tmp1677;
    compiler::TNode<FixedArray> tmp1678;
    compiler::TNode<BoolT> tmp1679;
    compiler::TNode<BoolT> tmp1680;
    compiler::TNode<BoolT> tmp1681;
    compiler::TNode<Smi> tmp1682;
    compiler::TNode<Context> tmp1683;
    compiler::TNode<Smi> tmp1684;
    compiler::TNode<Smi> tmp1685;
    compiler::TNode<Int32T> tmp1686;
    compiler::TNode<Map> tmp1687;
    compiler::TNode<JSArray> tmp1688;
    compiler::TNode<FixedDoubleArray> tmp1689;
    compiler::TNode<Smi> tmp1690;
    compiler::TNode<Object> tmp1691;
    compiler::TNode<Object> tmp1692;
    compiler::TNode<Number> tmp1693;
    ca_.Bind(&block84, &tmp1666, &tmp1667, &tmp1668, &tmp1669, &tmp1670, &tmp1671, &tmp1672, &tmp1673, &tmp1674, &tmp1675, &tmp1676, &tmp1677, &tmp1678, &tmp1679, &tmp1680, &tmp1681, &tmp1682, &tmp1683, &tmp1684, &tmp1685, &tmp1686, &tmp1687, &tmp1688, &tmp1689, &tmp1690, &tmp1691, &tmp1692, &tmp1693);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 130);
    compiler::TNode<Float64T> tmp1694;
    USE(tmp1694);
    tmp1694 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6420UT5ATSmi10HeapNumber(compiler::TNode<Number>{tmp1693}));
    CodeStubAssembler(state_).StoreFixedDoubleArrayElementSmi(compiler::TNode<FixedDoubleArray>{tmp1689}, compiler::TNode<Smi>{tmp1690}, compiler::TNode<Float64T>{tmp1694});
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 129);
    ca_.Goto(&block82, tmp1666, tmp1667, tmp1668, tmp1669, tmp1670, tmp1671, tmp1672, tmp1673, tmp1674, tmp1675, tmp1676, tmp1677, tmp1678, tmp1679, tmp1680, tmp1681, tmp1682, tmp1683, tmp1684, tmp1685, tmp1686, tmp1687, tmp1688, tmp1689, tmp1690, tmp1691);
  }

  if (block83.is_used()) {
    compiler::TNode<Context> tmp1695;
    compiler::TNode<JSArray> tmp1696;
    compiler::TNode<Smi> tmp1697;
    compiler::TNode<JSReceiver> tmp1698;
    compiler::TNode<Object> tmp1699;
    compiler::TNode<Smi> tmp1700;
    compiler::TNode<JSArray> tmp1701;
    compiler::TNode<JSArray> tmp1702;
    compiler::TNode<Map> tmp1703;
    compiler::TNode<BoolT> tmp1704;
    compiler::TNode<BoolT> tmp1705;
    compiler::TNode<BoolT> tmp1706;
    compiler::TNode<FixedArray> tmp1707;
    compiler::TNode<BoolT> tmp1708;
    compiler::TNode<BoolT> tmp1709;
    compiler::TNode<BoolT> tmp1710;
    compiler::TNode<Smi> tmp1711;
    compiler::TNode<Context> tmp1712;
    compiler::TNode<Smi> tmp1713;
    compiler::TNode<Smi> tmp1714;
    compiler::TNode<Int32T> tmp1715;
    compiler::TNode<Map> tmp1716;
    compiler::TNode<JSArray> tmp1717;
    compiler::TNode<FixedDoubleArray> tmp1718;
    compiler::TNode<Smi> tmp1719;
    compiler::TNode<Object> tmp1720;
    ca_.Bind(&block83, &tmp1695, &tmp1696, &tmp1697, &tmp1698, &tmp1699, &tmp1700, &tmp1701, &tmp1702, &tmp1703, &tmp1704, &tmp1705, &tmp1706, &tmp1707, &tmp1708, &tmp1709, &tmp1710, &tmp1711, &tmp1712, &tmp1713, &tmp1714, &tmp1715, &tmp1716, &tmp1717, &tmp1718, &tmp1719, &tmp1720);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 132);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 133);
    compiler::TNode<Oddball> tmp1721;
    USE(tmp1721);
    tmp1721 = BaseBuiltinsFromDSLAssembler(state_).Hole();
    compiler::TNode<BoolT> tmp1722;
    USE(tmp1722);
    tmp1722 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{ca_.UncheckedCast<HeapObject>(tmp1720)}, compiler::TNode<HeapObject>{tmp1721}));
    ca_.Branch(tmp1722, &block86, &block87, tmp1695, tmp1696, tmp1697, tmp1698, tmp1699, tmp1700, tmp1701, tmp1702, tmp1703, tmp1704, tmp1705, tmp1706, tmp1707, tmp1708, tmp1709, tmp1710, tmp1711, tmp1712, tmp1713, tmp1714, tmp1715, tmp1716, tmp1717, tmp1718, tmp1719, tmp1720, ca_.UncheckedCast<HeapObject>(tmp1720));
  }

  if (block87.is_used()) {
    compiler::TNode<Context> tmp1723;
    compiler::TNode<JSArray> tmp1724;
    compiler::TNode<Smi> tmp1725;
    compiler::TNode<JSReceiver> tmp1726;
    compiler::TNode<Object> tmp1727;
    compiler::TNode<Smi> tmp1728;
    compiler::TNode<JSArray> tmp1729;
    compiler::TNode<JSArray> tmp1730;
    compiler::TNode<Map> tmp1731;
    compiler::TNode<BoolT> tmp1732;
    compiler::TNode<BoolT> tmp1733;
    compiler::TNode<BoolT> tmp1734;
    compiler::TNode<FixedArray> tmp1735;
    compiler::TNode<BoolT> tmp1736;
    compiler::TNode<BoolT> tmp1737;
    compiler::TNode<BoolT> tmp1738;
    compiler::TNode<Smi> tmp1739;
    compiler::TNode<Context> tmp1740;
    compiler::TNode<Smi> tmp1741;
    compiler::TNode<Smi> tmp1742;
    compiler::TNode<Int32T> tmp1743;
    compiler::TNode<Map> tmp1744;
    compiler::TNode<JSArray> tmp1745;
    compiler::TNode<FixedDoubleArray> tmp1746;
    compiler::TNode<Smi> tmp1747;
    compiler::TNode<Object> tmp1748;
    compiler::TNode<HeapObject> tmp1749;
    ca_.Bind(&block87, &tmp1723, &tmp1724, &tmp1725, &tmp1726, &tmp1727, &tmp1728, &tmp1729, &tmp1730, &tmp1731, &tmp1732, &tmp1733, &tmp1734, &tmp1735, &tmp1736, &tmp1737, &tmp1738, &tmp1739, &tmp1740, &tmp1741, &tmp1742, &tmp1743, &tmp1744, &tmp1745, &tmp1746, &tmp1747, &tmp1748, &tmp1749);
    CodeStubAssembler(state_).FailAssert("Torque assert \'h == Hole\' failed", "../../v8/src/builtins/array-map.tq", 133);
  }

  if (block86.is_used()) {
    compiler::TNode<Context> tmp1750;
    compiler::TNode<JSArray> tmp1751;
    compiler::TNode<Smi> tmp1752;
    compiler::TNode<JSReceiver> tmp1753;
    compiler::TNode<Object> tmp1754;
    compiler::TNode<Smi> tmp1755;
    compiler::TNode<JSArray> tmp1756;
    compiler::TNode<JSArray> tmp1757;
    compiler::TNode<Map> tmp1758;
    compiler::TNode<BoolT> tmp1759;
    compiler::TNode<BoolT> tmp1760;
    compiler::TNode<BoolT> tmp1761;
    compiler::TNode<FixedArray> tmp1762;
    compiler::TNode<BoolT> tmp1763;
    compiler::TNode<BoolT> tmp1764;
    compiler::TNode<BoolT> tmp1765;
    compiler::TNode<Smi> tmp1766;
    compiler::TNode<Context> tmp1767;
    compiler::TNode<Smi> tmp1768;
    compiler::TNode<Smi> tmp1769;
    compiler::TNode<Int32T> tmp1770;
    compiler::TNode<Map> tmp1771;
    compiler::TNode<JSArray> tmp1772;
    compiler::TNode<FixedDoubleArray> tmp1773;
    compiler::TNode<Smi> tmp1774;
    compiler::TNode<Object> tmp1775;
    compiler::TNode<HeapObject> tmp1776;
    ca_.Bind(&block86, &tmp1750, &tmp1751, &tmp1752, &tmp1753, &tmp1754, &tmp1755, &tmp1756, &tmp1757, &tmp1758, &tmp1759, &tmp1760, &tmp1761, &tmp1762, &tmp1763, &tmp1764, &tmp1765, &tmp1766, &tmp1767, &tmp1768, &tmp1769, &tmp1770, &tmp1771, &tmp1772, &tmp1773, &tmp1774, &tmp1775, &tmp1776);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 129);
    ca_.Goto(&block82, tmp1750, tmp1751, tmp1752, tmp1753, tmp1754, tmp1755, tmp1756, tmp1757, tmp1758, tmp1759, tmp1760, tmp1761, tmp1762, tmp1763, tmp1764, tmp1765, tmp1766, tmp1767, tmp1768, tmp1769, tmp1770, tmp1771, tmp1772, tmp1773, tmp1774, tmp1775);
  }

  if (block82.is_used()) {
    compiler::TNode<Context> tmp1777;
    compiler::TNode<JSArray> tmp1778;
    compiler::TNode<Smi> tmp1779;
    compiler::TNode<JSReceiver> tmp1780;
    compiler::TNode<Object> tmp1781;
    compiler::TNode<Smi> tmp1782;
    compiler::TNode<JSArray> tmp1783;
    compiler::TNode<JSArray> tmp1784;
    compiler::TNode<Map> tmp1785;
    compiler::TNode<BoolT> tmp1786;
    compiler::TNode<BoolT> tmp1787;
    compiler::TNode<BoolT> tmp1788;
    compiler::TNode<FixedArray> tmp1789;
    compiler::TNode<BoolT> tmp1790;
    compiler::TNode<BoolT> tmp1791;
    compiler::TNode<BoolT> tmp1792;
    compiler::TNode<Smi> tmp1793;
    compiler::TNode<Context> tmp1794;
    compiler::TNode<Smi> tmp1795;
    compiler::TNode<Smi> tmp1796;
    compiler::TNode<Int32T> tmp1797;
    compiler::TNode<Map> tmp1798;
    compiler::TNode<JSArray> tmp1799;
    compiler::TNode<FixedDoubleArray> tmp1800;
    compiler::TNode<Smi> tmp1801;
    compiler::TNode<Object> tmp1802;
    ca_.Bind(&block82, &tmp1777, &tmp1778, &tmp1779, &tmp1780, &tmp1781, &tmp1782, &tmp1783, &tmp1784, &tmp1785, &tmp1786, &tmp1787, &tmp1788, &tmp1789, &tmp1790, &tmp1791, &tmp1792, &tmp1793, &tmp1794, &tmp1795, &tmp1796, &tmp1797, &tmp1798, &tmp1799, &tmp1800, &tmp1801, &tmp1802);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 128);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 127);
    ca_.Goto(&block81, tmp1777, tmp1778, tmp1779, tmp1780, tmp1781, tmp1782, tmp1783, tmp1784, tmp1785, tmp1786, tmp1787, tmp1788, tmp1789, tmp1790, tmp1791, tmp1792, tmp1793, tmp1794, tmp1795, tmp1796, tmp1797, tmp1798, tmp1799, tmp1800, tmp1801);
  }

  if (block81.is_used()) {
    compiler::TNode<Context> tmp1803;
    compiler::TNode<JSArray> tmp1804;
    compiler::TNode<Smi> tmp1805;
    compiler::TNode<JSReceiver> tmp1806;
    compiler::TNode<Object> tmp1807;
    compiler::TNode<Smi> tmp1808;
    compiler::TNode<JSArray> tmp1809;
    compiler::TNode<JSArray> tmp1810;
    compiler::TNode<Map> tmp1811;
    compiler::TNode<BoolT> tmp1812;
    compiler::TNode<BoolT> tmp1813;
    compiler::TNode<BoolT> tmp1814;
    compiler::TNode<FixedArray> tmp1815;
    compiler::TNode<BoolT> tmp1816;
    compiler::TNode<BoolT> tmp1817;
    compiler::TNode<BoolT> tmp1818;
    compiler::TNode<Smi> tmp1819;
    compiler::TNode<Context> tmp1820;
    compiler::TNode<Smi> tmp1821;
    compiler::TNode<Smi> tmp1822;
    compiler::TNode<Int32T> tmp1823;
    compiler::TNode<Map> tmp1824;
    compiler::TNode<JSArray> tmp1825;
    compiler::TNode<FixedDoubleArray> tmp1826;
    compiler::TNode<Smi> tmp1827;
    ca_.Bind(&block81, &tmp1803, &tmp1804, &tmp1805, &tmp1806, &tmp1807, &tmp1808, &tmp1809, &tmp1810, &tmp1811, &tmp1812, &tmp1813, &tmp1814, &tmp1815, &tmp1816, &tmp1817, &tmp1818, &tmp1819, &tmp1820, &tmp1821, &tmp1822, &tmp1823, &tmp1824, &tmp1825, &tmp1826, &tmp1827);
    compiler::TNode<Smi> tmp1828;
    USE(tmp1828);
    tmp1828 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp1829;
    USE(tmp1829);
    tmp1829 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1827}, compiler::TNode<Smi>{tmp1828}));
    ca_.Goto(&block80, tmp1803, tmp1804, tmp1805, tmp1806, tmp1807, tmp1808, tmp1809, tmp1810, tmp1811, tmp1812, tmp1813, tmp1814, tmp1815, tmp1816, tmp1817, tmp1818, tmp1819, tmp1820, tmp1821, tmp1822, tmp1823, tmp1824, tmp1825, tmp1826, tmp1829);
  }

  if (block79.is_used()) {
    compiler::TNode<Context> tmp1830;
    compiler::TNode<JSArray> tmp1831;
    compiler::TNode<Smi> tmp1832;
    compiler::TNode<JSReceiver> tmp1833;
    compiler::TNode<Object> tmp1834;
    compiler::TNode<Smi> tmp1835;
    compiler::TNode<JSArray> tmp1836;
    compiler::TNode<JSArray> tmp1837;
    compiler::TNode<Map> tmp1838;
    compiler::TNode<BoolT> tmp1839;
    compiler::TNode<BoolT> tmp1840;
    compiler::TNode<BoolT> tmp1841;
    compiler::TNode<FixedArray> tmp1842;
    compiler::TNode<BoolT> tmp1843;
    compiler::TNode<BoolT> tmp1844;
    compiler::TNode<BoolT> tmp1845;
    compiler::TNode<Smi> tmp1846;
    compiler::TNode<Context> tmp1847;
    compiler::TNode<Smi> tmp1848;
    compiler::TNode<Smi> tmp1849;
    compiler::TNode<Int32T> tmp1850;
    compiler::TNode<Map> tmp1851;
    compiler::TNode<JSArray> tmp1852;
    compiler::TNode<FixedDoubleArray> tmp1853;
    compiler::TNode<Smi> tmp1854;
    ca_.Bind(&block79, &tmp1830, &tmp1831, &tmp1832, &tmp1833, &tmp1834, &tmp1835, &tmp1836, &tmp1837, &tmp1838, &tmp1839, &tmp1840, &tmp1841, &tmp1842, &tmp1843, &tmp1844, &tmp1845, &tmp1846, &tmp1847, &tmp1848, &tmp1849, &tmp1850, &tmp1851, &tmp1852, &tmp1853, &tmp1854);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 137);
    compiler::TNode<IntPtrT> tmp1855 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp1855);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp1852, tmp1855}, tmp1853);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 120);
    ca_.Goto(&block77, tmp1830, tmp1831, tmp1832, tmp1833, tmp1834, tmp1835, tmp1836, tmp1837, tmp1838, tmp1839, tmp1840, tmp1841, tmp1842, tmp1843, tmp1844, tmp1845, tmp1846, tmp1847, tmp1848, tmp1849, tmp1850, tmp1851, tmp1852);
  }

  if (block76.is_used()) {
    compiler::TNode<Context> tmp1856;
    compiler::TNode<JSArray> tmp1857;
    compiler::TNode<Smi> tmp1858;
    compiler::TNode<JSReceiver> tmp1859;
    compiler::TNode<Object> tmp1860;
    compiler::TNode<Smi> tmp1861;
    compiler::TNode<JSArray> tmp1862;
    compiler::TNode<JSArray> tmp1863;
    compiler::TNode<Map> tmp1864;
    compiler::TNode<BoolT> tmp1865;
    compiler::TNode<BoolT> tmp1866;
    compiler::TNode<BoolT> tmp1867;
    compiler::TNode<FixedArray> tmp1868;
    compiler::TNode<BoolT> tmp1869;
    compiler::TNode<BoolT> tmp1870;
    compiler::TNode<BoolT> tmp1871;
    compiler::TNode<Smi> tmp1872;
    compiler::TNode<Context> tmp1873;
    compiler::TNode<Smi> tmp1874;
    compiler::TNode<Smi> tmp1875;
    compiler::TNode<Int32T> tmp1876;
    compiler::TNode<Map> tmp1877;
    compiler::TNode<JSArray> tmp1878;
    ca_.Bind(&block76, &tmp1856, &tmp1857, &tmp1858, &tmp1859, &tmp1860, &tmp1861, &tmp1862, &tmp1863, &tmp1864, &tmp1865, &tmp1866, &tmp1867, &tmp1868, &tmp1869, &tmp1870, &tmp1871, &tmp1872, &tmp1873, &tmp1874, &tmp1875, &tmp1876, &tmp1877, &tmp1878);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 140);
    compiler::TNode<JSArray> tmp1879;
    USE(tmp1879);
    tmp1879 = ca_.UncheckedCast<JSArray>(BaseBuiltinsFromDSLAssembler(state_).NewJSArray(compiler::TNode<Context>{tmp1873}, compiler::TNode<Map>{tmp1877}, compiler::TNode<FixedArrayBase>{tmp1868}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 120);
    ca_.Goto(&block77, tmp1856, tmp1857, tmp1858, tmp1859, tmp1860, tmp1861, tmp1862, tmp1863, tmp1864, tmp1865, tmp1866, tmp1867, tmp1868, tmp1869, tmp1870, tmp1871, tmp1872, tmp1873, tmp1874, tmp1875, tmp1876, tmp1877, tmp1879);
  }

  if (block77.is_used()) {
    compiler::TNode<Context> tmp1880;
    compiler::TNode<JSArray> tmp1881;
    compiler::TNode<Smi> tmp1882;
    compiler::TNode<JSReceiver> tmp1883;
    compiler::TNode<Object> tmp1884;
    compiler::TNode<Smi> tmp1885;
    compiler::TNode<JSArray> tmp1886;
    compiler::TNode<JSArray> tmp1887;
    compiler::TNode<Map> tmp1888;
    compiler::TNode<BoolT> tmp1889;
    compiler::TNode<BoolT> tmp1890;
    compiler::TNode<BoolT> tmp1891;
    compiler::TNode<FixedArray> tmp1892;
    compiler::TNode<BoolT> tmp1893;
    compiler::TNode<BoolT> tmp1894;
    compiler::TNode<BoolT> tmp1895;
    compiler::TNode<Smi> tmp1896;
    compiler::TNode<Context> tmp1897;
    compiler::TNode<Smi> tmp1898;
    compiler::TNode<Smi> tmp1899;
    compiler::TNode<Int32T> tmp1900;
    compiler::TNode<Map> tmp1901;
    compiler::TNode<JSArray> tmp1902;
    ca_.Bind(&block77, &tmp1880, &tmp1881, &tmp1882, &tmp1883, &tmp1884, &tmp1885, &tmp1886, &tmp1887, &tmp1888, &tmp1889, &tmp1890, &tmp1891, &tmp1892, &tmp1893, &tmp1894, &tmp1895, &tmp1896, &tmp1897, &tmp1898, &tmp1899, &tmp1900, &tmp1901, &tmp1902);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 144);
    compiler::TNode<FixedArray> tmp1903;
    USE(tmp1903);
    tmp1903 = BaseBuiltinsFromDSLAssembler(state_).kEmptyFixedArray();
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 145);
    ca_.Goto(&block64, tmp1880, tmp1881, tmp1882, tmp1883, tmp1884, tmp1885, tmp1886, tmp1887, tmp1888, tmp1889, tmp1890, tmp1891, tmp1903, tmp1893, tmp1894, tmp1895, tmp1896, tmp1897, tmp1898, tmp1902);
  }

  if (block64.is_used()) {
    compiler::TNode<Context> tmp1904;
    compiler::TNode<JSArray> tmp1905;
    compiler::TNode<Smi> tmp1906;
    compiler::TNode<JSReceiver> tmp1907;
    compiler::TNode<Object> tmp1908;
    compiler::TNode<Smi> tmp1909;
    compiler::TNode<JSArray> tmp1910;
    compiler::TNode<JSArray> tmp1911;
    compiler::TNode<Map> tmp1912;
    compiler::TNode<BoolT> tmp1913;
    compiler::TNode<BoolT> tmp1914;
    compiler::TNode<BoolT> tmp1915;
    compiler::TNode<FixedArray> tmp1916;
    compiler::TNode<BoolT> tmp1917;
    compiler::TNode<BoolT> tmp1918;
    compiler::TNode<BoolT> tmp1919;
    compiler::TNode<Smi> tmp1920;
    compiler::TNode<Context> tmp1921;
    compiler::TNode<Smi> tmp1922;
    compiler::TNode<JSArray> tmp1923;
    ca_.Bind(&block64, &tmp1904, &tmp1905, &tmp1906, &tmp1907, &tmp1908, &tmp1909, &tmp1910, &tmp1911, &tmp1912, &tmp1913, &tmp1914, &tmp1915, &tmp1916, &tmp1917, &tmp1918, &tmp1919, &tmp1920, &tmp1921, &tmp1922, &tmp1923);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 220);
    ca_.Goto(&block2, tmp1904, tmp1905, tmp1906, tmp1907, tmp1908, tmp1923);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp1924;
    compiler::TNode<JSArray> tmp1925;
    compiler::TNode<Smi> tmp1926;
    compiler::TNode<JSReceiver> tmp1927;
    compiler::TNode<Object> tmp1928;
    compiler::TNode<JSArray> tmp1929;
    ca_.Bind(&block2, &tmp1924, &tmp1925, &tmp1926, &tmp1927, &tmp1928, &tmp1929);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 184);
    ca_.Goto(&block88, tmp1924, tmp1925, tmp1926, tmp1927, tmp1928, tmp1929);
  }

  if (block1.is_used()) {
    compiler::TNode<JSArray> tmp1930;
    compiler::TNode<Smi> tmp1931;
    ca_.Bind(&block1, &tmp1930, &tmp1931);
    *label_Bailout_parameter_1 = tmp1931;
    *label_Bailout_parameter_0 = tmp1930;
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp1932;
    compiler::TNode<JSArray> tmp1933;
    compiler::TNode<Smi> tmp1934;
    compiler::TNode<JSReceiver> tmp1935;
    compiler::TNode<Object> tmp1936;
    compiler::TNode<JSArray> tmp1937;
    ca_.Bind(&block88, &tmp1932, &tmp1933, &tmp1934, &tmp1935, &tmp1936, &tmp1937);
  return compiler::TNode<JSArray>{tmp1937};
}

compiler::TNode<JSArray> ArrayMapBuiltinsFromDSLAssembler::FastMapSpeciesCreate(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Number> p_length, compiler::CodeAssemblerLabel* label_Bailout) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSReceiver, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSArray, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSArray, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Number, JSArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSReceiver> tmp1;
    compiler::TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 228);
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid());
    ca_.Branch(tmp3, &block3, &block4, tmp0, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<JSReceiver> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSReceiver> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 229);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp7}, compiler::TNode<HeapObject>{tmp8}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp8, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp8);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<JSReceiver> tmp14;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSReceiver> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<JSReceiver> tmp18;
    compiler::TNode<JSArray> tmp19;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 230);
    compiler::TNode<Smi> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp17}, &label0);
    ca_.Goto(&block7, tmp15, tmp16, tmp17, tmp19, tmp17, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp19, tmp17);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<JSArray> tmp24;
    compiler::TNode<Number> tmp25;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<JSReceiver> tmp27;
    compiler::TNode<Number> tmp28;
    compiler::TNode<JSArray> tmp29;
    compiler::TNode<Number> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 232);
    compiler::TNode<Context> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp26}));
    compiler::TNode<Map> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadJSArrayElementsMap(PACKED_SMI_ELEMENTS, compiler::TNode<Context>{tmp32}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 231);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 233);
    compiler::TNode<JSArray> tmp34;
    USE(tmp34);
    tmp34 = ca_.UncheckedCast<JSArray>(CodeStubAssembler(state_).AllocateJSArray(PACKED_SMI_ELEMENTS, compiler::TNode<Map>{tmp33}, compiler::TNode<Smi>{tmp31}, compiler::TNode<Smi>{tmp31}));
    ca_.Goto(&block2, tmp26, tmp27, tmp28, tmp34);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSReceiver> tmp36;
    compiler::TNode<Number> tmp37;
    compiler::TNode<JSArray> tmp38;
    ca_.Bind(&block2, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 226);
    ca_.Goto(&block9, tmp35, tmp36, tmp37, tmp38);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Bailout);
  }

    compiler::TNode<Context> tmp39;
    compiler::TNode<JSReceiver> tmp40;
    compiler::TNode<Number> tmp41;
    compiler::TNode<JSArray> tmp42;
    ca_.Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42);
  return compiler::TNode<JSArray>{tmp42};
}

TF_BUILTIN(ArrayMap, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, Object, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, Object, JSArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSArray, Number> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSArray, Number, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSArray, Smi, JSArray, Smi, JSReceiver, Object, JSArray, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSArray, Smi, JSArray, Smi, JSReceiver, Object, JSArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number, JSArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, JSReceiver, Number, JSReceiver, Object, JSReceiver, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 240);
    compiler::TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp5, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<RawPtrT> tmp9;
    compiler::TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<IntPtrT> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 243);
    compiler::TNode<JSReceiver> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ToObject_Inline(compiler::TNode<Context>{tmp11}, compiler::TNode<Object>{tmp12}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 246);
    compiler::TNode<Number> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).GetLengthProperty(compiler::TNode<Context>{tmp11}, compiler::TNode<Object>{tmp16}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 249);
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<IntPtrT>{tmp15}, compiler::TNode<IntPtrT>{tmp18}));
    ca_.Branch(tmp19, &block7, &block8, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<IntPtrT> tmp24;
    compiler::TNode<JSReceiver> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<IntPtrT> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block8, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 251);
    compiler::TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp29}, compiler::TNode<RawPtrT>{tmp30}, compiler::TNode<IntPtrT>{tmp31}}, compiler::TNode<IntPtrT>{tmp34}));
    compiler::TNode<JSReceiver> tmp36;
    USE(tmp36);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp36 = BaseBuiltinsFromDSLAssembler(state_).Cast39UT15JSBoundFunction10JSFunction7JSProxy(compiler::TNode<Context>{tmp27}, compiler::TNode<Object>{tmp35}, &label0);
    ca_.Goto(&block9, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35, tmp36);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<RawPtrT> tmp40;
    compiler::TNode<IntPtrT> tmp41;
    compiler::TNode<JSReceiver> tmp42;
    compiler::TNode<Number> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block10, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block4, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<RawPtrT> tmp47;
    compiler::TNode<RawPtrT> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<JSReceiver> tmp50;
    compiler::TNode<Number> tmp51;
    compiler::TNode<Object> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    ca_.Bind(&block9, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 254);
    compiler::TNode<IntPtrT> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp49}, compiler::TNode<IntPtrT>{tmp54}));
    ca_.Branch(tmp55, &block11, &block12, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp53);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<RawPtrT> tmp58;
    compiler::TNode<RawPtrT> tmp59;
    compiler::TNode<IntPtrT> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    compiler::TNode<Number> tmp62;
    compiler::TNode<JSReceiver> tmp63;
    ca_.Bind(&block11, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    compiler::TNode<IntPtrT> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp58}, compiler::TNode<RawPtrT>{tmp59}, compiler::TNode<IntPtrT>{tmp60}}, compiler::TNode<IntPtrT>{tmp64}));
    ca_.Goto(&block14, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp65);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<RawPtrT> tmp68;
    compiler::TNode<RawPtrT> tmp69;
    compiler::TNode<IntPtrT> tmp70;
    compiler::TNode<JSReceiver> tmp71;
    compiler::TNode<Number> tmp72;
    compiler::TNode<JSReceiver> tmp73;
    ca_.Bind(&block12, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    compiler::TNode<Oddball> tmp74;
    USE(tmp74);
    tmp74 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block13, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<RawPtrT> tmp78;
    compiler::TNode<IntPtrT> tmp79;
    compiler::TNode<JSReceiver> tmp80;
    compiler::TNode<Number> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Object> tmp83;
    ca_.Bind(&block14, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block13, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<IntPtrT> tmp88;
    compiler::TNode<JSReceiver> tmp89;
    compiler::TNode<Number> tmp90;
    compiler::TNode<JSReceiver> tmp91;
    compiler::TNode<Object> tmp92;
    ca_.Bind(&block13, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 256);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 257);
    compiler::TNode<Number> tmp93;
    USE(tmp93);
    tmp93 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31(0));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 260);
    compiler::TNode<BoolT> tmp94;
    USE(tmp94);
    tmp94 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid());
    ca_.Branch(tmp94, &block19, &block20, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, ca_.Uninitialized<JSReceiver>(), tmp93);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<RawPtrT> tmp97;
    compiler::TNode<RawPtrT> tmp98;
    compiler::TNode<IntPtrT> tmp99;
    compiler::TNode<JSReceiver> tmp100;
    compiler::TNode<Number> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Number> tmp105;
    ca_.Bind(&block19, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.Goto(&block18, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<RawPtrT> tmp108;
    compiler::TNode<RawPtrT> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    compiler::TNode<JSReceiver> tmp111;
    compiler::TNode<Number> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<JSReceiver> tmp115;
    compiler::TNode<Number> tmp116;
    ca_.Bind(&block20, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 261);
    compiler::TNode<JSArray> tmp117;
    USE(tmp117);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp117 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp106}, compiler::TNode<Object>{tmp107}, &label0);
    ca_.Goto(&block21, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp107, tmp117);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp107);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp118;
    compiler::TNode<Object> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<RawPtrT> tmp121;
    compiler::TNode<IntPtrT> tmp122;
    compiler::TNode<JSReceiver> tmp123;
    compiler::TNode<Number> tmp124;
    compiler::TNode<JSReceiver> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<Number> tmp128;
    compiler::TNode<Object> tmp129;
    ca_.Bind(&block22, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.Goto(&block18, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<RawPtrT> tmp133;
    compiler::TNode<IntPtrT> tmp134;
    compiler::TNode<JSReceiver> tmp135;
    compiler::TNode<Number> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<JSArray> tmp142;
    ca_.Bind(&block21, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 263);
    compiler::TNode<Smi> tmp143;
    USE(tmp143);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp143 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp136}, &label0);
    ca_.Goto(&block23, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp142, tmp136, tmp143);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block24, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp142, tmp136);
    }
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<RawPtrT> tmp146;
    compiler::TNode<RawPtrT> tmp147;
    compiler::TNode<IntPtrT> tmp148;
    compiler::TNode<JSReceiver> tmp149;
    compiler::TNode<Number> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<JSArray> tmp155;
    compiler::TNode<Number> tmp156;
    ca_.Bind(&block24, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156);
    ca_.Goto(&block18, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<RawPtrT> tmp159;
    compiler::TNode<RawPtrT> tmp160;
    compiler::TNode<IntPtrT> tmp161;
    compiler::TNode<JSReceiver> tmp162;
    compiler::TNode<Number> tmp163;
    compiler::TNode<JSReceiver> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<JSReceiver> tmp166;
    compiler::TNode<Number> tmp167;
    compiler::TNode<JSArray> tmp168;
    compiler::TNode<Number> tmp169;
    compiler::TNode<Smi> tmp170;
    ca_.Bind(&block23, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 266);
    compiler::TNode<JSArray> tmp171;
    USE(tmp171);
    compiler::TypedCodeAssemblerVariable<JSArray> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp171 = ArrayMapBuiltinsFromDSLAssembler(state_).FastArrayMap(compiler::TNode<Context>{tmp157}, compiler::TNode<JSArray>{tmp168}, compiler::TNode<Smi>{tmp170}, compiler::TNode<JSReceiver>{tmp164}, compiler::TNode<Object>{tmp165}, &label0, &result_0_0, &result_0_1);
    ca_.Goto(&block25, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp170, tmp168, tmp170, tmp164, tmp165, tmp171);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp170, tmp168, tmp170, tmp164, tmp165, result_0_0.value(), result_0_1.value());
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<RawPtrT> tmp174;
    compiler::TNode<RawPtrT> tmp175;
    compiler::TNode<IntPtrT> tmp176;
    compiler::TNode<JSReceiver> tmp177;
    compiler::TNode<Number> tmp178;
    compiler::TNode<JSReceiver> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<JSReceiver> tmp181;
    compiler::TNode<Number> tmp182;
    compiler::TNode<JSArray> tmp183;
    compiler::TNode<Smi> tmp184;
    compiler::TNode<JSArray> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<JSReceiver> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<JSArray> tmp189;
    compiler::TNode<Smi> tmp190;
    ca_.Bind(&block26, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.Goto(&block16, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp189, tmp190);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<RawPtrT> tmp193;
    compiler::TNode<RawPtrT> tmp194;
    compiler::TNode<IntPtrT> tmp195;
    compiler::TNode<JSReceiver> tmp196;
    compiler::TNode<Number> tmp197;
    compiler::TNode<JSReceiver> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<JSReceiver> tmp200;
    compiler::TNode<Number> tmp201;
    compiler::TNode<JSArray> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<JSArray> tmp204;
    compiler::TNode<Smi> tmp205;
    compiler::TNode<JSReceiver> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<JSArray> tmp208;
    ca_.Bind(&block25, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
    arguments.PopAndReturn(tmp208);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<RawPtrT> tmp211;
    compiler::TNode<RawPtrT> tmp212;
    compiler::TNode<IntPtrT> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    compiler::TNode<Number> tmp215;
    compiler::TNode<JSReceiver> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<JSReceiver> tmp218;
    compiler::TNode<Number> tmp219;
    ca_.Bind(&block18, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 270);
    compiler::TNode<JSReceiver> tmp220;
    USE(tmp220);
    tmp220 = ca_.UncheckedCast<JSReceiver>(CodeStubAssembler(state_).ArraySpeciesCreate(compiler::TNode<Context>{tmp209}, compiler::TNode<Object>{tmp210}, compiler::TNode<Number>{tmp215}));
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 258);
    ca_.Goto(&block17, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp220, tmp219);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<RawPtrT> tmp223;
    compiler::TNode<RawPtrT> tmp224;
    compiler::TNode<IntPtrT> tmp225;
    compiler::TNode<JSReceiver> tmp226;
    compiler::TNode<Number> tmp227;
    compiler::TNode<JSReceiver> tmp228;
    compiler::TNode<Object> tmp229;
    compiler::TNode<JSReceiver> tmp230;
    compiler::TNode<Number> tmp231;
    ca_.Bind(&block17, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 272);
    ca_.Goto(&block15, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp232;
    compiler::TNode<Object> tmp233;
    compiler::TNode<RawPtrT> tmp234;
    compiler::TNode<RawPtrT> tmp235;
    compiler::TNode<IntPtrT> tmp236;
    compiler::TNode<JSReceiver> tmp237;
    compiler::TNode<Number> tmp238;
    compiler::TNode<JSReceiver> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<JSReceiver> tmp241;
    compiler::TNode<Number> tmp242;
    compiler::TNode<JSArray> tmp243;
    compiler::TNode<Smi> tmp244;
    ca_.Bind(&block16, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 273);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 274);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 258);
    ca_.Goto(&block15, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp243, tmp244);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<RawPtrT> tmp247;
    compiler::TNode<RawPtrT> tmp248;
    compiler::TNode<IntPtrT> tmp249;
    compiler::TNode<JSReceiver> tmp250;
    compiler::TNode<Number> tmp251;
    compiler::TNode<JSReceiver> tmp252;
    compiler::TNode<Object> tmp253;
    compiler::TNode<JSReceiver> tmp254;
    compiler::TNode<Number> tmp255;
    ca_.Bind(&block15, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 277);
    compiler::TNode<Object> tmp256;
    tmp256 = CodeStubAssembler(state_).CallBuiltin(Builtins::kArrayMapLoopContinuation, tmp245, tmp250, tmp252, tmp253, tmp254, tmp250, tmp255, tmp251);
    USE(tmp256);
    arguments.PopAndReturn(tmp256);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp257;
    compiler::TNode<Object> tmp258;
    compiler::TNode<RawPtrT> tmp259;
    compiler::TNode<RawPtrT> tmp260;
    compiler::TNode<IntPtrT> tmp261;
    ca_.Bind(&block4, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 280);
    compiler::TNode<IntPtrT> tmp262;
    USE(tmp262);
    tmp262 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp263;
    USE(tmp263);
    tmp263 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp259}, compiler::TNode<RawPtrT>{tmp260}, compiler::TNode<IntPtrT>{tmp261}}, compiler::TNode<IntPtrT>{tmp262}));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp257}, MessageTemplate::kCalledNonCallable, compiler::TNode<Object>{tmp263});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp264;
    compiler::TNode<Object> tmp265;
    compiler::TNode<RawPtrT> tmp266;
    compiler::TNode<RawPtrT> tmp267;
    compiler::TNode<IntPtrT> tmp268;
    ca_.Bind(&block2, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268);
    ca_.SetSourcePosition("../../v8/src/builtins/array-map.tq", 283);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp264}, MessageTemplate::kCalledOnNullOrUndefined, "Array.prototype.map");
  }
}

}  // namespace internal
}  // namespace v8

