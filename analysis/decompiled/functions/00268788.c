/* Ghidra pseudocode. PS2 address: 00268788. Not validated source. */

undefined4 FUN_00268788(undefined4 param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00268390();
  if (lVar2 < 0) {
    return 0xffff0000;
  }
  if (param_3 < 3) {
    DAT_002d7c44 = (undefined4)param_3;
    DAT_002d7c40 = param_1;
    lVar2 = FUN_00267268(0x2d7e40,3,0,0x2d7c40,0x20,0x2d7c40,0x20,0);
    if (lVar2 < 0) {
      return 0xfffeffff;
    }
    if (param_3 == 0) {
      *(undefined1 *)param_2 = (undefined1)DAT_002d7c40;
    }
    else if (param_3 == 1) {
      *(undefined2 *)param_2 = (undefined2)DAT_002d7c40;
    }
    else {
      if (param_3 != 2) goto LAB_00268844;
      *param_2 = DAT_002d7c40;
    }
    uVar1 = 0;
  }
  else {
LAB_00268844:
    uVar1 = 0xfffefffe;
  }
  return uVar1;
}

