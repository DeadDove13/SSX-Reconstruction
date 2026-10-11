/* Ghidra pseudocode. PS2 address: 001b0aa8. Not validated source. */

void FUN_001b0aa8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00234e80(DAT_002852fc,0x3d);
  uVar3 = FUN_00234e80(DAT_002852fc,0x3e);
  uVar4 = FUN_00234e80(DAT_002852fc,0x3f);
  uVar5 = FUN_00234e80(DAT_002852fc,0x40);
  FUN_0019a7c0(uVar2);
  FUN_0019a7c0(uVar3);
  FUN_0019a7c0(uVar4);
  FUN_0019a7c0(uVar5);
  iVar1 = FUN_00154948(0x27a598,DAT_0027ba84);
  if (iVar1 == 3) {
    FUN_0019a7f8(param_1 + 0x1d8,uVar5);
    return;
  }
  if (iVar1 < *(int *)(param_1 + 0x1d4)) {
    FUN_0019a7f8(param_1 + 0x1d8,uVar2);
    return;
  }
  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_0019a7f8(param_1 + 0x1d8,uVar4);
    return;
  }
  FUN_0019a7f8(param_1 + 0x1d8,uVar3);
  return;
}

