/* Ghidra pseudocode. PS2 address: 0018f380. Not validated source. */

void FUN_0018f380(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = 0;
  do {
    iVar1 = (int)param_1;
    if (iVar3 == *(int *)(iVar1 + 0x14)) {
      uStack_14 = param_2[3];
      uStack_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      FUN_00192200(param_1,&uStack_20,*(undefined4 *)(iVar1 + 0x10),0,0x2b4610);
      return;
    }
    puVar2 = (undefined4 *)(iVar3 * 8 + *(int *)(iVar1 + 0x18));
    iVar3 = iVar3 + 1;
  } while (**(int **)(iVar1 + 0x1c) != puVar2[1]);
  uStack_14 = param_2[3];
  uStack_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  FUN_00192200(param_1,&uStack_20,*(undefined4 *)(iVar1 + 0x10),0,*puVar2);
  return;
}

