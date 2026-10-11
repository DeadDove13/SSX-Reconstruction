/* Ghidra pseudocode. PS2 address: 001ab908. Not validated source. */

void FUN_001ab908(undefined4 *param_1)

{
  int iVar1;
  
  FUN_001aae20(*param_1);
  param_1[0xf] = 0;
  iVar1 = param_1[0x10] + 1;
  param_1[0x10] = iVar1;
  if (iVar1 < 0x24) {
    param_1[0xf] = 1;
  }
  else if (0x36 < iVar1) {
    param_1[0x10] = 0;
  }
  return;
}

