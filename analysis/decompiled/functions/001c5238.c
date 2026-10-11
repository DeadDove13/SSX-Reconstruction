/* Ghidra pseudocode. PS2 address: 001c5238. Not validated source. */

void FUN_001c5238(float param_1,int param_2,int param_3,int param_4,long param_5)

{
  undefined4 uVar1;
  
  if (param_5 == 1) {
    if (*(int *)(param_2 + 0x2c) == param_3) {
      if (*(int *)(param_2 + 0x30) == param_4) {
        if (*(float *)(param_2 + 0x34) == param_1) {
          return;
        }
        uVar1 = *(undefined4 *)(param_2 + 8);
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 8);
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 8);
    }
    *(int *)(param_2 + 0x2c) = param_3;
    *(int *)(param_2 + 0x30) = param_4;
    *(float *)(param_2 + 0x34) = param_1;
    FUN_001d3828(uVar1,param_2 + 0xc);
    return;
  }
  if (param_5 == 2) {
    if (*(int *)(param_2 + 0x44) == param_3) {
      if (*(int *)(param_2 + 0x48) == param_4) {
        if (*(float *)(param_2 + 0x4c) == param_1) {
          return;
        }
        uVar1 = *(undefined4 *)(param_2 + 8);
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 8);
      }
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 8);
    }
    *(int *)(param_2 + 0x44) = param_3;
    *(int *)(param_2 + 0x48) = param_4;
    *(float *)(param_2 + 0x4c) = param_1;
    FUN_001d3828(uVar1,param_2 + 0xc);
    return;
  }
  return;
}

