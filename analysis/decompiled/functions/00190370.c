/* Ghidra pseudocode. PS2 address: 00190370. Not validated source. */

void FUN_00190370(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [112];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar1 = FUN_00258948(**(float **)((int)param_1 + 0x14) * DAT_002c2a18);
  FUN_0025b630(auStack_c0,0x2c4f50,uVar1);
  uStack_44 = param_2[3];
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  FUN_00192200(param_1,&uStack_50,*(undefined4 *)((int)param_1 + 0x10),0,auStack_c0);
  return;
}

