/* Ghidra pseudocode. PS2 address: 0015a890. Not validated source. */

void FUN_0015a890(int param_1,short param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  do {
    puVar7 = (undefined2 *)(*(int *)(iVar6 + 0x1c) + iVar5 * 4 + 100);
    sVar1 = *(short *)(*(int *)(iVar6 + 0x1c) + iVar5 * 4 + 100);
    sVar3 = puVar7[1] + param_2;
    puVar7[1] = sVar3;
    if (((sVar1 == 8) && (7 < iVar5)) && (*(int *)(DAT_0027e848 + 8) <= (int)sVar3)) {
      iVar6 = 1;
      if (*(int *)(DAT_0027e84c + 8) <= (int)sVar3) {
        piVar4 = &DAT_0027e84c;
        iVar6 = 2;
        while ((piVar4 = piVar4 + 1, iVar6 < 8 &&
               ((long)*(int *)(*piVar4 + 8) <= (long)(short)puVar7[1]))) {
          iVar6 = iVar6 + 1;
        }
      }
      if (iVar6 != 8) {
        iVar2 = FUN_002109b0();
        if (iVar6 == 0) {
          trap(7);
        }
        if (iVar2 % iVar6 == 0) goto LAB_0015a9b4;
      }
      *puVar7 = *(undefined2 *)(&DAT_0027e848)[iVar6 + -1];
    }
LAB_0015a9b4:
    if (0x17 < iVar5 + 1) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar5 = iVar5 + 1;
  } while( true );
}

