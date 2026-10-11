/* Ghidra pseudocode. PS2 address: 00222288. Not validated source. */

void FUN_00222288(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined *apuStack_c0 [4];
  int iStack_b0;
  
  lVar2 = FUN_002368e8(param_2);
  if (lVar2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar1 = FUN_00237128(param_2,0);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  if (*(float **)(param_1 + 0x28) != (float *)0x0) {
    if (**(float **)(param_1 + 0x28) == DAT_002c3f5c) {
      iVar3 = *(int *)(param_1 + 0x28);
    }
    else {
      FUN_00103710();
      *(undefined4 *)(param_1 + 0x28) = 0;
      iVar3 = *(int *)(param_1 + 0x28);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0xc) = iVar3 + *(int *)(iVar3 + 0xc);
      iVar3 = *(int *)(param_1 + 0x28);
      *(int *)(iVar3 + 0x14) = iVar3 + *(int *)(iVar3 + 0x14);
      iVar3 = *(int *)(param_1 + 0x28);
      *(int *)(iVar3 + 0x1c) = iVar3 + *(int *)(iVar3 + 0x1c);
      iVar3 = *(int *)(param_1 + 0x28);
      *(int *)(iVar3 + 0x24) = iVar3 + *(int *)(iVar3 + 0x24);
      iVar3 = *(int *)(param_1 + 0x28);
      iVar12 = *(int *)(iVar3 + 0x20);
      iVar6 = *(int *)(iVar3 + 0x24);
      if (0 < iVar12) {
        iVar3 = *(int *)(iVar3 + 0x24);
        while( true ) {
          iVar4 = iVar5 * 8;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + iVar4;
          *(int *)(iVar3 + 4) = iVar6 + iVar12 * 8 + *(int *)(iVar3 + 4);
          if (*(int *)(*(int *)(param_1 + 0x28) + 0x20) <= iVar5) break;
          iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x24);
        }
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x10);
      if (0 < iVar3) {
        iVar5 = iVar3 * 8 + 0x10;
        lVar2 = FUN_0023a448(0x2be100,iVar5,0);
        if (lVar2 != 0) {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar5);
        }
        piVar10 = (int *)lVar2 + 4;
        *(int *)lVar2 = iVar3;
        iVar5 = iVar3 + -1;
        piVar9 = piVar10;
        if (iVar3 != 0) {
          do {
            piVar9[1] = 0;
            iVar5 = iVar5 + -1;
            *piVar9 = 0;
            piVar9 = piVar9 + 2;
          } while (iVar5 != -1);
        }
        *(int **)(param_1 + 0x2c) = piVar10;
        apuStack_c0[0] = &DAT_002bd478;
        iVar12 = 0;
        FUN_0020d720(apuStack_c0,10,4,2,5);
        iStack_b0 = 0;
        iVar3 = *(int *)(param_1 + 0x28);
        iVar5 = 0;
        if (0 < *(int *)(iVar3 + 0x10)) {
          iVar6 = 0;
          do {
            iVar5 = iVar5 + 1;
            iVar4 = *(int *)(iVar3 + 0x14) + iVar6;
            iVar6 = iVar6 + 0xc;
            iVar12 = iVar12 + *(int *)(iVar4 + 8);
          } while (iVar5 < *(int *)(iVar3 + 0x10));
        }
        iVar3 = iVar12 * 0x150 + 0x10;
        lVar2 = FUN_0023a448(0x2be100,iVar3,0);
        if (lVar2 != 0) {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar3);
        }
        piVar10 = (int *)lVar2 + 4;
        *(int *)lVar2 = iVar12;
        iVar3 = iVar12 + -1;
        piVar9 = piVar10;
        if (iVar12 != 0) {
          do {
            iVar3 = iVar3 + -1;
            FUN_0020e690(piVar9);
            *piVar9 = (int)&DAT_002bd458;
            piVar9 = piVar9 + 0x54;
          } while (iVar3 != -1);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        iVar5 = 0;
        *(int **)(param_1 + 0x30) = piVar10;
        iVar12 = 0;
        if (0 < *(int *)(iVar3 + 0x10)) {
          do {
            iVar6 = iVar5 * 0xc;
            iVar4 = iVar5 * 8;
            iVar5 = iVar5 + 1;
            iVar11 = 0;
            piVar10 = (int *)(*(int *)(iVar3 + 0x14) + iVar6);
            iVar6 = piVar10[2];
            piVar9 = (int *)(*(int *)(param_1 + 0x2c) + iVar4);
            *piVar9 = *(int *)(param_1 + 0x30) + iVar12 * 0x150;
            piVar9[1] = iVar6;
            iVar12 = iVar12 + iVar6;
            iVar3 = iVar3 + *piVar10;
            *piVar10 = iVar3;
            if (0 < piVar9[1]) {
              iVar6 = 0;
              do {
                iVar11 = iVar11 + 1;
                iVar4 = FUN_0020de80(*piVar9 + iVar6,iVar3,iStack_b0);
                iVar6 = iVar6 + 0x150;
                iStack_b0 = iStack_b0 + 1;
                iVar3 = iVar3 + iVar4;
              } while (iVar11 < piVar9[1]);
            }
            iVar3 = *(int *)(param_1 + 0x28);
          } while (iVar5 < *(int *)(iVar3 + 0x10));
        }
        FUN_0020ff78(apuStack_c0,2);
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x18);
      if (0 < iVar3) {
        iVar5 = iVar3 * 8 + 0x10;
        lVar2 = FUN_0023a448(0x2be110,iVar5,0);
        if (lVar2 != 0) {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar5);
        }
        piVar10 = (int *)lVar2 + 4;
        *(int *)lVar2 = iVar3;
        iVar12 = iVar3 + -1;
        iVar5 = *(int *)(param_1 + 0x28);
        piVar9 = piVar10;
        if (iVar3 != 0) {
          do {
            piVar9[1] = 0;
            iVar12 = iVar12 + -1;
            *piVar9 = 0;
            piVar9 = piVar9 + 2;
          } while (iVar12 != -1);
        }
        iVar3 = *(int *)(iVar5 + 0x18);
        iVar12 = 0;
        *(int **)(param_1 + 0x34) = piVar10;
        iVar6 = 0;
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            iVar12 = iVar12 + 1;
            iVar4 = *(int *)(iVar5 + 0x1c) + iVar3;
            iVar3 = iVar3 + 0xc;
            iVar6 = iVar6 + *(int *)(iVar4 + 8);
          } while (iVar12 < *(int *)(iVar5 + 0x18));
        }
        lVar2 = FUN_0023a448(0x2be110,iVar6 * 0x18,0);
        if (lVar2 != 0) {
          FUN_0023bbd0(lVar2,0xffffffffdeadc0ed,iVar6 * 0x18);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x38) = (int)lVar2;
        iVar5 = 0;
        iVar12 = 0;
        if (0 < *(int *)(iVar3 + 0x18)) {
          do {
            iVar6 = iVar5 * 0xc;
            iVar4 = iVar5 * 8;
            iVar5 = iVar5 + 1;
            iVar11 = 0;
            piVar8 = (int *)(*(int *)(iVar3 + 0x1c) + iVar6);
            piVar10 = (int *)(*(int *)(param_1 + 0x34) + iVar4);
            iVar6 = piVar8[2];
            *piVar10 = *(int *)(param_1 + 0x38) + iVar12 * 0x18;
            piVar10[1] = iVar6;
            iVar12 = iVar12 + iVar6;
            piVar9 = (int *)(iVar3 + *piVar8);
            *piVar8 = (int)piVar9;
            if (0 < piVar10[1]) {
              piVar8 = (int *)*piVar10;
              do {
                iVar3 = *piVar9;
                iVar11 = iVar11 + 1;
                iVar6 = piVar9[1];
                iVar4 = piVar9[2];
                *piVar8 = iVar3;
                piVar8[3] = (int)(piVar9 + 3);
                piVar8[1] = iVar6;
                iVar7 = (int)(piVar9 + 3) + iVar4 + iVar3 * 0xc;
                iVar4 = piVar10[1];
                piVar8[4] = iVar7;
                iVar7 = iVar7 + iVar6 * 0x10;
                piVar8[5] = iVar7;
                piVar9 = (int *)(iVar7 + iVar3 * 0x10);
                piVar8 = piVar8 + 6;
              } while (iVar11 < iVar4);
            }
            iVar3 = *(int *)(param_1 + 0x28);
          } while (iVar5 < *(int *)(iVar3 + 0x18));
        }
      }
    }
  }
  return;
}

