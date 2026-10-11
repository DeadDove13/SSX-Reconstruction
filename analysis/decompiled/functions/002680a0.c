/* Ghidra pseudocode. PS2 address: 002680a0. Not validated source. */

undefined4 FUN_002680a0(undefined8 param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_00267950();
  uVar2 = 0xffffffff;
  if ((DAT_002a6aac != 0) && (uVar2 = 0xfffffff7, lVar3 != 0)) {
    uVar1 = *(uint *)((int)lVar3 + 4);
    if (uVar1 == 0) {
      uVar2 = 0xfffffff7;
    }
    else {
      if (param_2 == 1) {
        lVar3 = FUN_00267420(0x2d7a10);
        if (lVar3 == 0) {
          *param_3 = 0;
        }
        else {
          *param_3 = 1;
        }
      }
      else if ((uVar1 & 0x8000) == 0) {
        return DAT_002d7840;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

