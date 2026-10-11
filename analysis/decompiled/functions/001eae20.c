/* Ghidra pseudocode. PS2 address: 001eae20. Not validated source. */

undefined8 FUN_001eae20(undefined8 param_1)

{
  int iVar1;
  
  *(undefined **)((int)param_1 + 0x1d0) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0(param_1);
  return param_1;
}

