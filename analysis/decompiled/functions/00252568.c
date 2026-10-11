/* Ghidra pseudocode. PS2 address: 00252568. Not validated source. */

int FUN_00252568(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_d0 [6];
  
  puVar11 = auStack_d0;
  uVar14 = (long)param_1 >> 0x20;
  uVar9 = uVar14 & 0x7fffffff;
  puVar12 = (ulong *)param_2;
  if (uVar9 < 0x3fe921fc) {
    *puVar12 = param_1;
    puVar12[1] = 0;
    return 0;
  }
  if (uVar9 < 0x4002d97c) {
    if (0 < (long)uVar14) {
      uVar2 = FUN_00257518(param_1,DAT_002bf840);
      uVar3 = DAT_002bf858;
      uVar4 = DAT_002bf848;
      if (uVar9 == 0x3ff921fb) {
        uVar2 = FUN_00257518(uVar2,DAT_002bf850);
        uVar4 = uVar3;
      }
      uVar9 = FUN_00257518(uVar2,uVar4);
      *puVar12 = uVar9;
      uVar3 = FUN_00257518(uVar2,uVar9);
      uVar9 = FUN_00257518(uVar3,uVar4);
      puVar12[1] = uVar9;
      return 1;
    }
    uVar2 = FUN_002574c0(param_1,DAT_002bf860);
    uVar3 = DAT_002bf878;
    uVar4 = DAT_002bf868;
    if (uVar9 == 0x3ff921fb) {
      uVar2 = FUN_002574c0(uVar2,DAT_002bf870);
      uVar4 = uVar3;
    }
    uVar9 = FUN_002574c0(uVar2,uVar4);
    *puVar12 = uVar9;
    uVar3 = FUN_00257518(uVar2,uVar9);
    uVar9 = FUN_002574c0(uVar3,uVar4);
    puVar12[1] = uVar9;
    return -1;
  }
  iVar8 = (int)uVar9 >> 0x14;
  if (0x413921fb < uVar9) {
    if (0x7fefffff < uVar9) {
      uVar9 = FUN_00257518(param_1,param_1);
      *puVar12 = uVar9;
      puVar12[1] = uVar9;
      return 0;
    }
    uVar9 = param_1 & 0xffffffff | (long)((int)uVar9 + (iVar8 + -0x416) * -0x100000) << 0x20;
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
      uVar3 = FUN_00257bb0(uVar9);
      uVar3 = FUN_00257af8(uVar3);
      *puVar11 = uVar3;
      puVar11 = puVar11 + 1;
      uVar3 = FUN_00257518(uVar9,uVar3);
      uVar9 = FUN_00257580(uVar3,0x4170000000000000);
    } while (-1 < iVar1);
    auStack_d0[2] = uVar9;
    iVar1 = 3;
    do {
      iVar10 = iVar1;
      iVar1 = iVar10 + -1;
      lVar7 = FUN_00257aa8(auStack_d0[iVar1],0);
    } while (lVar7 == 0);
    iVar1 = FUN_002536e8(auStack_d0,param_2,iVar8 + -0x416,iVar10,2,0x2bf668);
    if (-1 < (long)uVar14) {
      return iVar1;
    }
    uVar14 = FUN_00257518(0,*puVar12);
    uVar9 = puVar12[1];
    *puVar12 = uVar14;
    goto LAB_00252a3c;
  }
  uVar3 = FUN_002552b0();
  uVar4 = FUN_00257580(uVar3,DAT_002bf880);
  uVar4 = FUN_002574c0(uVar4,0x3fe0000000000000);
  iVar1 = FUN_00257bb0(uVar4);
  uVar4 = FUN_00257af8(iVar1);
  uVar2 = FUN_00257580(uVar4,DAT_002bf888);
  uVar3 = FUN_00257518(uVar3,uVar2);
  uVar2 = FUN_00257580(uVar4,DAT_002bf890);
  if ((iVar1 < 0x20) && (uVar9 != (long)*(int *)(&DAT_002bf770 + (iVar1 + -1) * 4))) {
LAB_002528d8:
    uVar9 = FUN_00257518(uVar3,uVar2);
    *puVar12 = uVar9;
    uVar13 = *puVar12;
  }
  else {
    uVar9 = FUN_00257518(uVar3,uVar2);
    *puVar12 = uVar9;
    if ((int)(iVar8 - ((uint)(uVar9 >> 0x34) & 0x7ff)) < 0x11) {
      uVar13 = *puVar12;
    }
    else {
      uVar2 = FUN_00257580(uVar4,DAT_002bf898);
      uVar5 = FUN_00257518(uVar3,uVar2);
      uVar6 = FUN_00257580(uVar4,DAT_002bf8a0);
      uVar3 = FUN_00257518(uVar3,uVar5);
      uVar3 = FUN_00257518(uVar3,uVar2);
      uVar2 = FUN_00257518(uVar6,uVar3);
      uVar9 = FUN_00257518(uVar5,uVar2);
      *puVar12 = uVar9;
      if (0x31 < (int)(iVar8 - ((uint)(uVar9 >> 0x34) & 0x7ff))) {
        uVar2 = FUN_00257580(uVar4,DAT_002bf8a8);
        uVar3 = FUN_00257518(uVar5,uVar2);
        uVar4 = FUN_00257580(uVar4,DAT_002bf8b0);
        uVar5 = FUN_00257518(uVar5,uVar3);
        uVar2 = FUN_00257518(uVar5,uVar2);
        uVar2 = FUN_00257518(uVar4,uVar2);
        goto LAB_002528d8;
      }
      uVar13 = *puVar12;
      uVar3 = uVar5;
    }
  }
  uVar3 = FUN_00257518(uVar3,uVar13);
  uVar9 = FUN_00257518(uVar3,uVar2);
  puVar12[1] = uVar9;
  if (-1 < (long)uVar14) {
    return iVar1;
  }
  uVar14 = FUN_00257518(0,uVar13);
  *puVar12 = uVar14;
LAB_00252a3c:
  uVar9 = FUN_00257518(0,uVar9);
  puVar12[1] = uVar9;
  return -iVar1;
}

