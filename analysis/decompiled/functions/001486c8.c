/* Ghidra pseudocode. PS2 address: 001486c8. Not validated source. */

undefined4 FUN_001486c8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x1a6;
  iVar2 = *(int *)((int)param_1 + 0x34);
  while (iVar2 != (int)param_1 + 0x1d4) {
    if (*(int *)(iVar2 + 0x1e0) == 6) {
      iVar1 = *(int *)(iVar2 + 0x34);
      FUN_001eacb0(param_1,iVar2);
      iVar2 = iVar1;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x1dc);
      iVar2 = *(int *)(iVar2 + 0x34);
    }
  }
  return uVar3;
}

