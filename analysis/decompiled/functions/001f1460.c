/* Ghidra pseudocode. PS2 address: 001f1460. Not validated source. */

void FUN_001f1460(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 3) {
LAB_001f1518:
    uVar1 = 0x20;
    if (param_3 == 3) {
      uVar1 = 0x40;
    }
    *param_1 = uVar1;
    uVar1 = *param_1;
    if (param_4 != 5) goto LAB_001f1540;
    *param_1 = uVar1 | 0x400;
  }
  else if (param_4 < 4) {
    if (param_4 == 2) {
LAB_001f14a4:
      if (param_2 == 2) {
        *param_1 = 4;
      }
      else if (param_2 < 3) {
        if (param_2 == 1) {
          *param_1 = 2;
        }
        else {
          *param_1 = 0;
        }
      }
      else if (param_2 == 3) {
        if (param_3 == 6) {
          *param_1 = 0x10;
        }
        else {
          *param_1 = 8;
        }
      }
      else {
        *param_1 = 0;
      }
      uVar1 = *param_1;
      if (param_4 != 4) goto LAB_001f1540;
      *param_1 = uVar1 | 0x200;
    }
    else {
      *param_1 = 0;
    }
  }
  else {
    if (param_4 == 4) goto LAB_001f14a4;
    if (param_4 == 5) goto LAB_001f1518;
    *param_1 = 0;
  }
  uVar1 = *param_1;
LAB_001f1540:
  *param_1 = uVar1 | 1;
  return;
}

