/* Ghidra pseudocode. PS2 address: 00208fb8. Not validated source. */

void FUN_00208fb8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
            (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),
             *(int *)(param_1 + 0x9c) < 0x3c,0x2bd270,0x2bd1f8,0xe1);
  iVar1 = *(int *)(param_1 + 0x9c);
  lVar4 = FUN_0023a448(0x2bd2b0,0x48,0);
  if (lVar4 != 0) {
    FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0x48);
  }
  uVar3 = FUN_00208968(lVar4,param_1 + 0x48,param_2);
  iVar2 = *(int *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0 + iVar1 * 4) = uVar3;
  *(int *)(param_1 + 0x9c) = iVar2 + 1;
  return;
}

