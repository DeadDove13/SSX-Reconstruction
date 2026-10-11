/* Ghidra pseudocode. PS2 address: 00111f98. Not validated source. */

void FUN_00111f98(undefined8 param_1)

{
  int iVar1;
  
  FUN_0010b340(param_1,1);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x350) != 10) {
    *(undefined4 *)(iVar1 + 0x158) = *(undefined4 *)(iVar1 + 0x198);
    FUN_00112008(0,param_1);
    FUN_0010b330(param_1,0xd);
    return;
  }
  FUN_00112008(0,param_1);
  FUN_00111500(param_1);
  return;
}

