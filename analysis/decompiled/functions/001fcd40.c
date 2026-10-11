/* Ghidra pseudocode. PS2 address: 001fcd40. Not validated source. */

void FUN_001fcd40(undefined8 param_1)

{
  int iVar1;
  
  FUN_0020a540(param_1,2);
  FUN_002096d0(param_1,0,0);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x8b6f0) == 0) {
    *(undefined4 *)(iVar1 + 0x8b6f0) = 0;
  }
  else {
    FUN_0023a998();
    *(undefined4 *)(iVar1 + 0x8b6f0) = 0;
  }
  return;
}

