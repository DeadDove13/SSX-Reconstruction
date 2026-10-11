/* Ghidra pseudocode. PS2 address: 001ad7d0. Not validated source. */

void FUN_001ad7d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  FUN_0011ed18(0x295e90,0xe);
  uVar9 = 0x3f800000;
  iVar6 = *(int *)(iVar1 + 0xc);
  iVar3 = FUN_001a0a88(0x3f800000,iVar1,*(undefined4 *)(param_1 + 0x3c4),0);
  iVar5 = 0;
  fVar7 = *(float *)(param_1 + 0x2c4) + 30.0;
  fVar8 = fVar7 + 30.0;
  DAT_0028ad30 = uVar9;
  DAT_0028ad34 = uVar9;
  DAT_0028ad38 = uVar9;
  DAT_0028ad3c = uVar9;
  FUN_001a1368((*(float *)(param_1 + 0x2c0) + *(float *)(param_1 + 0x2b8) * 0.5) -
               (float)iVar3 * 0.5,fVar7,iVar1,*(undefined4 *)(param_1 + 0x3c4));
  uVar2 = DAT_002c3358;
  fVar7 = ((*(float *)(param_1 + 0x2c0) + *(float *)(param_1 + 0x2b8)) - *(float *)(param_1 + 0x2c8)
          ) + 10.0;
  if (0 < *(int *)(param_1 + 0x2d0)) {
    uVar10 = 0;
    piVar4 = (int *)(param_1 + 0x2d4);
    do {
      DAT_0028ad38 = uVar9;
      DAT_0028ad3c = uVar9;
      if (iVar5 == *(int *)(param_1 + 0x2cc)) {
        DAT_0028ad38 = uVar2;
        DAT_0028ad3c = uVar10;
      }
      DAT_0028ad30 = uVar9;
      DAT_0028ad34 = uVar9;
      FUN_001a1368(*(float *)(param_1 + 0x2c0) + 45.0,fVar8,iVar1,piVar4[5]);
      if (*piVar4 == 7) {
        FUN_001a1368(fVar7,fVar8,iVar1,(&DAT_0028aeb0)[piVar4[2]]);
        iVar3 = *(int *)(param_1 + 0x2d0);
      }
      else if (*piVar4 == 9) {
        FUN_001a1470(0x3f800000,fVar7,fVar8,iVar1,
                     DAT_002c56e8 + *(int *)(DAT_002c56e8 + 0x35f80) * 0x20 + 0x35b7c);
        iVar3 = *(int *)(param_1 + 0x2d0);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x2d0);
      }
      iVar5 = iVar5 + 1;
      fVar8 = fVar8 + (float)iVar6 + 4.0;
      piVar4 = piVar4 + 6;
    } while (iVar5 < iVar3);
  }
  return;
}

