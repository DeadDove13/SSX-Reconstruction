/* Ghidra pseudocode. PS2 address: 00156528. Not validated source. */

void FUN_00156528(undefined8 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int aiStack_130 [24];
  undefined4 auStack_d0 [24];
  
  piVar2 = aiStack_130;
  piVar3 = aiStack_130;
  iVar4 = 0;
  iVar7 = (int)param_1;
  *(undefined4 *)(iVar7 + 0x1278) = 6;
  puVar5 = auStack_d0;
  do {
    *piVar2 = iVar4;
    uVar1 = FUN_002109b0();
    iVar4 = iVar4 + 1;
    *puVar5 = uVar1;
    piVar2 = piVar2 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x18);
  iVar4 = 0;
  FUN_0023bed8(0x18,auStack_d0,aiStack_130);
  if (0 < *(int *)(iVar7 + 0x1278)) {
    iVar6 = iVar7 + 0x127c;
    while( true ) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      FUN_00158c78(param_1,&DAT_0027c380 + aiStack_130[0] * 0xf,0,iVar6);
      if (*(int *)(iVar7 + 0x1278) <= iVar4) break;
      aiStack_130[0] = *piVar3;
      iVar6 = iVar6 + 0x68;
    }
  }
  return;
}

