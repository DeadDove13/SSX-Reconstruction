/* Ghidra pseudocode. PS2 address: 0012f528. Not validated source. */

void FUN_0012f528(uint *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*param_1 != param_2) && (*param_1 = param_2, param_2 < 0xc)) {
    iVar1 = FUN_002109b0();
    iVar3 = 3;
    if (*(int *)(&DAT_002aa050 + param_2 * 8) == 0) {
      trap(7);
    }
    piVar2 = (int *)((&PTR_DAT_002aa054)[param_2 * 2] +
                    (iVar1 % *(int *)(&DAT_002aa050 + param_2 * 8)) * 0x14);
    FUN_001f2850(DAT_002c56e8,*piVar2);
    FUN_0012f698(param_1 + 1);
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 != 0) {
        FUN_0012f708(param_1 + 1);
      }
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

