/* Ghidra pseudocode. PS2 address: 00120e20. Not validated source. */

undefined4 FUN_00120e20(int *param_1,float *param_2,uint *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piStack_50;
  undefined4 uStack_4c;
  
  iVar2 = *param_1;
  iVar3 = *(int *)(*(int *)(iVar2 + 0x82f4) + 0x34);
  uStack_4c = 0;
  iVar2 = (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x2b0),*(float *)(iVar2 + 0x2b4) + 600.0,
                     *(int *)(iVar2 + 0x82f4) + (int)*(short *)(iVar3 + 8),&piStack_50,
                     (uint)&piStack_50 | 4,0);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = (int *)*piStack_50;
      if (*piVar1 == 0x10) {
        iVar2 = *param_1;
        *param_2 = (float)piVar1[1] * DAT_002c1a24;
        *param_3 = (uint)((float)piVar1[2] <= *(float *)(iVar2 + 0x2b4));
        return 1;
      }
      iVar3 = iVar3 + 1;
      piStack_50 = piStack_50 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}

