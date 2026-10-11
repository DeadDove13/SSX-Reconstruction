/* Ghidra pseudocode. PS2 address: 001d6440. Not validated source. */

undefined8 FUN_001d6440(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 7;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x5bc) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0x41800000;
  FUN_001d6918(param_1);
  *(undefined4 *)(iVar1 + 0x540) = 0;
  return param_1;
}

