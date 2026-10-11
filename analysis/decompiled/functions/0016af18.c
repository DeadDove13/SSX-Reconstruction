/* Ghidra pseudocode. PS2 address: 0016af18. Not validated source. */

void FUN_0016af18(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_001d98f0(param_1);
  if (*(int *)(iVar1 + 0x44) == 1) {
    *(undefined4 *)(iVar1 + 0x180) = 1;
  }
  else if ((*(int *)(iVar1 + 0x44) == 0x1f) && (*(int *)(iVar1 + 400) != 1)) {
    *(undefined4 *)(iVar1 + 0x184) = 1;
  }
  return;
}

