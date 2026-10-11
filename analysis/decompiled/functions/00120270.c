/* Ghidra pseudocode. PS2 address: 00120270. Not validated source. */

void FUN_00120270(undefined8 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined4 *puStack_40;
  uint uStack_3c;
  
  piVar6 = (int *)param_1;
  iVar1 = *piVar6;
  iVar5 = *(int *)(*(int *)(iVar1 + 0x82f4) + 0x34);
  uStack_3c = 0;
  iVar1 = (**(code **)(iVar5 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x2b0),*(float *)(iVar1 + 0x2b4) + 50.0,
                     *(int *)(iVar1 + 0x82f4) + (int)*(short *)(iVar5 + 8),&puStack_40,
                     (uint)&puStack_40 | 4,0);
  iVar5 = 0;
  do {
    if (iVar1 <= iVar5) {
      iVar1 = *piVar6;
LAB_00120350:
      fVar7 = (float)FUN_0011f008(param_1,iVar1 + 0x2d0);
      uVar2 = *param_2;
      uVar3 = ((int)(fVar7 * 31.0) & 0x3fU) << 0x10;
      *param_2 = uVar2 & 0xffc0ffff | uVar3;
      uVar4 = ((int)((float)piVar6[0x22e] * 31.0) & 0x3fU) << 4;
      *param_2 = uVar2 & 0xffc0fc0f | uVar3 | uVar4;
      *param_2 = uVar2 & 0xffc0000f | uVar3 | uVar4 |
                 ((int)((float)piVar6[0x22f] * 31.0) & 0x3fU) << 10;
      return;
    }
    if (*(int *)*puStack_40 == 0xe) {
      if ((uStack_3c & 0x4000) == 0) {
        iVar1 = *piVar6;
      }
      else {
        uVar2 = *param_2;
        if (*(float *)(*piVar6 + 0xe0) < (float)piVar6[0x226] - DAT_002c19d0) {
          *param_2 = uVar2 | 8;
          uVar2 = *param_2;
        }
        *param_2 = uVar2 | 2;
        iVar1 = *piVar6;
      }
      goto LAB_00120350;
    }
    puStack_40 = puStack_40 + 1;
    iVar5 = iVar5 + 1;
  } while( true );
}

