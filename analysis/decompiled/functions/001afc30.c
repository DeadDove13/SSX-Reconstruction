/* Ghidra pseudocode. PS2 address: 001afc30. Not validated source. */

void FUN_001afc30(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  
  uVar3 = DAT_002c3380;
  iVar9 = 0xf;
  iVar12 = (int)param_1;
  *(undefined4 *)(iVar12 + 0x280) = 1;
  *(undefined4 *)(iVar12 + 0x1cc) = 0x43c80000;
  *(undefined4 *)(iVar12 + 0x1d0) = uVar3;
  puVar6 = &DAT_0028b1fc;
  do {
    *puVar6 = 0xffffffff;
    iVar9 = iVar9 + -1;
    puVar6 = puVar6 + -1;
  } while (-1 < iVar9);
  iVar9 = *(int *)(iVar12 + 0x1c4);
  iVar4 = *(int *)(iVar12 + 0x1b4);
  puVar6 = &DAT_0028b1bc;
  iVar10 = 7;
  do {
    *puVar6 = 0xffffffff;
    iVar10 = iVar10 + -1;
    puVar6 = puVar6 + -1;
  } while (-1 < iVar10);
  if (iVar9 == 0) {
    if (DAT_0027ba88 == 3) {
      uVar2 = FUN_00234e80(DAT_002852fc,0x72);
      uVar3 = DAT_002852fc;
      iVar9 = iVar4 * 8 + iVar12;
      *(undefined4 *)(iVar9 + 0x18c) = 2;
      *(undefined4 *)(iVar9 + 400) = uVar2;
      iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
      *(int *)(iVar12 + 0x1b4) = iVar9;
      uVar2 = FUN_00234e80(uVar3,0x71);
      uVar3 = DAT_002852fc;
      iVar9 = iVar9 * 8 + iVar12;
      *(undefined4 *)(iVar9 + 0x18c) = 1;
      *(undefined4 *)(iVar9 + 400) = uVar2;
      iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
      *(int *)(iVar12 + 0x1b4) = iVar9;
      uVar2 = FUN_00234e80(uVar3,0x29);
      uVar3 = DAT_002852fc;
      iVar9 = iVar9 * 8 + iVar12;
      *(undefined4 *)(iVar9 + 0x18c) = 4;
      *(undefined4 *)(iVar9 + 400) = uVar2;
      iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
      *(int *)(iVar12 + 0x1b4) = iVar9;
      uVar3 = FUN_00234e80(uVar3,0x73);
      puVar6 = (undefined4 *)(iVar9 * 8 + iVar12 + 0x18c);
      *puVar6 = 3;
      goto LAB_001afecc;
    }
    uVar2 = FUN_00234e80(DAT_002852fc,0x70);
    uVar3 = DAT_002852fc;
    iVar9 = iVar4 * 8 + iVar12;
    *(undefined4 *)(iVar9 + 0x18c) = 0;
    *(undefined4 *)(iVar9 + 400) = uVar2;
    iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
    *(int *)(iVar12 + 0x1b4) = iVar9;
    uVar2 = FUN_00234e80(uVar3,0x72);
    uVar3 = DAT_002852fc;
    iVar9 = iVar9 * 8 + iVar12;
    *(undefined4 *)(iVar9 + 0x18c) = 2;
    *(undefined4 *)(iVar9 + 400) = uVar2;
    iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
    *(int *)(iVar12 + 0x1b4) = iVar9;
    uVar3 = FUN_00234e80(uVar3,0x71);
  }
  else {
    uVar2 = FUN_00234e80(DAT_002852fc,0x70);
    uVar3 = DAT_002852fc;
    iVar9 = iVar4 * 8 + iVar12;
    *(undefined4 *)(iVar9 + 0x18c) = 0;
    *(undefined4 *)(iVar9 + 400) = uVar2;
    iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
    *(int *)(iVar12 + 0x1b4) = iVar9;
    uVar3 = FUN_00234e80(uVar3,0x71);
  }
  uVar2 = DAT_002852fc;
  iVar9 = iVar9 * 8 + iVar12;
  *(undefined4 *)(iVar9 + 0x18c) = 1;
  *(undefined4 *)(iVar9 + 400) = uVar3;
  iVar9 = *(int *)(iVar12 + 0x1b4) + 1;
  *(int *)(iVar12 + 0x1b4) = iVar9;
  uVar3 = FUN_00234e80(uVar2,0x29);
  puVar6 = (undefined4 *)(iVar9 * 8 + iVar12 + 0x18c);
  *puVar6 = 4;
LAB_001afecc:
  puVar6[1] = uVar3;
  *(int *)(iVar12 + 0x1b4) = *(int *)(iVar12 + 0x1b4) + 1;
  iVar9 = 0;
  if (0 < DAT_0027b810) {
    puVar8 = &DAT_0027bca4;
    puVar11 = &DAT_0028af68;
    do {
      FUN_001367f8(puVar11,puVar8);
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 0x74;
      puVar11 = puVar11 + 0x78;
    } while (iVar9 < DAT_0027b810);
  }
  uVar3 = DAT_002852fc;
  *(int *)(iVar12 + 0x188) = DAT_0027b810 << 2;
  uVar5 = FUN_00234e80(uVar3,0xc);
  FUN_0019a7f8(0x28f670,uVar5);
  iVar9 = 0;
  if (DAT_0027b810 == 1) {
    uVar3 = FUN_00159328(DAT_0027bcac,DAT_0027ba84);
    bVar1 = DAT_0027ba88 == 5;
    *(undefined4 *)(iVar12 + 0x1d4) = uVar3;
    if (bVar1) {
      FUN_001b0aa8(param_1);
    }
    FUN_001ab478(0x42be0000,iVar12 + 0x180);
    DAT_0028b248 = 160.0;
    FUN_0019a830(0x28c270,&DAT_0027b818);
  }
  else {
    FUN_001ab478(0x43020000,iVar12 + 0x180);
    DAT_0028b248 = 60.0;
    FUN_0019a830(0x28b270,&DAT_0027b818);
    FUN_0019a830(0x28ea70,0x27b880);
    iVar4 = -1;
    if (0 < DAT_0027b810) {
      puVar8 = &DAT_0027bc3c;
      do {
        if (iVar4 < *(int *)(puVar8 + 0x70)) {
          *(int *)(iVar12 + 0x288) = iVar9;
          *(undefined4 *)(iVar12 + 0x2a0) = 1;
          iVar4 = *(int *)(puVar8 + 0x70);
        }
        else if (*(int *)(puVar8 + 0x70) == iVar4) {
          *(int *)(iVar12 + 0x288 + *(int *)(iVar12 + 0x2a0) * 4) = iVar9;
          *(int *)(iVar12 + 0x2a0) = *(int *)(iVar12 + 0x2a0) + 1;
        }
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 0x74;
      } while (iVar9 < DAT_0027b810);
    }
    iVar9 = *(int *)(iVar12 + 0x2a0);
    if (iVar9 == DAT_0027b810) {
      *(undefined4 *)(iVar12 + 0x2a0) = 0;
    }
    else if (0 < iVar9) {
      piVar7 = (int *)(iVar12 + 0x288);
      iVar4 = *piVar7;
      while( true ) {
        if (iVar4 == 0) {
          DAT_0028b1ac = 0;
        }
        else if (iVar4 == 1) {
          DAT_0028b1b8 = 0;
        }
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) break;
        iVar4 = *piVar7;
      }
    }
  }
  puVar6 = &DAT_0028af60;
  DAT_0028afdc = 4;
  DAT_0028af64 = 1;
  *(undefined4 *)(iVar12 + 0x184) = 2;
  DAT_0028b1c0 = 0;
  iVar9 = 0;
  DAT_0028b1c8 = 1;
  if (0 < DAT_0027b810) {
    do {
      iVar4 = FUN_001af8e8(param_1,puVar6,2);
      if (*(int *)(iVar12 + 0x184) < iVar4) {
        *(int *)(iVar12 + 0x184) = iVar4;
      }
      iVar9 = iVar9 + 1;
      puVar6 = puVar6 + 0x1e;
    } while (iVar9 < DAT_0027b810);
  }
  DAT_0028b24c = DAT_0028b248 + 10.0;
  DAT_0028b17c = 2;
  DAT_0028b250 = DAT_0028b24c + 160.0;
  DAT_0028b160 = 0;
  DAT_0028b254 = DAT_0028b250 + 10.0;
  DAT_0028b198 = 1;
  DAT_0028b258 = DAT_0028b254 + 90.0;
  DAT_0028b164 = 2;
  DAT_0028b168 = 1;
  DAT_0028b25c = DAT_0028b258 + 160.0;
  DAT_0028b16c = 0;
  DAT_0028b170 = 2;
  DAT_0028b260 = DAT_0028b25c + 10.0;
  DAT_0028b174 = 1;
  DAT_0028b178 = 0;
  DAT_0028b264 = DAT_0028b260 + 90.0;
  DAT_0028b184 = 1;
  DAT_0028b18c = 1;
  DAT_0028b268 = DAT_0028b264 + 10.0;
  DAT_0028b190 = 1;
  if (*(int *)(iVar12 + 0x1d4) != 3) {
    iVar9 = FUN_001a0a88(0x3f800000,*(undefined4 *)(DAT_002859e4 + 0x5c),0x28c270,0);
    *(float *)(iVar12 + 0x284) = ((DAT_0028b254 + DAT_0028b250) * 0.5 - (float)(iVar9 / 2)) - 5.0;
  }
  return;
}

