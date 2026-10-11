/* Ghidra pseudocode. PS2 address: 00259d50. Not validated source. */

undefined4 * FUN_00259d50(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  
  if (param_2 + 0x13U < 0x1f) {
    uVar17 = 0x10;
  }
  else {
    uVar17 = param_2 + 0x13U & 0xfffffff0;
  }
  FUN_0025a6d0(param_1);
  puVar12 = PTR_PTR_002a6628;
  if (uVar17 < 0x1f8) {
    puVar11 = *(undefined **)((int)&PTR_DAT_002a6624 + uVar17);
    if (puVar11 != &DAT_002a6618 + uVar17) {
      uVar17 = *(uint *)(puVar11 + 4);
      iVar2 = *(int *)(puVar11 + 0xc);
      iVar1 = *(int *)(puVar11 + 8);
      uVar10 = *(uint *)(puVar11 + (uVar17 & 0xfffffffc) + 4);
      *(int *)(iVar1 + 0xc) = iVar2;
      *(int *)(iVar2 + 8) = iVar1;
      *(uint *)(puVar11 + (uVar17 & 0xfffffffc) + 4) = uVar10 | 1;
      puVar12 = puVar11;
      goto LAB_0025a49c;
    }
    uVar16 = (uVar17 >> 3) + 2;
  }
  else {
    uVar10 = uVar17 >> 9;
    if (uVar10 == 0) {
      uVar16 = uVar17 >> 3;
    }
    else if (uVar10 < 5) {
      uVar16 = (uVar17 >> 6) + 0x38;
    }
    else {
      uVar16 = uVar10 + 0x5b;
      if (0x14 < uVar10) {
        if (uVar10 < 0x55) {
          uVar16 = (uVar17 >> 0xc) + 0x6e;
        }
        else if (uVar10 < 0x155) {
          uVar16 = (uVar17 >> 0xf) + 0x77;
        }
        else if (uVar10 < 0x555) {
          uVar16 = (uVar17 >> 0x12) + 0x7c;
        }
        else {
          uVar16 = 0x7e;
        }
      }
    }
    for (puVar11 = (&PTR_DAT_002a6624)[uVar16 * 2]; puVar11 != &DAT_002a6618 + uVar16 * 8;
        puVar11 = *(undefined **)(puVar11 + 0xc)) {
      uVar10 = *(uint *)(puVar11 + 4) & 0xfffffffc;
      if (uVar10 < uVar17) {
        uVar7 = -(ulong)(uVar17 - uVar10);
      }
      else {
        uVar7 = (ulong)(uVar10 - uVar17);
      }
      if (0xf < (long)uVar7) goto LAB_00259ee0;
      if (-1 < (long)uVar7) {
        iVar2 = *(int *)(puVar11 + 0xc);
        iVar1 = *(int *)(puVar11 + 8);
        uVar17 = *(uint *)(puVar11 + uVar10 + 4);
        *(int *)(iVar1 + 0xc) = iVar2;
        *(int *)(iVar2 + 8) = iVar1;
        *(uint *)(puVar11 + uVar10 + 4) = uVar17 | 1;
        FUN_0025a6d8(param_1);
        return (undefined4 *)(puVar11 + 8);
      }
    }
    uVar16 = uVar16 + 1;
  }
LAB_00259ee0:
  if ((undefined **)PTR_PTR_002a6628 != &PTR_DAT_002a6620) {
    uVar10 = *(uint *)(PTR_PTR_002a6628 + 4);
    uVar13 = uVar10 & 0xfffffffc;
    if (uVar13 < uVar17) {
      uVar7 = -(ulong)(uVar17 - uVar13);
    }
    else {
      uVar7 = (ulong)(uVar13 - uVar17);
    }
    if (0xf < (long)uVar7) {
      uVar10 = (uint)uVar7;
      puVar11 = PTR_PTR_002a6628 + uVar17;
      *(uint *)(PTR_PTR_002a6628 + 4) = uVar17 | 1;
      PTR_PTR_002a6628 = puVar11;
      PTR_PTR_002a662c = puVar11;
      *(uint *)(puVar11 + 4) = uVar10 | 1;
      *(uint *)(puVar11 + uVar10) = uVar10;
      *(undefined ***)(puVar11 + 8) = &PTR_DAT_002a6620;
      *(undefined ***)(puVar11 + 0xc) = &PTR_DAT_002a6620;
      goto LAB_0025a49c;
    }
    PTR_PTR_002a662c = (undefined *)&PTR_DAT_002a6620;
    PTR_PTR_002a6628 = (undefined *)&PTR_DAT_002a6620;
    if (-1 < (long)uVar7) {
      *(uint *)(puVar12 + uVar13 + 4) = *(uint *)(puVar12 + uVar13 + 4) | 1;
      goto LAB_0025a49c;
    }
    uVar8 = uVar10 >> 3;
    if (uVar13 < 0x200) {
      puVar11 = (&PTR_DAT_002a6620)[uVar8 * 2];
      *(undefined **)(puVar12 + 0xc) = &DAT_002a6618 + uVar8 * 8;
      *(undefined **)(puVar12 + 8) = puVar11;
      DAT_002a661c = DAT_002a661c | (uint)(1L << (long)((int)uVar8 >> 2));
      (&PTR_DAT_002a6620)[uVar8 * 2] = puVar12;
      *(undefined **)(puVar11 + 0xc) = puVar12;
    }
    else {
      uVar8 = uVar10 >> 9;
      if (uVar8 == 0) {
        uVar9 = uVar10 >> 3;
      }
      else if (uVar8 < 5) {
        uVar9 = (uVar10 >> 6) + 0x38;
      }
      else {
        uVar9 = uVar8 + 0x5b;
        if (0x14 < uVar8) {
          if (uVar8 < 0x55) {
            uVar9 = (uVar10 >> 0xc) + 0x6e;
          }
          else if (uVar8 < 0x155) {
            uVar9 = (uVar10 >> 0xf) + 0x77;
          }
          else if (uVar8 < 0x555) {
            uVar9 = (uVar10 >> 0x12) + 0x7c;
          }
          else {
            uVar9 = 0x7e;
          }
        }
      }
      puVar15 = &DAT_002a6618 + uVar9 * 8;
      puVar11 = (&PTR_DAT_002a6620)[uVar9 * 2];
      if (puVar11 == puVar15) {
        DAT_002a661c = DAT_002a661c | (uint)(1L << (long)((int)uVar9 >> 2));
      }
      else if (uVar13 < (*(uint *)(puVar11 + 4) & 0xfffffffc)) {
        for (puVar11 = *(undefined **)(puVar11 + 8); puVar11 != puVar15;
            puVar11 = *(undefined **)(puVar11 + 8)) {
          if ((*(uint *)(puVar11 + 4) & 0xfffffffc) <= uVar13) {
            puVar15 = *(undefined **)(puVar11 + 0xc);
            goto LAB_0025a118;
          }
        }
        puVar15 = *(undefined **)(puVar11 + 0xc);
      }
      else {
        puVar15 = *(undefined **)(puVar11 + 0xc);
      }
LAB_0025a118:
      *(undefined **)(puVar12 + 0xc) = puVar15;
      *(undefined **)(puVar12 + 8) = puVar11;
      *(undefined **)(puVar15 + 8) = puVar12;
      *(undefined **)(puVar11 + 0xc) = puVar12;
    }
  }
  uVar7 = (ulong)DAT_002a661c;
  uVar10 = uVar16 + 3;
  if (-1 < (int)uVar16) {
    uVar10 = uVar16;
  }
  uVar4 = 1L << (long)((int)uVar10 >> 2);
  if (uVar4 <= uVar7) {
    if ((uVar4 & uVar7) == 0) {
      uVar16 = uVar16 & 0xfffffffc;
      do {
        uVar4 = uVar4 << 1;
        uVar16 = uVar16 + 4;
      } while ((uVar4 & uVar7) == 0);
    }
    iVar2 = uVar16 << 3;
    do {
      puVar14 = *(undefined4 **)((int)&PTR_DAT_002a6624 + iVar2);
      uVar10 = uVar16;
      puVar5 = (undefined4 *)(&DAT_002a6618 + iVar2);
      while( true ) {
        if (puVar14 != puVar5) {
          uVar13 = puVar14[1];
          while( true ) {
            uVar13 = uVar13 & 0xfffffffc;
            if (uVar13 < uVar17) {
              uVar7 = -(ulong)(uVar17 - uVar13);
            }
            else {
              uVar7 = (ulong)(uVar13 - uVar17);
            }
            if (0xf < (long)uVar7) {
              iVar2 = puVar14[3];
              iVar1 = puVar14[2];
              uVar10 = (uint)uVar7;
              *(int *)(iVar1 + 0xc) = iVar2;
              puVar12 = (undefined *)((int)puVar14 + uVar17);
              *(int *)(iVar2 + 8) = iVar1;
              puVar14[1] = uVar17 | 1;
              PTR_PTR_002a6628 = puVar12;
              PTR_PTR_002a662c = puVar12;
              *(uint *)(puVar12 + 4) = uVar10 | 1;
              *(uint *)(puVar12 + uVar10) = uVar10;
              *(undefined ***)(puVar12 + 8) = &PTR_DAT_002a6620;
              *(undefined ***)(puVar12 + 0xc) = &PTR_DAT_002a6620;
              FUN_0025a6d8(param_1);
              return puVar14 + 2;
            }
            if (-1 < (long)uVar7) {
              iVar2 = puVar14[3];
              uVar17 = *(uint *)((int)puVar14 + uVar13 + 4);
              iVar1 = puVar14[2];
              *(int *)(iVar1 + 0xc) = iVar2;
              *(uint *)((int)puVar14 + uVar13 + 4) = uVar17 | 1;
              *(int *)(iVar2 + 8) = iVar1;
              FUN_0025a6d8(param_1);
              return puVar14 + 2;
            }
            puVar14 = (undefined4 *)puVar14[3];
            if (puVar14 == puVar5) break;
            uVar13 = puVar14[1];
          }
        }
        puVar6 = puVar5 + 2;
        if ((int)uVar10 < 0x3f) {
          puVar6 = puVar5 + 4;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
        if ((uVar10 & 3) == 0) break;
        puVar14 = (undefined4 *)puVar6[3];
        puVar5 = puVar6;
      }
      uVar7 = uVar4 << 1;
      puVar14 = (undefined4 *)(&DAT_002a6618 + iVar2);
      do {
        puVar5 = puVar14 + -2;
        if ((uVar16 & 3) == 0) {
          DAT_002a661c = DAT_002a661c & ~(uint)uVar4;
          break;
        }
        puVar6 = (undefined4 *)*puVar14;
        uVar16 = uVar16 - 1;
        puVar14 = puVar5;
      } while (puVar6 == puVar5);
      uVar3 = (ulong)DAT_002a661c;
      if ((uVar3 < uVar7) || (uVar7 == 0)) break;
      iVar2 = uVar10 * 8;
      uVar4 = uVar7;
      uVar16 = uVar10;
      if ((uVar7 & uVar3) == 0) {
        do {
          uVar7 = uVar7 << 1;
          uVar16 = uVar16 + 4;
        } while ((uVar7 & uVar3) == 0);
        iVar2 = uVar16 * 8;
        uVar4 = uVar7;
      }
    } while( true );
  }
  uVar10 = *(uint *)(PTR_DAT_002a6620 + 4) & 0xfffffffc;
  if (uVar10 < uVar17) {
    uVar7 = -(ulong)(uVar17 - uVar10);
  }
  else {
    uVar7 = (ulong)(uVar10 - uVar17);
  }
  if (((*(uint *)(PTR_DAT_002a6620 + 4) & 0xfffffffc) < uVar17) || ((long)uVar7 < 0x10)) {
    FUN_00259af8(param_1,uVar17);
    uVar10 = *(uint *)(PTR_DAT_002a6620 + 4) & 0xfffffffc;
    if (uVar10 < uVar17) {
      uVar7 = -(ulong)(uVar17 - uVar10);
    }
    else {
      uVar7 = (ulong)(uVar10 - uVar17);
    }
    if (((*(uint *)(PTR_DAT_002a6620 + 4) & 0xfffffffc) < uVar17) || ((long)uVar7 < 0x10)) {
      FUN_0025a6d8(param_1);
      return (undefined4 *)0x0;
    }
  }
  *(uint *)(PTR_DAT_002a6620 + 4) = uVar17 | 1;
  *(uint *)(PTR_DAT_002a6620 + uVar17 + 4) = (uint)uVar7 | 1;
  puVar12 = PTR_DAT_002a6620;
  PTR_DAT_002a6620 = PTR_DAT_002a6620 + uVar17;
LAB_0025a49c:
  FUN_0025a6d8(param_1);
  return (undefined4 *)(puVar12 + 8);
}

