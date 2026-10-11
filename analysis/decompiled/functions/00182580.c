/* Ghidra pseudocode. PS2 address: 00182580. Not validated source. */

undefined4 FUN_00182580(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[3] == param_1[4]) {
    uVar3 = 0;
  }
  else {
    iVar6 = 0;
    iVar5 = *param_1 + param_1[3] * param_1[1];
    if (0 < param_1[5]) {
      piVar4 = param_1 + 6;
      do {
        iVar6 = iVar6 + 1;
        iVar2 = *(int *)(*piVar4 + 0x34);
        (**(code **)(iVar2 + 0x4c))(*piVar4 + (int)*(short *)(iVar2 + 0x48),iVar5);
        iVar2 = *piVar4;
        piVar4 = piVar4 + 1;
        iVar1 = *(int *)(iVar2 + 0x34);
        iVar2 = (**(code **)(iVar1 + 0x3c))(iVar2 + *(short *)(iVar1 + 0x38));
        iVar5 = iVar5 + iVar2;
      } while (iVar6 < param_1[5]);
    }
    uVar3 = 1;
    if (param_1[2] == 0) {
      trap(7);
    }
    param_1[3] = (param_1[3] + 1) % param_1[2];
  }
  return uVar3;
}

