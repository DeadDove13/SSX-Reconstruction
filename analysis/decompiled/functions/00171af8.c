/* Ghidra pseudocode. PS2 address: 00171af8. Not validated source. */

undefined4 FUN_00171af8(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_90;
  undefined4 auStack_8c [3];
  
  FUN_0016dc60();
  iVar9 = (int)param_1;
  iVar7 = *(int *)(iVar9 + 0xb90);
  if (iVar7 == 0) {
    iVar3 = *(int *)(iVar9 + 4);
LAB_00171bdc:
    uVar4 = (**(code **)(iVar3 + 0x74))
                      (iVar9 + *(short *)(iVar3 + 0x70),
                       *(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c));
    iVar3 = *(int *)(iVar9 + 4);
    sVar1 = *(short *)(iVar3 + 0x98);
    uVar6 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c));
    DAT_002c4910 = (**(code **)(iVar3 + 0x9c))
                             (iVar9 + sVar1,uVar6,*(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c));
    if ((uVar4 & 0x880) == 0) {
      if ((uVar4 & 0x120) == 0) {
        uVar2 = 0;
        if ((uVar4 & 0x10) != 0) {
          FUN_001faea0(DAT_002c56e8);
          FUN_00168030(*(undefined4 *)(iVar9 + 0xb3c));
          FUN_001707a8(param_1,7,0xffffffffffffffff);
          iVar7 = *(int *)(iVar9 + 0xb3c);
LAB_00171d88:
          uVar2 = 4;
          *(undefined4 *)(iVar7 + 0x4f4) = 1;
        }
      }
      else {
        FUN_001faea0(DAT_002c56e8);
        iVar7 = *(int *)(iVar9 + 0xb3c);
        *(undefined4 *)(iVar7 + *(int *)(iVar7 + 0x46c) * 4 + 0x474) = 0;
        FUN_00168030(iVar7);
        uVar2 = 3;
      }
    }
    else {
      uVar8 = 0;
      puVar10 = &DAT_00280fa0;
      do {
        iVar3 = FUN_0016f348(param_1,*(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c));
        if (iVar3 == (&DAT_00280fa4)[uVar8 * 2]) {
          lVar5 = FUN_00154578(0x27a598,*puVar10);
          if (lVar5 == 0) {
            FUN_001fafa8(DAT_002c56e8);
          }
          else {
            FUN_001faea0(DAT_002c56e8);
            *(undefined4 *)(iVar9 + 0xb30) = 1;
            uVar2 = *(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c);
            *(undefined4 *)(iVar9 + 0xb34) = 1;
            FUN_00170480(param_1,uVar2);
            iVar3 = *(int *)(iVar9 + 0xb3c);
            *(undefined4 *)(iVar3 + *(int *)(iVar3 + 0x46c) * 4 + 0x47c) = 1;
            FUN_00168348(iVar3,&uStack_90,auStack_8c);
            FUN_001707a8(param_1,uStack_90,auStack_8c[0]);
            if (iVar7 == 0) {
              iVar7 = *(int *)(iVar9 + 0xb3c);
              goto LAB_00171d88;
            }
            lVar5 = FUN_0017aba8(iVar7);
            if (lVar5 != 1) {
              iVar7 = *(int *)(iVar9 + 0xb3c);
              goto LAB_00171d88;
            }
            *(undefined4 *)(iVar9 + 0xba0) = 1;
          }
        }
        uVar8 = uVar8 + 1;
        puVar10 = puVar10 + 2;
      } while (uVar8 < 8);
      uVar2 = 0;
    }
  }
  else {
    FUN_00171688(param_1,*(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c),iVar7);
    FUN_0017bd48(iVar7);
    uVar4 = FUN_001703b8(param_1,*(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x46c));
    if (*(int *)(iVar9 + 0xba0) == 1) {
      lVar5 = FUN_0017ab70(iVar7);
      if (lVar5 != 0) {
        FUN_0017abc8(iVar7);
        *(undefined4 *)(iVar9 + 0xba0) = 2;
      }
joined_r0x00171bb8:
      if ((uVar4 & 0x880) == 0) {
        return 0;
      }
    }
    else {
      if (*(int *)(iVar9 + 0xba0) != 2) {
        iVar3 = *(int *)(iVar9 + 4);
        goto LAB_00171bdc;
      }
      lVar5 = FUN_0017ab70(iVar7);
      if (lVar5 == 0) goto joined_r0x00171bb8;
    }
    FUN_00168030(*(undefined4 *)(iVar9 + 0xb3c));
    uVar2 = 4;
    *(undefined4 *)(*(int *)(iVar9 + 0xb3c) + 0x4f4) = 1;
  }
  return uVar2;
}

