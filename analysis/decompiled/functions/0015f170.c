/* Ghidra pseudocode. PS2 address: 0015f170. Not validated source. */

void FUN_0015f170(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x28) == 0) && (DAT_002c473c == 0)) {
    if ((param_2 == 1) && (*(int *)(iVar1 + 0x418) != 1)) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x418);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      FUN_0015f150(param_1,1);
      return;
    }
    if ((param_2 == 0) && (*(int *)(iVar1 + 0x418) == 1)) {
      FUN_0015f150(param_1,*(undefined4 *)(iVar1 + 0x10));
      return;
    }
  }
  return;
}

