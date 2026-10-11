/* Ghidra pseudocode. PS2 address: 00241ef8. Not validated source. */

void FUN_00241ef8(undefined8 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined1 auStack_c0 [12];
  byte abStack_b4 [4];
  int iStack_b0;
  uint uStack_ac;
  int iStack_a8;
  
  if (DAT_002c5b20 != (code *)0x0) {
    uStack_ac = (uint)(*(byte *)(param_2 + 3) >> 2);
    if (uStack_ac != 0) {
      iStack_a8 = param_2 + 4;
      iVar5 = 0;
      iStack_b0 = param_3;
      do {
        iVar6 = 0;
        iVar8 = iVar5 + 1;
        iVar4 = iVar5 + iStack_b0;
        pbVar7 = (byte *)(param_2 + (uint)*(byte *)(iStack_a8 + iVar5) * 4 + 4);
        pbVar1 = pbVar7;
        do {
          if (*pbVar1 >> 4 != 0xf) {
            uVar2 = FUN_00242930(param_1);
            lVar3 = FUN_00243898(*(undefined4 *)
                                  ((short)(&DAT_002a47dc)[iVar4 * 4] * 4 + DAT_002c5b30),
                                 (&DAT_002a47e0)[iVar4 * 4],auStack_c0);
            if (lVar3 != 0) {
              (*DAT_002c5b20)(*(undefined2 *)param_1,uVar2,1 << (abStack_b4[iVar6] & 0x1f));
            }
          }
          iVar6 = iVar6 + 1;
          pbVar1 = pbVar7 + iVar6;
        } while (iVar6 < 4);
        iVar5 = iVar8;
      } while (iVar8 < (int)uStack_ac);
    }
  }
  return;
}

