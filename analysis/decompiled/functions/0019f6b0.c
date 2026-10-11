/* Ghidra pseudocode. PS2 address: 0019f6b0. Not validated source. */

undefined8 FUN_0019f6b0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_002c2b14;
  puVar2 = (undefined4 *)param_1;
  puVar2[3] = 0x3f800000;
  puVar2[4] = uVar1;
  *puVar2 = 0x3f800000;
  puVar2[1] = 0x3f800000;
  puVar2[2] = 0x3f800000;
  return param_1;
}

