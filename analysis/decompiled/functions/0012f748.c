/* Ghidra pseudocode. PS2 address: 0012f748. Not validated source. */

void FUN_0012f748(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  iVar9 = 0x11;
  ppuVar6 = &PTR_DAT_00278070;
  puVar1 = PTR_DAT_00278070;
  while( true ) {
    iVar9 = iVar9 + -1;
    ppuVar6 = ppuVar6 + 1;
    FUN_0012f2a8(puVar1);
    if (iVar9 < 0) break;
    puVar1 = *ppuVar6;
  }
  piVar8 = (int *)param_1;
  iVar9 = 0;
  piVar7 = piVar8 + 3;
LAB_0012f7a0:
  iVar9 = iVar9 + 1;
LAB_0012f98c:
  do {
    iVar4 = piVar7[4];
LAB_0012f990:
    if (iVar4 == 0) {
LAB_0012f9b4:
      piVar7 = piVar7 + 5;
      if (0x1f < iVar9) {
        return;
      }
      goto LAB_0012f7a0;
    }
    iVar3 = piVar7[1];
    if (0 < *piVar7) {
      *piVar7 = *piVar7 + -1;
      goto LAB_0012f9b4;
    }
    uVar2 = *(uint *)(iVar3 * 4 + iVar4);
    uVar5 = uVar2 & 0xffff0000;
    if (uVar5 == 0x500000) {
      iVar4 = *piVar8;
      piVar7[1] = iVar3 + 1;
      piVar8[1] = 0;
      if (iVar4 == 0) {
        iVar4 = piVar8[2];
        *piVar8 = 1;
        piVar8[2] = 0x3c - iVar4;
        *piVar7 = 0x3c - iVar4;
      }
      goto LAB_0012f98c;
    }
    if (0x500000 < uVar5) {
      if (uVar5 == 0x700000) {
        iVar4 = *piVar8;
        piVar7[1] = iVar3 + 1;
        if (iVar4 == 0) goto LAB_0012f98c;
        iVar4 = piVar8[2];
        *piVar8 = 0;
      }
      else {
        if (0x700000 < uVar5) {
          if (uVar5 == 0x800000) {
            piVar7[1] = iVar3 + 1;
            iVar4 = *(int *)((iVar3 + 1) * 4 + iVar4);
            piVar7[1] = iVar3 + 2;
            piVar7[3] = iVar4;
            piVar7[2] = iVar3 + 2;
          }
          else if (uVar5 == 0x900000) {
            if (piVar7[3] < 1) {
              piVar7[2] = 0;
              piVar7[1] = iVar3 + 1;
              piVar7[3] = 0;
            }
            else {
              piVar7[1] = piVar7[2];
              piVar7[3] = piVar7[3] + -1;
            }
          }
          else {
            piVar7[4] = 0;
          }
          goto LAB_0012f98c;
        }
        if (uVar5 != 0x600000) {
          piVar7[4] = 0;
          goto LAB_0012f98c;
        }
        iVar4 = *piVar8;
        piVar7[1] = iVar3 + 1;
        piVar8[1] = 1;
        if (iVar4 != 0) goto LAB_0012f98c;
        iVar4 = piVar8[2];
        *piVar8 = 1;
      }
      piVar8[2] = 0x3c - iVar4;
      *piVar7 = 0x3c - iVar4;
      goto LAB_0012f98c;
    }
    if (uVar5 == 0x200000) {
      piVar7[1] = iVar3 + 1;
      FUN_0012fa30(param_1,uVar2 & 0xffff);
      iVar4 = piVar7[4];
      goto LAB_0012f990;
    }
    if (0x200000 < uVar5) {
      if (uVar5 == 0x300000) {
        piVar7[1] = iVar3 + 1;
        iVar4 = *(int *)((iVar3 + 1) * 4 + iVar4);
        piVar7[1] = iVar3 + 2;
        *piVar7 = iVar4;
      }
      else if (uVar5 == 0x400000) {
        piVar7[4] = 0;
      }
      else {
        piVar7[4] = 0;
      }
      goto LAB_0012f98c;
    }
    if (uVar5 == 0x100000) {
      piVar7[1] = iVar3 + 1;
      FUN_0012fa08(param_1,uVar2 & 0xffff);
      iVar4 = piVar7[4];
      goto LAB_0012f990;
    }
    piVar7[4] = 0;
  } while( true );
}

