/* Ghidra pseudocode. PS2 address: 001f8378. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001f8470) */
/* WARNING: Removing unreachable block (ram,0x001f8538) */

void FUN_001f8378(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  FUN_002048f8();
  if (DAT_002859e4 != 0) {
    FUN_00203d78(param_1);
    iVar3 = (int)param_1;
    switch(*(undefined4 *)(iVar3 + 0x8bb6c)) {
    case 2:
      lVar4 = FUN_0020a7d0(param_1,2);
      if (3 < lVar4) {
        return;
      }
      FUN_001f8b30(param_1,3);
      return;
    case 3:
      lVar4 = FUN_00240e48(0);
      if (lVar4 < 2) {
        FUN_001f2f68(param_1);
        FUN_001f3078(param_1);
      }
      lVar4 = FUN_0020a7d0(param_1,2);
      if (lVar4 < 2) {
        uVar1 = (**(code **)(*(int *)(iVar3 + 0x32000) + 0x1c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x32000) + 0x18));
        iVar2 = ((uVar1 & 0x7fff) << 3) / 0x7fff + 8;
        if (DAT_0027ba84 == 9) {
          iVar2 = *(int *)(iVar3 + 0xa421c);
          *(int *)(iVar3 + 0xa421c) = iVar2 + 1;
          if (0xf < iVar2 + 1) {
            *(undefined4 *)(iVar3 + 0xa421c) = 0;
          }
        }
        FUN_0020a780(param_1,2,0,iVar2,0);
        return;
      }
      break;
    case 4:
      lVar4 = FUN_00240e48(0);
      if (lVar4 < 2) {
        FUN_001f2f68(param_1);
        FUN_001f3078(param_1);
      }
      lVar4 = FUN_0020a7d0(param_1,2);
      if (lVar4 < 2) {
        uVar1 = (**(code **)(*(int *)(iVar3 + 0x32000) + 0x1c))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 0x32000) + 0x18));
        iVar2 = ((uVar1 & 0x7fff) << 3) / 0x7fff + 8;
        if (DAT_0027ba84 == 9) {
          iVar2 = *(int *)(iVar3 + 0xa421c);
          *(int *)(iVar3 + 0xa421c) = iVar2 + 1;
          if (0xf < iVar2 + 1) {
            *(undefined4 *)(iVar3 + 0xa421c) = 0;
          }
        }
        FUN_0020a780(param_1,2,0,iVar2,0);
        return;
      }
      break;
    case 6:
      iVar3 = *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c);
      if (iVar3 < 2) {
        if (DAT_0027ba84 != 10) {
          iVar3 = FUN_001f8290(param_1);
          fVar5 = *(float *)(iVar3 + 0x1c) * 1.5;
          if ((1.0 <= fVar5) || (0.0 <= fVar5)) {
            fVar6 = 1.0;
            if (fVar5 < 1.0) {
              fVar6 = fVar5;
            }
          }
          else {
            fVar6 = 0.0;
          }
          FUN_002070d8(param_1,(int)(fVar6 * 99.0));
        }
      }
      else {
        iVar2 = FUN_001f8290(param_1);
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          trap(7);
        }
        iVar3 = 99 - ((*(int *)(iVar2 + 0x9c) + -1) * 99) / iVar3;
        if (99 < iVar3) {
          iVar3 = 99;
        }
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        FUN_002070d8(param_1,iVar3);
      }
      FUN_001fd5f8(param_1);
      return;
    }
  }
  return;
}

