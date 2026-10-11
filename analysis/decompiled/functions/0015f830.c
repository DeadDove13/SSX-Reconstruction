/* Ghidra pseudocode. PS2 address: 0015f830. Not validated source. */

void FUN_0015f830(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  iVar10 = 7;
  if (param_1 - 1U < 8) {
    iVar10 = param_1;
  }
  DAT_002c4734 = iVar10;
  FUN_0015f150(0x27fea0,iVar10);
  FUN_0015dac8(0x27fea0);
  pcVar6 = "replay start";
  if (DAT_0027fc60 != 0xd) {
    piVar5 = &DAT_0027fc60;
    do {
      if (*piVar5 == iVar10) {
        pcVar6 = (char *)piVar5[1];
      }
      piVar5 = piVar5 + 2;
    } while (*piVar5 != 0xd);
  }
  FUN_00160530(auStack_70,pcVar6,0x2c4728,0x2c4730);
  FUN_00160530(auStack_60,0x2afc80,0x2c4728,0x2c4730);
  puVar2 = (undefined8 *)FUN_00160570(auStack_60);
  puVar3 = (undefined8 *)FUN_00160570(auStack_70);
  puVar4 = puVar3 + 0x20;
  if ((((uint)puVar3 | (uint)puVar2) & 7) == 0) {
    do {
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != puVar4);
  }
  else {
    do {
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != puVar4);
  }
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar1 = *(undefined4 *)(puVar3 + 3);
  *puVar2 = *puVar3;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  *(undefined4 *)(puVar2 + 3) = uVar1;
  puVar2 = (undefined8 *)FUN_00160580(auStack_60);
  puVar3 = (undefined8 *)FUN_00160580(auStack_70);
  puVar4 = puVar3 + 8;
  if ((((uint)puVar3 | (uint)puVar2) & 7) == 0) {
    do {
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != puVar4);
  }
  else {
    do {
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      *puVar2 = *puVar3;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar3 = puVar3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar3 != puVar4);
  }
  *puVar2 = *puVar3;
  FUN_0015f258(0x27fea0);
  FUN_0015f350(auStack_60,2);
  FUN_0015f350(auStack_70,2);
  return;
}

