/* Ghidra pseudocode. PS2 address: 00152df8. Not validated source. */

void FUN_00152df8(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  FUN_001595e0(iVar3 + 0x1648);
  *(undefined4 *)(iVar3 + 0x1670) = 2;
  if (*(int *)(iVar3 + 0x14f0) - 4U < 2) {
    iVar2 = 0;
    puVar1 = (undefined4 *)(iVar3 + 0x1524);
    do {
      iVar2 = iVar2 + 1;
      if ((-1 < *(char *)(puVar1 + -7)) && (0 < *(int *)*puVar1)) {
        *(undefined4 *)(iVar3 + 0x1670) = 8;
        FUN_00156fe0(param_1);
        break;
      }
      puVar1 = puVar1 + 0x14;
    } while (iVar2 < 4);
  }
  iVar3 = 0;
  do {
    FUN_001560d8(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}

