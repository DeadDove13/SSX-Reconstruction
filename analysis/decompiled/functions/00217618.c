/* Ghidra pseudocode. PS2 address: 00217618. Not validated source. */

undefined8 FUN_00217618(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  FUN_00216900();
  puVar5 = (undefined4 *)param_1;
  *puVar5 = &DAT_002bd978;
  lVar2 = FUN_00154c98(0x27a598,0);
  if (lVar2 == 0) {
    uVar3 = FUN_002369a0((&PTR_s_data_textures_hiro_ssh_002bd938)[param_2],0);
  }
  else {
    uVar3 = FUN_002369a0(0x2bd958,0);
  }
  uVar4 = FUN_0023c128(uVar3,0);
  uVar1 = FUN_001be538(0x295e90,uVar4,0x2c58a8,0);
  puVar5[0x1a] = uVar1;
  FUN_0023a998(uVar3);
  *(undefined8 *)(puVar5 + 0x12) = 0x3f800000;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0x3f8000003f800000;
  *(undefined8 *)(puVar5 + 0x18) = 0x3f8000003f800000;
  FUN_00216818(param_1);
  return param_1;
}

