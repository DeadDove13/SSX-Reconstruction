/* Ghidra pseudocode. PS2 address: 001479a0. Not validated source. */

void FUN_001479a0(undefined8 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)param_1;
  fVar2 = *(float *)(iVar1 + 0x10);
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
    *(undefined4 *)(iVar1 + 0x208) = 0;
  }
  else {
    FUN_00147cc8(param_1);
  }
  *(float *)(iVar1 + 0xc) = (fVar2 * -30.0) / (float)(param_2 * 0x3c);
  return;
}

