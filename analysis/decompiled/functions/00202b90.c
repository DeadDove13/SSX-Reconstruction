/* Ghidra pseudocode. PS2 address: 00202b90. Not validated source. */

int FUN_00202b90(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(float *)(param_1 + 0x1a4) * 127.0);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

