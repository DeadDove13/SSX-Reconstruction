/* Ghidra pseudocode. PS2 address: 00218ad0. Not validated source. */

bool FUN_00218ad0(int param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)FUN_00223368(0x299cc8,*(undefined4 *)(param_1 + 8));
  uStack_30 = *puVar1;
  uStack_2c = puVar1[1];
  uStack_28 = puVar1[2];
  uStack_24 = 0x3f800000;
  uStack_20 = puVar1[3];
  uStack_1c = puVar1[4];
  uStack_18 = puVar1[5];
  uStack_14 = 0x3f800000;
  lVar2 = FUN_001be110(0x295e90,&uStack_30,&uStack_20);
  return lVar2 != 1;
}

