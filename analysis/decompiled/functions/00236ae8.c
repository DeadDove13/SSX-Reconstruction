/* Ghidra pseudocode. PS2 address: 00236ae8. Not validated source. */

undefined8 FUN_00236ae8(long param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    uStack_40 = (undefined4)param_1;
    uStack_30 = 1;
    puStack_3c = param_2;
    uStack_38 = param_3;
    uStack_34 = param_4;
    uVar1 = FUN_0023e600(*param_2);
    uVar1 = FUN_002395c8(0x236ee0,uVar1,DAT_002c59a0,&uStack_40);
  }
  return uVar1;
}

