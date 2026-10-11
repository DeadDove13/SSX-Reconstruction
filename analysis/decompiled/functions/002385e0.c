/* Ghidra pseudocode. PS2 address: 002385e0. Not validated source. */

void FUN_002385e0(long param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  
  FUN_0023ee58(DAT_002a336c);
  puVar11 = DAT_002a337c;
  uVar6 = 0;
  if (param_1 != 0) {
    bVar1 = DAT_002a337c != (uint *)0x0;
    puVar10 = (uint *)param_1;
    puVar10[0xb] = (uint)DAT_002a337c;
    if ((bVar1) && ((int)puVar11[4] <= (int)puVar10[4])) {
      uVar6 = puVar10[0xb];
      while( true ) {
        uVar8 = *(uint *)(uVar6 + 0x2c);
        puVar10[0xb] = uVar8;
        if ((uVar8 == 0) || ((int)puVar10[4] < *(int *)(uVar8 + 0x10))) break;
        uVar6 = puVar10[0xb];
      }
    }
    if (uVar6 != 0) {
      *(uint **)(uVar6 + 0x2c) = puVar10;
      puVar10 = DAT_002a337c;
    }
    DAT_002a337c = puVar10;
    DAT_002a3364 = DAT_002a3364 + 1;
  }
  if ((DAT_002a3370 == (uint *)0x0) && (DAT_002a3368 == 0)) {
    if (DAT_002a337c == (uint *)0x0) {
      puVar11 = (uint *)0x0;
    }
    else if (DAT_002a3360 < (int)DAT_002a337c[4]) {
      puVar11 = (uint *)0x0;
    }
    else {
      DAT_002a3364 = DAT_002a3364 + -1;
      puVar11 = DAT_002a337c;
      DAT_002a337c = (uint *)DAT_002a337c[0xb];
    }
    DAT_002a3370 = puVar11;
    FUN_0023ea60(DAT_002a336c);
    if (puVar11 != (uint *)0x0) {
      if (puVar11[1] == 0) {
        switch(*puVar11 >> 0x14 & 0xf) {
        case 2:
        case 8:
          auStack_b0[0] = 0;
          lVar7 = FUN_0025b910(puVar11[9] + 0xc,0x7c);
          if (lVar7 == 0) {
            uVar6 = 0;
            if ((puVar11[6] & 1) != 0) {
              uVar6 = 3;
              FUN_0025bbe4(auStack_b0,puVar11[9] + 0xc);
            }
            bVar1 = true;
          }
          else {
            uVar8 = puVar11[9];
            if (*(char *)(uVar8 + 0xc) == '|') {
              uVar6 = 2;
            }
            else {
              iVar4 = FUN_0025b910(uVar8 + 0xc,0x7c);
              uVar6 = 4;
              auStack_f0[0] = 0;
              iVar4 = (iVar4 + -0xc) - puVar11[9];
              FUN_0025c0c8(auStack_f0,puVar11[9] + 0xc,iVar4);
              auStack_fc[iVar4 + 0xc] = 0;
              uVar8 = puVar11[9];
            }
            bVar1 = false;
            iVar4 = FUN_0025b910(uVar8 + 0xc,0x7c);
            FUN_0025bbe4(auStack_b0,iVar4 + 1);
          }
          uVar8 = 0;
          if ((bVar1) && (lVar7 = FUN_002377b8(puVar11[9] + 0xc,puVar11[6],puVar11[9]), lVar7 != 0))
          {
            uVar8 = 1;
            if ((*puVar11 >> 0x14 & 0xf) == 8) {
              FUN_00237898(*(undefined4 *)puVar11[9]);
            }
            else {
              uVar5 = FUN_002379e0(*(undefined4 *)puVar11[9]);
              *(undefined4 *)(puVar11[9] + 4) = uVar5;
            }
          }
          if (uVar8 == 0) {
            if (((uVar6 & 6) != 0) && (puVar9 = DAT_002a3380, DAT_002a3380 != (undefined4 *)0x0)) {
              do {
                if (((uVar6 & 4) == 0) ||
                   (lVar7 = FUN_0025baa0(puVar9[1] + 0xc,auStack_f0), lVar7 == 0)) {
                  lVar7 = FUN_002398a0(*puVar9,auStack_b0,0,&uStack_70,auStack_6c);
                  if (lVar7 == 0) {
                    puVar9 = (undefined4 *)puVar9[3];
                  }
                  else {
                    uVar8 = 1;
                    *(undefined4 **)puVar11[9] = puVar9;
                    uVar2 = puVar11[9];
                    *(undefined4 *)(uVar2 + 4) = auStack_6c[0];
                    *(undefined4 *)(uVar2 + 8) = uStack_70;
                    puVar9 = (undefined4 *)puVar9[3];
                  }
                }
                else {
                  puVar9 = (undefined4 *)puVar9[3];
                }
                if (puVar9 == (undefined4 *)0x0) {
                  uVar6 = *puVar11;
                  goto LAB_002388f4;
                }
              } while (uVar8 == 0);
            }
            uVar6 = *puVar11;
          }
          else {
            uVar6 = *puVar11;
          }
LAB_002388f4:
          if ((uVar6 >> 0x14 & 0xf) == 8) {
            FUN_00238bc8(puVar11[9]);
            puVar11[6] = uVar8;
          }
          FUN_00239628(uVar8);
          break;
        case 3:
          puVar9 = (undefined4 *)puVar11[9];
          puVar11[3] = 0;
          if (puVar9 != (undefined4 *)0x0) {
            if (puVar9[2] == 0) {
              uVar6 = FUN_00237898(*puVar9);
              puVar11[3] = uVar6;
            }
            FUN_00238bc8(puVar11[9]);
            puVar11[9] = 0;
          }
          FUN_00239628(puVar11[3] == 0);
          break;
        case 4:
          if ((int)puVar11[7] < 1) {
            FUN_00239628(1);
          }
          else {
            piVar3 = (int *)puVar11[9];
            if (piVar3[2] == 0) {
              FUN_002378f0(*piVar3,puVar11[8],puVar11[6]);
            }
            else {
              FUN_002378f0(**(undefined4 **)(*piVar3 + 4),puVar11[8],piVar3[2] + puVar11[6]);
            }
          }
          break;
        case 5:
          FUN_00237970(*(undefined4 *)puVar11[9],puVar11[8],puVar11[6],puVar11[7]);
          break;
        case 6:
          puVar11[6] = *(uint *)(puVar11[9] + 4);
          FUN_00239628(1);
          break;
        case 7:
        case 9:
        case 10:
          FUN_00239628(puVar11[3] == 0);
        }
      }
      else {
        FUN_00239628(0);
      }
    }
  }
  else {
    FUN_0023ea60(DAT_002a336c);
  }
  return;
}

