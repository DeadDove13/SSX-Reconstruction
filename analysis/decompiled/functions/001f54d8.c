/* Ghidra pseudocode. PS2 address: 001f54d8. Not validated source. */

undefined4 FUN_001f54d8(float param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x8c);
  uVar1 = 1;
  if (fVar2 != 0.0) {
    if (*(int *)(param_2 + 8) == 0) {
      uVar1 = 0;
      if (param_1 < fVar2) {
        FUN_001f5238();
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
      if (fVar2 < param_1) {
        FUN_001f5210();
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

