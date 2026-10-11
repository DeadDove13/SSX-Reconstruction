/* Ghidra pseudocode. PS2 address: 0020dff0. Not validated source. */

undefined4 FUN_0020dff0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  if (*(int *)(*(int *)(iVar6 + 0xa0) + 8) != 0) {
    uVar1 = FUN_0020dac0();
    *(undefined4 *)(*(int *)(iVar6 + 0xa0) + 0x28) = uVar1;
  }
  lVar2 = FUN_0020f1b0(*(undefined4 *)(param_2 + 0x20),param_1,param_2 + 0x10,iVar6 + 0x90,0,0,
                       param_3,param_4);
  uVar1 = 0;
  if (lVar2 != 0) {
    if (*(int *)(param_2 + 0x28) == 0) {
LAB_0020e088:
      uVar1 = 1;
    }
    else {
      iVar5 = 0;
      if (0 < *(int *)(param_2 + 0x28)) {
        puVar4 = (undefined4 *)(param_2 + 0x40);
        iVar3 = param_2 + 0x30;
        do {
          lVar2 = FUN_0020f1b0(*puVar4,param_1,iVar3,iVar6 + 0x90,0,0,param_3,param_4);
          iVar5 = iVar5 + 1;
          if (lVar2 != 0) goto LAB_0020e088;
          puVar4 = puVar4 + 8;
          iVar3 = iVar3 + 0x20;
        } while (iVar5 < *(int *)(param_2 + 0x28));
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

