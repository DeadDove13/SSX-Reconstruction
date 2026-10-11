/* Ghidra pseudocode. PS2 address: 00268650. Not validated source. */

undefined4 FUN_00268650(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00268390();
  if (lVar2 < 0) {
    uVar1 = 0xffff0000;
  }
  else {
    FUN_0025c0c8(0x2d7c48,param_1,0xfc);
    DAT_002d7d43 = 0;
    FUN_0025c0c8(0x2d7d44,param_2,0xfc);
    DAT_002d7e3f = 0;
    lVar2 = FUN_00267268(0x2d7e40,param_4,0,0x2d7c40,0x200,0x2d7c40,0x10,0);
    if (lVar2 < 0) {
      uVar1 = 0xfffeffff;
    }
    else if (DAT_002d7c40 == 0) {
      uVar1 = 0xfffefffd;
    }
    else {
      *param_3 = DAT_002d7c40;
      uVar1 = 0;
      param_3[1] = DAT_002d7c44;
    }
  }
  return uVar1;
}

