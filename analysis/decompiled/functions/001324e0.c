/* Ghidra pseudocode. PS2 address: 001324e0. Not validated source. */

void FUN_001324e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_00132640(param_1,iVar1,param_2);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return;
}

