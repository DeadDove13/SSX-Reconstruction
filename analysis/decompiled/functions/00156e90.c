/* Ghidra pseudocode. PS2 address: 00156e90. Not validated source. */

void FUN_00156e90(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = ZEXT48(param_1);
  *(undefined4 *)(param_1 + 0x78) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  *param_1 = 0;
  while( true ) {
    iVar2 = (int)uVar3;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 8;
    uVar1 = FUN_002109b0();
    *(uint *)(iVar2 + 0x10) = uVar1 & 7;
    uVar3 = (ulong)(iVar2 + 0x18);
    if ((long)(int)(param_1 + 0x78) <= (long)uVar3) break;
    *(undefined1 *)(iVar2 + 0x18) = 0;
  }
  return;
}

