/* Ghidra pseudocode. PS2 address: 00120cf0. Not validated source. */

undefined4 FUN_00120cf0(int *param_1,float *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piStack_70;
  undefined4 uStack_6c;
  
  iVar4 = *param_1;
  iVar5 = *(int *)(*(int *)(iVar4 + 0x82f4) + 0x34);
  uStack_6c = 0;
  iVar4 = (**(code **)(iVar5 + 0xc))
                    (*(undefined4 *)(iVar4 + 0x2b0),*(float *)(iVar4 + 0x2b4) + 300.0,
                     *(int *)(iVar4 + 0x82f4) + (int)*(short *)(iVar5 + 8),&piStack_70,
                     (uint)&piStack_70 | 4,0);
  fVar3 = DAT_002c1a20;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = (int *)*piStack_70;
      iVar5 = iVar5 + 1;
      if (*piVar1 == 0xe) {
        uVar2 = piVar1[1];
        iVar4 = *param_1;
        *param_4 = (int)uVar2 >> 1 & 1;
        *param_5 = uVar2 & 1;
        *param_2 = (float)((int)uVar2 >> 2) * fVar3;
        *param_3 = (uint)((float)piVar1[2] <= *(float *)(iVar4 + 0x2b4));
        return 1;
      }
      piStack_70 = piStack_70 + 1;
    } while (iVar5 < iVar4);
  }
  return 0;
}

