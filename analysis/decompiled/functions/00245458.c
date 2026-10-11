/* Ghidra pseudocode. PS2 address: 00245458. Not validated source. */

undefined4 FUN_00245458(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = REG_VIF0_STAT;
  if ((uVar1 & 3) == 0) {
    return 0;
  }
  if ((uVar1 & 0x700) != 0) {
    return 1;
  }
  if ((uVar1 & 0xc) != 0) {
    return 2;
  }
  uVar2 = 3;
  if ((uVar1 & 0x3000) == 0) {
    uVar2 = 4;
  }
  return uVar2;
}

