/* Ghidra pseudocode. PS2 address: 00192e08. Not validated source. */

undefined8 FUN_00192e08(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  FUN_00191e08(&uStack_30,param_2,*(undefined4 *)((int)param_2 + 0x14),0,0);
  if (iStack_24 < 0x1b) {
    iStack_24 = 0x1b;
  }
  puVar1 = (undefined4 *)param_1;
  *puVar1 = uStack_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = iStack_28 + 0x36;
  puVar1[3] = iStack_24;
  return param_1;
}

