/* Ghidra pseudocode. PS2 address: 00154b78. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00154be8) */

undefined4 FUN_00154b78(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = *(int *)(&DAT_00284e18 + *param_1 * 4);
  iVar4 = iVar2 * 0x32;
  iVar6 = iVar2 * 0x32 + 0x32;
  if (iVar4 < iVar6) {
    piVar7 = (int *)(&DAT_0028412c + iVar2 * 400);
    do {
      if (*piVar7 == param_2) {
        uVar1 = iVar4 % 0x32;
        uVar3 = (int)uVar1 < 0x1f ^ 1;
        uVar5 = uVar1 - 0x1e;
        if (uVar3 == 0) {
          uVar5 = uVar1;
        }
        if ((((param_1[uVar3 + 3] >> (uVar5 & 0x1f) ^ 1U) & 1) != 0) &&
           (((param_1[uVar3 + 1] >> (uVar5 & 0x1f) ^ 1U) & 1) != 0)) {
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar4 < iVar6);
  }
  return 1;
}

