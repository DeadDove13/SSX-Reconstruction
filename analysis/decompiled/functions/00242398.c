/* Ghidra pseudocode. PS2 address: 00242398. Not validated source. */

int FUN_00242398(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = 0;
  lVar3 = FUN_00242370();
  iVar2 = DAT_002a47d4;
  if (lVar3 != 0) {
    iVar6 = 0;
    if (0 < DAT_002a47d4) {
      piVar5 = &DAT_002a4960;
      puVar8 = &DAT_002a4968;
      do {
        iVar1 = piVar5[2];
        FUN_00242990(piVar5[-1],(char)piVar5[1],puVar8);
        FUN_00241ef8(piVar5[-1],*piVar5,iVar7);
        FUN_00242068(*piVar5,iVar1,iVar7);
        iVar7 = iVar7 + (uint)(*(byte *)(*piVar5 + 3) >> 2);
        if (iVar6 == 0) {
          iVar4 = param_1 * 8;
          if (iVar1 == *(int *)(&DAT_002a4f98 + iVar4)) {
            *(int *)(&DAT_002a4f9c + iVar4) = *(int *)(&DAT_002a4f9c + iVar4) + 1;
          }
          else {
            *(int *)(&DAT_002a4f98 + iVar4) = iVar1;
            *(undefined4 *)(&DAT_002a4f9c + iVar4) = 1;
          }
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 0xf;
        puVar8 = puVar8 + 0xf;
      } while (iVar6 < iVar2);
    }
  }
  FUN_002421e0();
  return iVar7;
}

