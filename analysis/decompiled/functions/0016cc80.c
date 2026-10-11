/* Ghidra pseudocode. PS2 address: 0016cc80. Not validated source. */

void FUN_0016cc80(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x518) == 0) {
    *(undefined4 *)(iVar1 + 0x518) = 0;
  }
  else {
    FUN_0016eb08(param_1,0x2000348);
    *(undefined4 *)(iVar1 + 0x518) = 0;
  }
  return;
}

