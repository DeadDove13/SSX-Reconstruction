/* Ghidra pseudocode. PS2 address: 001cfc30. Not validated source. */

int FUN_001cfc30(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,int param_8,int param_9,int param_10)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_a8;
  
  uVar11 = 0;
  uStack_a8 = 0;
  uVar9 = 1;
  uVar10 = 3;
  lVar2 = FUN_0025bf10(param_7,0x2c5310,3);
  if ((lVar2 == 0) || (lVar2 = FUN_0025bf10(param_7,0x2c5318,4), lVar2 == 0)) {
    uStack_a8 = param_1[8];
    uVar10 = 1;
    uVar9 = param_1[6];
    uVar11 = param_1[7];
  }
  else {
    lVar2 = FUN_0025bf10(param_7,0x2c5320,3);
    if (lVar2 == 0) {
      uStack_a8 = param_1[2];
      uVar10 = 0;
      uVar9 = *param_1;
      uVar11 = param_1[1];
    }
    else {
      lVar2 = FUN_0025bf10(param_7,0x2c5328,3);
      if (lVar2 == 0) {
        uStack_a8 = param_1[5];
        uVar10 = 2;
        uVar9 = param_1[3];
        uVar11 = param_1[4];
      }
    }
  }
  if (param_10 != 0) {
    param_1[0x10] = param_1[0x10] + 1;
  }
  switch(param_6) {
  case 1:
    FUN_0025c0c8(param_1[0xf] + param_1[0xd] * 0x58 + 4,param_7,8);
    iVar4 = 0;
    iVar5 = 1;
    *(int *)(param_1[0xd] * 0x58 + param_1[0xf] + 0x10) = param_3;
    do {
      if (param_3 == iVar5) goto LAB_001cfddc;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 << 1;
    } while (iVar4 < 10);
    iVar4 = -1;
LAB_001cfddc:
    iVar5 = param_1[0xf];
    iVar6 = 0;
    iVar7 = 1;
    *(int *)(param_1[0xd] * 0x58 + iVar5 + 0x14) = iVar4;
    *(int *)(param_1[0xd] * 0x58 + iVar5 + 0x18) = param_4;
    do {
      if (param_4 == iVar7) {
        iVar4 = param_1[0xd];
        goto LAB_001cfe30;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 << 1;
    } while (iVar6 < 10);
    iVar6 = -1;
    iVar4 = param_1[0xd];
LAB_001cfe30:
    iVar5 = param_1[0xf];
    iVar7 = param_3 * param_4 * 2;
    *(int *)(iVar4 * 0x58 + iVar5 + 0x1c) = iVar6;
    iVar6 = iVar7 + 0x7f;
    iVar4 = iVar7 + 0x1fe;
    if (-1 < iVar7 + 0xff) {
      iVar4 = iVar7 + 0xff;
    }
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar5 + 0x20) = 2;
    iVar3 = param_1[0xd] * 0x58 + iVar5;
    *(undefined4 *)(iVar3 + 0x48) = uVar9;
    *(undefined4 *)(iVar3 + 0x44) = uVar10;
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar5 + 0x4c) = uVar11;
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar5 + 0x50) = uStack_a8;
    piVar1 = (int *)(param_1[0xd] * 0x58 + iVar5);
    piVar1[0xf] = 0;
    iVar3 = param_1[0xd];
    *piVar1 = param_10;
    iVar3 = iVar3 * 0x58 + iVar5;
    *(int *)(iVar3 + 0xc) = iVar4 >> 8;
    *(undefined4 *)(iVar3 + 0x40) = 3;
    uVar8 = param_1[0xc];
    iVar5 = param_1[0xd] * 0x58 + iVar5;
    if ((uVar8 & 0x40000000) == 0) {
      if ((uVar8 & 0xc000000) == 0) {
        lVar2 = FUN_0023a448(param_7,iVar6,uVar8 & 0x3ffffff);
      }
      else {
        lVar2 = FUN_00210840(0x28ac20,iVar6,uVar8,param_7,0,0);
      }
    }
    else {
      lVar2 = FUN_002107c8(0x298590,iVar6,uVar8,param_7,0,0);
    }
    if (lVar2 == 0) goto LAB_001d01c4;
    if (-1 < (int)uVar8) goto LAB_001d01b0;
LAB_001d019c:
    FUN_0023bbd0(lVar2,0,iVar6);
    iVar4 = param_1[0xd];
    goto LAB_001d01c8;
  case 3:
    FUN_0025c0c8(param_1[0xf] + param_1[0xd] * 0x58 + 4,param_7,8);
    iVar4 = 0;
    iVar5 = 1;
    *(int *)(param_1[0xd] * 0x58 + param_1[0xf] + 0x10) = param_3;
    do {
      if (param_3 == iVar5) goto LAB_001cffec;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 << 1;
    } while (iVar4 < 10);
    iVar4 = -1;
LAB_001cffec:
    iVar5 = param_1[0xf];
    iVar6 = 0;
    iVar7 = 1;
    *(int *)(param_1[0xd] * 0x58 + iVar5 + 0x14) = iVar4;
    *(int *)(param_1[0xd] * 0x58 + iVar5 + 0x18) = param_4;
    do {
      if (param_4 == iVar7) {
        iVar4 = param_1[0xd];
        goto LAB_001d0040;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 << 1;
    } while (iVar6 < 10);
    iVar6 = -1;
    iVar4 = param_1[0xd];
LAB_001d0040:
    iVar5 = param_1[0xf];
    iVar7 = param_3 * param_4 * 4;
    *(int *)(iVar4 * 0x58 + iVar5 + 0x1c) = iVar6;
    iVar6 = iVar7 + 0x7f;
    iVar4 = iVar7 + 0x1fe;
    if (-1 < iVar7 + 0xff) {
      iVar4 = iVar7 + 0xff;
    }
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar5 + 0x20) = 0;
    iVar3 = param_1[0xd] * 0x58 + iVar5;
    *(undefined4 *)(iVar3 + 0x48) = uVar9;
    *(undefined4 *)(iVar3 + 0x44) = uVar10;
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar5 + 0x4c) = uVar11;
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar5 + 0x50) = uStack_a8;
    piVar1 = (int *)(param_1[0xd] * 0x58 + iVar5);
    piVar1[0xf] = 0;
    iVar3 = param_1[0xd];
    *piVar1 = param_10;
    iVar3 = iVar3 * 0x58 + iVar5;
    *(int *)(iVar3 + 0xc) = iVar4 >> 8;
    *(undefined4 *)(iVar3 + 0x40) = 3;
    uVar8 = param_1[0xc];
    iVar5 = param_1[0xd] * 0x58 + iVar5;
    if ((uVar8 & 0x40000000) == 0) {
      if ((uVar8 & 0xc000000) == 0) {
        lVar2 = FUN_0023a448(param_7,iVar6,uVar8 & 0x3ffffff);
      }
      else {
        lVar2 = FUN_00210840(0x28ac20,iVar6,uVar8,param_7,0,0);
      }
    }
    else {
      lVar2 = FUN_002107c8(0x298590,iVar6,uVar8,param_7,0,0);
    }
    if (lVar2 != 0) {
      if ((int)uVar8 < 0) goto LAB_001d019c;
LAB_001d01b0:
      FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar6);
    }
LAB_001d01c4:
    iVar4 = param_1[0xd];
LAB_001d01c8:
    iVar6 = param_1[0xf];
    *(int *)(iVar5 + 0x28) = (int)lVar2;
    iVar6 = iVar4 * 0x58 + iVar6;
    uVar8 = *(int *)(iVar6 + 0x28) + 0x7fU & 0xffffff80;
    *(uint *)(iVar6 + 0x2c) = uVar8;
    FUN_0023bac0(uVar8,param_2,iVar7);
    iVar4 = param_1[0xd] * 0x58 + param_1[0xf];
    *(undefined4 *)(iVar4 + 0x38) = 0;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    break;
  case 4:
    if (param_9 != 1) {
      iVar4 = param_1[0xd];
      goto LAB_001d0608;
    }
    FUN_0025c0c8(param_1[0xf] + param_1[0xd] * 0x58 + 4,param_7,8);
    iVar4 = 0;
    iVar5 = 1;
    *(int *)(param_1[0xd] * 0x58 + param_1[0xf] + 0x10) = param_3;
    do {
      if (param_3 == iVar5) goto LAB_001d0284;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 << 1;
    } while (iVar4 < 10);
    iVar4 = -1;
LAB_001d0284:
    iVar5 = param_1[0xf];
    iVar6 = 0;
    iVar7 = 1;
    *(int *)(param_1[0xd] * 0x58 + iVar5 + 0x14) = iVar4;
    *(int *)(param_1[0xd] * 0x58 + iVar5 + 0x18) = param_4;
    do {
      if (param_4 == iVar7) goto LAB_001d02d4;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 << 1;
    } while (iVar6 < 10);
    iVar6 = -1;
LAB_001d02d4:
    iVar4 = param_1[0xf];
    param_3 = param_3 * param_4;
    iVar7 = param_3 + 0x7f;
    *(int *)(param_1[0xd] * 0x58 + iVar4 + 0x1c) = iVar6;
    iVar5 = param_3 + 0x1fe;
    if (-1 < param_3 + 0xff) {
      iVar5 = param_3 + 0xff;
    }
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar4 + 0x20) = 0x13;
    iVar6 = param_1[0xd] * 0x58 + iVar4;
    *(undefined4 *)(iVar6 + 0x48) = uVar9;
    *(undefined4 *)(iVar6 + 0x44) = uVar10;
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar4 + 0x4c) = uVar11;
    *(undefined4 *)(param_1[0xd] * 0x58 + iVar4 + 0x50) = uStack_a8;
    piVar1 = (int *)(param_1[0xd] * 0x58 + iVar4);
    piVar1[0xf] = 0;
    iVar6 = param_1[0xd];
    *piVar1 = param_10;
    iVar6 = iVar6 * 0x58 + iVar4;
    *(int *)(iVar6 + 0xc) = iVar5 >> 8;
    *(undefined4 *)(iVar6 + 0x40) = 3;
    iVar5 = param_1[0xd];
    uVar8 = param_1[0xc];
    if ((uVar8 & 0x40000000) == 0) {
      if ((uVar8 & 0xc000000) == 0) {
        lVar2 = FUN_0023a448(param_7,iVar7,uVar8 & 0x3ffffff);
      }
      else {
        lVar2 = FUN_00210840(0x28ac20,iVar7,uVar8,param_7,0,0);
      }
    }
    else {
      lVar2 = FUN_002107c8(0x298590,iVar7,uVar8,param_7,0,0);
    }
    if (lVar2 == 0) {
LAB_001d0458:
      iVar6 = param_1[0xd];
    }
    else {
      if (-1 < (int)uVar8) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar7);
        goto LAB_001d0458;
      }
      FUN_0023bbd0(lVar2,0,iVar7);
      iVar6 = param_1[0xd];
    }
    iVar7 = param_1[0xf];
    *(int *)(iVar5 * 0x58 + iVar4 + 0x28) = (int)lVar2;
    iVar7 = iVar6 * 0x58 + iVar7;
    uVar8 = *(int *)(iVar7 + 0x28) + 0x7fU & 0xffffff80;
    *(uint *)(iVar7 + 0x2c) = uVar8;
    FUN_0023bac0(uVar8,param_2,param_3);
    iVar4 = param_1[0xd];
    uVar8 = param_1[0xc];
    iVar5 = param_1[0xf];
    if ((uVar8 & 0x40000000) == 0) {
      if ((uVar8 & 0xc000000) == 0) {
        lVar2 = FUN_0023a448(param_7,0x47f,uVar8 & 0x3ffffff);
      }
      else {
        lVar2 = FUN_00210840(0x28ac20,0x47f,uVar8,param_7,0,0);
      }
    }
    else {
      lVar2 = FUN_002107c8(0x298590,0x47f,uVar8,param_7,0,0);
    }
    if (lVar2 == 0) {
LAB_001d0568:
      iVar6 = param_1[0xd];
    }
    else {
      if (-1 < (int)uVar8) {
        FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,0x47f);
        goto LAB_001d0568;
      }
      FUN_0023bbd0(lVar2,0,0x47f);
      iVar6 = param_1[0xd];
    }
    iVar7 = param_1[0xf];
    *(int *)(iVar4 * 0x58 + iVar5 + 0x34) = (int)lVar2;
    iVar4 = 7;
    iVar7 = iVar6 * 0x58 + iVar7;
    uVar8 = *(int *)(iVar7 + 0x34) + 0x7fU & 0xffffff80;
    *(uint *)(iVar7 + 0x38) = uVar8;
    do {
      iVar4 = iVar4 + -1;
      FUN_0023bac0(uVar8,param_8,0x20);
      FUN_0023bac0(uVar8 + 0x20,param_8 + 0x40,0x20);
      FUN_0023bac0(uVar8 + 0x40,param_8 + 0x20,0x20);
      iVar5 = param_8 + 0x60;
      param_8 = param_8 + 0x80;
      FUN_0023bac0(uVar8 + 0x60,iVar5,0x20);
      uVar8 = uVar8 + 0x80;
    } while (-1 < iVar4);
    param_1[0xe] = param_1[0xe] + 1;
  }
  iVar4 = param_1[0xd];
LAB_001d0608:
  param_1[0xd] = iVar4 + 1;
  return iVar4;
}

