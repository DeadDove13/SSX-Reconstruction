/* Ghidra pseudocode. PS2 address: 00133930. Not validated source. */

uint FUN_00133930(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  float fVar13;
  
  FUN_0023bbd0(param_2,0,4);
  piVar10 = (int *)param_1;
  iVar5 = *(int *)*piVar10;
  lVar6 = (**(code **)(iVar5 + 0x3c))(*piVar10 + (int)*(short *)(iVar5 + 0x38));
  puVar9 = (uint *)param_2;
  puVar12 = (undefined4 *)lVar6;
  if (lVar6 == 0) {
    lVar7 = FUN_001a3210(*(undefined4 *)(DAT_002859e4 + 0x30));
    if (lVar7 == 0) {
      iVar5 = *piVar10;
    }
    else {
      if (*(int *)(DAT_002859e4 + 0x38) == 0) {
        iVar5 = *piVar10;
LAB_001339ec:
        if ((*(int *)(iVar5 + 0x350) == 0x10) || (*(int *)(iVar5 + 0x350) == 0x13)) {
          *(undefined1 *)puVar9 = 0x1a;
        }
        if (*(int *)(DAT_002859e4 + 0x38) == 0) {
          return DAT_002859e4;
        }
        return *(uint *)(*(int *)(DAT_002859e4 + 0x38) + 0x48);
      }
      iVar5 = *piVar10;
      if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x4c) == 0) goto LAB_001339ec;
    }
  }
  else {
    FUN_0023bbd0(lVar6,0,0xc);
    uVar1 = *(undefined4 *)(*piVar10 + 0x350);
    puVar12[1] = *(undefined4 *)(*piVar10 + 0x34c);
    *puVar12 = uVar1;
    iVar5 = *piVar10;
  }
  switch(*(undefined4 *)(iVar5 + 0x350)) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 0xb:
  case 0xc:
  case 0x12:
    FUN_001354f0(param_1);
    iVar5 = 0;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],4);
    *puVar9 = *puVar9 & 0xffffc0ff | ((int)(fVar13 * 31.0) & 0x3fU) << 8;
    uVar3 = FUN_00181688(piVar10[0x228],0x1c);
    *puVar9 = *puVar9 & 0xfffffffd | (uVar3 & 1) << 1;
    uVar3 = FUN_00181638(piVar10[0x228],0x1c);
    *puVar9 = *puVar9 & 0xfffffffb | (uVar3 & 1) << 2;
    uVar3 = FUN_00181638(piVar10[0x228],0x1e);
    *puVar9 = *puVar9 & 0xfffffff7 | (uVar3 & 1) << 3;
    uVar3 = FUN_00181688(piVar10[0x228],0x29);
    *puVar9 = *puVar9 & 0xfffffffe | uVar3 & 1;
    uVar3 = FUN_00181660(piVar10[0x228],0x24);
    *puVar9 = *puVar9 & 0xffffffef | (uVar3 & 1) << 4;
    uVar3 = FUN_001816b0(piVar10[0x228],0x24);
    *puVar9 = *puVar9 & 0xffffffdf | (uVar3 & 1) << 5;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0);
    *puVar9 = *puVar9 & 0xfc0fffff | ((int)(fVar13 * 31.0) & 0x3fU) << 0x14;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],1);
    *puVar9 = *puVar9 & 0xfff03fff | ((int)(fVar13 * 31.0) & 0x3fU) << 0xe;
    lVar7 = FUN_00181638(piVar10[0x228],0x2d);
    if ((lVar7 != 0) || (fVar13 = (float)FUN_001816d8(piVar10[0x228],5), 0.0 < fVar13)) {
      iVar5 = 1;
      uVar3 = *puVar9;
    }
    else {
      uVar3 = *puVar9;
    }
    iVar11 = 0;
    *puVar9 = uVar3 & 0xffffffbf | iVar5 << 6;
    lVar7 = FUN_00181638(piVar10[0x228],0x2e);
    if ((lVar7 != 0) || (fVar13 = (float)FUN_001816d8(piVar10[0x228],5), fVar13 < 0.0)) {
      iVar11 = 1;
      uVar3 = *puVar9;
    }
    else {
      uVar3 = *puVar9;
    }
    *puVar9 = uVar3 & 0xffffff7f | iVar11 << 7;
    piVar10[0x226] = 0x1a;
    break;
  case 8:
  case 9:
  case 0x11:
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0xe);
    uVar3 = *puVar9 & 0xffffffc0;
    uVar4 = (int)(fVar13 * 31.0) & 0x3f;
    goto LAB_00134b34;
  case 10:
    uVar3 = FUN_00181638(piVar10[0x228],0x1c);
    *puVar9 = *puVar9 & 0xfffffffd | (uVar3 & 1) << 1;
    uVar4 = FUN_00181688(piVar10[0x228],0x29);
    uVar3 = *puVar9;
    goto LAB_00134b28;
  case 0xd:
    uVar3 = FUN_00181688(piVar10[0x228],0x29);
    *puVar9 = *puVar9 & 0xfffffffd | (uVar3 & 1) << 1;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],4);
    *puVar9 = *puVar9 & 0xffffc0ff | ((int)(fVar13 * 31.0) & 0x3fU) << 8;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0xc);
    *puVar9 = *puVar9 & 0xfff03fff | ((int)(fVar13 * 31.0) & 0x3fU) << 0xe;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0xd);
    *puVar9 = *puVar9 & 0xfc0fffff | ((int)(fVar13 * 31.0) & 0x3fU) << 0x14;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],1);
    *puVar9 = *puVar9 & 0xffffff03 | ((int)(fVar13 * 31.0) & 0x3fU) << 2;
    piVar10[0x226] = 0x1a;
    lVar7 = FUN_00181638(piVar10[0x228],0x28);
    if (lVar7 == 0) {
      lVar7 = FUN_00181638(piVar10[0x228],0);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,1);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,2);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,3);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,4);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,5);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,6);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,7);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,8);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,9);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,10);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0xb);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0xc);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0xd);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0xe);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0xf);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x10);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x11);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x12);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x13);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x14);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x15);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x16);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x17);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x18);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x228];
      }
      else {
        *puVar9 = *puVar9 | 1;
        iVar5 = piVar10[0x228];
      }
      lVar7 = FUN_00181638(iVar5,0x19);
      if (lVar7 == 0) {
        iVar5 = piVar10[0x22a];
        goto LAB_00134b40;
      }
      uVar3 = *puVar9;
    }
    else {
      uVar3 = *puVar9;
    }
    *puVar9 = uVar3 | 1;
    break;
  case 0xe:
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0xb);
    *puVar9 = *puVar9 & 0xffc0ffff | ((int)(fVar13 * 31.0) & 0x3fU) << 0x10;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0xc);
    *puVar9 = *puVar9 & 0xfffffc0f | ((int)(fVar13 * 31.0) & 0x3fU) << 4;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],0xd);
    *puVar9 = *puVar9 & 0xffff03ff | ((int)(fVar13 * 31.0) & 0x3fU) << 10;
    uVar3 = FUN_00181688(piVar10[0x228],0x29);
    *puVar9 = *puVar9 & 0xfffffffe | uVar3 & 1;
    uVar3 = FUN_00181638(piVar10[0x228],0x1c);
    *puVar9 = *puVar9 & 0xfffffffd | (uVar3 & 1) << 1;
    uVar3 = FUN_00181638(piVar10[0x228],0x1d);
    *puVar9 = *puVar9 & 0xfffffffb | (uVar3 & 1) << 2;
    uVar4 = FUN_00181660(piVar10[0x228],0x24);
    uVar3 = *puVar9;
    uVar8 = 0xfffffff7;
    uVar4 = (uVar4 & 1) << 3;
    goto LAB_00134b30;
  case 0xf:
    FUN_001354f0(param_1);
    fVar13 = (float)FUN_001816d8(piVar10[0x228],4);
    *puVar9 = *puVar9 & 0xfffff03f | ((int)(fVar13 * 31.0) & 0x3fU) << 6;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],1);
    *puVar9 = *puVar9 & 0xfffc0fff | ((int)(fVar13 * 31.0) & 0x3fU) << 0xc;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],6);
    *puVar9 = *puVar9 & 0xff03ffff | ((int)(fVar13 * 31.0) & 0x3fU) << 0x12;
    uVar3 = FUN_00181688(piVar10[0x228],0x1c);
    *puVar9 = *puVar9 & 0xfffffffd | (uVar3 & 1) << 1;
    uVar3 = FUN_00181638(piVar10[0x228],0x1c);
    *puVar9 = *puVar9 & 0xfffffffb | (uVar3 & 1) << 2;
    uVar3 = FUN_00181638(piVar10[0x228],0x1e);
    *puVar9 = *puVar9 & 0xfffffff7 | (uVar3 & 1) << 3;
    uVar3 = FUN_00181688(piVar10[0x228],0x29);
    *puVar9 = *puVar9 & 0xfffffffe | uVar3 & 1;
    uVar3 = FUN_00181660(piVar10[0x228],0x27);
    *puVar9 = *puVar9 & 0xffffffef | (uVar3 & 1) << 4;
    uVar4 = FUN_00181660(piVar10[0x228],0x24);
    uVar3 = *puVar9;
    uVar8 = 0xffffffdf;
    uVar4 = (uVar4 & 1) << 5;
    goto LAB_00134b30;
  case 0x10:
    uVar3 = FUN_00181688(piVar10[0x228],0x29);
    *puVar9 = *puVar9 & 0xfffffeff | (uVar3 & 1) << 8;
    uVar3 = FUN_00181638(piVar10[0x228],0x25);
    *puVar9 = *puVar9 & 0xfffffdff | (uVar3 & 1) << 9;
    uVar3 = FUN_00181638(piVar10[0x228],0x26);
    *puVar9 = *puVar9 & 0xfffffbff | (uVar3 & 1) << 10;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],2);
    *puVar9 = *puVar9 & 0xfffc0fff | ((int)(fVar13 * 31.0) & 0x3fU) << 0xc;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],3);
    *puVar9 = *puVar9 & 0xff03ffff | ((int)(fVar13 * 31.0) & 0x3fU) << 0x12;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],7);
    *puVar9 = *puVar9 & 0xfcffffff | ((int)fVar13 & 3U) << 0x18;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],8);
    *puVar9 = *puVar9 & 0xf3ffffff | ((int)fVar13 & 3U) << 0x1a;
    *(undefined1 *)puVar9 = 0x1a;
    uVar3 = FUN_00181638(piVar10[0x228],0x28);
    uVar3 = (uVar3 & 1) << 0xb;
    uVar4 = *puVar9 & 0xfffff7ff | uVar3;
    goto LAB_0013435c;
  case 0x13:
    uVar3 = FUN_00181688(piVar10[0x228],0x29);
    *puVar9 = *puVar9 & 0xfffffeff | (uVar3 & 1) << 8;
    uVar3 = FUN_00181638(piVar10[0x228],0x25);
    *puVar9 = *puVar9 & 0xfffffdff | (uVar3 & 1) << 9;
    uVar3 = FUN_00181638(piVar10[0x228],0x26);
    *puVar9 = *puVar9 & 0xfffffbff | (uVar3 & 1) << 10;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],5);
    *puVar9 = *puVar9 & 0xfffff7ff | (uint)(0.0 < fVar13) << 0xb;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],5);
    *puVar9 = *puVar9 & 0xffffefff | (uint)(fVar13 < 0.0) << 0xc;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],9);
    *puVar9 = *puVar9 & 0xfff03fff | ((int)(fVar13 * 31.0) & 0x3fU) << 0xe;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],10);
    *puVar9 = *puVar9 & 0xfc0fffff | ((int)(fVar13 * 31.0) & 0x3fU) << 0x14;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],7);
    *puVar9 = *puVar9 & 0xf3ffffff | ((int)fVar13 & 3U) << 0x1a;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],8);
    *puVar9 = *puVar9 & 0xcfffffff | ((int)fVar13 & 3U) << 0x1c;
    *(undefined1 *)puVar9 = 0x1a;
    uVar3 = FUN_00181638(piVar10[0x228],0x28);
    uVar3 = (uVar3 & 1) << 0xd;
    uVar4 = *puVar9 & 0xffffdfff | uVar3;
LAB_0013435c:
    *puVar9 = uVar4;
    if (uVar3 == 0) {
      lVar7 = FUN_00181638(piVar10[0x228],0);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0;
      }
      lVar7 = FUN_00181638(piVar10[0x228],1);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 1;
      }
      lVar7 = FUN_00181638(piVar10[0x228],2);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 2;
      }
      lVar7 = FUN_00181638(piVar10[0x228],3);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 3;
      }
      lVar7 = FUN_00181638(piVar10[0x228],4);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 4;
      }
      lVar7 = FUN_00181638(piVar10[0x228],5);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 5;
      }
      lVar7 = FUN_00181638(piVar10[0x228],6);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 6;
      }
      lVar7 = FUN_00181638(piVar10[0x228],7);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 7;
      }
      lVar7 = FUN_00181638(piVar10[0x228],8);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 8;
      }
      lVar7 = FUN_00181638(piVar10[0x228],9);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 9;
      }
      lVar7 = FUN_00181638(piVar10[0x228],10);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 10;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0xb);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0xb;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0xc);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0xc;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0xd);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0xd;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0xe);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0xe;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0xf);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0xf;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x10);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x10;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x11);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x11;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x12);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x12;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x13);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x13;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x14);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x14;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x15);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x15;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x16);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x16;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x17);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x17;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x18);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x18;
      }
      lVar7 = FUN_00181638(piVar10[0x228],0x19);
      if (lVar7 != 0) {
        *(undefined1 *)puVar9 = 0x19;
      }
    }
    break;
  case 0x14:
    fVar13 = (float)FUN_001816d8(piVar10[0x228],9);
    *puVar9 = *puVar9 & 0xffffff81 | ((int)(fVar13 * 31.0) & 0x3fU) << 1;
    fVar13 = (float)FUN_001816d8(piVar10[0x228],10);
    *puVar9 = *puVar9 & 0xffffe07f | ((int)(fVar13 * 31.0) & 0x3fU) << 7;
    uVar4 = FUN_00181688(piVar10[0x228],0x29);
    uVar3 = *puVar9;
    goto LAB_00134b28;
  case 0x15:
    uVar4 = FUN_00181688(piVar10[0x228],0x29);
    uVar3 = *puVar9;
    goto LAB_00134b28;
  case 0x16:
    uVar4 = FUN_001816b0(piVar10[0x228],0x2f);
    uVar3 = *puVar9;
LAB_00134b28:
    uVar8 = 0xfffffffe;
    uVar4 = uVar4 & 1;
LAB_00134b30:
    uVar3 = uVar3 & uVar8;
LAB_00134b34:
    *puVar9 = uVar3 | uVar4;
  }
  iVar5 = piVar10[0x22a];
LAB_00134b40:
  if ((iVar5 != 0) && (lVar7 = FUN_00196b88(iVar5,param_2), lVar7 == 0)) {
    return 0;
  }
  if (lVar6 == 0) {
    iVar5 = *piVar10;
  }
  else {
    puVar12[2] = *puVar9;
    iVar5 = *piVar10;
  }
  if (*(int *)(iVar5 + 0x350) == 0x10) {
    if ((*puVar9 & 0x800) == 0) {
      piVar10[0x226] = 0x1a;
    }
    else {
      if (piVar10[0x226] == 0x1a) {
        iVar5 = FUN_00109cc0();
        piVar10[0x226] = iVar5;
        uVar2 = (undefined1)piVar10[0x226];
      }
      else {
        uVar2 = (undefined1)piVar10[0x226];
      }
      *(undefined1 *)puVar9 = uVar2;
    }
    uVar3 = *puVar9;
    uVar4 = 0xfffff7ff;
  }
  else {
    if (*(int *)(iVar5 + 0x350) != 0x13) {
      return 0x13;
    }
    if ((*puVar9 & 0x2000) == 0) {
      piVar10[0x226] = 0x1a;
    }
    else {
      if (piVar10[0x226] == 0x1a) {
        iVar5 = FUN_00109cc0();
        piVar10[0x226] = iVar5;
        uVar2 = (undefined1)piVar10[0x226];
      }
      else {
        uVar2 = (undefined1)piVar10[0x226];
      }
      *(undefined1 *)puVar9 = uVar2;
    }
    uVar3 = *puVar9;
    uVar4 = 0xffffdfff;
  }
  *puVar9 = uVar3 & uVar4;
  return uVar3 & uVar4;
}

