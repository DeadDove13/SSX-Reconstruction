/* Ghidra pseudocode. PS2 address: 001940d0. Not validated source. */

void FUN_001940d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int aiStack_60 [4];
  
  FUN_001978a0(param_2,aiStack_60,8);
  iVar1 = 0;
  if (0 < aiStack_60[0]) {
    do {
      iVar1 = iVar1 + 1;
      FUN_00194160(param_1,param_2,param_3);
    } while (iVar1 < aiStack_60[0]);
  }
  FUN_001864b0(0x2c4dd8,param_3);
  return;
}

