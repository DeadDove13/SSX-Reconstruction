/* Ghidra pseudocode. PS2 address: 00152f20. Not validated source. */

undefined4 FUN_00152f20(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = DAT_002c56e8;
  if (*(float *)(DAT_002c56e8 + 0x8b6d8) == *(float *)(param_1 + 0x714)) {
    fVar2 = *(float *)(DAT_002c56e8 + 0x8b6dc);
  }
  else {
    *(float *)(param_1 + 0x714) = *(float *)(DAT_002c56e8 + 0x8b6d8);
    *(undefined4 *)(param_1 + 0x1664) = 1;
    fVar2 = *(float *)(iVar1 + 0x8b6dc);
  }
  if (fVar2 == *(float *)(param_1 + 0x718)) {
    fVar2 = *(float *)(iVar1 + 0x8b6e0);
  }
  else {
    *(float *)(param_1 + 0x718) = fVar2;
    *(undefined4 *)(param_1 + 0x1664) = 1;
    fVar2 = *(float *)(iVar1 + 0x8b6e0);
  }
  if (fVar2 == *(float *)(param_1 + 0x71c)) {
    fVar2 = *(float *)(iVar1 + 0x8b6e4);
  }
  else {
    *(float *)(param_1 + 0x71c) = fVar2;
    *(undefined4 *)(param_1 + 0x1664) = 1;
    fVar2 = *(float *)(iVar1 + 0x8b6e4);
  }
  if (fVar2 != *(float *)(param_1 + 0x724)) {
    *(float *)(param_1 + 0x724) = fVar2;
    *(undefined4 *)(param_1 + 0x1664) = 1;
  }
  return *(undefined4 *)(param_1 + 0x1664);
}

