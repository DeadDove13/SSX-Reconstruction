/* Ghidra pseudocode. PS2 address: 00102570. Not validated source. */

void FUN_00102570(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  float fVar10;
  
  iVar9 = (int)param_2;
  iVar5 = 0;
  if (0 < *(int *)(iVar9 + 0x8c)) {
    puVar6 = (undefined4 *)(iVar9 + 200);
    uVar1 = *puVar6;
    while( true ) {
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
      FUN_00107db8(uVar1);
      if (*(int *)(iVar9 + 0x8c) <= iVar5) break;
      uVar1 = *puVar6;
    }
  }
  FUN_00103df8(param_1,param_2);
  FUN_001037f0(param_1,param_2);
  if ((DAT_0027ba88 == 3) || (DAT_0027ba88 == 5)) {
    fVar10 = *(float *)(iVar9 + 0x14) - DAT_002c1004;
    *(float *)(iVar9 + 0x14) = fVar10;
    bVar3 = false;
    if (fVar10 <= 0.0) {
      iVar5 = 0;
      *(undefined4 *)(iVar9 + 0x14) = 0;
      if (0 < *(int *)(iVar9 + 0x8c)) {
        piVar7 = (int *)(iVar9 + 200);
        iVar2 = *piVar7;
        while( true ) {
          iVar5 = iVar5 + 1;
          piVar7 = piVar7 + 1;
          if (*(int *)(iVar2 + 0x348) < 0) {
            bVar3 = true;
          }
          FUN_0010a1b8();
          if (*(int *)(iVar9 + 0x8c) <= iVar5) break;
          iVar2 = *piVar7;
        }
      }
    }
    if (bVar3) {
      FUN_001f20d8(DAT_002c56e8);
    }
  }
  else {
    *(float *)(iVar9 + 0x14) = *(float *)(iVar9 + 0x14) + DAT_002c1008;
  }
  if (*(int *)(DAT_002859e4 + 0x2c) == 0) {
    lVar4 = 1;
    if (*(int *)(iVar9 + 0x80) < 1) {
      iVar5 = 0;
      if (0 < *(int *)(iVar9 + 0x8c)) {
        puVar6 = (undefined4 *)(iVar9 + 200);
        uVar1 = *puVar6;
        while( true ) {
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 1;
          lVar4 = FUN_0010a100(uVar1);
          if ((*(int *)(iVar9 + 0x8c) <= iVar5) || (lVar4 == 0)) break;
          uVar1 = *puVar6;
        }
      }
    }
    else {
      iVar5 = 0;
      if (0 < *(int *)(iVar9 + 0x80)) {
        puVar8 = (undefined4 *)(iVar9 + 0x90);
        puVar6 = (undefined4 *)*puVar8;
        while( true ) {
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
          lVar4 = FUN_0010a100(*puVar6);
          if ((*(int *)(iVar9 + 0x80) <= iVar5) || (lVar4 == 0)) break;
          puVar6 = (undefined4 *)*puVar8;
        }
      }
    }
    if (lVar4 != 0) {
      (**(code **)(*(int *)(iVar9 + 8) + 0xa4))
                (iVar9 + *(short *)(*(int *)(iVar9 + 8) + 0xa0),0xffffffffffffffff);
    }
  }
  return;
}

