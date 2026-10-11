/* Ghidra pseudocode. PS2 address: 00260098. Not validated source. */

void FUN_00260098(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined1 **)(iVar1 + 0x3c) = &LAB_00260078;
  *(undefined4 *)(iVar1 + 0x38) = 1;
  FUN_0025fed0(iVar1 + 0x1e4,4,0,param_1);
  FUN_0025fed0(iVar1 + 0x23c,9,1,param_1);
  FUN_0025fed0(iVar1 + 0x294,10,2,param_1);
  *(int *)(iVar1 + 0x1e0) = iVar1 + 0x1e4;
  *(undefined4 *)(iVar1 + 0x1dc) = 3;
  *(undefined4 *)(iVar1 + 0x1d8) = 0;
  return;
}

