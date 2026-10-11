/* Ghidra pseudocode. PS2 address: 0023c490. Not validated source. */

void FUN_0023c490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_3;
  lVar1 = FUN_00239028(*(undefined4 *)(iVar2 + 0xa4));
  *(int *)(iVar2 + 0x9c) = (int)lVar1;
  if (lVar1 != 0) {
    FUN_0023c7f0(param_3,*(undefined4 *)(iVar2 + 0x30));
    return;
  }
  return;
}

