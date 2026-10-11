/* Ghidra pseudocode. PS2 address: 002123b0. Not validated source. */

void FUN_002123b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  piVar5 = (int *)param_1;
  if (piVar5[piVar5[3] * 5 + 0x56] == 0) {
    piVar5[0x1a] = 0;
    FUN_0023bbd0(piVar5 + 0x5c,0,0x6c0);
    iVar9 = piVar5[0x13];
  }
  else {
    iVar9 = piVar5[0x13];
  }
  if (iVar9 != 0) {
    lVar2 = FUN_00251638(1,0,0x2c5828);
    if (lVar2 == 0) {
      return;
    }
    lVar2 = FUN_00213120(param_1,DAT_002c5828);
    iVar8 = DAT_002c582c;
    iVar7 = DAT_002c5824;
    iVar9 = DAT_002c5820;
    if (lVar2 == 0) {
      iVar1 = -0x2712;
      if (DAT_002c5820 == 2) {
        if (DAT_002c582c != 0) {
          iVar3 = piVar5[0x17];
          goto LAB_00212468;
        }
        iVar1 = -2;
      }
      iVar3 = piVar5[0x17];
      DAT_002c5828 = iVar1;
    }
    else {
      iVar3 = piVar5[0x17];
    }
LAB_00212468:
    iVar1 = DAT_002c5828;
    piVar5[0x13] = 0;
    piVar5[iVar3 * 5 + 0x55] = iVar1;
    piVar5[piVar5[0x17] * 5 + 0x53] = iVar9;
    piVar5[piVar5[0x17] * 5 + 0x54] = iVar7;
    piVar5[piVar5[0x17] * 5 + 0x56] = iVar8;
  }
  iVar9 = *piVar5;
  switch(iVar9) {
  case 5:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x18:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    lVar2 = FUN_00251638(1,0,0x2c5828);
    if (lVar2 == 0) {
      return;
    }
    iVar9 = piVar5[0xb];
    if (0 < iVar9) {
      piVar5[0xb] = 0;
      piVar5[10] = piVar5[10] + iVar9;
    }
    if (DAT_002c5828 < 0) {
      iVar9 = *piVar5;
      if ((iVar9 == 0x1d) || (iVar9 - 0x29U < 4)) {
        if (DAT_002c5828 == -4) {
          DAT_002c5828 = 0;
        }
      }
      else if (((iVar9 - 7U < 6) && (DAT_002c5828 != -1)) &&
              (lVar2 = FUN_00213120(param_1), lVar2 == 0)) {
        FUN_002122e8(param_1,piVar5[0xd]);
        FUN_00211470(param_1,0xd);
        return;
      }
      if (DAT_002c5828 < 0) {
        iVar9 = *piVar5;
        if ((iVar9 == 0x1c) || (iVar9 == 6)) {
          FUN_00211d90(param_1);
          iVar9 = *piVar5;
        }
        if (iVar9 == 5) {
          FUN_00211d38(param_1);
          iVar9 = *piVar5;
        }
        else {
          iVar9 = *piVar5;
        }
        if (iVar9 == 0x10) {
          piVar5[7] = -1;
        }
        FUN_00211470(param_1,1);
        return;
      }
      iVar7 = piVar5[3];
    }
    else {
      iVar7 = piVar5[3];
    }
    iVar9 = *piVar5;
    piVar5[iVar7 * 5 + 0x55] = 0;
  }
  iVar7 = DAT_002c5828;
  if (piVar5[0x14] != 0) {
    piVar5[0x14] = 0;
    FUN_00211470(param_1,0x18);
    return;
  }
  if (piVar5[0x15] != 0) {
    piVar5[0x15] = 0;
    FUN_00211470(param_1,0x13);
    return;
  }
  switch(iVar9) {
  case 0:
    iVar9 = piVar5[0x18] + -1;
    if ((0 < piVar5[0x18]) && (piVar5[0x18] = iVar9, 0 < iVar9)) goto switchD_0021270c_caseD_1;
    if (piVar5[0x16] == 0) {
      FUN_00211c28(param_1,0);
      iVar9 = piVar5[3];
    }
    else {
      FUN_00211c28(param_1,(piVar5[0x17] + 1) % 2);
      iVar9 = piVar5[3];
    }
    break;
  case 2:
    lVar2 = FUN_00251638(1,0,0x2c5828);
    if (lVar2 == 0) {
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 3:
    if (piVar5[0x19] == 0) {
      uVar4 = 0;
LAB_002127c0:
      FUN_00211c28(param_1,uVar4);
      piVar5[0x19] = piVar5[0x19] + 1;
      return;
    }
    if (piVar5[0x19] == 1) {
      if (piVar5[0x16] != 0) {
        uVar4 = 1;
        goto LAB_002127c0;
      }
      goto switchD_0021270c_caseD_1;
    }
    iVar9 = piVar5[3];
    break;
  case 4:
    lVar2 = FUN_00211ca8(param_1,piVar5[3]);
    if (lVar2 == 0) {
      FUN_0025b630((int)piVar5 + 0xf6,0x2c5840,0x2bd778,(int)piVar5 + 0xae);
      FUN_0023bbd0(piVar5 + 0x220,0,0x400);
      lVar2 = FUN_002518c8(piVar5[3],0,(int)piVar5 + 0xf6,0,0x10,piVar5 + 0x220);
      DAT_002c5828 = (int)lVar2;
      if (lVar2 < 0) {
        FUN_00211470(param_1,1);
        return;
      }
      FUN_00211470(param_1,5);
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 5:
    piVar5[0x1a] = DAT_002c5828;
    if (piVar5[4] < iVar7) {
      piVar5[0x1a] = piVar5[4];
    }
    piVar10 = piVar5 + 0x5c;
    FUN_0023bbd0(piVar10,0,0x6c0);
    iVar9 = 0;
    if (0 < piVar5[4]) {
      do {
        iVar7 = 0;
        if (0 < piVar5[0x1a]) {
          iVar8 = -1;
          piVar6 = piVar5 + 0x228;
          do {
            lVar2 = FUN_0025bcf8(piVar6);
            if (lVar2 == 0) {
              iVar1 = piVar5[0x1a];
            }
            else {
              if ((uint)*(byte *)((int)piVar5 + (int)lVar2 + iVar8 + 0x8a0) ==
                  (iVar9 + 0x31U & 0xff)) {
                FUN_0025bbe4(piVar10 + 2,piVar6);
                iVar7 = piVar5[4];
                goto LAB_00212918;
              }
              iVar1 = piVar5[0x1a];
            }
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0x40;
            piVar6 = piVar6 + 0x10;
          } while (iVar7 < iVar1);
        }
        iVar7 = piVar5[4];
LAB_00212918:
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 0x1b;
      } while (iVar9 < iVar7);
    }
    DAT_002c5828 = 0;
    FUN_00211470(param_1,6);
    return;
  case 7:
    piVar5[6] = DAT_002c5828;
    FUN_00211470(param_1,9);
    return;
  case 8:
    FUN_00211470(param_1,10);
    return;
  case 9:
    FUN_00213198(param_1,piVar5 + piVar5[0xd] * 0x1b + 0x66,0x298890);
    FUN_00211470(param_1,8);
    return;
  case 10:
    if (piVar5[0x214] != piVar5[9]) {
      FUN_002122e8(param_1,piVar5[0xd]);
      FUN_00211470(param_1,0xd);
    }
    FUN_00211470(param_1,0xb);
    return;
  case 0xb:
    if (piVar5[0x214] != 0x1f788) {
      FUN_002122e8(param_1,piVar5[0xd]);
      FUN_00211470(param_1,0xd);
      return;
    }
    iVar9 = piVar5[0xd];
    while (piVar5[0xd] = iVar9 + 1, iVar9 + 1 < piVar5[4]) {
      lVar2 = FUN_002122a8(param_1,piVar5[0xd]);
      if (lVar2 != 0) {
        FUN_0025b630((int)piVar5 + 0xb6,0x2c5860,piVar5 + piVar5[0xd] * 0x1b + 0x5e,0x2bd548);
        FUN_00211470(param_1,7);
        return;
      }
switchD_0021270c_caseD_c:
      iVar9 = piVar5[0xd];
    }
  case 6:
    FUN_00212f50(param_1);
    iVar9 = piVar5[3];
    break;
  case 0xc:
  case 0xd:
    goto switchD_0021270c_caseD_c;
  case 0xe:
    if (piVar5[piVar5[0x17] * 5 + 0x56] == 0) {
      lVar2 = FUN_00251b20(piVar5[3],0);
      DAT_002c5828 = (int)lVar2;
      if (lVar2 < 0) {
        FUN_00211470(param_1,1);
        return;
      }
      FUN_00211470(param_1,0xf);
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 0x10:
    lVar2 = FUN_00211ca8(param_1,piVar5[3]);
    if (lVar2 == 0) {
      FUN_0023bbd0((int)piVar5 + 0xf6,0,0x20);
      FUN_0025bbe4((int)piVar5 + 0xf6,piVar5 + piVar5[7] * 0x1b + 0x5e);
      FUN_00211470(param_1,0x29);
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 0x11:
    lVar2 = FUN_00211ca8(param_1,piVar5[3]);
    if (lVar2 == 0) {
      piVar5[10] = 0;
      piVar5[0xb] = 0;
      FUN_00211470(param_1,0x1d);
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 0x12:
    FUN_00211470(param_1,0x26);
    return;
  case 0x16:
    lVar2 = FUN_00211ca8(param_1,piVar5[3]);
    if (lVar2 == 0) {
      piVar5[0xc] = 0;
      FUN_00211470(param_1,0x27);
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 0x17:
    if (DAT_002c5828 != piVar5[8]) {
      DAT_002c5828 = 0xffffd8ef;
      FUN_00211470(param_1,1);
      return;
    }
    FUN_00211470(param_1,0x28);
    return;
  case 0x1b:
    lVar2 = FUN_00211ca8(param_1,piVar5[3]);
    if (lVar2 == 0) {
      FUN_0025b630((int)piVar5 + 0xb6,0x2c5848,piVar5 + piVar5[7] * 0x1b + 0x5e,
                   piVar5 + piVar5[7] * 0x1b + 0x5e);
      lVar2 = FUN_002518c8(piVar5[3],0,(int)piVar5 + 0xb6,0,1,piVar5 + 0x210);
      DAT_002c5828 = (int)lVar2;
      if (lVar2 < 0) {
        FUN_00211470(param_1,1);
        return;
      }
      FUN_00211470(param_1,0x1c);
      return;
    }
    iVar9 = piVar5[3];
    break;
  case 0x1c:
    if (DAT_002c5828 == 1) {
      DAT_002c5828 = 0;
    }
    else {
      FUN_00211d90(param_1);
      DAT_002c5828 = 0;
    }
  default:
switchD_0021270c_caseD_1:
    iVar9 = piVar5[3];
    break;
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x23:
  case 0x24:
    FUN_00211470(param_1,*piVar5 + 1);
    return;
  case 0x1e:
  case 0x22:
  case 0x25:
  case 0x27:
    piVar5[6] = DAT_002c5828;
    FUN_00211470(param_1,*piVar5 + 1);
    return;
  case 0x21:
    lVar2 = FUN_00235e28(piVar5[0x12]);
    if (lVar2 == 1) {
      piVar5[0xf] = 0;
      piVar5[0x11] = 0;
      FUN_00235eb0(piVar5[0x12],piVar5 + 0xf,piVar5 + 0x11);
      FUN_00211470(param_1,*piVar5 + 1);
      return;
    }
    return;
  case 0x26:
  case 0x28:
    goto switchD_0021270c_caseD_26;
  case 0x29:
  case 0x2a:
  case 0x2b:
    FUN_00211470(param_1,*piVar5 + 1);
    return;
  }
  lVar2 = FUN_00211ca8(param_1,iVar9);
  if ((lVar2 == -10) || (lVar2 = FUN_00211ca8(param_1,piVar5[3]), lVar2 == -1)) {
    FUN_00211d10(param_1);
    iVar9 = piVar5[3];
  }
  else {
    iVar9 = piVar5[3];
  }
  lVar2 = FUN_00211ca8(param_1,iVar9);
  if ((lVar2 == -10) || (lVar2 = FUN_00211ca8(param_1,piVar5[3]), lVar2 == -2)) {
    FUN_00211d38(param_1);
    *piVar5 = 0;
  }
  else {
    *piVar5 = 0;
  }
switchD_0021270c_caseD_26:
  return;
}

