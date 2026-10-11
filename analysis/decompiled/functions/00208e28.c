/* Ghidra pseudocode. PS2 address: 00208e28. Not validated source. */

void FUN_00208e28(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)param_1;
  iVar3 = 0;
  if (0 < (int)puVar6[0x27]) {
    piVar4 = puVar6 + 0x28;
    do {
      if (*piVar4 == 0) {
        iVar2 = puVar6[0x27];
      }
      else {
        FUN_00208a98(*piVar4,3);
        iVar2 = puVar6[0x27];
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  if (0 < (int)puVar6[0x26]) {
    puVar5 = puVar6 + 0x22;
    uVar1 = *puVar5;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      FUN_0023a998(uVar1);
      if ((int)puVar6[0x26] <= iVar3) break;
      uVar1 = *puVar5;
    }
  }
  FUN_0020a540(DAT_002c5bcc,*puVar6);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

