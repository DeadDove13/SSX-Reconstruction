/* Ghidra pseudocode. PS2 address: 0023d1d0. Not validated source. */

void FUN_0023d1d0(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *unaff_s0_lo;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    unaff_s0_lo = (int *)*(undefined4 *)param_1;
  }
  if ((!bVar2) && (puVar5 = (undefined4 *)unaff_s0_lo[0x15], puVar5 != (undefined4 *)0x0)) {
    iVar3 = puVar5[1];
    while (iVar3 - 1U < 2) {
      FUN_0023ce40(param_1,*puVar5);
      puVar5 = (undefined4 *)unaff_s0_lo[0x15];
      iVar3 = puVar5[1];
    }
    iVar3 = unaff_s0_lo[0x14];
    if (unaff_s0_lo[0x13] != iVar3) {
      do {
        iVar3 = unaff_s0_lo[0x13];
        unaff_s0_lo[0x13] = *(int *)(iVar3 + 0xc);
        if (iVar3 == unaff_s0_lo[0x15]) {
          unaff_s0_lo[0x15] = *(int *)(iVar3 + 8);
        }
        else {
          *(undefined4 *)(*(int *)(iVar3 + 0xc) + 8) = *(undefined4 *)(iVar3 + 8);
        }
        if (iVar3 == unaff_s0_lo[0x14]) {
          iVar4 = *(int *)(iVar3 + 0xc);
          if (iVar4 == 0) {
            iVar4 = *(int *)(iVar3 + 8);
          }
          unaff_s0_lo[0x14] = iVar4;
          iVar4 = unaff_s0_lo[0x16];
        }
        else {
          iVar4 = unaff_s0_lo[0x16];
        }
        *(undefined4 *)(iVar3 + 4) = 0;
        *(int *)(iVar3 + 0xc) = iVar4;
        unaff_s0_lo[0x16] = iVar3;
      } while (unaff_s0_lo[0x13] != unaff_s0_lo[0x14]);
      iVar3 = unaff_s0_lo[0x14];
    }
    iVar4 = unaff_s0_lo[7];
    iVar7 = 0;
    *(undefined4 *)(iVar3 + 4) = 4;
    if (0 < iVar4) {
      puVar5 = (undefined4 *)(unaff_s0_lo[6] + 8);
      do {
        *puVar5 = 0;
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 4;
      } while (iVar7 < unaff_s0_lo[7]);
    }
    FUN_0023c190(unaff_s0_lo,unaff_s0_lo[0xf]);
    piVar6 = (int *)unaff_s0_lo[0x10];
    if (piVar6 != (int *)unaff_s0_lo[0x11]) {
      do {
        if (*piVar6 == -1) {
          piVar6 = (int *)unaff_s0_lo[8];
        }
        else {
          uVar1 = piVar6[1];
          *piVar6 = -2;
          piVar6[1] = uVar1 & 0xffffff;
          piVar6 = (int *)((int)piVar6 + (uVar1 & 0xffffff));
        }
      } while (piVar6 != (int *)unaff_s0_lo[0x11]);
    }
    if (unaff_s0_lo[10] == 2) {
      unaff_s0_lo[10] = 0;
    }
  }
  return;
}

