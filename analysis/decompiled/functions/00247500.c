/* Ghidra pseudocode. PS2 address: 00247500. Not validated source. */

int FUN_00247500(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  
  DAT_002d1e80 = 8;
  DAT_002d1e84 = (undefined4)param_1;
  iVar4 = 0;
  DAT_002d1e88 = (undefined4)param_2;
  do {
    puVar1 = (undefined1 *)(param_3 + iVar4);
    puVar3 = (undefined1 *)((int)&DAT_002d1e8c + iVar4);
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar1;
  } while (iVar4 < 6);
  lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  if (lVar2 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_002d1e94;
    if (DAT_002d1e94 == 1) {
      FUN_00246fc0(param_1,param_2,2);
      iVar4 = DAT_002d1e94;
    }
  }
  return iVar4;
}

