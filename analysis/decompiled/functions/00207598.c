/* Ghidra pseudocode. PS2 address: 00207598. Not validated source. */

undefined4 FUN_00207598(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)param_1 + 0x35f88);
  iVar2 = *(int *)(*(int *)(iVar1 + 8) * 0x1c + *(int *)((int)param_1 + 0x351c4));
  if (iVar2 == 1) {
    FUN_002074a0(param_1,iVar1);
    uVar3 = 1;
  }
  else {
    uVar3 = 1;
    if ((1 < iVar2) && (uVar3 = 1, iVar2 == 2)) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

