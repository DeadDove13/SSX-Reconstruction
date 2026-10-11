/* Ghidra pseudocode. PS2 address: 00267df0. Not validated source. */

undefined4 FUN_00267df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_00267950();
  uVar2 = 0xffffffff;
  if ((DAT_002a6aac != 0) && (uVar2 = 0xfffffff7, lVar3 != 0)) {
    puVar4 = (undefined4 *)lVar3;
    if (puVar4[1] == 0) {
      uVar2 = 0xfffffff7;
    }
    else {
      DAT_002d7400 = *puVar4;
      DAT_002d7404 = (undefined4)param_2;
      DAT_002d7408 = (undefined4)param_3;
      DAT_002d740c = &DAT_002d7880;
      uVar1 = puVar4[1];
      if ((uVar1 & 0x20000000) == 0) {
        FUN_002669d0(param_2,param_3);
      }
      FUN_002669d0(0x2d7880,0x90);
      FUN_002669d0(0x2d7400,0x10);
      lVar3 = FUN_00267268(0x2d7a10,2,(uVar1 & 0x8000) != 0,0x2d7400,0x10,0x2d7840,4,0x267d60);
      if (lVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0;
        if ((puVar4[1] & 0x8000) == 0) {
          uVar2 = DAT_002d7840;
        }
      }
    }
  }
  return uVar2;
}

