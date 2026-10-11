/* Ghidra pseudocode. PS2 address: 00120f18. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00121048) */
/* WARNING: Removing unreachable block (ram,0x00120f58) */
/* WARNING: Removing unreachable block (ram,0x00120f84) */
/* WARNING: Removing unreachable block (ram,0x00121080) */

undefined4 FUN_00120f18(int *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (1 < *(int *)(*param_1 + 0x170) - 2U) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 0x3c != 0) {
      return 0;
    }
    iVar3 = FUN_002109e0();
    if (iVar3 % 100 < 0) {
      fVar6 = (float)param_1[0x227];
    }
    else {
      fVar6 = (float)param_1[0x227];
    }
    if (fVar6 == 1.0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 1.0 - fVar6 / DAT_002c1a28;
    }
    if (20.0 < (float)(uint)(iVar3 % 100) * fVar6) {
      return 0;
    }
    if (DAT_0027ba88 == 0) {
      bVar1 = *(byte *)(*(int *)(*param_1 + 0x394) + 0xf);
      iVar3 = FUN_002109e0();
      if ((int)(uint)bVar1 <= iVar3 % 100 + -0x5a) {
        return 0;
      }
    }
    else {
      bVar1 = *(byte *)(*(int *)(*param_1 + 0x394) + 0xf);
      iVar3 = FUN_002109e0();
      if ((int)(uint)bVar1 <= iVar3 % 100 + -0x30) {
        return 0;
      }
    }
    iVar3 = 0;
    while (iVar3 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c)) {
      iVar2 = *param_1;
      if (iVar3 == *(int *)(iVar2 + 0x390)) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar4 = iVar2 + iVar3 * 0x10;
        if (*(float *)(iVar4 + 0x2c) < 200.0) {
          fVar7 = *(float *)(iVar2 + 0x140) - *(float *)(iVar4 + 0x30);
          fVar5 = fVar7 * DAT_002c1a2c + 0.5;
          fVar6 = (float)(int)fVar5;
          if (fVar5 < fVar6) {
            fVar6 = fVar6 - 1.0;
          }
          fVar7 = fVar7 - fVar6 * DAT_002c1a30;
          fVar6 = ABS(fVar7);
          if (DAT_002c1a34 < fVar6) {
            if (fVar6 < DAT_002c1a38) {
              *param_2 = (uint)(0.0 < fVar7);
              return 1;
            }
            iVar3 = iVar3 + 1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
        }
        else {
          iVar3 = iVar3 + 1;
        }
      }
    }
  }
  return 0;
}

