/* Ghidra pseudocode. PS2 address: 001979a0. Not validated source. */

void FUN_001979a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 8);
  FUN_001978a0();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}

