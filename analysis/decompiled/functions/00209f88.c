/* Ghidra pseudocode. PS2 address: 00209f88. Not validated source. */

undefined8 FUN_00209f88(int param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  int aiStack_50 [4];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0xffffd8f0;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_00239d78(*(int *)(param_1 + 0x50),0,param_3,aiStack_50,0);
    uVar1 = FUN_00226b28(*(undefined4 *)(param_1 + 4),param_2,param_1 + 0x10,param_4 + aiStack_50[0]
                        );
  }
  return uVar1;
}

