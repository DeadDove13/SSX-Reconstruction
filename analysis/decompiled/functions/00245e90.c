/* Ghidra pseudocode. PS2 address: 00245e90. Not validated source. */

void FUN_00245e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float param_7,float param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  float fVar2;
  float in_stack_00000000;
  undefined4 auStack_a0 [5];
  undefined4 uStack_8c;
  float fStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  
  fVar2 = (in_stack_00000000 * param_8 * (-param_6 + param_7)) / (-param_8 + in_stack_00000000);
  FUN_002459a8();
  puVar1 = (undefined4 *)param_9;
  puVar1[5] = param_1;
  *puVar1 = param_1;
  puVar1[10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xb] = 0x3f800000;
  puVar1[0xe] = 0x3f800000;
  FUN_002459a8(auStack_a0);
  auStack_a0[0] = param_2;
  uStack_8c = param_3;
  fStack_78 = fVar2;
  uStack_70 = param_4;
  uStack_6c = param_5;
  fStack_68 = (-param_7 * param_8 + param_6 * in_stack_00000000) / (-param_8 + in_stack_00000000);
  FUN_002456b8(param_9,auStack_a0,param_9);
  return;
}

