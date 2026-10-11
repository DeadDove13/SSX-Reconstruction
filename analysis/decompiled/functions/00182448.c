/* Ghidra pseudocode. PS2 address: 00182448. Not validated source. */

void FUN_00182448(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < param_1[5]) {
      piVar3 = param_1 + 6;
      iVar5 = *piVar3;
      while( true ) {
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
        (**(code **)(*(int *)(iVar5 + 0x34) + 0x44))
                  (iVar5 + *(short *)(*(int *)(iVar5 + 0x34) + 0x40),0);
        if (param_1[5] <= iVar4) break;
        iVar5 = *piVar3;
      }
    }
  }
  else {
    iVar5 = 0;
    iVar4 = *param_1 + param_1[4] * param_1[1];
    if (0 < param_1[5]) {
      piVar3 = param_1 + 6;
      do {
        iVar5 = iVar5 + 1;
        iVar2 = *(int *)(*piVar3 + 0x34);
        (**(code **)(iVar2 + 0x44))(*piVar3 + (int)*(short *)(iVar2 + 0x40),iVar4);
        iVar2 = *piVar3;
        piVar3 = piVar3 + 1;
        iVar1 = *(int *)(iVar2 + 0x34);
        iVar2 = (**(code **)(iVar1 + 0x3c))(iVar2 + *(short *)(iVar1 + 0x38));
        iVar4 = iVar4 + iVar2;
      } while (iVar5 < param_1[5]);
    }
    if (param_1[2] == 0) {
      trap(7);
    }
    param_1[4] = (param_1[4] + 1) % param_1[2];
  }
  return;
}

