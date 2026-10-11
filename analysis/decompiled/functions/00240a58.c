/* Ghidra pseudocode. PS2 address: 00240a58. Not validated source. */

int FUN_00240a58(int param_1,uint param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  undefined4 uStack_d0;
  undefined1 auStack_cc [4];
  int *piStack_c8;
  int iStack_c4;
  uint uStack_c0;
  int iStack_bc;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_b0;
  int iStack_ac;
  
  iVar9 = 0;
  puVar8 = &DAT_002a4b60;
  uVar7 = 0xffffffff;
  iStack_c4 = param_1;
  uStack_c0 = param_2;
  iStack_bc = FUN_00208800();
  uStack_b8 = 0;
  iStack_bc = iStack_bc + DAT_002c5b48;
  uStack_b0 = 0;
  iStack_ac = 0;
  iStack_b4 = -1;
  do {
    if (((*(char *)((int)puVar8 + 0x3a) != '\0') && (*(byte *)((int)puVar8 + 0x3b) == uStack_c0)) &&
       (*(short *)(puVar8 + 0xf) == 0)) {
      bVar2 = false;
      bVar3 = false;
      lVar10 = 1;
      puVar1 = *(undefined2 **)(&DAT_002a4ba0 + iStack_ac);
      if (iStack_c4 != 0) {
        lVar10 = FUN_00240a00(*puVar1,iStack_c4);
      }
      uVar6 = iStack_bc - puVar8[0xd];
      if (((ushort)puVar1[1] != 0) && (bVar2 = true, uVar6 <= (ushort)puVar1[1])) {
        bVar2 = false;
      }
      if ((DAT_002c5b44 == 1) && ((*(byte *)(puVar1 + 5) & 1) != 0)) {
        bVar3 = false;
        FUN_00240370(*puVar1,&uStack_d0,auStack_cc);
        lVar4 = FUN_002403d8(uStack_d0,&piStack_c8);
        if ((lVar4 != 0) && (bVar3 = true, *(ushort *)(*piStack_c8 + 0xe) <= (ushort)puVar1[2])) {
          bVar3 = false;
        }
      }
      if (bVar2) {
        FUN_00240e60(iVar9);
      }
      else if (((lVar10 != 0) && (!bVar3)) &&
              ((uVar5 = (uint)(ushort)puVar1[2], (int)uStack_b8 < (int)uVar5 ||
               ((uVar5 == uStack_b8 &&
                ((uVar5 = uStack_b8, uVar6 < uVar7 ||
                 ((uVar6 == uVar7 && (uStack_b0 < *(ushort *)(puVar8 + 0xe))))))))))) {
        uStack_b8 = uVar5;
        uStack_b0 = (uint)(ushort)(&DAT_002a4b98)[iVar9 * 0x20];
        uVar7 = uVar6;
        iStack_b4 = iVar9;
      }
    }
    iVar9 = iVar9 + 1;
    iStack_ac = iStack_ac + 0x40;
    puVar8 = puVar8 + 0x10;
  } while (iVar9 < 0x10);
  return iStack_b4;
}

