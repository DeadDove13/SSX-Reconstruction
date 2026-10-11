/* Ghidra pseudocode. PS2 address: 00246ed0. Not validated source. */

undefined1 FUN_00246ed0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(&DAT_002d185c + (int)param_2 * 0x60 + (int)param_1 * 0x300);
  FUN_002669d0(iVar1,0x100);
  bVar2 = *(int *)(iVar1 + 0x58) < *(int *)(iVar1 + 0xd8);
  if ((*(char *)(iVar1 + (uint)bVar2 * 0x80 + 0x70) == '\x06') &&
     (lVar4 = FUN_00247038(param_1,param_2), lVar4 == 2)) {
    uVar3 = 5;
  }
  else {
    uVar3 = *(undefined1 *)(iVar1 + (uint)bVar2 * 0x80 + 0x70);
  }
  return uVar3;
}

