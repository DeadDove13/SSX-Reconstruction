/* Ghidra pseudocode. PS2 address: 00201088. Not validated source. */

void FUN_00201088(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = DAT_002c5618;
  iVar2 = (int)param_1 + 0x8b6e4;
  FUN_00205720(param_1,0xfa,DAT_002c5618,iVar2,1,0x5f,0x7f,0);
  FUN_00205720(param_1,500,uVar1,iVar2,1,0x5f,0x7f,0);
  FUN_00205720(param_1,0x2ee,uVar1,iVar2,1,0x5f,0x7f,0);
  return;
}

