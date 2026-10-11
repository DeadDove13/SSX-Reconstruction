/* Ghidra pseudocode. PS2 address: 001c1a08. Not validated source. */

undefined8 FUN_001c1a08(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  *(undefined4 *)(iVar2 + 0x170) = 0xffffffff;
  if (DAT_0027b810 == 1) {
    uVar1 = 0x100;
  }
  else {
    uVar1 = 0x80;
  }
  *(undefined4 *)(iVar2 + 0x178) = uVar1;
  *(undefined4 *)(iVar2 + 0x174) = uVar1;
  return param_1;
}

