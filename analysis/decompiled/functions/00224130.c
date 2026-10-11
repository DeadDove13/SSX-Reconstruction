/* Ghidra pseudocode. PS2 address: 00224130. Not validated source. */

undefined8 FUN_00224130(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  
  puVar5 = (undefined4 *)param_1;
  puVar5[0x10] = &DAT_002be180;
  FUN_0020e690(puVar5 + 0x18);
  iVar6 = (int)param_2;
  puVar5[0x15] = iVar6;
  puVar5[0x14] = iVar6;
  *puVar5 = 0;
  puVar5[0x18] = &DAT_002bd458;
  puVar5[1] = 0;
  fVar3 = *(float *)(iVar6 + 0x98);
  uVar4 = *(undefined4 *)(iVar6 + 0x9c);
  fVar1 = (float)*(undefined8 *)(iVar6 + 0x90);
  fVar2 = (float)((ulong)*(undefined8 *)(iVar6 + 0x90) >> 0x20);
  fVar7 = (float)FUN_0020e740(param_2);
  puVar5[8] = fVar1 - fVar7;
  puVar5[9] = fVar2 - fVar7;
  puVar5[10] = fVar3 - fVar7;
  puVar5[4] = fVar1 + fVar7;
  puVar5[5] = fVar2 + fVar7;
  puVar5[6] = fVar3 + fVar7;
  puVar5[0xb] = 0x3f800000;
  puVar5[7] = 0x3f800000;
  puVar5[0xc] = fVar1;
  puVar5[0xd] = fVar2;
  puVar5[0xe] = fVar3;
  puVar5[0xf] = uVar4;
  return param_1;
}

