/* Ghidra pseudocode. PS2 address: 0019bfe8. Not validated source. */

int FUN_0019bfe8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_2 + 4;
  FUN_0023bac0((int)param_1 + 0x38,param_2,4);
  iVar1 = FUN_0019b5e0(param_1,iVar2);
  return (iVar2 + iVar1) - (int)param_2;
}

