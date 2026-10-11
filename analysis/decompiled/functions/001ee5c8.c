/* Ghidra pseudocode. PS2 address: 001ee5c8. Not validated source. */

void FUN_001ee5c8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)param_1;
  puVar3[0x1984] = param_2;
  uVar1 = FUN_001ebc48(param_1,(uint)(param_2 * 0xa0) >> 3);
  puVar3[0x1961] = uVar1;
  if (0 < param_2) {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)(iVar4 + puVar3[0x1961]);
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[1] = &DAT_002bbe48;
      puVar2[3] = 0;
      param_2 = param_2 + -1;
      (*(code *)PTR_FUN_002bbe5c)((int)puVar2 + (int)DAT_002bbe58,*puVar3);
      *(undefined4 **)(iVar4 + puVar3[0x1961] + 0x10) = puVar3 + 0x1973;
      iVar4 = iVar4 + 0x14;
    } while (param_2 != 0);
  }
  return;
}

