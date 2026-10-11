/* Ghidra pseudocode. PS2 address: 00131a38. Not validated source. */

void FUN_00131a38(int param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0xc) < 1)) {
    return;
  }
  FUN_0011ed18(0x295e90,0xe);
  FUN_0011ed48(0x295e90,3);
  DAT_0028ad30 = 1.0;
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  if (0 < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    DAT_0028ad30 = (float)iVar1 / 60.0;
    if (*(int *)(param_1 + 4) != 0) {
      DAT_0028ad30 = 1.0 - DAT_0028ad30;
    }
    if (DAT_0028ad30 <= 1.0) {
      if (DAT_0028ad30 < 0.0) {
        DAT_0028ad30 = 0.0;
      }
    }
    else {
      DAT_0028ad30 = 1.0;
    }
  }
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_001a90b8(0x41a00000,0x41a00000,0x3f800000,0x3f800000,param_2,0x7d,0);
  }
  else {
    FUN_001a90b8(0x41a00000,0x41a00000,0x3f800000,0x3f800000,param_2,0x7e,0);
  }
  FUN_0011ed18(0x295e90,0xf);
  FUN_0012f4b8(0x278068,param_2);
  return;
}

