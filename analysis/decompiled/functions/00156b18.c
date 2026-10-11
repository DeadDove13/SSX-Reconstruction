/* Ghidra pseudocode. PS2 address: 00156b18. Not validated source. */

undefined4 FUN_00156b18(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00156b78(param_1,param_2);
  uVar2 = 0xffffffff;
  if (*(int *)((int)param_1 + iVar1 * 0x50 + 0x1510) == param_2) {
    uVar2 = *(undefined4 *)((int)param_1 + iVar1 * 0x50 + 0x1540);
  }
  return uVar2;
}

