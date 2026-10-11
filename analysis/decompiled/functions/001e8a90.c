/* Ghidra pseudocode. PS2 address: 001e8a90. Not validated source. */

void FUN_001e8a90(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 auStack_100 [4];
  undefined4 auStack_f0 [4];
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined1 *puStack_c8;
  undefined4 *puStack_c4;
  undefined4 *puStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  
  iStack_d8 = *(int *)(param_2 + 4);
  iVar1 = *(int *)(iStack_d8 + 0x394);
  iStack_d4 = iStack_d8 + 0x6cfc;
  uStack_d0 = *(uint *)(param_2 + 0xc) & 1;
  uStack_cc = *(uint *)(param_2 + 0xc) >> 1 & 1;
  iStack_dc = param_2;
  FUN_00105698(iStack_d8);
  puVar8 = (uint *)param_1;
  if ((*puVar8 >> 3 & 1) != 0) {
    puStack_a8 = auStack_f0;
    puStack_c8 = (undefined1 *)0x0;
    fStack_110 = 0.0;
    puStack_c4 = (undefined4 *)0x0;
    auStack_100[0] = 0;
    puStack_c0 = (undefined4 *)0x0;
    auStack_f0[0] = 0;
    if (*(int *)(iStack_dc + 0x20) != 0) {
      puStack_c4 = puStack_a8;
      FUN_001ef140(puStack_a8);
    }
    if (*(int *)(iStack_dc + 0x1c) != 0) {
      FUN_001ef140(&fStack_110);
      puStack_c8 = (undefined1 *)&fStack_110;
    }
    puStack_ac = auStack_100;
    if (*(int *)(iStack_dc + 0x24) != 0) {
      puStack_c0 = puStack_ac;
      FUN_001ef140(puStack_ac);
    }
    if (*(int *)(iVar1 + 0x28) == 0) {
      iStack_bc = *(int *)(iVar1 + 0x2c) + 0x14;
    }
    else {
      iStack_bc = *(int *)(iVar1 + 0x2c) + 0x17;
    }
    iStack_b4 = 1;
    iStack_b0 = 1;
    if (uStack_d0 == 0) {
      iStack_b8 = 3;
    }
    else {
      iStack_b8 = 1;
    }
    uVar9 = (uint)(uStack_d0 == 0);
    piVar4 = (int *)(&DAT_002972b0 + uVar9 * 8 + *(int *)(iVar1 + 0x40) * 0x28);
    if (uStack_cc != 0) {
      iStack_b8 = iStack_b8 + 1;
    }
    iVar5 = 1;
    iVar7 = iStack_d8 + 0x6cc;
    do {
      if (*piVar4 != 0x34) {
        iStack_b4 = iStack_b4 + 1;
        if (*(int *)(&DAT_00296bbc + *piVar4 * 0x10) != 0) {
          iStack_b0 = iStack_b0 + 1;
        }
      }
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + 1;
    } while (-1 < iVar5);
    iVar5 = 2;
    piVar4 = (int *)(&DAT_00296ef0 + uVar9 * 0xc + *(int *)(iVar1 + 0x38) * 0x3c);
    do {
      if (*piVar4 != 0x34) {
        iStack_b4 = iStack_b4 + 1;
        if (*(int *)(&DAT_00296bbc + *piVar4 * 0x10) != 0) {
          iStack_b0 = iStack_b0 + 1;
        }
      }
      iVar5 = iVar5 + -1;
      piVar4 = piVar4 + 1;
    } while (-1 < iVar5);
    iVar5 = 0;
    FUN_001ee5c8(iVar7,iStack_b8);
    if (0 < iStack_b8) {
      do {
        uStack_e0 = 0;
        uVar3 = FUN_001ee6a0(iVar7,iVar5);
        FUN_001edef0(uVar3,iStack_b4);
        iVar2 = uVar9 * 0xc;
        FUN_001e89c8(param_1,*(undefined4 *)(&DAT_00296ef0 + iVar2 + *(int *)(iVar1 + 0x38) * 0x3c),
                     uVar3,puStack_c8,iVar7,&uStack_e0);
        FUN_001e89c8(param_1,iStack_bc,uVar3,puStack_c0,iVar7,&uStack_e0);
        FUN_001e89c8(param_1,*(undefined4 *)
                              (&DAT_002972b0 + uVar9 * 8 + *(int *)(iVar1 + 0x40) * 0x28),uVar3,
                     puStack_c4,iVar7,&uStack_e0);
        FUN_001e89c8(param_1,*(undefined4 *)(&DAT_00296ef4 + *(int *)(iVar1 + 0x38) * 0x3c + iVar2),
                     uVar3,puStack_c8,iVar7,&uStack_e0);
        FUN_001e89c8(param_1,*(undefined4 *)
                              (&DAT_002972b4 + *(int *)(iVar1 + 0x40) * 0x28 + uVar9 * 8),uVar3,
                     puStack_c4,iVar7,&uStack_e0);
        FUN_001e89c8(param_1,*(undefined4 *)(*(int *)(iVar1 + 0x38) * 0x3c + iVar2 + 0x296ef8),uVar3
                     ,puStack_c8,iVar7,&uStack_e0);
        uVar9 = uVar9 + 1;
        if (uStack_d0 != 0) {
          uVar9 = 4;
        }
        if (uVar9 == 4) {
          if (*(int *)(iVar1 + 0x28) == 0) {
            iStack_bc = *(int *)(iVar1 + 0x2c) + 0x1a;
          }
          else {
            iStack_bc = *(int *)(iVar1 + 0x2c) + 0x1d;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_b8);
    }
    *(int *)(iStack_d8 + 0x6ce0) = iStack_b0;
    FUN_001e9cd8(puStack_a8,2);
    FUN_001e9cd8(puStack_ac,2);
    FUN_001e9cd8(&fStack_110,2);
  }
  iVar5 = iStack_d8;
  if (((*puVar8 >> 6 & 1) == 0) && (iVar7 = iStack_d8 + 0x7630, (*puVar8 >> 3 & 1) == 0))
  goto LAB_001e8fd4;
  iVar2 = iStack_d8 + 0x6cc;
  FUN_001eef48(iVar2,iStack_d4);
  iVar7 = iStack_d8;
  if (*(int *)(iStack_dc + 8) == 0) {
    piVar4 = (int *)(iStack_dc + 0x44);
    iVar6 = 6;
    do {
      if (*piVar4 != 0) {
        FUN_001eb2a0(iStack_d4);
      }
      iVar6 = iVar6 + -1;
      piVar4 = piVar4 + 1;
    } while (-1 < iVar6);
    if (uStack_cc == 0) goto LAB_001e8fb8;
    FUN_001c1a40(*(undefined4 *)(*(int *)(iStack_d8 + 0x8584) + 8));
    uVar9 = *puVar8;
  }
  else {
    iVar6 = 6;
    piVar4 = (int *)(iStack_dc + 0x44);
    do {
      if (*piVar4 != 0) {
        FUN_001eb3b8(iStack_d4);
      }
      iVar6 = iVar6 + -1;
      piVar4 = piVar4 + 1;
    } while (-1 < iVar6);
LAB_001e8fb8:
    uVar9 = *puVar8;
  }
  iVar7 = iVar7 + 0x7630;
  if ((uVar9 >> 3 & 1) != 0) {
    FUN_001eefd0(iVar2,iStack_d4);
  }
LAB_001e8fd4:
  iVar2 = iVar5 + 0x6cc;
  FUN_001ee480(iVar2);
  FUN_00109d20(iStack_d8,iVar7);
  if ((*puVar8 >> 3 & 1) != 0) {
    fStack_110 = *(float *)(iVar1 + 0x48);
    if (((*puVar8 >> 8 & 1) != 0) && (*(int *)(iVar1 + 0x2c) == 2)) {
      fStack_110 = -fStack_110;
    }
    fStack_10c = fStack_110;
    fStack_108 = fStack_110;
    FUN_001eee40(iVar2,&fStack_110);
  }
  *(undefined4 *)(iVar5 + 0x6c4c) = 1;
  return;
}

