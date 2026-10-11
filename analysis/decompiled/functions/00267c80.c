/* Ghidra pseudocode. PS2 address: 00267c80. Not validated source. */

undefined4 FUN_00267c80(undefined8 param_1,undefined4 param_2,undefined4 param_3)

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
      DAT_002d7404 = param_2;
      DAT_002d7408 = param_3;
      lVar2 = FUN_00267268(0x2d7a10,4,*(byte *)((int)puVar3 + 5) >> 7,0x2d7400,0xc,0x2d7840,4,0);
      if (lVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
        if ((puVar3[1] & 0x8000) == 0) {
          uVar1 = DAT_002d7840;
        }
      }
    }
  }
  return uVar1;
}

