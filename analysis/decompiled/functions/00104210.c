/* Ghidra pseudocode. PS2 address: 00104210. Not validated source. */

void FUN_00104210(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  long lVar8;
  int iVar9;
  
  iVar4 = 0;
  while( true ) {
    iVar2 = iVar4 * 4;
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c) <= iVar4) break;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(*(int *)(*(int *)(DAT_002859e4 + 0x14) + iVar2 + 200) + 0x36c) = 0xffffffff;
  }
  iVar4 = 0;
  if (0 < DAT_0029a7ac) {
    do {
      iVar2 = 0;
      if (iVar4 != 0xffff) {
        iVar2 = *(int *)(iVar4 * 8 + DAT_00299cd4);
      }
      iVar4 = iVar4 + 1;
      if (iVar2 != 0) {
        iVar9 = 0;
        while (iVar9 < (int)*(short *)(DAT_00299cc8 + 0x42) * (int)*(short *)(DAT_00299cc8 + 0x42))
        {
          iVar6 = *(int *)(iVar2 + 4) + iVar9 * 0x30;
          iVar9 = iVar9 + 1;
          if (iVar6 != 0) {
            lVar8 = 0;
            if (0 < *(short *)(iVar6 + 4)) {
              puVar7 = (ushort *)(*(int *)(iVar2 + 8) + *(short *)(iVar6 + 0x10) * 4 + 2);
              do {
                iVar5 = *(int *)(iVar2 + 0xc) + (uint)*puVar7 * 0x110;
                uVar3 = *(uint *)(iVar5 + 0xe8) & 0xffff0000 | (int)*(uint *)(iVar5 + 0xe8) >> 0x10
                        | 2;
                *(uint *)(iVar5 + 0xe8) = uVar3;
                if (((uVar3 ^ 1) & 1) != 0) {
                  iVar1 = *(int *)(*(int *)(iVar5 + 0xcc) * 8 + DAT_00299ce0);
                  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
                }
                iVar1 = *(int *)(iVar5 + 0x100);
                if (iVar1 != 0) {
                  (**(code **)(*(int *)(iVar1 + 8) + 0xc))
                            (iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
                  *(undefined4 *)(iVar5 + 0x100) = 0;
                }
                lVar8 = (long)((int)lVar8 + 1);
                puVar7 = puVar7 + 2;
              } while (lVar8 < *(short *)(iVar6 + 4));
            }
          }
        }
      }
    } while (iVar4 < DAT_0029a7ac);
  }
  return;
}

