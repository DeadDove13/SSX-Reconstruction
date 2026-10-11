/* Ghidra pseudocode. PS2 address: 0011f4a8. Not validated source. */

void FUN_0011f4a8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  float fVar6;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  piVar4 = (int *)param_1;
  lVar3 = FUN_00120cf0(param_1,piVar4 + 0x226,&iStack_40,(uint)&iStack_40 | 4,(uint)&iStack_40 | 8);
  if (lVar3 == 0) {
    *(undefined8 *)(piVar4 + 0x234) = DAT_00277ba8;
    *(undefined2 *)(piVar4 + 0x233) = 1;
    FUN_0011f270(param_1,param_2);
    return;
  }
  fVar6 = (float)FUN_0011f008(param_1,*piVar4 + 0x2d0);
  puVar5 = (uint *)param_2;
  *puVar5 = *puVar5 & 0xffffc0ff | ((int)(fVar6 * 31.0) & 0x3fU) << 8;
  if (iStack_40 == 0) {
    iVar2 = *piVar4;
LAB_0011f5ac:
    fVar6 = (float)piVar4[0x226];
  }
  else {
    iVar2 = *piVar4;
    if (*(float *)(iVar2 + 0x2b8) < DAT_002c197c) {
      if (ABS(fVar6) < DAT_002c1980) {
        FUN_001217d8(param_1,uStack_3c,uStack_38);
        uVar1 = *puVar5 | 2;
        goto LAB_0011f604;
      }
      goto LAB_0011f5ac;
    }
    fVar6 = (float)piVar4[0x226];
  }
  if (*(float *)(iVar2 + 0xe0) < fVar6 - DAT_002c1984) {
    FUN_00121a60(param_1,param_2);
    return;
  }
  if (*(float *)(iVar2 + 0xe0) <= fVar6 + DAT_002c1984) {
    return;
  }
  uVar1 = *puVar5 & 0xfc0fffff | 0x1f00000;
LAB_0011f604:
  *puVar5 = uVar1;
  return;
}

