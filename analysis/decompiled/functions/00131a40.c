/* Ghidra pseudocode. PS2 address: 00131a40. Not validated source. */

void FUN_00131a40(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined **ppuVar7;
  int *piVar8;
  int iVar9;
  
  piVar6 = (int *)(param_1 + 4);
  iVar9 = 0x11;
  ppuVar7 = &PTR_DAT_00278070;
  puVar1 = PTR_DAT_00278070;
  while( true ) {
    iVar9 = iVar9 + -1;
    ppuVar7 = ppuVar7 + 1;
    FUN_0012f2a8(puVar1);
    if (iVar9 < 0) break;
    puVar1 = *ppuVar7;
  }
  iVar9 = 0;
  piVar8 = (int *)(param_1 + 0x10);
LAB_0012f7a0:
  iVar9 = iVar9 + 1;
LAB_0012f98c:
  do {
    iVar5 = piVar8[4];
LAB_0012f990:
    if (iVar5 == 0) {
LAB_0012f9b4:
      piVar8 = piVar8 + 5;
      if (0x1f < iVar9) {
        return;
      }
      goto LAB_0012f7a0;
    }
    iVar3 = piVar8[1];
    if (0 < *piVar8) {
      *piVar8 = *piVar8 + -1;
      goto LAB_0012f9b4;
    }
    uVar2 = *(uint *)(iVar3 * 4 + iVar5);
    uVar4 = uVar2 & 0xffff0000;
    if (uVar4 == 0x500000) {
      iVar5 = *piVar6;
      piVar8[1] = iVar3 + 1;
      *(undefined4 *)(param_1 + 8) = 0;
      if (iVar5 == 0) {
        *piVar6 = 1;
        iVar5 = 0x3c - *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 0xc) = iVar5;
        *piVar8 = iVar5;
      }
      goto LAB_0012f98c;
    }
    if (0x500000 < uVar4) {
      if (uVar4 == 0x700000) {
        iVar5 = *piVar6;
        piVar8[1] = iVar3 + 1;
        if (iVar5 == 0) goto LAB_0012f98c;
        iVar5 = *(int *)(param_1 + 0xc);
        *piVar6 = 0;
      }
      else {
        if (0x700000 < uVar4) {
          if (uVar4 == 0x800000) {
            piVar8[1] = iVar3 + 1;
            iVar5 = *(int *)((iVar3 + 1) * 4 + iVar5);
            piVar8[1] = iVar3 + 2;
            piVar8[3] = iVar5;
            piVar8[2] = iVar3 + 2;
          }
          else if (uVar4 == 0x900000) {
            if (piVar8[3] < 1) {
              piVar8[2] = 0;
              piVar8[1] = iVar3 + 1;
              piVar8[3] = 0;
            }
            else {
              piVar8[1] = piVar8[2];
              piVar8[3] = piVar8[3] + -1;
            }
          }
          else {
            piVar8[4] = 0;
          }
          goto LAB_0012f98c;
        }
        if (uVar4 != 0x600000) {
          piVar8[4] = 0;
          goto LAB_0012f98c;
        }
        iVar5 = *piVar6;
        piVar8[1] = iVar3 + 1;
        *(undefined4 *)(param_1 + 8) = 1;
        if (iVar5 != 0) goto LAB_0012f98c;
        iVar5 = *(int *)(param_1 + 0xc);
        *piVar6 = 1;
      }
      *(int *)(param_1 + 0xc) = 0x3c - iVar5;
      *piVar8 = 0x3c - iVar5;
      goto LAB_0012f98c;
    }
    if (uVar4 == 0x200000) {
      piVar8[1] = iVar3 + 1;
      FUN_0012fa30(piVar6,uVar2 & 0xffff);
      iVar5 = piVar8[4];
      goto LAB_0012f990;
    }
    if (0x200000 < uVar4) {
      if (uVar4 == 0x300000) {
        piVar8[1] = iVar3 + 1;
        iVar5 = *(int *)((iVar3 + 1) * 4 + iVar5);
        piVar8[1] = iVar3 + 2;
        *piVar8 = iVar5;
      }
      else if (uVar4 == 0x400000) {
        piVar8[4] = 0;
      }
      else {
        piVar8[4] = 0;
      }
      goto LAB_0012f98c;
    }
    if (uVar4 == 0x100000) {
      piVar8[1] = iVar3 + 1;
      FUN_0012fa08(piVar6,uVar2 & 0xffff);
      iVar5 = piVar8[4];
      goto LAB_0012f990;
    }
    piVar8[4] = 0;
  } while( true );
}

