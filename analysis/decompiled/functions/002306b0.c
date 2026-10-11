/* Ghidra pseudocode. PS2 address: 002306b0. Not validated source. */

undefined4 FUN_002306b0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar1 < uVar2) {
    *(uint *)(param_1 + 0x14) = uVar1 + param_2;
    if (uVar1 + param_2 < uVar2) {
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_0022d7d0(param_4,*(int *)(param_1 + 0x10) + uVar1 * 2,param_2 << 1);
        return 1;
      }
    }
    else {
      iVar4 = uVar2 - uVar1;
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_0022d7d0(param_4,*(int *)(param_1 + 0x10) + uVar1 * 2,iVar4 * 2);
      }
      FUN_0022d8c8((int)param_4 + iVar4 * 2,(param_2 - iVar4) * 2);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

