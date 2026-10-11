/* Ghidra pseudocode. PS2 address: 0018f9c0. Not validated source. */

void FUN_0018f9c0(int param_1,undefined4 *param_2)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = param_2[3];
  uStack_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  FUN_00192200(param_1,&uStack_20,0,*(undefined4 *)(param_1 + 0x10),0);
  return;
}

