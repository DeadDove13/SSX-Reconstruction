/* Ghidra pseudocode. PS2 address: 00247468. Not validated source. */

undefined4 FUN_00247468(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  
  DAT_002d1e80 = 7;
  iVar5 = 0;
  DAT_002d1e84 = param_1;
  DAT_002d1e88 = param_2;
  do {
    puVar1 = (undefined1 *)(param_3 + iVar5);
    puVar4 = (undefined1 *)((int)&DAT_002d1e8c + iVar5);
    iVar5 = iVar5 + 1;
    *puVar4 = *puVar1;
  } while (iVar5 < 6);
  lVar3 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  uVar2 = DAT_002d1e94;
  if (lVar3 < 0) {
    uVar2 = 0;
  }
  return uVar2;
}

