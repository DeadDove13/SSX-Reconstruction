/* Ghidra pseudocode. PS2 address: 0012f460. Not validated source. */

void FUN_0012f460(float param_1,float param_2,int param_3,undefined8 param_4)

{
  if (*(int *)(param_3 + 0x18) != 0) {
    FUN_001a90b8(param_1 + *(float *)(param_3 + 4),param_2 + *(float *)(param_3 + 8),0x3f800000,
                 0x3f800000,param_4,*(undefined4 *)(param_3 + *(int *)(param_3 + 0x14) * 4 + 0x20),
                 *(undefined4 *)(param_3 + 0xc));
    return;
  }
  return;
}

