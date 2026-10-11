/* Ghidra pseudocode. PS2 address: 00221b88. Not validated source. */

void FUN_00221b88(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined1 auStack_5b0 [128];
  undefined1 auStack_530 [128];
  undefined1 auStack_4b0 [128];
  undefined1 auStack_430 [128];
  undefined1 auStack_3b0 [128];
  undefined1 auStack_330 [128];
  undefined1 auStack_2b0 [128];
  undefined1 auStack_230 [128];
  undefined1 auStack_1b0 [128];
  undefined1 auStack_130 [128];
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  
  FUN_00223ab0();
  puStack_ac = auStack_2b0;
  puStack_a8 = auStack_230;
  puStack_b0 = auStack_3b0;
  piVar12 = (int *)param_1;
  piVar12[0x2b7] = 0;
  iVar8 = 0x1ff;
  piVar5 = piVar12 + 0x2b6;
  do {
    *piVar5 = -1;
    iVar8 = iVar8 + -1;
    piVar5 = piVar5 + -1;
  } while (-1 < iVar8);
  if (param_2 == -1) {
    FUN_0018db98(0x2bde70,0x2bde88);
    FUN_0025b630(auStack_5b0,0x2bdea0);
    FUN_0025b630(auStack_530,0x2bdec0);
    FUN_0025b630(auStack_4b0,0x2bdee0);
    FUN_0025b630(auStack_430,0x2bdf00);
    FUN_0025b630(auStack_330,0x2bdf20);
    FUN_0025b630(puStack_ac,0x2bdf40);
    FUN_0025b630(puStack_a8,0x2bdf60);
    FUN_0025b630(puStack_b0,0x2bdf80);
    FUN_0025b630(auStack_1b0,0x2bdfa0);
  }
  else {
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_5b0,0x2bdfc0,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_530,0x2bdfd8,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_4b0,0x2bdff0,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_430,0x2be008,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_330,0x2be020,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(puStack_ac,0x2be038,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(puStack_a8,0x2be050,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(puStack_b0,0x2be068,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_1b0,0x2be080,uVar9);
    uVar9 = FUN_0018ada0(0x28530c,param_2);
    FUN_0025b630(auStack_130,0x2be098,uVar9);
  }
  uVar9 = 0x28;
  if (DAT_002859e8 == 0) {
    switch(DAT_0027ba84) {
    case 0:
    case 3:
    case 4:
    case 9:
    case 10:
      uVar9 = 0x50;
    }
  }
  else {
    uVar9 = 1;
  }
  FUN_0021de68(piVar12 + 0xf,uVar9);
  iVar3 = FUN_00237128(auStack_530,0);
  *piVar12 = iVar3;
  iVar8 = *(int *)(iVar3 + 0x2c);
  iVar11 = *(int *)(iVar3 + 0x28);
  iVar6 = *(int *)(iVar3 + 0x38);
  iVar1 = *(int *)(iVar3 + 0x34);
  iVar4 = iVar3 + 0x48 + *(int *)(iVar3 + 0x30) * 8;
  piVar12[6] = iVar3 + 0x48;
  piVar12[3] = iVar4;
  iVar4 = iVar4 + iVar11 * iVar8 * 8;
  piVar12[7] = iVar4;
  iVar4 = iVar6 * 0x14 + iVar4;
  piVar12[8] = iVar4;
  piVar12[9] = iVar1 * 0xc + iVar4;
  iVar8 = FUN_00237128(auStack_4b0,0);
  piVar12[1] = iVar8;
  iVar8 = *(int *)(*piVar12 + 0x28) * *(int *)(*piVar12 + 0x2c);
  iVar11 = iVar8 * 0x28;
  piVar12[0x2b9] = iVar8;
  piVar5 = (int *)FUN_0023a448(0x2c5980,iVar11,0);
  if (piVar5 != (int *)0x0) {
    FUN_0023bbd0(piVar5,0,iVar11);
  }
  piVar12[2] = (int)piVar5;
  piVar10 = (int *)piVar12[3];
  iVar11 = 0;
  iVar8 = piVar12[1];
  if (0 < piVar12[0x2b9]) {
    do {
      if (piVar10[1] == 0) {
        *piVar10 = 0;
      }
      else {
        iVar6 = *piVar12;
        *piVar5 = iVar8 + *piVar10;
        FUN_0021b4f0(piVar5,(int)*(short *)(iVar6 + 0x42) * (int)*(short *)(iVar6 + 0x42));
        *piVar10 = (int)piVar5;
        piVar5 = piVar5 + 10;
      }
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 2;
    } while (iVar11 < piVar12[0x2b9]);
  }
  lVar7 = FUN_002370d0(auStack_430);
  iVar8 = (int)lVar7;
  if (lVar7 == 0) {
    iVar8 = FUN_00236908(auStack_430);
  }
  lVar7 = FUN_0023a448(0x2be0b0,iVar8 + 0x7f,0);
  if (lVar7 != 0) {
    FUN_0023bbd0(lVar7,0xffffffffdeadc0ed,iVar8 + 0x7f);
  }
  uVar2 = (int)lVar7 + 0x7fU & 0xffffff80;
  piVar12[5] = (int)lVar7;
  piVar12[4] = uVar2;
  FUN_00237148(auStack_430,uVar2,0);
  iVar8 = 0;
  if (0 < *(int *)(*piVar12 + 0x30)) {
    iVar11 = piVar12[6];
    while( true ) {
      iVar6 = iVar8 * 8;
      iVar8 = iVar8 + 1;
      piVar5 = (int *)(iVar6 + iVar11);
      *piVar5 = *piVar5 + piVar12[4];
      FUN_0021a870();
      if (*(int *)(*piVar12 + 0x30) <= iVar8) break;
      iVar11 = piVar12[6];
    }
  }
  FUN_00223258(param_1,auStack_1b0);
  if (param_2 != -1) {
    FUN_00223320(param_1,auStack_130);
  }
  FUN_00222288(param_1,puStack_a8);
  if (DAT_002859e8 == 0) {
    FUN_0019c230(0x28acf8,puStack_b0);
    lVar7 = FUN_0023a448(0x2be0c0,0x70,0);
    if (lVar7 != 0) {
      FUN_0023bbd0(lVar7,0,0x70);
    }
    uVar9 = FUN_001653c8(lVar7);
    piVar12[0x2ba] = (int)uVar9;
    FUN_001654b0(uVar9,puStack_ac);
    iVar8 = *piVar12;
  }
  else {
    iVar8 = *piVar12;
  }
  FUN_001d6548(DAT_002859d0,*(undefined2 *)(iVar8 + 0x44));
  return;
}

