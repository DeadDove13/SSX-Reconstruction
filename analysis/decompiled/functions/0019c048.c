/* Ghidra pseudocode. PS2 address: 0019c048. Not validated source. */

int FUN_0019c048(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_50 [4];
  
  iVar2 = (int)param_2 + 4;
  FUN_0023bac0(auStack_50,param_2,4);
  *(undefined4 *)((int)param_1 + 0x38) = auStack_50[0];
  iVar1 = FUN_0019b5e0(param_1,iVar2);
  return (iVar2 + iVar1) - (int)param_2;
}

