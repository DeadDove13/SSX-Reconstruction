/* Ghidra pseudocode. PS2 address: 0024d748. Not validated source. */

void FUN_0024d748(int param_1)

{
  uint uVar1;
  
  uVar1 = REG_IPU_CTRL;
  REG_IPU_CTRL = uVar1 & 0xff7fffff | param_1 << 0x17;
  return;
}

