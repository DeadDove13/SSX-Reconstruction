/* Ghidra pseudocode. PS2 address: 00267bc8. Not validated source. */

undefined4 FUN_00267bc8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_00267950();
  uVar1 = 0xffffffff;
  if ((DAT_002a6aac != 0) && (uVar1 = 0xfffffff7, lVar2 != 0)) {
    puVar3 = (undefined4 *)lVar2;
    if (puVar3[1] == 0) {
      uVar1 = 0xfffffff7;
    }
    else {
      DAT_002d7400 = *puVar3;
      lVar2 = FUN_00267268(0x2d7a10,1,0,0x2d7400,4,0x2d7840,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        puVar3[1] = 0;
        uVar1 = DAT_002d7840;
      }
    }
  }
  return uVar1;
}

