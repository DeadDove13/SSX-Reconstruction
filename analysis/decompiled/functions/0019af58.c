/* Ghidra pseudocode. PS2 address: 0019af58. Not validated source. */

void FUN_0019af58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0019a7c0(param_2);
  iVar3 = (int)param_1;
  iVar2 = iVar3 + 0xa00;
  if (*(short *)(iVar3 + 0xa00) == 0) {
    FUN_0019a7f8(iVar3 + 0xa00,param_2);
    *(undefined4 *)(iVar3 + 0x141c) = 0;
  }
  else {
    iVar1 = FUN_0019a7c0(iVar2);
    if (*(short *)(iVar2 + (iVar1 + -1) * 2) != 0x5c) {
      FUN_0019a870(iVar2,0x2c4ff8);
    }
    FUN_0019a870(iVar2,param_2);
    *(undefined4 *)(iVar3 + 0x141c) = 0;
  }
  FUN_0019b0e0(param_1);
  return;
}

