/* Ghidra pseudocode. PS2 address: 00173a00. Not validated source. */

void FUN_00173a00(int param_1,ulong param_2)

{
  float *pfVar1;
  float fVar2;
  
  if (*(float **)(param_1 + 0x2c) != (float *)0x0) {
    if ((param_2 & 0x100008) != 0) {
      if (**(float **)(param_1 + 0x2c) == 0.0) {
        FUN_001fafa8(DAT_002c56e8);
        pfVar1 = *(float **)(param_1 + 0x2c);
      }
      else if (*(int *)(param_1 + 0x1c) == 0) {
        pfVar1 = *(float **)(param_1 + 0x2c);
      }
      else {
        FUN_001fafe0(DAT_002c56e8);
        pfVar1 = *(float **)(param_1 + 0x2c);
      }
      fVar2 = *pfVar1 - DAT_002c2878;
      *pfVar1 = fVar2;
      if (fVar2 <= 0.0) {
        *pfVar1 = 0.0;
      }
    }
    if ((param_2 & 0x80004) != 0) {
      if (**(float **)(param_1 + 0x2c) == 1.0) {
        FUN_001fafa8(DAT_002c56e8);
        pfVar1 = *(float **)(param_1 + 0x2c);
      }
      else if (*(int *)(param_1 + 0x1c) == 0) {
        pfVar1 = *(float **)(param_1 + 0x2c);
      }
      else {
        FUN_001fafe0(DAT_002c56e8);
        pfVar1 = *(float **)(param_1 + 0x2c);
      }
      fVar2 = *pfVar1 + DAT_002c287c;
      *pfVar1 = fVar2;
      if (1.0 <= fVar2) {
        *pfVar1 = 1.0;
      }
    }
  }
  return;
}

