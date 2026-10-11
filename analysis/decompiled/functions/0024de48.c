/* Ghidra pseudocode. PS2 address: 0024de48. Not validated source. */

long FUN_0024de48(undefined8 param_1,int param_2)

{
  long lVar1;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  
  iStack_70 = 0;
  iStack_6c = 0;
  lVar1 = FUN_0024dd20(param_2,&iStack_70,&iStack_6c,auStack_b0);
  if (lVar1 == 0) {
    DAT_002a53c8 = 0;
    for (; iStack_70 < param_2; iStack_70 = iStack_70 + 1) {
      *(undefined4 *)(&DAT_002a59f4 + DAT_002a5b38 * 0x140) = 0;
      lVar1 = FUN_0024d770();
      if (lVar1 == 0) {
        return 2;
      }
      if (iStack_6c == 0) {
        lVar1 = FUN_0024ec90(0x17);
        if ((lVar1 == 0) || (DAT_002a53c8 != 0)) {
          DAT_002a53c8 = 0;
          return 3;
        }
        iStack_6c = FUN_0024daf0();
        if (DAT_002a53c8 != 0) {
          DAT_002a53c8 = 0;
          return 1;
        }
      }
      if (param_2 <= iStack_70) {
        FUN_0024af98(0x2bf480);
        return 2;
      }
      if (iStack_6c == 1) {
        lVar1 = FUN_0024e0f8(&uStack_68,&uStack_64,auStack_60,auStack_b0,auStack_90,auStack_80);
        if (lVar1 == 0) {
          DAT_002a53c8 = 0;
          return 1;
        }
      }
      else {
        lVar1 = FUN_0024e028(auStack_b0,&uStack_64,auStack_90,&uStack_68);
        if (lVar1 == 0) {
          DAT_002a53c8 = 0;
          return 2;
        }
      }
      lVar1 = FUN_0024b9b0(iStack_70,iStack_6c,uStack_68,uStack_64,auStack_b0,auStack_90,auStack_80)
      ;
      if (lVar1 == 0) {
        DAT_002a53c8 = 0;
        return 2;
      }
      if (iStack_70 != 0) {
        FUN_0024c7d0(DAT_002a5b38 ^ 1);
      }
      DAT_002a5b38 = DAT_002a5b38 ^ 1;
      iStack_6c = iStack_6c + -1;
    }
    lVar1 = 0;
  }
  return lVar1;
}

