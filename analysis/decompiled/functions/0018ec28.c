/* Ghidra pseudocode. PS2 address: 0018ec28. Not validated source. */

long FUN_0018ec28(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  
  lVar2 = FUN_0018dc18();
  lVar3 = FUN_0018dd28(param_1);
  if (lVar3 != 0) {
    return lVar2;
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  iVar5 = (int)param_1;
  if ((*(int *)(iVar5 + 0x14) != 0) && (*(int *)(iVar5 + 0x18) != 0)) {
    lVar2 = FUN_0018dd60(param_1);
    if (lVar2 == 0x4b00) {
      puVar4 = *(uint **)(iVar5 + 0x1c);
      goto LAB_0018ecb4;
    }
    lVar2 = FUN_0018dd60(param_1);
    if (lVar2 == 0x4d00) {
      puVar4 = *(uint **)(iVar5 + 0x1c);
      goto LAB_0018ecb4;
    }
  }
  lVar2 = FUN_0018dd60(param_1);
  if (lVar2 != 0xd) {
    return 0;
  }
  puVar4 = *(uint **)(iVar5 + 0x1c);
LAB_0018ecb4:
  iVar5 = *(int *)(iVar5 + 4);
  iVar1 = *(int *)(iVar5 + 0x114);
  *puVar4 = *puVar4 ^ 1;
  (**(code **)(iVar1 + 0x24))(iVar5 + *(short *)(iVar1 + 0x20),param_1);
  return 0;
}

