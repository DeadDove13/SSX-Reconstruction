/* Ghidra pseudocode. PS2 address: 00242c88. Not validated source. */

bool FUN_00242c88(byte param_1,byte param_2,int param_3)

{
  return (byte)((*(byte *)(param_3 + 2) ^ param_1) & *(byte *)(param_3 + 1) & ~param_2) == 0;
}

