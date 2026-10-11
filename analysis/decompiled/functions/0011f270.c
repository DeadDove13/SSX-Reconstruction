/* Ghidra pseudocode. PS2 address: 0011f270. Not validated source. */

void FUN_0011f270(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  int *piVar4;
  uint *puVar5;
  float fVar6;
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar4 = (int *)param_1;
  fVar6 = (float)FUN_0011f008(param_1,*piVar4 + 0x2d0);
  puVar5 = (uint *)param_2;
  *puVar5 = *puVar5 & 0xffffc0ff | ((int)(fVar6 * 31.0) & 0x3fU) << 8;
  lVar2 = FUN_00120e20(param_1,piVar4 + 0x226,aiStack_50);
  if (lVar2 != 0) {
    if ((float)piVar4[0x226] + DAT_002c1970 < *(float *)(*piVar4 + 0xe0)) {
      if (aiStack_50[0] != 0) {
        *puVar5 = *puVar5 & 0xfc0fffff | 0x1f00000;
      }
    }
    else {
      fVar6 = (float)piVar4[0x226] - DAT_002c1970;
      if ((float)piVar4[0x227] != 1.0) {
        fVar6 = ((float)piVar4[0x227] / DAT_002c1974) * fVar6;
      }
      if (*(float *)(*piVar4 + 0xe0) < fVar6) {
        if (aiStack_50[0] == 0) {
          FUN_001219d8(param_1,param_2);
        }
        else {
          FUN_00121a60(param_1);
        }
      }
    }
    goto LAB_0011f3fc;
  }
  if ((float)piVar4[0x227] == 1.0) {
    if (1.0 <= *(float *)(*piVar4 + 0x1c)) {
      uVar1 = *puVar5;
LAB_0011f3e4:
      *puVar5 = uVar1 | 0x10;
    }
  }
  else if (1.0 <= *(float *)(*piVar4 + 0x1c) * ((float)piVar4[0x227] / DAT_002c1978)) {
    uVar1 = *puVar5;
    goto LAB_0011f3e4;
  }
  FUN_001219d8(param_1,param_2);
LAB_0011f3fc:
  lVar2 = FUN_00120cf0(param_1,piVar4 + 0x226,(uint)aiStack_50 | 4,(uint)aiStack_50 | 8,
                       (uint)aiStack_50 | 0xc);
  if (lVar2 == 0) {
    lVar2 = FUN_001211a8(param_1,aiStack_40);
    if (lVar2 != 0) {
      if (aiStack_40[0] == 0) {
        uVar3 = 2;
        *(undefined8 *)(piVar4 + 0x234) = DAT_00277bb0;
      }
      else {
        *(undefined8 *)(piVar4 + 0x234) = DAT_00277bb8;
        uVar3 = 3;
      }
      *(undefined2 *)(piVar4 + 0x233) = uVar3;
    }
  }
  else {
    piVar4[0x230] = -1;
    *(undefined8 *)(piVar4 + 0x234) = DAT_00277ba0;
    *(undefined2 *)(piVar4 + 0x233) = 0;
  }
  return;
}

