/* Ghidra pseudocode. PS2 address: 00159478. Not validated source. */

void FUN_00159478(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = (int)param_1;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  if (*(int *)(*(int *)(iVar4 + 8) + 0x278) == 4) {
    if (*(uint *)(iVar4 + 0x14) < 0x18) {
      DAT_0027ec00 = 0xffffffff;
      DAT_0027ec04 = FUN_002109b0();
      piVar5 = &DAT_0027ec08;
      iVar3 = 0;
      iVar6 = 0x16;
      do {
        iVar6 = iVar6 + -1;
        if ((&DAT_0027c380)[iVar3 * 0xf] == **(int **)(*(int *)(iVar4 + 0x10) + 0x18)) {
          iVar3 = iVar3 + 1;
        }
        *piVar5 = iVar3;
        iVar1 = FUN_002109b0();
        iVar3 = iVar3 + 1;
        piVar5[1] = iVar1;
        piVar5 = piVar5 + 2;
      } while (-1 < iVar6);
      FUN_0025a770(0x27ec00,0x18,8,0x1593a0);
      *(undefined4 *)(iVar4 + 0x14) = 0x18;
    }
    while (lVar2 = FUN_0015a498(param_1), lVar2 == 0) {
      FUN_0015a5a0(param_1);
      FUN_0015a6b0(param_1);
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    }
    return;
  }
  FUN_0015a460(param_1);
  return;
}

