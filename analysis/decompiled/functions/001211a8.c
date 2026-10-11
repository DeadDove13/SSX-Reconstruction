/* Ghidra pseudocode. PS2 address: 001211a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0012126c) */

uint FUN_001211a8(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  piVar4 = (int *)param_1;
  if (-1 < piVar4[0x230]) {
    if ((DAT_002c1a3c < *(float *)(*piVar4 + piVar4[0x230] * 0x10 + 0x2c)) ||
       (500.0 < *(float *)(*piVar4 + 0x2b8))) {
      piVar4[0x230] = -1;
      iVar5 = piVar4[0x230];
    }
    else {
      iVar5 = piVar4[0x230];
    }
    if (-1 < iVar5) {
      uVar2 = piVar4[0x230];
      goto LAB_001213b4;
    }
  }
  if (*(float *)(*piVar4 + 0x2b8) < 450.0) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 0xc != 0) {
      uVar2 = piVar4[0x230];
      goto LAB_001213b4;
    }
    fVar9 = 1.0;
    iVar5 = 0;
    fVar11 = DAT_002c1a40;
    while (iVar5 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c)) {
      if (iVar5 == *(int *)(*piVar4 + 0x390)) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar1 = FUN_00189b78(DAT_002859e4,iVar5);
        iVar1 = *(int *)(*(int *)(iVar1 + 0x394) + 0x50);
        if ((iVar1 == *(int *)(*(int *)(*piVar4 + 0x394) + 0x50)) && (iVar1 != 8)) {
          iVar5 = iVar5 + 1;
        }
        else {
          fVar10 = *(float *)(*piVar4 + iVar5 * 0x10 + 0x2c);
          if (fVar10 <= 500.0) {
            lVar3 = FUN_001213f0(param_1,iVar5);
            fVar6 = *(float *)(*piVar4 + iVar5 * 0x10 + 0x30) - *(float *)(*piVar4 + 0x140);
            fVar7 = fVar6 * DAT_002c1a44 + 0.5;
            fVar8 = (float)(int)fVar7;
            if (fVar7 < fVar8) {
              fVar8 = fVar8 - fVar9;
            }
            fVar6 = (float)FUN_00218328(fVar6 - fVar8 * DAT_002c1a48);
            if (lVar3 == 0) {
              fVar6 = fVar9 - fVar6;
            }
            else {
              fVar6 = ABS(fVar6) + fVar9;
            }
            fVar10 = fVar10 * fVar6;
            if (fVar10 <= fVar11) {
              *param_2 = (int)lVar3;
              piVar4[0x230] = iVar5;
              iVar5 = iVar5 + 1;
              fVar11 = fVar10;
            }
            else {
              iVar5 = iVar5 + 1;
            }
          }
          else {
            iVar5 = iVar5 + 1;
          }
        }
      }
    }
  }
  uVar2 = piVar4[0x230];
LAB_001213b4:
  return ~uVar2 >> 0x1f;
}

