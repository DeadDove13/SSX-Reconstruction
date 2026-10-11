/* Ghidra pseudocode. PS2 address: 00180178. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001806a8) */

void FUN_00180178(undefined8 param_1,undefined8 param_2)

{
  short *psVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  undefined8 uVar7;
  short *psVar8;
  short *psVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  short *psVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_2d80 [5152];
  undefined4 uStack_1960;
  undefined4 uStack_195c;
  int iStack_1940;
  int iStack_193c;
  undefined1 auStack_1930 [5152];
  undefined4 uStack_510;
  undefined4 uStack_50c;
  byte bStack_4e0;
  undefined1 uStack_4df;
  short asStack_4d2 [513];
  
  iVar15 = 0xc;
  FUN_0019aa08(auStack_2d80);
  FUN_0019aa08();
  FUN_0016cf98(param_1,param_2);
  iVar18 = (int)param_1;
  FUN_001686c0(*(undefined4 *)(iVar18 + 0xb3c),param_2);
  FUN_0011ed18(0x295e90,0xf);
  puVar11 = &DAT_00284ebc;
  do {
    FUN_0016eb08(param_1,puVar11[1]);
    if (puVar11[2] == -1) {
      *puVar11 = 0;
    }
    else {
      FUN_0016eb08(param_1);
      *puVar11 = 0;
    }
    fVar5 = DAT_002c2938;
    iVar15 = iVar15 + -1;
    puVar11 = puVar11 + 8;
  } while (-1 < iVar15);
  if (*(int *)(iVar18 + 0xc94) == 0) {
    iVar15 = *(int *)(iVar18 + 0xba0);
    iVar6 = *(int *)(iVar18 + 0xb3c);
    iVar17 = *(int *)(iVar18 + 0xba4);
    fVar24 = *(float *)(iVar6 + 0x44c);
    fVar25 = *(float *)(iVar6 + 0x450);
    fVar20 = fVar25 * DAT_002c2938;
    *(float *)(iVar6 + 0x44c) = fVar24 * DAT_002c2938;
    *(float *)(iVar6 + 0x450) = fVar20;
    pcVar12 = (&PTR_DAT_00284128)[(iVar15 * 0x32 + iVar17) * 2];
    fVar20 = 0.0;
    cVar2 = *pcVar12;
    fVar22 = DAT_002c293c;
    while (cVar2 != '\0') {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      iVar15 = 0;
      do {
        iVar6 = iVar15;
        if (iVar6 == 0xd) {
          fVar21 = *(float *)(*(int *)(iVar18 + 0xb3c) + 0x44c);
          iVar15 = FUN_001a0cd0(*(int *)(iVar18 + 0xb3c) + 0x434,cVar2);
          fVar20 = fVar20 + fVar21 * (float)iVar15 * fVar22 * fVar5;
          goto LAB_00180348;
        }
        iVar15 = iVar6 + 1;
      } while ((long)(int)cVar2 != (long)(char)(&DAT_00284ea8)[iVar6 * 0x20]);
      fVar20 = fVar20 + (float)(int)(&DAT_00284eb8)[iVar6 * 8] * fVar5;
LAB_00180348:
      iVar6 = *(int *)(iVar18 + 0xb3c);
      cVar2 = *pcVar12;
    }
    iVar15 = *(int *)(iVar18 + 0xba0);
    iVar17 = *(int *)(iVar18 + 0xba4);
    *(float *)(iVar6 + 0x450) = fVar25;
    *(float *)(iVar6 + 0x44c) = fVar24;
    fVar5 = DAT_002c2940;
    pbVar13 = (&PTR_DAT_00284128)[(iVar15 * 0x32 + iVar17) * 2];
    fVar24 = -fVar20 * 0.5;
    if (*pbVar13 != 0) {
      bVar3 = *pbVar13;
      fVar20 = DAT_002c2944;
      do {
        pbVar19 = pbVar13 + 1;
        piVar16 = &DAT_00284eb8;
        iVar6 = 0;
        piVar10 = &DAT_00284ebc;
        for (iVar15 = 0; iVar15 != 0xd; iVar15 = iVar15 + 1) {
          if ((long)(int)(char)bVar3 == (long)(char)(&DAT_00284ea8)[iVar6]) {
            if (*piVar10 == 0) {
              uVar4 = *(undefined4 *)((int)&DAT_00284ec0 + iVar6);
            }
            else {
              uVar4 = *(undefined4 *)((int)&DAT_00284ec4 + iVar6);
            }
            *piVar10 = *piVar10 + 1;
            FUN_0016eae0(param_1,uVar4);
            FUN_0016e100(param_1,uVar4);
            FUN_0016e340(*(float *)(iVar6 + 0x284eac) * fVar5,param_1,uVar4);
            FUN_0016dff8(param_1,uVar4,(int)(-fVar24 + (float)*(int *)(iVar6 + 0x284eb0) * fVar5),
                         (int)((float)*(int *)(iVar6 + 0x284eb4) * 1.25 + 188.0));
            fVar24 = fVar24 + (float)*piVar16 * fVar5;
            goto LAB_0018057c;
          }
          piVar16 = piVar16 + 8;
          piVar10 = piVar10 + 8;
          iVar6 = iVar6 + 0x20;
        }
        fVar25 = 0.0;
        iVar15 = *(int *)(iVar18 + 0xb3c);
        fVar22 = DAT_002c2948;
        if (bVar3 - 0x28 < 2) {
          fVar25 = -4.0;
          fVar22 = DAT_002c294c;
        }
        uStack_4df = 0;
        fVar21 = *(float *)(iVar15 + 0x450);
        fVar23 = *(float *)(iVar15 + 0x44c);
        *(float *)(iVar15 + 0x44c) = fVar23 * fVar5;
        *(float *)(iVar15 + 0x450) = fVar21 * fVar22 * fVar5;
        bStack_4e0 = bVar3;
        FUN_001a1260(fVar24 / fVar20,fVar25 + 117.5,iVar15 + 0x434,&bStack_4e0);
        fVar22 = *(float *)(*(int *)(iVar18 + 0xb3c) + 0x44c);
        iVar6 = FUN_001a0cd0(*(int *)(iVar18 + 0xb3c) + 0x434,*pbVar13);
        iVar15 = *(int *)(iVar18 + 0xb3c);
        *(float *)(iVar15 + 0x450) = fVar21;
        *(float *)(iVar15 + 0x44c) = fVar23;
        fVar24 = fVar24 + fVar22 * (float)iVar6 * fVar20;
LAB_0018057c:
        if (*pbVar19 == 0) break;
        bVar3 = *pbVar19;
        pbVar13 = pbVar19;
      } while( true );
    }
  }
  FUN_0019ae30(auStack_2d80);
  uStack_1960 = 1;
  uStack_195c = 0;
  FUN_0019af18(auStack_2d80,*(int *)(iVar18 + 0xb3c) + 0x434);
  FUN_0019af40(0xc3480000,0xc3010000,0x43c80000,0x41f00000,auStack_2d80);
  if (*(int *)(iVar18 + 0xc94) != 0) goto switchD_0018076c_default;
  psVar14 = asStack_4d2 + 1;
  uVar7 = FUN_0019a998(*(int *)(&DAT_00284da8 + *(int *)(iVar18 + 0xba0) * 4) +
                       *(int *)(iVar18 + 0xba4));
  FUN_00234428(psVar14,uVar7);
  iVar15 = FUN_00234290(psVar14);
  psVar9 = psVar14 + iVar15;
  if (psVar14 < psVar9) {
    psVar8 = psVar9;
    if (asStack_4d2[iVar15] == 0x20) {
      do {
        psVar9 = psVar8 + -1;
        if (psVar9 <= psVar14) {
          *psVar9 = 0;
          goto LAB_0018067c;
        }
        psVar1 = psVar8 + -2;
        psVar8 = psVar9;
      } while (*psVar1 == 0x20);
      goto LAB_00180678;
    }
    *psVar9 = 0;
  }
  else {
LAB_00180678:
    *psVar9 = 0;
  }
LAB_0018067c:
  FUN_0019b000(auStack_2d80,0x2c4ce8);
  FUN_0019af58(auStack_2d80,psVar14);
  FUN_0019aa58(auStack_2d80);
  iVar17 = iStack_193c + -0x1e;
  iVar15 = (iStack_1940 * -0x10) / 10;
  iVar6 = iVar15 + -0x32;
  FUN_0016dff8(param_1,0x13a,iVar6,iVar17);
  FUN_0016dff8(param_1,0x139,iVar6,iVar17);
  FUN_0016dff8(param_1,0x13b,iVar6,iVar17);
  FUN_0016dff8(param_1,0x12a,iVar15 + -0x1e,iVar17);
  FUN_0016dff8(param_1,0x129,iVar15 + -10,iVar17);
  switch(*(undefined4 *)
          (&DAT_0028412c + (*(int *)(iVar18 + 0xba0) * 0x32 + *(int *)(iVar18 + 0xba4)) * 8)) {
  case 0:
    uVar7 = 0x13a;
    break;
  case 1:
    uVar7 = 0x139;
    break;
  case 4:
    FUN_0016eae0(param_1,0x129);
  case 3:
    FUN_0016eae0(param_1,0x12a);
  case 2:
    uVar7 = 0x13b;
    break;
  default:
    goto switchD_0018076c_default;
  }
  FUN_0016eae0(param_1,uVar7);
switchD_0018076c_default:
  FUN_0019ae30(auStack_1930);
  uStack_510 = 1;
  uStack_50c = 0;
  FUN_0019af18(auStack_1930,*(int *)(iVar18 + 0xb3c) + 0x434);
  FUN_0019af40(0xc3480000,0x43240000,0x43c80000,0x41f00000,auStack_1930);
  FUN_0025b630(0x285070,0x2b2ce8,*(undefined4 *)(iVar18 + 0xbb4));
  FUN_0019b000(auStack_1930,0x285070);
  FUN_0019aa58(auStack_1930);
  if (*(int *)(iVar18 + 0xc94) != 0) {
    *(float *)(iVar18 + 0xc98) = *(float *)(iVar18 + 0xc98) + DAT_002c2950;
    FUN_001808c8(param_1);
  }
  FUN_0011ed18(0x295e90,0xc);
  FUN_0019aa30(auStack_1930,2);
  FUN_0019aa30(auStack_2d80,2);
  return;
}

