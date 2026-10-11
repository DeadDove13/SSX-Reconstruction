/* Ghidra pseudocode. PS2 address: 001998b8. Not validated source. */

undefined4 FUN_001998b8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  piVar10 = (int *)param_2;
  iVar7 = *piVar10;
  uVar3 = 0;
  if (*(int *)(iVar7 + 0x20) == *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80)) {
    iVar8 = *(int *)(iVar7 + 0x10);
    piVar9 = (int *)param_1;
    piVar9[0x11] = 1;
    piVar9[0xc] = iVar8;
    iVar8 = *(int *)(iVar7 + 0x14);
    iVar6 = 3;
    piVar5 = piVar9 + 0xe56;
    piVar9[9] = *(int *)(iVar7 + 0x18);
    piVar9[0xe] = (uint)(iVar8 != 0);
    piVar9[10] = *(int *)(iVar7 + 0x1c);
    do {
      *piVar5 = 0;
      iVar6 = iVar6 + -1;
      piVar5 = piVar5 + -1;
    } while (-1 < iVar6);
    piVar9[0xb] = 0;
    *piVar10 = iVar7 + 0x58;
    iVar8 = *(int *)(iVar7 + 0x34);
    piVar9[2] = 0;
    piVar9[7] = iVar8;
    piVar9[5] = 0;
    piVar5 = piVar9 + 0x14;
    for (iVar8 = 0; iVar8 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80); iVar8 = iVar8 + 1) {
      FUN_0023bac0(piVar5,*piVar10,0xe24);
      *piVar10 = *piVar10 + 0xe24;
      piVar5 = piVar5 + 0x389;
    }
    iVar8 = 0;
    if (0 < *(int *)(iVar7 + 0xc)) {
      do {
        uVar4 = FUN_00193780(param_1);
        iVar6 = (int)uVar4;
        if (piVar9[2] == 0) {
          *piVar9 = iVar6;
        }
        else {
          *(int *)(piVar9[2] + 0x28) = iVar6;
          *(int *)(iVar6 + 0x2c) = piVar9[2];
        }
        piVar9[2] = iVar6;
        iVar8 = iVar8 + 1;
        FUN_00198028(uVar4,param_2);
      } while (iVar8 < *(int *)(iVar7 + 0xc));
    }
    iVar8 = 0;
    do {
      piVar9[iVar8 + 0xe53] = 0;
      iVar6 = iVar8 + 1;
      if (0 < *(int *)(iVar7 + 0x24 + iVar8 * 4)) {
        do {
          piVar10 = piVar9 + iVar8 + 0xe53;
          iVar1 = *piVar10;
          piVar9[iVar8 * 0x10 + iVar1 + 0xf9a] = piVar9[0xe59];
          piVar9[0xe59] = *(int *)(piVar9[0xe59] + 0xc);
          puVar2 = (undefined4 *)piVar9[iVar8 * 0x10 + iVar1 + 0xf9a];
          puVar2[4] = 0xffffffff;
          puVar2[1] = 0;
          puVar2[3] = 0;
          iVar1 = *piVar10;
          puVar2[2] = 0;
          *puVar2 = 0;
          FUN_00198900(piVar9[iVar8 * 0x10 + iVar1 + 0xf9a],param_2);
          iVar1 = *piVar10;
          *piVar10 = iVar1 + 1;
        } while (iVar1 + 1 < *(int *)(iVar7 + 0x24 + iVar8 * 4));
      }
      iVar8 = iVar6;
    } while (iVar6 < 4);
    iVar8 = *(int *)(iVar7 + 0x20);
    iVar6 = 0;
    if (0 < iVar8) {
      piVar10 = piVar9 + 0xe4f;
      do {
        if (*piVar10 == 0) {
          iVar8 = *(int *)(iVar7 + 0x20);
        }
        else {
          FUN_00197040(*piVar10,param_2);
          iVar8 = *(int *)(iVar7 + 0x20);
        }
        iVar6 = iVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar6 < iVar8);
    }
    iVar6 = 0;
    if (0 < iVar8) {
      piVar10 = piVar9 + 0xe4b;
      do {
        if (*piVar10 == 0) {
          iVar8 = *(int *)(iVar7 + 0x20);
        }
        else {
          FUN_001986f8(*piVar10,param_2);
          iVar8 = *(int *)(iVar7 + 0x20);
        }
        iVar6 = iVar6 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar6 < iVar8);
    }
    piVar9[8] = 1;
    piVar9[6] = 8;
    piVar9[0xe4a] = 0;
    for (iVar7 = 0; uVar3 = 1, iVar7 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c);
        iVar7 = iVar7 + 1) {
      iVar8 = FUN_00189b78(DAT_002859e4,iVar7);
      FUN_0011da60(*(undefined4 *)(iVar8 + 0x8584));
    }
  }
  return uVar3;
}

