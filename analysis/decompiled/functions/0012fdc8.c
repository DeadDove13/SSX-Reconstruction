/* Ghidra pseudocode. PS2 address: 0012fdc8. Not validated source. */

void FUN_0012fdc8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  FUN_0012f620(iVar1 + 0x50);
  *(undefined4 *)(iVar1 + 0x2dc) = 0;
  *(undefined4 *)(iVar1 + 0x2e4) = 0;
  *(undefined4 *)(iVar1 + 0x2e8) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
  FUN_0023bbd0(iVar1 + 0x2ec,0,0x10);
  FUN_0012ff48(param_1,1);
  return;
}

