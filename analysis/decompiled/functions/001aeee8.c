/* Ghidra pseudocode. PS2 address: 001aeee8. Not validated source. */

void FUN_001aeee8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  iVar13 = (int)param_1;
  FUN_001ab478(0x42fa0000,iVar13 + 0x180);
  DAT_0028b248 = 0x42dc0000;
  DAT_0028b258 = DAT_002c3378;
  DAT_0028b24c = 0x43340000;
  DAT_0028b250 = 0x43b40000;
  DAT_0028b254 = 0x43f00000;
  DAT_0028b160 = 0;
  DAT_0028b16c = 2;
  DAT_0028b164 = 1;
  DAT_0028b168 = 1;
  uVar7 = FUN_00234e80(DAT_002852fc,0x11);
  FUN_0019a7f8(0x28f270,uVar7);
  uVar7 = FUN_00234e80(DAT_002852fc,0x12);
  FUN_0019a7f8(0x28f2f0,uVar7);
  uVar7 = FUN_00234e80(DAT_002852fc,0x44);
  FUN_0019a7f8(0x28f370,uVar7);
  uVar7 = FUN_00234e80(DAT_002852fc,0x14);
  FUN_0019a7f8(0x28f3f0,uVar7);
  uVar6 = DAT_002c337c;
  *(undefined4 *)(iVar13 + 0x188) = 4;
  iVar11 = DAT_0027ba88;
  *(int *)(iVar13 + 0x184) = DAT_0027b810;
  *(undefined4 *)(iVar13 + 0x1cc) = uVar6;
  *(undefined4 *)(iVar13 + 0x1d0) = 0x43a00000;
  if ((iVar11 == 2) || (iVar11 == 8)) {
    iVar11 = *(int *)(iVar13 + 0x1b4);
    uVar5 = FUN_00234e80(DAT_002852fc,0x72);
    uVar6 = DAT_002852fc;
    iVar11 = iVar11 * 8 + iVar13;
    *(undefined4 *)(iVar11 + 0x18c) = 2;
    *(undefined4 *)(iVar11 + 400) = uVar5;
    iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
    *(int *)(iVar13 + 0x1b4) = iVar11;
    uVar5 = FUN_00234e80(uVar6,0x71);
    uVar6 = DAT_002852fc;
    iVar11 = iVar11 * 8 + iVar13;
    *(undefined4 *)(iVar11 + 0x18c) = 1;
    *(undefined4 *)(iVar11 + 400) = uVar5;
    iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
    *(int *)(iVar13 + 0x1b4) = iVar11;
    uVar5 = FUN_00234e80(uVar6,0x29);
    uVar6 = DAT_002852fc;
    iVar11 = iVar11 * 8 + iVar13;
    *(undefined4 *)(iVar11 + 0x18c) = 4;
    *(undefined4 *)(iVar11 + 400) = uVar5;
    iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
    *(int *)(iVar13 + 0x1b4) = iVar11;
    uVar5 = FUN_00234e80(uVar6,0x73);
    uVar6 = DAT_002852fc;
    iVar11 = iVar11 * 8 + iVar13;
    *(undefined4 *)(iVar11 + 0x18c) = 3;
    *(undefined4 *)(iVar11 + 400) = uVar5;
    *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
    uVar7 = FUN_00234e80(uVar6,0xf);
    FUN_0019a7f8(0x28f670,uVar7);
  }
  else {
    lVar8 = FUN_00154078(0x27a598);
    FUN_0019a7f8(0x28f670,(&DAT_0028b140)[(int)lVar8]);
    if ((*(int *)(iVar13 + 0x1c4) == 0) && (lVar8 != 3)) {
      bVar4 = true;
      iVar11 = 0;
      if (0 < DAT_0027b810 / 2) {
        if ((char)(&DAT_0027b868)[DAT_0027bc0c * 0x68] < '\0') {
          do {
            iVar11 = iVar11 + 1;
            if (DAT_0027b810 / 2 <= iVar11) goto LAB_001af31c;
          } while ((char)(&DAT_0027b868)[(&DAT_0027bc0c)[iVar11] * 0x68] < '\0');
          bVar4 = false;
        }
        else {
          bVar4 = false;
        }
      }
LAB_001af31c:
      if (lVar8 == 1) {
        uVar7 = FUN_00234e80(DAT_002852fc,0x6d);
      }
      else {
        uVar7 = FUN_00234e80(DAT_002852fc,0x6e);
      }
      uVar9 = FUN_00234e80(DAT_002852fc,0x28);
      FUN_0019a7c0(uVar7);
      FUN_0019a7c0(uVar9);
      if (bVar4) {
        iVar11 = *(int *)(iVar13 + 0x1b4);
        uVar6 = FUN_00234e80(DAT_002852fc,0x72);
        iVar11 = iVar11 * 8 + iVar13;
        *(undefined4 *)(iVar11 + 0x18c) = 5;
        *(undefined4 *)(iVar11 + 400) = uVar6;
        *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
        FUN_0019a7f8(iVar13 + 0x1d8,uVar9);
      }
      else {
        iVar11 = *(int *)(iVar13 + 0x1b4);
        uVar6 = FUN_00234e80(DAT_002852fc,0x70);
        iVar11 = iVar11 * 8 + iVar13;
        *(undefined4 *)(iVar11 + 0x18c) = 0;
        *(undefined4 *)(iVar11 + 400) = uVar6;
        *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
        FUN_0019a7f8(iVar13 + 0x1d8,uVar7);
      }
      iVar11 = *(int *)(iVar13 + 0x1b4);
      uVar5 = FUN_00234e80(DAT_002852fc,0x71);
      uVar6 = DAT_002852fc;
      iVar11 = iVar11 * 8 + iVar13;
      *(undefined4 *)(iVar11 + 0x18c) = 1;
      *(undefined4 *)(iVar11 + 400) = uVar5;
      iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
      *(int *)(iVar13 + 0x1b4) = iVar11;
      uVar5 = FUN_00234e80(uVar6,0x29);
      uVar6 = DAT_002852fc;
      iVar11 = iVar11 * 8 + iVar13;
      *(undefined4 *)(iVar11 + 0x18c) = 4;
      *(undefined4 *)(iVar11 + 400) = uVar5;
      iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
      *(int *)(iVar13 + 0x1b4) = iVar11;
      uVar6 = FUN_00234e80(uVar6,0x73);
      iVar11 = iVar11 * 8 + iVar13;
      *(undefined4 *)(iVar11 + 0x18c) = 3;
      *(undefined4 *)(iVar11 + 400) = uVar6;
      *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
    }
    else {
      iVar11 = *(int *)(iVar13 + 0x1b4);
      uVar6 = FUN_00234e80(DAT_002852fc,0x70);
      iVar11 = iVar11 * 8 + iVar13;
      *(undefined4 *)(iVar11 + 0x18c) = 0;
      *(undefined4 *)(iVar11 + 400) = uVar6;
      iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
      *(int *)(iVar13 + 0x1b4) = iVar11;
      if (lVar8 == 3) {
        uVar6 = FUN_00234e80(DAT_002852fc,0x72);
        iVar11 = iVar11 * 8 + iVar13;
        *(undefined4 *)(iVar11 + 0x18c) = 5;
        *(undefined4 *)(iVar11 + 400) = uVar6;
        *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
      }
      iVar11 = *(int *)(iVar13 + 0x1b4);
      uVar5 = FUN_00234e80(DAT_002852fc,0x71);
      uVar6 = DAT_002852fc;
      iVar11 = iVar11 * 8 + iVar13;
      *(undefined4 *)(iVar11 + 0x18c) = 1;
      *(undefined4 *)(iVar11 + 400) = uVar5;
      iVar11 = *(int *)(iVar13 + 0x1b4) + 1;
      *(int *)(iVar13 + 0x1b4) = iVar11;
      uVar6 = FUN_00234e80(uVar6,0x29);
      DAT_0028b204 = DAT_0028b200 + 40.0;
      iVar11 = iVar11 * 8 + iVar13;
      *(undefined4 *)(iVar11 + 0x18c) = 4;
      DAT_0028b208 = DAT_0028b204 + 40.0;
      *(undefined4 *)(iVar11 + 400) = uVar6;
      DAT_0028b20c = DAT_0028b208 + 40.0;
      *(undefined4 *)(iVar13 + 0x27c) = 1;
      *(int *)(iVar13 + 0x1b4) = *(int *)(iVar13 + 0x1b4) + 1;
      DAT_0028b210 = DAT_0028b20c + 20.0;
      DAT_0028b214 = DAT_0028b210 + 20.0;
      DAT_0028b218 = DAT_0028b214 + 20.0;
    }
  }
  iVar11 = 0;
  if (0 < DAT_0027b810) {
    do {
      iVar12 = iVar11 * 0x80;
      iVar10 = iVar11 + 1;
      iVar2 = (&DAT_0027bc0c)[iVar11];
      FUN_0019a8f0(&DAT_0028b270 + iVar12,0x2c5190);
      iVar3 = iVar2 * 0x68;
      uVar14 = iVar3 >> 0x1f;
      FUN_0019a830(iVar12 + 0x28ba70,&DAT_0027b818 + iVar3);
      FUN_0019a830(&DAT_0028c270 + iVar12,
                   *(undefined4 *)((uVar14 | 0x27c380) + *(int *)(&DAT_0027b838 + iVar3) * 0x3c + 4)
                  );
      FUN_001a2650(*(undefined4 *)(&DAT_0027bc24 + iVar2 * 4),iVar12 + 0x28ca70);
      cVar1 = (&DAT_0027b868)[iVar3];
      uVar6 = 0xffffffff;
      iVar2 = *(int *)(iVar13 + 0x27c);
      if (cVar1 != -1) {
        uVar6 = 0;
      }
      (&DAT_0028b1c0)[iVar11] = uVar6;
      if ((iVar2 != 0) && (-1 < cVar1)) {
        uVar6 = FUN_00159388(iVar11);
        *(undefined4 *)(iVar13 + 0x1d4) = uVar6;
        FUN_001b0aa8(param_1);
      }
      iVar11 = iVar10;
    } while (iVar10 < DAT_0027b810);
  }
  return;
}

