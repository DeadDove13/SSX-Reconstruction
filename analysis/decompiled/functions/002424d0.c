/* Ghidra pseudocode. PS2 address: 002424d0. Not validated source. */

long FUN_002424d0(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  byte bStack_200;
  byte abStack_1ff [111];
  undefined1 auStack_190 [208];
  undefined1 auStack_c0 [4];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  
  pbVar3 = &bStack_200;
  lVar13 = 0;
  auStack_c0[0] = 0;
  piVar14 = (int *)param_1;
  iVar15 = *piVar14;
  uStack_b4 = 0;
  uStack_ac = 0;
  lVar4 = FUN_00240438(iVar15);
  if (((lVar4 != 0) && (lVar5 = FUN_00240498(iVar15,&uStack_bc), lVar5 != 0)) &&
     (lVar5 = FUN_00241a48(lVar4,uStack_bc), lVar5 != 0)) {
    iVar11 = DAT_002c5b44;
    if (DAT_002a4b90 == 1) {
      iVar11 = DAT_002c5b44 + 1;
      if (2 < DAT_002c5b44 + 1) {
        iVar11 = 2;
      }
    }
    iVar10 = (int)lVar4;
    if (((*(byte *)(iVar10 + 10) & 1) == 0) && (iVar11 == 1)) {
      iVar11 = 0;
    }
    if (iVar11 != 0) {
      uStack_ac = FUN_00240528(iVar15);
    }
    uStack_b8 = FUN_00242ac0(lVar4,param_1,auStack_c0);
    FUN_002418d8(lVar4,&bStack_200);
    uVar12 = (uint)*(byte *)(iVar10 + 6);
    if (uVar12 == 0) {
      lVar13 = -1;
    }
    else {
      bVar1 = *(byte *)(iVar10 + 10) >> 3;
      uStack_b0 = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        uVar8 = 1;
        uStack_b4 = 0;
        uVar7 = 0;
        do {
          piVar14 = piVar14 + 1;
          uVar2 = *(uint *)(iVar10 + ((uint)*(byte *)(iVar10 + 6) * 2 + 3 & 0xfffffffc) + 0xc +
                           (*(char *)(iVar10 + 7) * 2 + 3U & 0xfffffffc)) >> ((uVar7 & 0xf) << 1) &
                  3;
          bVar6 = false;
          if (uVar2 == 1) {
            bVar6 = *piVar14 != 0;
          }
          else if ((uVar2 == 2) && (bVar6 = true, *piVar14 == -1)) {
            bVar6 = false;
          }
          if (bVar6) {
            uStack_b4 = uStack_b4 | uVar8;
          }
          uVar7 = uVar7 + 1;
          uVar8 = (uVar8 & 0x7fff) << 1;
        } while ((int)uVar7 < 0xc);
      }
      lVar13 = 0;
      if (uVar12 != 0) {
        iStack_a8 = iVar10 + 0xc;
        iVar15 = 0;
        while( true ) {
          bVar1 = *pbVar3;
          bVar6 = true;
          if (uVar12 <= bVar1) break;
          iVar9 = iVar10 + (uint)*(ushort *)((uint)bVar1 * 2 + iStack_a8) * 4;
          if ((uStack_b0 != 0) &&
             (*(ushort *)
               (iVar10 + ((uint)*(byte *)(iVar10 + 6) * 2 + 3 & 0xfffffffc) +
                (*(char *)(iVar10 + 7) * 2 + 3U & 0xfffffffc) + (uint)bVar1 * 2 + 0x10) != uStack_b4
             )) {
            bVar6 = false;
          }
          if (bVar6) {
            FUN_002421d0(auStack_190);
            lVar5 = FUN_00241ad8(auStack_190,iVar9,param_1,uStack_b8,auStack_c0[0],iVar11);
            if ((0 < lVar5) &&
               (lVar13 = FUN_00241e30(auStack_190,iVar9,iVar11,uStack_ac), lVar13 != 0)) {
              FUN_00242268(auStack_190,uStack_bc,lVar4,iVar9,(uint)bVar1,param_1);
            }
          }
          iVar9 = iVar15 + 1;
          if (lVar13 != 0) {
            return lVar13;
          }
          pbVar3 = abStack_1ff + iVar15;
          iVar15 = iVar9;
          if ((int)uVar12 <= iVar9) {
            return 0;
          }
        }
      }
    }
  }
  return lVar13;
}

