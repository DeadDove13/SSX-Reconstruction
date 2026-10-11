/* Ghidra pseudocode. PS2 address: 00131588. Not validated source. */

void FUN_00131588(void)

{
  int iVar1;
  
  iVar1 = DAT_002859e4;
  *(undefined4 *)(DAT_002859e4 + 0x44) = 1;
  FUN_001a32c8(*(undefined4 *)(iVar1 + 0x30),10,0xffffffffffffffff);
  FUN_001a32c8(*(undefined4 *)(DAT_002859e4 + 0x30),0xe,0xffffffffffffffff);
  return;
}

