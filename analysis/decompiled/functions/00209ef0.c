/* Ghidra pseudocode. PS2 address: 00209ef0. Not validated source. */

void FUN_00209ef0(int param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int aiStack_50 [4];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0xffffd8f0;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    FUN_00239d78(*(int *)(param_1 + 0x50),param_3,0,aiStack_50,0);
    uVar1 = *(undefined4 *)(param_1 + 4);
    param_3 = param_1 + 0x10;
    param_4 = param_4 + aiStack_50[0];
  }
  FUN_00226b28(uVar1,param_2,param_3,param_4);
  return;
}

