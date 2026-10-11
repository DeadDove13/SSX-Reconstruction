/* Ghidra pseudocode. PS2 address: 001b09b8. Not validated source. */

void FUN_001b09b8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_001ab478(0x42fa0000,param_1 + 0x180);
  DAT_0028b248 = 0x42dc0000;
  DAT_0028b24c = 0x43c80000;
  uVar3 = FUN_00234e80(DAT_002852fc,0xe);
  FUN_0019a7f8(0x28f670,uVar3);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  uVar2 = DAT_002852fc;
  *(undefined4 *)(param_1 + 0x188) = 1;
  uVar1 = FUN_00234e80(uVar2,0x72);
  uVar2 = DAT_002852fc;
  iVar4 = *(int *)(param_1 + 0x1b4) + 1;
  *(undefined4 *)(param_1 + 0x18c) = 2;
  *(int *)(param_1 + 0x1b4) = iVar4;
  *(undefined4 *)(param_1 + 400) = uVar1;
  uVar2 = FUN_00234e80(uVar2,0x73);
  iVar4 = iVar4 * 8 + param_1;
  *(undefined4 *)(iVar4 + 0x18c) = 3;
  *(undefined4 *)(iVar4 + 400) = uVar2;
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  return;
}

