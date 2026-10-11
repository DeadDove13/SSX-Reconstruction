/* Ghidra pseudocode. PS2 address: 0012cf38. Not validated source. */

void FUN_0012cf38(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_00122680();
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x24;
  *(undefined4 *)(param_1 + 0x30) = 0xdeadbf00;
  FUN_001973f0(param_2,param_1 + 0x2c,0x24);
  if (*(int *)(param_1 + 0x34) < 1) {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0x2f0);
    do {
      iVar3 = iVar3 + 1;
      FUN_00197e68(param_2,*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x34));
    iVar3 = *(int *)(param_1 + 0x38);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    puVar1 = (undefined4 *)(param_1 + 0x300);
    do {
      iVar2 = iVar2 + 1;
      FUN_00197e68(param_2,*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x38));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    puVar1 = (undefined4 *)(param_1 + 0x310);
    do {
      iVar3 = iVar3 + 1;
      FUN_00197e68(param_2,*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x3c));
  }
  return;
}

