/* Ghidra pseudocode. PS2 address: 00129548. Not validated source. */

void FUN_00129548(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = *(int *)param_1;
  uStack_40 = *(undefined4 *)(iVar1 + 0xd0);
  uStack_3c = *(undefined4 *)(iVar1 + 0xd4);
  uStack_38 = *(undefined4 *)(iVar1 + 0xd8);
  uStack_34 = 0x3f800000;
  uStack_30 = *(undefined4 *)(iVar1 + 0xdc);
  uStack_2c = *(undefined4 *)(iVar1 + 0xe0);
  uStack_28 = *(undefined4 *)(iVar1 + 0xe4);
  uStack_24 = 0x3f800000;
  lVar2 = FUN_001be110(0x295e90,&uStack_40,&uStack_30);
  if (lVar2 != 1) {
    FUN_00129498(param_1,&uStack_40);
    FUN_001295f8(param_1);
    FUN_00129510(param_1,&uStack_40);
  }
  return;
}

