/* Ghidra pseudocode. PS2 address: 00208b00. Not validated source. */

undefined8
FUN_00208b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  puVar2[100] = 0;
  puVar2[0x65] = 0;
  uVar1 = DAT_002c5bcc;
  puVar2[1] = param_6;
  *puVar2 = (int)param_3;
  FUN_0020a318(uVar1,param_3,param_5,0,0x20000);
  FUN_00208b88(param_1,param_2,param_4);
  return param_1;
}

