/* Ghidra pseudocode. PS2 address: 00193c38. Not validated source. */

undefined8 FUN_00193c38(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  if ((piVar4[0xe] == 0) || (param_4 != 0)) {
    uVar1 = FUN_00193780(param_1);
    iVar3 = (int)uVar1;
    if (param_2 == 0) {
      if (piVar4[2] == 0) {
        *piVar4 = iVar3;
      }
      else {
        *(int *)(piVar4[2] + 0x28) = iVar3;
        *(int *)(iVar3 + 0x2c) = piVar4[2];
      }
      piVar4[2] = iVar3;
    }
    else {
      for (iVar2 = *piVar4; *(int *)(iVar2 + 0x28) != 0; iVar2 = *(int *)(iVar2 + 0x28)) {
        if (param_3 < *(uint *)(*(int *)(iVar2 + 0x28) + 0x38)) {
          if (*(int *)(iVar2 + 0x28) != 0) {
            *(int *)(*(int *)(iVar2 + 0x28) + 0x2c) = iVar3;
          }
          *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
          goto LAB_00193cc0;
        }
      }
      *(undefined4 *)(iVar3 + 0x28) = 0;
LAB_00193cc0:
      *(int *)(iVar2 + 0x28) = iVar3;
      *(int *)(iVar3 + 0x2c) = iVar2;
      if (*(int *)(iVar3 + 0x28) == 0) {
        piVar4[2] = iVar3;
      }
    }
    FUN_00193d88(param_1,uVar1,param_2,param_3);
    if (param_2 != 0) {
      *(undefined4 *)(iVar3 + 0x30) = 1;
    }
    FUN_00132490(*(undefined4 *)(DAT_002859e4 + 0x28));
    FUN_00132a98(*(undefined4 *)(DAT_002859e4 + 0x28));
  }
  else {
    FUN_00132490(*(undefined4 *)(DAT_002859e4 + 0x28));
    FUN_00132a98(*(undefined4 *)(DAT_002859e4 + 0x28));
    uVar1 = 0;
  }
  return uVar1;
}

