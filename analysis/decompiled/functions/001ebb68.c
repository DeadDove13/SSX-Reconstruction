/* Ghidra pseudocode. PS2 address: 001ebb68. Not validated source. */

void FUN_001ebb68(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 + param_2[3];
  uVar1 = *param_2;
  param_2[4] = param_3 + param_2[4];
  param_2[5] = param_3 + param_2[5];
  param_2[6] = param_3 + param_2[6];
  param_2[3] = uVar2;
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 1) != 0) {
      FUN_001eb5d8(param_1,uVar2);
    }
    if ((*param_2 & 2) != 0) {
      FUN_001eb7c0(param_1,param_2[5]);
    }
  }
  else {
    if ((uVar1 & 1) == 0) {
      uVar1 = *param_2;
    }
    else {
      FUN_001eb900(uVar2);
      uVar1 = *param_2;
    }
    if ((uVar1 & 2) != 0) {
      FUN_001eba48(param_1,param_2[5]);
    }
  }
  return;
}

