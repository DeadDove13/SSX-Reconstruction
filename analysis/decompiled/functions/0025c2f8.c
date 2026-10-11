/* Ghidra pseudocode. PS2 address: 0025c2f8. Not validated source. */

undefined8 FUN_0025c2f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  uVar1 = 0;
  if (*(int *)(iVar2 + 8) == 0) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    uVar1 = FUN_002606d8(param_1,param_2);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  return uVar1;
}

