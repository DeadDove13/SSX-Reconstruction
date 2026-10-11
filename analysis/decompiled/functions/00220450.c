/* Ghidra pseudocode. PS2 address: 00220450. Not validated source. */

bool FUN_00220450(int param_1,int *param_2,long param_3,undefined4 *param_4,undefined4 *param_5,
                 float *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [8];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float afStack_a0 [4];
  
  iVar5 = 0;
  fVar8 = DAT_002c3f44;
  fVar7 = (float)(**(code **)(*(int *)(param_1 + 0x40) + 0x1c))
                           (param_1 + *(short *)(*(int *)(param_1 + 0x40) + 0x18));
  if (0 < *param_2) {
    do {
      iVar1 = param_2[4];
      piVar4 = (int *)(iVar5 * 0xc + param_2[3]);
      iVar2 = iVar1 + *piVar4 * 0x10;
      if (param_3 == 0) {
        lVar3 = (**(code **)(*(int *)(param_1 + 0x40) + 0x2c))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x40) + 0x28),iVar2,
                           iVar1 + piVar4[1] * 0x10,iVar1 + piVar4[2] * 0x10,
                           param_2[5] + iVar5 * 0x10,auStack_c0,auStack_b0,afStack_a0);
      }
      else {
        lVar3 = (**(code **)(*(int *)(param_1 + 0x40) + 0x34))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x40) + 0x30),iVar2);
      }
      if ((lVar3 != 0) &&
         (fVar6 = fVar8 - fVar7, fVar8 = afStack_a0[0], ABS(afStack_a0[0] - fVar7) < ABS(fVar6))) {
        *param_4 = auStack_c0._0_4_;
        param_4[1] = auStack_c0._4_4_;
        param_4[2] = uStack_b8;
        param_4[3] = uStack_b4;
        *param_5 = auStack_b0._0_4_;
        param_5[1] = auStack_b0._4_4_;
        param_5[2] = uStack_a8;
        param_5[3] = uStack_a4;
        *param_6 = afStack_a0[0];
        if (fVar7 < 0.0) {
          return true;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
  }
  return fVar8 != DAT_002c3f48;
}

