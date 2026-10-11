/* Ghidra pseudocode. PS2 address: 00107db8. Not validated source. */

void FUN_00107db8(int param_1)

{
  float fVar1;
  
  if (((*(int *)(param_1 + 0x348) < 0) && (*(float *)(param_1 + 0x1c) != 0.0)) &&
     (fVar1 = *(float *)(param_1 + 0x1c) -
              ((float)*(byte *)(*(int *)(param_1 + 0x394) + 0x1b) * DAT_002c1184 * DAT_002c1188 +
              DAT_002c118c) * DAT_002c1190, *(float *)(param_1 + 0x1c) = fVar1, fVar1 < 0.0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

