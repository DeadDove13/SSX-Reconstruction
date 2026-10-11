/* Ghidra pseudocode. PS2 address: 00196e20. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00196e44) */

undefined4 FUN_00196e20(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1;
  if (*(int *)(iVar8 + 0xc) < 1) {
    lVar5 = FUN_00196c30(param_1);
    if (lVar5 == 0) {
      return 0;
    }
    *(int *)(iVar8 + 8) = (int)lVar5;
    *(undefined4 *)(iVar8 + 0xc) = 1;
  }
  else {
    iVar1 = (*(int *)(iVar8 + 0xc) + -1) % 200;
    iVar7 = 0;
    piVar4 = (int *)(iVar1 * 4 + *(int *)(iVar8 + 8));
    do {
      piVar4 = piVar4 + 1;
      if (*param_2 != *piVar4) {
        bVar3 = true;
        goto LAB_00196e90;
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 1;
    } while (iVar7 < 1);
    bVar3 = false;
LAB_00196e90:
    if (!bVar3) {
      pcVar6 = (char *)(*(int *)(iVar8 + 8) + 0x324 + iVar1);
      cVar2 = *pcVar6;
      if (cVar2 != -1) {
        *pcVar6 = cVar2 + '\x01';
        return 1;
      }
    }
    FUN_00196d58(param_1);
  }
  return 1;
}

