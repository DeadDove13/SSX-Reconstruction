/* Ghidra pseudocode. PS2 address: 00218f00. Not validated source. */

bool FUN_00218f00(int param_1)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = *(undefined4 *)(param_1 + 0x5c);
  uStack_20 = *(undefined4 *)(param_1 + 0x68);
  uStack_2c = *(undefined4 *)(param_1 + 0x60);
  uStack_28 = *(undefined4 *)(param_1 + 100);
  uStack_24 = 0x3f800000;
  uStack_1c = *(undefined4 *)(param_1 + 0x6c);
  uStack_18 = *(undefined4 *)(param_1 + 0x70);
  uStack_14 = 0x3f800000;
  lVar1 = FUN_001be110(0x295e90,&uStack_30,&uStack_20);
  return lVar1 != 1;
}

