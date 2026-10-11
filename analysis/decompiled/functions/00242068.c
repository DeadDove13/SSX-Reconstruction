/* Ghidra pseudocode. PS2 address: 00242068. Not validated source. */

void FUN_00242068(int param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined4 auStack_b0 [4];
  
  iVar8 = 0;
  auStack_b0[0] = 0;
  uVar5 = (uint)(*(byte *)(param_1 + 3) >> 2);
  if (uVar5 != 0) {
    psVar7 = &DAT_002a47dc + param_3 * 4;
    do {
      sVar1 = *psVar7;
      iVar3 = *(int *)(sVar1 * 4 + DAT_002c5b30);
      sVar2 = psVar7[2];
      if (((*(byte *)(iVar3 + 4) & 0xf0) != 0) && (DAT_002c5b38 != 0)) {
        FUN_00241478(iVar3,sVar2);
      }
      lVar4 = FUN_00243898(iVar3,sVar2,&iStack_e0);
      if (lVar4 != 0) {
        iVar6 = iStack_dc;
        if (psVar7[1] != -1) {
          iVar6 = (int)psVar7[1] * (uint)*(ushort *)(iVar3 + 8) * (*(byte *)(iVar3 + 7) + 1) * 0x100
                  + iStack_dc;
        }
        iVar8 = iVar8 + iStack_e0;
        FUN_00240498(param_2,auStack_b0);
        iStack_c8 = iStack_e0;
        uStack_c0 = auStack_b0[0];
        uStack_bc = (uint)*(ushort *)(iVar3 + 2);
        uStack_c4 = (undefined4)param_2;
        iStack_d0 = (int)sVar1;
        iStack_cc = iVar6;
        (*DAT_002c5b18)(&iStack_d0);
        FUN_002430b0(iVar3,sVar2);
      }
      uVar5 = uVar5 - 1;
      psVar7 = psVar7 + 4;
    } while (uVar5 != 0);
  }
  FUN_002417e0(iVar8);
  return;
}

