/* Ghidra pseudocode. PS2 address: 0022e550. Not validated source. */

int FUN_0022e550(undefined4 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = -10;
  if (DAT_0029a888 != '\0') {
    iVar5 = 0;
    piVar3 = &DAT_002a1b10;
    piVar6 = piVar3;
    do {
      if (*piVar3 == 0) {
        lVar2 = FUN_00233f80(iVar5,param_3);
        if (lVar2 < 0) {
          return -6;
        }
        iVar1 = FUN_00233f78();
        puVar4 = (undefined4 *)((int)param_3 + iVar1);
        iVar1 = FUN_00233f78();
        *piVar6 = (int)puVar4;
        puVar4[8] = (int)param_3;
        *(short *)(puVar4 + 4) = (short)((param_4 - iVar1) - 0x48U >> 4);
        *puVar4 = 0xffffffff;
        puVar4[9] = param_1;
        puVar4[10] = param_2;
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar5 < 8);
    iVar5 = -9;
  }
  return iVar5;
}

