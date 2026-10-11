/* Ghidra pseudocode. PS2 address: 00227da8. Not validated source. */

undefined4 FUN_00227da8(ulong param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  uVar3 = 0xfffffff6;
  if (DAT_0029a888 != '\0') {
    if (param_1 < 8) {
      iVar6 = (&DAT_0029a7e8)[(int)param_1];
    }
    else {
      iVar6 = 0;
    }
    uVar3 = 0xfffffff8;
    if (iVar6 != 0) {
      FUN_002250c0();
      bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) +
                       (uint)*(byte *)(*(short *)(iVar6 + 2) * 0x1c + *(int *)(iVar6 + 0xa4)) *
                       (uint)*(byte *)(*(int *)(iVar6 + 0xa0) + 7) + param_2);
      uVar4 = FUN_00229740(*(int *)(iVar6 + 0x14) + (uint)bVar1 * 4,4);
      lVar5 = FUN_0022e9e0(*(undefined4 *)(iVar6 + 0xa8),100,iVar6 + 0x18,uVar4);
      *(int *)(iVar6 + 0xc) = (int)lVar5;
      if (lVar5 < 0) {
        FUN_002250a0();
        uVar3 = 0xffffffee;
      }
      else {
        *(ushort *)(iVar6 + 2) = (ushort)bVar1;
        if (*(char *)(iVar6 + 4) == '\0') {
          *(undefined1 *)(iVar6 + 5) = 1;
        }
        else {
          *(undefined1 *)(iVar6 + 5) =
               *(undefined1 *)((uint)bVar1 * 0x1c + *(int *)(iVar6 + 0xa4) + 2);
        }
        piVar2 = *(int **)(iVar6 + 0xac);
        *(undefined2 *)(iVar6 + 0x9a) = 0;
        piVar2[1] = *(int *)(iVar6 + 0xc);
        *(undefined2 *)(iVar6 + 0x9e) = 0;
        *(undefined2 *)(iVar6 + 0x9c) = 0xffff;
        *piVar2 = (int)*(short *)(iVar6 + 2);
        *(undefined1 *)(iVar6 + 9) = 1;
        *(undefined2 *)(iVar6 + 0x98) = 0xffff;
        FUN_002250a0();
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

