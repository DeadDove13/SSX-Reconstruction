/* Ghidra pseudocode. PS2 address: 0022e198. Not validated source. */

undefined4 FUN_0022e198(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    iVar2 = (&DAT_002a1b10)[param_1];
    FUN_002250c0();
    if ((int)*(short *)(iVar2 + 0xc) < *(short *)(iVar2 + 0x10) + -1) {
      puVar5 = (undefined4 *)
               (iVar2 + ((int)((uint)*(ushort *)(iVar2 + 0x16) << 0x10) >> 0xc) + 0x38);
      puVar5[1] = *(undefined4 *)(param_2 + 4);
      *puVar5 = *(undefined4 *)(iVar2 + 4);
      iVar8 = 0;
      if (*(char *)(iVar2 + 0x2e) == '\0') {
        iVar9 = *(int *)(param_2 + 4);
      }
      else {
        iVar9 = *(int *)(param_2 + 4);
        iVar6 = 0;
        do {
          iVar4 = iVar8 * 4;
          psVar7 = (short *)(iVar2 + 0xc + iVar6);
          sVar1 = *psVar7;
          iVar6 = iVar8 + 2;
          iVar8 = iVar8 + 1;
          puVar5[iVar6] = *(undefined4 *)(param_2 + 0xc + iVar4);
          *psVar7 = sVar1 + 1;
          iVar6 = iVar8 * 2;
        } while (iVar8 < (int)(uint)*(byte *)(iVar2 + 0x2e));
      }
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + iVar9;
      uVar3 = *(undefined4 *)(iVar2 + 4);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      *(short *)(iVar2 + 0x16) = *(short *)(iVar2 + 0x16) + 1;
      *(undefined1 *)(iVar2 + 0x13) = 1;
      if ((int)((uint)*(ushort *)(iVar2 + 0x10) << 0x10) <=
          (int)((uint)*(ushort *)(iVar2 + 0x16) << 0x10)) {
        *(undefined2 *)(iVar2 + 0x16) = 0;
      }
    }
    else {
      uVar3 = 0xfffffff3;
    }
    FUN_002250a0();
  }
  return uVar3;
}

