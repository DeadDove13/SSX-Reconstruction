/* Ghidra pseudocode. PS2 address: 0010a030. Not validated source. */

float FUN_0010a030(int param_1)

{
  float fVar1;
  
  fVar1 = (float)*(byte *)(*(int *)(param_1 + 0x394) + 0x20) *
          ((float)*(byte *)(*(int *)(param_1 + 0x394) + 0x12) * DAT_002c1200 * DAT_002c1204 +
          DAT_002c1208);
  return *(float *)(param_1 + 0xa8) * DAT_002c120c * fVar1 + fVar1;
}

