/* Ghidra pseudocode. PS2 address: 001ba7a8. Not validated source. */

void FUN_001ba7a8(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = FUN_001a36e8(*(undefined4 *)(DAT_002859e4 + 0x30));
  if ((((**(int **)(iVar1 + 0x174) == 0) &&
       (iVar1 = FUN_001a3790(*(undefined4 *)(DAT_002859e4 + 0x30)), *(int *)(iVar1 + 0x178) != 2))
      && (iVar1 = FUN_001a3760(*(undefined4 *)(DAT_002859e4 + 0x30)), *(int *)(iVar1 + 0x178) != 2))
     && ((*(int *)(DAT_002859e4 + 0x2c) == 0 || (*(int *)(*(int *)(DAT_002859e4 + 0x2c) + 0xc) == 5)
         ))) {
    fVar4 = (float)DAT_002915f0;
    iVar3 = 0x90;
    fVar5 = 480.0 / (float)DAT_002915f4;
    for (iVar1 = 0; iVar1 < *(int *)(DAT_002859e4 + 0x298); iVar1 = iVar1 + 1) {
      FUN_001bcf68(param_1,iVar1);
      piVar2 = (int *)(DAT_002859e4 + iVar3);
      iVar3 = iVar3 + 0x80;
      FUN_001baaa8((float)piVar2[1] * fVar5,(float)*piVar2 * (640.0 / fVar4),
                   (float)piVar2[2] * (640.0 / fVar4),(float)piVar2[3] * fVar5,param_1,iVar1);
    }
  }
  return;
}

