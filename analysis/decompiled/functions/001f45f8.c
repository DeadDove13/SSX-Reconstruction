/* Ghidra pseudocode. PS2 address: 001f45f8. Not validated source. */

void FUN_001f45f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_001f46a8();
  uVar3 = 0x10;
  uVar1 = FUN_002369a0(param_2,param_3);
  if (param_3 != 0) {
    uVar3 = 0;
  }
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),uVar1,0x2bc7a8,
             0x2bc7b8,0x52);
  uVar2 = FUN_0023b460(uVar1);
  FUN_001f4500(param_1,uVar1,uVar3,uVar2);
  return;
}

