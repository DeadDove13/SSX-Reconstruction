/* Ghidra pseudocode. PS2 address: 0022ed70. Not validated source. */

int FUN_0022ed70(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar6 = (int)param_1;
  lVar3 = 0x20;
  if (param_2 < 0x21) {
    lVar3 = param_2;
  }
  iVar7 = (int)lVar3;
  lVar3 = (**(code **)(*(int *)(iVar6 + 0x34) + 4))
                    (*(int *)(iVar6 + 0x34),lVar3,DAT_002a1c14,DAT_002a1c18,0);
  if (lVar3 < 1) {
    *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar6 + 0x10);
    iVar7 = 0;
    if (DAT_002a1b30._5_1_ != 0) {
      do {
        iVar10 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *(undefined4 *)(iVar6 + 0x14 + iVar10) = *(undefined4 *)(iVar6 + 0x24 + iVar10);
      } while (iVar7 < (int)(uint)DAT_002a1b30._5_1_);
    }
    iVar7 = 0;
  }
  else {
    fVar11 = *(float *)(iVar6 + 0x10);
    iVar10 = 0;
    fVar14 = (fVar11 - *(float *)(iVar6 + 0xc)) / (float)iVar7;
    if (DAT_002a1b30._5_1_ != 0) {
      iVar9 = iVar6 + 0x14;
      iVar8 = 0;
      do {
        iVar5 = 0;
        fVar11 = *(float *)(iVar9 + iVar8);
        fVar12 = *(float *)(iVar6 + 0x24 + iVar8);
        if (0 < iVar7) {
          do {
            pcVar2 = DAT_002a1ca0;
            iVar1 = *(int *)((int)&DAT_002a1c2c + iVar8);
            iVar4 = DAT_002a1c18 + iVar5 * 2;
            *(float *)(iVar9 + iVar8) = *(float *)(iVar9 + iVar8) + (fVar12 - fVar11) / (float)iVar7
            ;
            (*pcVar2)(1,iVar4,iVar1 + iVar5 * 4);
            pcVar2 = DAT_002a1b44;
            if (iVar10 == DAT_002a1b30._5_1_ - 1) {
              fVar13 = *(float *)(iVar6 + 0xc) + fVar14;
              *(float *)(iVar6 + 0xc) = fVar13;
              *(float *)(iVar6 + 8) = fVar13 * *(float *)(iVar6 + 4) * 1.5;
              if (pcVar2 != (code *)0x0) {
                (*pcVar2)(param_1,1,DAT_002a1c18 + iVar5 * 2,iVar5);
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar7);
        }
        iVar10 = iVar10 + 1;
        *(undefined4 *)(iVar9 + iVar8) = *(undefined4 *)(iVar6 + 0x24 + iVar8);
        iVar8 = iVar10 * 4;
      } while (iVar10 < (int)(uint)DAT_002a1b30._5_1_);
      fVar11 = *(float *)(iVar6 + 0x10);
    }
    *(float *)(iVar6 + 0xc) = fVar11;
  }
  return iVar7;
}

