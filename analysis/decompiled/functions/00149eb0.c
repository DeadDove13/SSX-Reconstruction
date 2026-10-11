/* Ghidra pseudocode. PS2 address: 00149eb0. Not validated source. */

void FUN_00149eb0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_2;
  fVar2 = *(float *)(*(int *)(iVar1 + 0x220) + 0x180);
  FUN_001478c8(param_2,0,0x42);
  fVar2 = (float)(int)((*(uint *)(*(int *)(*(int *)(iVar1 + 0x224) + 8) + 0xc) >> 7 & 0xff) - 1) *
          fVar2;
  if (fVar2 < 0.0) {
    *(undefined4 *)(iVar1 + 0x1e8) = 0;
  }
  else {
    *(float *)(iVar1 + 0x1e8) = fVar2;
  }
  *(undefined4 *)(iVar1 + 0x1e4) = 1;
  *(undefined4 *)(iVar1 + 500) = 0x3f800000;
  return;
}

