/* Ghidra pseudocode. PS2 address: 0023a0d0. Not validated source. */

undefined4
FUN_0023a0d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  code *pcStack_24;
  int iStack_20;
  
  uStack_3c = (undefined4)param_1;
  uStack_38 = (undefined4)param_2;
  uStack_30 = 0;
  pcStack_24 = FUN_00239408;
  iStack_2c = param_4;
  if (0x8000 < param_4) {
    iStack_2c = 0x8000;
  }
  uStack_40 = param_5;
  iStack_34 = param_4;
  uStack_28 = param_3;
  lVar1 = FUN_00239408(param_1,param_2,param_3,iStack_2c,param_5,&uStack_40);
  iStack_20 = (int)lVar1;
  if (lVar1 != 0) {
    FUN_00238ea0(lVar1,0x239ea0);
    if (iStack_34 == 0) goto LAB_0023a164;
    do {
      do {
        FUN_00238f58(iStack_20);
      } while (iStack_34 != 0);
LAB_0023a164:
    } while (iStack_20 != 0);
  }
  return uStack_30;
}

