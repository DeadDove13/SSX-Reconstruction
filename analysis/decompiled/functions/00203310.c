/* Ghidra pseudocode. PS2 address: 00203310. Not validated source. */

void FUN_00203310(int *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  bVar4 = false;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  iVar5 = *param_1;
  do {
    uVar1 = *(undefined1 *)(iVar5 + param_1[0x11]);
    param_1[0x11] = param_1[0x11] + 1;
    switch(uVar1) {
    case 0:
      uVar1 = *(undefined1 *)(iVar5 + param_1[0x11]);
      param_1[0x11] = param_1[0x11] + 1;
      switch(uVar1) {
      case 0:
        iVar5 = FUN_00202b28(param_2);
        goto LAB_002033c8;
      case 1:
        iVar5 = FUN_00202b70(param_2);
        param_1[0x13] = iVar5;
        break;
      case 2:
        iVar5 = FUN_00202b90(param_2);
        param_1[0x13] = iVar5;
        break;
      case 3:
        iVar5 = FUN_00202bc0(param_2);
        param_1[0x13] = iVar5;
        break;
      case 4:
        iVar5 = FUN_00202c08(param_2);
        param_1[0x13] = iVar5;
      }
      break;
    case 1:
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar10 = uVar10 | (uint)bVar2 << ((uVar7 & 3) << 3);
        uVar7 = uVar11;
      } while ((int)uVar11 < 4);
      param_1[0x13] = uVar10;
      break;
    case 2:
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar10 = uVar10 | (uint)bVar2 << ((uVar7 & 3) << 3);
        uVar7 = uVar11;
      } while ((int)uVar11 < 4);
      if (uVar10 == 0) {
        trap(7);
      }
      fVar12 = (float)((param_1[0x13] * 0x7f) / (int)uVar10);
      if ((int)fVar12 < 0x7f) {
        if (uVar10 == 0) {
          trap(7);
        }
        iVar5 = 0;
        if ((int)fVar12 < 0) goto LAB_002033c8;
      }
      if (uVar10 == 0) {
        trap(7);
      }
      iVar5 = 0x7f;
      if ((int)fVar12 < 0x7f) {
        if (uVar10 == 0) {
          trap(7);
        }
        goto LAB_00203538;
      }
      goto LAB_002033c8;
    case 3:
      iVar5 = param_1[0x13] * param_1[0x13];
      goto LAB_002033c8;
    case 4:
      fVar12 = SQRT((float)param_1[0x13]);
LAB_00203538:
      param_1[0x13] = (int)fVar12;
      break;
    case 6:
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar10 = uVar10 | (uint)bVar2 << ((uVar7 & 3) << 3);
        uVar7 = uVar11;
      } while ((int)uVar11 < 4);
      iVar5 = param_1[0x13] + uVar10;
      goto LAB_002033c8;
    case 7:
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar10 = uVar10 | (uint)bVar2 << ((uVar7 & 3) << 3);
        uVar7 = uVar11;
      } while ((int)uVar11 < 4);
      iVar5 = param_1[0x13] - uVar10;
      goto LAB_002033c8;
    case 8:
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar10 = uVar10 | (uint)bVar2 << ((uVar7 & 3) << 3);
        uVar7 = uVar11;
      } while ((int)uVar11 < 4);
      iVar5 = param_1[0x13] * uVar10;
      goto LAB_002033c8;
    case 9:
      uVar10 = 0;
      uVar7 = 0;
      do {
        uVar11 = uVar7 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar10 = uVar10 | (uint)bVar2 << ((uVar7 & 3) << 3);
        uVar7 = uVar11;
      } while ((int)uVar11 < 4);
      if (uVar10 == 0) {
        trap(7);
      }
      param_1[0x13] = param_1[0x13] / (int)uVar10;
      break;
    case 10:
      iVar5 = -param_1[0x13];
      goto LAB_002033c8;
    case 0xb:
      if (param_1[0x13] < 0) {
        param_1[0x13] = -param_1[0x13];
      }
      break;
    case 0xc:
      uVar7 = 0;
      uVar10 = 0;
      do {
        uVar11 = uVar10 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar7 = uVar7 | (uint)bVar2 << ((uVar10 & 3) << 3);
        uVar10 = uVar11;
      } while ((int)uVar11 < 4);
      uVar11 = 0;
      uVar10 = 0;
      do {
        uVar8 = uVar10 + 1;
        bVar2 = *(byte *)(iVar5 + param_1[0x11]);
        param_1[0x11] = param_1[0x11] + 1;
        uVar11 = uVar11 | (uint)bVar2 << ((uVar10 & 3) << 3);
        uVar10 = uVar8;
      } while ((int)uVar8 < 4);
      uVar10 = param_1[0x13];
      if ((int)uVar11 <= param_1[0x13]) {
        uVar10 = uVar11;
      }
      if ((int)uVar7 <= (int)uVar10) {
        uVar7 = uVar10;
      }
      param_1[0x13] = uVar7;
      break;
    case 0xd:
      iVar5 = param_1[0x12];
      param_1[iVar5 + 1] = param_1[0x13];
      param_1[0x12] = iVar5 + 1;
      break;
    case 0xe:
      iVar5 = param_1[0x12];
      param_1[0x12] = iVar5 + -1;
      iVar5 = param_1[iVar5];
LAB_002033c8:
      param_1[0x13] = iVar5;
      break;
    case 0xf:
      iVar3 = param_1[0x12];
      iVar9 = iVar3 + -1;
      param_1[0x12] = iVar9;
      iVar5 = param_1[iVar3];
      param_1[0x12] = iVar3 + -2;
      piVar6 = param_1 + iVar3 + -1;
      iVar5 = iVar5 + *piVar6;
      goto LAB_0020384c;
    case 0x10:
      iVar3 = param_1[0x12];
      iVar9 = iVar3 + -1;
      param_1[0x12] = iVar9;
      iVar5 = param_1[iVar3];
      param_1[0x12] = iVar3 + -2;
      piVar6 = param_1 + iVar3 + -1;
      iVar5 = iVar5 - *piVar6;
      goto LAB_0020384c;
    case 0x11:
      iVar3 = param_1[0x12];
      iVar9 = iVar3 + -1;
      param_1[0x12] = iVar9;
      iVar5 = param_1[iVar3];
      param_1[0x12] = iVar3 + -2;
      piVar6 = param_1 + iVar3 + -1;
      iVar5 = iVar5 * *piVar6;
      goto LAB_0020384c;
    case 0x12:
      iVar3 = param_1[0x12];
      iVar9 = iVar3 + -1;
      param_1[0x12] = iVar9;
      iVar5 = param_1[iVar3];
      param_1[0x12] = iVar3 + -2;
      piVar6 = param_1 + iVar3 + -1;
      iVar5 = iVar5 / *piVar6;
      if (*piVar6 == 0) {
        trap(7);
      }
LAB_0020384c:
      *piVar6 = iVar5;
      param_1[0x12] = iVar9;
      break;
    case 0x13:
      *param_3 = param_1[0x13];
      break;
    case 0x14:
      *param_4 = param_1[0x13];
      break;
    case 0x7f:
      bVar4 = true;
    }
    if (bVar4) {
      return;
    }
    iVar5 = *param_1;
  } while( true );
}

