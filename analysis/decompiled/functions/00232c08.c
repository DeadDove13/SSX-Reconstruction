/* Ghidra pseudocode. PS2 address: 00232c08. Not validated source. */

void FUN_00232c08(float param_1,int param_2)

{
  short sVar1;
  
  sVar1 = (short)(int)(param_1 * 32768.0);
  *(short *)(param_2 + 0x16) = sVar1;
  *(short *)(param_2 + 0x14) = -0x8000 - sVar1;
  return;
}

