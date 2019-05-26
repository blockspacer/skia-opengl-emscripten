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

compiler::TNode<JSObject> ObjectBuiltinsFromDSLAssembler::ObjectFromEntriesFastCase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 9);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 10);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 12);
    compiler::TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp12);
    compiler::TNode<FixedArrayBase>tmp13 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp12});
    compiler::TNode<FixedArray> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = BaseBuiltinsFromDSLAssembler(state_).Cast10FixedArray(compiler::TNode<HeapObject>{tmp13}, &label0);
    ca_.Goto(&block7, tmp7, tmp8, tmp9, tmp11, tmp13, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp11, tmp13);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSArray> tmp18;
    compiler::TNode<FixedArrayBase> tmp19;
    ca_.Bind(&block8, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<JSArray> tmp23;
    compiler::TNode<FixedArrayBase> tmp24;
    compiler::TNode<FixedArray> tmp25;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 11);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 13);
    compiler::TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp23}));
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 14);
    compiler::TNode<JSObject> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<JSObject>(BaseBuiltinsFromDSLAssembler(state_).NewJSObject(compiler::TNode<Context>{tmp20}));
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 16);
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block11, tmp20, tmp21, tmp22, tmp23, tmp25, tmp26, tmp27, tmp28);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSArray> tmp32;
    compiler::TNode<FixedArray> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<JSObject> tmp35;
    compiler::TNode<Smi> tmp36;
    ca_.Bind(&block11, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    compiler::TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp36}, compiler::TNode<Smi>{tmp34}));
    ca_.Branch(tmp37, &block9, &block10, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp38;
    compiler::TNode<Object> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<JSArray> tmp41;
    compiler::TNode<FixedArray> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<JSObject> tmp44;
    compiler::TNode<Smi> tmp45;
    ca_.Bind(&block9, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 17);
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(compiler::TNode<FixedArray>{tmp42}, compiler::TNode<Smi>{tmp45}));
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 19);
    compiler::TNode<Object> tmp47;
    USE(tmp47);
    compiler::TNode<Object> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp47, tmp48) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePairNoSideEffects(compiler::TNode<Context>{tmp38}, compiler::TNode<Object>{tmp46}, &label0).Flatten();
    ca_.Goto(&block13, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp46, tmp47, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp46);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSArray> tmp52;
    compiler::TNode<FixedArray> tmp53;
    compiler::TNode<Smi> tmp54;
    compiler::TNode<JSObject> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    ca_.Bind(&block14, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    compiler::TNode<JSArray> tmp62;
    compiler::TNode<FixedArray> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<JSObject> tmp65;
    compiler::TNode<Smi> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<Object> tmp70;
    ca_.Bind(&block13, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 18);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 24);
    compiler::TNode<BoolT> tmp71;
    USE(tmp71);
    tmp71 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is10JSReceiver20UT5ATSmi10HeapObject(compiler::TNode<Context>{tmp59}, compiler::TNode<Object>{tmp69}));
    ca_.Branch(tmp71, &block15, &block16, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69, tmp70);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<Object> tmp73;
    compiler::TNode<Object> tmp74;
    compiler::TNode<JSArray> tmp75;
    compiler::TNode<FixedArray> tmp76;
    compiler::TNode<Smi> tmp77;
    compiler::TNode<JSObject> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<Object> tmp81;
    compiler::TNode<Object> tmp82;
    ca_.Bind(&block15, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<JSArray> tmp86;
    compiler::TNode<FixedArray> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<JSObject> tmp89;
    compiler::TNode<Smi> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block16, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 25);
    compiler::TNode<Object> tmp94;
    tmp94 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp83, tmp89, tmp92, tmp93);
    USE(tmp94);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 16);
    ca_.Goto(&block12, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    compiler::TNode<JSArray> tmp98;
    compiler::TNode<FixedArray> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<JSObject> tmp101;
    compiler::TNode<Smi> tmp102;
    ca_.Bind(&block12, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    compiler::TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp102}, compiler::TNode<Smi>{tmp103}));
    ca_.Goto(&block11, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp104);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp105;
    compiler::TNode<Object> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<JSArray> tmp108;
    compiler::TNode<FixedArray> tmp109;
    compiler::TNode<Smi> tmp110;
    compiler::TNode<JSObject> tmp111;
    compiler::TNode<Smi> tmp112;
    ca_.Bind(&block10, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 27);
    ca_.Goto(&block2, tmp105, tmp106, tmp111);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    ca_.Bind(&block4, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 29);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 30);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<JSObject> tmp118;
    ca_.Bind(&block2, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 7);
    ca_.Goto(&block17, tmp116, tmp117, tmp118);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    compiler::TNode<Context> tmp119;
    compiler::TNode<Object> tmp120;
    compiler::TNode<JSObject> tmp121;
    ca_.Bind(&block17, &tmp119, &tmp120, &tmp121);
  return compiler::TNode<JSObject>{tmp121};
}

TF_BUILTIN(ObjectFromEntries, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, Object, JSObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, BoolT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object, Object, Map, Object> block24(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object, Object, Object, Object, JSObject, Object, Object, Object> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object, JSObject, Map, JSReceiver, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, torque_arguments.frame, torque_arguments.base, torque_arguments.length);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<RawPtrT> tmp2;
    compiler::TNode<RawPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 38);
    compiler::TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(BaseBuiltinsFromDSLAssembler::Arguments{compiler::TNode<RawPtrT>{tmp2}, compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4}}, compiler::TNode<IntPtrT>{tmp5}));
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 40);
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(compiler::TNode<Object>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    compiler::TNode<RawPtrT> tmp11;
    compiler::TNode<IntPtrT> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<RawPtrT> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<IntPtrT> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 41);
    compiler::TNode<JSObject> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = ObjectBuiltinsFromDSLAssembler(state_).ObjectFromEntriesFastCase(compiler::TNode<Context>{tmp14}, compiler::TNode<Object>{tmp19}, &label0);
    ca_.Goto(&block7, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp19, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp19);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<RawPtrT> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    compiler::TNode<RawPtrT> tmp31;
    compiler::TNode<IntPtrT> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSObject> tmp35;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    arguments.PopAndReturn(tmp35);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<RawPtrT> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<IntPtrT> tmp40;
    compiler::TNode<Object> tmp41;
    ca_.Bind(&block4, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 44);
    compiler::TNode<JSObject> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<JSObject>(BaseBuiltinsFromDSLAssembler(state_).NewJSObject(compiler::TNode<Context>{tmp36}));
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 45);
    compiler::TNode<Map> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Map>(BaseBuiltinsFromDSLAssembler(state_).GetIteratorResultMap(compiler::TNode<Context>{tmp36}));
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 46);
    compiler::TNode<JSReceiver> tmp44;
    USE(tmp44);
    compiler::TNode<Object> tmp45;
    USE(tmp45);
    std::tie(tmp44, tmp45) = IteratorBuiltinsAssembler(state_).GetIterator(compiler::TNode<Context>{tmp36}, compiler::TNode<Object>{tmp41}).Flatten();
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 48);
    compiler::TNode<BoolT> tmp46;
    USE(tmp46);
    compiler::CodeAssemblerExceptionHandlerLabel catch47_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch47_label);
    tmp46 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNullOrUndefined(compiler::TNode<Object>{tmp44}));
    }
    if (catch47_label.is_used()) {
      compiler::CodeAssemblerLabel catch47_skip(&ca_);
      ca_.Goto(&catch47_skip);
      compiler::TNode<Object> catch47_exception_object;
      ca_.Bind(&catch47_label, &catch47_exception_object);
      ca_.Goto(&block13, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp44, catch47_exception_object);
      ca_.Bind(&catch47_skip);
    }
    compiler::TNode<BoolT> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerExceptionHandlerLabel catch49_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch49_label);
    tmp48 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp46}));
    }
    if (catch49_label.is_used()) {
      compiler::CodeAssemblerLabel catch49_skip(&ca_);
      ca_.Goto(&catch49_skip);
      compiler::TNode<Object> catch49_exception_object;
      ca_.Bind(&catch49_label, &catch49_exception_object);
      ca_.Goto(&block14, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, catch49_exception_object);
      ca_.Bind(&catch49_skip);
    }
    ca_.Branch(tmp48, &block11, &block12, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<JSObject> tmp56;
    compiler::TNode<Map> tmp57;
    compiler::TNode<JSReceiver> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block13, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.Goto(&block10, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<RawPtrT> tmp64;
    compiler::TNode<RawPtrT> tmp65;
    compiler::TNode<IntPtrT> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<JSObject> tmp68;
    compiler::TNode<Map> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Object> tmp71;
    compiler::TNode<BoolT> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block14, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block10, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp74;
    compiler::TNode<Object> tmp75;
    compiler::TNode<RawPtrT> tmp76;
    compiler::TNode<RawPtrT> tmp77;
    compiler::TNode<IntPtrT> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<JSObject> tmp80;
    compiler::TNode<Map> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Object> tmp83;
    ca_.Bind(&block12, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    CodeStubAssembler(state_).FailAssert("Torque assert \'!IsNullOrUndefined(i.object)\' failed", "../../v8/src/builtins/object-fromentries.tq", 48);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<RawPtrT> tmp86;
    compiler::TNode<RawPtrT> tmp87;
    compiler::TNode<IntPtrT> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSObject> tmp90;
    compiler::TNode<Map> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Object> tmp93;
    ca_.Bind(&block11, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 49);
    ca_.Goto(&block17, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<RawPtrT> tmp96;
    compiler::TNode<RawPtrT> tmp97;
    compiler::TNode<IntPtrT> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<JSObject> tmp100;
    compiler::TNode<Map> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<Object> tmp103;
    ca_.Bind(&block17, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    compiler::TNode<BoolT> tmp104;
    USE(tmp104);
    compiler::CodeAssemblerExceptionHandlerLabel catch105_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch105_label);
    tmp104 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    }
    if (catch105_label.is_used()) {
      compiler::CodeAssemblerLabel catch105_skip(&ca_);
      ca_.Goto(&catch105_skip);
      compiler::TNode<Object> catch105_exception_object;
      ca_.Bind(&catch105_label, &catch105_exception_object);
      ca_.Goto(&block18, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, catch105_exception_object);
      ca_.Bind(&catch105_skip);
    }
    ca_.Branch(tmp104, &block15, &block16, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<RawPtrT> tmp108;
    compiler::TNode<RawPtrT> tmp109;
    compiler::TNode<IntPtrT> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSObject> tmp112;
    compiler::TNode<Map> tmp113;
    compiler::TNode<JSReceiver> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<Object> tmp116;
    ca_.Bind(&block18, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block10, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<RawPtrT> tmp119;
    compiler::TNode<RawPtrT> tmp120;
    compiler::TNode<IntPtrT> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<JSObject> tmp123;
    compiler::TNode<Map> tmp124;
    compiler::TNode<JSReceiver> tmp125;
    compiler::TNode<Object> tmp126;
    ca_.Bind(&block15, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 50);
    compiler::TNode<Object> tmp127;
    USE(tmp127);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch128_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch128_label);
    tmp127 = IteratorBuiltinsAssembler(state_).IteratorStep(compiler::TNode<Context>{tmp117}, IteratorBuiltinsFromDSLAssembler::IteratorRecord{compiler::TNode<JSReceiver>{tmp125}, compiler::TNode<Object>{tmp126}}, compiler::TNode<Map>{tmp124}, &label0);
    }
    if (catch128_label.is_used()) {
      compiler::CodeAssemblerLabel catch128_skip(&ca_);
      ca_.Goto(&catch128_skip);
      compiler::TNode<Object> catch128_exception_object;
      ca_.Bind(&catch128_label, &catch128_exception_object);
      ca_.Goto(&block23, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp125, tmp126, tmp124, catch128_exception_object);
      ca_.Bind(&catch128_skip);
    }
    ca_.Goto(&block21, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp125, tmp126, tmp124, tmp127);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp125, tmp126, tmp124);
    }
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<RawPtrT> tmp131;
    compiler::TNode<RawPtrT> tmp132;
    compiler::TNode<IntPtrT> tmp133;
    compiler::TNode<Object> tmp134;
    compiler::TNode<JSObject> tmp135;
    compiler::TNode<Map> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<JSReceiver> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Map> tmp141;
    compiler::TNode<Object> tmp142;
    ca_.Bind(&block23, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.Goto(&block10, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp142);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<RawPtrT> tmp145;
    compiler::TNode<RawPtrT> tmp146;
    compiler::TNode<IntPtrT> tmp147;
    compiler::TNode<Object> tmp148;
    compiler::TNode<JSObject> tmp149;
    compiler::TNode<Map> tmp150;
    compiler::TNode<JSReceiver> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSReceiver> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Map> tmp155;
    ca_.Bind(&block22, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.Goto(&block20, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<RawPtrT> tmp158;
    compiler::TNode<RawPtrT> tmp159;
    compiler::TNode<IntPtrT> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<JSObject> tmp162;
    compiler::TNode<Map> tmp163;
    compiler::TNode<JSReceiver> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<JSReceiver> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<Map> tmp168;
    compiler::TNode<Object> tmp169;
    ca_.Bind(&block21, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.Goto(&block19, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp169);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<RawPtrT> tmp172;
    compiler::TNode<RawPtrT> tmp173;
    compiler::TNode<IntPtrT> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<JSObject> tmp176;
    compiler::TNode<Map> tmp177;
    compiler::TNode<JSReceiver> tmp178;
    compiler::TNode<Object> tmp179;
    ca_.Bind(&block20, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 51);
    arguments.PopAndReturn(tmp176);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<RawPtrT> tmp182;
    compiler::TNode<RawPtrT> tmp183;
    compiler::TNode<IntPtrT> tmp184;
    compiler::TNode<Object> tmp185;
    compiler::TNode<JSObject> tmp186;
    compiler::TNode<Map> tmp187;
    compiler::TNode<JSReceiver> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Object> tmp190;
    ca_.Bind(&block19, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 50);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 53);
    compiler::TNode<Object> tmp191;
    USE(tmp191);
    compiler::CodeAssemblerExceptionHandlerLabel catch192_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch192_label);
    tmp191 = ca_.UncheckedCast<Object>(IteratorBuiltinsAssembler(state_).IteratorValue(compiler::TNode<Context>{tmp180}, compiler::TNode<Object>{tmp190}, compiler::TNode<Map>{tmp187}));
    }
    if (catch192_label.is_used()) {
      compiler::CodeAssemblerLabel catch192_skip(&ca_);
      ca_.Goto(&catch192_skip);
      compiler::TNode<Object> catch192_exception_object;
      ca_.Bind(&catch192_label, &catch192_exception_object);
      ca_.Goto(&block24, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp190, tmp187, catch192_exception_object);
      ca_.Bind(&catch192_skip);
    }
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 52);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 55);
    compiler::TNode<Object> tmp193;
    USE(tmp193);
    compiler::TNode<Object> tmp194;
    USE(tmp194);
    compiler::CodeAssemblerExceptionHandlerLabel catch195_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch195_label);
    std::tie(tmp193, tmp194) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePair(compiler::TNode<Context>{tmp180}, compiler::TNode<Object>{tmp191}).Flatten();
    }
    if (catch195_label.is_used()) {
      compiler::CodeAssemblerLabel catch195_skip(&ca_);
      ca_.Goto(&catch195_skip);
      compiler::TNode<Object> catch195_exception_object;
      ca_.Bind(&catch195_label, &catch195_exception_object);
      ca_.Goto(&block25, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp191, catch195_exception_object);
      ca_.Bind(&catch195_skip);
    }
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 54);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 56);
    compiler::TNode<Object> tmp196;
    compiler::CodeAssemblerExceptionHandlerLabel catch197_label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch197_label);
    tmp196 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp180, tmp186, tmp193, tmp194);
    USE(tmp196);
    }
    if (catch197_label.is_used()) {
      compiler::CodeAssemblerLabel catch197_skip(&ca_);
      ca_.Goto(&catch197_skip);
      compiler::TNode<Object> catch197_exception_object;
      ca_.Bind(&catch197_label, &catch197_exception_object);
      ca_.Goto(&block26, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp193, tmp194, tmp186, tmp193, tmp194, catch197_exception_object);
      ca_.Bind(&catch197_skip);
    }
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 49);
    ca_.Goto(&block17, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<RawPtrT> tmp200;
    compiler::TNode<RawPtrT> tmp201;
    compiler::TNode<IntPtrT> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<JSObject> tmp204;
    compiler::TNode<Map> tmp205;
    compiler::TNode<JSReceiver> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<Map> tmp210;
    compiler::TNode<Object> tmp211;
    ca_.Bind(&block24, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 53);
    ca_.Goto(&block10, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp211);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<RawPtrT> tmp214;
    compiler::TNode<RawPtrT> tmp215;
    compiler::TNode<IntPtrT> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<JSObject> tmp218;
    compiler::TNode<Map> tmp219;
    compiler::TNode<JSReceiver> tmp220;
    compiler::TNode<Object> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Object> tmp225;
    ca_.Bind(&block25, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 55);
    ca_.Goto(&block10, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp225);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<RawPtrT> tmp228;
    compiler::TNode<RawPtrT> tmp229;
    compiler::TNode<IntPtrT> tmp230;
    compiler::TNode<Object> tmp231;
    compiler::TNode<JSObject> tmp232;
    compiler::TNode<Map> tmp233;
    compiler::TNode<JSReceiver> tmp234;
    compiler::TNode<Object> tmp235;
    compiler::TNode<Object> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<Object> tmp239;
    compiler::TNode<JSObject> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<Object> tmp243;
    ca_.Bind(&block26, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 56);
    ca_.Goto(&block10, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp243);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<RawPtrT> tmp246;
    compiler::TNode<RawPtrT> tmp247;
    compiler::TNode<IntPtrT> tmp248;
    compiler::TNode<Object> tmp249;
    compiler::TNode<JSObject> tmp250;
    compiler::TNode<Map> tmp251;
    compiler::TNode<JSReceiver> tmp252;
    compiler::TNode<Object> tmp253;
    ca_.Bind(&block16, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 58);
    arguments.PopAndReturn(tmp250);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp254;
    compiler::TNode<Object> tmp255;
    compiler::TNode<RawPtrT> tmp256;
    compiler::TNode<RawPtrT> tmp257;
    compiler::TNode<IntPtrT> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<JSObject> tmp260;
    compiler::TNode<Map> tmp261;
    compiler::TNode<JSReceiver> tmp262;
    compiler::TNode<Object> tmp263;
    compiler::TNode<Object> tmp264;
    ca_.Bind(&block10, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 60);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(compiler::TNode<Context>{tmp254}, IteratorBuiltinsFromDSLAssembler::IteratorRecord{compiler::TNode<JSReceiver>{tmp262}, compiler::TNode<Object>{tmp263}}, compiler::TNode<Object>{tmp264});
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp265;
    compiler::TNode<Object> tmp266;
    compiler::TNode<RawPtrT> tmp267;
    compiler::TNode<RawPtrT> tmp268;
    compiler::TNode<IntPtrT> tmp269;
    compiler::TNode<Object> tmp270;
    ca_.Bind(&block2, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270);
    ca_.SetSourcePosition("../../v8/src/builtins/object-fromentries.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp265}, MessageTemplate::kNotIterable);
  }
}

}  // namespace internal
}  // namespace v8

