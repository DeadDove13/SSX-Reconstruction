/* Ghidra pseudocode. PS2 address: 00195758. Not validated source. */

void FUN_00195758(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(int *)(iVar1 + 0x48) == 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_00196720(param_1);
  }
  *(undefined4 *)(iVar1 + 0x48) = 1;
  return;
}

