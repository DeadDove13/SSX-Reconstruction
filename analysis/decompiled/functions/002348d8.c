/* Ghidra pseudocode. PS2 address: 002348d8. Not validated source. */

void FUN_002348d8(ushort *param_1,ushort *param_2,ushort *param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  int iVar15;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  ushort *apuStack_70 [4];
  
  iVar15 = 0;
  apuStack_70[0] = param_1;
  FUN_002344a0(auStack_d0,0x2be2d0);
  FUN_002344a0(auStack_a0,0x2be2e8);
  uVar4 = *param_2;
  param_2 = param_2 + 1;
joined_r0x00234d00:
  while( true ) {
    if (uVar4 == 0) {
      *apuStack_70[0] = 0;
      return;
    }
    if (uVar4 == 0x25) break;
    iVar15 = iVar15 + 1;
    *apuStack_70[0] = uVar4;
    uVar4 = *param_2;
    apuStack_70[0] = apuStack_70[0] + 1;
    param_2 = param_2 + 1;
  }
  bVar1 = true;
  puVar12 = param_2 + 1;
  uVar8 = 0;
  iVar9 = 0;
  iVar10 = 6;
  puVar14 = param_2 + 2;
  uVar5 = (uint)*param_2;
  do {
    switch(uVar5) {
    case 0x20:
      uVar5 = (uint)*puVar12;
      uVar8 = uVar8 | 4;
      break;
    default:
      bVar1 = false;
      goto LAB_002349c4;
    case 0x23:
      uVar5 = (uint)*puVar12;
      uVar8 = uVar8 | 2;
      break;
    case 0x2b:
      uVar5 = (uint)*puVar12;
      uVar8 = uVar8 | 1;
      break;
    case 0x2d:
      uVar5 = (uint)*puVar12;
      uVar8 = uVar8 | 0x10;
      break;
    case 0x30:
      uVar5 = (uint)*puVar12;
      uVar8 = uVar8 | 8;
    }
    puVar12 = puVar14;
    puVar14 = puVar14 + 1;
LAB_002349c4:
  } while (bVar1);
  if (uVar5 == 0x2a) {
    uVar5 = (uint)*puVar12;
    iVar9 = *(int *)param_3;
    puVar12 = puVar14;
    param_3 = param_3 + 4;
LAB_00234a44:
    puVar14 = puVar12 + 1;
  }
  else if ((((0x29 < uVar5) && (uVar5 < 0x3a)) && (0x30 < uVar5)) && (iVar9 = 0, uVar5 - 0x30 < 10))
  {
    while( true ) {
      iVar9 = iVar9 * 10 + -0x30 + uVar5;
      uVar5 = (uint)*puVar12;
      puVar12 = puVar14;
      if (9 < uVar5 - 0x30) break;
      puVar14 = puVar14 + 1;
    }
    goto LAB_00234a44;
  }
  if (uVar5 == 0x2e) {
    uVar4 = *puVar12;
    uVar5 = (uint)uVar4;
    if (uVar5 == 0x2a) {
      uVar5 = (uint)*puVar14;
      puVar14 = puVar14 + 1;
      iVar10 = *(int *)param_3;
      param_3 = param_3 + 4;
LAB_00234ad0:
      param_2 = puVar14 + 1;
    }
    else {
      param_2 = puVar14 + 1;
      if ((0x29 < uVar4) && (uVar4 < 0x3a)) {
        iVar2 = uVar5 - 0x43;
        if ((uVar4 < 0x31) || (iVar10 = 0, 9 < uVar5 - 0x30)) goto LAB_00234ad8;
        do {
          iVar10 = iVar10 * 10 + -0x30 + uVar5;
          uVar5 = (uint)*puVar14;
          puVar14 = puVar14 + 1;
        } while (uVar5 - 0x30 < 10);
        goto LAB_00234ad0;
      }
    }
    iVar2 = uVar5 - 0x43;
  }
  else {
    iVar2 = uVar5 - 0x43;
    param_2 = puVar14;
    puVar14 = puVar12;
  }
LAB_00234ad8:
  switch(iVar2) {
  case 0:
    puVar13 = param_3 + 4;
    *apuStack_70[0] = (ushort)(byte)*param_3;
    goto LAB_00234cf4;
  default:
    *apuStack_70[0] = (ushort)uVar5;
    puVar13 = param_3;
    goto LAB_00234cf4;
  case 2:
  case 4:
  case 0x22:
  case 0x23:
  case 0x24:
    puVar13 = param_3 + 4;
    goto LAB_00234cf8;
  case 0xd:
  case 0x2d:
    uVar6 = *(undefined4 *)param_3;
    uVar8 = uVar8 | 0x28;
    puVar11 = auStack_d0;
    if (uVar5 != 0x70) {
      puVar11 = auStack_a0;
    }
    uVar7 = 0x10;
    iVar9 = 8;
    break;
  case 0x10:
    puVar13 = param_3 + 4;
    pbVar3 = *(byte **)param_3;
    if (pbVar3 == (byte *)0x0) {
LAB_00234c80:
      puVar13 = param_3 + 4;
      *apuStack_70[0] = 0x28;
      apuStack_70[0][1] = 0x6e;
      apuStack_70[0][2] = 0x75;
      apuStack_70[0][3] = 0x6c;
      iVar15 = iVar15 + 6;
      apuStack_70[0][4] = 0x6c;
      apuStack_70[0][5] = 0x29;
      apuStack_70[0] = apuStack_70[0] + 6;
      goto LAB_00234cf8;
    }
    uVar4 = (ushort)*pbVar3;
    if (uVar4 != 0) {
      do {
        pbVar3 = pbVar3 + 1;
        iVar15 = iVar15 + 1;
        *apuStack_70[0] = uVar4;
        apuStack_70[0] = apuStack_70[0] + 1;
        uVar4 = (ushort)*pbVar3;
      } while (uVar4 != 0);
      uVar4 = *puVar14;
      param_3 = puVar13;
      goto joined_r0x00234d00;
    }
    goto LAB_00234cf8;
  case 0x15:
  case 0x35:
    uVar6 = *(undefined4 *)param_3;
    uVar8 = uVar8 | 0x20;
    puVar11 = auStack_d0;
    if (uVar5 != 0x78) {
      puVar11 = auStack_a0;
    }
    uVar7 = 0x10;
    break;
  case 0x20:
    puVar13 = param_3 + 4;
    *apuStack_70[0] = *param_3;
LAB_00234cf4:
    iVar15 = iVar15 + 1;
    apuStack_70[0] = apuStack_70[0] + 1;
    goto LAB_00234cf8;
  case 0x21:
  case 0x26:
    uVar6 = *(undefined4 *)param_3;
    uVar7 = 10;
    puVar11 = auStack_d0;
    break;
  case 0x2b:
    puVar13 = param_3 + 4;
    **(int **)param_3 = iVar15;
    goto LAB_00234cf8;
  case 0x2c:
    uVar8 = uVar8 | 0x20;
    uVar6 = *(undefined4 *)param_3;
    uVar7 = 8;
    puVar11 = auStack_d0;
    break;
  case 0x30:
    puVar13 = param_3 + 4;
    puVar12 = *(ushort **)param_3;
    if (puVar12 == (ushort *)0x0) goto LAB_00234c80;
    uVar4 = *puVar12;
    if (uVar4 == 0) goto LAB_00234cf8;
    do {
      puVar12 = puVar12 + 1;
      iVar15 = iVar15 + 1;
      *apuStack_70[0] = uVar4;
      apuStack_70[0] = apuStack_70[0] + 1;
      uVar4 = *puVar12;
    } while (uVar4 != 0);
    uVar4 = *puVar14;
    param_3 = puVar13;
    goto joined_r0x00234d00;
  case 0x32:
    uVar8 = uVar8 | 0x20;
    uVar6 = *(undefined4 *)param_3;
    uVar7 = 10;
    puVar11 = auStack_d0;
  }
  puVar13 = param_3 + 4;
  iVar9 = FUN_00234670(apuStack_70,uVar6,uVar7,uVar8,iVar9,iVar10,puVar11);
  iVar15 = iVar15 + iVar9;
LAB_00234cf8:
  uVar4 = *puVar14;
  param_3 = puVar13;
  goto joined_r0x00234d00;
}

