/* Ghidra pseudocode. PS2 address: 00268878. Not validated source. */

undefined4 FUN_00268878(undefined4 param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00268390();
  if (lVar2 < 0) {
    uVar1 = 0xffff0000;
  }
  else {
    DAT_002d7c44 = (undefined4)param_3;
    if (param_3 == 0) {
      DAT_002d7c48 = CONCAT31(DAT_002d7c48._1_3_,*(undefined1 *)param_2);
    }
    else if (param_3 == 1) {
      DAT_002d7c48 = CONCAT22(DAT_002d7c48._2_2_,*(undefined2 *)param_2);
    }
    else {
      if (param_3 != 2) {
        DAT_002d7c40 = param_1;
        return 0xfffefffe;
      }
      DAT_002d7c48 = *param_2;
    }
    DAT_002d7c40 = param_1;
    lVar2 = FUN_00267268(0x2d7e40,2,0,0x2d7c40,0x20,0x2d7c40,0x10,0);
    uVar1 = 0xfffeffff;
    if (-1 < lVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

