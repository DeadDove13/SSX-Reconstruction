/* Ghidra pseudocode. PS2 address: 00120610. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00120700) */

void FUN_00120610(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  float fVar6;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  piVar5 = (int *)param_1;
  lVar4 = FUN_00120cf0(param_1,piVar5 + 0x226,&iStack_60,(uint)&iStack_60 | 4,(uint)&iStack_60 | 8);
  if ((lVar4 == 0) || (iStack_60 == 0)) {
    fVar6 = -*(float *)(*piVar5 + 0x128);
    fVar6 = fVar6 + fVar6;
    if (fVar6 < -1.0) {
      fVar6 = -1.0;
    }
    else if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    if (DAT_002c19d4 < ABS(fVar6)) {
      uVar2 = *param_2;
    }
    else {
      bVar1 = *(byte *)(*(int *)(*piVar5 + 0x394) + 0x1d);
      iVar3 = FUN_002109e0();
      if ((int)(uint)bVar1 <= iVar3 % 100 + -0x10) {
        return;
      }
      *param_2 = *param_2 | 0x10;
      if ((float)piVar5[0x22e] == 0.0) {
        piVar5[0x22e] = (int)fVar6;
      }
      fVar6 = -1.0;
      if ((float)piVar5[0x22e] < 0.0) {
        fVar6 = 1.0;
      }
      uVar2 = *param_2;
    }
    *param_2 = uVar2 & 0xfffff03f | ((int)(fVar6 * 31.0) & 0x3fU) << 6;
  }
  else {
    *param_2 = *param_2 | 2;
    FUN_001217d8(param_1,uStack_5c,uStack_58);
  }
  return;
}

