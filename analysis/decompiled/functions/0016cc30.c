/* Ghidra pseudocode. PS2 address: 0016cc30. Not validated source. */

void FUN_0016cc30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x518) == 0) {
    FUN_0016eae0(param_1,0x2000348);
    *(undefined4 *)(iVar1 + 0x51c) = param_3;
  }
  *(undefined4 *)(iVar1 + 0x518) = 1;
  return;
}

