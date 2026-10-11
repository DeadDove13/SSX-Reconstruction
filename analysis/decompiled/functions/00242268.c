/* Ghidra pseudocode. PS2 address: 00242268. Not validated source. */

void FUN_00242268(ushort *param_1,int param_2,undefined4 param_3,int param_4,undefined1 param_5,
                 undefined4 *param_6)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar5 = DAT_002a47d4;
  if ((DAT_002a47d0 < 0) || (iVar3 = DAT_002a47d4, DAT_002a47d0 == param_2)) {
    iVar3 = DAT_002a47d4 + 1;
    if (DAT_002a47d4 < 8) {
      iVar3 = DAT_002a47d4 * 0x3c;
      iVar10 = 0xb;
      iVar4 = DAT_002a47d4 * 0xf;
      DAT_002a47d0 = param_2;
      DAT_002a47d4 = DAT_002a47d4 + 1;
      (&DAT_002a495c)[iVar4] = param_3;
      (&DAT_002a4960)[iVar5 * 0xf] = param_4;
      (&DAT_002a4964)[iVar3] = param_5;
      puVar6 = &DAT_002a4968 + iVar5 * 0xf;
      do {
        uVar2 = *param_6;
        iVar10 = iVar10 + -1;
        param_6 = param_6 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (-1 < iVar10);
      (&DAT_002a4965)[iVar5 * 0x3c] = 1;
      uVar9 = (uint)(*(byte *)(param_4 + 3) >> 2);
      if (uVar9 != 0) {
        puVar8 = &DAT_002a47e0 + DAT_002a47d8 * 4;
        uVar11 = uVar9;
        puVar7 = param_1;
        do {
          uVar11 = uVar11 - 1;
          puVar8[-2] = *puVar7;
          puVar8[-1] = puVar7[1];
          puVar1 = puVar7 + 3;
          puVar7 = puVar7 + 4;
          *puVar8 = (ushort)*(byte *)((int)param_1 + (byte)*puVar1 + 0x62);
          puVar8 = puVar8 + 4;
        } while (uVar11 != 0);
      }
      DAT_002a47d8 = DAT_002a47d8 + uVar9;
      iVar3 = DAT_002a47d4;
    }
  }
  DAT_002a47d4 = iVar3;
  return;
}

