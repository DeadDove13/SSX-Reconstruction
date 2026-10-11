/* Ghidra pseudocode. PS2 address: 00137fd0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00138078) */

undefined4
FUN_00137fd0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  
  FUN_0023bbd0(param_2,0,8);
  iVar15 = (int)param_1;
  if (*(int *)(iVar15 + 0x10) == 0) {
    iVar5 = *(int *)(iVar15 + 0x1c);
  }
  else {
    *(int *)(iVar15 + 0x2c) = -*(int *)(iVar15 + 0x2c);
    iVar5 = *(int *)(iVar15 + 0x1c);
  }
  if (iVar5 == 4) {
    *(int *)(iVar15 + 0x30) = -*(int *)(iVar15 + 0x30);
    uVar4 = *(undefined4 *)(iVar15 + 0x2c);
  }
  else {
    uVar4 = *(undefined4 *)(iVar15 + 0x2c);
  }
  uVar4 = FUN_00137d50(param_1,uVar4);
  *(undefined4 *)(iVar15 + 0x2c) = uVar4;
  iVar5 = FUN_00137d50(param_1,*(undefined4 *)(iVar15 + 0x30));
  *(int *)(iVar15 + 0x30) = iVar5;
  uVar1 = iVar5 / 0x168;
  bVar13 = false;
  uVar12 = 0;
  uVar11 = *(int *)(iVar15 + 0x2c) / 0xb4;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  uVar10 = uVar1;
  uVar2 = uVar11;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    uVar2 = uVar11;
  }
  for (; (0 < (int)uVar10 && (2 < (int)uVar11)); uVar11 = uVar11 - 3) {
    uVar12 = uVar12 + 1;
    uVar10 = uVar10 - 1;
  }
  if ((*(int *)(iVar15 + 0x2c) < 1) && ((int)uVar2 < 0xb)) {
    iVar5 = *(int *)(iVar15 + 0x30);
    uVar11 = uVar2;
  }
  else {
    uVar11 = uVar2 + 10;
    iVar5 = *(int *)(iVar15 + 0x30);
  }
  if ((iVar5 < 0) || (3 < (int)uVar1)) {
    uVar10 = uVar1 + 3;
    iVar5 = *(int *)(iVar15 + 0x4c);
  }
  else {
    iVar5 = *(int *)(iVar15 + 0x4c);
    uVar10 = uVar1;
  }
  iVar16 = 0;
  if (iVar5 != 0) {
    piVar8 = (int *)(iVar15 + 0x4c);
    iVar16 = 1;
    while ((piVar8 = piVar8 + 1, iVar16 < 3 && (*piVar8 != 0))) {
      iVar16 = iVar16 + 1;
    }
  }
  puVar14 = (uint *)param_2;
  if (*(int *)(iVar15 + 0x1c) == 0) {
    uVar9 = 0x10000;
    if (*(int *)(iVar15 + 0x10) != 0) {
      uVar6 = puVar14[1];
      goto LAB_00138190;
    }
  }
  else {
    uVar9 = 0x30000;
    if (*(int *)(iVar15 + 0x10) == 0) {
      uVar6 = puVar14[1];
      uVar9 = 0x20000;
    }
    else {
      uVar6 = puVar14[1];
    }
LAB_00138190:
    puVar14[1] = uVar6 & 0xfff0ffff | uVar9;
  }
  if ((int)uVar11 < 0x15) {
    if ((int)uVar10 < 7) {
      if ((*(int *)(iVar15 + 0x14) == 0) || (param_5 == 0)) {
        puVar7 = &DAT_002790a8;
      }
      else {
        puVar7 = &DAT_002792f8;
      }
      *(undefined *)puVar14 = puVar7[uVar10 * 4 + uVar11 * 0x1c];
    }
    else {
      bVar13 = true;
    }
  }
  else {
    bVar13 = true;
  }
  if ((char)*puVar14 == '\0') {
    if (0 < (int)uVar2) {
      uVar11 = 0x10000000;
      if (*(int *)(iVar15 + 0x2c) < 1) {
        uVar10 = puVar14[1];
        uVar11 = 0x8000000;
      }
      else {
        uVar10 = puVar14[1];
      }
      puVar14[1] = uVar10 & 0xc7ffffff | uVar11;
    }
    if (uVar1 == 0) {
      *puVar14 = *puVar14 & 0xf0ffffff | (uVar2 & 0xf) << 0x18;
      uVar11 = puVar14[1];
    }
    else {
      uVar11 = puVar14[1];
    }
    uVar10 = (uVar1 & 7) << 0x18;
    puVar14[1] = uVar11 & 0xf8ffffff | uVar10;
    if (0 < (int)uVar1) {
      if (((int)uVar12 < 1) || (uVar12 != uVar1)) {
        if (*(int *)(iVar15 + 0x30) < 1) {
          uVar11 = puVar14[1] & 0xfffff0ff | 0x200;
        }
        else {
          uVar11 = puVar14[1] & 0xfffff0ff | 0x100;
        }
      }
      else if (*(int *)(iVar15 + 0x30) < 1) {
        uVar11 = uVar11 & 0xf8fff0ff | uVar10 | 0x300;
      }
      else {
        uVar11 = uVar11 & 0xf8fff0ff | uVar10 | 0x400;
      }
      puVar14[1] = uVar11;
      goto LAB_001382e8;
    }
  }
  else {
LAB_001382e8:
    if (((0 < (int)uVar1) && (uVar2 != uVar1 * 3)) && ((int)uVar2 < 0xb)) {
      *puVar14 = *puVar14 & 0xfffffff | uVar2 << 0x1c;
    }
  }
  uVar11 = 0x300000;
  if (param_3 == 0) {
    if (((char)*puVar14 == '\0') && ((uVar12 == 0 || ((*puVar14 & 0xf0000000) != 0)))) {
      if ((param_4 == 0) || (uVar11 = 0x200000, *(int *)(iVar15 + 0x10) != 0)) {
        if ((uVar2 != 0) || (uVar1 != 0)) goto LAB_001383b0;
        uVar11 = 0x100000;
        if (iVar16 < 1) goto LAB_001383f8;
        uVar12 = puVar14[1];
      }
      else {
        uVar12 = puVar14[1];
      }
      goto LAB_001383a4;
    }
  }
  else {
    uVar12 = puVar14[1];
LAB_001383a4:
    puVar14[1] = uVar12 & 0xff0fffff | uVar11;
  }
LAB_001383b0:
  if ((0 < iVar16) && (*(char *)((int)puVar14 + 1) = *(char *)(iVar15 + 0x4c), 1 < iVar16)) {
    puVar14[1] = puVar14[1] & 0x3fffffff | 0x40000000;
    if (iVar16 == 2) {
      cVar3 = *(char *)(iVar15 + 0x50);
    }
    else {
      cVar3 = '5';
    }
    *(char *)((int)puVar14 + 2) = cVar3;
  }
LAB_001383f8:
  if (bVar13) {
    FUN_0023bbd0(param_2,0,8);
    *(char *)puVar14 = '\\';
  }
  uVar4 = 0;
  if (((0 < (int)uVar1) || (0 < (int)uVar2)) || (0 < iVar16)) {
    uVar4 = 1;
  }
  return uVar4;
}

