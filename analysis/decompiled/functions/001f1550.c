/* Ghidra pseudocode. PS2 address: 001f1550. Not validated source. */

void FUN_001f1550(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 4) {
    if (param_2 == 2) {
      uVar1 = 0x88;
      goto LAB_001f15f4;
    }
    if (param_2 < 3) {
      uVar1 = 0x84;
      if (param_2 == 1) goto LAB_001f15f4;
      *param_1 = 0;
    }
    else {
      if (param_2 != 3) {
        *param_1 = 0;
        uVar1 = *param_1;
        goto LAB_001f15fc;
      }
      *param_1 = 0;
      if (param_3 == 4) {
        uVar1 = 0x10;
        goto LAB_001f15f4;
      }
      if (param_3 != 6) {
        *param_1 = 0x100;
      }
    }
  }
  else {
    if (param_4 != 5) {
      *param_1 = 0;
      return;
    }
    *param_1 = 0;
    if (param_3 == 4) {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0x120;
      if (param_3 == 3) goto LAB_001f15f8;
    }
LAB_001f15f4:
    *param_1 = uVar1;
  }
LAB_001f15f8:
  uVar1 = *param_1;
LAB_001f15fc:
  *param_1 = uVar1 | 0x400;
  return;
}

