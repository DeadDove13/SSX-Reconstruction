/* Ghidra pseudocode. PS2 address: 001311b0. Not validated source. */

void FUN_001311b0(void)

{
  int iVar1;
  
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),10,0xffffffffffffffff);
  FUN_001a32b0(*(undefined4 *)(DAT_002859e4 + 0x30),0xe,0xffffffffffffffff);
  iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 8);
  (**(code **)(iVar1 + 0x54))(*(int *)(DAT_002859e4 + 0x14) + (int)*(short *)(iVar1 + 0x50),3);
  return;
}

