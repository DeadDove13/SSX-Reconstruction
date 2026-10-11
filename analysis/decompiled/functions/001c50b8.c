/* Ghidra pseudocode. PS2 address: 001c50b8. Not validated source. */

void FUN_001c50b8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_002c35bc;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x14) = 3;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = 2;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_001d3828(*(undefined4 *)(param_1 + 8),param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}

