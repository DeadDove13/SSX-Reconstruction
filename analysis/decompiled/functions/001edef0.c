/* Ghidra pseudocode. PS2 address: 001edef0. Not validated source. */

void FUN_001edef0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar3;
  
  uVar1 = FUN_001ebc48(param_1,(uint)(param_2 * 0x1a0) >> 3);
  puVar4 = (undefined4 *)param_1;
  puVar4[3] = uVar1;
  if (0 < param_2) {
    iVar6 = 0;
    iVar3 = puVar4[3];
    iVar5 = param_2;
    while( true ) {
      puVar2 = (undefined4 *)(iVar6 + iVar3);
      *puVar2 = 0;
      puVar2[1] = &DAT_002bbe78;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[5] = 0;
      iVar6 = iVar6 + 0x34;
      iVar5 = iVar5 + -1;
      (*(code *)PTR_FUN_002bbe8c)((int)puVar2 + (int)DAT_002bbe88,*puVar4);
      if (iVar5 == 0) break;
      iVar3 = puVar4[3];
    }
  }
  puVar4[2] = param_2;
  return;
}

