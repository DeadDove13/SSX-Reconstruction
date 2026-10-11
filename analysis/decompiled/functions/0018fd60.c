/* Ghidra pseudocode. PS2 address: 0018fd60. Not validated source. */

void FUN_0018fd60(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_b0 [112];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_0023e498(auStack_b0,0x2c4f40,**(undefined4 **)((int)param_1 + 0x14));
  uStack_34 = param_2[3];
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  FUN_00192200(param_1,&uStack_40,*(undefined4 *)((int)param_1 + 0x10),0,auStack_b0);
  return;
}

