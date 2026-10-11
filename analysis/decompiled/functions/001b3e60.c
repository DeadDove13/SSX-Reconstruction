/* Ghidra pseudocode. PS2 address: 001b3e60. Not validated source. */

void FUN_001b3e60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char acStack_100 [16];
  undefined4 uStack_f0;
  undefined1 auStack_e0 [8];
  int iStack_d8;
  int iStack_d0;
  
  FUN_001ab960();
  uVar1 = *(undefined4 *)(DAT_002859e4 + 0x58);
  uVar2 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  FUN_0025a60c(acStack_100,0,2);
  fVar10 = 328.0;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  iStack_d0 = param_1 + 0x60;
  DAT_0028ad38 = 0x3f800000;
  iVar9 = 0;
  do {
    iVar4 = iVar9 * 0xe;
    iVar9 = iVar9 + 1;
    fVar11 = 97.0;
    iVar7 = 0;
    acStack_100[0] = (&DAT_0028af30)[iVar4];
    if (acStack_100[0] != '\0') {
      fVar12 = 7.0;
      pcVar6 = &DAT_0028af30 + iVar4;
      do {
        if (acStack_100[0] == 'e') {
          uStack_f0 = DAT_002c51f8;
          FUN_001a0840(0x3f800000,uVar1,0x2c51f8,auStack_e0);
          FUN_001a1260(fVar11 - (float)(iStack_d8 / 2),fVar10 - fVar12,uVar1,0x2c51f8);
        }
        else {
          FUN_001a2390(fVar11,fVar10,0x3f800000,uVar1,acStack_100);
        }
        iVar7 = iVar7 + 1;
        fVar11 = fVar11 + 35.0;
        pcVar6 = pcVar6 + 1;
      } while ((iVar7 < 0xe) && (acStack_100[0] = *pcVar6, acStack_100[0] != '\0'));
    }
    fVar10 = fVar10 + 20.0;
  } while (iVar9 < 3);
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x438) == 0) {
    puVar8 = &DAT_002c5208;
    iVar9 = 1;
    fVar10 = 432.0;
    uVar3 = DAT_002c5208;
    while( true ) {
      fVar11 = fVar10 + 20.0;
      puVar8 = puVar8 + 1;
      FUN_001a1368(DAT_002c33f8,fVar10,uVar2,uVar3);
      iVar9 = iVar9 + -1;
      if (iVar9 < 0) break;
      uVar3 = *puVar8;
      fVar10 = fVar11;
    }
    cVar5 = *(char *)(param_1 + 0x54);
  }
  else {
    cVar5 = *(char *)(param_1 + 0x54);
  }
  if (cVar5 != '\0') {
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = DAT_002c33fc;
    DAT_0028ad3c = 0;
    DAT_0028ad30 = 0x3f800000;
    FUN_001a1260(DAT_0028b24c,*(undefined4 *)(param_1 + 0x44),uVar1,param_1 + 0x54);
  }
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  iVar9 = FUN_001a0a88(0x3f800000,uVar2,iStack_d0,0);
  FUN_001a1368(320.0 - (float)(iVar9 / 2),DAT_002c3400,uVar2,iStack_d0);
  return;
}

