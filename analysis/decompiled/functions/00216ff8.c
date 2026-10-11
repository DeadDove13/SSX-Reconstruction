/* Ghidra pseudocode. PS2 address: 00216ff8. Not validated source. */

undefined8 FUN_00216ff8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  FUN_00216900();
  puVar4 = (undefined4 *)param_1;
  *puVar4 = &DAT_002bd9c8;
  uVar2 = FUN_002369a0(0x2bd820,0);
  uVar3 = FUN_0023c128(uVar2,0);
  uVar1 = FUN_001be538(0x295e90,uVar3,0x2c58a8,0);
  puVar4[0x1a] = uVar1;
  FUN_0023a998(uVar2);
  *(undefined8 *)(puVar4 + 0x12) = 0x3f800000;
  *(undefined8 *)(puVar4 + 0x14) = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0x3f800000;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  FUN_00216818(param_1);
  return param_1;
}

