/* Ghidra pseudocode. PS2 address: 00196d58. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00196d70) */

void FUN_00196d58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  iVar1 = *(int *)(iVar3 + 0xc);
  if ((iVar1 + -1) % 200 == 199) {
    if (0x6337 < iVar1) {
      iVar1 = *(int *)(DAT_002859e4 + 0x38);
      *(undefined4 *)(iVar1 + 0x34) = 0xb4;
      *(undefined4 *)(iVar1 + 0x38) = 1;
      return;
    }
    lVar2 = FUN_00196c30(param_1,param_2,200);
    if (lVar2 == 0) {
      return;
    }
    *(int *)(iVar3 + 8) = (int)lVar2;
  }
  else {
    *(undefined1 *)(*(int *)(iVar3 + 8) + iVar1 % 200 + 0x324) = 1;
    *(undefined4 *)((iVar1 % 200) * 4 + *(int *)(iVar3 + 8) + 4) = *(undefined4 *)param_2;
  }
  *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  return;
}

