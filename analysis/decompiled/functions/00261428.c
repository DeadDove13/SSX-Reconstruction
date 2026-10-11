/* Ghidra pseudocode. PS2 address: 00261428. Not validated source. */

void FUN_00261428(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00260fa8(param_1,1);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}

